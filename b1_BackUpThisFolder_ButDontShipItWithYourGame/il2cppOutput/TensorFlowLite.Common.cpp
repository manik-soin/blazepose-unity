#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Func`2<System.Double,System.Double>
struct Func_2_t0221E9CE1FF8B8FE59AED052D562790B96F13B3D;
// System.Func`2<System.Single,System.Single>
struct Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2;
// System.Func`2<UnityEngine.WebCamDevice,System.Int32>
struct Func_2_t0581A63ABD3EA2867D0202D9E2AAE784CF67B792;
// System.Collections.Generic.IEnumerable`1<System.Double>
struct IEnumerable_1_tAB7E6AAC5334AFEE42DB96DB8C245338F041A2DB;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t352FDDEA001ABE8E1D67849D2E2F3D1D75B03D41;
// System.Collections.Generic.IEnumerable`1<UnityEngine.WebCamDevice>
struct IEnumerable_1_t35322D45DFA5DC376529363C16F6F51B3AE674D5;
// System.Linq.IOrderedEnumerable`1<UnityEngine.WebCamDevice>
struct IOrderedEnumerable_1_tF356DAFD570AB45F92DBCC3B065A1DDDD47F64D7;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Boolean>
struct IStateMachineRunnerPromise_1_tE89ECD2876CAE5961DE51F0E207D9EE40476C855;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Boolean>
struct IUniTaskSource_1_tB6B218F9BB467453A6CBAEE053820D3B3E8F891C;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
// UnityEngine.Resolution[]
struct ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5;
// System.SByte[,,]
struct SByteU5BU2CU2CU5D_tCD5C37C6539D2FD986CEE8ACB61C875D22F4A236;
// System.Single[,,]
struct SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233;
// UnityEngine.ComputeShader
struct ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// System.Exception
struct Exception_t;
// TensorFlowLite.FilePopupAttribute
struct FilePopupAttribute_t439E0318DF1A387B062C2813F184DA635F9C88D6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// TensorFlowLite.Interpreter
struct Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520;
// TensorFlowLite.InterpreterOptions
struct InterpreterOptions_t9E95AA774C31B5ACAE144C947B861C026677E487;
// UnityEngine.LightProbeProxyVolume
struct LightProbeProxyVolume_t431001CA94D2BB5DB419E2A89E7D8116E4E1B658;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// TensorFlowLite.PrimitiveDraw
struct PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// TensorFlowLite.TextureResizer
struct TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0;
// TensorFlowLite.TextureToTensor
struct TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// UnityEngine.WebCamTexture
struct WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// TensorFlowLite.MathTF/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tD0A7A62DD0685EE65B6B89A1E872850918FC1649;
// TensorFlowLite.MathTF/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t7C111F35989CF9AD24828A3E960D5D41F65B9E5A;
// TensorFlowLite.PrimitiveDraw/MeshBuffer
struct MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A;
// TensorFlowLite.WebCamUtil/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t469020C7BE69D7D513ABD902B7F70C895FC8789B;

IL2CPP_EXTERN_C RuntimeClass* ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t0221E9CE1FF8B8FE59AED052D562790B96F13B3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t0581A63ABD3EA2867D0202D9E2AAE784CF67B792_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t469020C7BE69D7D513ABD902B7F70C895FC8789B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_tD0A7A62DD0685EE65B6B89A1E872850918FC1649_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t7C111F35989CF9AD24828A3E960D5D41F65B9E5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebCamUtil_t1753B2E6585566680B6308C285F6E255E04AA7C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A0B2CF5DC485D0B8A8A807D0088CF6730FB2BDD;
IL2CPP_EXTERN_C String_t* _stringLiteral0B112A45AF7EB2AA7809D91549390A31A3ECCF64;
IL2CPP_EXTERN_C String_t* _stringLiteral0C8D2CD12448421DD3C31CF4A88C6CBCFD143532;
IL2CPP_EXTERN_C String_t* _stringLiteral179E8064BD0D567C832BC3C24C5979B76547443C;
IL2CPP_EXTERN_C String_t* _stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22;
IL2CPP_EXTERN_C String_t* _stringLiteral186C317106771B7B34F0840738B27A2CE8181156;
IL2CPP_EXTERN_C String_t* _stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA;
IL2CPP_EXTERN_C String_t* _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F;
IL2CPP_EXTERN_C String_t* _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteral6270A9A3CF86F3B615CE7EAC735058FB6089BA94;
IL2CPP_EXTERN_C String_t* _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A;
IL2CPP_EXTERN_C String_t* _stringLiteral7B5024D6C2A93ECDF3DFB54A395211A21F751679;
IL2CPP_EXTERN_C String_t* _stringLiteral81785C0709828B0330D6987D0BC8063ECCA4DE55;
IL2CPP_EXTERN_C String_t* _stringLiteral974EC53FABB83A35680AD82D7F8C49DDE80B63EC;
IL2CPP_EXTERN_C String_t* _stringLiteralA3E134912E4F26F2F6E6B380FC96D32FB257D8FA;
IL2CPP_EXTERN_C String_t* _stringLiteralB249F16D93A7079142DF003DE7DE26B18AFFB480;
IL2CPP_EXTERN_C String_t* _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C;
IL2CPP_EXTERN_C String_t* _stringLiteralB5A4E8096BFAAAF4264E3B6B27A30C2D653DDDC6;
IL2CPP_EXTERN_C String_t* _stringLiteralB82C0D2D51BC7F727346CBAC41D5AC8BAEFEAF34;
IL2CPP_EXTERN_C String_t* _stringLiteralD356BAD4D0F4DD6D4F4A44A9BD87D2917B639F3A;
IL2CPP_EXTERN_C String_t* _stringLiteralEFCDE62CA56D5436F953EEC7C371F60AEF6AFC4A;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F_TisU3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A_m060FB3B72FE4BFB7722E4F5246B79C855C42EFB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9_TisU3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A_m91B23B49A4BFEF74CEF57A77F04D918158406595_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_Create_m541E96A720B74646A67D392E54DECC686529143A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetStateMachine_mCD3C282E048D8E201907EA2CB1B0E7D3DC9095B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_Start_TisU3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A_m58DF46309ED2EA16F84499F1ADB94FFFC6EF3A42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_get_Task_m987FF39A55DF01CB856D3CD4C0DF8AC06F4E338C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisWebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_m56974EDE62B874CC6B3726F57D87F8AA6F85260F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderByDescending_TisWebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m55C9488B3389F49F175FB351233C696203927A9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mBB6C314B4FD7CEDDACCED294B363B341EB3A60FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m22B3C908B58F4B2F196E44A2792A36E1567A2659_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mE862700321AB25179D47FE117A106FA1CD22B8CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_GetRawTextureData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m3F258FE3486B29D798DCFECF41E9845382EF5CC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextureResizer_GetTextureST_m9D94D05540B41F64AF5A9D7DD002C142A7994983_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CFindNameU3Eb__0_m420DA056EF17791A8965D1DA715A9E788ED2F88C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CSoftmaxU3Eb__0_m667C87449D6DE42C436B837D62C09F43FA44895C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CSoftmaxU3Eb__1_m9A767AB9B227CE845F58E7CC476F40C56884CE4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CSoftmaxU3Eb__0_m6E53022C088E9495B43A512F1F1B4FD9CEFBCCA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CSoftmaxU3Eb__1_m41356A7DEB85965B8EADBD136A8246A3657E34B4_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5;
struct SByteU5BU2CU2CU5D_tCD5C37C6539D2FD986CEE8ACB61C875D22F4A236;
struct SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t00392BF1ED23A72EA7691C41EEC54ADB01478324 
{
};

// TensorFlowLite.ArrayExtension
struct ArrayExtension_t9C105F69EDCB24CE74D18D1FCB0C166B3D3C3E3E  : public RuntimeObject
{
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// TensorFlowLite.Color32Extension
struct Color32Extension_tC9E10BCC491E2E61A18B6214EB413849B70B3845  : public RuntimeObject
{
};

// TensorFlowLite.DisposeUtil
struct DisposeUtil_tE8602CC0F58E6DB5477D12B6E0E7BD9815995FF0  : public RuntimeObject
{
};

// TensorFlowLite.FileUtil
struct FileUtil_tA9D694FA6C8EBA9695056563870221D8A33767E2  : public RuntimeObject
{
};

// TensorFlowLite.InterpreterExtension
struct InterpreterExtension_t05239C874D68BC5AA75258E8288C87614AAB3C96  : public RuntimeObject
{
};

// TensorFlowLite.MathTF
struct MathTF_tE4FAFDCCAB083A6F2D931682E4F43B009780F3E4  : public RuntimeObject
{
};

// TensorFlowLite.MatrixExtension
struct MatrixExtension_tA40742D4B1AFB71CA26D0404CD86BB701E139409  : public RuntimeObject
{
};

// TensorFlowLite.PrimitiveDraw
struct PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5  : public RuntimeObject
{
	// UnityEngine.Material TensorFlowLite.PrimitiveDraw::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_0;
	// UnityEngine.MaterialPropertyBlock TensorFlowLite.PrimitiveDraw::mpb
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___mpb_1;
	// TensorFlowLite.PrimitiveDraw/MeshBuffer TensorFlowLite.PrimitiveDraw::cube
	MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A* ___cube_2;
	// TensorFlowLite.PrimitiveDraw/MeshBuffer TensorFlowLite.PrimitiveDraw::quad
	MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A* ___quad_3;
	// UnityEngine.Camera TensorFlowLite.PrimitiveDraw::camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera_4;
	// System.Int32 TensorFlowLite.PrimitiveDraw::layer
	int32_t ___layer_5;
};

// TensorFlowLite.RectExtension
struct RectExtension_tED6E41118A1CA9E2B2786E6933CBF65D2D0B1794  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// TensorFlowLite.TextureToTensor
struct TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2  : public RuntimeObject
{
	// UnityEngine.Texture2D TensorFlowLite.TextureToTensor::fetchTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___fetchTexture_0;
	// UnityEngine.ComputeShader TensorFlowLite.TextureToTensor::compute
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___compute_1;
	// UnityEngine.ComputeBuffer TensorFlowLite.TextureToTensor::tensorBuffer
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___tensorBuffer_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// TensorFlowLite.MathTF/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tD0A7A62DD0685EE65B6B89A1E872850918FC1649  : public RuntimeObject
{
	// System.Single TensorFlowLite.MathTF/<>c__DisplayClass4_0::max
	float ___max_0;
	// System.Single TensorFlowLite.MathTF/<>c__DisplayClass4_0::sum
	float ___sum_1;
};

// TensorFlowLite.MathTF/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t7C111F35989CF9AD24828A3E960D5D41F65B9E5A  : public RuntimeObject
{
	// System.Double TensorFlowLite.MathTF/<>c__DisplayClass5_0::max
	double ___max_0;
	// System.Double TensorFlowLite.MathTF/<>c__DisplayClass5_0::sum
	double ___sum_1;
};

// TensorFlowLite.PrimitiveDraw/MeshBuffer
struct MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A  : public RuntimeObject
{
	// UnityEngine.Mesh TensorFlowLite.PrimitiveDraw/MeshBuffer::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_0;
	// UnityEngine.Matrix4x4[] TensorFlowLite.PrimitiveDraw/MeshBuffer::buffer
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___buffer_1;
	// System.Int32 TensorFlowLite.PrimitiveDraw/MeshBuffer::index
	int32_t ___index_2;
};

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>
struct AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 
{
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::runnerPromise
	RuntimeObject* ___runnerPromise_0;
	// System.Exception Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::ex
	Exception_t* ___ex_1;
	// T Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::result
	bool ___result_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Color32>
struct NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Cysharp.Threading.Tasks.UniTask`1<System.Boolean>
struct UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	bool ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Cysharp.Threading.Tasks.SwitchToThreadPoolAwaitable
struct SwitchToThreadPoolAwaitable_t5608C9A301A9B88DA3F77CB7E2AB2082321CB053 
{
	union
	{
		struct
		{
		};
		uint8_t SwitchToThreadPoolAwaitable_t5608C9A301A9B88DA3F77CB7E2AB2082321CB053__padding[1];
	};
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WebCamDevice
struct WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C 
{
	// System.String UnityEngine.WebCamDevice::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.WebCamDevice::m_DepthCameraName
	String_t* ___m_DepthCameraName_1;
	// System.Int32 UnityEngine.WebCamDevice::m_Flags
	int32_t ___m_Flags_2;
	// UnityEngine.WebCamKind UnityEngine.WebCamDevice::m_Kind
	int32_t ___m_Kind_3;
	// UnityEngine.Resolution[] UnityEngine.WebCamDevice::m_Resolutions
	ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* ___m_Resolutions_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_pinvoke
{
	char* ___m_Name_0;
	char* ___m_DepthCameraName_1;
	int32_t ___m_Flags_2;
	int32_t ___m_Kind_3;
	Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* ___m_Resolutions_4;
};
// Native definition for COM marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Il2CppChar* ___m_DepthCameraName_1;
	int32_t ___m_Flags_2;
	int32_t ___m_Kind_3;
	Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* ___m_Resolutions_4;
};

// Unity.Mathematics.float4
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E 
{
	// System.Single Unity.Mathematics.float4::x
	float ___x_0;
	// System.Single Unity.Mathematics.float4::y
	float ___y_1;
	// System.Single Unity.Mathematics.float4::z
	float ___z_2;
	// System.Single Unity.Mathematics.float4::w
	float ___w_3;
};

// TensorFlowLite.Interpreter/QuantizationParams
struct QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A 
{
	// System.Single TensorFlowLite.Interpreter/QuantizationParams::scale
	float ___scale_0;
	// System.Int32 TensorFlowLite.Interpreter/QuantizationParams::zeroPoint
	int32_t ___zeroPoint_1;
};

// Cysharp.Threading.Tasks.SwitchToThreadPoolAwaitable/Awaiter
struct Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9 
{
	union
	{
		struct
		{
		};
		uint8_t Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9__padding[1];
	};
};

// TensorFlowLite.TextureResizer/ResizeOptions
struct ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46 
{
	// System.Int32 TensorFlowLite.TextureResizer/ResizeOptions::width
	int32_t ___width_0;
	// System.Int32 TensorFlowLite.TextureResizer/ResizeOptions::height
	int32_t ___height_1;
	// System.Single TensorFlowLite.TextureResizer/ResizeOptions::rotationDegree
	float ___rotationDegree_2;
	// System.Boolean TensorFlowLite.TextureResizer/ResizeOptions::mirrorHorizontal
	bool ___mirrorHorizontal_3;
	// System.Boolean TensorFlowLite.TextureResizer/ResizeOptions::mirrorVertical
	bool ___mirrorVertical_4;
	// TensorFlowLite.TextureResizer/AspectMode TensorFlowLite.TextureResizer/ResizeOptions::aspectMode
	int32_t ___aspectMode_5;
};
// Native definition for P/Invoke marshalling of TensorFlowLite.TextureResizer/ResizeOptions
struct ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46_marshaled_pinvoke
{
	int32_t ___width_0;
	int32_t ___height_1;
	float ___rotationDegree_2;
	int32_t ___mirrorHorizontal_3;
	int32_t ___mirrorVertical_4;
	int32_t ___aspectMode_5;
};
// Native definition for COM marshalling of TensorFlowLite.TextureResizer/ResizeOptions
struct ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46_marshaled_com
{
	int32_t ___width_0;
	int32_t ___height_1;
	float ___rotationDegree_2;
	int32_t ___mirrorHorizontal_3;
	int32_t ___mirrorVertical_4;
	int32_t ___aspectMode_5;
};

// TensorFlowLite.WebCamUtil/PreferSpec
struct PreferSpec_tD15E6AB52F01F206665B5445FEE350429ED40D6F 
{
	// System.Boolean TensorFlowLite.WebCamUtil/PreferSpec::isFrontFacing
	bool ___isFrontFacing_0;
	// UnityEngine.WebCamKind TensorFlowLite.WebCamUtil/PreferSpec::kind
	int32_t ___kind_1;
};
// Native definition for P/Invoke marshalling of TensorFlowLite.WebCamUtil/PreferSpec
struct PreferSpec_tD15E6AB52F01F206665B5445FEE350429ED40D6F_marshaled_pinvoke
{
	int32_t ___isFrontFacing_0;
	int32_t ___kind_1;
};
// Native definition for COM marshalling of TensorFlowLite.WebCamUtil/PreferSpec
struct PreferSpec_tD15E6AB52F01F206665B5445FEE350429ED40D6F_marshaled_com
{
	int32_t ___isFrontFacing_0;
	int32_t ___kind_1;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.ComputeBuffer
struct ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233  : public RuntimeObject
{
	// System.IntPtr UnityEngine.ComputeBuffer::m_Ptr
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TensorFlowLite.FilePopupAttribute
struct FilePopupAttribute_t439E0318DF1A387B062C2813F184DA635F9C88D6  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String TensorFlowLite.FilePopupAttribute::regex
	String_t* ___regex_0;
};

// TensorFlowLite.Interpreter
struct Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520  : public RuntimeObject
{
	// System.IntPtr TensorFlowLite.Interpreter::model
	intptr_t ___model_0;
	// System.IntPtr TensorFlowLite.Interpreter::interpreter
	intptr_t ___interpreter_1;
	// TensorFlowLite.InterpreterOptions TensorFlowLite.Interpreter::options
	InterpreterOptions_t9E95AA774C31B5ACAE144C947B861C026677E487* ___options_2;
};

// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D  : public RuntimeObject
{
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable
struct SwitchToMainThreadAwaitable_t30D0968092E3CD2E8BAE2DEF136FC76A3695E9F8 
{
	// Cysharp.Threading.Tasks.PlayerLoopTiming Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable::playerLoopTiming
	int32_t ___playerLoopTiming_0;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_1;
};
// Native definition for P/Invoke marshalling of Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable
struct SwitchToMainThreadAwaitable_t30D0968092E3CD2E8BAE2DEF136FC76A3695E9F8_marshaled_pinvoke
{
	int32_t ___playerLoopTiming_0;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke ___cancellationToken_1;
};
// Native definition for COM marshalling of Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable
struct SwitchToMainThreadAwaitable_t30D0968092E3CD2E8BAE2DEF136FC76A3695E9F8_marshaled_com
{
	int32_t ___playerLoopTiming_0;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com ___cancellationToken_1;
};

// TensorFlowLite.TextureResizer
struct TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0  : public RuntimeObject
{
	// UnityEngine.RenderTexture TensorFlowLite.TextureResizer::resizeTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___resizeTexture_0;
	// UnityEngine.Material TensorFlowLite.TextureResizer::_blitMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____blitMaterial_1;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// TensorFlowLite.WebCamUtil
struct WebCamUtil_t1753B2E6585566680B6308C285F6E255E04AA7C6  : public RuntimeObject
{
};

// TensorFlowLite.Interpreter/TensorInfo
struct TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2 
{
	// System.String TensorFlowLite.Interpreter/TensorInfo::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// TensorFlowLite.Interpreter/DataType TensorFlowLite.Interpreter/TensorInfo::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_1;
	// System.Int32[] TensorFlowLite.Interpreter/TensorInfo::<shape>k__BackingField
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CshapeU3Ek__BackingField_2;
	// TensorFlowLite.Interpreter/QuantizationParams TensorFlowLite.Interpreter/TensorInfo::<quantizationParams>k__BackingField
	QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A ___U3CquantizationParamsU3Ek__BackingField_3;
};
// Native definition for P/Invoke marshalling of TensorFlowLite.Interpreter/TensorInfo
struct TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
	int32_t ___U3CtypeU3Ek__BackingField_1;
	Il2CppSafeArray/*NONE*/* ___U3CshapeU3Ek__BackingField_2;
	QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A ___U3CquantizationParamsU3Ek__BackingField_3;
};
// Native definition for COM marshalling of TensorFlowLite.Interpreter/TensorInfo
struct TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
	int32_t ___U3CtypeU3Ek__BackingField_1;
	Il2CppSafeArray/*NONE*/* ___U3CshapeU3Ek__BackingField_2;
	QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A ___U3CquantizationParamsU3Ek__BackingField_3;
};

// Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable/Awaiter
struct Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F 
{
	// Cysharp.Threading.Tasks.PlayerLoopTiming Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable/Awaiter::playerLoopTiming
	int32_t ___playerLoopTiming_0;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable/Awaiter::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_1;
};
// Native definition for P/Invoke marshalling of Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable/Awaiter
struct Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F_marshaled_pinvoke
{
	int32_t ___playerLoopTiming_0;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke ___cancellationToken_1;
};
// Native definition for COM marshalling of Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable/Awaiter
struct Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F_marshaled_com
{
	int32_t ___playerLoopTiming_0;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com ___cancellationToken_1;
};

// TensorFlowLite.WebCamUtil/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t469020C7BE69D7D513ABD902B7F70C895FC8789B  : public RuntimeObject
{
	// TensorFlowLite.WebCamUtil/PreferSpec TensorFlowLite.WebCamUtil/<>c__DisplayClass2_0::spec
	PreferSpec_tD15E6AB52F01F206665B5445FEE350429ED40D6F ___spec_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.ComputeShader
struct ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15
struct U3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A 
{
	// System.Int32 TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean> TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15::<>t__builder
	AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 ___U3CU3Et__builder_1;
	// TensorFlowLite.TextureToTensor TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15::<>4__this
	TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2* ___U3CU3E4__this_2;
	// UnityEngine.RenderTexture TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15::texture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___texture_3;
	// System.Single[,,] TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15::inputs
	SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* ___inputs_4;
	// Unity.Collections.NativeArray`1<UnityEngine.Color32> TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15::<pixels>5__2
	NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___U3CpixelsU3E5__2_5;
	// System.Int32 TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15::<width>5__3
	int32_t ___U3CwidthU3E5__3_6;
	// System.Int32 TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15::<height>5__4
	int32_t ___U3CheightU3E5__4_7;
	// Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable/Awaiter TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15::<>u__1
	Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F ___U3CU3Eu__1_8;
	// Cysharp.Threading.Tasks.SwitchToThreadPoolAwaitable/Awaiter TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15::<>u__2
	Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9 ___U3CU3Eu__2_9;
};

// System.Func`2<System.Double,System.Double>
struct Func_2_t0221E9CE1FF8B8FE59AED052D562790B96F13B3D  : public MulticastDelegate_t
{
};

// System.Func`2<System.Single,System.Single>
struct Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.WebCamDevice,System.Int32>
struct Func_2_t0581A63ABD3EA2867D0202D9E2AAE784CF67B792  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.WebCamTexture
struct WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.LightProbeProxyVolume
struct LightProbeProxyVolume_t431001CA94D2BB5DB419E2A89E7D8116E4E1B658  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// <Module>

// <Module>

// TensorFlowLite.ArrayExtension

// TensorFlowLite.ArrayExtension

// TensorFlowLite.Color32Extension

// TensorFlowLite.Color32Extension

// TensorFlowLite.DisposeUtil

// TensorFlowLite.DisposeUtil

// TensorFlowLite.FileUtil

// TensorFlowLite.FileUtil

// TensorFlowLite.InterpreterExtension

// TensorFlowLite.InterpreterExtension

// TensorFlowLite.MathTF

// TensorFlowLite.MathTF

// TensorFlowLite.MatrixExtension

// TensorFlowLite.MatrixExtension

// TensorFlowLite.PrimitiveDraw
struct PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5_StaticFields
{
	// System.Int32 TensorFlowLite.PrimitiveDraw::_Color
	int32_t ____Color_6;
};

// TensorFlowLite.PrimitiveDraw

// TensorFlowLite.RectExtension

// TensorFlowLite.RectExtension

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// TensorFlowLite.TextureToTensor
struct TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2_StaticFields
{
	// System.Int32 TensorFlowLite.TextureToTensor::InputTexture
	int32_t ___InputTexture_3;
	// System.Int32 TensorFlowLite.TextureToTensor::OutputFloatTensor
	int32_t ___OutputFloatTensor_4;
	// System.Int32 TensorFlowLite.TextureToTensor::TextureWidth
	int32_t ___TextureWidth_5;
	// System.Int32 TensorFlowLite.TextureToTensor::TextureHeight
	int32_t ___TextureHeight_6;
};

// TensorFlowLite.TextureToTensor

// TensorFlowLite.MathTF/<>c__DisplayClass4_0

// TensorFlowLite.MathTF/<>c__DisplayClass4_0

// TensorFlowLite.MathTF/<>c__DisplayClass5_0

// TensorFlowLite.MathTF/<>c__DisplayClass5_0

// TensorFlowLite.PrimitiveDraw/MeshBuffer

// TensorFlowLite.PrimitiveDraw/MeshBuffer

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>

// Unity.Collections.NativeArray`1<UnityEngine.Color32>

// Unity.Collections.NativeArray`1<UnityEngine.Color32>

// Cysharp.Threading.Tasks.UniTask`1<System.Boolean>

// Cysharp.Threading.Tasks.UniTask`1<System.Boolean>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};

// System.Threading.CancellationToken

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Color32

// UnityEngine.Color32

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.PropertyAttribute

// UnityEngine.PropertyAttribute

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Rect

// UnityEngine.Rect

// System.SByte

// System.SByte

// System.Single

// System.Single

// Cysharp.Threading.Tasks.SwitchToThreadPoolAwaitable

// Cysharp.Threading.Tasks.SwitchToThreadPoolAwaitable

// System.UInt32

// System.UInt32

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.WebCamDevice

// UnityEngine.WebCamDevice

// Unity.Mathematics.float4
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E_StaticFields
{
	// Unity.Mathematics.float4 Unity.Mathematics.float4::zero
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___zero_4;
};

// Unity.Mathematics.float4

// Cysharp.Threading.Tasks.SwitchToThreadPoolAwaitable/Awaiter
struct Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9_StaticFields
{
	// System.Threading.WaitCallback Cysharp.Threading.Tasks.SwitchToThreadPoolAwaitable/Awaiter::switchToCallback
	WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___switchToCallback_0;
};

// Cysharp.Threading.Tasks.SwitchToThreadPoolAwaitable/Awaiter

// TensorFlowLite.TextureResizer/ResizeOptions

// TensorFlowLite.TextureResizer/ResizeOptions

// TensorFlowLite.WebCamUtil/PreferSpec

// TensorFlowLite.WebCamUtil/PreferSpec

// UnityEngine.ComputeBuffer

// UnityEngine.ComputeBuffer

// UnityEngine.Networking.DownloadHandler

// UnityEngine.Networking.DownloadHandler

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// TensorFlowLite.FilePopupAttribute

// TensorFlowLite.FilePopupAttribute

// TensorFlowLite.Interpreter

// TensorFlowLite.Interpreter

// UnityEngine.MaterialPropertyBlock

// UnityEngine.MaterialPropertyBlock

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable

// Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable

// TensorFlowLite.TextureResizer
struct TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_StaticFields
{
	// System.Int32 TensorFlowLite.TextureResizer::_VertTransform
	int32_t ____VertTransform_2;
	// System.Int32 TensorFlowLite.TextureResizer::_UVRect
	int32_t ____UVRect_3;
	// UnityEngine.Matrix4x4 TensorFlowLite.TextureResizer::PUSH_MATRIX
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___PUSH_MATRIX_4;
	// UnityEngine.Matrix4x4 TensorFlowLite.TextureResizer::POP_MATRIX
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___POP_MATRIX_5;
};

// TensorFlowLite.TextureResizer

// TensorFlowLite.WebCamUtil
struct WebCamUtil_t1753B2E6585566680B6308C285F6E255E04AA7C6_StaticFields
{
	// TensorFlowLite.WebCamUtil/PreferSpec TensorFlowLite.WebCamUtil::DefaultPreferSpec
	PreferSpec_tD15E6AB52F01F206665B5445FEE350429ED40D6F ___DefaultPreferSpec_0;
	// UnityEngine.Matrix4x4 TensorFlowLite.WebCamUtil::PUSH_MATRIX
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___PUSH_MATRIX_1;
	// UnityEngine.Matrix4x4 TensorFlowLite.WebCamUtil::POP_MATRIX
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___POP_MATRIX_2;
};

// TensorFlowLite.WebCamUtil

// TensorFlowLite.Interpreter/TensorInfo

// TensorFlowLite.Interpreter/TensorInfo

// Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable/Awaiter

// Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable/Awaiter

// TensorFlowLite.WebCamUtil/<>c__DisplayClass2_0

// TensorFlowLite.WebCamUtil/<>c__DisplayClass2_0

// UnityEngine.ComputeShader

// UnityEngine.ComputeShader

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Mesh

// UnityEngine.Mesh

// UnityEngine.Shader

// UnityEngine.Shader

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15

// TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15

// System.Func`2<System.Double,System.Double>

// System.Func`2<System.Double,System.Double>

// System.Func`2<System.Single,System.Single>

// System.Func`2<System.Single,System.Single>

// System.Func`2<UnityEngine.WebCamDevice,System.Int32>

// System.Func`2<UnityEngine.WebCamDevice,System.Int32>

// System.Action

// System.Action

// UnityEngine.MeshFilter

// UnityEngine.MeshFilter

// UnityEngine.RenderTexture

// UnityEngine.RenderTexture

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.WebCamTexture

// UnityEngine.WebCamTexture

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.LightProbeProxyVolume

// UnityEngine.LightProbeProxyVolume
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D  : public RuntimeArray
{
	ALIGN_FIELD (8) Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 m_Items[1];

	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.SByte[,,]
struct SByteU5BU2CU2CU5D_tCD5C37C6539D2FD986CEE8ACB61C875D22F4A236  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
	inline int8_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);
		il2cpp_array_size_t kBound = bounds[2].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(k, kBound);

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);
		il2cpp_array_size_t kBound = bounds[2].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(k, kBound);

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k, int8_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);
		il2cpp_array_size_t kBound = bounds[2].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(k, kBound);

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;
		il2cpp_array_size_t kBound = bounds[2].length;

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k)
	{
		il2cpp_array_size_t jBound = bounds[1].length;
		il2cpp_array_size_t kBound = bounds[2].length;

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k, int8_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;
		il2cpp_array_size_t kBound = bounds[2].length;

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		m_Items[index] = value;
	}
};
// System.Single[,,]
struct SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
	inline float GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);
		il2cpp_array_size_t kBound = bounds[2].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(k, kBound);

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);
		il2cpp_array_size_t kBound = bounds[2].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(k, kBound);

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k, float value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);
		il2cpp_array_size_t kBound = bounds[2].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(k, kBound);

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;
		il2cpp_array_size_t kBound = bounds[2].length;

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k)
	{
		il2cpp_array_size_t jBound = bounds[1].length;
		il2cpp_array_size_t kBound = bounds[2].length;

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k, float value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;
		il2cpp_array_size_t kBound = bounds[2].length;

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		m_Items[index] = value;
	}
};
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5  : public RuntimeArray
{
	ALIGN_FIELD (8) WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C m_Items[1];

	inline WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DepthCameraName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Resolutions_4), (void*)NULL);
		#endif
	}
	inline WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DepthCameraName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Resolutions_4), (void*)NULL);
		#endif
	}
};


