using System.Threading;
using Cysharp.Threading.Tasks;
using TensorFlowLite;
using UnityEngine;
using UnityEngine.UI;
[RequireComponent(typeof(CharacterController))]


public sealed class BlazePoseSample : MonoBehaviour
{
    public bool jumper = false;


    public bool DrawStickFigure { get { return _drawStickFigure; } set { _drawStickFigure = value; } }


    [Header("Model files")]
    [SerializeField, FilePopup("*.tflite")] string poseDetectionModelFile = "mediapipe/pose_detection.tflie";
    [SerializeField, FilePopup("*.tflite")] string poseLandmarkModelFile = "mediapipe/pose_landmarks.tflite";


    [Header("Camera Settings")]
    [Tooltip("Used when running on phones or tablets")]
    [SerializeField] bool useFrontFacingCamera;
    [Tooltip("example: FaceTime HD Camera (Built-in) ")]
    [SerializeField] string customCameraName;
    [SerializeField] int resolutionW = 1280;
    [SerializeField] int resolutionH = 720;
    [SerializeField] int frameRate = 30;


    [SerializeField] private bool _drawStickFigure = true;




    [Header("Skeletal objects")]








    // [SerializeField] // for debug raw data
    public Vector4[] worldJoints;


    [Header("GUI Settings")]
    //[SerializeField] private bool _drawStickFigure = false;
    [SerializeField] RawImage cameraView = null;
    [SerializeField] Canvas canvas = null;
    //[SerializeField] Text infoText = null;




    [Header("Other Settings")]
    [SerializeField] bool useLandmarkFilter = true;
    [SerializeField] Vector3 filterVelocityScale = Vector3.one * 10;
    [SerializeField] bool runBackground;
    [SerializeField, Range(0f, 1f)] float visibilityThreshold = 0.5f;






    WebCamTexture webcamTexture;
    PoseDetect poseDetect;
    PoseLandmarkDetect poseLandmark;


    Vector3[] rtCorners = new Vector3[4]; // just cache for GetWorldCorners




    PrimitiveDraw draw;
    PoseDetect.Result poseResult;
    PoseLandmarkDetect.Result landmarkResult;
    UniTask<bool> task;
    CancellationToken cancellationToken;


    bool NeedsDetectionUpdate => poseResult == null || poseResult.score < 0.5f;




    void Start()
    {


        string cameraName = WebCamUtil.FindName(new WebCamUtil.PreferSpec()
        {
            isFrontFacing = true,
            kind = WebCamKind.WideAngle,
        });


        webcamTexture = new WebCamTexture(cameraName, resolutionW, resolutionH, frameRate);


        cameraView.texture = webcamTexture;
        webcamTexture.Play();


        poseDetect = new PoseDetect(poseDetectionModelFile);
        poseLandmark = new PoseLandmarkDetect(poseLandmarkModelFile);




        draw = new PrimitiveDraw(Camera.main, gameObject.layer);
        worldJoints = new Vector4[PoseLandmarkDetect.JointCount];


        cancellationToken = this.GetCancellationTokenOnDestroy();
    }


    void OnDestroy()
    {
        webcamTexture?.Stop();
        poseDetect?.Dispose();
        poseLandmark?.Dispose();
        draw?.Dispose();
    }


    void Update()
    {
        if (runBackground)
        {
            if (task.Status.IsCompleted())
            {
                task = InvokeAsync();
            }
        }
        else
        {
            Invoke();
        }




        if (landmarkResult != null && landmarkResult.score > 0.2f)
        {


            DrawJoints(landmarkResult.joints);


        }


        if (worldJoints != null)
        {
            jumper = false;


            if (worldJoints[PoseLandmarks.RIGHT_INDEX][1] >= 3f) { Debug.Log("YAS"); jumper = true; }






        }


    }




    void DrawJoints(Vector4[] joints)
    {


        Matrix4x4 mtx = WebCamUtil.GetMatrix(-webcamTexture.videoRotationAngle, true, webcamTexture.videoVerticallyMirrored);


        // Update world joints
        var camera = canvas.worldCamera;
        for (int i = 0; i < joints.Length; i++)
        {
            Vector3 p = mtx.MultiplyPoint3x4((Vector3)joints[i]);
            p = camera.ViewportToWorldPoint(new Vector3(p.x, p.y, camera.nearClipPlane + 0.1f));
            worldJoints[i] = new Vector4(p.x, p.y, p.z, joints[i].w);
        }


        if (_drawStickFigure)
        {
            for (int i = 0; i < worldJoints.Length; i++)
            {
                Vector4 p = worldJoints[i];
                if (p.w > visibilityThreshold)
                {
                    draw.Cube(p, 0.2f);
                }
            }
            var connections = PoseLandmarkDetect.Connections;
            for (int i = 0; i < connections.Length; i += 2)
            {
                var a = worldJoints[connections[i]];
                var b = worldJoints[connections[i + 1]];
                if (a.w > visibilityThreshold || b.w > visibilityThreshold)
                {
                    draw.Line3D(a, b, 0.05f);
                }
            }
        }
        draw.Apply();



        float aspectRatio = (float)Screen.width / (float)Screen.height;
        float cameraHeight = camera.orthographicSize * 2;
        float cameraWidth = cameraHeight * aspectRatio;
        transform.localScale = new Vector3(cameraWidth, cameraHeight, 1);
    }
    void Invoke()
    {
        if (NeedsDetectionUpdate)
        {
            poseDetect.Invoke(webcamTexture);
            cameraView.material = poseDetect.transformMat;
            cameraView.rectTransform.GetWorldCorners(rtCorners);
            poseResult = poseDetect.GetResults(0.7f, 0.3f);
        }
        if (poseResult.score < 0)
        {
            poseResult = null;
            landmarkResult = null;
            return;
        }
        poseLandmark.Invoke(webcamTexture, poseResult);




        if (useLandmarkFilter)
        {
            poseLandmark.FilterVelocityScale = filterVelocityScale;
        }
        landmarkResult = poseLandmark.GetResult(useLandmarkFilter);


        if (landmarkResult.score < 0.3f)
        {
            poseResult.score = landmarkResult.score;
        }
        else
        {
            poseResult = PoseLandmarkDetect.LandmarkToDetection(landmarkResult);
        }
    }


    async UniTask<bool> InvokeAsync()
    {
        if (NeedsDetectionUpdate)
        {
            // Note: `await` changes PlayerLoopTiming from Update to FixedUpdate.
            poseResult = await poseDetect.InvokeAsync(webcamTexture, cancellationToken, PlayerLoopTiming.FixedUpdate);
        }
        if (poseResult.score < 0)
        {
            poseResult = null;
            landmarkResult = null;
            return false;
        }


        if (useLandmarkFilter)
        {
            poseLandmark.FilterVelocityScale = filterVelocityScale;
        }
        landmarkResult = await poseLandmark.InvokeAsync(webcamTexture, poseResult, useLandmarkFilter, cancellationToken, PlayerLoopTiming.Update);


        // Back to the update timing from now on
        if (cameraView != null)
        {
            cameraView.material = poseDetect.transformMat;
            cameraView.rectTransform.GetWorldCorners(rtCorners);
        }


        // Generate poseResult from landmarkResult
        if (landmarkResult.score < 0.3f)
        {
            poseResult.score = landmarkResult.score;
        }
        else
        {
            poseResult = PoseLandmarkDetect.LandmarkToDetection(landmarkResult);
        }


        return true;
    }
}