// System.Void System.Func`2<System.Single,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mD64CD30418B670CBB35821EC2D8C91B7A1FAA959_gshared (Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Single,System.Single>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m22B3C908B58F4B2F196E44A2792A36E1567A2659_gshared (RuntimeObject* ___0_source, Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___1_selector, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Double,System.Double>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m653F26D531BA0409921E01E3994462FC75138745_gshared (Func_2_t0221E9CE1FF8B8FE59AED052D562790B96F13B3D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Double,System.Double>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mBB6C314B4FD7CEDDACCED294B363B341EB3A60FC_gshared (RuntimeObject* ___0_source, Func_2_t0221E9CE1FF8B8FE59AED052D562790B96F13B3D* ___1_selector, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___0_path, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Texture2D::GetRawTextureData<UnityEngine.Color32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D Texture2D_GetRawTextureData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m3F258FE3486B29D798DCFECF41E9845382EF5CC2_gshared (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::Create()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 AsyncUniTaskMethodBuilder_1_Create_m541E96A720B74646A67D392E54DECC686529143A_gshared_inline (const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::Start<TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_Start_TisU3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A_m58DF46309ED2EA16F84499F1ADB94FFFC6EF3A42_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, U3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A* ___0_stateMachine, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 AsyncUniTaskMethodBuilder_1_get_Task_m987FF39A55DF01CB856D3CD4C0DF8AC06F4E338C_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable/Awaiter,TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F_TisU3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A_m060FB3B72FE4BFB7722E4F5246B79C855C42EFB3_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F* ___0_awaiter, U3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.SwitchToThreadPoolAwaitable/Awaiter,TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9_TisU3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A_m91B23B49A4BFEF74CEF57A77F04D918158406595_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9* ___0_awaiter, U3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::SetResult(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, bool ___0_result, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetStateMachine_mCD3C282E048D8E201907EA2CB1B0E7D3DC9095B5_gshared (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Func`2<UnityEngine.WebCamDevice,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m99478073B65A9DC7EC2C2FE16717C60F408E2C66_gshared (Func_2_t0581A63ABD3EA2867D0202D9E2AAE784CF67B792* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending<UnityEngine.WebCamDevice,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderByDescending_TisWebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m55C9488B3389F49F175FB351233C696203927A9E_gshared (RuntimeObject* ___0_source, Func_2_t0581A63ABD3EA2867D0202D9E2AAE784CF67B792* ___1_keySelector, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<UnityEngine.WebCamDevice>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C Enumerable_First_TisWebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_m56974EDE62B874CC6B3726F57D87F8AA6F85260F_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;

// System.Void Unity.Mathematics.float4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_Release_mE7399D6187A0E38945D2913D0FFB41247143AB1E (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.ComputeBuffer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer_Dispose_mBCA0F8A5BE75A41C77E1FCFBCB4EAE84A45D6BF2 (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D (PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0* __this, const RuntimeMethod* method) ;
// System.Boolean TensorFlowLite.FileUtil::IsPathRooted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileUtil_IsPathRooted_mC6A7C58D7B2DA35BAEFB0230B42DE16BEED31DC4 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5 (const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___0_path1, String_t* ___1_path2, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Get_m1A332EE069BB5052368307F254A5A7627BB5FD86 (String_t* ___0_uri, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isDone_m3079B53A1CAFD8D5B334C635761E7B7E10B14123 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.Networking.DownloadHandler::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DownloadHandler_get_data_m1DC9B4514B12939B090028BF28C6BEF21DE9B6F3 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.IO.Path::IsPathRooted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Path_IsPathRooted_m0AAA41017FBDDFD52AFC56508EFB5A4195E89C43 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Int32 TensorFlowLite.Interpreter::GetInputTensorCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_GetInputTensorCount_mF4D037901D22783436F446E04BBCA40FBFF35981 (Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* __this, const RuntimeMethod* method) ;
// System.Int32 TensorFlowLite.Interpreter::GetOutputTensorCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_GetOutputTensorCount_m93F718BD038031B668CC2B6EEB76B7CA7FAF7C4A (Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// TensorFlowLite.Interpreter/TensorInfo TensorFlowLite.Interpreter::GetInputTensorInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2 Interpreter_GetInputTensorInfo_m1C8E806E40D6E57267AAE54D8A4671457119269A (Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132 (StringBuilder_t* __this, String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E (StringBuilder_t* __this, const RuntimeMethod* method) ;
// TensorFlowLite.Interpreter/TensorInfo TensorFlowLite.Interpreter::GetOutputTensorInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2 Interpreter_GetOutputTensorInfo_m184964B54230250C1D4BF229D372F448813EAF15 (Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::LerpUnclamped(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.MathTF/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mF493A20C7140DE6C2C0CD002D5D774611C2CBC0C (U3CU3Ec__DisplayClass4_0_tD0A7A62DD0685EE65B6B89A1E872850918FC1649* __this, const RuntimeMethod* method) ;
// System.Single System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Enumerable_Max_m3215FA2A65ACAFE226A0FBE065D772C7CE1A5E9F (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Single,System.Single>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mD64CD30418B670CBB35821EC2D8C91B7A1FAA959 (Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mD64CD30418B670CBB35821EC2D8C91B7A1FAA959_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Single,System.Single>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m22B3C908B58F4B2F196E44A2792A36E1567A2659 (RuntimeObject* ___0_source, Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2*, const RuntimeMethod*))Enumerable_Select_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m22B3C908B58F4B2F196E44A2792A36E1567A2659_gshared)(___0_source, ___1_selector, method);
}
// System.Single System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Enumerable_Sum_m1374719E4DC4497F0842561BCCA42070CECA9AD0 (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.MathTF/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mE36EA14A3E760C4D78D8500593B4737FDF5667BF (U3CU3Ec__DisplayClass5_0_t7C111F35989CF9AD24828A3E960D5D41F65B9E5A* __this, const RuntimeMethod* method) ;
// System.Double System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Enumerable_Max_mEAA507123A7B5CB2A4E6FA1E74FD325E2F885AFD (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Double,System.Double>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m653F26D531BA0409921E01E3994462FC75138745 (Func_2_t0221E9CE1FF8B8FE59AED052D562790B96F13B3D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t0221E9CE1FF8B8FE59AED052D562790B96F13B3D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m653F26D531BA0409921E01E3994462FC75138745_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Double,System.Double>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mBB6C314B4FD7CEDDACCED294B363B341EB3A60FC (RuntimeObject* ___0_source, Func_2_t0221E9CE1FF8B8FE59AED052D562790B96F13B3D* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t0221E9CE1FF8B8FE59AED052D562790B96F13B3D*, const RuntimeMethod*))Enumerable_Select_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mBB6C314B4FD7CEDDACCED294B363B341EB3A60FC_gshared)(___0_source, ___1_selector, method);
}
// System.Double System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Enumerable_Sum_mB4B29B0D6E567EB810D0B439945F9BC6ACC01284 (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_upwards, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector4::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_get_magnitude_m97A83FC484190F07D8017F4BD10E3C81478E0D20_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.MaterialPropertyBlock::GetColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F MaterialPropertyBlock_GetColor_m4F65D7F8EC406C8AF05EE8AD4DC957F20D60EC4F (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, int32_t ___0_nameID, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::SetColor(System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetColor_m2E7CA761D98625E3B3CF380D3EBB2C99908FDFF6 (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, int32_t ___0_nameID, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_value, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_shader, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_enableInstancing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_enableInstancing_m84BA72A28BCFE94B50535BDE410A539A7CD7AF80 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock__ctor_m14C3432585F7BB65028BCD64A0FD6607A1B490FB (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, const RuntimeMethod* method) ;
// UnityEngine.Mesh TensorFlowLite.PrimitiveDraw::CreateMesh(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* PrimitiveDraw_CreateMesh_m918A0DF41E66B23B5E04C44BD35023371A2D603E (int32_t ___0_type, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.PrimitiveDraw/MeshBuffer::.ctor(UnityEngine.Mesh,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuffer__ctor_m054C3F5283405D24A59DD5ED77FADE2B14A1EF21 (MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_mesh, int32_t ___1_initialSize, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// System.Void TensorFlowLite.PrimitiveDraw::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw_set_color_m1938D9C48111C3DACACD7E401CA4B81845DD97CE (PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.PrimitiveDraw/MeshBuffer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuffer_Dispose_mB05D8DF3E6A5997249D0BBB7ECEEF70DF957A1C9 (MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A* __this, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.PrimitiveDraw/MeshBuffer::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuffer_Clear_m3135884D439FE5471968068033B8E01DA4F0ABCC (MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A* __this, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.PrimitiveDraw::Draw(TensorFlowLite.PrimitiveDraw/MeshBuffer,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw_Draw_mD2262E86E392672DF3CFDFE229DB405A5D78301C (PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5* __this, MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A* ___0_mb, bool ___1_drawEditor, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.PrimitiveDraw::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw_Clear_m7634357CABA0984D40D912A62E7C73340BC9D6F7 (PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5* __this, const RuntimeMethod* method) ;
// System.Boolean TensorFlowLite.PrimitiveDraw::TryLine2DMatrix(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitiveDraw_TryLine2DMatrix_m01F21D2C1E9B62FDE07C34C10A10E09AF2E8AAE0 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_end, float ___2_thickness, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___3_mtx, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.PrimitiveDraw/MeshBuffer::Add(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuffer_Add_m28049DE3C5C838675E2AE8DE3654B3A5D513F4BB (MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_mtx, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_q, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_s, const RuntimeMethod* method) ;
// System.Boolean TensorFlowLite.PrimitiveDraw::TryLine3DMatrix(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitiveDraw_TryLine3DMatrix_mAA4D5731FEBA47D49E50DFBA7DE0E528A35E7BAF (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_end, float ___2_thickness, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___3_mtx, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.PrimitiveDraw::Line(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw_Line_mCB5E0A39A90F4C359EA9E1D9043F498BDC7E15BB (PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_end, float ___2_thickness, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::DrawMeshInstanced(UnityEngine.Mesh,System.Int32,UnityEngine.Material,UnityEngine.Matrix4x4[],System.Int32,UnityEngine.MaterialPropertyBlock,UnityEngine.Rendering.ShadowCastingMode,System.Boolean,System.Int32,UnityEngine.Camera,UnityEngine.Rendering.LightProbeUsage,UnityEngine.LightProbeProxyVolume)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_DrawMeshInstanced_mA0B0EAC10AC6D601552229CD89CA885E3437E70F (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_mesh, int32_t ___1_submeshIndex, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___2_material, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___3_matrices, int32_t ___4_count, MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___5_properties, int32_t ___6_castShadows, bool ___7_receiveShadows, int32_t ___8_layer, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___9_camera, int32_t ___10_lightProbeUsage, LightProbeProxyVolume_t431001CA94D2BB5DB419E2A89E7D8116E4E1B658* ___11_lightProbeProxyVolume, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B (int32_t ___0_type, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___0_sourceArray, RuntimeArray* ___1_destinationArray, int32_t ___2_length, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Single System.Math::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Min_mE913811A2F7566294BF4649A434282634E7254B3 (float ___0_val1, float ___1_val2, const RuntimeMethod* method) ;
// System.Single System.Math::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA (float ___0_val1, float ___1_val2, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.Rect::MinMaxRect(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Rect_MinMaxRect_m540D2DD8C255D276AD4AE06D9CCA2A667EFA39E5 (float ___0_xmin, float ___1_ymin, float ___2_xmax, float ___3_ymax, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Material TensorFlowLite.TextureResizer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* TextureResizer_get_material_m941D8F4FDC6BAE1AEF3BC3460E36F056A1662E24 (TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Material::GetVector(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Material_GetVector_mFE0366FDCB87331910BCE5E234030C20A25484A2 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_nameID, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetVector(System.Int32,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m44CD02D4555E2AF391C30700F0AEC36BA04CFEA7 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_nameID, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Material::GetMatrix(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Material_GetMatrix_mFE806D06F452CC1BFFFC82EB87021FCA612BDF4E (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_nameID, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetMatrix(System.Int32,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetMatrix_m668579C6402F88BFEF769D39E484BAD4CE6B0067 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_nameID, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.DisposeUtil::TryDispose(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisposeUtil_TryDispose_m83D880713D33C109E70C97DB182D7E7421030416 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_tex, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.DisposeUtil::TryDispose(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisposeUtil_TryDispose_m947B35F77F5C0BB4161A0B23D69A0D7E47313E2F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_mat, const RuntimeMethod* method) ;
// TensorFlowLite.TextureResizer/ResizeOptions TensorFlowLite.TextureResizer/ResizeOptions::GetModifedForWebcam(UnityEngine.WebCamTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46 ResizeOptions_GetModifedForWebcam_m3E3ED9E5FB54F0E640152B6B4AF601D6B8B76F27 (ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46* __this, WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* ___0_texture, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 TensorFlowLite.TextureResizer::GetVertTransform(System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 TextureResizer_GetVertTransform_m12C789BB441F7B21DC4DA120AC93ACF4B9921E57 (float ___0_rotation, bool ___1_mirrorHorizontal, bool ___2_mirrorVertical, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.TextureResizer::set_VertexTransfrom(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureResizer_set_VertexTransfrom_m70F70DCA43D4F400C932FCABB28AE81B7F9B1D34 (TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector4 TensorFlowLite.TextureResizer::GetTextureST(UnityEngine.Texture,TensorFlowLite.TextureResizer/ResizeOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 TextureResizer_GetTextureST_m8046D2E64B81423A67C2DEF921786A76491A801B (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_sourceTex, ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46 ___1_options, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.TextureResizer::set_UVRect(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureResizer_set_UVRect_m3D5356A95B00DC0710E37447C155FED44C51F6AD (TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture TensorFlowLite.TextureResizer::ApplyResize(UnityEngine.Texture,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* TextureResizer_ApplyResize_m0E15886D77935F222BCE166994E7261A70D99E16 (TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_texture, int32_t ___1_width, int32_t ___2_height, bool ___3_fillBackground, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m53215A8EDDE262932758186108347685F6A512C4 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_depth, int32_t ___3_format, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Texture2D::get_blackTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Texture2D_get_blackTexture_mBEF97F64AD650DAAC1EEC84EB34F9CF22B56A08C (const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_source, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___1_dest, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_source, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___1_dest, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___2_mat, int32_t ___3_pass, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.Vector4 TensorFlowLite.TextureResizer::GetTextureST(System.Single,System.Single,TensorFlowLite.TextureResizer/AspectMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 TextureResizer_GetTextureST_m9D94D05540B41F64AF5A9D7DD002C142A7994983 (float ___0_srcAspect, float ___1_dstAspect, int32_t ___2_mode, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_lhs, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_Translate_mF3EDFC59C9E51DC0C0A483F6E44A4930D62E4091 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.WebCamTexture::get_videoRotationAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebCamTexture_get_videoRotationAngle_m2BF420A1243F56415BEF82CC84AB4C7B342C991F (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.WebCamTexture::get_videoVerticallyMirrored()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCamTexture_get_videoVerticallyMirrored_mDC7525B796A2629927EF113DA199DDE200B1B52A (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.ComputeShader>(System.String)
inline ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* Resources_Load_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mE862700321AB25179D47FE117A106FA1CD22B8CC (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
// System.Void TensorFlowLite.DisposeUtil::TryDispose(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisposeUtil_TryDispose_m0E435FDB351CF2F918FD9FC785D0A94CDB398DE6 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.DisposeUtil::TryDispose(UnityEngine.ComputeBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisposeUtil_TryDispose_mB0D00F761420682F656B547F42C6EFAA6E6BD2C2 (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buf, const RuntimeMethod* method) ;
// UnityEngine.Texture2D TensorFlowLite.TextureToTensor::FetchToTexture2D(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TextureToTensor_FetchToTexture2D_m06F64365599A772CF08CB804E74B8195FD700EED (TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_texture, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Texture2D::GetRawTextureData<UnityEngine.Color32>()
inline NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D Texture2D_GetRawTextureData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m3F258FE3486B29D798DCFECF41E9845382EF5CC2 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D (*) (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))Texture2D_GetRawTextureData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m3F258FE3486B29D798DCFECF41E9845382EF5CC2_gshared)(__this, method);
}
// System.Void TensorFlowLite.TextureToTensor::ToTensorCPU(UnityEngine.RenderTexture,System.Single[,,])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureToTensor_ToTensorCPU_m1766D2A570373E4B014EE5324C1E5CA8E651EE9E (TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_texture, SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* ___1_inputs, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.TextureToTensor::ToTensorGPU(UnityEngine.RenderTexture,System.Single[,,])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureToTensor_ToTensorGPU_mE25771B84D56FDE20AD7CD4E1CC9AC130E8D9DD1 (TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_texture, SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* ___1_inputs, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.TextureToTensor::ToTensorGPU(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureToTensor_ToTensorGPU_m7A2657BC5C715F05BD2908CBBD52243B33299DF6 (TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_texture, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::Create()
inline AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 AsyncUniTaskMethodBuilder_1_Create_m541E96A720B74646A67D392E54DECC686529143A_inline (const RuntimeMethod* method)
{
	return ((  AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 (*) (const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_Create_m541E96A720B74646A67D392E54DECC686529143A_gshared_inline)(method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::Start<TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_1_Start_TisU3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A_m58DF46309ED2EA16F84499F1ADB94FFFC6EF3A42_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, U3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, U3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_Start_TisU3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A_m58DF46309ED2EA16F84499F1ADB94FFFC6EF3A42_gshared_inline)(__this, ___0_stateMachine, method);
}
// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::get_Task()
inline UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 AsyncUniTaskMethodBuilder_1_get_Task_m987FF39A55DF01CB856D3CD4C0DF8AC06F4E338C_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, const RuntimeMethod* method)
{
	return ((  UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_get_Task_m987FF39A55DF01CB856D3CD4C0DF8AC06F4E338C_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.ComputeBuffer::get_count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ComputeBuffer_get_count_m4DAA2D2714BA7A46F007697F601E4446F1049506 (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ComputeBuffer::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer__ctor_mE40DE5EF5ADAC29B6B4DECBD1EE33E8526202617 (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, int32_t ___0_count, int32_t ___1_stride, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ComputeShader::FindKernel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ComputeShader_FindKernel_m3BA5C50794FA6AF4C432E55FBBD7CB266532F659 (ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.ComputeShader::SetTexture(System.Int32,System.Int32,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeShader_SetTexture_mA3F2EEE36DB76DD197EC7910B859854A63186AC3 (ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* __this, int32_t ___0_kernelIndex, int32_t ___1_nameID, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___2_texture, const RuntimeMethod* method) ;
// System.Void UnityEngine.ComputeShader::SetBuffer(System.Int32,System.Int32,UnityEngine.ComputeBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeShader_SetBuffer_m82184DFEA1DFC8788DBF2A97BAE1ACA422024FBF (ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* __this, int32_t ___0_kernelIndex, int32_t ___1_nameID, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___2_buffer, const RuntimeMethod* method) ;
// System.Void UnityEngine.ComputeShader::SetInt(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeShader_SetInt_m5BED46962875818A120FA6D2E4FD820B62BCE8AD (ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* __this, int32_t ___0_nameID, int32_t ___1_val, const RuntimeMethod* method) ;
// System.Void UnityEngine.ComputeShader::Dispatch(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeShader_Dispatch_mEED7BA68C28B1B39E75208D0D4D9915D41985B0A (ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* __this, int32_t ___0_kernelIndex, int32_t ___1_threadGroupsX, int32_t ___2_threadGroupsY, int32_t ___3_threadGroupsZ, const RuntimeMethod* method) ;
// System.Void UnityEngine.ComputeBuffer::GetData(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer_GetData_m7EFC5EF9035C3C48BD922221AC809DC30D6F7F27 (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, RuntimeArray* ___0_data, const RuntimeMethod* method) ;
// System.Boolean TensorFlowLite.TextureToTensor::IsSameSize(UnityEngine.Texture,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureToTensor_IsSameSize_mC7A91E7A5D1BC4DE7C28BEF5098AA554F96318B0 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_a, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_textureFormat, bool ___3_mipChain, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_get_active_mA4434B3E79DEF2C01CAE0A53061598B16443C9E7 (const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_source, int32_t ___1_destX, int32_t ___2_destY, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable Cysharp.Threading.Tasks.UniTask::SwitchToMainThread(Cysharp.Threading.Tasks.PlayerLoopTiming,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SwitchToMainThreadAwaitable_t30D0968092E3CD2E8BAE2DEF136FC76A3695E9F8 UniTask_SwitchToMainThread_m7373C0656841FE81F475D7FA502C02BB656D1F0E (int32_t ___0_timing, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable/Awaiter Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F SwitchToMainThreadAwaitable_GetAwaiter_m66A0F6F462885727A38028656D11B51CEA32BD29 (SwitchToMainThreadAwaitable_t30D0968092E3CD2E8BAE2DEF136FC76A3695E9F8* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable/Awaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m8B4E3723A3CC1B1E8359E40C0766081C55A5BC37 (Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable/Awaiter,TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F_TisU3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A_m060FB3B72FE4BFB7722E4F5246B79C855C42EFB3_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F* ___0_awaiter, U3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F*, U3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F_TisU3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A_m060FB3B72FE4BFB7722E4F5246B79C855C42EFB3_gshared_inline)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable/Awaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Awaiter_GetResult_m8383C6B4850150162ECAA6464603B95FD2231CB2 (Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.SwitchToThreadPoolAwaitable Cysharp.Threading.Tasks.UniTask::SwitchToThreadPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SwitchToThreadPoolAwaitable_t5608C9A301A9B88DA3F77CB7E2AB2082321CB053 UniTask_SwitchToThreadPool_m4A79CBAD5A44C5037CD0A366CA801875F5206010 (const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.SwitchToThreadPoolAwaitable/Awaiter Cysharp.Threading.Tasks.SwitchToThreadPoolAwaitable::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9 SwitchToThreadPoolAwaitable_GetAwaiter_m8720CC348C2B3A1A6CF1317042436D3F8307BD29 (SwitchToThreadPoolAwaitable_t5608C9A301A9B88DA3F77CB7E2AB2082321CB053* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.SwitchToThreadPoolAwaitable/Awaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mC1677DC7707E92D236DF2BA1144FFABF6E45D92E (Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.SwitchToThreadPoolAwaitable/Awaiter,TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9_TisU3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A_m91B23B49A4BFEF74CEF57A77F04D918158406595_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9* ___0_awaiter, U3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9*, U3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9_TisU3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A_m91B23B49A4BFEF74CEF57A77F04D918158406595_gshared_inline)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void Cysharp.Threading.Tasks.SwitchToThreadPoolAwaitable/Awaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Awaiter_GetResult_mF089C80E7D6C1B3FFA735B7F5B28098339127021 (Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
inline void AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_gshared_inline)(__this, ___0_exception, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::SetResult(T)
inline void AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, bool ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, bool, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_gshared_inline)(__this, ___0_result, method);
}
// System.Void TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToTensorAsyncU3Ed__15_MoveNext_mF8C22159FE9C8D67C30DD4A723628788D668DA5A (U3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncUniTaskMethodBuilder_1_SetStateMachine_mCD3C282E048D8E201907EA2CB1B0E7D3DC9095B5 (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, RuntimeObject*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetStateMachine_mCD3C282E048D8E201907EA2CB1B0E7D3DC9095B5_gshared)(__this, ___0_stateMachine, method);
}
// System.Void TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToTensorAsyncU3Ed__15_SetStateMachine_mA370BD45224C8EB70095ED975304FF186F112A32 (U3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.WebCamUtil/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m32CC1D36F0559D16143A7FD5C657E9E55A729434 (U3CU3Ec__DisplayClass2_0_t469020C7BE69D7D513ABD902B7F70C895FC8789B* __this, const RuntimeMethod* method) ;
// UnityEngine.WebCamDevice[] UnityEngine.WebCamTexture::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5* WebCamTexture_get_devices_m57A8D669542CBDDB56B21C8DB62D703B7215EBFA (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isMobilePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isMobilePlatform_mE0BBFDE72BBFE5877581FA67DDBBFC397608AFCA (const RuntimeMethod* method) ;
// System.Void System.Func`2<UnityEngine.WebCamDevice,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m99478073B65A9DC7EC2C2FE16717C60F408E2C66 (Func_2_t0581A63ABD3EA2867D0202D9E2AAE784CF67B792* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t0581A63ABD3EA2867D0202D9E2AAE784CF67B792*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m99478073B65A9DC7EC2C2FE16717C60F408E2C66_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending<UnityEngine.WebCamDevice,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
inline RuntimeObject* Enumerable_OrderByDescending_TisWebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m55C9488B3389F49F175FB351233C696203927A9E (RuntimeObject* ___0_source, Func_2_t0581A63ABD3EA2867D0202D9E2AAE784CF67B792* ___1_keySelector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t0581A63ABD3EA2867D0202D9E2AAE784CF67B792*, const RuntimeMethod*))Enumerable_OrderByDescending_TisWebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m55C9488B3389F49F175FB351233C696203927A9E_gshared)(___0_source, ___1_keySelector, method);
}
// TSource System.Linq.Enumerable::First<UnityEngine.WebCamDevice>(System.Collections.Generic.IEnumerable`1<TSource>)
inline WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C Enumerable_First_TisWebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_m56974EDE62B874CC6B3726F57D87F8AA6F85260F (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisWebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_m56974EDE62B874CC6B3726F57D87F8AA6F85260F_gshared)(___0_source, method);
}
// System.String UnityEngine.WebCamDevice::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebCamDevice_get_name_m2BF75E8EA486668299906EAC9B35214890D4601E (WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCamDevice_get_isFrontFacing_mA021D9DBDDB227FEA8AA635E833EAB7718672404 (WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* __this, const RuntimeMethod* method) ;
// UnityEngine.WebCamKind UnityEngine.WebCamDevice::get_kind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebCamDevice_get_kind_mABE370D6A0530D98A0DF38EAD2FF84129B909B59 (WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* __this, const RuntimeMethod* method) ;
// System.Int32 TensorFlowLite.WebCamUtil/PreferSpec::GetScore(UnityEngine.WebCamDevice&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PreferSpec_GetScore_m9B29A6F382C2353280C6A26114189FE230AF3A2E (PreferSpec_tD15E6AB52F01F206665B5445FEE350429ED40D6F* __this, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* ___0_device, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Dot_m40A3B2E258E53E4847583474E40AC29F68AF8BA3_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable/Awaiter::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_m0F8D6A7007F0397899FB1444B09D14912BB48E67 (Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.SwitchToThreadPoolAwaitable/Awaiter::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_mB6FEEBBADB2DEE87A1578C836F09D56A648F1A61 (Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Mathematics.float4 TensorFlowLite.Color32Extension::ToARGB(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E Color32Extension_ToARGB_m186DE06140B8C4A2B003A7CD8FF0AE5A33EA864A (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_c, const RuntimeMethod* method) 
{
	{
		// return new float4(
		//     unchecked((sbyte)c.a) / 255f,
		//     unchecked((sbyte)c.r) / 255f,
		//     unchecked((sbyte)c.g) / 255f,
		//     unchecked((sbyte)c.b) / 255f
		// );
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_c;
		uint8_t L_1 = L_0.___a_4;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___0_c;
		uint8_t L_3 = L_2.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___0_c;
		uint8_t L_5 = L_4.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___0_c;
		uint8_t L_7 = L_6.___b_3;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_8;
		memset((&L_8), 0, sizeof(L_8));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_8), ((float)(((float)((int8_t)L_1))/(255.0f))), ((float)(((float)((int8_t)L_3))/(255.0f))), ((float)(((float)((int8_t)L_5))/(255.0f))), ((float)(((float)((int8_t)L_7))/(255.0f))), /*hidden argument*/NULL);
		return L_8;
	}
}
// Unity.Mathematics.float4 TensorFlowLite.Color32Extension::ToRGBA(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E Color32Extension_ToRGBA_m4575CD4338ACE87D5439C4E7FAF8EB488584FD04 (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_c, const RuntimeMethod* method) 
{
	{
		// return new float4(
		//     (float)unchecked((sbyte)c.r) / 255f,
		//     (float)unchecked((sbyte)c.g) / 255f,
		//     (float)unchecked((sbyte)c.b) / 255f,
		//     (float)unchecked((sbyte)c.a) / 255f
		// );
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_c;
		uint8_t L_1 = L_0.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___0_c;
		uint8_t L_3 = L_2.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___0_c;
		uint8_t L_5 = L_4.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___0_c;
		uint8_t L_7 = L_6.___a_4;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_8;
		memset((&L_8), 0, sizeof(L_8));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_8), ((float)(((float)((int8_t)L_1))/(255.0f))), ((float)(((float)((int8_t)L_3))/(255.0f))), ((float)(((float)((int8_t)L_5))/(255.0f))), ((float)(((float)((int8_t)L_7))/(255.0f))), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Color32 TensorFlowLite.Color32Extension::FromHex(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32Extension_FromHex_m784FB6AB9A88DEEA913320F3C243A3B601839380 (uint32_t ___0_c, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Color32()
		// {
		//     a = unchecked((byte)(sbyte)((c & 0xFF000000) >> 24)),
		//     r = unchecked((byte)(sbyte)((c) & 0x00FF0000 >> 16)),
		//     g = unchecked((byte)(sbyte)((c & 0x0000FF00) >> 8)),
		//     b = unchecked((byte)(sbyte)((c & 0x000000FF))),
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B));
		uint32_t L_0 = ___0_c;
		(&V_0)->___a_4 = (uint8_t)((int32_t)(uint8_t)((int8_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_0&((int32_t)-16777216)))>>((int32_t)24)))));
		uint32_t L_1 = ___0_c;
		(&V_0)->___r_1 = (uint8_t)((int32_t)(uint8_t)((int8_t)((int32_t)((int32_t)L_1&((int32_t)255)))));
		uint32_t L_2 = ___0_c;
		(&V_0)->___g_2 = (uint8_t)((int32_t)(uint8_t)((int8_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_2&((int32_t)65280)))>>8))));
		uint32_t L_3 = ___0_c;
		(&V_0)->___b_3 = (uint8_t)((int32_t)(uint8_t)((int8_t)((int32_t)((int32_t)L_3&((int32_t)255)))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = V_0;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TensorFlowLite.DisposeUtil::TryDispose(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisposeUtil_TryDispose_m83D880713D33C109E70C97DB182D7E7421030416 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_tex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (tex != null)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___0_tex;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// tex.Release();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___0_tex;
		NullCheck(L_2);
		RenderTexture_Release_mE7399D6187A0E38945D2913D0FFB41247143AB1E(L_2, NULL);
		// Object.Destroy(tex);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = ___0_tex;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void TensorFlowLite.DisposeUtil::TryDispose(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisposeUtil_TryDispose_m0E435FDB351CF2F918FD9FC785D0A94CDB398DE6 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (tex != null)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_tex;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// Object.Destroy(tex);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___0_tex;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void TensorFlowLite.DisposeUtil::TryDispose(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisposeUtil_TryDispose_m947B35F77F5C0BB4161A0B23D69A0D7E47313E2F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_mat, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mat != null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___0_mat;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// Object.Destroy(mat);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___0_mat;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void TensorFlowLite.DisposeUtil::TryDispose(UnityEngine.ComputeBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisposeUtil_TryDispose_mB0D00F761420682F656B547F42C6EFAA6E6BD2C2 (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buf, const RuntimeMethod* method) 
{
	{
		// if (buf != null)
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_0 = ___0_buf;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// buf.Dispose();
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_1 = ___0_buf;
		NullCheck(L_1);
		ComputeBuffer_Dispose_mBCA0F8A5BE75A41C77E1FCFBCB4EAE84A45D6BF2(L_1, NULL);
	}

IL_0009:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TensorFlowLite.FilePopupAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilePopupAttribute__ctor_m32B3DE096B8AA92D7FE86BC548EE57127EAF1A1C (FilePopupAttribute_t439E0318DF1A387B062C2813F184DA635F9C88D6* __this, String_t* ___0_searchPattern, const RuntimeMethod* method) 
{
	{
		// public FilePopupAttribute(string searchPattern)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// this.regex = searchPattern;
		String_t* L_0 = ___0_searchPattern;
		__this->___regex_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___regex_0), (void*)L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Byte[] TensorFlowLite.FileUtil::LoadFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FileUtil_LoadFile_m584979CE22936B206B4B42F34D0D2E742297E77F (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* V_0 = NULL;
	{
		// if (!IsPathRooted(path))
		String_t* L_0 = ___0_path;
		bool L_1;
		L_1 = FileUtil_IsPathRooted_mC6A7C58D7B2DA35BAEFB0230B42DE16BEED31DC4(L_0, NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		// path = Path.Combine(Application.streamingAssetsPath, path);
		String_t* L_2;
		L_2 = Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5(NULL);
		String_t* L_3 = ___0_path;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_2, L_3, NULL);
		___0_path = L_4;
	}

IL_0015:
	{
		// if (Application.platform != RuntimePlatform.Android)
		int32_t L_5;
		L_5 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)11))))
		{
			goto IL_002b;
		}
	}
	{
		// path = "file://" + path;
		String_t* L_6 = ___0_path;
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_6, NULL);
		___0_path = L_7;
	}

IL_002b:
	{
		// var request = UnityWebRequest.Get(path);
		String_t* L_8 = ___0_path;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_9;
		L_9 = UnityWebRequest_Get_m1A332EE069BB5052368307F254A5A7627BB5FD86(L_8, NULL);
		V_0 = L_9;
		// request.SendWebRequest();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_10 = V_0;
		NullCheck(L_10);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_11;
		L_11 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_10, NULL);
	}

IL_0039:
	{
		// while (!request.isDone)
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_12 = V_0;
		NullCheck(L_12);
		bool L_13;
		L_13 = UnityWebRequest_get_isDone_m3079B53A1CAFD8D5B334C635761E7B7E10B14123(L_12, NULL);
		if (!L_13)
		{
			goto IL_0039;
		}
	}
	{
		// return request.downloadHandler.data;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_14 = V_0;
		NullCheck(L_14);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_15;
		L_15 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_14, NULL);
		NullCheck(L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = DownloadHandler_get_data_m1DC9B4514B12939B090028BF28C6BEF21DE9B6F3(L_15, NULL);
		return L_16;
	}
}
// System.Boolean TensorFlowLite.FileUtil::IsPathRooted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileUtil_IsPathRooted_mC6A7C58D7B2DA35BAEFB0230B42DE16BEED31DC4 (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFCDE62CA56D5436F953EEC7C371F60AEF6AFC4A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (path.StartsWith("jar:file:"))
		String_t* L_0 = ___0_path;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_0, _stringLiteralEFCDE62CA56D5436F953EEC7C371F60AEF6AFC4A, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000f:
	{
		// return Path.IsPathRooted(path);
		String_t* L_2 = ___0_path;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Path_IsPathRooted_m0AAA41017FBDDFD52AFC56508EFB5A4195E89C43(L_2, NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TensorFlowLite.InterpreterExtension::LogIOInfo(TensorFlowLite.Interpreter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterExtension_LogIOInfo_m9A8556D0771CA637A91C8B9558305CB093809CA8 (Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* ___0_interpreter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB249F16D93A7079142DF003DE7DE26B18AFFB480);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5A4E8096BFAAAF4264E3B6B27A30C2D653DDDC6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StringBuilder_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// int inputCount = interpreter.GetInputTensorCount();
		Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* L_0 = ___0_interpreter;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Interpreter_GetInputTensorCount_mF4D037901D22783436F446E04BBCA40FBFF35981(L_0, NULL);
		V_0 = L_1;
		// int outputCount = interpreter.GetOutputTensorCount();
		Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* L_2 = ___0_interpreter;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Interpreter_GetOutputTensorCount_m93F718BD038031B668CC2B6EEB76B7CA7FAF7C4A(L_2, NULL);
		V_1 = L_3;
		// var sb = new System.Text.StringBuilder();
		StringBuilder_t* L_4 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_4, NULL);
		V_2 = L_4;
		// for (int i = 0; i < inputCount; i++)
		V_3 = 0;
		goto IL_0041;
	}

IL_0018:
	{
		// sb.AppendFormat("intput {0}: {1}", i, interpreter.GetInputTensorInfo(i));
		StringBuilder_t* L_5 = V_2;
		int32_t L_6 = V_3;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* L_9 = ___0_interpreter;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2 L_11;
		L_11 = Interpreter_GetInputTensorInfo_m1C8E806E40D6E57267AAE54D8A4671457119269A(L_9, L_10, NULL);
		TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2 L_12 = L_11;
		RuntimeObject* L_13 = Box(TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_5);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_5, _stringLiteralB5A4E8096BFAAAF4264E3B6B27A30C2D653DDDC6, L_8, L_13, NULL);
		// sb.AppendLine();
		StringBuilder_t* L_15 = V_2;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_15, NULL);
		// for (int i = 0; i < inputCount; i++)
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0041:
	{
		// for (int i = 0; i < inputCount; i++)
		int32_t L_18 = V_3;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0018;
		}
	}
	{
		// for (int i = 0; i < outputCount; i++)
		V_4 = 0;
		goto IL_0077;
	}

IL_004a:
	{
		// sb.AppendFormat("output {0}: {1}", i, interpreter.GetOutputTensorInfo(i));
		StringBuilder_t* L_20 = V_2;
		int32_t L_21 = V_4;
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_22);
		Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* L_24 = ___0_interpreter;
		int32_t L_25 = V_4;
		NullCheck(L_24);
		TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2 L_26;
		L_26 = Interpreter_GetOutputTensorInfo_m184964B54230250C1D4BF229D372F448813EAF15(L_24, L_25, NULL);
		TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2 L_27 = L_26;
		RuntimeObject* L_28 = Box(TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_20);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_20, _stringLiteralB249F16D93A7079142DF003DE7DE26B18AFFB480, L_23, L_28, NULL);
		// sb.AppendLine();
		StringBuilder_t* L_30 = V_2;
		NullCheck(L_30);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_30, NULL);
		// for (int i = 0; i < outputCount; i++)
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0077:
	{
		// for (int i = 0; i < outputCount; i++)
		int32_t L_33 = V_4;
		int32_t L_34 = V_1;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_004a;
		}
	}
	{
		// Debug.Log(sb.ToString());
		StringBuilder_t* L_35 = V_2;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_35);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_36, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single TensorFlowLite.MathTF::Sigmoid(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MathTF_Sigmoid_mE5F967449180C60472045957572A2EF2DEA8B467 (float ___0_x, const RuntimeMethod* method) 
{
	{
		// return (1.0f / (1.0f + Mathf.Exp(-x)));
		float L_0 = ___0_x;
		float L_1;
		L_1 = expf(((-L_0)));
		return ((float)((1.0f)/((float)il2cpp_codegen_add((1.0f), L_1))));
	}
}
// UnityEngine.Vector3 TensorFlowLite.MathTF::Lerp(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MathTF_Lerp_m160D6E01D966CC8E3D38DB9ECB6DA58DFC95EC58 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_b, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_t, bool ___3_invertY, const RuntimeMethod* method) 
{
	float G_B2_0 = 0.0f;
	float G_B2_1 = 0.0f;
	float G_B2_2 = 0.0f;
	float G_B1_0 = 0.0f;
	float G_B1_1 = 0.0f;
	float G_B1_2 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	float G_B3_2 = 0.0f;
	float G_B3_3 = 0.0f;
	{
		// return new Vector3(
		//     Mathf.Lerp(a.x, b.x, t.x),
		//     Mathf.Lerp(a.y, b.y, invertY ? 1f - t.y : t.y),
		//     Mathf.Lerp(a.z, b.z, t.z)
		// );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___0_a;
		float L_1 = L_0->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = ___1_b;
		float L_3 = L_2->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = ___2_t;
		float L_5 = L_4->___x_2;
		float L_6;
		L_6 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_1, L_3, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = ___0_a;
		float L_8 = L_7->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = ___1_b;
		float L_10 = L_9->___y_3;
		bool L_11 = ___3_invertY;
		G_B1_0 = L_10;
		G_B1_1 = L_8;
		G_B1_2 = L_6;
		if (L_11)
		{
			G_B2_0 = L_10;
			G_B2_1 = L_8;
			G_B2_2 = L_6;
			goto IL_002e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = ___2_t;
		float L_13 = L_12->___y_3;
		G_B3_0 = L_13;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003a;
	}

IL_002e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = ___2_t;
		float L_15 = L_14->___y_3;
		G_B3_0 = ((float)il2cpp_codegen_subtract((1.0f), L_15));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003a:
	{
		float L_16;
		L_16 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(G_B3_2, G_B3_1, G_B3_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_17 = ___0_a;
		float L_18 = L_17->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19 = ___1_b;
		float L_20 = L_19->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = ___2_t;
		float L_22 = L_21->___z_4;
		float L_23;
		L_23 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_18, L_20, L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), G_B3_3, L_16, L_23, /*hidden argument*/NULL);
		return L_24;
	}
}
// UnityEngine.Rect TensorFlowLite.MathTF::Lerp(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Rect&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D MathTF_Lerp_m42D314DD66D34374B2421FA2E68B550E4CAE69D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_b, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___2_t, bool ___3_invertY, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	float G_B2_0 = 0.0f;
	float G_B2_1 = 0.0f;
	float G_B2_2 = 0.0f;
	float G_B1_0 = 0.0f;
	float G_B1_1 = 0.0f;
	float G_B1_2 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	float G_B3_2 = 0.0f;
	float G_B3_3 = 0.0f;
	{
		// return new Rect(
		//     Mathf.Lerp(a.x, b.x, t.x),
		//     Mathf.Lerp(a.y, b.y, invertY ? 1f - t.y - t.height : t.y),
		//     t.width * (b.x - a.x),
		//     t.height * (b.y - a.y)
		// );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___0_a;
		float L_1 = L_0->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = ___1_b;
		float L_3 = L_2->___x_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_4 = ___2_t;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5 = (*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)L_4);
		V_0 = L_5;
		float L_6;
		L_6 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_0), NULL);
		float L_7;
		L_7 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_1, L_3, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = ___0_a;
		float L_9 = L_8->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = ___1_b;
		float L_11 = L_10->___y_3;
		bool L_12 = ___3_invertY;
		G_B1_0 = L_11;
		G_B1_1 = L_9;
		G_B1_2 = L_7;
		if (L_12)
		{
			G_B2_0 = L_11;
			G_B2_1 = L_9;
			G_B2_2 = L_7;
			goto IL_003e;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_13 = ___2_t;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_14 = (*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)L_13);
		V_0 = L_14;
		float L_15;
		L_15 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_0), NULL);
		G_B3_0 = L_15;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0061;
	}

IL_003e:
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_16 = ___2_t;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_17 = (*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)L_16);
		V_0 = L_17;
		float L_18;
		L_18 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_0), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_19 = ___2_t;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_20 = (*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)L_19);
		V_0 = L_20;
		float L_21;
		L_21 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		G_B3_0 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((1.0f), L_18)), L_21));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0061:
	{
		float L_22;
		L_22 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(G_B3_2, G_B3_1, G_B3_0, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_23 = ___2_t;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_24 = (*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)L_23);
		V_0 = L_24;
		float L_25;
		L_25 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_26 = ___1_b;
		float L_27 = L_26->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = ___0_a;
		float L_29 = L_28->___x_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_30 = ___2_t;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_31 = (*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)L_30);
		V_0 = L_31;
		float L_32;
		L_32 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_33 = ___1_b;
		float L_34 = L_33->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_35 = ___0_a;
		float L_36 = L_35->___y_3;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_37;
		memset((&L_37), 0, sizeof(L_37));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_37), G_B3_3, L_22, ((float)il2cpp_codegen_multiply(L_25, ((float)il2cpp_codegen_subtract(L_27, L_29)))), ((float)il2cpp_codegen_multiply(L_32, ((float)il2cpp_codegen_subtract(L_34, L_36)))), /*hidden argument*/NULL);
		return L_37;
	}
}
// UnityEngine.Vector3 TensorFlowLite.MathTF::LerpUnclamped(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MathTF_LerpUnclamped_mF30D79001AD8CE44817EE67BEBF57889A1976084 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_b, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_t, const RuntimeMethod* method) 
{
	{
		// return new Vector3(
		//     Mathf.LerpUnclamped(a.x, b.x, t.x),
		//     Mathf.LerpUnclamped(a.y, b.y, t.y),
		//     Mathf.LerpUnclamped(a.z, b.z, t.z)
		// );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___0_a;
		float L_1 = L_0->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = ___1_b;
		float L_3 = L_2->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = ___2_t;
		float L_5 = L_4->___x_2;
		float L_6;
		L_6 = Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline(L_1, L_3, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = ___0_a;
		float L_8 = L_7->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = ___1_b;
		float L_10 = L_9->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = ___2_t;
		float L_12 = L_11->___y_3;
		float L_13;
		L_13 = Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline(L_8, L_10, L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = ___0_a;
		float L_15 = L_14->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = ___1_b;
		float L_17 = L_16->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_18 = ___2_t;
		float L_19 = L_18->___z_4;
		float L_20;
		L_20 = Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline(L_15, L_17, L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_21), L_6, L_13, L_20, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Single> TensorFlowLite.MathTF::Softmax(System.Collections.Generic.IEnumerable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MathTF_Softmax_mC1E3035DBBEB0364FFB64F323FDF4F603A6441E3 (RuntimeObject* ___0_arr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m22B3C908B58F4B2F196E44A2792A36E1567A2659_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CSoftmaxU3Eb__0_m667C87449D6DE42C436B837D62C09F43FA44895C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CSoftmaxU3Eb__1_m9A767AB9B227CE845F58E7CC476F40C56884CE4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_tD0A7A62DD0685EE65B6B89A1E872850918FC1649_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_tD0A7A62DD0685EE65B6B89A1E872850918FC1649* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_tD0A7A62DD0685EE65B6B89A1E872850918FC1649* L_0 = (U3CU3Ec__DisplayClass4_0_tD0A7A62DD0685EE65B6B89A1E872850918FC1649*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_tD0A7A62DD0685EE65B6B89A1E872850918FC1649_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_mF493A20C7140DE6C2C0CD002D5D774611C2CBC0C(L_0, NULL);
		V_0 = L_0;
		// float max = arr.Max();
		U3CU3Ec__DisplayClass4_0_tD0A7A62DD0685EE65B6B89A1E872850918FC1649* L_1 = V_0;
		RuntimeObject* L_2 = ___0_arr;
		float L_3;
		L_3 = Enumerable_Max_m3215FA2A65ACAFE226A0FBE065D772C7CE1A5E9F(L_2, NULL);
		NullCheck(L_1);
		L_1->___max_0 = L_3;
		// var expArr = arr.Select(n => Mathf.Exp(n - max));
		RuntimeObject* L_4 = ___0_arr;
		U3CU3Ec__DisplayClass4_0_tD0A7A62DD0685EE65B6B89A1E872850918FC1649* L_5 = V_0;
		Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* L_6 = (Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2*)il2cpp_codegen_object_new(Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_mD64CD30418B670CBB35821EC2D8C91B7A1FAA959(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CSoftmaxU3Eb__0_m667C87449D6DE42C436B837D62C09F43FA44895C_RuntimeMethod_var), NULL);
		RuntimeObject* L_7;
		L_7 = Enumerable_Select_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m22B3C908B58F4B2F196E44A2792A36E1567A2659(L_4, L_6, Enumerable_Select_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m22B3C908B58F4B2F196E44A2792A36E1567A2659_RuntimeMethod_var);
		V_1 = L_7;
		// var sum = expArr.Sum();
		U3CU3Ec__DisplayClass4_0_tD0A7A62DD0685EE65B6B89A1E872850918FC1649* L_8 = V_0;
		RuntimeObject* L_9 = V_1;
		float L_10;
		L_10 = Enumerable_Sum_m1374719E4DC4497F0842561BCCA42070CECA9AD0(L_9, NULL);
		NullCheck(L_8);
		L_8->___sum_1 = L_10;
		// return expArr.Select(n => n / sum);
		RuntimeObject* L_11 = V_1;
		U3CU3Ec__DisplayClass4_0_tD0A7A62DD0685EE65B6B89A1E872850918FC1649* L_12 = V_0;
		Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* L_13 = (Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2*)il2cpp_codegen_object_new(Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Func_2__ctor_mD64CD30418B670CBB35821EC2D8C91B7A1FAA959(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CSoftmaxU3Eb__1_m9A767AB9B227CE845F58E7CC476F40C56884CE4A_RuntimeMethod_var), NULL);
		RuntimeObject* L_14;
		L_14 = Enumerable_Select_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m22B3C908B58F4B2F196E44A2792A36E1567A2659(L_11, L_13, Enumerable_Select_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m22B3C908B58F4B2F196E44A2792A36E1567A2659_RuntimeMethod_var);
		return L_14;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Double> TensorFlowLite.MathTF::Softmax(System.Collections.Generic.IEnumerable`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MathTF_Softmax_mFDACDD7F409E2145A8DCBB375F30C840C8747D6F (RuntimeObject* ___0_arr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mBB6C314B4FD7CEDDACCED294B363B341EB3A60FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t0221E9CE1FF8B8FE59AED052D562790B96F13B3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CSoftmaxU3Eb__0_m6E53022C088E9495B43A512F1F1B4FD9CEFBCCA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CSoftmaxU3Eb__1_m41356A7DEB85965B8EADBD136A8246A3657E34B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t7C111F35989CF9AD24828A3E960D5D41F65B9E5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_t7C111F35989CF9AD24828A3E960D5D41F65B9E5A* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_t7C111F35989CF9AD24828A3E960D5D41F65B9E5A* L_0 = (U3CU3Ec__DisplayClass5_0_t7C111F35989CF9AD24828A3E960D5D41F65B9E5A*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t7C111F35989CF9AD24828A3E960D5D41F65B9E5A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_mE36EA14A3E760C4D78D8500593B4737FDF5667BF(L_0, NULL);
		V_0 = L_0;
		// double max = arr.Max();
		U3CU3Ec__DisplayClass5_0_t7C111F35989CF9AD24828A3E960D5D41F65B9E5A* L_1 = V_0;
		RuntimeObject* L_2 = ___0_arr;
		double L_3;
		L_3 = Enumerable_Max_mEAA507123A7B5CB2A4E6FA1E74FD325E2F885AFD(L_2, NULL);
		NullCheck(L_1);
		L_1->___max_0 = L_3;
		// var expArr = arr.Select(n => Math.Exp(n - max));
		RuntimeObject* L_4 = ___0_arr;
		U3CU3Ec__DisplayClass5_0_t7C111F35989CF9AD24828A3E960D5D41F65B9E5A* L_5 = V_0;
		Func_2_t0221E9CE1FF8B8FE59AED052D562790B96F13B3D* L_6 = (Func_2_t0221E9CE1FF8B8FE59AED052D562790B96F13B3D*)il2cpp_codegen_object_new(Func_2_t0221E9CE1FF8B8FE59AED052D562790B96F13B3D_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_m653F26D531BA0409921E01E3994462FC75138745(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CSoftmaxU3Eb__0_m6E53022C088E9495B43A512F1F1B4FD9CEFBCCA3_RuntimeMethod_var), NULL);
		RuntimeObject* L_7;
		L_7 = Enumerable_Select_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mBB6C314B4FD7CEDDACCED294B363B341EB3A60FC(L_4, L_6, Enumerable_Select_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mBB6C314B4FD7CEDDACCED294B363B341EB3A60FC_RuntimeMethod_var);
		V_1 = L_7;
		// var sum = expArr.Sum();
		U3CU3Ec__DisplayClass5_0_t7C111F35989CF9AD24828A3E960D5D41F65B9E5A* L_8 = V_0;
		RuntimeObject* L_9 = V_1;
		double L_10;
		L_10 = Enumerable_Sum_mB4B29B0D6E567EB810D0B439945F9BC6ACC01284(L_9, NULL);
		NullCheck(L_8);
		L_8->___sum_1 = L_10;
		// return expArr.Select(n => n / sum);
		RuntimeObject* L_11 = V_1;
		U3CU3Ec__DisplayClass5_0_t7C111F35989CF9AD24828A3E960D5D41F65B9E5A* L_12 = V_0;
		Func_2_t0221E9CE1FF8B8FE59AED052D562790B96F13B3D* L_13 = (Func_2_t0221E9CE1FF8B8FE59AED052D562790B96F13B3D*)il2cpp_codegen_object_new(Func_2_t0221E9CE1FF8B8FE59AED052D562790B96F13B3D_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Func_2__ctor_m653F26D531BA0409921E01E3994462FC75138745(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CSoftmaxU3Eb__1_m41356A7DEB85965B8EADBD136A8246A3657E34B4_RuntimeMethod_var), NULL);
		RuntimeObject* L_14;
		L_14 = Enumerable_Select_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mBB6C314B4FD7CEDDACCED294B363B341EB3A60FC(L_11, L_13, Enumerable_Select_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mBB6C314B4FD7CEDDACCED294B363B341EB3A60FC_RuntimeMethod_var);
		return L_14;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TensorFlowLite.MathTF/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mF493A20C7140DE6C2C0CD002D5D774611C2CBC0C (U3CU3Ec__DisplayClass4_0_tD0A7A62DD0685EE65B6B89A1E872850918FC1649* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Single TensorFlowLite.MathTF/<>c__DisplayClass4_0::<Softmax>b__0(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass4_0_U3CSoftmaxU3Eb__0_m667C87449D6DE42C436B837D62C09F43FA44895C (U3CU3Ec__DisplayClass4_0_tD0A7A62DD0685EE65B6B89A1E872850918FC1649* __this, float ___0_n, const RuntimeMethod* method) 
{
	{
		// var expArr = arr.Select(n => Mathf.Exp(n - max));
		float L_0 = ___0_n;
		float L_1 = __this->___max_0;
		float L_2;
		L_2 = expf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		return L_2;
	}
}
// System.Single TensorFlowLite.MathTF/<>c__DisplayClass4_0::<Softmax>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass4_0_U3CSoftmaxU3Eb__1_m9A767AB9B227CE845F58E7CC476F40C56884CE4A (U3CU3Ec__DisplayClass4_0_tD0A7A62DD0685EE65B6B89A1E872850918FC1649* __this, float ___0_n, const RuntimeMethod* method) 
{
	{
		// return expArr.Select(n => n / sum);
		float L_0 = ___0_n;
		float L_1 = __this->___sum_1;
		return ((float)(L_0/L_1));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TensorFlowLite.MathTF/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mE36EA14A3E760C4D78D8500593B4737FDF5667BF (U3CU3Ec__DisplayClass5_0_t7C111F35989CF9AD24828A3E960D5D41F65B9E5A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Double TensorFlowLite.MathTF/<>c__DisplayClass5_0::<Softmax>b__0(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec__DisplayClass5_0_U3CSoftmaxU3Eb__0_m6E53022C088E9495B43A512F1F1B4FD9CEFBCCA3 (U3CU3Ec__DisplayClass5_0_t7C111F35989CF9AD24828A3E960D5D41F65B9E5A* __this, double ___0_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var expArr = arr.Select(n => Math.Exp(n - max));
		double L_0 = ___0_n;
		double L_1 = __this->___max_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = exp(((double)il2cpp_codegen_subtract(L_0, L_1)));
		return L_2;
	}
}
// System.Double TensorFlowLite.MathTF/<>c__DisplayClass5_0::<Softmax>b__1(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec__DisplayClass5_0_U3CSoftmaxU3Eb__1_m41356A7DEB85965B8EADBD136A8246A3657E34B4 (U3CU3Ec__DisplayClass5_0_t7C111F35989CF9AD24828A3E960D5D41F65B9E5A* __this, double ___0_n, const RuntimeMethod* method) 
{
	{
		// return expArr.Select(n => n / sum);
		double L_0 = ___0_n;
		double L_1 = __this->___sum_1;
		return ((double)(L_0/L_1));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Quaternion TensorFlowLite.MatrixExtension::ExtractRotation(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MatrixExtension_ExtractRotation_mD638CC78813BD37947546751B86E850E2692D939 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_matrix, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// forward.x = matrix.m02;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___0_matrix;
		float L_1 = L_0.___m02_8;
		(&V_0)->___x_2 = L_1;
		// forward.y = matrix.m12;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = ___0_matrix;
		float L_3 = L_2.___m12_9;
		(&V_0)->___y_3 = L_3;
		// forward.z = matrix.m22;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4 = ___0_matrix;
		float L_5 = L_4.___m22_10;
		(&V_0)->___z_4 = L_5;
		// upwards.x = matrix.m01;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = ___0_matrix;
		float L_7 = L_6.___m01_4;
		(&V_1)->___x_2 = L_7;
		// upwards.y = matrix.m11;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_8 = ___0_matrix;
		float L_9 = L_8.___m11_5;
		(&V_1)->___y_3 = L_9;
		// upwards.z = matrix.m21;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10 = ___0_matrix;
		float L_11 = L_10.___m21_6;
		(&V_1)->___z_4 = L_11;
		// return Quaternion.LookRotation(forward, upwards);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_12, L_13, NULL);
		return L_14;
	}
}
// UnityEngine.Vector3 TensorFlowLite.MatrixExtension::ExtractPosition(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MatrixExtension_ExtractPosition_mFE1ABB1B30D59C0A02EF4AA123CC23133298FB1E (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_matrix, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// position.x = matrix.m03;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___0_matrix;
		float L_1 = L_0.___m03_12;
		(&V_0)->___x_2 = L_1;
		// position.y = matrix.m13;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = ___0_matrix;
		float L_3 = L_2.___m13_13;
		(&V_0)->___y_3 = L_3;
		// position.z = matrix.m23;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4 = ___0_matrix;
		float L_5 = L_4.___m23_14;
		(&V_0)->___z_4 = L_5;
		// return position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Vector3 TensorFlowLite.MatrixExtension::ExtractScale(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MatrixExtension_ExtractScale_mD5174B744B0CB8472219EAC2745D96BAB5D332CB (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_matrix, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// scale.x = new Vector4(matrix.m00, matrix.m10, matrix.m20, matrix.m30).magnitude;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___0_matrix;
		float L_1 = L_0.___m00_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = ___0_matrix;
		float L_3 = L_2.___m10_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4 = ___0_matrix;
		float L_5 = L_4.___m20_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = ___0_matrix;
		float L_7 = L_6.___m30_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		float L_9;
		L_9 = Vector4_get_magnitude_m97A83FC484190F07D8017F4BD10E3C81478E0D20_inline((&V_1), NULL);
		(&V_0)->___x_2 = L_9;
		// scale.y = new Vector4(matrix.m01, matrix.m11, matrix.m21, matrix.m31).magnitude;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10 = ___0_matrix;
		float L_11 = L_10.___m01_4;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = ___0_matrix;
		float L_13 = L_12.___m11_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_14 = ___0_matrix;
		float L_15 = L_14.___m21_6;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_16 = ___0_matrix;
		float L_17 = L_16.___m31_7;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_18), L_11, L_13, L_15, L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		float L_19;
		L_19 = Vector4_get_magnitude_m97A83FC484190F07D8017F4BD10E3C81478E0D20_inline((&V_1), NULL);
		(&V_0)->___y_3 = L_19;
		// scale.z = new Vector4(matrix.m02, matrix.m12, matrix.m22, matrix.m32).magnitude;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_20 = ___0_matrix;
		float L_21 = L_20.___m02_8;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_22 = ___0_matrix;
		float L_23 = L_22.___m12_9;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_24 = ___0_matrix;
		float L_25 = L_24.___m22_10;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_26 = ___0_matrix;
		float L_27 = L_26.___m32_11;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_28), L_21, L_23, L_25, L_27, /*hidden argument*/NULL);
		V_1 = L_28;
		float L_29;
		L_29 = Vector4_get_magnitude_m97A83FC484190F07D8017F4BD10E3C81478E0D20_inline((&V_1), NULL);
		(&V_0)->___z_4 = L_29;
		// return scale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_0;
		return L_30;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Color TensorFlowLite.PrimitiveDraw::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F PrimitiveDraw_get_color_mA5229F11E713100C8C85F47669BC60717A143899 (PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => mpb.GetColor(_Color);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_0 = __this->___mpb_1;
		il2cpp_codegen_runtime_class_init_inline(PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5_il2cpp_TypeInfo_var);
		int32_t L_1 = ((PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5_StaticFields*)il2cpp_codegen_static_fields_for(PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5_il2cpp_TypeInfo_var))->____Color_6;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = MaterialPropertyBlock_GetColor_m4F65D7F8EC406C8AF05EE8AD4DC957F20D60EC4F(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void TensorFlowLite.PrimitiveDraw::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw_set_color_m1938D9C48111C3DACACD7E401CA4B81845DD97CE (PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => mpb.SetColor(_Color, value);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_0 = __this->___mpb_1;
		il2cpp_codegen_runtime_class_init_inline(PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5_il2cpp_TypeInfo_var);
		int32_t L_1 = ((PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5_StaticFields*)il2cpp_codegen_static_fields_for(PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5_il2cpp_TypeInfo_var))->____Color_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___0_value;
		NullCheck(L_0);
		MaterialPropertyBlock_SetColor_m2E7CA761D98625E3B3CF380D3EBB2C99908FDFF6(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void TensorFlowLite.PrimitiveDraw::.ctor(UnityEngine.Camera,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw__ctor_mBDBC46C9340458751D555AE876AF6296C3369509 (PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, int32_t ___1_layer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B5024D6C2A93ECDF3DFB54A395211A21F751679);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B2_0 = NULL;
	PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5* G_B2_1 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B1_0 = NULL;
	PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5* G_B1_1 = NULL;
	{
		// public PrimitiveDraw(Camera camera = null, int layer = 0)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// material = new Material(Shader.Find("Hidden/PrimitiveDraw"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0;
		L_0 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral7B5024D6C2A93ECDF3DFB54A395211A21F751679, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_1, L_0, NULL);
		__this->___material_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___material_0), (void*)L_1);
		// material.hideFlags = HideFlags.HideAndDontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___material_0;
		NullCheck(L_2);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_2, ((int32_t)61), NULL);
		// material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___material_0;
		NullCheck(L_3);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_3, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 5, NULL);
		// material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___material_0;
		NullCheck(L_4);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_4, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
		// material.SetInt("_Cull", (int)UnityEngine.Rendering.CullMode.Off);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___material_0;
		NullCheck(L_5);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_5, _stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22, 0, NULL);
		// material.SetInt("_ZWrite", 0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___material_0;
		NullCheck(L_6);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_6, _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C, 0, NULL);
		// material.SetInt("_ZTest", 6); //always
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___material_0;
		NullCheck(L_7);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_7, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, 6, NULL);
		// material.enableInstancing = true;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->___material_0;
		NullCheck(L_8);
		Material_set_enableInstancing_m84BA72A28BCFE94B50535BDE410A539A7CD7AF80(L_8, (bool)1, NULL);
		// mpb = new MaterialPropertyBlock();
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_9 = (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D*)il2cpp_codegen_object_new(MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		MaterialPropertyBlock__ctor_m14C3432585F7BB65028BCD64A0FD6607A1B490FB(L_9, NULL);
		__this->___mpb_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mpb_1), (void*)L_9);
		// cube = new MeshBuffer(CreateMesh(PrimitiveType.Cube), 512);
		il2cpp_codegen_runtime_class_init_inline(PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5_il2cpp_TypeInfo_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_10;
		L_10 = PrimitiveDraw_CreateMesh_m918A0DF41E66B23B5E04C44BD35023371A2D603E(3, NULL);
		MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A* L_11 = (MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A*)il2cpp_codegen_object_new(MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		MeshBuffer__ctor_m054C3F5283405D24A59DD5ED77FADE2B14A1EF21(L_11, L_10, ((int32_t)512), NULL);
		__this->___cube_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cube_2), (void*)L_11);
		// quad = new MeshBuffer(CreateMesh(PrimitiveType.Quad), 512);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_12;
		L_12 = PrimitiveDraw_CreateMesh_m918A0DF41E66B23B5E04C44BD35023371A2D603E(5, NULL);
		MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A* L_13 = (MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A*)il2cpp_codegen_object_new(MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		MeshBuffer__ctor_m054C3F5283405D24A59DD5ED77FADE2B14A1EF21(L_13, L_12, ((int32_t)512), NULL);
		__this->___quad_3 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___quad_3), (void*)L_13);
		// this.camera = camera ?? Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = ___0_camera;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15 = L_14;
		G_B1_0 = L_15;
		G_B1_1 = __this;
		if (L_15)
		{
			G_B2_0 = L_15;
			G_B2_1 = __this;
			goto IL_00cc;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16;
		L_16 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		G_B2_0 = L_16;
		G_B2_1 = G_B1_1;
	}

IL_00cc:
	{
		NullCheck(G_B2_1);
		G_B2_1->___camera_4 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___camera_4), (void*)G_B2_0);
		// this.layer = layer;
		int32_t L_17 = ___1_layer;
		__this->___layer_5 = L_17;
		// color = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		L_18 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		PrimitiveDraw_set_color_m1938D9C48111C3DACACD7E401CA4B81845DD97CE(__this, L_18, NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.PrimitiveDraw::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw_Dispose_mF27A6821705E6F65239E5B75FE57BD5AF1BD3471 (PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Object.Destroy(material);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___material_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// material = null;
		__this->___material_0 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___material_0), (void*)(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL);
		// cube.Dispose();
		MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A* L_1 = __this->___cube_2;
		NullCheck(L_1);
		MeshBuffer_Dispose_mB05D8DF3E6A5997249D0BBB7ECEEF70DF957A1C9(L_1, NULL);
		// quad.Dispose();
		MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A* L_2 = __this->___quad_3;
		NullCheck(L_2);
		MeshBuffer_Dispose_mB05D8DF3E6A5997249D0BBB7ECEEF70DF957A1C9(L_2, NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.PrimitiveDraw::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw_Clear_m7634357CABA0984D40D912A62E7C73340BC9D6F7 (PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5* __this, const RuntimeMethod* method) 
{
	{
		// cube.Clear();
		MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A* L_0 = __this->___cube_2;
		NullCheck(L_0);
		MeshBuffer_Clear_m3135884D439FE5471968068033B8E01DA4F0ABCC(L_0, NULL);
		// quad.Clear();
		MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A* L_1 = __this->___quad_3;
		NullCheck(L_1);
		MeshBuffer_Clear_m3135884D439FE5471968068033B8E01DA4F0ABCC(L_1, NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.PrimitiveDraw::Apply(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw_Apply_m031234AB855C00BDFE25B6762C746261E17C9FB7 (PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5* __this, bool ___0_drawEditor, const RuntimeMethod* method) 
{
	{
		// Draw(cube, drawEditor);
		MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A* L_0 = __this->___cube_2;
		bool L_1 = ___0_drawEditor;
		PrimitiveDraw_Draw_mD2262E86E392672DF3CFDFE229DB405A5D78301C(__this, L_0, L_1, NULL);
		// Draw(quad, drawEditor);
		MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A* L_2 = __this->___quad_3;
		bool L_3 = ___0_drawEditor;
		PrimitiveDraw_Draw_mD2262E86E392672DF3CFDFE229DB405A5D78301C(__this, L_2, L_3, NULL);
		// Clear();
		PrimitiveDraw_Clear_m7634357CABA0984D40D912A62E7C73340BC9D6F7(__this, NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.PrimitiveDraw::Line(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw_Line_mCB5E0A39A90F4C359EA9E1D9043F498BDC7E15BB (PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_end, float ___2_thickness, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (TryLine2DMatrix(start, end, thickness, out Matrix4x4 mtx))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_end;
		float L_2 = ___2_thickness;
		il2cpp_codegen_runtime_class_init_inline(PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = PrimitiveDraw_TryLine2DMatrix_m01F21D2C1E9B62FDE07C34C10A10E09AF2E8AAE0(L_0, L_1, L_2, (&V_0), NULL);
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		// quad.Add(mtx);
		MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A* L_4 = __this->___quad_3;
		NullCheck(L_4);
		MeshBuffer_Add_m28049DE3C5C838675E2AE8DE3654B3A5D513F4BB(L_4, (&V_0), NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void TensorFlowLite.PrimitiveDraw::Rect(UnityEngine.Rect,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw_Rect_mACD81F09BE03017E5BF82781A4F0096968C373F2 (PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, float ___1_thickness, float ___2_z, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (rect.width <= 0 || rect.height <= 0) return;
		float L_0;
		L_0 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___0_rect), NULL);
		if ((((float)L_0) <= ((float)(0.0f))))
		{
			goto IL_001c;
		}
	}
	{
		float L_1;
		L_1 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___0_rect), NULL);
		if ((!(((float)L_1) <= ((float)(0.0f)))))
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		// if (rect.width <= 0 || rect.height <= 0) return;
		return;
	}

IL_001d:
	{
		// var p0 = new Vector3(rect.xMin, rect.yMin, z);
		float L_2;
		L_2 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___0_rect), NULL);
		float L_3;
		L_3 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___0_rect), NULL);
		float L_4 = ___2_z;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_2, L_3, L_4, NULL);
		// var p1 = new Vector3(rect.xMax, rect.yMin, z);
		float L_5;
		L_5 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___0_rect), NULL);
		float L_6;
		L_6 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___0_rect), NULL);
		float L_7 = ___2_z;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), L_5, L_6, L_7, NULL);
		// var p2 = new Vector3(rect.xMax, rect.yMax, z);
		float L_8;
		L_8 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___0_rect), NULL);
		float L_9;
		L_9 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___0_rect), NULL);
		float L_10 = ___2_z;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), L_8, L_9, L_10, NULL);
		// var p3 = new Vector3(rect.xMin, rect.yMax, z);
		float L_11;
		L_11 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___0_rect), NULL);
		float L_12;
		L_12 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___0_rect), NULL);
		float L_13 = ___2_z;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_3), L_11, L_12, L_13, NULL);
		// TryLine2DMatrix(p0, p1, thickness, out mtx);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_1;
		float L_16 = ___1_thickness;
		il2cpp_codegen_runtime_class_init_inline(PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = PrimitiveDraw_TryLine2DMatrix_m01F21D2C1E9B62FDE07C34C10A10E09AF2E8AAE0(L_14, L_15, L_16, (&V_4), NULL);
		// quad.Add(mtx);
		MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A* L_18 = __this->___quad_3;
		NullCheck(L_18);
		MeshBuffer_Add_m28049DE3C5C838675E2AE8DE3654B3A5D513F4BB(L_18, (&V_4), NULL);
		// TryLine2DMatrix(p1, p2, thickness, out mtx);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_2;
		float L_21 = ___1_thickness;
		bool L_22;
		L_22 = PrimitiveDraw_TryLine2DMatrix_m01F21D2C1E9B62FDE07C34C10A10E09AF2E8AAE0(L_19, L_20, L_21, (&V_4), NULL);
		// quad.Add(mtx);
		MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A* L_23 = __this->___quad_3;
		NullCheck(L_23);
		MeshBuffer_Add_m28049DE3C5C838675E2AE8DE3654B3A5D513F4BB(L_23, (&V_4), NULL);
		// TryLine2DMatrix(p2, p3, thickness, out mtx);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_3;
		float L_26 = ___1_thickness;
		bool L_27;
		L_27 = PrimitiveDraw_TryLine2DMatrix_m01F21D2C1E9B62FDE07C34C10A10E09AF2E8AAE0(L_24, L_25, L_26, (&V_4), NULL);
		// quad.Add(mtx);
		MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A* L_28 = __this->___quad_3;
		NullCheck(L_28);
		MeshBuffer_Add_m28049DE3C5C838675E2AE8DE3654B3A5D513F4BB(L_28, (&V_4), NULL);
		// TryLine2DMatrix(p3, p0, thickness, out mtx);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_0;
		float L_31 = ___1_thickness;
		bool L_32;
		L_32 = PrimitiveDraw_TryLine2DMatrix_m01F21D2C1E9B62FDE07C34C10A10E09AF2E8AAE0(L_29, L_30, L_31, (&V_4), NULL);
		// quad.Add(mtx);
		MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A* L_33 = __this->___quad_3;
		NullCheck(L_33);
		MeshBuffer_Add_m28049DE3C5C838675E2AE8DE3654B3A5D513F4BB(L_33, (&V_4), NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.PrimitiveDraw::Point(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw_Point_mD1DCA9D0A38F5127B2B9FC009414C5450B4D4209 (PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p, float ___1_thickness, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var mtx = Matrix4x4.TRS(
		//     p,
		//     Quaternion.identity,
		//     new Vector3(thickness, thickness, thickness));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_p;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		float L_2 = ___1_thickness;
		float L_3 = ___1_thickness;
		float L_4 = ___1_thickness;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_2, L_3, L_4, /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6;
		L_6 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_0, L_1, L_5, NULL);
		V_0 = L_6;
		// quad.Add(mtx);
		MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A* L_7 = __this->___quad_3;
		NullCheck(L_7);
		MeshBuffer_Add_m28049DE3C5C838675E2AE8DE3654B3A5D513F4BB(L_7, (&V_0), NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.PrimitiveDraw::Line3D(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw_Line3D_m1E0D94A2F5E22F9FCEC9C9F080AD1819094F0169 (PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_end, float ___2_thickness, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (TryLine3DMatrix(start, end, thickness, out Matrix4x4 mtx))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_end;
		float L_2 = ___2_thickness;
		il2cpp_codegen_runtime_class_init_inline(PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = PrimitiveDraw_TryLine3DMatrix_mAA4D5731FEBA47D49E50DFBA7DE0E528A35E7BAF(L_0, L_1, L_2, (&V_0), NULL);
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		// cube.Add(mtx);
		MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A* L_4 = __this->___cube_2;
		NullCheck(L_4);
		MeshBuffer_Add_m28049DE3C5C838675E2AE8DE3654B3A5D513F4BB(L_4, (&V_0), NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void TensorFlowLite.PrimitiveDraw::Cube(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw_Cube_m6ECD1763A4338BA84447EE9248CB2E57E6757AC6 (PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, float ___1_size, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (size <= 0) return;
		float L_0 = ___1_size;
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_0009;
		}
	}
	{
		// if (size <= 0) return;
		return;
	}

IL_0009:
	{
		// var mtx = Matrix4x4.TRS(
		//     center,
		//     Quaternion.identity,
		//     new Vector3(size, size, size));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_center;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		float L_3 = ___1_size;
		float L_4 = ___1_size;
		float L_5 = ___1_size;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_3, L_4, L_5, /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7;
		L_7 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_1, L_2, L_6, NULL);
		V_0 = L_7;
		// cube.Add(mtx);
		MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A* L_8 = __this->___cube_2;
		NullCheck(L_8);
		MeshBuffer_Add_m28049DE3C5C838675E2AE8DE3654B3A5D513F4BB(L_8, (&V_0), NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.PrimitiveDraw::Quad(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw_Quad_m78FD2EC394A72F39A346A8D298957274778A763D (PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_c, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_d, float ___4_thickness, const RuntimeMethod* method) 
{
	{
		// Line(a, b, thickness);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_b;
		float L_2 = ___4_thickness;
		PrimitiveDraw_Line_mCB5E0A39A90F4C359EA9E1D9043F498BDC7E15BB(__this, L_0, L_1, L_2, NULL);
		// Line(b, c, thickness);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_b;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___2_c;
		float L_5 = ___4_thickness;
		PrimitiveDraw_Line_mCB5E0A39A90F4C359EA9E1D9043F498BDC7E15BB(__this, L_3, L_4, L_5, NULL);
		// Line(c, d, thickness);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___2_c;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___3_d;
		float L_8 = ___4_thickness;
		PrimitiveDraw_Line_mCB5E0A39A90F4C359EA9E1D9043F498BDC7E15BB(__this, L_6, L_7, L_8, NULL);
		// Line(d, a, thickness);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___3_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_a;
		float L_11 = ___4_thickness;
		PrimitiveDraw_Line_mCB5E0A39A90F4C359EA9E1D9043F498BDC7E15BB(__this, L_9, L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.PrimitiveDraw::Draw(TensorFlowLite.PrimitiveDraw/MeshBuffer,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw_Draw_mD2262E86E392672DF3CFDFE229DB405A5D78301C (PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5* __this, MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A* ___0_mb, bool ___1_drawEditor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mb.index <= 0) return;
		MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A* L_0 = ___0_mb;
		NullCheck(L_0);
		int32_t L_1 = L_0->___index_2;
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		// if (mb.index <= 0) return;
		return;
	}

IL_000a:
	{
		// Graphics.DrawMeshInstanced(
		//     mb.mesh, 0, material, mb.buffer, mb.index,
		//     mpb, ShadowCastingMode.Off, false, layer, camera,
		//     LightProbeUsage.Off, null);
		MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A* L_2 = ___0_mb;
		NullCheck(L_2);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_3 = L_2->___mesh_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___material_0;
		MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A* L_5 = ___0_mb;
		NullCheck(L_5);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_6 = L_5->___buffer_1;
		MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A* L_7 = ___0_mb;
		NullCheck(L_7);
		int32_t L_8 = L_7->___index_2;
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_9 = __this->___mpb_1;
		int32_t L_10 = __this->___layer_5;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11 = __this->___camera_4;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_DrawMeshInstanced_mA0B0EAC10AC6D601552229CD89CA885E3437E70F(L_3, 0, L_4, L_6, L_8, L_9, 0, (bool)0, L_10, L_11, 0, (LightProbeProxyVolume_t431001CA94D2BB5DB419E2A89E7D8116E4E1B658*)NULL, NULL);
		// }
		return;
	}
}
// System.Boolean TensorFlowLite.PrimitiveDraw::TryLine2DMatrix(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitiveDraw_TryLine2DMatrix_m01F21D2C1E9B62FDE07C34C10A10E09AF2E8AAE0 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_end, float ___2_thickness, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___3_mtx, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// var vec = end - start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_end;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// var length = Vector3.Magnitude(vec);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		float L_4;
		L_4 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_3, NULL);
		V_1 = L_4;
		// if (length < float.Epsilon)
		float L_5 = V_1;
		if ((!(((float)L_5) < ((float)(1.40129846E-45f)))))
		{
			goto IL_0024;
		}
	}
	{
		// mtx = Matrix4x4.identity;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_6 = ___3_mtx;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7;
		L_7 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)L_6 = L_7;
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// mtx = Matrix4x4.TRS(
		//     (end + start) / 2,
		//     Quaternion.Euler(0, 0, Mathf.Atan2(vec.y, vec.x) * Mathf.Rad2Deg),
		//     new Vector3(length, thickness, thickness));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_8 = ___3_mtx;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___1_end;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_9, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_11, (2.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		float L_14 = L_13.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		float L_16 = L_15.___x_2;
		float L_17;
		L_17 = atan2f(L_14, L_16);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), ((float)il2cpp_codegen_multiply(L_17, (57.2957802f))), NULL);
		float L_19 = V_1;
		float L_20 = ___2_thickness;
		float L_21 = ___2_thickness;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), L_19, L_20, L_21, /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_23;
		L_23 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_12, L_18, L_22, NULL);
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)L_8 = L_23;
		// return true;
		return (bool)1;
	}
}
// System.Boolean TensorFlowLite.PrimitiveDraw::TryLine3DMatrix(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitiveDraw_TryLine3DMatrix_mAA4D5731FEBA47D49E50DFBA7DE0E528A35E7BAF (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_end, float ___2_thickness, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___3_mtx, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// var vec = end - start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_end;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// var length = Vector3.Magnitude(vec);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		float L_4;
		L_4 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_3, NULL);
		V_1 = L_4;
		// if (length < float.Epsilon)
		float L_5 = V_1;
		if ((!(((float)L_5) < ((float)(1.40129846E-45f)))))
		{
			goto IL_0024;
		}
	}
	{
		// mtx = Matrix4x4.identity;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_6 = ___3_mtx;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7;
		L_7 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)L_6 = L_7;
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// mtx = Matrix4x4.TRS(
		//     (end + start) / 2,
		//     Quaternion.LookRotation(vec, Vector3.forward),
		//     new Vector3(thickness, thickness, length));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_8 = ___3_mtx;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___1_end;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_9, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_11, (2.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_13, L_14, NULL);
		float L_16 = ___2_thickness;
		float L_17 = ___2_thickness;
		float L_18 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), L_16, L_17, L_18, /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_20;
		L_20 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_12, L_15, L_19, NULL);
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)L_8 = L_20;
		// return true;
		return (bool)1;
	}
}
// UnityEngine.Mesh TensorFlowLite.PrimitiveDraw::CreateMesh(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* PrimitiveDraw_CreateMesh_m918A0DF41E66B23B5E04C44BD35023371A2D603E (int32_t ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_0 = NULL;
	{
		// var go = GameObject.CreatePrimitive(type);
		int32_t L_0 = ___0_type;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B(L_0, NULL);
		// Mesh mesh = go.GetComponent<MeshFilter>().sharedMesh;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		NullCheck(L_2);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_3;
		L_3 = GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8(L_2, GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		NullCheck(L_3);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_4;
		L_4 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_3, NULL);
		V_0 = L_4;
		// Object.Destroy(go);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		// return mesh;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_5 = V_0;
		return L_5;
	}
}
// System.Void TensorFlowLite.PrimitiveDraw::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw__cctor_m123D3FD8989A0596E1B4387DC0611DDD537BCE06 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int _Color = Shader.PropertyToID("_Color");
		int32_t L_0;
		L_0 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, NULL);
		((PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5_StaticFields*)il2cpp_codegen_static_fields_for(PrimitiveDraw_t386B1D497A2639774B4BC791FF4262044BCADBD5_il2cpp_TypeInfo_var))->____Color_6 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TensorFlowLite.PrimitiveDraw/MeshBuffer::.ctor(UnityEngine.Mesh,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuffer__ctor_m054C3F5283405D24A59DD5ED77FADE2B14A1EF21 (MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_mesh, int32_t ___1_initialSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MeshBuffer(Mesh mesh, int initialSize = 256)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.mesh = mesh;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = ___0_mesh;
		__this->___mesh_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mesh_0), (void*)L_0);
		// buffer = new Matrix4x4[initialSize];
		int32_t L_1 = ___1_initialSize;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_2 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->___buffer_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer_1), (void*)L_2);
		// index = 0;
		__this->___index_2 = 0;
		// }
		return;
	}
}
// System.Void TensorFlowLite.PrimitiveDraw/MeshBuffer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuffer_Dispose_mB05D8DF3E6A5997249D0BBB7ECEEF70DF957A1C9 (MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A* __this, const RuntimeMethod* method) 
{
	{
		// mesh = null;
		__this->___mesh_0 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mesh_0), (void*)(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)NULL);
		// buffer = null;
		__this->___buffer_1 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer_1), (void*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.PrimitiveDraw/MeshBuffer::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuffer_Clear_m3135884D439FE5471968068033B8E01DA4F0ABCC (MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A* __this, const RuntimeMethod* method) 
{
	{
		// index = 0;
		__this->___index_2 = 0;
		// }
		return;
	}
}
// System.Void TensorFlowLite.PrimitiveDraw/MeshBuffer::Add(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuffer_Add_m28049DE3C5C838675E2AE8DE3654B3A5D513F4BB (MeshBuffer_t6ABC9436E77C06110FE7328B63967E1596ADA59A* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_mtx, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD356BAD4D0F4DD6D4F4A44A9BD87D2917B639F3A);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* V_0 = NULL;
	{
		// buffer[index] = mtx;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = __this->___buffer_1;
		int32_t L_1 = __this->___index_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_2 = ___0_mtx;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3 = (*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)L_2);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_3);
		// index++;
		int32_t L_4 = __this->___index_2;
		__this->___index_2 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// if (index >= buffer.Length)
		int32_t L_5 = __this->___index_2;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_6 = __this->___buffer_1;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0082;
		}
	}
	{
		// var newBuffer = new Matrix4x4[buffer.Length * 2];
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_7 = __this->___buffer_1;
		NullCheck(L_7);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_8 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_7)->max_length)), 2)));
		V_0 = L_8;
		// System.Array.Copy(buffer, newBuffer, buffer.Length);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_9 = __this->___buffer_1;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_10 = V_0;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_11 = __this->___buffer_1;
		NullCheck(L_11);
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_9, (RuntimeArray*)L_10, ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
		// buffer = newBuffer;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_12 = V_0;
		__this->___buffer_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer_1), (void*)L_12);
		// Debug.Log($"Allocate new buffer: {newBuffer.Length} mesh: {mesh.name}");
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = ((int32_t)(((RuntimeArray*)L_13)->max_length));
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_16 = __this->___mesh_0;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_16, NULL);
		String_t* L_18;
		L_18 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralD356BAD4D0F4DD6D4F4A44A9BD87D2917B639F3A, L_15, L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_18, NULL);
	}

IL_0082:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single TensorFlowLite.RectExtension::IntersectionOverUnion(UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RectExtension_IntersectionOverUnion_m9956EB9B3F828856F4468C8FCD08BB8F7F43369E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_rect1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	float V_20 = 0.0f;
	{
		// float sx0 = rect0.xMin;
		float L_0;
		L_0 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___0_rect0), NULL);
		// float sy0 = rect0.yMin;
		float L_1;
		L_1 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___0_rect0), NULL);
		V_0 = L_1;
		// float ex0 = rect0.xMax;
		float L_2;
		L_2 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___0_rect0), NULL);
		V_1 = L_2;
		// float ey0 = rect0.yMax;
		float L_3;
		L_3 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___0_rect0), NULL);
		V_2 = L_3;
		// float sx1 = rect1.xMin;
		float L_4;
		L_4 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___1_rect1), NULL);
		V_3 = L_4;
		// float sy1 = rect1.yMin;
		float L_5;
		L_5 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___1_rect1), NULL);
		V_4 = L_5;
		// float ex1 = rect1.xMax;
		float L_6;
		L_6 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___1_rect1), NULL);
		V_5 = L_6;
		// float ey1 = rect1.yMax;
		float L_7;
		L_7 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___1_rect1), NULL);
		V_6 = L_7;
		// float xmin0 = Mathf.Min(sx0, ex0);
		float L_8 = L_0;
		float L_9 = V_1;
		float L_10;
		L_10 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_8, L_9, NULL);
		V_7 = L_10;
		// float ymin0 = Mathf.Min(sy0, ey0);
		float L_11 = V_0;
		float L_12 = V_2;
		float L_13;
		L_13 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_11, L_12, NULL);
		V_8 = L_13;
		// float xmax0 = Mathf.Max(sx0, ex0);
		float L_14 = V_1;
		float L_15;
		L_15 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_8, L_14, NULL);
		V_9 = L_15;
		// float ymax0 = Mathf.Max(sy0, ey0);
		float L_16 = V_0;
		float L_17 = V_2;
		float L_18;
		L_18 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_16, L_17, NULL);
		V_10 = L_18;
		// float xmin1 = Mathf.Min(sx1, ex1);
		float L_19 = V_3;
		float L_20 = V_5;
		float L_21;
		L_21 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_19, L_20, NULL);
		V_11 = L_21;
		// float ymin1 = Mathf.Min(sy1, ey1);
		float L_22 = V_4;
		float L_23 = V_6;
		float L_24;
		L_24 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_22, L_23, NULL);
		V_12 = L_24;
		// float xmax1 = Mathf.Max(sx1, ex1);
		float L_25 = V_3;
		float L_26 = V_5;
		float L_27;
		L_27 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_25, L_26, NULL);
		V_13 = L_27;
		// float ymax1 = Mathf.Max(sy1, ey1);
		float L_28 = V_4;
		float L_29 = V_6;
		float L_30;
		L_30 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_28, L_29, NULL);
		V_14 = L_30;
		// float area0 = (ymax0 - ymin0) * (xmax0 - xmin0);
		float L_31 = V_10;
		float L_32 = V_8;
		float L_33 = V_9;
		float L_34 = V_7;
		V_15 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_31, L_32)), ((float)il2cpp_codegen_subtract(L_33, L_34))));
		// float area1 = (ymax1 - ymin1) * (xmax1 - xmin1);
		float L_35 = V_14;
		float L_36 = V_12;
		float L_37 = V_13;
		float L_38 = V_11;
		V_16 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_35, L_36)), ((float)il2cpp_codegen_subtract(L_37, L_38))));
		// if (area0 <= 0 || area1 <= 0)
		float L_39 = V_15;
		if ((((float)L_39) <= ((float)(0.0f))))
		{
			goto IL_00bb;
		}
	}
	{
		float L_40 = V_16;
		if ((!(((float)L_40) <= ((float)(0.0f)))))
		{
			goto IL_00c1;
		}
	}

IL_00bb:
	{
		// return 0.0f;
		return (0.0f);
	}

IL_00c1:
	{
		// float intersect_xmin = Mathf.Max(xmin0, xmin1);
		float L_41 = V_7;
		float L_42 = V_11;
		float L_43;
		L_43 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_41, L_42, NULL);
		V_17 = L_43;
		// float intersect_ymin = Mathf.Max(ymin0, ymin1);
		float L_44 = V_8;
		float L_45 = V_12;
		float L_46;
		L_46 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_44, L_45, NULL);
		V_18 = L_46;
		// float intersect_xmax = Mathf.Min(xmax0, xmax1);
		float L_47 = V_9;
		float L_48 = V_13;
		float L_49;
		L_49 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_47, L_48, NULL);
		V_19 = L_49;
		// float intersect_ymax = Mathf.Min(ymax0, ymax1);
		float L_50 = V_10;
		float L_51 = V_14;
		float L_52;
		L_52 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_50, L_51, NULL);
		// float intersect_area = Mathf.Max(intersect_ymax - intersect_ymin, 0.0f) *
		//                        Mathf.Max(intersect_xmax - intersect_xmin, 0.0f);
		float L_53 = V_18;
		float L_54;
		L_54 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_subtract(L_52, L_53)), (0.0f), NULL);
		float L_55 = V_19;
		float L_56 = V_17;
		float L_57;
		L_57 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_subtract(L_55, L_56)), (0.0f), NULL);
		V_20 = ((float)il2cpp_codegen_multiply(L_54, L_57));
		// return intersect_area / (area0 + area1 - intersect_area);
		float L_58 = V_20;
		float L_59 = V_15;
		float L_60 = V_16;
		float L_61 = V_20;
		return ((float)(L_58/((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(L_59, L_60)), L_61))));
	}
}
// UnityEngine.Rect TensorFlowLite.RectExtension::GetBoundingBox(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectExtension_GetBoundingBox_mD3461C5D744454AD4DF1C8CB4A78182D09AF6EE0 (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_arr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_4 = NULL;
	int32_t V_5 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// float xMin = float.MaxValue;
		V_0 = ((std::numeric_limits<float>::max)());
		// float yMin = float.MaxValue;
		V_1 = ((std::numeric_limits<float>::max)());
		// float xMax = float.MinValue;
		V_2 = (-(std::numeric_limits<float>::max)());
		// float yMax = float.MinValue;
		V_3 = (-(std::numeric_limits<float>::max)());
		// foreach (Vector2 v in arr)
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = ___0_arr;
		V_4 = L_0;
		V_5 = 0;
		goto IL_0069;
	}

IL_0020:
	{
		// foreach (Vector2 v in arr)
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = V_4;
		int32_t L_2 = V_5;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_6 = L_4;
		// xMin = Math.Min(xMin, v.x);
		float L_5 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_6;
		float L_7 = L_6.___x_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_8;
		L_8 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(L_5, L_7, NULL);
		V_0 = L_8;
		// yMin = Math.Min(yMin, v.y);
		float L_9 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_6;
		float L_11 = L_10.___y_1;
		float L_12;
		L_12 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(L_9, L_11, NULL);
		V_1 = L_12;
		// xMax = Math.Max(xMax, v.x);
		float L_13 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_6;
		float L_15 = L_14.___x_0;
		float L_16;
		L_16 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_13, L_15, NULL);
		V_2 = L_16;
		// yMax = Math.Max(yMax, v.y);
		float L_17 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_6;
		float L_19 = L_18.___y_1;
		float L_20;
		L_20 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_17, L_19, NULL);
		V_3 = L_20;
		int32_t L_21 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0069:
	{
		// foreach (Vector2 v in arr)
		int32_t L_22 = V_5;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_23 = V_4;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		// return Rect.MinMaxRect(xMin, yMin, xMax, yMax);
		float L_24 = V_0;
		float L_25 = V_1;
		float L_26 = V_2;
		float L_27 = V_3;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_28;
		L_28 = Rect_MinMaxRect_m540D2DD8C255D276AD4AE06D9CCA2A667EFA39E5(L_24, L_25, L_26, L_27, NULL);
		return L_28;
	}
}
// UnityEngine.Rect TensorFlowLite.RectExtension::GetBoundingBox(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectExtension_GetBoundingBox_m9EE9A8541896CD61C3F84A6BD3525D3C3A61F9B5 (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_arr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_4 = NULL;
	int32_t V_5 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// float xMin = float.MaxValue;
		V_0 = ((std::numeric_limits<float>::max)());
		// float yMin = float.MaxValue;
		V_1 = ((std::numeric_limits<float>::max)());
		// float xMax = float.MinValue;
		V_2 = (-(std::numeric_limits<float>::max)());
		// float yMax = float.MinValue;
		V_3 = (-(std::numeric_limits<float>::max)());
		// foreach (Vector3 v in arr)
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_arr;
		V_4 = L_0;
		V_5 = 0;
		goto IL_0069;
	}

IL_0020:
	{
		// foreach (Vector3 v in arr)
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = V_4;
		int32_t L_2 = V_5;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_6 = L_4;
		// xMin = Math.Min(xMin, v.x);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_6;
		float L_7 = L_6.___x_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_8;
		L_8 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(L_5, L_7, NULL);
		V_0 = L_8;
		// yMin = Math.Min(yMin, v.y);
		float L_9 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_6;
		float L_11 = L_10.___y_3;
		float L_12;
		L_12 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(L_9, L_11, NULL);
		V_1 = L_12;
		// xMax = Math.Max(xMax, v.x);
		float L_13 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_6;
		float L_15 = L_14.___x_2;
		float L_16;
		L_16 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_13, L_15, NULL);
		V_2 = L_16;
		// yMax = Math.Max(yMax, v.y);
		float L_17 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_6;
		float L_19 = L_18.___y_3;
		float L_20;
		L_20 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_17, L_19, NULL);
		V_3 = L_20;
		int32_t L_21 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0069:
	{
		// foreach (Vector3 v in arr)
		int32_t L_22 = V_5;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_23 = V_4;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		// return Rect.MinMaxRect(xMin, yMin, xMax, yMax);
		float L_24 = V_0;
		float L_25 = V_1;
		float L_26 = V_2;
		float L_27 = V_3;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_28;
		L_28 = Rect_MinMaxRect_m540D2DD8C255D276AD4AE06D9CCA2A667EFA39E5(L_24, L_25, L_26, L_27, NULL);
		return L_28;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.RenderTexture TensorFlowLite.TextureResizer::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* TextureResizer_get_texture_m955DDD0A66767AFB0546C22067F6C5CBEE92E76A (TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0* __this, const RuntimeMethod* method) 
{
	{
		// public RenderTexture texture => resizeTexture;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___resizeTexture_0;
		return L_0;
	}
}
// UnityEngine.Material TensorFlowLite.TextureResizer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* TextureResizer_get_material_m941D8F4FDC6BAE1AEF3BC3460E36F056A1662E24 (TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B112A45AF7EB2AA7809D91549390A31A3ECCF64);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_blitMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____blitMaterial_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// _blitMaterial = new Material(Shader.Find("Hidden/TFLite/Resize"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral0B112A45AF7EB2AA7809D91549390A31A3ECCF64, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->____blitMaterial_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____blitMaterial_1), (void*)L_3);
	}

IL_0023:
	{
		// return _blitMaterial;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->____blitMaterial_1;
		return L_4;
	}
}
// UnityEngine.Vector4 TensorFlowLite.TextureResizer::get_UVRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 TextureResizer_get_UVRect_m6CD5408438E986BB6BCB00C8C41AB7ADC8F9A1F9 (TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => material.GetVector(_UVRect);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = TextureResizer_get_material_m941D8F4FDC6BAE1AEF3BC3460E36F056A1662E24(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_il2cpp_TypeInfo_var);
		int32_t L_1 = ((TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_StaticFields*)il2cpp_codegen_static_fields_for(TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_il2cpp_TypeInfo_var))->____UVRect_3;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = Material_GetVector_mFE0366FDCB87331910BCE5E234030C20A25484A2(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void TensorFlowLite.TextureResizer::set_UVRect(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureResizer_set_UVRect_m3D5356A95B00DC0710E37447C155FED44C51F6AD (TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => material.SetVector(_UVRect, value);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = TextureResizer_get_material_m941D8F4FDC6BAE1AEF3BC3460E36F056A1662E24(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_il2cpp_TypeInfo_var);
		int32_t L_1 = ((TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_StaticFields*)il2cpp_codegen_static_fields_for(TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_il2cpp_TypeInfo_var))->____UVRect_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___0_value;
		NullCheck(L_0);
		Material_SetVector_m44CD02D4555E2AF391C30700F0AEC36BA04CFEA7(L_0, L_1, L_2, NULL);
		return;
	}
}
// UnityEngine.Matrix4x4 TensorFlowLite.TextureResizer::get_VertexTransfrom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 TextureResizer_get_VertexTransfrom_m873C62805B059B5FC60604D8345FF70D9CB9DAF7 (TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => material.GetMatrix(_VertTransform);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = TextureResizer_get_material_m941D8F4FDC6BAE1AEF3BC3460E36F056A1662E24(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_il2cpp_TypeInfo_var);
		int32_t L_1 = ((TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_StaticFields*)il2cpp_codegen_static_fields_for(TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_il2cpp_TypeInfo_var))->____VertTransform_2;
		NullCheck(L_0);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2;
		L_2 = Material_GetMatrix_mFE806D06F452CC1BFFFC82EB87021FCA612BDF4E(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void TensorFlowLite.TextureResizer::set_VertexTransfrom(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureResizer_set_VertexTransfrom_m70F70DCA43D4F400C932FCABB28AE81B7F9B1D34 (TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => material.SetMatrix(_VertTransform, value);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = TextureResizer_get_material_m941D8F4FDC6BAE1AEF3BC3460E36F056A1662E24(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_il2cpp_TypeInfo_var);
		int32_t L_1 = ((TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_StaticFields*)il2cpp_codegen_static_fields_for(TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_il2cpp_TypeInfo_var))->____VertTransform_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = ___0_value;
		NullCheck(L_0);
		Material_SetMatrix_m668579C6402F88BFEF769D39E484BAD4CE6B0067(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void TensorFlowLite.TextureResizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureResizer__ctor_m2F5A3CD78DD9946ED3E913546EEC7B0900117BDE (TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0* __this, const RuntimeMethod* method) 
{
	{
		// public TextureResizer()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.TextureResizer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureResizer_Dispose_m0BAA966B66000E9122EB84855453EC34043D27BF (TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0* __this, const RuntimeMethod* method) 
{
	{
		// DisposeUtil.TryDispose(resizeTexture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___resizeTexture_0;
		DisposeUtil_TryDispose_m83D880713D33C109E70C97DB182D7E7421030416(L_0, NULL);
		// DisposeUtil.TryDispose(_blitMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->____blitMaterial_1;
		DisposeUtil_TryDispose_m947B35F77F5C0BB4161A0B23D69A0D7E47313E2F(L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.RenderTexture TensorFlowLite.TextureResizer::Resize(UnityEngine.Texture,TensorFlowLite.TextureResizer/ResizeOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* TextureResizer_Resize_m6779F7010040A8A85552D8338D4BA732816D904C (TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_texture, ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46 ___1_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (texture is WebCamTexture)
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___0_texture;
		if (!((WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*)IsInstSealed((RuntimeObject*)L_0, WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		// options = options.GetModifedForWebcam((WebCamTexture)texture);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1 = ___0_texture;
		ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46 L_2;
		L_2 = ResizeOptions_GetModifedForWebcam_m3E3ED9E5FB54F0E640152B6B4AF601D6B8B76F27((&___1_options), ((WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*)CastclassSealed((RuntimeObject*)L_1, WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749_il2cpp_TypeInfo_var)), NULL);
		___1_options = L_2;
	}

IL_0017:
	{
		// VertexTransfrom = GetVertTransform(options.rotationDegree, options.mirrorHorizontal, options.mirrorVertical);
		ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46 L_3 = ___1_options;
		float L_4 = L_3.___rotationDegree_2;
		ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46 L_5 = ___1_options;
		bool L_6 = L_5.___mirrorHorizontal_3;
		ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46 L_7 = ___1_options;
		bool L_8 = L_7.___mirrorVertical_4;
		il2cpp_codegen_runtime_class_init_inline(TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_il2cpp_TypeInfo_var);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9;
		L_9 = TextureResizer_GetVertTransform_m12C789BB441F7B21DC4DA120AC93ACF4B9921E57(L_4, L_6, L_8, NULL);
		TextureResizer_set_VertexTransfrom_m70F70DCA43D4F400C932FCABB28AE81B7F9B1D34(__this, L_9, NULL);
		// UVRect = GetTextureST(texture, options);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_10 = ___0_texture;
		ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46 L_11 = ___1_options;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12;
		L_12 = TextureResizer_GetTextureST_m8046D2E64B81423A67C2DEF921786A76491A801B(L_10, L_11, NULL);
		TextureResizer_set_UVRect_m3D5356A95B00DC0710E37447C155FED44C51F6AD(__this, L_12, NULL);
		// return ApplyResize(texture, options.width, options.height, false);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_13 = ___0_texture;
		ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46 L_14 = ___1_options;
		int32_t L_15 = L_14.___width_0;
		ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46 L_16 = ___1_options;
		int32_t L_17 = L_16.___height_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18;
		L_18 = TextureResizer_ApplyResize_m0E15886D77935F222BCE166994E7261A70D99E16(__this, L_13, L_15, L_17, (bool)0, NULL);
		return L_18;
	}
}
// UnityEngine.RenderTexture TensorFlowLite.TextureResizer::Resize(UnityEngine.Texture,System.Int32,System.Int32,System.Boolean,UnityEngine.Matrix4x4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* TextureResizer_Resize_mB5B3E141BDF7AFA893442E22072F3025700457D0 (TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_texture, int32_t ___1_width, int32_t ___2_height, bool ___3_fillBackground, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___4_transform, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___5_uvRect, const RuntimeMethod* method) 
{
	{
		// VertexTransfrom = transform;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___4_transform;
		TextureResizer_set_VertexTransfrom_m70F70DCA43D4F400C932FCABB28AE81B7F9B1D34(__this, L_0, NULL);
		// UVRect = uvRect;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___5_uvRect;
		TextureResizer_set_UVRect_m3D5356A95B00DC0710E37447C155FED44C51F6AD(__this, L_1, NULL);
		// return ApplyResize(texture, width, height, fillBackground);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = ___0_texture;
		int32_t L_3 = ___1_width;
		int32_t L_4 = ___2_height;
		bool L_5 = ___3_fillBackground;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6;
		L_6 = TextureResizer_ApplyResize_m0E15886D77935F222BCE166994E7261A70D99E16(__this, L_2, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// UnityEngine.RenderTexture TensorFlowLite.TextureResizer::ApplyResize(UnityEngine.Texture,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* TextureResizer_ApplyResize_m0E15886D77935F222BCE166994E7261A70D99E16 (TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_texture, int32_t ___1_width, int32_t ___2_height, bool ___3_fillBackground, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (resizeTexture == null
		//     || resizeTexture.width != width
		//     || resizeTexture.height != height)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___resizeTexture_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_002a;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = __this->___resizeTexture_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		int32_t L_4 = ___1_width;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_002a;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = __this->___resizeTexture_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_5);
		int32_t L_7 = ___2_height;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_0044;
		}
	}

IL_002a:
	{
		// DisposeUtil.TryDispose(resizeTexture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = __this->___resizeTexture_0;
		DisposeUtil_TryDispose_m83D880713D33C109E70C97DB182D7E7421030416(L_8, NULL);
		// resizeTexture = new RenderTexture(width, height, 0, RenderTextureFormat.ARGB32);
		int32_t L_9 = ___1_width;
		int32_t L_10 = ___2_height;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		RenderTexture__ctor_m53215A8EDDE262932758186108347685F6A512C4(L_11, L_9, L_10, 0, 0, NULL);
		__this->___resizeTexture_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resizeTexture_0), (void*)L_11);
	}

IL_0044:
	{
		// if (fillBackground)
		bool L_12 = ___3_fillBackground;
		if (!L_12)
		{
			goto IL_0058;
		}
	}
	{
		// Graphics.Blit(Texture2D.blackTexture, resizeTexture);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13;
		L_13 = Texture2D_get_blackTexture_mBEF97F64AD650DAAC1EEC84EB34F9CF22B56A08C(NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_14 = __this->___resizeTexture_0;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_13, L_14, NULL);
	}

IL_0058:
	{
		// Graphics.Blit(texture, resizeTexture, material, 0);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_15 = ___0_texture;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_16 = __this->___resizeTexture_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17;
		L_17 = TextureResizer_get_material_m941D8F4FDC6BAE1AEF3BC3460E36F056A1662E24(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_15, L_16, L_17, 0, NULL);
		// return resizeTexture;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = __this->___resizeTexture_0;
		return L_18;
	}
}
// UnityEngine.Vector4 TensorFlowLite.TextureResizer::GetTextureST(System.Single,System.Single,TensorFlowLite.TextureResizer/AspectMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 TextureResizer_GetTextureST_m9D94D05540B41F64AF5A9D7DD002C142A7994983 (float ___0_srcAspect, float ___1_dstAspect, int32_t ___2_mode, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = ___2_mode;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0017;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_0079;
			}
		}
	}
	{
		goto IL_00c1;
	}

IL_0017:
	{
		// return new Vector4(1, 1, 0, 0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_1), (1.0f), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_1;
	}

IL_0031:
	{
		// if (srcAspect > dstAspect)
		float L_2 = ___0_srcAspect;
		float L_3 = ___1_dstAspect;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_0057;
		}
	}
	{
		// float s = srcAspect / dstAspect;
		float L_4 = ___0_srcAspect;
		float L_5 = ___1_dstAspect;
		V_0 = ((float)(L_4/L_5));
		// return new Vector4(1, s, 0, (1 - s) / 2);
		float L_6 = V_0;
		float L_7 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), (1.0f), L_6, (0.0f), ((float)(((float)il2cpp_codegen_subtract((1.0f), L_7))/(2.0f))), /*hidden argument*/NULL);
		return L_8;
	}

IL_0057:
	{
		// float s = dstAspect / srcAspect;
		float L_9 = ___1_dstAspect;
		float L_10 = ___0_srcAspect;
		V_1 = ((float)(L_9/L_10));
		// return new Vector4(s, 1, (1 - s) / 2, 0);
		float L_11 = V_1;
		float L_12 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_13), L_11, (1.0f), ((float)(((float)il2cpp_codegen_subtract((1.0f), L_12))/(2.0f))), (0.0f), /*hidden argument*/NULL);
		return L_13;
	}

IL_0079:
	{
		// if (srcAspect > dstAspect)
		float L_14 = ___0_srcAspect;
		float L_15 = ___1_dstAspect;
		if ((!(((float)L_14) > ((float)L_15))))
		{
			goto IL_009f;
		}
	}
	{
		// float s = dstAspect / srcAspect;
		float L_16 = ___1_dstAspect;
		float L_17 = ___0_srcAspect;
		V_2 = ((float)(L_16/L_17));
		// return new Vector4(s, 1, (1 - s) / 2, 0);
		float L_18 = V_2;
		float L_19 = V_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_20), L_18, (1.0f), ((float)(((float)il2cpp_codegen_subtract((1.0f), L_19))/(2.0f))), (0.0f), /*hidden argument*/NULL);
		return L_20;
	}

IL_009f:
	{
		// float s = srcAspect / dstAspect;
		float L_21 = ___0_srcAspect;
		float L_22 = ___1_dstAspect;
		V_3 = ((float)(L_21/L_22));
		// return new Vector4(1, s, 0, (1 - s) / 2);
		float L_23 = V_3;
		float L_24 = V_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_25), (1.0f), L_23, (0.0f), ((float)(((float)il2cpp_codegen_subtract((1.0f), L_24))/(2.0f))), /*hidden argument*/NULL);
		return L_25;
	}

IL_00c1:
	{
		// throw new System.Exception("Unknown aspect mode");
		Exception_t* L_26 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_26);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6270A9A3CF86F3B615CE7EAC735058FB6089BA94)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextureResizer_GetTextureST_m9D94D05540B41F64AF5A9D7DD002C142A7994983_RuntimeMethod_var)));
	}
}
// UnityEngine.Vector4 TensorFlowLite.TextureResizer::GetTextureST(UnityEngine.Texture,TensorFlowLite.TextureResizer/ResizeOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 TextureResizer_GetTextureST_m8046D2E64B81423A67C2DEF921786A76491A801B (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_sourceTex, ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46 ___1_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetTextureST(
		//     (float)sourceTex.width / (float)sourceTex.height, // src
		//     (float)options.width / (float)options.height, // dst
		//     options.aspectMode);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___0_sourceTex;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = ___0_sourceTex;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46 L_4 = ___1_options;
		int32_t L_5 = L_4.___width_0;
		ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46 L_6 = ___1_options;
		int32_t L_7 = L_6.___height_1;
		ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46 L_8 = ___1_options;
		int32_t L_9 = L_8.___aspectMode_5;
		il2cpp_codegen_runtime_class_init_inline(TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_il2cpp_TypeInfo_var);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10;
		L_10 = TextureResizer_GetTextureST_m9D94D05540B41F64AF5A9D7DD002C142A7994983(((float)(((float)L_1)/((float)L_3))), ((float)(((float)L_5)/((float)L_7))), L_9, NULL);
		return L_10;
	}
}
// UnityEngine.Matrix4x4 TensorFlowLite.TextureResizer::GetVertTransform(System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 TextureResizer_GetVertTransform_m12C789BB441F7B21DC4DA120AC93ACF4B9921E57 (float ___0_rotation, bool ___1_mirrorHorizontal, bool ___2_mirrorVertical, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B2_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B3_1 = NULL;
	float G_B5_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B5_1 = NULL;
	float G_B4_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B4_1 = NULL;
	int32_t G_B6_0 = 0;
	float G_B6_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B6_2 = NULL;
	{
		// Vector3 scale = new Vector3(
		//     mirrorHorizontal ? -1 : 1,
		//     mirrorVertical ? -1 : 1,
		//     1);
		bool L_0 = ___1_mirrorHorizontal;
		G_B1_0 = (&V_0);
		if (L_0)
		{
			G_B2_0 = (&V_0);
			goto IL_0008;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_0009;
	}

IL_0008:
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B2_0;
	}

IL_0009:
	{
		bool L_1 = ___2_mirrorVertical;
		G_B4_0 = ((float)G_B3_0);
		G_B4_1 = G_B3_1;
		if (L_1)
		{
			G_B5_0 = ((float)G_B3_0);
			G_B5_1 = G_B3_1;
			goto IL_0010;
		}
	}
	{
		G_B6_0 = 1;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0011;
	}

IL_0010:
	{
		G_B6_0 = (-1);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0011:
	{
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline(G_B6_2, G_B6_1, ((float)G_B6_0), (1.0f), NULL);
		// Matrix4x4 trs = Matrix4x4.TRS(
		//     Vector3.zero,
		//     Quaternion.Euler(0, 0, rotation),
		//     scale
		// );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		float L_3 = ___0_rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6;
		L_6 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_2, L_4, L_5, NULL);
		V_1 = L_6;
		// return PUSH_MATRIX * trs * POP_MATRIX;
		il2cpp_codegen_runtime_class_init_inline(TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_il2cpp_TypeInfo_var);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7 = ((TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_StaticFields*)il2cpp_codegen_static_fields_for(TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_il2cpp_TypeInfo_var))->___PUSH_MATRIX_4;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_8 = V_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9;
		L_9 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_7, L_8, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10 = ((TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_StaticFields*)il2cpp_codegen_static_fields_for(TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_il2cpp_TypeInfo_var))->___POP_MATRIX_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_11;
		L_11 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_9, L_10, NULL);
		return L_11;
	}
}
// System.Void TensorFlowLite.TextureResizer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureResizer__cctor_m39DF8FDB07DA44B32BDD39124BC53901F6031B99 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral179E8064BD0D567C832BC3C24C5979B76547443C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral974EC53FABB83A35680AD82D7F8C49DDE80B63EC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly int _VertTransform = Shader.PropertyToID("_VertTransform");
		int32_t L_0;
		L_0 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral179E8064BD0D567C832BC3C24C5979B76547443C, NULL);
		((TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_StaticFields*)il2cpp_codegen_static_fields_for(TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_il2cpp_TypeInfo_var))->____VertTransform_2 = L_0;
		// static readonly int _UVRect = Shader.PropertyToID("_UVRect");
		int32_t L_1;
		L_1 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral974EC53FABB83A35680AD82D7F8C49DDE80B63EC, NULL);
		((TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_StaticFields*)il2cpp_codegen_static_fields_for(TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_il2cpp_TypeInfo_var))->____UVRect_3 = L_1;
		// private static readonly Matrix4x4 PUSH_MATRIX = Matrix4x4.Translate(new Vector3(0.5f, 0.5f, 0));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (0.5f), (0.5f), (0.0f), /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3;
		L_3 = Matrix4x4_Translate_mF3EDFC59C9E51DC0C0A483F6E44A4930D62E4091(L_2, NULL);
		((TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_StaticFields*)il2cpp_codegen_static_fields_for(TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_il2cpp_TypeInfo_var))->___PUSH_MATRIX_4 = L_3;
		// private static readonly Matrix4x4 POP_MATRIX = Matrix4x4.Translate(new Vector3(-0.5f, -0.5f, 0));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), (-0.5f), (-0.5f), (0.0f), /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5;
		L_5 = Matrix4x4_Translate_mF3EDFC59C9E51DC0C0A483F6E44A4930D62E4091(L_4, NULL);
		((TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_StaticFields*)il2cpp_codegen_static_fields_for(TextureResizer_tA44C64B7CBA216F25B45A7BD0B9982B4436F83F0_il2cpp_TypeInfo_var))->___POP_MATRIX_5 = L_5;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: TensorFlowLite.TextureResizer/ResizeOptions
IL2CPP_EXTERN_C void ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46_marshal_pinvoke(const ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46& unmarshaled, ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46_marshaled_pinvoke& marshaled)
{
	marshaled.___width_0 = unmarshaled.___width_0;
	marshaled.___height_1 = unmarshaled.___height_1;
	marshaled.___rotationDegree_2 = unmarshaled.___rotationDegree_2;
	marshaled.___mirrorHorizontal_3 = static_cast<int32_t>(unmarshaled.___mirrorHorizontal_3);
	marshaled.___mirrorVertical_4 = static_cast<int32_t>(unmarshaled.___mirrorVertical_4);
	marshaled.___aspectMode_5 = unmarshaled.___aspectMode_5;
}
IL2CPP_EXTERN_C void ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46_marshal_pinvoke_back(const ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46_marshaled_pinvoke& marshaled, ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46& unmarshaled)
{
	int32_t unmarshaledwidth_temp_0 = 0;
	unmarshaledwidth_temp_0 = marshaled.___width_0;
	unmarshaled.___width_0 = unmarshaledwidth_temp_0;
	int32_t unmarshaledheight_temp_1 = 0;
	unmarshaledheight_temp_1 = marshaled.___height_1;
	unmarshaled.___height_1 = unmarshaledheight_temp_1;
	float unmarshaledrotationDegree_temp_2 = 0.0f;
	unmarshaledrotationDegree_temp_2 = marshaled.___rotationDegree_2;
	unmarshaled.___rotationDegree_2 = unmarshaledrotationDegree_temp_2;
	bool unmarshaledmirrorHorizontal_temp_3 = false;
	unmarshaledmirrorHorizontal_temp_3 = static_cast<bool>(marshaled.___mirrorHorizontal_3);
	unmarshaled.___mirrorHorizontal_3 = unmarshaledmirrorHorizontal_temp_3;
	bool unmarshaledmirrorVertical_temp_4 = false;
	unmarshaledmirrorVertical_temp_4 = static_cast<bool>(marshaled.___mirrorVertical_4);
	unmarshaled.___mirrorVertical_4 = unmarshaledmirrorVertical_temp_4;
	int32_t unmarshaledaspectMode_temp_5 = 0;
	unmarshaledaspectMode_temp_5 = marshaled.___aspectMode_5;
	unmarshaled.___aspectMode_5 = unmarshaledaspectMode_temp_5;
}
// Conversion method for clean up from marshalling of: TensorFlowLite.TextureResizer/ResizeOptions
IL2CPP_EXTERN_C void ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46_marshal_pinvoke_cleanup(ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: TensorFlowLite.TextureResizer/ResizeOptions
IL2CPP_EXTERN_C void ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46_marshal_com(const ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46& unmarshaled, ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46_marshaled_com& marshaled)
{
	marshaled.___width_0 = unmarshaled.___width_0;
	marshaled.___height_1 = unmarshaled.___height_1;
	marshaled.___rotationDegree_2 = unmarshaled.___rotationDegree_2;
	marshaled.___mirrorHorizontal_3 = static_cast<int32_t>(unmarshaled.___mirrorHorizontal_3);
	marshaled.___mirrorVertical_4 = static_cast<int32_t>(unmarshaled.___mirrorVertical_4);
	marshaled.___aspectMode_5 = unmarshaled.___aspectMode_5;
}
IL2CPP_EXTERN_C void ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46_marshal_com_back(const ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46_marshaled_com& marshaled, ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46& unmarshaled)
{
	int32_t unmarshaledwidth_temp_0 = 0;
	unmarshaledwidth_temp_0 = marshaled.___width_0;
	unmarshaled.___width_0 = unmarshaledwidth_temp_0;
	int32_t unmarshaledheight_temp_1 = 0;
	unmarshaledheight_temp_1 = marshaled.___height_1;
	unmarshaled.___height_1 = unmarshaledheight_temp_1;
	float unmarshaledrotationDegree_temp_2 = 0.0f;
	unmarshaledrotationDegree_temp_2 = marshaled.___rotationDegree_2;
	unmarshaled.___rotationDegree_2 = unmarshaledrotationDegree_temp_2;
	bool unmarshaledmirrorHorizontal_temp_3 = false;
	unmarshaledmirrorHorizontal_temp_3 = static_cast<bool>(marshaled.___mirrorHorizontal_3);
	unmarshaled.___mirrorHorizontal_3 = unmarshaledmirrorHorizontal_temp_3;
	bool unmarshaledmirrorVertical_temp_4 = false;
	unmarshaledmirrorVertical_temp_4 = static_cast<bool>(marshaled.___mirrorVertical_4);
	unmarshaled.___mirrorVertical_4 = unmarshaledmirrorVertical_temp_4;
	int32_t unmarshaledaspectMode_temp_5 = 0;
	unmarshaledaspectMode_temp_5 = marshaled.___aspectMode_5;
	unmarshaled.___aspectMode_5 = unmarshaledaspectMode_temp_5;
}
// Conversion method for clean up from marshalling of: TensorFlowLite.TextureResizer/ResizeOptions
IL2CPP_EXTERN_C void ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46_marshal_com_cleanup(ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46_marshaled_com& marshaled)
{
}
// TensorFlowLite.TextureResizer/ResizeOptions TensorFlowLite.TextureResizer/ResizeOptions::GetModifedForWebcam(UnityEngine.WebCamTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46 ResizeOptions_GetModifedForWebcam_m3E3ED9E5FB54F0E640152B6B4AF601D6B8B76F27 (ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46* __this, WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* ___0_texture, const RuntimeMethod* method) 
{
	ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t G_B6_0 = 0;
	{
		// ResizeOptions modified = this; // copy
		ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46 L_0 = (*(ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46*)__this);
		V_0 = L_0;
		// int videoRotationAngle = texture.videoRotationAngle;
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_1 = ___0_texture;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = WebCamTexture_get_videoRotationAngle_m2BF420A1243F56415BEF82CC84AB4C7B342C991F(L_1, NULL);
		V_1 = L_2;
		// if (rotationDegree - videoRotationAngle < 0)
		float L_3 = __this->___rotationDegree_2;
		int32_t L_4 = V_1;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_3, ((float)L_4)))) < ((float)(0.0f)))))
		{
			goto IL_0036;
		}
	}
	{
		// modified.rotationDegree = 360f + rotationDegree - videoRotationAngle;
		float L_5 = __this->___rotationDegree_2;
		int32_t L_6 = V_1;
		(&V_0)->___rotationDegree_2 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add((360.0f), L_5)), ((float)L_6)));
		goto IL_0046;
	}

IL_0036:
	{
		// modified.rotationDegree = rotationDegree - videoRotationAngle;
		float L_7 = __this->___rotationDegree_2;
		int32_t L_8 = V_1;
		(&V_0)->___rotationDegree_2 = ((float)il2cpp_codegen_subtract(L_7, ((float)L_8)));
	}

IL_0046:
	{
		// bool needFlip90 = videoRotationAngle == 90 || videoRotationAngle == 270;
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)90))))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_10 = V_1;
		G_B6_0 = ((((int32_t)L_10) == ((int32_t)((int32_t)270)))? 1 : 0);
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		// if (needFlip90)
		if (!G_B6_0)
		{
			goto IL_0072;
		}
	}
	{
		// modified.mirrorVertical = mirrorHorizontal;
		bool L_11 = __this->___mirrorHorizontal_3;
		(&V_0)->___mirrorVertical_4 = L_11;
		// modified.mirrorHorizontal = mirrorVertical;
		bool L_12 = __this->___mirrorVertical_4;
		(&V_0)->___mirrorHorizontal_3 = L_12;
	}

IL_0072:
	{
		// if (texture.videoVerticallyMirrored)
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_13 = ___0_texture;
		NullCheck(L_13);
		bool L_14;
		L_14 = WebCamTexture_get_videoVerticallyMirrored_mDC7525B796A2629927EF113DA199DDE200B1B52A(L_13, NULL);
		if (!L_14)
		{
			goto IL_008a;
		}
	}
	{
		// modified.mirrorVertical = !modified.mirrorVertical;
		ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46 L_15 = V_0;
		bool L_16 = L_15.___mirrorVertical_4;
		(&V_0)->___mirrorVertical_4 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
	}

IL_008a:
	{
		// return modified;
		ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46 L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C  ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46 ResizeOptions_GetModifedForWebcam_m3E3ED9E5FB54F0E640152B6B4AF601D6B8B76F27_AdjustorThunk (RuntimeObject* __this, WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* ___0_texture, const RuntimeMethod* method)
{
	ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46*>(__this + _offset);
	ResizeOptions_tC57647F413089DB6957765622A67A040DC85BB46 _returnValue;
	_returnValue = ResizeOptions_GetModifedForWebcam_m3E3ED9E5FB54F0E640152B6B4AF601D6B8B76F27(_thisAdjusted, ___0_texture, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Texture2D TensorFlowLite.TextureToTensor::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TextureToTensor_get_texture_mF98B1D6EED1AACF8446F42D1447E38EF02BDD3D0 (TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2* __this, const RuntimeMethod* method) 
{
	{
		// public Texture2D texture => fetchTexture;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___fetchTexture_0;
		return L_0;
	}
}
// System.Void TensorFlowLite.TextureToTensor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureToTensor__ctor_m8F202FE00E4086DCF4FEDD5E0BCA61AEA86D2E3A (TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mE862700321AB25179D47FE117A106FA1CD22B8CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A0B2CF5DC485D0B8A8A807D0088CF6730FB2BDD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TextureToTensor()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// compute = Resources.Load<ComputeShader>("TextureToTensor");
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_0;
		L_0 = Resources_Load_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mE862700321AB25179D47FE117A106FA1CD22B8CC(_stringLiteral0A0B2CF5DC485D0B8A8A807D0088CF6730FB2BDD, Resources_Load_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mE862700321AB25179D47FE117A106FA1CD22B8CC_RuntimeMethod_var);
		__this->___compute_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___compute_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void TensorFlowLite.TextureToTensor::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureToTensor_Dispose_m2CADFB7E8FD23572B8FC99956DE0D403953FEF9C (TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2* __this, const RuntimeMethod* method) 
{
	{
		// DisposeUtil.TryDispose(fetchTexture);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___fetchTexture_0;
		DisposeUtil_TryDispose_m0E435FDB351CF2F918FD9FC785D0A94CDB398DE6(L_0, NULL);
		// DisposeUtil.TryDispose(tensorBuffer);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_1 = __this->___tensorBuffer_2;
		DisposeUtil_TryDispose_mB0D00F761420682F656B547F42C6EFAA6E6BD2C2(L_1, NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.TextureToTensor::ToTensor(UnityEngine.RenderTexture,System.SByte[,,])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureToTensor_ToTensor_m93699208BCEFF0E0775726398AE41831BD146D1B (TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_texture, SByteU5BU2CU2CU5D_tCD5C37C6539D2FD986CEE8ACB61C875D22F4A236* ___1_inputs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_GetRawTextureData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m3F258FE3486B29D798DCFECF41E9845382EF5CC2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// var pixels = FetchToTexture2D(texture).GetRawTextureData<Color32>();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___0_texture;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1;
		L_1 = TextureToTensor_FetchToTexture2D_m06F64365599A772CF08CB804E74B8195FD700EED(__this, L_0, NULL);
		NullCheck(L_1);
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D L_2;
		L_2 = Texture2D_GetRawTextureData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m3F258FE3486B29D798DCFECF41E9845382EF5CC2(L_1, Texture2D_GetRawTextureData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m3F258FE3486B29D798DCFECF41E9845382EF5CC2_RuntimeMethod_var);
		V_0 = L_2;
		// int width = texture.width;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = ___0_texture;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		V_1 = L_4;
		// int height = texture.height - 1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = ___0_texture;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_5);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		// for (int i = 0; i < pixels.Length; i++)
		V_3 = 0;
		goto IL_007c;
	}

IL_0021:
	{
		// int y = height - i / width;
		int32_t L_7 = V_2;
		int32_t L_8 = V_3;
		int32_t L_9 = V_1;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)(L_8/L_9))));
		// int x = i % width;
		int32_t L_10 = V_3;
		int32_t L_11 = V_1;
		V_5 = ((int32_t)(L_10%L_11));
		// inputs[y, x, 0] = (sbyte)pixels[i].r;
		SByteU5BU2CU2CU5D_tCD5C37C6539D2FD986CEE8ACB61C875D22F4A236* L_12 = ___1_inputs;
		int32_t L_13 = V_4;
		int32_t L_14 = V_5;
		int32_t L_15 = V_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16;
		L_16 = IL2CPP_NATIVEARRAY_GET_ITEM(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, ((&V_0))->___m_Buffer_0, L_15);
		uint8_t L_17 = L_16.___r_1;
		NullCheck(L_12);
		(L_12)->SetAt(L_13, L_14, 0, ((int8_t)L_17));
		// inputs[y, x, 1] = (sbyte)pixels[i].g;
		SByteU5BU2CU2CU5D_tCD5C37C6539D2FD986CEE8ACB61C875D22F4A236* L_18 = ___1_inputs;
		int32_t L_19 = V_4;
		int32_t L_20 = V_5;
		int32_t L_21 = V_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_22;
		L_22 = IL2CPP_NATIVEARRAY_GET_ITEM(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, ((&V_0))->___m_Buffer_0, L_21);
		uint8_t L_23 = L_22.___g_2;
		NullCheck(L_18);
		(L_18)->SetAt(L_19, L_20, 1, ((int8_t)L_23));
		// inputs[y, x, 2] = (sbyte)pixels[i].b;
		SByteU5BU2CU2CU5D_tCD5C37C6539D2FD986CEE8ACB61C875D22F4A236* L_24 = ___1_inputs;
		int32_t L_25 = V_4;
		int32_t L_26 = V_5;
		int32_t L_27 = V_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_28;
		L_28 = IL2CPP_NATIVEARRAY_GET_ITEM(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, ((&V_0))->___m_Buffer_0, L_27);
		uint8_t L_29 = L_28.___b_3;
		NullCheck(L_24);
		(L_24)->SetAt(L_25, L_26, 2, ((int8_t)L_29));
		// for (int i = 0; i < pixels.Length; i++)
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_007c:
	{
		// for (int i = 0; i < pixels.Length; i++)
		int32_t L_31 = V_3;
		int32_t L_32;
		L_32 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&V_0))->___m_Length_1);
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0021;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TensorFlowLite.TextureToTensor::ToTensor(UnityEngine.RenderTexture,System.Single[,,])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureToTensor_ToTensor_m83D9FD9877F73D0801BDEA7C8B1E86D3AFE6A8EF (TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_texture, SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* ___1_inputs, const RuntimeMethod* method) 
{
	{
		// if (texture.width % 8 != 0 || texture.height % 8 != 0)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___0_texture;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		if (((int32_t)(L_1%8)))
		{
			goto IL_0014;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___0_texture;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		if (!((int32_t)(L_3%8)))
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		// ToTensorCPU(texture, inputs);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = ___0_texture;
		SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* L_5 = ___1_inputs;
		TextureToTensor_ToTensorCPU_m1766D2A570373E4B014EE5324C1E5CA8E651EE9E(__this, L_4, L_5, NULL);
		return;
	}

IL_001d:
	{
		// ToTensorGPU(texture, inputs);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = ___0_texture;
		SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* L_7 = ___1_inputs;
		TextureToTensor_ToTensorGPU_mE25771B84D56FDE20AD7CD4E1CC9AC130E8D9DD1(__this, L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.TextureToTensor::ToTensor(UnityEngine.RenderTexture,UnityEngine.ComputeBuffer&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureToTensor_ToTensor_m15FDF87FACB32460DD876B5841D7E0BF3EBDC7A7 (TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_texture, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** ___1_buffer, const RuntimeMethod* method) 
{
	{
		// ToTensorGPU(texture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___0_texture;
		TextureToTensor_ToTensorGPU_m7A2657BC5C715F05BD2908CBBD52243B33299DF6(__this, L_0, NULL);
		// buffer = tensorBuffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** L_1 = ___1_buffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_2 = __this->___tensorBuffer_2;
		*((RuntimeObject**)L_1) = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_1, (void*)(RuntimeObject*)L_2);
		// }
		return;
	}
}
// System.Void TensorFlowLite.TextureToTensor::ToTensor(UnityEngine.RenderTexture,System.Single[,,],System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureToTensor_ToTensor_mDA72E781A0DA73CE192C38E01B0307AC7837B661 (TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_texture, SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* ___1_inputs, float ___2_offset, float ___3_scale, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_GetRawTextureData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m3F258FE3486B29D798DCFECF41E9845382EF5CC2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// var pixels = FetchToTexture2D(texture).GetRawTextureData<Color32>();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___0_texture;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1;
		L_1 = TextureToTensor_FetchToTexture2D_m06F64365599A772CF08CB804E74B8195FD700EED(__this, L_0, NULL);
		NullCheck(L_1);
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D L_2;
		L_2 = Texture2D_GetRawTextureData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m3F258FE3486B29D798DCFECF41E9845382EF5CC2(L_1, Texture2D_GetRawTextureData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m3F258FE3486B29D798DCFECF41E9845382EF5CC2_RuntimeMethod_var);
		V_0 = L_2;
		// int width = texture.width;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = ___0_texture;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		V_1 = L_4;
		// int height = texture.height - 1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = ___0_texture;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_5);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		// for (int i = 0; i < pixels.Length; i++)
		V_3 = 0;
		goto IL_008b;
	}

IL_0021:
	{
		// int y = height - i / width;
		int32_t L_7 = V_2;
		int32_t L_8 = V_3;
		int32_t L_9 = V_1;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)(L_8/L_9))));
		// int x = i % width;
		int32_t L_10 = V_3;
		int32_t L_11 = V_1;
		V_5 = ((int32_t)(L_10%L_11));
		// inputs[y, x, 0] = (pixels[i].r - offset) * scale;
		SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* L_12 = ___1_inputs;
		int32_t L_13 = V_4;
		int32_t L_14 = V_5;
		int32_t L_15 = V_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16;
		L_16 = IL2CPP_NATIVEARRAY_GET_ITEM(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, ((&V_0))->___m_Buffer_0, L_15);
		uint8_t L_17 = L_16.___r_1;
		float L_18 = ___2_offset;
		float L_19 = ___3_scale;
		NullCheck(L_12);
		(L_12)->SetAt(L_13, L_14, 0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)L_17), L_18)), L_19)));
		// inputs[y, x, 1] = (pixels[i].g - offset) * scale;
		SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* L_20 = ___1_inputs;
		int32_t L_21 = V_4;
		int32_t L_22 = V_5;
		int32_t L_23 = V_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_24;
		L_24 = IL2CPP_NATIVEARRAY_GET_ITEM(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, ((&V_0))->___m_Buffer_0, L_23);
		uint8_t L_25 = L_24.___g_2;
		float L_26 = ___2_offset;
		float L_27 = ___3_scale;
		NullCheck(L_20);
		(L_20)->SetAt(L_21, L_22, 1, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)L_25), L_26)), L_27)));
		// inputs[y, x, 2] = (pixels[i].b - offset) * scale;
		SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* L_28 = ___1_inputs;
		int32_t L_29 = V_4;
		int32_t L_30 = V_5;
		int32_t L_31 = V_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_32;
		L_32 = IL2CPP_NATIVEARRAY_GET_ITEM(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, ((&V_0))->___m_Buffer_0, L_31);
		uint8_t L_33 = L_32.___b_3;
		float L_34 = ___2_offset;
		float L_35 = ___3_scale;
		NullCheck(L_28);
		(L_28)->SetAt(L_29, L_30, 2, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)L_33), L_34)), L_35)));
		// for (int i = 0; i < pixels.Length; i++)
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_008b:
	{
		// for (int i = 0; i < pixels.Length; i++)
		int32_t L_37 = V_3;
		int32_t L_38;
		L_38 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&V_0))->___m_Length_1);
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0021;
		}
	}
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> TensorFlowLite.TextureToTensor::ToTensorAsync(UnityEngine.RenderTexture,System.Single[,,])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 TextureToTensor_ToTensorAsync_mD5CC56DE17A87A9FB47F99CAF40579190E675BCD (TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_texture, SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* ___1_inputs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_Create_m541E96A720B74646A67D392E54DECC686529143A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_Start_TisU3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A_m58DF46309ED2EA16F84499F1ADB94FFFC6EF3A42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_get_Task_m987FF39A55DF01CB856D3CD4C0DF8AC06F4E338C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 L_0;
		L_0 = AsyncUniTaskMethodBuilder_1_Create_m541E96A720B74646A67D392E54DECC686529143A_inline(AsyncUniTaskMethodBuilder_1_Create_m541E96A720B74646A67D392E54DECC686529143A_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___0_texture;
		(&V_0)->___texture_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___texture_3), (void*)L_1);
		SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* L_2 = ___1_inputs;
		(&V_0)->___inputs_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___inputs_4), (void*)L_2);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_1_Start_TisU3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A_m58DF46309ED2EA16F84499F1ADB94FFFC6EF3A42_inline(L_3, (&V_0), AsyncUniTaskMethodBuilder_1_Start_TisU3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A_m58DF46309ED2EA16F84499F1ADB94FFFC6EF3A42_RuntimeMethod_var);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_5;
		L_5 = AsyncUniTaskMethodBuilder_1_get_Task_m987FF39A55DF01CB856D3CD4C0DF8AC06F4E338C_inline(L_4, AsyncUniTaskMethodBuilder_1_get_Task_m987FF39A55DF01CB856D3CD4C0DF8AC06F4E338C_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void TensorFlowLite.TextureToTensor::ToTensorCPU(UnityEngine.RenderTexture,System.Single[,,])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureToTensor_ToTensorCPU_m1766D2A570373E4B014EE5324C1E5CA8E651EE9E (TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_texture, SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* ___1_inputs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_GetRawTextureData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m3F258FE3486B29D798DCFECF41E9845382EF5CC2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// var pixels = FetchToTexture2D(texture).GetRawTextureData<Color32>();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___0_texture;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1;
		L_1 = TextureToTensor_FetchToTexture2D_m06F64365599A772CF08CB804E74B8195FD700EED(__this, L_0, NULL);
		NullCheck(L_1);
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D L_2;
		L_2 = Texture2D_GetRawTextureData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m3F258FE3486B29D798DCFECF41E9845382EF5CC2(L_1, Texture2D_GetRawTextureData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m3F258FE3486B29D798DCFECF41E9845382EF5CC2_RuntimeMethod_var);
		V_0 = L_2;
		// int width = texture.width;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = ___0_texture;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		V_1 = L_4;
		// int height = texture.height - 1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = ___0_texture;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_5);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		// for (int i = 0; i < pixels.Length; i++)
		V_3 = 0;
		goto IL_008e;
	}

IL_0021:
	{
		// int y = height - i / width;
		int32_t L_7 = V_2;
		int32_t L_8 = V_3;
		int32_t L_9 = V_1;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)(L_8/L_9))));
		// int x = i % width;
		int32_t L_10 = V_3;
		int32_t L_11 = V_1;
		V_5 = ((int32_t)(L_10%L_11));
		// inputs[y, x, 0] = (float)(pixels[i].r) / scale;
		SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* L_12 = ___1_inputs;
		int32_t L_13 = V_4;
		int32_t L_14 = V_5;
		int32_t L_15 = V_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16;
		L_16 = IL2CPP_NATIVEARRAY_GET_ITEM(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, ((&V_0))->___m_Buffer_0, L_15);
		uint8_t L_17 = L_16.___r_1;
		NullCheck(L_12);
		(L_12)->SetAt(L_13, L_14, 0, ((float)(((float)L_17)/(255.0f))));
		// inputs[y, x, 1] = (float)(pixels[i].g) / scale;
		SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* L_18 = ___1_inputs;
		int32_t L_19 = V_4;
		int32_t L_20 = V_5;
		int32_t L_21 = V_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_22;
		L_22 = IL2CPP_NATIVEARRAY_GET_ITEM(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, ((&V_0))->___m_Buffer_0, L_21);
		uint8_t L_23 = L_22.___g_2;
		NullCheck(L_18);
		(L_18)->SetAt(L_19, L_20, 1, ((float)(((float)L_23)/(255.0f))));
		// inputs[y, x, 2] = (float)(pixels[i].b) / scale;
		SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* L_24 = ___1_inputs;
		int32_t L_25 = V_4;
		int32_t L_26 = V_5;
		int32_t L_27 = V_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_28;
		L_28 = IL2CPP_NATIVEARRAY_GET_ITEM(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, ((&V_0))->___m_Buffer_0, L_27);
		uint8_t L_29 = L_28.___b_3;
		NullCheck(L_24);
		(L_24)->SetAt(L_25, L_26, 2, ((float)(((float)L_29)/(255.0f))));
		// for (int i = 0; i < pixels.Length; i++)
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_008e:
	{
		// for (int i = 0; i < pixels.Length; i++)
		int32_t L_31 = V_3;
		int32_t L_32;
		L_32 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&V_0))->___m_Length_1);
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0021;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TensorFlowLite.TextureToTensor::ToTensorGPU(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureToTensor_ToTensorGPU_m7A2657BC5C715F05BD2908CBBD52243B33299DF6 (TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_texture, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C8D2CD12448421DD3C31CF4A88C6CBCFD143532);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int width = texture.width;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___0_texture;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		V_0 = L_1;
		// int height = texture.height;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___0_texture;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		V_1 = L_3;
		// if (tensorBuffer == null || tensorBuffer.count != width * height)
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_4 = __this->___tensorBuffer_2;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_5 = __this->___tensorBuffer_2;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = ComputeBuffer_get_count_m4DAA2D2714BA7A46F007697F601E4446F1049506(L_5, NULL);
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)il2cpp_codegen_multiply(L_7, L_8)))))
		{
			goto IL_0041;
		}
	}

IL_0026:
	{
		// DisposeUtil.TryDispose(tensorBuffer);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_9 = __this->___tensorBuffer_2;
		DisposeUtil_TryDispose_mB0D00F761420682F656B547F42C6EFAA6E6BD2C2(L_9, NULL);
		// tensorBuffer = new ComputeBuffer(width * height, sizeof(float) * 3);
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_12 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)il2cpp_codegen_object_new(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ComputeBuffer__ctor_mE40DE5EF5ADAC29B6B4DECBD1EE33E8526202617(L_12, ((int32_t)il2cpp_codegen_multiply(L_10, L_11)), ((int32_t)12), NULL);
		__this->___tensorBuffer_2 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tensorBuffer_2), (void*)L_12);
	}

IL_0041:
	{
		// int kernel = compute.FindKernel("TextureToFloatTensor");
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_13 = __this->___compute_1;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = ComputeShader_FindKernel_m3BA5C50794FA6AF4C432E55FBBD7CB266532F659(L_13, _stringLiteral0C8D2CD12448421DD3C31CF4A88C6CBCFD143532, NULL);
		V_2 = L_14;
		// compute.SetTexture(kernel, InputTexture, texture);
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_15 = __this->___compute_1;
		int32_t L_16 = V_2;
		il2cpp_codegen_runtime_class_init_inline(TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2_il2cpp_TypeInfo_var);
		int32_t L_17 = ((TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2_StaticFields*)il2cpp_codegen_static_fields_for(TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2_il2cpp_TypeInfo_var))->___InputTexture_3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = ___0_texture;
		NullCheck(L_15);
		ComputeShader_SetTexture_mA3F2EEE36DB76DD197EC7910B859854A63186AC3(L_15, L_16, L_17, L_18, NULL);
		// compute.SetBuffer(kernel, OutputFloatTensor, tensorBuffer);
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_19 = __this->___compute_1;
		int32_t L_20 = V_2;
		int32_t L_21 = ((TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2_StaticFields*)il2cpp_codegen_static_fields_for(TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2_il2cpp_TypeInfo_var))->___OutputFloatTensor_4;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_22 = __this->___tensorBuffer_2;
		NullCheck(L_19);
		ComputeShader_SetBuffer_m82184DFEA1DFC8788DBF2A97BAE1ACA422024FBF(L_19, L_20, L_21, L_22, NULL);
		// compute.SetInt(TextureWidth, width);
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_23 = __this->___compute_1;
		int32_t L_24 = ((TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2_StaticFields*)il2cpp_codegen_static_fields_for(TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2_il2cpp_TypeInfo_var))->___TextureWidth_5;
		int32_t L_25 = V_0;
		NullCheck(L_23);
		ComputeShader_SetInt_m5BED46962875818A120FA6D2E4FD820B62BCE8AD(L_23, L_24, L_25, NULL);
		// compute.SetInt(TextureHeight, height);
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_26 = __this->___compute_1;
		int32_t L_27 = ((TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2_StaticFields*)il2cpp_codegen_static_fields_for(TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2_il2cpp_TypeInfo_var))->___TextureHeight_6;
		int32_t L_28 = V_1;
		NullCheck(L_26);
		ComputeShader_SetInt_m5BED46962875818A120FA6D2E4FD820B62BCE8AD(L_26, L_27, L_28, NULL);
		// compute.Dispatch(kernel, width / 8, height / 8, 1);
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_29 = __this->___compute_1;
		int32_t L_30 = V_2;
		int32_t L_31 = V_0;
		int32_t L_32 = V_1;
		NullCheck(L_29);
		ComputeShader_Dispatch_mEED7BA68C28B1B39E75208D0D4D9915D41985B0A(L_29, L_30, ((int32_t)(L_31/8)), ((int32_t)(L_32/8)), 1, NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.TextureToTensor::ToTensorGPU(UnityEngine.RenderTexture,System.Single[,,])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureToTensor_ToTensorGPU_mE25771B84D56FDE20AD7CD4E1CC9AC130E8D9DD1 (TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_texture, SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* ___1_inputs, const RuntimeMethod* method) 
{
	{
		// ToTensorGPU(texture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___0_texture;
		TextureToTensor_ToTensorGPU_m7A2657BC5C715F05BD2908CBBD52243B33299DF6(__this, L_0, NULL);
		// tensorBuffer.GetData(inputs);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_1 = __this->___tensorBuffer_2;
		SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* L_2 = ___1_inputs;
		NullCheck(L_1);
		ComputeBuffer_GetData_m7EFC5EF9035C3C48BD922221AC809DC30D6F7F27(L_1, (RuntimeArray*)L_2, NULL);
		// }
		return;
	}
}
// UnityEngine.Texture2D TensorFlowLite.TextureToTensor::FetchToTexture2D(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TextureToTensor_FetchToTexture2D_m06F64365599A772CF08CB804E74B8195FD700EED (TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_texture, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (fetchTexture == null || !IsSameSize(fetchTexture, texture))
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___fetchTexture_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = __this->___fetchTexture_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = ___0_texture;
		il2cpp_codegen_runtime_class_init_inline(TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = TextureToTensor_IsSameSize_mC7A91E7A5D1BC4DE7C28BEF5098AA554F96318B0(L_2, L_3, NULL);
		if (L_4)
		{
			goto IL_0035;
		}
	}

IL_001c:
	{
		// fetchTexture = new Texture2D(texture.width, texture.height, TextureFormat.RGBA32, false);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = ___0_texture;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = ___0_texture;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_7);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_9, L_6, L_8, 4, (bool)0, NULL);
		__this->___fetchTexture_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fetchTexture_0), (void*)L_9);
	}

IL_0035:
	{
		// var prevRT = RenderTexture.active;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10;
		L_10 = RenderTexture_get_active_mA4434B3E79DEF2C01CAE0A53061598B16443C9E7(NULL);
		// RenderTexture.active = texture;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = ___0_texture;
		RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_11, NULL);
		// fetchTexture.ReadPixels(new Rect(0, 0, texture.width, texture.height), 0, 0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12 = __this->___fetchTexture_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_13 = ___0_texture;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_13);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_15 = ___0_texture;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_15);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_17;
		memset((&L_17), 0, sizeof(L_17));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_17), (0.0f), (0.0f), ((float)L_14), ((float)L_16), /*hidden argument*/NULL);
		NullCheck(L_12);
		Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9(L_12, L_17, 0, 0, NULL);
		// fetchTexture.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = __this->___fetchTexture_0;
		NullCheck(L_18);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_18, NULL);
		// RenderTexture.active = prevRT;
		RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_10, NULL);
		// return fetchTexture;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_19 = __this->___fetchTexture_0;
		return L_19;
	}
}
// System.Boolean TensorFlowLite.TextureToTensor::IsSameSize(UnityEngine.Texture,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureToTensor_IsSameSize_mC7A91E7A5D1BC4DE7C28BEF5098AA554F96318B0 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_a, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_b, const RuntimeMethod* method) 
{
	{
		// return a.width == b.width && a.height == b.height;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___0_a;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = ___1_b;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4 = ___0_a;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_4);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_6 = ___1_b;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_6);
		return (bool)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Void TensorFlowLite.TextureToTensor::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureToTensor__cctor_mDF3F671B1B571981B81FF214D34974F459F31C37 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral186C317106771B7B34F0840738B27A2CE8181156);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81785C0709828B0330D6987D0BC8063ECCA4DE55);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3E134912E4F26F2F6E6B380FC96D32FB257D8FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB82C0D2D51BC7F727346CBAC41D5AC8BAEFEAF34);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly int InputTexture = Shader.PropertyToID("InputTexture");
		int32_t L_0;
		L_0 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralA3E134912E4F26F2F6E6B380FC96D32FB257D8FA, NULL);
		((TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2_StaticFields*)il2cpp_codegen_static_fields_for(TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2_il2cpp_TypeInfo_var))->___InputTexture_3 = L_0;
		// static readonly int OutputFloatTensor = Shader.PropertyToID("OutputFloatTensor");
		int32_t L_1;
		L_1 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral186C317106771B7B34F0840738B27A2CE8181156, NULL);
		((TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2_StaticFields*)il2cpp_codegen_static_fields_for(TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2_il2cpp_TypeInfo_var))->___OutputFloatTensor_4 = L_1;
		// static readonly int TextureWidth = Shader.PropertyToID("TextureWidth");
		int32_t L_2;
		L_2 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralB82C0D2D51BC7F727346CBAC41D5AC8BAEFEAF34, NULL);
		((TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2_StaticFields*)il2cpp_codegen_static_fields_for(TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2_il2cpp_TypeInfo_var))->___TextureWidth_5 = L_2;
		// static readonly int TextureHeight = Shader.PropertyToID("TextureHeight");
		int32_t L_3;
		L_3 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral81785C0709828B0330D6987D0BC8063ECCA4DE55, NULL);
		((TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2_StaticFields*)il2cpp_codegen_static_fields_for(TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2_il2cpp_TypeInfo_var))->___TextureHeight_6 = L_3;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToTensorAsyncU3Ed__15_MoveNext_mF8C22159FE9C8D67C30DD4A723628788D668DA5A (U3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F_TisU3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A_m060FB3B72FE4BFB7722E4F5246B79C855C42EFB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9_TisU3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A_m91B23B49A4BFEF74CEF57A77F04D918158406595_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_GetRawTextureData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m3F258FE3486B29D798DCFECF41E9845382EF5CC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2* V_1 = NULL;
	bool V_2 = false;
	Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F V_3;
	memset((&V_3), 0, sizeof(V_3));
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_4;
	memset((&V_4), 0, sizeof(V_4));
	SwitchToMainThreadAwaitable_t30D0968092E3CD2E8BAE2DEF136FC76A3695E9F8 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9 V_6;
	memset((&V_6), 0, sizeof(V_6));
	SwitchToThreadPoolAwaitable_t5608C9A301A9B88DA3F77CB7E2AB2082321CB053 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	Exception_t* V_11 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_005e_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00f9_1;
			}
		}
		{
			// await UniTask.SwitchToMainThread(PlayerLoopTiming.FixedUpdate);
			il2cpp_codegen_initobj((&V_4), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = V_4;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			SwitchToMainThreadAwaitable_t30D0968092E3CD2E8BAE2DEF136FC76A3695E9F8 L_5;
			L_5 = UniTask_SwitchToMainThread_m7373C0656841FE81F475D7FA502C02BB656D1F0E(4, L_4, NULL);
			V_5 = L_5;
			Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F L_6;
			L_6 = SwitchToMainThreadAwaitable_GetAwaiter_m66A0F6F462885727A38028656D11B51CEA32BD29((&V_5), NULL);
			V_3 = L_6;
			bool L_7;
			L_7 = Awaiter_get_IsCompleted_m8B4E3723A3CC1B1E8359E40C0766081C55A5BC37((&V_3), NULL);
			if (L_7)
			{
				goto IL_007a_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F L_9 = V_3;
			__this->___U3CU3Eu__1_8 = L_9;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_8))->___cancellationToken_1))->____source_0), (void*)NULL);
			AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_10 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F_TisU3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A_m060FB3B72FE4BFB7722E4F5246B79C855C42EFB3_inline(L_10, (&V_3), __this, AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F_TisU3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A_m060FB3B72FE4BFB7722E4F5246B79C855C42EFB3_RuntimeMethod_var);
			goto IL_0206;
		}

IL_005e_1:
		{
			Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F L_11 = __this->___U3CU3Eu__1_8;
			V_3 = L_11;
			Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F* L_12 = (&__this->___U3CU3Eu__1_8);
			il2cpp_codegen_initobj(L_12, sizeof(Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
		}

IL_007a_1:
		{
			Awaiter_GetResult_m8383C6B4850150162ECAA6464603B95FD2231CB2((&V_3), NULL);
			// var pixels = FetchToTexture2D(texture).GetRawTextureData<Color32>();
			TextureToTensor_t9D7A85EAD9124F931EAB197CBFDB9BB8E7CFABC2* L_14 = V_1;
			RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_15 = __this->___texture_3;
			NullCheck(L_14);
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16;
			L_16 = TextureToTensor_FetchToTexture2D_m06F64365599A772CF08CB804E74B8195FD700EED(L_14, L_15, NULL);
			NullCheck(L_16);
			NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D L_17;
			L_17 = Texture2D_GetRawTextureData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m3F258FE3486B29D798DCFECF41E9845382EF5CC2(L_16, Texture2D_GetRawTextureData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m3F258FE3486B29D798DCFECF41E9845382EF5CC2_RuntimeMethod_var);
			__this->___U3CpixelsU3E5__2_5 = L_17;
			// int width = texture.width;
			RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = __this->___texture_3;
			NullCheck(L_18);
			int32_t L_19;
			L_19 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_18);
			__this->___U3CwidthU3E5__3_6 = L_19;
			// int height = texture.height - 1;
			RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_20 = __this->___texture_3;
			NullCheck(L_20);
			int32_t L_21;
			L_21 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_20);
			__this->___U3CheightU3E5__4_7 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
			// await UniTask.SwitchToThreadPool();
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			SwitchToThreadPoolAwaitable_t5608C9A301A9B88DA3F77CB7E2AB2082321CB053 L_22;
			L_22 = UniTask_SwitchToThreadPool_m4A79CBAD5A44C5037CD0A366CA801875F5206010(NULL);
			V_7 = L_22;
			Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9 L_23;
			L_23 = SwitchToThreadPoolAwaitable_GetAwaiter_m8720CC348C2B3A1A6CF1317042436D3F8307BD29((&V_7), NULL);
			V_6 = L_23;
			bool L_24;
			L_24 = Awaiter_get_IsCompleted_mC1677DC7707E92D236DF2BA1144FFABF6E45D92E((&V_6), NULL);
			if (L_24)
			{
				goto IL_0116_1;
			}
		}
		{
			int32_t L_25 = 1;
			V_0 = L_25;
			__this->___U3CU3E1__state_0 = L_25;
			Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9 L_26 = V_6;
			__this->___U3CU3Eu__2_9 = L_26;
			AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_27 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9_TisU3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A_m91B23B49A4BFEF74CEF57A77F04D918158406595_inline(L_27, (&V_6), __this, AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9_TisU3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A_m91B23B49A4BFEF74CEF57A77F04D918158406595_RuntimeMethod_var);
			goto IL_0206;
		}

IL_00f9_1:
		{
			Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9 L_28 = __this->___U3CU3Eu__2_9;
			V_6 = L_28;
			Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9* L_29 = (&__this->___U3CU3Eu__2_9);
			il2cpp_codegen_initobj(L_29, sizeof(Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9));
			int32_t L_30 = (-1);
			V_0 = L_30;
			__this->___U3CU3E1__state_0 = L_30;
		}

IL_0116_1:
		{
			Awaiter_GetResult_mF089C80E7D6C1B3FFA735B7F5B28098339127021((&V_6), NULL);
			// for (int i = 0; i < pixels.Length; i++)
			V_8 = 0;
			goto IL_01c3_1;
		}

IL_0125_1:
		{
			// int y = height - i / width;
			int32_t L_31 = __this->___U3CheightU3E5__4_7;
			int32_t L_32 = V_8;
			int32_t L_33 = __this->___U3CwidthU3E5__3_6;
			V_9 = ((int32_t)il2cpp_codegen_subtract(L_31, ((int32_t)(L_32/L_33))));
			// int x = i % width;
			int32_t L_34 = V_8;
			int32_t L_35 = __this->___U3CwidthU3E5__3_6;
			V_10 = ((int32_t)(L_34%L_35));
			// inputs[y, x, 0] = (float)(pixels[i].r) / scale;
			SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* L_36 = __this->___inputs_4;
			int32_t L_37 = V_9;
			int32_t L_38 = V_10;
			NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_39 = (&__this->___U3CpixelsU3E5__2_5);
			int32_t L_40 = V_8;
			Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_41;
			L_41 = IL2CPP_NATIVEARRAY_GET_ITEM(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (L_39)->___m_Buffer_0, L_40);
			uint8_t L_42 = L_41.___r_1;
			NullCheck(L_36);
			(L_36)->SetAt(L_37, L_38, 0, ((float)(((float)L_42)/(255.0f))));
			// inputs[y, x, 1] = (float)(pixels[i].g) / scale;
			SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* L_43 = __this->___inputs_4;
			int32_t L_44 = V_9;
			int32_t L_45 = V_10;
			NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_46 = (&__this->___U3CpixelsU3E5__2_5);
			int32_t L_47 = V_8;
			Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_48;
			L_48 = IL2CPP_NATIVEARRAY_GET_ITEM(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (L_46)->___m_Buffer_0, L_47);
			uint8_t L_49 = L_48.___g_2;
			NullCheck(L_43);
			(L_43)->SetAt(L_44, L_45, 1, ((float)(((float)L_49)/(255.0f))));
			// inputs[y, x, 2] = (float)(pixels[i].b) / scale;
			SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* L_50 = __this->___inputs_4;
			int32_t L_51 = V_9;
			int32_t L_52 = V_10;
			NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_53 = (&__this->___U3CpixelsU3E5__2_5);
			int32_t L_54 = V_8;
			Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_55;
			L_55 = IL2CPP_NATIVEARRAY_GET_ITEM(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (L_53)->___m_Buffer_0, L_54);
			uint8_t L_56 = L_55.___b_3;
			NullCheck(L_50);
			(L_50)->SetAt(L_51, L_52, 2, ((float)(((float)L_56)/(255.0f))));
			// for (int i = 0; i < pixels.Length; i++)
			int32_t L_57 = V_8;
			V_8 = ((int32_t)il2cpp_codegen_add(L_57, 1));
		}

IL_01c3_1:
		{
			// for (int i = 0; i < pixels.Length; i++)
			int32_t L_58 = V_8;
			NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_59 = (&__this->___U3CpixelsU3E5__2_5);
			int32_t L_60;
			L_60 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_59)->___m_Length_1);
			if ((((int32_t)L_58) < ((int32_t)L_60)))
			{
				goto IL_0125_1;
			}
		}
		{
			// return true;
			V_2 = (bool)1;
			goto IL_01f2;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01d9;
		}
		throw e;
	}

CATCH_01d9:
	{// begin catch(System.Exception)
		V_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_61 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_62 = V_11;
		AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_inline(L_61, L_62, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0206;
	}// end catch (depth: 1)

IL_01f2:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_63 = (&__this->___U3CU3Et__builder_1);
		bool L_64 = V_2;
		AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_inline(L_63, L_64, AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
	}

IL_0206:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CToTensorAsyncU3Ed__15_MoveNext_mF8C22159FE9C8D67C30DD4A723628788D668DA5A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A*>(__this + _offset);
	U3CToTensorAsyncU3Ed__15_MoveNext_mF8C22159FE9C8D67C30DD4A723628788D668DA5A(_thisAdjusted, method);
}
// System.Void TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToTensorAsyncU3Ed__15_SetStateMachine_mA370BD45224C8EB70095ED975304FF186F112A32 (U3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetStateMachine_mCD3C282E048D8E201907EA2CB1B0E7D3DC9095B5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncUniTaskMethodBuilder_1_SetStateMachine_mCD3C282E048D8E201907EA2CB1B0E7D3DC9095B5(L_0, L_1, AsyncUniTaskMethodBuilder_1_SetStateMachine_mCD3C282E048D8E201907EA2CB1B0E7D3DC9095B5_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CToTensorAsyncU3Ed__15_SetStateMachine_mA370BD45224C8EB70095ED975304FF186F112A32_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A*>(__this + _offset);
	U3CToTensorAsyncU3Ed__15_SetStateMachine_mA370BD45224C8EB70095ED975304FF186F112A32(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String TensorFlowLite.WebCamUtil::FindName(TensorFlowLite.WebCamUtil/PreferSpec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebCamUtil_FindName_m05E42D21E52D3F003BFBEA01E1D88DDFC9189752 (PreferSpec_tD15E6AB52F01F206665B5445FEE350429ED40D6F ___0_spec, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisWebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_m56974EDE62B874CC6B3726F57D87F8AA6F85260F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderByDescending_TisWebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m55C9488B3389F49F175FB351233C696203927A9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t0581A63ABD3EA2867D0202D9E2AAE784CF67B792_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CFindNameU3Eb__0_m420DA056EF17791A8965D1DA715A9E788ED2F88C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t469020C7BE69D7D513ABD902B7F70C895FC8789B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t469020C7BE69D7D513ABD902B7F70C895FC8789B* V_0 = NULL;
	WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5* V_1 = NULL;
	WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		U3CU3Ec__DisplayClass2_0_t469020C7BE69D7D513ABD902B7F70C895FC8789B* L_0 = (U3CU3Ec__DisplayClass2_0_t469020C7BE69D7D513ABD902B7F70C895FC8789B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t469020C7BE69D7D513ABD902B7F70C895FC8789B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_m32CC1D36F0559D16143A7FD5C657E9E55A729434(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t469020C7BE69D7D513ABD902B7F70C895FC8789B* L_1 = V_0;
		PreferSpec_tD15E6AB52F01F206665B5445FEE350429ED40D6F L_2 = ___0_spec;
		NullCheck(L_1);
		L_1->___spec_0 = L_2;
		// var devices = WebCamTexture.devices;
		WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5* L_3;
		L_3 = WebCamTexture_get_devices_m57A8D669542CBDDB56B21C8DB62D703B7215EBFA(NULL);
		V_1 = L_3;
		// if (Application.isMobilePlatform)
		bool L_4;
		L_4 = Application_get_isMobilePlatform_mE0BBFDE72BBFE5877581FA67DDBBFC397608AFCA(NULL);
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		// var prefers = devices.OrderByDescending(d => spec.GetScore(d));
		WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5* L_5 = V_1;
		U3CU3Ec__DisplayClass2_0_t469020C7BE69D7D513ABD902B7F70C895FC8789B* L_6 = V_0;
		Func_2_t0581A63ABD3EA2867D0202D9E2AAE784CF67B792* L_7 = (Func_2_t0581A63ABD3EA2867D0202D9E2AAE784CF67B792*)il2cpp_codegen_object_new(Func_2_t0581A63ABD3EA2867D0202D9E2AAE784CF67B792_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Func_2__ctor_m99478073B65A9DC7EC2C2FE16717C60F408E2C66(L_7, L_6, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CFindNameU3Eb__0_m420DA056EF17791A8965D1DA715A9E788ED2F88C_RuntimeMethod_var), NULL);
		RuntimeObject* L_8;
		L_8 = Enumerable_OrderByDescending_TisWebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m55C9488B3389F49F175FB351233C696203927A9E((RuntimeObject*)L_5, L_7, Enumerable_OrderByDescending_TisWebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m55C9488B3389F49F175FB351233C696203927A9E_RuntimeMethod_var);
		// return prefers.First().name;
		WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C L_9;
		L_9 = Enumerable_First_TisWebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_m56974EDE62B874CC6B3726F57D87F8AA6F85260F(L_8, Enumerable_First_TisWebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_m56974EDE62B874CC6B3726F57D87F8AA6F85260F_RuntimeMethod_var);
		V_2 = L_9;
		String_t* L_10;
		L_10 = WebCamDevice_get_name_m2BF75E8EA486668299906EAC9B35214890D4601E((&V_2), NULL);
		return L_10;
	}

IL_003a:
	{
		// return devices.First().name;
		WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5* L_11 = V_1;
		WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C L_12;
		L_12 = Enumerable_First_TisWebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_m56974EDE62B874CC6B3726F57D87F8AA6F85260F((RuntimeObject*)L_11, Enumerable_First_TisWebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_m56974EDE62B874CC6B3726F57D87F8AA6F85260F_RuntimeMethod_var);
		V_2 = L_12;
		String_t* L_13;
		L_13 = WebCamDevice_get_name_m2BF75E8EA486668299906EAC9B35214890D4601E((&V_2), NULL);
		return L_13;
	}
}
// UnityEngine.Matrix4x4 TensorFlowLite.WebCamUtil::GetMatrix(System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 WebCamUtil_GetMatrix_m1AAD27D1A2227E1FEFBF79FB95393EAE8C96C66F (float ___0_rotationDegree, bool ___1_mirrorHorizontal, bool ___2_mirrorVertical, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebCamUtil_t1753B2E6585566680B6308C285F6E255E04AA7C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B2_2;
	memset((&G_B2_2), 0, sizeof(G_B2_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B1_2;
	memset((&G_B1_2), 0, sizeof(G_B1_2));
	int32_t G_B3_0 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B3_3;
	memset((&G_B3_3), 0, sizeof(G_B3_3));
	float G_B5_0 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B5_1;
	memset((&G_B5_1), 0, sizeof(G_B5_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B5_2;
	memset((&G_B5_2), 0, sizeof(G_B5_2));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B5_3;
	memset((&G_B5_3), 0, sizeof(G_B5_3));
	float G_B4_0 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B4_1;
	memset((&G_B4_1), 0, sizeof(G_B4_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B4_2;
	memset((&G_B4_2), 0, sizeof(G_B4_2));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B4_3;
	memset((&G_B4_3), 0, sizeof(G_B4_3));
	int32_t G_B6_0 = 0;
	float G_B6_1 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B6_2;
	memset((&G_B6_2), 0, sizeof(G_B6_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B6_3;
	memset((&G_B6_3), 0, sizeof(G_B6_3));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B6_4;
	memset((&G_B6_4), 0, sizeof(G_B6_4));
	{
		// return
		//     PUSH_MATRIX
		//     * Matrix4x4.TRS(
		//         new Vector3(0, 0, 0),
		//         Quaternion.Euler(0, 0, rotationDegree),
		//         new Vector3(
		//             mirrorHorizontal ? -1 : 1,
		//             mirrorVertical ? -1 : 1,
		//             1
		//         )
		//     )
		//     * POP_MATRIX;
		il2cpp_codegen_runtime_class_init_inline(WebCamUtil_t1753B2E6585566680B6308C285F6E255E04AA7C6_il2cpp_TypeInfo_var);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((WebCamUtil_t1753B2E6585566680B6308C285F6E255E04AA7C6_StaticFields*)il2cpp_codegen_static_fields_for(WebCamUtil_t1753B2E6585566680B6308C285F6E255E04AA7C6_il2cpp_TypeInfo_var))->___PUSH_MATRIX_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		float L_2 = ___0_rotationDegree;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), L_2, NULL);
		bool L_4 = ___1_mirrorHorizontal;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		if (L_4)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_002f;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0030:
	{
		bool L_5 = ___2_mirrorVertical;
		G_B4_0 = ((float)G_B3_0);
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
		if (L_5)
		{
			G_B5_0 = ((float)G_B3_0);
			G_B5_1 = G_B3_1;
			G_B5_2 = G_B3_2;
			G_B5_3 = G_B3_3;
			goto IL_0037;
		}
	}
	{
		G_B6_0 = 1;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_0038;
	}

IL_0037:
	{
		G_B6_0 = (-1);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_0038:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), G_B6_1, ((float)G_B6_0), (1.0f), /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7;
		L_7 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(G_B6_3, G_B6_2, L_6, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_8;
		L_8 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(G_B6_4, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(WebCamUtil_t1753B2E6585566680B6308C285F6E255E04AA7C6_il2cpp_TypeInfo_var);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9 = ((WebCamUtil_t1753B2E6585566680B6308C285F6E255E04AA7C6_StaticFields*)il2cpp_codegen_static_fields_for(WebCamUtil_t1753B2E6585566680B6308C285F6E255E04AA7C6_il2cpp_TypeInfo_var))->___POP_MATRIX_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10;
		L_10 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_8, L_9, NULL);
		return L_10;
	}
}
// System.Void TensorFlowLite.WebCamUtil::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamUtil__cctor_mB4A5C554945CB7BB7F53BC3DC8DE2D9D93A170FC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebCamUtil_t1753B2E6585566680B6308C285F6E255E04AA7C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PreferSpec_tD15E6AB52F01F206665B5445FEE350429ED40D6F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static readonly PreferSpec DefaultPreferSpec = new PreferSpec()
		// {
		//     isFrontFacing = false,
		//     kind = WebCamKind.WideAngle,
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(PreferSpec_tD15E6AB52F01F206665B5445FEE350429ED40D6F));
		(&V_0)->___isFrontFacing_0 = (bool)0;
		(&V_0)->___kind_1 = 1;
		PreferSpec_tD15E6AB52F01F206665B5445FEE350429ED40D6F L_0 = V_0;
		((WebCamUtil_t1753B2E6585566680B6308C285F6E255E04AA7C6_StaticFields*)il2cpp_codegen_static_fields_for(WebCamUtil_t1753B2E6585566680B6308C285F6E255E04AA7C6_il2cpp_TypeInfo_var))->___DefaultPreferSpec_0 = L_0;
		// private static readonly Matrix4x4 PUSH_MATRIX = Matrix4x4.Translate(new Vector3(0.5f, 0.5f, 0));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.5f), (0.5f), (0.0f), /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2;
		L_2 = Matrix4x4_Translate_mF3EDFC59C9E51DC0C0A483F6E44A4930D62E4091(L_1, NULL);
		((WebCamUtil_t1753B2E6585566680B6308C285F6E255E04AA7C6_StaticFields*)il2cpp_codegen_static_fields_for(WebCamUtil_t1753B2E6585566680B6308C285F6E255E04AA7C6_il2cpp_TypeInfo_var))->___PUSH_MATRIX_1 = L_2;
		// private static readonly Matrix4x4 POP_MATRIX = Matrix4x4.Translate(new Vector3(-0.5f, -0.5f, 0));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), (-0.5f), (-0.5f), (0.0f), /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4;
		L_4 = Matrix4x4_Translate_mF3EDFC59C9E51DC0C0A483F6E44A4930D62E4091(L_3, NULL);
		((WebCamUtil_t1753B2E6585566680B6308C285F6E255E04AA7C6_StaticFields*)il2cpp_codegen_static_fields_for(WebCamUtil_t1753B2E6585566680B6308C285F6E255E04AA7C6_il2cpp_TypeInfo_var))->___POP_MATRIX_2 = L_4;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: TensorFlowLite.WebCamUtil/PreferSpec
IL2CPP_EXTERN_C void PreferSpec_tD15E6AB52F01F206665B5445FEE350429ED40D6F_marshal_pinvoke(const PreferSpec_tD15E6AB52F01F206665B5445FEE350429ED40D6F& unmarshaled, PreferSpec_tD15E6AB52F01F206665B5445FEE350429ED40D6F_marshaled_pinvoke& marshaled)
{
	marshaled.___isFrontFacing_0 = static_cast<int32_t>(unmarshaled.___isFrontFacing_0);
	marshaled.___kind_1 = unmarshaled.___kind_1;
}
IL2CPP_EXTERN_C void PreferSpec_tD15E6AB52F01F206665B5445FEE350429ED40D6F_marshal_pinvoke_back(const PreferSpec_tD15E6AB52F01F206665B5445FEE350429ED40D6F_marshaled_pinvoke& marshaled, PreferSpec_tD15E6AB52F01F206665B5445FEE350429ED40D6F& unmarshaled)
{
	bool unmarshaledisFrontFacing_temp_0 = false;
	unmarshaledisFrontFacing_temp_0 = static_cast<bool>(marshaled.___isFrontFacing_0);
	unmarshaled.___isFrontFacing_0 = unmarshaledisFrontFacing_temp_0;
	int32_t unmarshaledkind_temp_1 = 0;
	unmarshaledkind_temp_1 = marshaled.___kind_1;
	unmarshaled.___kind_1 = unmarshaledkind_temp_1;
}
// Conversion method for clean up from marshalling of: TensorFlowLite.WebCamUtil/PreferSpec
IL2CPP_EXTERN_C void PreferSpec_tD15E6AB52F01F206665B5445FEE350429ED40D6F_marshal_pinvoke_cleanup(PreferSpec_tD15E6AB52F01F206665B5445FEE350429ED40D6F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: TensorFlowLite.WebCamUtil/PreferSpec
IL2CPP_EXTERN_C void PreferSpec_tD15E6AB52F01F206665B5445FEE350429ED40D6F_marshal_com(const PreferSpec_tD15E6AB52F01F206665B5445FEE350429ED40D6F& unmarshaled, PreferSpec_tD15E6AB52F01F206665B5445FEE350429ED40D6F_marshaled_com& marshaled)
{
	marshaled.___isFrontFacing_0 = static_cast<int32_t>(unmarshaled.___isFrontFacing_0);
	marshaled.___kind_1 = unmarshaled.___kind_1;
}
IL2CPP_EXTERN_C void PreferSpec_tD15E6AB52F01F206665B5445FEE350429ED40D6F_marshal_com_back(const PreferSpec_tD15E6AB52F01F206665B5445FEE350429ED40D6F_marshaled_com& marshaled, PreferSpec_tD15E6AB52F01F206665B5445FEE350429ED40D6F& unmarshaled)
{
	bool unmarshaledisFrontFacing_temp_0 = false;
	unmarshaledisFrontFacing_temp_0 = static_cast<bool>(marshaled.___isFrontFacing_0);
	unmarshaled.___isFrontFacing_0 = unmarshaledisFrontFacing_temp_0;
	int32_t unmarshaledkind_temp_1 = 0;
	unmarshaledkind_temp_1 = marshaled.___kind_1;
	unmarshaled.___kind_1 = unmarshaledkind_temp_1;
}
// Conversion method for clean up from marshalling of: TensorFlowLite.WebCamUtil/PreferSpec
IL2CPP_EXTERN_C void PreferSpec_tD15E6AB52F01F206665B5445FEE350429ED40D6F_marshal_com_cleanup(PreferSpec_tD15E6AB52F01F206665B5445FEE350429ED40D6F_marshaled_com& marshaled)
{
}
// System.Int32 TensorFlowLite.WebCamUtil/PreferSpec::GetScore(UnityEngine.WebCamDevice&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PreferSpec_GetScore_m9B29A6F382C2353280C6A26114189FE230AF3A2E (PreferSpec_tD15E6AB52F01F206665B5445FEE350429ED40D6F* __this, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* ___0_device, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// int score = 0;
		V_0 = 0;
		// if (device.isFrontFacing == isFrontFacing) score++;
		WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* L_0 = ___0_device;
		WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C L_1 = (*(WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C*)L_0);
		V_1 = L_1;
		bool L_2;
		L_2 = WebCamDevice_get_isFrontFacing_mA021D9DBDDB227FEA8AA635E833EAB7718672404((&V_1), NULL);
		bool L_3 = __this->___isFrontFacing_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_001c;
		}
	}
	{
		// if (device.isFrontFacing == isFrontFacing) score++;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_001c:
	{
		// if (device.kind == kind) score++;
		WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* L_5 = ___0_device;
		WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C L_6 = (*(WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C*)L_5);
		V_1 = L_6;
		int32_t L_7;
		L_7 = WebCamDevice_get_kind_mABE370D6A0530D98A0DF38EAD2FF84129B909B59((&V_1), NULL);
		int32_t L_8 = __this->___kind_1;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0036;
		}
	}
	{
		// if (device.kind == kind) score++;
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0036:
	{
		// return score;
		int32_t L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t PreferSpec_GetScore_m9B29A6F382C2353280C6A26114189FE230AF3A2E_AdjustorThunk (RuntimeObject* __this, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* ___0_device, const RuntimeMethod* method)
{
	PreferSpec_tD15E6AB52F01F206665B5445FEE350429ED40D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PreferSpec_tD15E6AB52F01F206665B5445FEE350429ED40D6F*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PreferSpec_GetScore_m9B29A6F382C2353280C6A26114189FE230AF3A2E(_thisAdjusted, ___0_device, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TensorFlowLite.WebCamUtil/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m32CC1D36F0559D16143A7FD5C657E9E55A729434 (U3CU3Ec__DisplayClass2_0_t469020C7BE69D7D513ABD902B7F70C895FC8789B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 TensorFlowLite.WebCamUtil/<>c__DisplayClass2_0::<FindName>b__0(UnityEngine.WebCamDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass2_0_U3CFindNameU3Eb__0_m420DA056EF17791A8965D1DA715A9E788ED2F88C (U3CU3Ec__DisplayClass2_0_t469020C7BE69D7D513ABD902B7F70C895FC8789B* __this, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C ___0_d, const RuntimeMethod* method) 
{
	{
		// var prefers = devices.OrderByDescending(d => spec.GetScore(d));
		PreferSpec_tD15E6AB52F01F206665B5445FEE350429ED40D6F* L_0 = (&__this->___spec_0);
		int32_t L_1;
		L_1 = PreferSpec_GetScore_m9B29A6F382C2353280C6A26114189FE230AF3A2E(L_0, (&___0_d), NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		// this.y = y;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		// this.z = z;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		// this.w = w;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_3))));
		goto IL_000b;
	}

IL_000b:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_1 = L_0;
		float L_1 = ___1_y;
		__this->___y_2 = L_1;
		float L_2 = ___2_z;
		__this->___z_3 = L_2;
		float L_3 = ___3_w;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_get_magnitude_m97A83FC484190F07D8017F4BD10E3C81478E0D20_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)__this);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)__this);
		float L_2;
		L_2 = Vector4_Dot_m40A3B2E258E53E4847583474E40AC29F68AF8BA3_inline(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = sqrt(((double)L_2));
		V_0 = ((float)L_3);
		goto IL_001c;
	}

IL_001c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))->___identityMatrix_17;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 AsyncUniTaskMethodBuilder_1_Create_m541E96A720B74646A67D392E54DECC686529143A_gshared_inline (const RuntimeMethod* method) 
{
	AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3));
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_Start_TisU3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A_m58DF46309ED2EA16F84499F1ADB94FFFC6EF3A42_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, U3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		// stateMachine.MoveNext();
		U3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A* L_0 = ___0_stateMachine;
		U3CToTensorAsyncU3Ed__15_MoveNext_mF8C22159FE9C8D67C30DD4A723628788D668DA5A(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 AsyncUniTaskMethodBuilder_1_get_Task_m987FF39A55DF01CB856D3CD4C0DF8AC06F4E338C_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise != null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return runnerPromise.Task;
		RuntimeObject* L_1 = (RuntimeObject*)__this->___runnerPromise_0;
		NullCheck(L_1);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Boolean>::get_Task() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_1);
		return L_2;
	}

IL_0014:
	{
		// else if (ex != null)
		Exception_t* L_3 = (Exception_t*)__this->___ex_1;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// return UniTask.FromException<T>(ex);
		Exception_t* L_4 = (Exception_t*)__this->___ex_1;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_5;
		L_5 = ((  UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 (*) (Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_5;
	}

IL_0028:
	{
		// return UniTask.FromResult(result);
		bool L_6 = (bool)__this->___result_2;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_7;
		L_7 = ((  UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 (*) (bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F_TisU3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A_m060FB3B72FE4BFB7722E4F5246B79C855C42EFB3_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F* ___0_awaiter, U3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A* ___1_stateMachine, const RuntimeMethod* method) 
{
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTask<TStateMachine, T>.SetStateMachine(ref stateMachine, ref runnerPromise);
		U3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A* L_1 = ___1_stateMachine;
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___runnerPromise_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (U3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F* L_3 = ___0_awaiter;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___runnerPromise_0;
		NullCheck(L_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
		L_5 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Boolean>::get_MoveNext() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_4);
		Awaiter_UnsafeOnCompleted_m0F8D6A7007F0397899FB1444B09D14912BB48E67(L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9_TisU3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A_m91B23B49A4BFEF74CEF57A77F04D918158406595_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9* ___0_awaiter, U3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A* ___1_stateMachine, const RuntimeMethod* method) 
{
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTask<TStateMachine, T>.SetStateMachine(ref stateMachine, ref runnerPromise);
		U3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A* L_1 = ___1_stateMachine;
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___runnerPromise_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (U3CToTensorAsyncU3Ed__15_tA569A866606F78644AC2C286530791990EB8152A*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9* L_3 = ___0_awaiter;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___runnerPromise_0;
		NullCheck(L_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
		L_5 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Boolean>::get_MoveNext() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_4);
		Awaiter_UnsafeOnCompleted_mB6FEEBBADB2DEE87A1578C836F09D56A648F1A61(L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// ex = exception;
		Exception_t* L_1 = ___0_exception;
		__this->___ex_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ex_1), (void*)L_1);
		return;
	}

IL_0010:
	{
		// runnerPromise.SetException(exception);
		RuntimeObject* L_2 = (RuntimeObject*)__this->___runnerPromise_0;
		Exception_t* L_3 = ___0_exception;
		NullCheck(L_2);
		InterfaceActionInvoker1< Exception_t* >::Invoke(3 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Boolean>::SetException(System.Exception) */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_2, L_3);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, bool ___0_result, const RuntimeMethod* method) 
{
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// this.result = result;
		bool L_1 = ___0_result;
		__this->___result_2 = L_1;
		return;
	}

IL_0010:
	{
		// runnerPromise.SetResult(result);
		RuntimeObject* L_2 = (RuntimeObject*)__this->___runnerPromise_0;
		bool L_3 = ___0_result;
		NullCheck(L_2);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Boolean>::SetResult(T) */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_2, L_3);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Dot_m40A3B2E258E53E4847583474E40AC29F68AF8BA3_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_a;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___1_b;
		float L_3 = L_2.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_a;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___1_b;
		float L_7 = L_6.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___0_a;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___1_b;
		float L_11 = L_10.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___0_a;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___1_b;
		float L_15 = L_14.___w_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
