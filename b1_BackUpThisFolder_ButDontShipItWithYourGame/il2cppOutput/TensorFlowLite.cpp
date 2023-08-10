#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3 p3)
	{
		void* params[3] = { &p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3*, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4 p4)
	{
		void* params[4] = { p1, &p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		R ret;
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.List`1<TensorFlowLite.IGpuDelegate>
struct List_1_t3F263848BA2695073FE2245A8F675993522CADAB;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TensorFlowLite.IGpuDelegate[]
struct IGpuDelegateU5BU5D_tC285458409843F4E0B94961592F0A12609CE0127;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// TensorFlowLite.GlDelegate
struct GlDelegate_tA63F41A18E8E7216656C1608713B534AFC023351;
// TensorFlowLite.GpuDelegateV2
struct GpuDelegateV2_t58AC666626083BE71F779E388B319E3D8690090D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// TensorFlowLite.IGpuDelegate
struct IGpuDelegate_t487B38F8FEE6A5774DAEB2CD49BE3F92FC945546;
// TensorFlowLite.Interpreter
struct Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520;
// TensorFlowLite.InterpreterOptions
struct InterpreterOptions_t9E95AA774C31B5ACAE144C947B861C026677E487;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// TensorFlowLite.ErrorReporter/ErrorReporterDelegate
struct ErrorReporterDelegate_t5F32927D54AB43140BF4C5FE48950EA989BC1AE4;
// TensorFlowLite.InterpreterOptions/ErrorReporterDelegate
struct ErrorReporterDelegate_t9FEC315AEE9802E32AFC132C78CDD0F162983DB7;
// TensorFlowLite.Registration/FreeDelegate
struct FreeDelegate_t640DC802E5E1FE50761346233E93508C0021C2BC;
// TensorFlowLite.Registration/InitDelegate
struct InitDelegate_t41591186284D5B1C6DC3F2361A600DC37DB31A61;
// TensorFlowLite.Registration/InvokeDelegate
struct InvokeDelegate_t1DC0DC15F148850EFC016D0C27EF491CD5E8D1FA;
// TensorFlowLite.Registration/PrepareDelegate
struct PrepareDelegate_tBE56FEC322506B3126582F03C4322AB6EA67255A;
// TensorFlowLite.Registration/ProfilingStringDelegate
struct ProfilingStringDelegate_t91B2B2E825070CDB9A07A9AD58EDC6D51183EB1D;

IL2CPP_EXTERN_C RuntimeClass* DataType_t97555CB7D36F2CC789010CCD62EB57E0300296A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ErrorReporterDelegate_t5F32927D54AB43140BF4C5FE48950EA989BC1AE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FreeDelegate_t640DC802E5E1FE50761346233E93508C0021C2BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GpuDelegateV2_t58AC666626083BE71F779E388B319E3D8690090D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGpuDelegate_t487B38F8FEE6A5774DAEB2CD49BE3F92FC945546_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitDelegate_t41591186284D5B1C6DC3F2361A600DC37DB31A61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InterpreterOptions_t9E95AA774C31B5ACAE144C947B861C026677E487_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvokeDelegate_t1DC0DC15F148850EFC016D0C27EF491CD5E8D1FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3F263848BA2695073FE2245A8F675993522CADAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PrepareDelegate_tBE56FEC322506B3126582F03C4322AB6EA67255A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProfilingStringDelegate_t91B2B2E825070CDB9A07A9AD58EDC6D51183EB1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral24EE12FED48DD9020A8243CF10D968E6B9D65BFD;
IL2CPP_EXTERN_C String_t* _stringLiteral2E9554DA49DE9C1B018EE5C96304BDB94FDB7078;
IL2CPP_EXTERN_C String_t* _stringLiteral3F828DC5BABCA6B0F32AEE3387CC5A92A7E26DBD;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral90C0C64260A2290CC30E10C37C0E45A183BFBDEE;
IL2CPP_EXTERN_C String_t* _stringLiteralAB6E1EB65E6DF0ABEBDA7EFD4891C6849B7F077C;
IL2CPP_EXTERN_C String_t* _stringLiteralB62A13498B471AB14ED86C3A67F857A110A7E66C;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralD636EEFC5DCD1E9D43960804AA16B411F9F85D02;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB42C83BE2C203BF82BF64BA5C04EBCF842F54E8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m2DAA66FBAABE8C96458883F25C5F7419ACA68ED4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mE1052649733DDD0047A38B9E404AF7462357343A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ErrorReporter_OnErrorReporter_mA1DFDB2BEDA27B6B7DDF166AE7A869F794224CD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterpreterExperimental_AddCustomOp_m7A13E42A0A032ED2A6204956C736074D35274B93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interpreter_ThrowIfError_m4F84EE55D3FD540DE37FDD2EC4FDE09BBAF465DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interpreter__ctor_m5BC403A44C914F12701A68783D68A29A0F3A3D35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5A46C6159F42FF5AE644E17C4C1D6A97D50F06D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF3E6FBEB14CC3657C9C40D8C9D03BA3DF6EBB11F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7D5DD2C7907575CF7CE952D0A77FDDE9BB900090_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m497AAECBCA3426096BFBE418E39A380FDDF57603_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_Join_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3954E1690A53FDAE651340E931E00877D887458C_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t3A8BA9C47F37D6FA810C240FA6800248F6C3CC33 
{
};

// System.Collections.Generic.List`1<TensorFlowLite.IGpuDelegate>
struct List_1_t3F263848BA2695073FE2245A8F675993522CADAB  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IGpuDelegateU5BU5D_tC285458409843F4E0B94961592F0A12609CE0127* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// TensorFlowLite.ErrorReporter
struct ErrorReporter_t0090BF4C523EACF70AAF16A1A8E78BE2B66B0481  : public RuntimeObject
{
};

// TensorFlowLite.InterpreterExperimental
struct InterpreterExperimental_tC025A3B7D1DE1C927905C9CCCD008A22203BF22A  : public RuntimeObject
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

// System.Collections.Generic.List`1/Enumerator<TensorFlowLite.IGpuDelegate>
struct Enumerator_t9F662B1A6D503111950AF04F2905140AD59AF375 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t3F263848BA2695073FE2245A8F675993522CADAB* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
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

// TensorFlowLite.Registration
struct Registration_t34E0DA460DECEB37E6616D4AB9101BE2A4A01D3C 
{
	// TensorFlowLite.Registration/InitDelegate TensorFlowLite.Registration::initDelegate
	InitDelegate_t41591186284D5B1C6DC3F2361A600DC37DB31A61* ___initDelegate_0;
	// TensorFlowLite.Registration/FreeDelegate TensorFlowLite.Registration::freeDelegate
	FreeDelegate_t640DC802E5E1FE50761346233E93508C0021C2BC* ___freeDelegate_1;
	// TensorFlowLite.Registration/PrepareDelegate TensorFlowLite.Registration::prepareDelegate
	PrepareDelegate_tBE56FEC322506B3126582F03C4322AB6EA67255A* ___prepareDelegate_2;
	// TensorFlowLite.Registration/InvokeDelegate TensorFlowLite.Registration::invokeDelegate
	InvokeDelegate_t1DC0DC15F148850EFC016D0C27EF491CD5E8D1FA* ___invokeDelegate_3;
	// TensorFlowLite.Registration/ProfilingStringDelegate TensorFlowLite.Registration::profilingStringDelegate
	ProfilingStringDelegate_t91B2B2E825070CDB9A07A9AD58EDC6D51183EB1D* ___profilingStringDelegate_4;
	// System.Int32 TensorFlowLite.Registration::builtinCode
	int32_t ___builtinCode_5;
	// System.String TensorFlowLite.Registration::customName
	String_t* ___customName_6;
	// System.Int32 TensorFlowLite.Registration::version
	int32_t ___version_7;
};
// Native definition for P/Invoke marshalling of TensorFlowLite.Registration
struct Registration_t34E0DA460DECEB37E6616D4AB9101BE2A4A01D3C_marshaled_pinvoke
{
	Il2CppMethodPointer ___initDelegate_0;
	Il2CppMethodPointer ___freeDelegate_1;
	Il2CppMethodPointer ___prepareDelegate_2;
	Il2CppMethodPointer ___invokeDelegate_3;
	Il2CppMethodPointer ___profilingStringDelegate_4;
	int32_t ___builtinCode_5;
	char* ___customName_6;
	int32_t ___version_7;
};
// Native definition for COM marshalling of TensorFlowLite.Registration
struct Registration_t34E0DA460DECEB37E6616D4AB9101BE2A4A01D3C_marshaled_com
{
	Il2CppMethodPointer ___initDelegate_0;
	Il2CppMethodPointer ___freeDelegate_1;
	Il2CppMethodPointer ___prepareDelegate_2;
	Il2CppMethodPointer ___invokeDelegate_3;
	Il2CppMethodPointer ___profilingStringDelegate_4;
	int32_t ___builtinCode_5;
	Il2CppChar* ___customName_6;
	int32_t ___version_7;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// TensorFlowLite.GlDelegate/CompileOptions
struct CompileOptions_tC03BCF9506830F828BFD983540131E459A41C5F9 
{
	// System.Int32 TensorFlowLite.GlDelegate/CompileOptions::precisionLossAllowed
	int32_t ___precisionLossAllowed_0;
	// System.Int32 TensorFlowLite.GlDelegate/CompileOptions::preferredGlObjectType
	int32_t ___preferredGlObjectType_1;
	// System.Int32 TensorFlowLite.GlDelegate/CompileOptions::dynamicBatchEnabled
	int32_t ___dynamicBatchEnabled_2;
	// System.Int32 TensorFlowLite.GlDelegate/CompileOptions::inlineParameters
	int32_t ___inlineParameters_3;
};

// TensorFlowLite.GpuDelegateV2/Options
struct Options_tCA026E37D00C60BDA25D8FE55F52261D6AF2CD68 
{
	// System.Int32 TensorFlowLite.GpuDelegateV2/Options::isPrecisionLossAllowed
	int32_t ___isPrecisionLossAllowed_0;
	// System.Int32 TensorFlowLite.GpuDelegateV2/Options::inferencePreference
	int32_t ___inferencePreference_1;
	// System.Int32 TensorFlowLite.GpuDelegateV2/Options::inferencePriority1
	int32_t ___inferencePriority1_2;
	// System.Int32 TensorFlowLite.GpuDelegateV2/Options::inferencePriority2
	int32_t ___inferencePriority2_3;
	// System.Int32 TensorFlowLite.GpuDelegateV2/Options::inferencePriority3
	int32_t ___inferencePriority3_4;
	// System.Int64 TensorFlowLite.GpuDelegateV2/Options::experimentalFlags
	int64_t ___experimentalFlags_5;
	// System.Int32 TensorFlowLite.GpuDelegateV2/Options::maxDelegatedPartitions
	int32_t ___maxDelegatedPartitions_6;
};

// TensorFlowLite.Interpreter/QuantizationParams
struct QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A 
{
	// System.Single TensorFlowLite.Interpreter/QuantizationParams::scale
	float ___scale_0;
	// System.Int32 TensorFlowLite.Interpreter/QuantizationParams::zeroPoint
	int32_t ___zeroPoint_1;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// TensorFlowLite.GlDelegate
struct GlDelegate_tA63F41A18E8E7216656C1608713B534AFC023351  : public RuntimeObject
{
	// System.IntPtr TensorFlowLite.GlDelegate::<Delegate>k__BackingField
	intptr_t ___U3CDelegateU3Ek__BackingField_0;
};

// TensorFlowLite.GpuDelegateV2
struct GpuDelegateV2_t58AC666626083BE71F779E388B319E3D8690090D  : public RuntimeObject
{
	// System.IntPtr TensorFlowLite.GpuDelegateV2::<Delegate>k__BackingField
	intptr_t ___U3CDelegateU3Ek__BackingField_0;
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

// TensorFlowLite.InterpreterOptions
struct InterpreterOptions_t9E95AA774C31B5ACAE144C947B861C026677E487  : public RuntimeObject
{
	// System.IntPtr TensorFlowLite.InterpreterOptions::nativePtr
	intptr_t ___nativePtr_0;
	// System.Collections.Generic.List`1<TensorFlowLite.IGpuDelegate> TensorFlowLite.InterpreterOptions::delegates
	List_1_t3F263848BA2695073FE2245A8F675993522CADAB* ___delegates_1;
	// System.Int32 TensorFlowLite.InterpreterOptions::_threads
	int32_t ____threads_2;
	// System.Boolean TensorFlowLite.InterpreterOptions::_useNNAPI
	bool ____useNNAPI_3;
};

// TensorFlowLite.GlDelegate/Options
struct Options_tAF384DD8A79EF542CEE09C7368A1C056FB56E719 
{
	// System.Byte* TensorFlowLite.GlDelegate/Options::metadata
	uint8_t* ___metadata_0;
	// TensorFlowLite.GlDelegate/CompileOptions TensorFlowLite.GlDelegate/Options::compileOptions
	CompileOptions_tC03BCF9506830F828BFD983540131E459A41C5F9 ___compileOptions_1;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// TensorFlowLite.ErrorReporter/ErrorReporterDelegate
struct ErrorReporterDelegate_t5F32927D54AB43140BF4C5FE48950EA989BC1AE4  : public MulticastDelegate_t
{
};

// TensorFlowLite.InterpreterOptions/ErrorReporterDelegate
struct ErrorReporterDelegate_t9FEC315AEE9802E32AFC132C78CDD0F162983DB7  : public MulticastDelegate_t
{
};

// TensorFlowLite.Registration/FreeDelegate
struct FreeDelegate_t640DC802E5E1FE50761346233E93508C0021C2BC  : public MulticastDelegate_t
{
};

// TensorFlowLite.Registration/InitDelegate
struct InitDelegate_t41591186284D5B1C6DC3F2361A600DC37DB31A61  : public MulticastDelegate_t
{
};

// TensorFlowLite.Registration/InvokeDelegate
struct InvokeDelegate_t1DC0DC15F148850EFC016D0C27EF491CD5E8D1FA  : public MulticastDelegate_t
{
};

// TensorFlowLite.Registration/PrepareDelegate
struct PrepareDelegate_tBE56FEC322506B3126582F03C4322AB6EA67255A  : public MulticastDelegate_t
{
};

// TensorFlowLite.Registration/ProfilingStringDelegate
struct ProfilingStringDelegate_t91B2B2E825070CDB9A07A9AD58EDC6D51183EB1D  : public MulticastDelegate_t
{
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<TensorFlowLite.IGpuDelegate>
struct List_1_t3F263848BA2695073FE2245A8F675993522CADAB_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IGpuDelegateU5BU5D_tC285458409843F4E0B94961592F0A12609CE0127* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TensorFlowLite.IGpuDelegate>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// TensorFlowLite.ErrorReporter

// TensorFlowLite.ErrorReporter

// TensorFlowLite.InterpreterExperimental

// TensorFlowLite.InterpreterExperimental

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Collections.Generic.List`1/Enumerator<TensorFlowLite.IGpuDelegate>

// System.Collections.Generic.List`1/Enumerator<TensorFlowLite.IGpuDelegate>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

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

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// TensorFlowLite.Registration

// TensorFlowLite.Registration

// System.Single

// System.Single

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.Void

// System.Void

// TensorFlowLite.GlDelegate/CompileOptions

// TensorFlowLite.GlDelegate/CompileOptions

// TensorFlowLite.GpuDelegateV2/Options

// TensorFlowLite.GpuDelegateV2/Options

// TensorFlowLite.Interpreter/QuantizationParams

// TensorFlowLite.Interpreter/QuantizationParams

// UnityEngine.ComputeBuffer

// UnityEngine.ComputeBuffer

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Runtime.InteropServices.GCHandle

// System.Runtime.InteropServices.GCHandle

// TensorFlowLite.GlDelegate

// TensorFlowLite.GlDelegate

// TensorFlowLite.GpuDelegateV2

// TensorFlowLite.GpuDelegateV2

// TensorFlowLite.Interpreter

// TensorFlowLite.Interpreter

// TensorFlowLite.InterpreterOptions

// TensorFlowLite.InterpreterOptions

// TensorFlowLite.GlDelegate/Options

// TensorFlowLite.GlDelegate/Options

// TensorFlowLite.Interpreter/TensorInfo

// TensorFlowLite.Interpreter/TensorInfo

// System.AsyncCallback

// System.AsyncCallback

// System.NotImplementedException

// System.NotImplementedException

// TensorFlowLite.ErrorReporter/ErrorReporterDelegate

// TensorFlowLite.ErrorReporter/ErrorReporterDelegate

// TensorFlowLite.InterpreterOptions/ErrorReporterDelegate

// TensorFlowLite.InterpreterOptions/ErrorReporterDelegate

// TensorFlowLite.Registration/FreeDelegate

// TensorFlowLite.Registration/FreeDelegate

// TensorFlowLite.Registration/InitDelegate

// TensorFlowLite.Registration/InitDelegate

// TensorFlowLite.Registration/InvokeDelegate

// TensorFlowLite.Registration/InvokeDelegate

// TensorFlowLite.Registration/PrepareDelegate

// TensorFlowLite.Registration/PrepareDelegate

// TensorFlowLite.Registration/ProfilingStringDelegate

// TensorFlowLite.Registration/ProfilingStringDelegate
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.String System.String::Join<System.Int32>(System.String,System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3954E1690A53FDAE651340E931E00877D887458C_gshared (String_t* ___0_separator, RuntimeObject* ___1_values, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

// System.Void TensorFlowLite.ErrorReporter::OnErrorReporter(System.IntPtr,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReporter_OnErrorReporter_mA1DFDB2BEDA27B6B7DDF166AE7A869F794224CD1 (intptr_t ___0_userData, String_t* ___1_format, intptr_t ___2_vaList, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.ErrorReporter/ErrorReporterDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReporterDelegate__ctor_m0EAAC197B1A3B2F9526A5E821A998A0787F67F97 (ErrorReporterDelegate_t5F32927D54AB43140BF4C5FE48950EA989BC1AE4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.ErrorReporter::TfLiteInterpreterOptionsSetErrorReporter(System.IntPtr,TensorFlowLite.ErrorReporter/ErrorReporterDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReporter_TfLiteInterpreterOptionsSetErrorReporter_m0C4CD0CEF5CD42F760379843F93ED44531826838 (intptr_t ___0_options, ErrorReporterDelegate_t5F32927D54AB43140BF4C5FE48950EA989BC1AE4* ___1_errorReporter, intptr_t ___2_user_data, const RuntimeMethod* method) ;
// System.String TensorFlowLite.ErrorReporter::UnityTFLiteStringFormat(System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorReporter_UnityTFLiteStringFormat_mBAC74EA49C11D1C00AEA8776028919A268288899 (String_t* ___0_format, intptr_t ___1_vaList, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// TensorFlowLite.GlDelegate/Options TensorFlowLite.GlDelegate::TfLiteGpuDelegateOptionsDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Options_tAF384DD8A79EF542CEE09C7368A1C056FB56E719 GlDelegate_TfLiteGpuDelegateOptionsDefault_mFF0B3B3F25B0BCCD0D94A704CBD82A0C0874CF22 (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.IntPtr TensorFlowLite.GlDelegate::TfLiteGpuDelegateCreate(TensorFlowLite.GlDelegate/Options&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GlDelegate_TfLiteGpuDelegateCreate_m92F4A16EB98C83B11BFE2E44A2E6AFD38CA43079 (Options_tAF384DD8A79EF542CEE09C7368A1C056FB56E719* ___0_options, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.GlDelegate::set_Delegate(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GlDelegate_set_Delegate_mA56F334CDB77A50EDD0DCA1D1BB2BBFE614AC431_inline (GlDelegate_tA63F41A18E8E7216656C1608713B534AFC023351* __this, intptr_t ___0_value, const RuntimeMethod* method) ;
// TensorFlowLite.GlDelegate/Options TensorFlowLite.GlDelegate::get_DefaultOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Options_tAF384DD8A79EF542CEE09C7368A1C056FB56E719 GlDelegate_get_DefaultOptions_mF3B7CB3254F5F6ADE9ACC1260D50FC3B03CB26D1 (const RuntimeMethod* method) ;
// System.IntPtr TensorFlowLite.GlDelegate::get_Delegate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GlDelegate_get_Delegate_mCA0ECD848DC9D9473774F55528BDE29780E3EE97_inline (GlDelegate_tA63F41A18E8E7216656C1608713B534AFC023351* __this, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.GlDelegate::TfLiteGpuDelegateDelete(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlDelegate_TfLiteGpuDelegateDelete_m8541C356D3B0FDF1D0CEC413201BF9FDE194D69D (intptr_t ___0_gpuDelegate, const RuntimeMethod* method) ;
// System.Int32 TensorFlowLite.InterpreterExperimental::GetInputTensorIndex(TensorFlowLite.Interpreter,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InterpreterExperimental_GetInputTensorIndex_mB1BDFCA9AA8F67945CF796E3DB41D7EE6F9B0E70 (Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* ___0_interpreter, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Boolean TensorFlowLite.GlDelegate::BindBufferToTensor(System.Int32,UnityEngine.ComputeBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlDelegate_BindBufferToTensor_mBB5479E762EA0ADE3BD226400E574948F870B8B8 (GlDelegate_tA63F41A18E8E7216656C1608713B534AFC023351* __this, int32_t ___0_tensorIndex, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___1_buffer, const RuntimeMethod* method) ;
// System.Int32 TensorFlowLite.InterpreterExperimental::GetOutputTensorIndex(TensorFlowLite.Interpreter,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InterpreterExperimental_GetOutputTensorIndex_m91FA4F174B8D03C8383EE72E7BA15DD47B1E4AAA (Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* ___0_interpreter, int32_t ___1_index, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.ComputeBuffer::GetNativeBufferPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ComputeBuffer_GetNativeBufferPtr_m834415C5780BE97313E39377CA7C1EE85288B76D (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, const RuntimeMethod* method) ;
// System.Int32 System.IntPtr::ToInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_ToInt32_mD53B5D2C73C7E4BE5ADEBC5D187EACC83D5BB292 (intptr_t* __this, const RuntimeMethod* method) ;
// TensorFlowLite.Interpreter/Status TensorFlowLite.GlDelegate::TfLiteGpuDelegateBindBufferToTensor(System.IntPtr,System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlDelegate_TfLiteGpuDelegateBindBufferToTensor_mA911532D5834030F8136A52DCE5055C37E09C2C7 (intptr_t ___0_gpuDelegate, uint32_t ___1_buffer, int32_t ___2_tensorIndex, const RuntimeMethod* method) ;
// TensorFlowLite.GpuDelegateV2/Options TensorFlowLite.GpuDelegateV2::TfLiteGpuDelegateOptionsV2Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Options_tCA026E37D00C60BDA25D8FE55F52261D6AF2CD68 GpuDelegateV2_TfLiteGpuDelegateOptionsV2Default_mCA5CF1169F00860E87B40E128F19C8010ADC7425 (const RuntimeMethod* method) ;
// TensorFlowLite.GpuDelegateV2/Options TensorFlowLite.GpuDelegateV2::get_DefaultOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Options_tCA026E37D00C60BDA25D8FE55F52261D6AF2CD68 GpuDelegateV2_get_DefaultOptions_mD6F6A55CFF151C32BA150E79A7A81326701FEEFC (const RuntimeMethod* method) ;
// System.IntPtr TensorFlowLite.GpuDelegateV2::TfLiteGpuDelegateV2Create(TensorFlowLite.GpuDelegateV2/Options&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GpuDelegateV2_TfLiteGpuDelegateV2Create_mE28BECD41F6F0CC7DEE7ED66CB96E5B43A76FB90 (Options_tCA026E37D00C60BDA25D8FE55F52261D6AF2CD68* ___0_options, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.GpuDelegateV2::set_Delegate(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GpuDelegateV2_set_Delegate_m36871EDE0D91B085A31969BA028A3B15BD1670AF_inline (GpuDelegateV2_t58AC666626083BE71F779E388B319E3D8690090D* __this, intptr_t ___0_value, const RuntimeMethod* method) ;
// System.IntPtr TensorFlowLite.GpuDelegateV2::get_Delegate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GpuDelegateV2_get_Delegate_m1B04DD78607E6851556396A330162083DC12CEFA_inline (GpuDelegateV2_t58AC666626083BE71F779E388B319E3D8690090D* __this, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.GpuDelegateV2::TfLiteGpuDelegateV2Delete(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpuDelegateV2_TfLiteGpuDelegateV2Delete_m38ADCBA9DA898F1E8C98478235FDFE0E8D5DC22B (intptr_t ___0_gpuDelegate, const RuntimeMethod* method) ;
// TensorFlowLite.Interpreter/Status TensorFlowLite.GpuDelegateV2::TfLiteGpuDelegateV2BindInputBuffer(System.IntPtr,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GpuDelegateV2_TfLiteGpuDelegateV2BindInputBuffer_m0F885E70AB18BB43C4D167B71CD1DE3AC0E36886 (intptr_t ___0_gpuDelegatee, int32_t ___1_index, uint32_t ___2_buffer, const RuntimeMethod* method) ;
// TensorFlowLite.Interpreter/Status TensorFlowLite.GpuDelegateV2::TfLiteGpuDelegateV2BindOutputBuffer(System.IntPtr,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GpuDelegateV2_TfLiteGpuDelegateV2BindOutputBuffer_m0538794E304932A6B5619C2257B9EBA6C7E71A08 (intptr_t ___0_gpuDelegate, int32_t ___1_index, uint32_t ___2_buffer, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.Interpreter::.ctor(System.Byte[],TensorFlowLite.InterpreterOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter__ctor_m5BC403A44C914F12701A68783D68A29A0F3A3D35 (Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_modelData, InterpreterOptions_t9E95AA774C31B5ACAE144C947B861C026677E487* ___1_options, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC (RuntimeObject* ___0_value, int32_t ___1_type, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.IntPtr TensorFlowLite.Interpreter::TfLiteModelCreate(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interpreter_TfLiteModelCreate_mA5D88D4A74547553A74D5D681ED736DA786BFB08 (intptr_t ___0_model_data, int32_t ___1_model_size, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.InterpreterOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions__ctor_mEEC2148897A34DBBC2445A8C70B7F42E8579AA75 (InterpreterOptions_t9E95AA774C31B5ACAE144C947B861C026677E487* __this, const RuntimeMethod* method) ;
// System.IntPtr TensorFlowLite.Interpreter::TfLiteInterpreterCreate(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interpreter_TfLiteInterpreterCreate_m0D7049F322008645A1AABFB8590B80B24DDC407B (intptr_t ___0_model, intptr_t ___1_optional_options, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.Interpreter::TfLiteInterpreterDelete(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_TfLiteInterpreterDelete_m0D07FD41965427A0FF42B7E291515B2B0C0A87DE (intptr_t ___0_interpreter, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.Interpreter::TfLiteModelDelete(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_TfLiteModelDelete_m5F08BD953B10012E09A580F8A4D708AC6464791D (intptr_t ___0_model, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.InterpreterOptions::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_Dispose_mA62A6677F5A57F3E9F4FEB2C2E3EECA581241FC9 (InterpreterOptions_t9E95AA774C31B5ACAE144C947B861C026677E487* __this, const RuntimeMethod* method) ;
// TensorFlowLite.Interpreter/Status TensorFlowLite.Interpreter::TfLiteInterpreterInvoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteInterpreterInvoke_m46EC0EDA0F74F0CD27083E8D194CFAFC3637FD42 (intptr_t ___0_interpreter, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.Interpreter::ThrowIfError(TensorFlowLite.Interpreter/Status)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_ThrowIfError_m4F84EE55D3FD540DE37FDD2EC4FDE09BBAF465DC (int32_t ___0_status, const RuntimeMethod* method) ;
// System.Int32 TensorFlowLite.Interpreter::TfLiteInterpreterGetInputTensorCount(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteInterpreterGetInputTensorCount_mE8AC1517C9F6AE57E4386FC337C100BDE6EBCEEB (intptr_t ___0_interpreter, const RuntimeMethod* method) ;
// System.IntPtr TensorFlowLite.Interpreter::TfLiteInterpreterGetInputTensor(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interpreter_TfLiteInterpreterGetInputTensor_m5B49743083077F09FB9551A787FA8EBBF794C9F3 (intptr_t ___0_interpreter, int32_t ___1_input_index, const RuntimeMethod* method) ;
// System.Int32 System.Buffer::ByteLength(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Buffer_ByteLength_mF5ECD3B5109BB58029D2D19353465CD3576490EF (RuntimeArray* ___0_array, const RuntimeMethod* method) ;
// TensorFlowLite.Interpreter/Status TensorFlowLite.Interpreter::TfLiteTensorCopyFromBuffer(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteTensorCopyFromBuffer_mAD26B3AF09E998D078E932AFBFDC4C70E1B5335B (intptr_t ___0_tensor, intptr_t ___1_input_data, int32_t ___2_input_data_size, const RuntimeMethod* method) ;
// TensorFlowLite.Interpreter/Status TensorFlowLite.Interpreter::TfLiteInterpreterResizeInputTensor(System.IntPtr,System.Int32,System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteInterpreterResizeInputTensor_mA77A63F222FD034DDF563C2299E1711A64753849 (intptr_t ___0_interpreter, int32_t ___1_input_index, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_input_dims, int32_t ___3_input_dims_size, const RuntimeMethod* method) ;
// TensorFlowLite.Interpreter/Status TensorFlowLite.Interpreter::TfLiteInterpreterAllocateTensors(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteInterpreterAllocateTensors_mA4247D53F9D1D6CC6218F7C0F92613793683400F (intptr_t ___0_interpreter, const RuntimeMethod* method) ;
// System.Int32 TensorFlowLite.Interpreter::TfLiteInterpreterGetOutputTensorCount(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteInterpreterGetOutputTensorCount_m67CC0A40C00CCE297CBF812ECEFCE9D9271B54EB (intptr_t ___0_interpreter, const RuntimeMethod* method) ;
// System.IntPtr TensorFlowLite.Interpreter::TfLiteInterpreterGetOutputTensor(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interpreter_TfLiteInterpreterGetOutputTensor_m7F91C21F26994C123C9F005D7EC6B80B69186FE9 (intptr_t ___0_interpreter, int32_t ___1_output_index, const RuntimeMethod* method) ;
// TensorFlowLite.Interpreter/Status TensorFlowLite.Interpreter::TfLiteTensorCopyToBuffer(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteTensorCopyToBuffer_mE800F2D739229269FE0CC7B3437A593B570AA608 (intptr_t ___0_tensor, intptr_t ___1_output_data, int32_t ___2_output_data_size, const RuntimeMethod* method) ;
// TensorFlowLite.Interpreter/TensorInfo TensorFlowLite.Interpreter::GetTensorInfo(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2 Interpreter_GetTensorInfo_m28A3419A8F7037EA84F090616698938CE7DCDD68 (intptr_t ___0_tensor, const RuntimeMethod* method) ;
// System.IntPtr TensorFlowLite.Interpreter::TfLiteVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interpreter_TfLiteVersion_m1D9355FC1BD8C3F3BF9FEF36FA31D7CBEB616016 (const RuntimeMethod* method) ;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A (intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.IntPtr TensorFlowLite.Interpreter::TfLiteTensorName(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interpreter_TfLiteTensorName_m394976C98A457BDAAFFD525339AE8BE4F41886A1 (intptr_t ___0_tensor, const RuntimeMethod* method) ;
// System.Int32 TensorFlowLite.Interpreter::TfLiteTensorNumDims(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteTensorNumDims_m881532E043B41124244F0E036BC86A8E43F45933 (intptr_t ___0_tensor, const RuntimeMethod* method) ;
// System.Int32 TensorFlowLite.Interpreter::TfLiteTensorDim(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteTensorDim_m4899570B27E0908BDBD941A1D5FEC269A570128E (intptr_t ___0_tensor, int32_t ___1_dim_index, const RuntimeMethod* method) ;
// System.String TensorFlowLite.Interpreter::GetTensorName(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Interpreter_GetTensorName_m233991432B1AE7668DCE7F90F212D8BA34B85F01 (intptr_t ___0_tensor, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.Interpreter/TensorInfo::set_name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TensorInfo_set_name_m8AE89B0FD55BA8BFC2EFE44E28F3B70C756BC260_inline (TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// TensorFlowLite.Interpreter/DataType TensorFlowLite.Interpreter::TfLiteTensorType(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteTensorType_m5EC52FBC2CFC24E5366765C8E98EC8D9C8E6067B (intptr_t ___0_tensor, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.Interpreter/TensorInfo::set_type(TensorFlowLite.Interpreter/DataType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TensorInfo_set_type_mAEBFD7AF7B853389EA292A8EEE6CE05737F21BA7_inline (TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.Interpreter/TensorInfo::set_shape(System.Int32[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TensorInfo_set_shape_mE54A05F75006295FC1BD708B0EC18EFECD8DA1D2_inline (TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_value, const RuntimeMethod* method) ;
// TensorFlowLite.Interpreter/QuantizationParams TensorFlowLite.Interpreter::TfLiteTensorQuantizationParams(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A Interpreter_TfLiteTensorQuantizationParams_m619651FFB71EBC996800FB8AF9BD55970DB9ACD5 (intptr_t ___0_tensor, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.Interpreter/TensorInfo::set_quantizationParams(TensorFlowLite.Interpreter/QuantizationParams)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TensorInfo_set_quantizationParams_mD0A6FE7340B5ED7472D4C156CBDB71EE0AEC18D1_inline (TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* __this, QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A ___0_value, const RuntimeMethod* method) ;
// System.String TensorFlowLite.Interpreter/TensorInfo::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TensorInfo_get_name_mD236725D81F877DA4F915E63F652A13B8918A009_inline (TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* __this, const RuntimeMethod* method) ;
// TensorFlowLite.Interpreter/DataType TensorFlowLite.Interpreter/TensorInfo::get_type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TensorInfo_get_type_m64001E63590AB3363C4D841FE34F8CF28040DE4D_inline (TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* __this, const RuntimeMethod* method) ;
// System.Int32[] TensorFlowLite.Interpreter/TensorInfo::get_shape()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* TensorInfo_get_shape_m4C97C5A16EE75923845BA3E6BB5C3D7B0CA1FB4E_inline (TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* __this, const RuntimeMethod* method) ;
// TensorFlowLite.Interpreter/QuantizationParams TensorFlowLite.Interpreter/TensorInfo::get_quantizationParams()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A TensorInfo_get_quantizationParams_m5CB7855D0330D43CAC000BBAF1E1A7BF3AB76184_inline (TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* __this, const RuntimeMethod* method) ;
// System.String System.String::Join<System.Int32>(System.String,System.Collections.Generic.IEnumerable`1<T>)
inline String_t* String_Join_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3954E1690A53FDAE651340E931E00877D887458C (String_t* ___0_separator, RuntimeObject* ___1_values, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, RuntimeObject*, const RuntimeMethod*))String_Join_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3954E1690A53FDAE651340E931E00877D887458C_gshared)(___0_separator, ___1_values, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.String TensorFlowLite.Interpreter/QuantizationParams::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QuantizationParams_ToString_m61B9CF63766C32677902A7CEB685C06F10C724CD (QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.String TensorFlowLite.Interpreter/TensorInfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TensorInfo_ToString_m3E24165D0B758B32E6CAB343B521D04160D3E5B7 (TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.IntPtr TensorFlowLite.Interpreter::get_InterpreterPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t Interpreter_get_InterpreterPointer_m42E045A97C9B3CFCD8200E66ECDF46CC43ECAC57_inline (Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* __this, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.InterpreterExperimental::TfLiteSetAllowBufferHandleOutput(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterExperimental_TfLiteSetAllowBufferHandleOutput_m1C09C845EB92A3E72AF17A01A4A709F76BB95CE9 (intptr_t ___0_interpreter, bool ___1_allow_buffer_handle_output, const RuntimeMethod* method) ;
// TensorFlowLite.Interpreter/Status TensorFlowLite.InterpreterExperimental::TfLiteInterpreterModifyGraphWithDelegate(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InterpreterExperimental_TfLiteInterpreterModifyGraphWithDelegate_m5B60806AAF9E452D38EA863F8FF3F0671D3CD8AB (intptr_t ___0_interpreter, intptr_t ___1_gpuDelegate, const RuntimeMethod* method) ;
// System.Int32 TensorFlowLite.InterpreterExperimental::TfLiteInterpreterGetInputTensorIndex(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InterpreterExperimental_TfLiteInterpreterGetInputTensorIndex_m68B1C8F59F0B4E45A16BC993953596D239464D07 (intptr_t ___0_interpreter, int32_t ___1_input_index, const RuntimeMethod* method) ;
// System.Int32 TensorFlowLite.InterpreterExperimental::TfLiteInterpreterGetOutputTensorIndex(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InterpreterExperimental_TfLiteInterpreterGetOutputTensorIndex_mEB5647EAACE6A172D158E97E926225A16FE7AAD2 (intptr_t ___0_interpreter, int32_t ___1_output_index, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.InterpreterOptions::TfLiteInterpreterOptionsSetNumThreads(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_TfLiteInterpreterOptionsSetNumThreads_m2274CA3716CB9355CFE46A386876785E35CEFE33 (intptr_t ___0_options, int32_t ___1_num_threads, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.InterpreterExperimental::TfLiteInterpreterOptionsSetUseNNAPI(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterExperimental_TfLiteInterpreterOptionsSetUseNNAPI_m0059E0680C44CB316AE06B639C518504582ABC1E (intptr_t ___0_options, bool ___1_enable, const RuntimeMethod* method) ;
// System.IntPtr TensorFlowLite.InterpreterOptions::TfLiteInterpreterOptionsCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t InterpreterOptions_TfLiteInterpreterOptionsCreate_mD2CAA158F9F1BE9B42F8199E9D882B5E51508E14 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TensorFlowLite.IGpuDelegate>::.ctor()
inline void List_1__ctor_m497AAECBCA3426096BFBE418E39A380FDDF57603 (List_1_t3F263848BA2695073FE2245A8F675993522CADAB* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F263848BA2695073FE2245A8F675993522CADAB*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void TensorFlowLite.ErrorReporter::ConfigureReporter(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReporter_ConfigureReporter_m1A6EEB9748D9C5BD59856E178A84F7B394D8F58B (intptr_t ___0_options, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.InterpreterOptions::TfLiteInterpreterOptionsDelete(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_TfLiteInterpreterOptionsDelete_m24A5BD39697518ABF5157557D920771B9B078004 (intptr_t ___0_options, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<TensorFlowLite.IGpuDelegate>::GetEnumerator()
inline Enumerator_t9F662B1A6D503111950AF04F2905140AD59AF375 List_1_GetEnumerator_m7D5DD2C7907575CF7CE952D0A77FDDE9BB900090 (List_1_t3F263848BA2695073FE2245A8F675993522CADAB* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9F662B1A6D503111950AF04F2905140AD59AF375 (*) (List_1_t3F263848BA2695073FE2245A8F675993522CADAB*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<TensorFlowLite.IGpuDelegate>::Dispose()
inline void Enumerator_Dispose_mB42C83BE2C203BF82BF64BA5C04EBCF842F54E8D (Enumerator_t9F662B1A6D503111950AF04F2905140AD59AF375* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9F662B1A6D503111950AF04F2905140AD59AF375*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<TensorFlowLite.IGpuDelegate>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mE1052649733DDD0047A38B9E404AF7462357343A_inline (Enumerator_t9F662B1A6D503111950AF04F2905140AD59AF375* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9F662B1A6D503111950AF04F2905140AD59AF375*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<TensorFlowLite.IGpuDelegate>::MoveNext()
inline bool Enumerator_MoveNext_m2DAA66FBAABE8C96458883F25C5F7419ACA68ED4 (Enumerator_t9F662B1A6D503111950AF04F2905140AD59AF375* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9F662B1A6D503111950AF04F2905140AD59AF375*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<TensorFlowLite.IGpuDelegate>::Clear()
inline void List_1_Clear_mF3E6FBEB14CC3657C9C40D8C9D03BA3DF6EBB11F_inline (List_1_t3F263848BA2695073FE2245A8F675993522CADAB* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F263848BA2695073FE2245A8F675993522CADAB*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void TensorFlowLite.InterpreterOptions::TfLiteInterpreterOptionsAddDelegate(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_TfLiteInterpreterOptionsAddDelegate_m53BAA2376CF63C72B3E972AE6D6E268BAED73B0A (intptr_t ___0_options, intptr_t ___1__delegate, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TensorFlowLite.IGpuDelegate>::Add(T)
inline void List_1_Add_m5A46C6159F42FF5AE644E17C4C1D6A97D50F06D4_inline (List_1_t3F263848BA2695073FE2245A8F675993522CADAB* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F263848BA2695073FE2245A8F675993522CADAB*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// TensorFlowLite.IGpuDelegate TensorFlowLite.InterpreterOptions::CreateGpuDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InterpreterOptions_CreateGpuDelegate_m08777486461979E0B19831F0B40079CC70300A91 (const RuntimeMethod* method) ;
// System.Void TensorFlowLite.InterpreterOptions::AddGpuDelegate(TensorFlowLite.IGpuDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_AddGpuDelegate_m416FD63EC44C8A875A1FABAA581E4432A2E986BA (InterpreterOptions_t9E95AA774C31B5ACAE144C947B861C026677E487* __this, RuntimeObject* ___0_gpuDelegate, const RuntimeMethod* method) ;
// System.Void TensorFlowLite.GpuDelegateV2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpuDelegateV2__ctor_mADAE239EFBE9EFD809C8BC0B782A9246F35CF2BF (GpuDelegateV2_t58AC666626083BE71F779E388B319E3D8690090D* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C char* CDECL UnityTFLiteStringFormat(char*, intptr_t);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C void CDECL TfLiteInterpreterOptionsSetErrorReporter(intptr_t, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_gpu_gl_INTERNAL
IL2CPP_EXTERN_C Options_tAF384DD8A79EF542CEE09C7368A1C056FB56E719 DEFAULT_CALL TfLiteGpuDelegateOptionsDefault();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_gpu_gl_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL TfLiteGpuDelegateCreate(Options_tAF384DD8A79EF542CEE09C7368A1C056FB56E719*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_gpu_gl_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL TfLiteGpuDelegateDelete(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_gpu_gl_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TfLiteGpuDelegateBindBufferToTensor(intptr_t, uint32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_gpu_delegate_INTERNAL
IL2CPP_EXTERN_C Options_tCA026E37D00C60BDA25D8FE55F52261D6AF2CD68 DEFAULT_CALL TfLiteGpuDelegateOptionsV2Default();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_gpu_delegate_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL TfLiteGpuDelegateV2Create(Options_tCA026E37D00C60BDA25D8FE55F52261D6AF2CD68*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_gpu_delegate_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL TfLiteGpuDelegateV2Delete(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_gpu_delegate_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TfLiteGpuDelegateV2BindInputBuffer(intptr_t, int32_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_gpu_delegate_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TfLiteGpuDelegateV2BindOutputBuffer(intptr_t, int32_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL TfLiteVersion();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL TfLiteModelCreate(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL TfLiteModelDelete(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL TfLiteInterpreterCreate(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL TfLiteInterpreterDelete(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TfLiteInterpreterGetInputTensorCount(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL TfLiteInterpreterGetInputTensor(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TfLiteInterpreterResizeInputTensor(intptr_t, int32_t, int32_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TfLiteInterpreterAllocateTensors(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TfLiteInterpreterInvoke(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TfLiteInterpreterGetOutputTensorCount(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL TfLiteInterpreterGetOutputTensor(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TfLiteTensorType(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TfLiteTensorNumDims(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TfLiteTensorDim(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C uint32_t DEFAULT_CALL TfLiteTensorByteSize(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL TfLiteTensorName(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A DEFAULT_CALL TfLiteTensorQuantizationParams(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TfLiteTensorCopyFromBuffer(intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TfLiteTensorCopyToBuffer(intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TfLiteInterpreterResetVariableTensors(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL TfLiteInterpreterOptionsAddBuiltinOp(intptr_t, int32_t, intptr_t, uint32_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL TfLiteInterpreterOptionsAddCustomOp(intptr_t, char*, intptr_t, uint32_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL TfLiteInterpreterOptionsSetUseNNAPI(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL TfLiteSetAllowBufferHandleOutput(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TfLiteInterpreterModifyGraphWithDelegate(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TfLiteInterpreterGetInputTensorIndex(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TfLiteInterpreterGetOutputTensorIndex(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL TfLiteInterpreterOptionsCreate();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL TfLiteInterpreterOptionsDelete(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL TfLiteInterpreterOptionsSetNumThreads(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL TfLiteInterpreterOptionsAddDelegate(intptr_t, intptr_t);
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
extern "C" void CDECL ReversePInvokeWrapper_ErrorReporter_OnErrorReporter_mA1DFDB2BEDA27B6B7DDF166AE7A869F794224CD1(intptr_t ___0_userData, char* ___1_format, intptr_t ___2_vaList)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___1_format' to managed representation
	String_t* ____1_format_unmarshaled = NULL;
	____1_format_unmarshaled = il2cpp_codegen_marshal_string_result(___1_format);

	// Managed method invocation
	ErrorReporter_OnErrorReporter_mA1DFDB2BEDA27B6B7DDF166AE7A869F794224CD1(___0_userData, ____1_format_unmarshaled, ___2_vaList, NULL);

}
// System.Void TensorFlowLite.ErrorReporter::ConfigureReporter(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReporter_ConfigureReporter_m1A6EEB9748D9C5BD59856E178A84F7B394D8F58B (intptr_t ___0_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorReporterDelegate_t5F32927D54AB43140BF4C5FE48950EA989BC1AE4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorReporter_OnErrorReporter_mA1DFDB2BEDA27B6B7DDF166AE7A869F794224CD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TfLiteInterpreterOptionsSetErrorReporter(options, OnErrorReporter, IntPtr.Zero);
		intptr_t L_0 = ___0_options;
		ErrorReporterDelegate_t5F32927D54AB43140BF4C5FE48950EA989BC1AE4* L_1 = (ErrorReporterDelegate_t5F32927D54AB43140BF4C5FE48950EA989BC1AE4*)il2cpp_codegen_object_new(ErrorReporterDelegate_t5F32927D54AB43140BF4C5FE48950EA989BC1AE4_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ErrorReporterDelegate__ctor_m0EAAC197B1A3B2F9526A5E821A998A0787F67F97(L_1, NULL, (intptr_t)((void*)ErrorReporter_OnErrorReporter_mA1DFDB2BEDA27B6B7DDF166AE7A869F794224CD1_RuntimeMethod_var), NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		ErrorReporter_TfLiteInterpreterOptionsSetErrorReporter_m0C4CD0CEF5CD42F760379843F93ED44531826838(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.ErrorReporter::OnErrorReporter(System.IntPtr,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReporter_OnErrorReporter_mA1DFDB2BEDA27B6B7DDF166AE7A869F794224CD1 (intptr_t ___0_userData, String_t* ___1_format, intptr_t ___2_vaList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E9554DA49DE9C1B018EE5C96304BDB94FDB7078);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// report = UnityTFLiteStringFormat(format, vaList);
		String_t* L_0 = ___1_format;
		intptr_t L_1 = ___2_vaList;
		String_t* L_2;
		L_2 = ErrorReporter_UnityTFLiteStringFormat_mBAC74EA49C11D1C00AEA8776028919A268288899(L_0, L_1, NULL);
		V_0 = L_2;
		// Debug.LogWarning($"TFLite Warning: {report}");
		String_t* L_3 = V_0;
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2E9554DA49DE9C1B018EE5C96304BDB94FDB7078, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_4, NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.ErrorReporter::TfLiteInterpreterOptionsSetErrorReporter(System.IntPtr,TensorFlowLite.ErrorReporter/ErrorReporterDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReporter_TfLiteInterpreterOptionsSetErrorReporter_m0C4CD0CEF5CD42F760379843F93ED44531826838 (intptr_t ___0_options, ErrorReporterDelegate_t5F32927D54AB43140BF4C5FE48950EA989BC1AE4* ___1_errorReporter, intptr_t ___2_user_data, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterOptionsSetErrorReporter", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_errorReporter' to native representation
	Il2CppMethodPointer ____1_errorReporter_marshaled = NULL;
	____1_errorReporter_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_errorReporter));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(TfLiteInterpreterOptionsSetErrorReporter)(___0_options, ____1_errorReporter_marshaled, ___2_user_data);
	#else
	il2cppPInvokeFunc(___0_options, ____1_errorReporter_marshaled, ___2_user_data);
	#endif

}
// System.String TensorFlowLite.ErrorReporter::UnityTFLiteStringFormat(System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorReporter_UnityTFLiteStringFormat_mBAC74EA49C11D1C00AEA8776028919A268288899 (String_t* ___0_format, intptr_t ___1_vaList, const RuntimeMethod* method) 
{
	typedef char* (CDECL *PInvokeFunc) (char*, intptr_t);

	// Marshaling of parameter '___0_format' to native representation
	char* ____0_format_marshaled = NULL;
	____0_format_marshaled = il2cpp_codegen_marshal_string(___0_format);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(UnityTFLiteStringFormat)(____0_format_marshaled, ___1_vaList);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___0_format' native representation
	il2cpp_codegen_marshal_free(____0_format_marshaled);
	____0_format_marshaled = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ErrorReporterDelegate_Invoke_m0685217F96092B6286179337DC01A496D85B5B11_Multicast(ErrorReporterDelegate_t5F32927D54AB43140BF4C5FE48950EA989BC1AE4* __this, intptr_t ___0_userData, String_t* ___1_format, intptr_t ___2_argsPtrs, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ErrorReporterDelegate_t5F32927D54AB43140BF4C5FE48950EA989BC1AE4* currentDelegate = reinterpret_cast<ErrorReporterDelegate_t5F32927D54AB43140BF4C5FE48950EA989BC1AE4*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, String_t*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_userData, ___1_format, ___2_argsPtrs, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ErrorReporterDelegate_Invoke_m0685217F96092B6286179337DC01A496D85B5B11_OpenInst(ErrorReporterDelegate_t5F32927D54AB43140BF4C5FE48950EA989BC1AE4* __this, intptr_t ___0_userData, String_t* ___1_format, intptr_t ___2_argsPtrs, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, String_t*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_userData, ___1_format, ___2_argsPtrs, method);
}
void ErrorReporterDelegate_Invoke_m0685217F96092B6286179337DC01A496D85B5B11_OpenStatic(ErrorReporterDelegate_t5F32927D54AB43140BF4C5FE48950EA989BC1AE4* __this, intptr_t ___0_userData, String_t* ___1_format, intptr_t ___2_argsPtrs, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, String_t*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_userData, ___1_format, ___2_argsPtrs, method);
}
void ErrorReporterDelegate_Invoke_m0685217F96092B6286179337DC01A496D85B5B11_OpenStaticInvoker(ErrorReporterDelegate_t5F32927D54AB43140BF4C5FE48950EA989BC1AE4* __this, intptr_t ___0_userData, String_t* ___1_format, intptr_t ___2_argsPtrs, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, String_t*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_userData, ___1_format, ___2_argsPtrs);
}
void ErrorReporterDelegate_Invoke_m0685217F96092B6286179337DC01A496D85B5B11_ClosedStaticInvoker(ErrorReporterDelegate_t5F32927D54AB43140BF4C5FE48950EA989BC1AE4* __this, intptr_t ___0_userData, String_t* ___1_format, intptr_t ___2_argsPtrs, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, String_t*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_userData, ___1_format, ___2_argsPtrs);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ErrorReporterDelegate_t5F32927D54AB43140BF4C5FE48950EA989BC1AE4 (ErrorReporterDelegate_t5F32927D54AB43140BF4C5FE48950EA989BC1AE4* __this, intptr_t ___0_userData, String_t* ___1_format, intptr_t ___2_argsPtrs, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, char*, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___1_format' to native representation
	char* ____1_format_marshaled = NULL;
	____1_format_marshaled = il2cpp_codegen_marshal_string(___1_format);

	// Native function invocation
	il2cppPInvokeFunc(___0_userData, ____1_format_marshaled, ___2_argsPtrs);

	// Marshaling cleanup of parameter '___1_format' native representation
	il2cpp_codegen_marshal_free(____1_format_marshaled);
	____1_format_marshaled = NULL;

}
// System.Void TensorFlowLite.ErrorReporter/ErrorReporterDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReporterDelegate__ctor_m0EAAC197B1A3B2F9526A5E821A998A0787F67F97 (ErrorReporterDelegate_t5F32927D54AB43140BF4C5FE48950EA989BC1AE4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ErrorReporterDelegate_Invoke_m0685217F96092B6286179337DC01A496D85B5B11_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ErrorReporterDelegate_Invoke_m0685217F96092B6286179337DC01A496D85B5B11_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ErrorReporterDelegate_Invoke_m0685217F96092B6286179337DC01A496D85B5B11_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ErrorReporterDelegate_Invoke_m0685217F96092B6286179337DC01A496D85B5B11_Multicast;
}
// System.Void TensorFlowLite.ErrorReporter/ErrorReporterDelegate::Invoke(System.IntPtr,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReporterDelegate_Invoke_m0685217F96092B6286179337DC01A496D85B5B11 (ErrorReporterDelegate_t5F32927D54AB43140BF4C5FE48950EA989BC1AE4* __this, intptr_t ___0_userData, String_t* ___1_format, intptr_t ___2_argsPtrs, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, String_t*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_userData, ___1_format, ___2_argsPtrs, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TensorFlowLite.ErrorReporter/ErrorReporterDelegate::BeginInvoke(System.IntPtr,System.String,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ErrorReporterDelegate_BeginInvoke_m7FBBED494749C60BC332EC5BA9502103CC1055D6 (ErrorReporterDelegate_t5F32927D54AB43140BF4C5FE48950EA989BC1AE4* __this, intptr_t ___0_userData, String_t* ___1_format, intptr_t ___2_argsPtrs, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_userData);
	__d_args[1] = ___1_format;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___2_argsPtrs);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void TensorFlowLite.ErrorReporter/ErrorReporterDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReporterDelegate_EndInvoke_m5B52D10CB504330B8B8DDD32E87F3155A8EF1707 (ErrorReporterDelegate_t5F32927D54AB43140BF4C5FE48950EA989BC1AE4* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr TensorFlowLite.GlDelegate::get_Delegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GlDelegate_get_Delegate_mCA0ECD848DC9D9473774F55528BDE29780E3EE97 (GlDelegate_tA63F41A18E8E7216656C1608713B534AFC023351* __this, const RuntimeMethod* method) 
{
	{
		// public TfLiteDelegate Delegate { get; private set; }
		intptr_t L_0 = __this->___U3CDelegateU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void TensorFlowLite.GlDelegate::set_Delegate(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlDelegate_set_Delegate_mA56F334CDB77A50EDD0DCA1D1BB2BBFE614AC431 (GlDelegate_tA63F41A18E8E7216656C1608713B534AFC023351* __this, intptr_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TfLiteDelegate Delegate { get; private set; }
		intptr_t L_0 = ___0_value;
		__this->___U3CDelegateU3Ek__BackingField_0 = L_0;
		return;
	}
}
// TensorFlowLite.GlDelegate/Options TensorFlowLite.GlDelegate::get_DefaultOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Options_tAF384DD8A79EF542CEE09C7368A1C056FB56E719 GlDelegate_get_DefaultOptions_mF3B7CB3254F5F6ADE9ACC1260D50FC3B03CB26D1 (const RuntimeMethod* method) 
{
	{
		// public static Options DefaultOptions => TfLiteGpuDelegateOptionsDefault();
		Options_tAF384DD8A79EF542CEE09C7368A1C056FB56E719 L_0;
		L_0 = GlDelegate_TfLiteGpuDelegateOptionsDefault_mFF0B3B3F25B0BCCD0D94A704CBD82A0C0874CF22(NULL);
		return L_0;
	}
}
// System.Void TensorFlowLite.GlDelegate::.ctor(TensorFlowLite.GlDelegate/Options)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlDelegate__ctor_m43C84A16F29B072237CA76A6279553EF75393670 (GlDelegate_tA63F41A18E8E7216656C1608713B534AFC023351* __this, Options_tAF384DD8A79EF542CEE09C7368A1C056FB56E719 ___0_options, const RuntimeMethod* method) 
{
	{
		// public GlDelegate(Options options)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Delegate = TfLiteGpuDelegateCreate(ref options);
		intptr_t L_0;
		L_0 = GlDelegate_TfLiteGpuDelegateCreate_m92F4A16EB98C83B11BFE2E44A2E6AFD38CA43079((&___0_options), NULL);
		GlDelegate_set_Delegate_mA56F334CDB77A50EDD0DCA1D1BB2BBFE614AC431_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.GlDelegate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlDelegate__ctor_m96CBFF80B6E8885623B221E18AB31E328198ECDB (GlDelegate_tA63F41A18E8E7216656C1608713B534AFC023351* __this, const RuntimeMethod* method) 
{
	Options_tAF384DD8A79EF542CEE09C7368A1C056FB56E719 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public GlDelegate()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Options options = DefaultOptions;
		Options_tAF384DD8A79EF542CEE09C7368A1C056FB56E719 L_0;
		L_0 = GlDelegate_get_DefaultOptions_mF3B7CB3254F5F6ADE9ACC1260D50FC3B03CB26D1(NULL);
		V_0 = L_0;
		// Delegate = TfLiteGpuDelegateCreate(ref options);
		intptr_t L_1;
		L_1 = GlDelegate_TfLiteGpuDelegateCreate_m92F4A16EB98C83B11BFE2E44A2E6AFD38CA43079((&V_0), NULL);
		GlDelegate_set_Delegate_mA56F334CDB77A50EDD0DCA1D1BB2BBFE614AC431_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.GlDelegate::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlDelegate_Dispose_m07B0499136BC79D39DD7E80F9FC2B06CC758034A (GlDelegate_tA63F41A18E8E7216656C1608713B534AFC023351* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TfLiteGpuDelegateDelete(Delegate);
		intptr_t L_0;
		L_0 = GlDelegate_get_Delegate_mCA0ECD848DC9D9473774F55528BDE29780E3EE97_inline(__this, NULL);
		GlDelegate_TfLiteGpuDelegateDelete_m8541C356D3B0FDF1D0CEC413201BF9FDE194D69D(L_0, NULL);
		// Delegate = TfLiteDelegate.Zero;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		GlDelegate_set_Delegate_mA56F334CDB77A50EDD0DCA1D1BB2BBFE614AC431_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Boolean TensorFlowLite.GlDelegate::BindBufferToInputTensor(TensorFlowLite.Interpreter,System.Int32,UnityEngine.ComputeBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlDelegate_BindBufferToInputTensor_m9764EDC8FECDEA2D609997D26718024BF8D761AB (GlDelegate_tA63F41A18E8E7216656C1608713B534AFC023351* __this, Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* ___0_interpreter, int32_t ___1_index, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___2_buffer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int tensorIndex = interpreter.GetInputTensorIndex(index);
		Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* L_0 = ___0_interpreter;
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = InterpreterExperimental_GetInputTensorIndex_mB1BDFCA9AA8F67945CF796E3DB41D7EE6F9B0E70(L_0, L_1, NULL);
		V_0 = L_2;
		// return BindBufferToTensor(tensorIndex, buffer);
		int32_t L_3 = V_0;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_4 = ___2_buffer;
		bool L_5;
		L_5 = GlDelegate_BindBufferToTensor_mBB5479E762EA0ADE3BD226400E574948F870B8B8(__this, L_3, L_4, NULL);
		return L_5;
	}
}
// System.Boolean TensorFlowLite.GlDelegate::BindBufferToOutputTensor(TensorFlowLite.Interpreter,System.Int32,UnityEngine.ComputeBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlDelegate_BindBufferToOutputTensor_m12C567EFD77DEF630BEFC0D3181E62D9F433D3DE (GlDelegate_tA63F41A18E8E7216656C1608713B534AFC023351* __this, Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* ___0_interpreter, int32_t ___1_index, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___2_buffer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int tensorIndex = interpreter.GetOutputTensorIndex(index);
		Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* L_0 = ___0_interpreter;
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = InterpreterExperimental_GetOutputTensorIndex_m91FA4F174B8D03C8383EE72E7BA15DD47B1E4AAA(L_0, L_1, NULL);
		V_0 = L_2;
		// return BindBufferToTensor(tensorIndex, buffer);
		int32_t L_3 = V_0;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_4 = ___2_buffer;
		bool L_5;
		L_5 = GlDelegate_BindBufferToTensor_mBB5479E762EA0ADE3BD226400E574948F870B8B8(__this, L_3, L_4, NULL);
		return L_5;
	}
}
// System.Boolean TensorFlowLite.GlDelegate::BindBufferToTensor(System.Int32,UnityEngine.ComputeBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlDelegate_BindBufferToTensor_mBB5479E762EA0ADE3BD226400E574948F870B8B8 (GlDelegate_tA63F41A18E8E7216656C1608713B534AFC023351* __this, int32_t ___0_tensorIndex, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___1_buffer, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// uint bufferID = (uint)buffer.GetNativeBufferPtr().ToInt32();
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_0 = ___1_buffer;
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ComputeBuffer_GetNativeBufferPtr_m834415C5780BE97313E39377CA7C1EE85288B76D(L_0, NULL);
		V_1 = L_1;
		int32_t L_2;
		L_2 = IntPtr_ToInt32_mD53B5D2C73C7E4BE5ADEBC5D187EACC83D5BB292((&V_1), NULL);
		V_0 = L_2;
		// var status = TfLiteGpuDelegateBindBufferToTensor(Delegate, bufferID, tensorIndex);
		intptr_t L_3;
		L_3 = GlDelegate_get_Delegate_mCA0ECD848DC9D9473774F55528BDE29780E3EE97_inline(__this, NULL);
		uint32_t L_4 = V_0;
		int32_t L_5 = ___0_tensorIndex;
		int32_t L_6;
		L_6 = GlDelegate_TfLiteGpuDelegateBindBufferToTensor_mA911532D5834030F8136A52DCE5055C37E09C2C7(L_3, L_4, L_5, NULL);
		// return status == Interpreter.Status.Ok;
		return (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}
}
// TensorFlowLite.GlDelegate/Options TensorFlowLite.GlDelegate::TfLiteGpuDelegateOptionsDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Options_tAF384DD8A79EF542CEE09C7368A1C056FB56E719 GlDelegate_TfLiteGpuDelegateOptionsDefault_mFF0B3B3F25B0BCCD0D94A704CBD82A0C0874CF22 (const RuntimeMethod* method) 
{
	typedef Options_tAF384DD8A79EF542CEE09C7368A1C056FB56E719 (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_gpu_gl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_gpu_gl"), "TfLiteGpuDelegateOptionsDefault", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_gpu_gl_INTERNAL
	Options_tAF384DD8A79EF542CEE09C7368A1C056FB56E719 returnValue = reinterpret_cast<PInvokeFunc>(TfLiteGpuDelegateOptionsDefault)();
	#else
	Options_tAF384DD8A79EF542CEE09C7368A1C056FB56E719 returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.IntPtr TensorFlowLite.GlDelegate::TfLiteGpuDelegateCreate(TensorFlowLite.GlDelegate/Options&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GlDelegate_TfLiteGpuDelegateCreate_m92F4A16EB98C83B11BFE2E44A2E6AFD38CA43079 (Options_tAF384DD8A79EF542CEE09C7368A1C056FB56E719* ___0_options, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (Options_tAF384DD8A79EF542CEE09C7368A1C056FB56E719*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_gpu_gl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Options_tAF384DD8A79EF542CEE09C7368A1C056FB56E719*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_gpu_gl"), "TfLiteGpuDelegateCreate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_gpu_gl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteGpuDelegateCreate)(___0_options);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_options);
	#endif

	return returnValue;
}
// System.Void TensorFlowLite.GlDelegate::TfLiteGpuDelegateDelete(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlDelegate_TfLiteGpuDelegateDelete_m8541C356D3B0FDF1D0CEC413201BF9FDE194D69D (intptr_t ___0_gpuDelegate, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_gpu_gl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_gpu_gl"), "TfLiteGpuDelegateDelete", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_gpu_gl_INTERNAL
	reinterpret_cast<PInvokeFunc>(TfLiteGpuDelegateDelete)(___0_gpuDelegate);
	#else
	il2cppPInvokeFunc(___0_gpuDelegate);
	#endif

}
// TensorFlowLite.Interpreter/Status TensorFlowLite.GlDelegate::TfLiteGpuDelegateBindBufferToTensor(System.IntPtr,System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlDelegate_TfLiteGpuDelegateBindBufferToTensor_mA911532D5834030F8136A52DCE5055C37E09C2C7 (intptr_t ___0_gpuDelegate, uint32_t ___1_buffer, int32_t ___2_tensorIndex, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_gpu_gl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_gpu_gl"), "TfLiteGpuDelegateBindBufferToTensor", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_gpu_gl_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteGpuDelegateBindBufferToTensor)(___0_gpuDelegate, ___1_buffer, ___2_tensorIndex);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_gpuDelegate, ___1_buffer, ___2_tensorIndex);
	#endif

	return returnValue;
}
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr TensorFlowLite.GpuDelegateV2::get_Delegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GpuDelegateV2_get_Delegate_m1B04DD78607E6851556396A330162083DC12CEFA (GpuDelegateV2_t58AC666626083BE71F779E388B319E3D8690090D* __this, const RuntimeMethod* method) 
{
	{
		// public TfLiteDelegate Delegate { get; private set; }
		intptr_t L_0 = __this->___U3CDelegateU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void TensorFlowLite.GpuDelegateV2::set_Delegate(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpuDelegateV2_set_Delegate_m36871EDE0D91B085A31969BA028A3B15BD1670AF (GpuDelegateV2_t58AC666626083BE71F779E388B319E3D8690090D* __this, intptr_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TfLiteDelegate Delegate { get; private set; }
		intptr_t L_0 = ___0_value;
		__this->___U3CDelegateU3Ek__BackingField_0 = L_0;
		return;
	}
}
// TensorFlowLite.GpuDelegateV2/Options TensorFlowLite.GpuDelegateV2::get_DefaultOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Options_tCA026E37D00C60BDA25D8FE55F52261D6AF2CD68 GpuDelegateV2_get_DefaultOptions_mD6F6A55CFF151C32BA150E79A7A81326701FEEFC (const RuntimeMethod* method) 
{
	{
		// public static Options DefaultOptions => TfLiteGpuDelegateOptionsV2Default();
		Options_tCA026E37D00C60BDA25D8FE55F52261D6AF2CD68 L_0;
		L_0 = GpuDelegateV2_TfLiteGpuDelegateOptionsV2Default_mCA5CF1169F00860E87B40E128F19C8010ADC7425(NULL);
		return L_0;
	}
}
// System.Void TensorFlowLite.GpuDelegateV2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpuDelegateV2__ctor_mADAE239EFBE9EFD809C8BC0B782A9246F35CF2BF (GpuDelegateV2_t58AC666626083BE71F779E388B319E3D8690090D* __this, const RuntimeMethod* method) 
{
	Options_tCA026E37D00C60BDA25D8FE55F52261D6AF2CD68 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public GpuDelegateV2()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Options options = DefaultOptions;
		Options_tCA026E37D00C60BDA25D8FE55F52261D6AF2CD68 L_0;
		L_0 = GpuDelegateV2_get_DefaultOptions_mD6F6A55CFF151C32BA150E79A7A81326701FEEFC(NULL);
		V_0 = L_0;
		// Delegate = TfLiteGpuDelegateV2Create(ref options);
		intptr_t L_1;
		L_1 = GpuDelegateV2_TfLiteGpuDelegateV2Create_mE28BECD41F6F0CC7DEE7ED66CB96E5B43A76FB90((&V_0), NULL);
		GpuDelegateV2_set_Delegate_m36871EDE0D91B085A31969BA028A3B15BD1670AF_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.GpuDelegateV2::.ctor(TensorFlowLite.GpuDelegateV2/Options)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpuDelegateV2__ctor_m6DAD82C1FCC7B784661EA836BC2ACFA12A076DAC (GpuDelegateV2_t58AC666626083BE71F779E388B319E3D8690090D* __this, Options_tCA026E37D00C60BDA25D8FE55F52261D6AF2CD68 ___0_options, const RuntimeMethod* method) 
{
	{
		// public GpuDelegateV2(Options options)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Delegate = TfLiteGpuDelegateV2Create(ref options);
		intptr_t L_0;
		L_0 = GpuDelegateV2_TfLiteGpuDelegateV2Create_mE28BECD41F6F0CC7DEE7ED66CB96E5B43A76FB90((&___0_options), NULL);
		GpuDelegateV2_set_Delegate_m36871EDE0D91B085A31969BA028A3B15BD1670AF_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.GpuDelegateV2::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpuDelegateV2_Dispose_m999FF14B7E71CBBBD3DE9A7D123F64256C764CF2 (GpuDelegateV2_t58AC666626083BE71F779E388B319E3D8690090D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TfLiteGpuDelegateV2Delete(Delegate);
		intptr_t L_0;
		L_0 = GpuDelegateV2_get_Delegate_m1B04DD78607E6851556396A330162083DC12CEFA_inline(__this, NULL);
		GpuDelegateV2_TfLiteGpuDelegateV2Delete_m38ADCBA9DA898F1E8C98478235FDFE0E8D5DC22B(L_0, NULL);
		// Delegate = TfLiteDelegate.Zero;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		GpuDelegateV2_set_Delegate_m36871EDE0D91B085A31969BA028A3B15BD1670AF_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Boolean TensorFlowLite.GpuDelegateV2::BindBufferToInputTensor(TensorFlowLite.Interpreter,System.Int32,UnityEngine.ComputeBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GpuDelegateV2_BindBufferToInputTensor_m5044495302E61D6941AFDCC996E51108FBB1CDCF (GpuDelegateV2_t58AC666626083BE71F779E388B319E3D8690090D* __this, Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* ___0_interpreter, int32_t ___1_index, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___2_buffer, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// uint bufferID = (uint)buffer.GetNativeBufferPtr().ToInt32();
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_0 = ___2_buffer;
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ComputeBuffer_GetNativeBufferPtr_m834415C5780BE97313E39377CA7C1EE85288B76D(L_0, NULL);
		V_1 = L_1;
		int32_t L_2;
		L_2 = IntPtr_ToInt32_mD53B5D2C73C7E4BE5ADEBC5D187EACC83D5BB292((&V_1), NULL);
		V_0 = L_2;
		// var status = TfLiteGpuDelegateV2BindInputBuffer(Delegate, index, bufferID);
		intptr_t L_3;
		L_3 = GpuDelegateV2_get_Delegate_m1B04DD78607E6851556396A330162083DC12CEFA_inline(__this, NULL);
		int32_t L_4 = ___1_index;
		uint32_t L_5 = V_0;
		int32_t L_6;
		L_6 = GpuDelegateV2_TfLiteGpuDelegateV2BindInputBuffer_m0F885E70AB18BB43C4D167B71CD1DE3AC0E36886(L_3, L_4, L_5, NULL);
		// return status == Interpreter.Status.Ok;
		return (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean TensorFlowLite.GpuDelegateV2::BindBufferToOutputTensor(TensorFlowLite.Interpreter,System.Int32,UnityEngine.ComputeBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GpuDelegateV2_BindBufferToOutputTensor_m0F54F0B03C99648701F36B020978ACD5C4D8A5F8 (GpuDelegateV2_t58AC666626083BE71F779E388B319E3D8690090D* __this, Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* ___0_interpreter, int32_t ___1_index, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___2_buffer, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// uint bufferID = (uint)buffer.GetNativeBufferPtr().ToInt32();
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_0 = ___2_buffer;
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ComputeBuffer_GetNativeBufferPtr_m834415C5780BE97313E39377CA7C1EE85288B76D(L_0, NULL);
		V_1 = L_1;
		int32_t L_2;
		L_2 = IntPtr_ToInt32_mD53B5D2C73C7E4BE5ADEBC5D187EACC83D5BB292((&V_1), NULL);
		V_0 = L_2;
		// var status = TfLiteGpuDelegateV2BindOutputBuffer(Delegate, index, bufferID);
		intptr_t L_3;
		L_3 = GpuDelegateV2_get_Delegate_m1B04DD78607E6851556396A330162083DC12CEFA_inline(__this, NULL);
		int32_t L_4 = ___1_index;
		uint32_t L_5 = V_0;
		int32_t L_6;
		L_6 = GpuDelegateV2_TfLiteGpuDelegateV2BindOutputBuffer_m0538794E304932A6B5619C2257B9EBA6C7E71A08(L_3, L_4, L_5, NULL);
		// return status == Interpreter.Status.Ok;
		return (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}
}
// TensorFlowLite.GpuDelegateV2/Options TensorFlowLite.GpuDelegateV2::TfLiteGpuDelegateOptionsV2Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Options_tCA026E37D00C60BDA25D8FE55F52261D6AF2CD68 GpuDelegateV2_TfLiteGpuDelegateOptionsV2Default_mCA5CF1169F00860E87B40E128F19C8010ADC7425 (const RuntimeMethod* method) 
{
	typedef Options_tCA026E37D00C60BDA25D8FE55F52261D6AF2CD68 (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_gpu_delegate_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_gpu_delegate"), "TfLiteGpuDelegateOptionsV2Default", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_gpu_delegate_INTERNAL
	Options_tCA026E37D00C60BDA25D8FE55F52261D6AF2CD68 returnValue = reinterpret_cast<PInvokeFunc>(TfLiteGpuDelegateOptionsV2Default)();
	#else
	Options_tCA026E37D00C60BDA25D8FE55F52261D6AF2CD68 returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.IntPtr TensorFlowLite.GpuDelegateV2::TfLiteGpuDelegateV2Create(TensorFlowLite.GpuDelegateV2/Options&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GpuDelegateV2_TfLiteGpuDelegateV2Create_mE28BECD41F6F0CC7DEE7ED66CB96E5B43A76FB90 (Options_tCA026E37D00C60BDA25D8FE55F52261D6AF2CD68* ___0_options, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (Options_tCA026E37D00C60BDA25D8FE55F52261D6AF2CD68*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_gpu_delegate_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Options_tCA026E37D00C60BDA25D8FE55F52261D6AF2CD68*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_gpu_delegate"), "TfLiteGpuDelegateV2Create", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_gpu_delegate_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteGpuDelegateV2Create)(___0_options);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_options);
	#endif

	return returnValue;
}
// System.Void TensorFlowLite.GpuDelegateV2::TfLiteGpuDelegateV2Delete(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpuDelegateV2_TfLiteGpuDelegateV2Delete_m38ADCBA9DA898F1E8C98478235FDFE0E8D5DC22B (intptr_t ___0_gpuDelegate, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_gpu_delegate_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_gpu_delegate"), "TfLiteGpuDelegateV2Delete", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_gpu_delegate_INTERNAL
	reinterpret_cast<PInvokeFunc>(TfLiteGpuDelegateV2Delete)(___0_gpuDelegate);
	#else
	il2cppPInvokeFunc(___0_gpuDelegate);
	#endif

}
// TensorFlowLite.Interpreter/Status TensorFlowLite.GpuDelegateV2::TfLiteGpuDelegateBindBufferToTensor(System.IntPtr,System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GpuDelegateV2_TfLiteGpuDelegateBindBufferToTensor_mF0D648F73DE52134724281058902ACDF83B024E7 (intptr_t ___0_gpuDelegate, uint32_t ___1_buffer, int32_t ___2_tensor_index, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_gpu_delegate_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_gpu_delegate"), "TfLiteGpuDelegateBindBufferToTensor", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_gpu_delegate_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteGpuDelegateBindBufferToTensor)(___0_gpuDelegate, ___1_buffer, ___2_tensor_index);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_gpuDelegate, ___1_buffer, ___2_tensor_index);
	#endif

	return returnValue;
}
// TensorFlowLite.Interpreter/Status TensorFlowLite.GpuDelegateV2::TfLiteGpuDelegateV2BindInputBuffer(System.IntPtr,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GpuDelegateV2_TfLiteGpuDelegateV2BindInputBuffer_m0F885E70AB18BB43C4D167B71CD1DE3AC0E36886 (intptr_t ___0_gpuDelegatee, int32_t ___1_index, uint32_t ___2_buffer, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_gpu_delegate_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_gpu_delegate"), "TfLiteGpuDelegateV2BindInputBuffer", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_gpu_delegate_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteGpuDelegateV2BindInputBuffer)(___0_gpuDelegatee, ___1_index, ___2_buffer);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_gpuDelegatee, ___1_index, ___2_buffer);
	#endif

	return returnValue;
}
// TensorFlowLite.Interpreter/Status TensorFlowLite.GpuDelegateV2::TfLiteGpuDelegateV2BindOutputBuffer(System.IntPtr,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GpuDelegateV2_TfLiteGpuDelegateV2BindOutputBuffer_m0538794E304932A6B5619C2257B9EBA6C7E71A08 (intptr_t ___0_gpuDelegate, int32_t ___1_index, uint32_t ___2_buffer, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_gpu_delegate_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_gpu_delegate"), "TfLiteGpuDelegateV2BindOutputBuffer", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_gpu_delegate_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteGpuDelegateV2BindOutputBuffer)(___0_gpuDelegate, ___1_index, ___2_buffer);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_gpuDelegate, ___1_index, ___2_buffer);
	#endif

	return returnValue;
}
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
// System.IntPtr TensorFlowLite.Interpreter::get_InterpreterPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interpreter_get_InterpreterPointer_m42E045A97C9B3CFCD8200E66ECDF46CC43ECAC57 (Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* __this, const RuntimeMethod* method) 
{
	{
		// internal TfLiteInterpreter InterpreterPointer => interpreter;
		intptr_t L_0 = __this->___interpreter_1;
		return L_0;
	}
}
// System.Void TensorFlowLite.Interpreter::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter__ctor_m3AC04E085567E9ABF435DB30501E0A04D2639257 (Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_modelData, const RuntimeMethod* method) 
{
	{
		// public Interpreter(byte[] modelData) : this(modelData, null) { }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_modelData;
		Interpreter__ctor_m5BC403A44C914F12701A68783D68A29A0F3A3D35(__this, L_0, (InterpreterOptions_t9E95AA774C31B5ACAE144C947B861C026677E487*)NULL, NULL);
		// public Interpreter(byte[] modelData) : this(modelData, null) { }
		return;
	}
}
// System.Void TensorFlowLite.Interpreter::.ctor(System.Byte[],TensorFlowLite.InterpreterOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter__ctor_m5BC403A44C914F12701A68783D68A29A0F3A3D35 (Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_modelData, InterpreterOptions_t9E95AA774C31B5ACAE144C947B861C026677E487* ___1_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterpreterOptions_t9E95AA774C31B5ACAE144C947B861C026677E487_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	InterpreterOptions_t9E95AA774C31B5ACAE144C947B861C026677E487* G_B4_0 = NULL;
	Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* G_B4_1 = NULL;
	InterpreterOptions_t9E95AA774C31B5ACAE144C947B861C026677E487* G_B3_0 = NULL;
	Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* G_B3_1 = NULL;
	{
		// private TfLiteModel model = IntPtr.Zero;
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___model_0 = L_0;
		// private TfLiteInterpreter interpreter = IntPtr.Zero;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___interpreter_1 = L_1;
		// public Interpreter(byte[] modelData, InterpreterOptions options)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// GCHandle modelDataHandle = GCHandle.Alloc(modelData, GCHandleType.Pinned);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_modelData;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_3;
		L_3 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC((RuntimeObject*)L_2, 3, NULL);
		V_0 = L_3;
		// IntPtr modelDataPtr = modelDataHandle.AddrOfPinnedObject();
		intptr_t L_4;
		L_4 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_0), NULL);
		V_1 = L_4;
		// model = TfLiteModelCreate(modelDataPtr, modelData.Length);
		intptr_t L_5 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_modelData;
		NullCheck(L_6);
		intptr_t L_7;
		L_7 = Interpreter_TfLiteModelCreate_mA5D88D4A74547553A74D5D681ED736DA786BFB08(L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		__this->___model_0 = L_7;
		// if (model == IntPtr.Zero) throw new Exception("Failed to create TensorFlowLite Model");
		intptr_t L_8 = __this->___model_0;
		intptr_t L_9 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_10;
		L_10 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		// if (model == IntPtr.Zero) throw new Exception("Failed to create TensorFlowLite Model");
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB6E1EB65E6DF0ABEBDA7EFD4891C6849B7F077C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Interpreter__ctor_m5BC403A44C914F12701A68783D68A29A0F3A3D35_RuntimeMethod_var)));
	}

IL_0058:
	{
		// this.options = options ?? new InterpreterOptions();
		InterpreterOptions_t9E95AA774C31B5ACAE144C947B861C026677E487* L_12 = ___1_options;
		InterpreterOptions_t9E95AA774C31B5ACAE144C947B861C026677E487* L_13 = L_12;
		G_B3_0 = L_13;
		G_B3_1 = __this;
		if (L_13)
		{
			G_B4_0 = L_13;
			G_B4_1 = __this;
			goto IL_0063;
		}
	}
	{
		InterpreterOptions_t9E95AA774C31B5ACAE144C947B861C026677E487* L_14 = (InterpreterOptions_t9E95AA774C31B5ACAE144C947B861C026677E487*)il2cpp_codegen_object_new(InterpreterOptions_t9E95AA774C31B5ACAE144C947B861C026677E487_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		InterpreterOptions__ctor_mEEC2148897A34DBBC2445A8C70B7F42E8579AA75(L_14, NULL);
		G_B4_0 = L_14;
		G_B4_1 = G_B3_1;
	}

IL_0063:
	{
		NullCheck(G_B4_1);
		G_B4_1->___options_2 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___options_2), (void*)G_B4_0);
		// interpreter = TfLiteInterpreterCreate(model, options.nativePtr);
		intptr_t L_15 = __this->___model_0;
		InterpreterOptions_t9E95AA774C31B5ACAE144C947B861C026677E487* L_16 = ___1_options;
		NullCheck(L_16);
		intptr_t L_17 = L_16->___nativePtr_0;
		intptr_t L_18;
		L_18 = Interpreter_TfLiteInterpreterCreate_m0D7049F322008645A1AABFB8590B80B24DDC407B(L_15, L_17, NULL);
		__this->___interpreter_1 = L_18;
		// if (interpreter == IntPtr.Zero) throw new Exception("Failed to create TensorFlowLite Interpreter");
		intptr_t L_19 = __this->___interpreter_1;
		intptr_t L_20 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_21;
		L_21 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_19, L_20, NULL);
		if (!L_21)
		{
			goto IL_009c;
		}
	}
	{
		// if (interpreter == IntPtr.Zero) throw new Exception("Failed to create TensorFlowLite Interpreter");
		Exception_t* L_22 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_22);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral24EE12FED48DD9020A8243CF10D968E6B9D65BFD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Interpreter__ctor_m5BC403A44C914F12701A68783D68A29A0F3A3D35_RuntimeMethod_var)));
	}

IL_009c:
	{
		// }
		return;
	}
}
// System.Void TensorFlowLite.Interpreter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_Dispose_m12271FE79DE113682106328343CF2793E1B79F7B (Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (interpreter != IntPtr.Zero) TfLiteInterpreterDelete(interpreter);
		intptr_t L_0 = __this->___interpreter_1;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// if (interpreter != IntPtr.Zero) TfLiteInterpreterDelete(interpreter);
		intptr_t L_3 = __this->___interpreter_1;
		Interpreter_TfLiteInterpreterDelete_m0D07FD41965427A0FF42B7E291515B2B0C0A87DE(L_3, NULL);
	}

IL_001d:
	{
		// interpreter = IntPtr.Zero;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___interpreter_1 = L_4;
		// if (model != IntPtr.Zero) TfLiteModelDelete(model);
		intptr_t L_5 = __this->___model_0;
		intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_7;
		L_7 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		// if (model != IntPtr.Zero) TfLiteModelDelete(model);
		intptr_t L_8 = __this->___model_0;
		Interpreter_TfLiteModelDelete_m5F08BD953B10012E09A580F8A4D708AC6464791D(L_8, NULL);
	}

IL_0045:
	{
		// model = IntPtr.Zero;
		intptr_t L_9 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___model_0 = L_9;
		// if (options != null) options.Dispose();
		InterpreterOptions_t9E95AA774C31B5ACAE144C947B861C026677E487* L_10 = __this->___options_2;
		if (!L_10)
		{
			goto IL_0063;
		}
	}
	{
		// if (options != null) options.Dispose();
		InterpreterOptions_t9E95AA774C31B5ACAE144C947B861C026677E487* L_11 = __this->___options_2;
		NullCheck(L_11);
		InterpreterOptions_Dispose_mA62A6677F5A57F3E9F4FEB2C2E3EECA581241FC9(L_11, NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void TensorFlowLite.Interpreter::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_Invoke_m5DC07AAD7948548E5ED741C2E35899CE419567C7 (Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* __this, const RuntimeMethod* method) 
{
	{
		// ThrowIfError(TfLiteInterpreterInvoke(interpreter));
		intptr_t L_0 = __this->___interpreter_1;
		int32_t L_1;
		L_1 = Interpreter_TfLiteInterpreterInvoke_m46EC0EDA0F74F0CD27083E8D194CFAFC3637FD42(L_0, NULL);
		Interpreter_ThrowIfError_m4F84EE55D3FD540DE37FDD2EC4FDE09BBAF465DC(L_1, NULL);
		// }
		return;
	}
}
// System.Int32 TensorFlowLite.Interpreter::GetInputTensorCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_GetInputTensorCount_mF4D037901D22783436F446E04BBCA40FBFF35981 (Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* __this, const RuntimeMethod* method) 
{
	{
		// return TfLiteInterpreterGetInputTensorCount(interpreter);
		intptr_t L_0 = __this->___interpreter_1;
		int32_t L_1;
		L_1 = Interpreter_TfLiteInterpreterGetInputTensorCount_mE8AC1517C9F6AE57E4386FC337C100BDE6EBCEEB(L_0, NULL);
		return L_1;
	}
}
// System.Void TensorFlowLite.Interpreter::SetInputTensorData(System.Int32,System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_SetInputTensorData_m2DCCB5E815C99213F88A7082FFA825C02B73B1A9 (Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* __this, int32_t ___0_inputTensorIndex, RuntimeArray* ___1_inputTensorData, const RuntimeMethod* method) 
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// GCHandle tensorDataHandle = GCHandle.Alloc(inputTensorData, GCHandleType.Pinned);
		RuntimeArray* L_0 = ___1_inputTensorData;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(L_0, 3, NULL);
		V_0 = L_1;
		// IntPtr tensorDataPtr = tensorDataHandle.AddrOfPinnedObject();
		intptr_t L_2;
		L_2 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_0), NULL);
		V_1 = L_2;
		// TfLiteTensor tensor = TfLiteInterpreterGetInputTensor(interpreter, inputTensorIndex);
		intptr_t L_3 = __this->___interpreter_1;
		int32_t L_4 = ___0_inputTensorIndex;
		intptr_t L_5;
		L_5 = Interpreter_TfLiteInterpreterGetInputTensor_m5B49743083077F09FB9551A787FA8EBBF794C9F3(L_3, L_4, NULL);
		// ThrowIfError(TfLiteTensorCopyFromBuffer(
		//     tensor, tensorDataPtr, Buffer.ByteLength(inputTensorData)));
		intptr_t L_6 = V_1;
		RuntimeArray* L_7 = ___1_inputTensorData;
		int32_t L_8;
		L_8 = Buffer_ByteLength_mF5ECD3B5109BB58029D2D19353465CD3576490EF(L_7, NULL);
		int32_t L_9;
		L_9 = Interpreter_TfLiteTensorCopyFromBuffer_mAD26B3AF09E998D078E932AFBFDC4C70E1B5335B(L_5, L_6, L_8, NULL);
		Interpreter_ThrowIfError_m4F84EE55D3FD540DE37FDD2EC4FDE09BBAF465DC(L_9, NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.Interpreter::ResizeInputTensor(System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_ResizeInputTensor_m6960E53BBFCB1B9582AEFB511CBFFB6E6A8E6391 (Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* __this, int32_t ___0_inputTensorIndex, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_inputTensorShape, const RuntimeMethod* method) 
{
	{
		// ThrowIfError(TfLiteInterpreterResizeInputTensor(
		//     interpreter, inputTensorIndex, inputTensorShape, inputTensorShape.Length));
		intptr_t L_0 = __this->___interpreter_1;
		int32_t L_1 = ___0_inputTensorIndex;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___1_inputTensorShape;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___1_inputTensorShape;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Interpreter_TfLiteInterpreterResizeInputTensor_mA77A63F222FD034DDF563C2299E1711A64753849(L_0, L_1, L_2, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		Interpreter_ThrowIfError_m4F84EE55D3FD540DE37FDD2EC4FDE09BBAF465DC(L_4, NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.Interpreter::AllocateTensors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_AllocateTensors_m600E300A4C080D5732D156DA2BF47B48491A639C (Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* __this, const RuntimeMethod* method) 
{
	{
		// ThrowIfError(TfLiteInterpreterAllocateTensors(interpreter));
		intptr_t L_0 = __this->___interpreter_1;
		int32_t L_1;
		L_1 = Interpreter_TfLiteInterpreterAllocateTensors_mA4247D53F9D1D6CC6218F7C0F92613793683400F(L_0, NULL);
		Interpreter_ThrowIfError_m4F84EE55D3FD540DE37FDD2EC4FDE09BBAF465DC(L_1, NULL);
		// }
		return;
	}
}
// System.Int32 TensorFlowLite.Interpreter::GetOutputTensorCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_GetOutputTensorCount_m93F718BD038031B668CC2B6EEB76B7CA7FAF7C4A (Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* __this, const RuntimeMethod* method) 
{
	{
		// return TfLiteInterpreterGetOutputTensorCount(interpreter);
		intptr_t L_0 = __this->___interpreter_1;
		int32_t L_1;
		L_1 = Interpreter_TfLiteInterpreterGetOutputTensorCount_m67CC0A40C00CCE297CBF812ECEFCE9D9271B54EB(L_0, NULL);
		return L_1;
	}
}
// System.Void TensorFlowLite.Interpreter::GetOutputTensorData(System.Int32,System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_GetOutputTensorData_mBB18EB83BA0092CE73AC13242AB51F79C747FBEA (Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* __this, int32_t ___0_outputTensorIndex, RuntimeArray* ___1_outputTensorData, const RuntimeMethod* method) 
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// GCHandle tensorDataHandle = GCHandle.Alloc(outputTensorData, GCHandleType.Pinned);
		RuntimeArray* L_0 = ___1_outputTensorData;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(L_0, 3, NULL);
		V_0 = L_1;
		// IntPtr tensorDataPtr = tensorDataHandle.AddrOfPinnedObject();
		intptr_t L_2;
		L_2 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_0), NULL);
		V_1 = L_2;
		// TfLiteTensor tensor = TfLiteInterpreterGetOutputTensor(interpreter, outputTensorIndex);
		intptr_t L_3 = __this->___interpreter_1;
		int32_t L_4 = ___0_outputTensorIndex;
		intptr_t L_5;
		L_5 = Interpreter_TfLiteInterpreterGetOutputTensor_m7F91C21F26994C123C9F005D7EC6B80B69186FE9(L_3, L_4, NULL);
		// ThrowIfError(TfLiteTensorCopyToBuffer(
		//     tensor, tensorDataPtr, Buffer.ByteLength(outputTensorData)));
		intptr_t L_6 = V_1;
		RuntimeArray* L_7 = ___1_outputTensorData;
		int32_t L_8;
		L_8 = Buffer_ByteLength_mF5ECD3B5109BB58029D2D19353465CD3576490EF(L_7, NULL);
		int32_t L_9;
		L_9 = Interpreter_TfLiteTensorCopyToBuffer_mE800F2D739229269FE0CC7B3437A593B570AA608(L_5, L_6, L_8, NULL);
		Interpreter_ThrowIfError_m4F84EE55D3FD540DE37FDD2EC4FDE09BBAF465DC(L_9, NULL);
		// }
		return;
	}
}
// TensorFlowLite.Interpreter/TensorInfo TensorFlowLite.Interpreter::GetInputTensorInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2 Interpreter_GetInputTensorInfo_m1C8E806E40D6E57267AAE54D8A4671457119269A (Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		// TfLiteTensor tensor = TfLiteInterpreterGetInputTensor(interpreter, index);
		intptr_t L_0 = __this->___interpreter_1;
		int32_t L_1 = ___0_index;
		intptr_t L_2;
		L_2 = Interpreter_TfLiteInterpreterGetInputTensor_m5B49743083077F09FB9551A787FA8EBBF794C9F3(L_0, L_1, NULL);
		// return GetTensorInfo(tensor);
		TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2 L_3;
		L_3 = Interpreter_GetTensorInfo_m28A3419A8F7037EA84F090616698938CE7DCDD68(L_2, NULL);
		return L_3;
	}
}
// TensorFlowLite.Interpreter/TensorInfo TensorFlowLite.Interpreter::GetOutputTensorInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2 Interpreter_GetOutputTensorInfo_m184964B54230250C1D4BF229D372F448813EAF15 (Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		// TfLiteTensor tensor = TfLiteInterpreterGetOutputTensor(interpreter, index);
		intptr_t L_0 = __this->___interpreter_1;
		int32_t L_1 = ___0_index;
		intptr_t L_2;
		L_2 = Interpreter_TfLiteInterpreterGetOutputTensor_m7F91C21F26994C123C9F005D7EC6B80B69186FE9(L_0, L_1, NULL);
		// return GetTensorInfo(tensor);
		TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2 L_3;
		L_3 = Interpreter_GetTensorInfo_m28A3419A8F7037EA84F090616698938CE7DCDD68(L_2, NULL);
		return L_3;
	}
}
// System.String TensorFlowLite.Interpreter::GetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Interpreter_GetVersion_mE287CCE3D4A8B26E8AB5175345312626C54CF933 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Marshal.PtrToStringAnsi(TfLiteVersion());
		intptr_t L_0;
		L_0 = Interpreter_TfLiteVersion_m1D9355FC1BD8C3F3BF9FEF36FA31D7CBEB616016(NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_0, NULL);
		return L_1;
	}
}
// System.String TensorFlowLite.Interpreter::GetTensorName(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Interpreter_GetTensorName_m233991432B1AE7668DCE7F90F212D8BA34B85F01 (intptr_t ___0_tensor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Marshal.PtrToStringAnsi(TfLiteTensorName(tensor));
		intptr_t L_0 = ___0_tensor;
		intptr_t L_1;
		L_1 = Interpreter_TfLiteTensorName_m394976C98A457BDAAFFD525339AE8BE4F41886A1(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_1, NULL);
		return L_2;
	}
}
// TensorFlowLite.Interpreter/TensorInfo TensorFlowLite.Interpreter::GetTensorInfo(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2 Interpreter_GetTensorInfo_m28A3419A8F7037EA84F090616698938CE7DCDD68 (intptr_t ___0_tensor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int[] dimensions = new int[TfLiteTensorNumDims(tensor)];
		intptr_t L_0 = ___0_tensor;
		int32_t L_1;
		L_1 = Interpreter_TfLiteTensorNumDims_m881532E043B41124244F0E036BC86A8E43F45933(L_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		// for (int i = 0; i < dimensions.Length; i++)
		V_1 = 0;
		goto IL_001e;
	}

IL_0010:
	{
		// dimensions[i] = TfLiteTensorDim(tensor, i);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_0;
		int32_t L_4 = V_1;
		intptr_t L_5 = ___0_tensor;
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = Interpreter_TfLiteTensorDim_m4899570B27E0908BDBD941A1D5FEC269A570128E(L_5, L_6, NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_7);
		// for (int i = 0; i < dimensions.Length; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_001e:
	{
		// for (int i = 0; i < dimensions.Length; i++)
		int32_t L_9 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0010;
		}
	}
	{
		// return new TensorInfo()
		// {
		//     name = GetTensorName(tensor),
		//     type = TfLiteTensorType(tensor),
		//     shape = dimensions,
		//     quantizationParams = TfLiteTensorQuantizationParams(tensor),
		// };
		il2cpp_codegen_initobj((&V_2), sizeof(TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2));
		intptr_t L_11 = ___0_tensor;
		String_t* L_12;
		L_12 = Interpreter_GetTensorName_m233991432B1AE7668DCE7F90F212D8BA34B85F01(L_11, NULL);
		TensorInfo_set_name_m8AE89B0FD55BA8BFC2EFE44E28F3B70C756BC260_inline((&V_2), L_12, NULL);
		intptr_t L_13 = ___0_tensor;
		int32_t L_14;
		L_14 = Interpreter_TfLiteTensorType_m5EC52FBC2CFC24E5366765C8E98EC8D9C8E6067B(L_13, NULL);
		TensorInfo_set_type_mAEBFD7AF7B853389EA292A8EEE6CE05737F21BA7_inline((&V_2), L_14, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_0;
		TensorInfo_set_shape_mE54A05F75006295FC1BD708B0EC18EFECD8DA1D2_inline((&V_2), L_15, NULL);
		intptr_t L_16 = ___0_tensor;
		QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A L_17;
		L_17 = Interpreter_TfLiteTensorQuantizationParams_m619651FFB71EBC996800FB8AF9BD55970DB9ACD5(L_16, NULL);
		TensorInfo_set_quantizationParams_mD0A6FE7340B5ED7472D4C156CBDB71EE0AEC18D1_inline((&V_2), L_17, NULL);
		TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2 L_18 = V_2;
		return L_18;
	}
}
// System.Void TensorFlowLite.Interpreter::ThrowIfError(TensorFlowLite.Interpreter/Status)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_ThrowIfError_m4F84EE55D3FD540DE37FDD2EC4FDE09BBAF465DC (int32_t ___0_status, const RuntimeMethod* method) 
{
	{
		// if (status == Status.Error) throw new Exception("TensorFlowLite operation failed.");
		int32_t L_0 = ___0_status;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000f;
		}
	}
	{
		// if (status == Status.Error) throw new Exception("TensorFlowLite operation failed.");
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral90C0C64260A2290CC30E10C37C0E45A183BFBDEE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Interpreter_ThrowIfError_m4F84EE55D3FD540DE37FDD2EC4FDE09BBAF465DC_RuntimeMethod_var)));
	}

IL_000f:
	{
		// if (status == Status.DelegateError) throw new Exception("TensorFlowLite delegage operation failed.");
		int32_t L_2 = ___0_status;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_001e;
		}
	}
	{
		// if (status == Status.DelegateError) throw new Exception("TensorFlowLite delegage operation failed.");
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD636EEFC5DCD1E9D43960804AA16B411F9F85D02)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Interpreter_ThrowIfError_m4F84EE55D3FD540DE37FDD2EC4FDE09BBAF465DC_RuntimeMethod_var)));
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.IntPtr TensorFlowLite.Interpreter::TfLiteVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interpreter_TfLiteVersion_m1D9355FC1BD8C3F3BF9FEF36FA31D7CBEB616016 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteVersion", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteVersion)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.IntPtr TensorFlowLite.Interpreter::TfLiteModelCreate(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interpreter_TfLiteModelCreate_mA5D88D4A74547553A74D5D681ED736DA786BFB08 (intptr_t ___0_model_data, int32_t ___1_model_size, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteModelCreate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteModelCreate)(___0_model_data, ___1_model_size);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_model_data, ___1_model_size);
	#endif

	return returnValue;
}
// System.Void TensorFlowLite.Interpreter::TfLiteModelDelete(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_TfLiteModelDelete_m5F08BD953B10012E09A580F8A4D708AC6464791D (intptr_t ___0_model, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteModelDelete", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(TfLiteModelDelete)(___0_model);
	#else
	il2cppPInvokeFunc(___0_model);
	#endif

}
// System.IntPtr TensorFlowLite.Interpreter::TfLiteInterpreterCreate(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interpreter_TfLiteInterpreterCreate_m0D7049F322008645A1AABFB8590B80B24DDC407B (intptr_t ___0_model, intptr_t ___1_optional_options, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterCreate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteInterpreterCreate)(___0_model, ___1_optional_options);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_model, ___1_optional_options);
	#endif

	return returnValue;
}
// System.Void TensorFlowLite.Interpreter::TfLiteInterpreterDelete(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_TfLiteInterpreterDelete_m0D07FD41965427A0FF42B7E291515B2B0C0A87DE (intptr_t ___0_interpreter, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterDelete", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(TfLiteInterpreterDelete)(___0_interpreter);
	#else
	il2cppPInvokeFunc(___0_interpreter);
	#endif

}
// System.Int32 TensorFlowLite.Interpreter::TfLiteInterpreterGetInputTensorCount(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteInterpreterGetInputTensorCount_mE8AC1517C9F6AE57E4386FC337C100BDE6EBCEEB (intptr_t ___0_interpreter, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterGetInputTensorCount", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteInterpreterGetInputTensorCount)(___0_interpreter);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_interpreter);
	#endif

	return returnValue;
}
// System.IntPtr TensorFlowLite.Interpreter::TfLiteInterpreterGetInputTensor(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interpreter_TfLiteInterpreterGetInputTensor_m5B49743083077F09FB9551A787FA8EBBF794C9F3 (intptr_t ___0_interpreter, int32_t ___1_input_index, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterGetInputTensor", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteInterpreterGetInputTensor)(___0_interpreter, ___1_input_index);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_interpreter, ___1_input_index);
	#endif

	return returnValue;
}
// TensorFlowLite.Interpreter/Status TensorFlowLite.Interpreter::TfLiteInterpreterResizeInputTensor(System.IntPtr,System.Int32,System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteInterpreterResizeInputTensor_mA77A63F222FD034DDF563C2299E1711A64753849 (intptr_t ___0_interpreter, int32_t ___1_input_index, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_input_dims, int32_t ___3_input_dims_size, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, int32_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterResizeInputTensor", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___2_input_dims' to native representation
	int32_t* ____2_input_dims_marshaled = NULL;
	if (___2_input_dims != NULL)
	{
		____2_input_dims_marshaled = reinterpret_cast<int32_t*>((___2_input_dims)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteInterpreterResizeInputTensor)(___0_interpreter, ___1_input_index, ____2_input_dims_marshaled, ___3_input_dims_size);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_interpreter, ___1_input_index, ____2_input_dims_marshaled, ___3_input_dims_size);
	#endif

	return returnValue;
}
// TensorFlowLite.Interpreter/Status TensorFlowLite.Interpreter::TfLiteInterpreterAllocateTensors(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteInterpreterAllocateTensors_mA4247D53F9D1D6CC6218F7C0F92613793683400F (intptr_t ___0_interpreter, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterAllocateTensors", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteInterpreterAllocateTensors)(___0_interpreter);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_interpreter);
	#endif

	return returnValue;
}
// TensorFlowLite.Interpreter/Status TensorFlowLite.Interpreter::TfLiteInterpreterInvoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteInterpreterInvoke_m46EC0EDA0F74F0CD27083E8D194CFAFC3637FD42 (intptr_t ___0_interpreter, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterInvoke", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteInterpreterInvoke)(___0_interpreter);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_interpreter);
	#endif

	return returnValue;
}
// System.Int32 TensorFlowLite.Interpreter::TfLiteInterpreterGetOutputTensorCount(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteInterpreterGetOutputTensorCount_m67CC0A40C00CCE297CBF812ECEFCE9D9271B54EB (intptr_t ___0_interpreter, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterGetOutputTensorCount", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteInterpreterGetOutputTensorCount)(___0_interpreter);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_interpreter);
	#endif

	return returnValue;
}
// System.IntPtr TensorFlowLite.Interpreter::TfLiteInterpreterGetOutputTensor(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interpreter_TfLiteInterpreterGetOutputTensor_m7F91C21F26994C123C9F005D7EC6B80B69186FE9 (intptr_t ___0_interpreter, int32_t ___1_output_index, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterGetOutputTensor", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteInterpreterGetOutputTensor)(___0_interpreter, ___1_output_index);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_interpreter, ___1_output_index);
	#endif

	return returnValue;
}
// TensorFlowLite.Interpreter/DataType TensorFlowLite.Interpreter::TfLiteTensorType(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteTensorType_m5EC52FBC2CFC24E5366765C8E98EC8D9C8E6067B (intptr_t ___0_tensor, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteTensorType", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteTensorType)(___0_tensor);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_tensor);
	#endif

	return returnValue;
}
// System.Int32 TensorFlowLite.Interpreter::TfLiteTensorNumDims(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteTensorNumDims_m881532E043B41124244F0E036BC86A8E43F45933 (intptr_t ___0_tensor, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteTensorNumDims", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteTensorNumDims)(___0_tensor);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_tensor);
	#endif

	return returnValue;
}
// System.Int32 TensorFlowLite.Interpreter::TfLiteTensorDim(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteTensorDim_m4899570B27E0908BDBD941A1D5FEC269A570128E (intptr_t ___0_tensor, int32_t ___1_dim_index, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteTensorDim", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteTensorDim)(___0_tensor, ___1_dim_index);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_tensor, ___1_dim_index);
	#endif

	return returnValue;
}
// System.UInt32 TensorFlowLite.Interpreter::TfLiteTensorByteSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Interpreter_TfLiteTensorByteSize_m2FD49553170B8078F1A8A29A84240BCE65CF9D39 (intptr_t ___0_tensor, const RuntimeMethod* method) 
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteTensorByteSize", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteTensorByteSize)(___0_tensor);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___0_tensor);
	#endif

	return returnValue;
}
// System.IntPtr TensorFlowLite.Interpreter::TfLiteTensorName(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interpreter_TfLiteTensorName_m394976C98A457BDAAFFD525339AE8BE4F41886A1 (intptr_t ___0_tensor, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteTensorName", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteTensorName)(___0_tensor);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_tensor);
	#endif

	return returnValue;
}
// TensorFlowLite.Interpreter/QuantizationParams TensorFlowLite.Interpreter::TfLiteTensorQuantizationParams(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A Interpreter_TfLiteTensorQuantizationParams_m619651FFB71EBC996800FB8AF9BD55970DB9ACD5 (intptr_t ___0_tensor, const RuntimeMethod* method) 
{
	typedef QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteTensorQuantizationParams", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A returnValue = reinterpret_cast<PInvokeFunc>(TfLiteTensorQuantizationParams)(___0_tensor);
	#else
	QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A returnValue = il2cppPInvokeFunc(___0_tensor);
	#endif

	return returnValue;
}
// TensorFlowLite.Interpreter/Status TensorFlowLite.Interpreter::TfLiteTensorCopyFromBuffer(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteTensorCopyFromBuffer_mAD26B3AF09E998D078E932AFBFDC4C70E1B5335B (intptr_t ___0_tensor, intptr_t ___1_input_data, int32_t ___2_input_data_size, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteTensorCopyFromBuffer", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteTensorCopyFromBuffer)(___0_tensor, ___1_input_data, ___2_input_data_size);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_tensor, ___1_input_data, ___2_input_data_size);
	#endif

	return returnValue;
}
// TensorFlowLite.Interpreter/Status TensorFlowLite.Interpreter::TfLiteTensorCopyToBuffer(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteTensorCopyToBuffer_mE800F2D739229269FE0CC7B3437A593B570AA608 (intptr_t ___0_tensor, intptr_t ___1_output_data, int32_t ___2_output_data_size, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteTensorCopyToBuffer", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteTensorCopyToBuffer)(___0_tensor, ___1_output_data, ___2_output_data_size);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_tensor, ___1_output_data, ___2_output_data_size);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: TensorFlowLite.Interpreter/TensorInfo
IL2CPP_EXTERN_C void TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2_marshal_pinvoke(const TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2& unmarshaled, TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CnameU3Ek__BackingField_0 = il2cpp_codegen_marshal_string(unmarshaled.___U3CnameU3Ek__BackingField_0);
	marshaled.___U3CtypeU3Ek__BackingField_1 = unmarshaled.___U3CtypeU3Ek__BackingField_1;
	marshaled.___U3CshapeU3Ek__BackingField_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I4, unmarshaled.___U3CshapeU3Ek__BackingField_2);
	marshaled.___U3CquantizationParamsU3Ek__BackingField_3 = unmarshaled.___U3CquantizationParamsU3Ek__BackingField_3;
}
IL2CPP_EXTERN_C void TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2_marshal_pinvoke_back(const TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2_marshaled_pinvoke& marshaled, TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___U3CnameU3Ek__BackingField_0 = il2cpp_codegen_marshal_string_result(marshaled.___U3CnameU3Ek__BackingField_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CnameU3Ek__BackingField_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___U3CnameU3Ek__BackingField_0));
	int32_t unmarshaledU3CtypeU3Ek__BackingField_temp_1 = 0;
	unmarshaledU3CtypeU3Ek__BackingField_temp_1 = marshaled.___U3CtypeU3Ek__BackingField_1;
	unmarshaled.___U3CtypeU3Ek__BackingField_1 = unmarshaledU3CtypeU3Ek__BackingField_temp_1;
	unmarshaled.___U3CshapeU3Ek__BackingField_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, marshaled.___U3CshapeU3Ek__BackingField_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CshapeU3Ek__BackingField_2), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, marshaled.___U3CshapeU3Ek__BackingField_2));
	QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A unmarshaledU3CquantizationParamsU3Ek__BackingField_temp_3;
	memset((&unmarshaledU3CquantizationParamsU3Ek__BackingField_temp_3), 0, sizeof(unmarshaledU3CquantizationParamsU3Ek__BackingField_temp_3));
	unmarshaledU3CquantizationParamsU3Ek__BackingField_temp_3 = marshaled.___U3CquantizationParamsU3Ek__BackingField_3;
	unmarshaled.___U3CquantizationParamsU3Ek__BackingField_3 = unmarshaledU3CquantizationParamsU3Ek__BackingField_temp_3;
}
// Conversion method for clean up from marshalling of: TensorFlowLite.Interpreter/TensorInfo
IL2CPP_EXTERN_C void TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2_marshal_pinvoke_cleanup(TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CnameU3Ek__BackingField_0);
	marshaled.___U3CnameU3Ek__BackingField_0 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___U3CshapeU3Ek__BackingField_2);
	marshaled.___U3CshapeU3Ek__BackingField_2 = NULL;
}
// Conversion methods for marshalling of: TensorFlowLite.Interpreter/TensorInfo
IL2CPP_EXTERN_C void TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2_marshal_com(const TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2& unmarshaled, TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2_marshaled_com& marshaled)
{
	marshaled.___U3CnameU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___U3CnameU3Ek__BackingField_0);
	marshaled.___U3CtypeU3Ek__BackingField_1 = unmarshaled.___U3CtypeU3Ek__BackingField_1;
	marshaled.___U3CshapeU3Ek__BackingField_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I4, unmarshaled.___U3CshapeU3Ek__BackingField_2);
	marshaled.___U3CquantizationParamsU3Ek__BackingField_3 = unmarshaled.___U3CquantizationParamsU3Ek__BackingField_3;
}
IL2CPP_EXTERN_C void TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2_marshal_com_back(const TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2_marshaled_com& marshaled, TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___U3CnameU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___U3CnameU3Ek__BackingField_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CnameU3Ek__BackingField_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___U3CnameU3Ek__BackingField_0));
	int32_t unmarshaledU3CtypeU3Ek__BackingField_temp_1 = 0;
	unmarshaledU3CtypeU3Ek__BackingField_temp_1 = marshaled.___U3CtypeU3Ek__BackingField_1;
	unmarshaled.___U3CtypeU3Ek__BackingField_1 = unmarshaledU3CtypeU3Ek__BackingField_temp_1;
	unmarshaled.___U3CshapeU3Ek__BackingField_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, marshaled.___U3CshapeU3Ek__BackingField_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CshapeU3Ek__BackingField_2), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, marshaled.___U3CshapeU3Ek__BackingField_2));
	QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A unmarshaledU3CquantizationParamsU3Ek__BackingField_temp_3;
	memset((&unmarshaledU3CquantizationParamsU3Ek__BackingField_temp_3), 0, sizeof(unmarshaledU3CquantizationParamsU3Ek__BackingField_temp_3));
	unmarshaledU3CquantizationParamsU3Ek__BackingField_temp_3 = marshaled.___U3CquantizationParamsU3Ek__BackingField_3;
	unmarshaled.___U3CquantizationParamsU3Ek__BackingField_3 = unmarshaledU3CquantizationParamsU3Ek__BackingField_temp_3;
}
// Conversion method for clean up from marshalling of: TensorFlowLite.Interpreter/TensorInfo
IL2CPP_EXTERN_C void TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2_marshal_com_cleanup(TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CnameU3Ek__BackingField_0);
	marshaled.___U3CnameU3Ek__BackingField_0 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___U3CshapeU3Ek__BackingField_2);
	marshaled.___U3CshapeU3Ek__BackingField_2 = NULL;
}
// System.String TensorFlowLite.Interpreter/TensorInfo::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TensorInfo_get_name_mD236725D81F877DA4F915E63F652A13B8918A009 (TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* __this, const RuntimeMethod* method) 
{
	{
		// public string name { get; internal set; }
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* TensorInfo_get_name_mD236725D81F877DA4F915E63F652A13B8918A009_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = TensorInfo_get_name_mD236725D81F877DA4F915E63F652A13B8918A009_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TensorFlowLite.Interpreter/TensorInfo::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TensorInfo_set_name_m8AE89B0FD55BA8BFC2EFE44E28F3B70C756BC260 (TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string name { get; internal set; }
		String_t* L_0 = ___0_value;
		__this->___U3CnameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TensorInfo_set_name_m8AE89B0FD55BA8BFC2EFE44E28F3B70C756BC260_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2*>(__this + _offset);
	TensorInfo_set_name_m8AE89B0FD55BA8BFC2EFE44E28F3B70C756BC260_inline(_thisAdjusted, ___0_value, method);
}
// TensorFlowLite.Interpreter/DataType TensorFlowLite.Interpreter/TensorInfo::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TensorInfo_get_type_m64001E63590AB3363C4D841FE34F8CF28040DE4D (TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* __this, const RuntimeMethod* method) 
{
	{
		// public DataType type { get; internal set; }
		int32_t L_0 = __this->___U3CtypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t TensorInfo_get_type_m64001E63590AB3363C4D841FE34F8CF28040DE4D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = TensorInfo_get_type_m64001E63590AB3363C4D841FE34F8CF28040DE4D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TensorFlowLite.Interpreter/TensorInfo::set_type(TensorFlowLite.Interpreter/DataType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TensorInfo_set_type_mAEBFD7AF7B853389EA292A8EEE6CE05737F21BA7 (TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public DataType type { get; internal set; }
		int32_t L_0 = ___0_value;
		__this->___U3CtypeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void TensorInfo_set_type_mAEBFD7AF7B853389EA292A8EEE6CE05737F21BA7_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2*>(__this + _offset);
	TensorInfo_set_type_mAEBFD7AF7B853389EA292A8EEE6CE05737F21BA7_inline(_thisAdjusted, ___0_value, method);
}
// System.Int32[] TensorFlowLite.Interpreter/TensorInfo::get_shape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* TensorInfo_get_shape_m4C97C5A16EE75923845BA3E6BB5C3D7B0CA1FB4E (TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* __this, const RuntimeMethod* method) 
{
	{
		// public int[] shape { get; internal set; }
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___U3CshapeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* TensorInfo_get_shape_m4C97C5A16EE75923845BA3E6BB5C3D7B0CA1FB4E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2*>(__this + _offset);
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* _returnValue;
	_returnValue = TensorInfo_get_shape_m4C97C5A16EE75923845BA3E6BB5C3D7B0CA1FB4E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TensorFlowLite.Interpreter/TensorInfo::set_shape(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TensorInfo_set_shape_mE54A05F75006295FC1BD708B0EC18EFECD8DA1D2 (TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_value, const RuntimeMethod* method) 
{
	{
		// public int[] shape { get; internal set; }
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_value;
		__this->___U3CshapeU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CshapeU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TensorInfo_set_shape_mE54A05F75006295FC1BD708B0EC18EFECD8DA1D2_AdjustorThunk (RuntimeObject* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_value, const RuntimeMethod* method)
{
	TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2*>(__this + _offset);
	TensorInfo_set_shape_mE54A05F75006295FC1BD708B0EC18EFECD8DA1D2_inline(_thisAdjusted, ___0_value, method);
}
// TensorFlowLite.Interpreter/QuantizationParams TensorFlowLite.Interpreter/TensorInfo::get_quantizationParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A TensorInfo_get_quantizationParams_m5CB7855D0330D43CAC000BBAF1E1A7BF3AB76184 (TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* __this, const RuntimeMethod* method) 
{
	{
		// public QuantizationParams quantizationParams { get; internal set; }
		QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A L_0 = __this->___U3CquantizationParamsU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A TensorInfo_get_quantizationParams_m5CB7855D0330D43CAC000BBAF1E1A7BF3AB76184_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2*>(__this + _offset);
	QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A _returnValue;
	_returnValue = TensorInfo_get_quantizationParams_m5CB7855D0330D43CAC000BBAF1E1A7BF3AB76184_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TensorFlowLite.Interpreter/TensorInfo::set_quantizationParams(TensorFlowLite.Interpreter/QuantizationParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TensorInfo_set_quantizationParams_mD0A6FE7340B5ED7472D4C156CBDB71EE0AEC18D1 (TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* __this, QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A ___0_value, const RuntimeMethod* method) 
{
	{
		// public QuantizationParams quantizationParams { get; internal set; }
		QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A L_0 = ___0_value;
		__this->___U3CquantizationParamsU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void TensorInfo_set_quantizationParams_mD0A6FE7340B5ED7472D4C156CBDB71EE0AEC18D1_AdjustorThunk (RuntimeObject* __this, QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A ___0_value, const RuntimeMethod* method)
{
	TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2*>(__this + _offset);
	TensorInfo_set_quantizationParams_mD0A6FE7340B5ED7472D4C156CBDB71EE0AEC18D1_inline(_thisAdjusted, ___0_value, method);
}
// System.String TensorFlowLite.Interpreter/TensorInfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TensorInfo_ToString_m3E24165D0B758B32E6CAB343B521D04160D3E5B7 (TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataType_t97555CB7D36F2CC789010CCD62EB57E0300296A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_Join_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3954E1690A53FDAE651340E931E00877D887458C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB62A13498B471AB14ED86C3A67F857A110A7E66C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return string.Format("name: {0}, type: {1}, dimensions: {2}, quantizationParams: {3}",
		//   name,
		//   type,
		//   "[" + string.Join(",", shape) + "]",
		//   "{" + quantizationParams + "}");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2;
		L_2 = TensorInfo_get_name_mD236725D81F877DA4F915E63F652A13B8918A009_inline(__this, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		int32_t L_4;
		L_4 = TensorInfo_get_type_m64001E63590AB3363C4D841FE34F8CF28040DE4D_inline(__this, NULL);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(DataType_t97555CB7D36F2CC789010CCD62EB57E0300296A6_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8;
		L_8 = TensorInfo_get_shape_m4C97C5A16EE75923845BA3E6BB5C3D7B0CA1FB4E_inline(__this, NULL);
		String_t* L_9;
		L_9 = String_Join_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3954E1690A53FDAE651340E931E00877D887458C(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, (RuntimeObject*)L_8, String_Join_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3954E1690A53FDAE651340E931E00877D887458C_RuntimeMethod_var);
		String_t* L_10;
		L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, L_9, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A L_12;
		L_12 = TensorInfo_get_quantizationParams_m5CB7855D0330D43CAC000BBAF1E1A7BF3AB76184_inline(__this, NULL);
		V_0 = L_12;
		String_t* L_13;
		L_13 = QuantizationParams_ToString_m61B9CF63766C32677902A7CEB685C06F10C724CD((&V_0), NULL);
		String_t* L_14;
		L_14 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, L_13, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_14);
		String_t* L_15;
		L_15 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralB62A13498B471AB14ED86C3A67F857A110A7E66C, L_11, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C  String_t* TensorInfo_ToString_m3E24165D0B758B32E6CAB343B521D04160D3E5B7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = TensorInfo_ToString_m3E24165D0B758B32E6CAB343B521D04160D3E5B7(_thisAdjusted, method);
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
// System.String TensorFlowLite.Interpreter/QuantizationParams::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QuantizationParams_ToString_m61B9CF63766C32677902A7CEB685C06F10C724CD (QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F828DC5BABCA6B0F32AEE3387CC5A92A7E26DBD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("scale: {0} zeroPoint: {1}", scale, zeroPoint);
		float L_0 = __this->___scale_0;
		float L_1 = L_0;
		RuntimeObject* L_2 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = __this->___zeroPoint_1;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral3F828DC5BABCA6B0F32AEE3387CC5A92A7E26DBD, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  String_t* QuantizationParams_ToString_m61B9CF63766C32677902A7CEB685C06F10C724CD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = QuantizationParams_ToString_m61B9CF63766C32677902A7CEB685C06F10C724CD(_thisAdjusted, method);
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
// Conversion methods for marshalling of: TensorFlowLite.Registration
IL2CPP_EXTERN_C void Registration_t34E0DA460DECEB37E6616D4AB9101BE2A4A01D3C_marshal_pinvoke(const Registration_t34E0DA460DECEB37E6616D4AB9101BE2A4A01D3C& unmarshaled, Registration_t34E0DA460DECEB37E6616D4AB9101BE2A4A01D3C_marshaled_pinvoke& marshaled)
{
	marshaled.___initDelegate_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___initDelegate_0));
	marshaled.___freeDelegate_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___freeDelegate_1));
	marshaled.___prepareDelegate_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___prepareDelegate_2));
	marshaled.___invokeDelegate_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___invokeDelegate_3));
	marshaled.___profilingStringDelegate_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___profilingStringDelegate_4));
	marshaled.___builtinCode_5 = unmarshaled.___builtinCode_5;
	marshaled.___customName_6 = il2cpp_codegen_marshal_string(unmarshaled.___customName_6);
	marshaled.___version_7 = unmarshaled.___version_7;
}
IL2CPP_EXTERN_C void Registration_t34E0DA460DECEB37E6616D4AB9101BE2A4A01D3C_marshal_pinvoke_back(const Registration_t34E0DA460DECEB37E6616D4AB9101BE2A4A01D3C_marshaled_pinvoke& marshaled, Registration_t34E0DA460DECEB37E6616D4AB9101BE2A4A01D3C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FreeDelegate_t640DC802E5E1FE50761346233E93508C0021C2BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitDelegate_t41591186284D5B1C6DC3F2361A600DC37DB31A61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokeDelegate_t1DC0DC15F148850EFC016D0C27EF491CD5E8D1FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrepareDelegate_tBE56FEC322506B3126582F03C4322AB6EA67255A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilingStringDelegate_t91B2B2E825070CDB9A07A9AD58EDC6D51183EB1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___initDelegate_0 = il2cpp_codegen_marshal_function_ptr_to_delegate<InitDelegate_t41591186284D5B1C6DC3F2361A600DC37DB31A61>(marshaled.___initDelegate_0, InitDelegate_t41591186284D5B1C6DC3F2361A600DC37DB31A61_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___initDelegate_0), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<InitDelegate_t41591186284D5B1C6DC3F2361A600DC37DB31A61>(marshaled.___initDelegate_0, InitDelegate_t41591186284D5B1C6DC3F2361A600DC37DB31A61_il2cpp_TypeInfo_var));
	unmarshaled.___freeDelegate_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<FreeDelegate_t640DC802E5E1FE50761346233E93508C0021C2BC>(marshaled.___freeDelegate_1, FreeDelegate_t640DC802E5E1FE50761346233E93508C0021C2BC_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___freeDelegate_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<FreeDelegate_t640DC802E5E1FE50761346233E93508C0021C2BC>(marshaled.___freeDelegate_1, FreeDelegate_t640DC802E5E1FE50761346233E93508C0021C2BC_il2cpp_TypeInfo_var));
	unmarshaled.___prepareDelegate_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<PrepareDelegate_tBE56FEC322506B3126582F03C4322AB6EA67255A>(marshaled.___prepareDelegate_2, PrepareDelegate_tBE56FEC322506B3126582F03C4322AB6EA67255A_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___prepareDelegate_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<PrepareDelegate_tBE56FEC322506B3126582F03C4322AB6EA67255A>(marshaled.___prepareDelegate_2, PrepareDelegate_tBE56FEC322506B3126582F03C4322AB6EA67255A_il2cpp_TypeInfo_var));
	unmarshaled.___invokeDelegate_3 = il2cpp_codegen_marshal_function_ptr_to_delegate<InvokeDelegate_t1DC0DC15F148850EFC016D0C27EF491CD5E8D1FA>(marshaled.___invokeDelegate_3, InvokeDelegate_t1DC0DC15F148850EFC016D0C27EF491CD5E8D1FA_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___invokeDelegate_3), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<InvokeDelegate_t1DC0DC15F148850EFC016D0C27EF491CD5E8D1FA>(marshaled.___invokeDelegate_3, InvokeDelegate_t1DC0DC15F148850EFC016D0C27EF491CD5E8D1FA_il2cpp_TypeInfo_var));
	unmarshaled.___profilingStringDelegate_4 = il2cpp_codegen_marshal_function_ptr_to_delegate<ProfilingStringDelegate_t91B2B2E825070CDB9A07A9AD58EDC6D51183EB1D>(marshaled.___profilingStringDelegate_4, ProfilingStringDelegate_t91B2B2E825070CDB9A07A9AD58EDC6D51183EB1D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___profilingStringDelegate_4), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<ProfilingStringDelegate_t91B2B2E825070CDB9A07A9AD58EDC6D51183EB1D>(marshaled.___profilingStringDelegate_4, ProfilingStringDelegate_t91B2B2E825070CDB9A07A9AD58EDC6D51183EB1D_il2cpp_TypeInfo_var));
	int32_t unmarshaledbuiltinCode_temp_5 = 0;
	unmarshaledbuiltinCode_temp_5 = marshaled.___builtinCode_5;
	unmarshaled.___builtinCode_5 = unmarshaledbuiltinCode_temp_5;
	unmarshaled.___customName_6 = il2cpp_codegen_marshal_string_result(marshaled.___customName_6);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___customName_6), (void*)il2cpp_codegen_marshal_string_result(marshaled.___customName_6));
	int32_t unmarshaledversion_temp_7 = 0;
	unmarshaledversion_temp_7 = marshaled.___version_7;
	unmarshaled.___version_7 = unmarshaledversion_temp_7;
}
// Conversion method for clean up from marshalling of: TensorFlowLite.Registration
IL2CPP_EXTERN_C void Registration_t34E0DA460DECEB37E6616D4AB9101BE2A4A01D3C_marshal_pinvoke_cleanup(Registration_t34E0DA460DECEB37E6616D4AB9101BE2A4A01D3C_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___customName_6);
	marshaled.___customName_6 = NULL;
}
// Conversion methods for marshalling of: TensorFlowLite.Registration
IL2CPP_EXTERN_C void Registration_t34E0DA460DECEB37E6616D4AB9101BE2A4A01D3C_marshal_com(const Registration_t34E0DA460DECEB37E6616D4AB9101BE2A4A01D3C& unmarshaled, Registration_t34E0DA460DECEB37E6616D4AB9101BE2A4A01D3C_marshaled_com& marshaled)
{
	marshaled.___initDelegate_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___initDelegate_0));
	marshaled.___freeDelegate_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___freeDelegate_1));
	marshaled.___prepareDelegate_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___prepareDelegate_2));
	marshaled.___invokeDelegate_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___invokeDelegate_3));
	marshaled.___profilingStringDelegate_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___profilingStringDelegate_4));
	marshaled.___builtinCode_5 = unmarshaled.___builtinCode_5;
	marshaled.___customName_6 = il2cpp_codegen_marshal_bstring(unmarshaled.___customName_6);
	marshaled.___version_7 = unmarshaled.___version_7;
}
IL2CPP_EXTERN_C void Registration_t34E0DA460DECEB37E6616D4AB9101BE2A4A01D3C_marshal_com_back(const Registration_t34E0DA460DECEB37E6616D4AB9101BE2A4A01D3C_marshaled_com& marshaled, Registration_t34E0DA460DECEB37E6616D4AB9101BE2A4A01D3C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FreeDelegate_t640DC802E5E1FE50761346233E93508C0021C2BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitDelegate_t41591186284D5B1C6DC3F2361A600DC37DB31A61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokeDelegate_t1DC0DC15F148850EFC016D0C27EF491CD5E8D1FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrepareDelegate_tBE56FEC322506B3126582F03C4322AB6EA67255A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilingStringDelegate_t91B2B2E825070CDB9A07A9AD58EDC6D51183EB1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___initDelegate_0 = il2cpp_codegen_marshal_function_ptr_to_delegate<InitDelegate_t41591186284D5B1C6DC3F2361A600DC37DB31A61>(marshaled.___initDelegate_0, InitDelegate_t41591186284D5B1C6DC3F2361A600DC37DB31A61_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___initDelegate_0), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<InitDelegate_t41591186284D5B1C6DC3F2361A600DC37DB31A61>(marshaled.___initDelegate_0, InitDelegate_t41591186284D5B1C6DC3F2361A600DC37DB31A61_il2cpp_TypeInfo_var));
	unmarshaled.___freeDelegate_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<FreeDelegate_t640DC802E5E1FE50761346233E93508C0021C2BC>(marshaled.___freeDelegate_1, FreeDelegate_t640DC802E5E1FE50761346233E93508C0021C2BC_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___freeDelegate_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<FreeDelegate_t640DC802E5E1FE50761346233E93508C0021C2BC>(marshaled.___freeDelegate_1, FreeDelegate_t640DC802E5E1FE50761346233E93508C0021C2BC_il2cpp_TypeInfo_var));
	unmarshaled.___prepareDelegate_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<PrepareDelegate_tBE56FEC322506B3126582F03C4322AB6EA67255A>(marshaled.___prepareDelegate_2, PrepareDelegate_tBE56FEC322506B3126582F03C4322AB6EA67255A_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___prepareDelegate_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<PrepareDelegate_tBE56FEC322506B3126582F03C4322AB6EA67255A>(marshaled.___prepareDelegate_2, PrepareDelegate_tBE56FEC322506B3126582F03C4322AB6EA67255A_il2cpp_TypeInfo_var));
	unmarshaled.___invokeDelegate_3 = il2cpp_codegen_marshal_function_ptr_to_delegate<InvokeDelegate_t1DC0DC15F148850EFC016D0C27EF491CD5E8D1FA>(marshaled.___invokeDelegate_3, InvokeDelegate_t1DC0DC15F148850EFC016D0C27EF491CD5E8D1FA_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___invokeDelegate_3), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<InvokeDelegate_t1DC0DC15F148850EFC016D0C27EF491CD5E8D1FA>(marshaled.___invokeDelegate_3, InvokeDelegate_t1DC0DC15F148850EFC016D0C27EF491CD5E8D1FA_il2cpp_TypeInfo_var));
	unmarshaled.___profilingStringDelegate_4 = il2cpp_codegen_marshal_function_ptr_to_delegate<ProfilingStringDelegate_t91B2B2E825070CDB9A07A9AD58EDC6D51183EB1D>(marshaled.___profilingStringDelegate_4, ProfilingStringDelegate_t91B2B2E825070CDB9A07A9AD58EDC6D51183EB1D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___profilingStringDelegate_4), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<ProfilingStringDelegate_t91B2B2E825070CDB9A07A9AD58EDC6D51183EB1D>(marshaled.___profilingStringDelegate_4, ProfilingStringDelegate_t91B2B2E825070CDB9A07A9AD58EDC6D51183EB1D_il2cpp_TypeInfo_var));
	int32_t unmarshaledbuiltinCode_temp_5 = 0;
	unmarshaledbuiltinCode_temp_5 = marshaled.___builtinCode_5;
	unmarshaled.___builtinCode_5 = unmarshaledbuiltinCode_temp_5;
	unmarshaled.___customName_6 = il2cpp_codegen_marshal_bstring_result(marshaled.___customName_6);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___customName_6), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___customName_6));
	int32_t unmarshaledversion_temp_7 = 0;
	unmarshaledversion_temp_7 = marshaled.___version_7;
	unmarshaled.___version_7 = unmarshaledversion_temp_7;
}
// Conversion method for clean up from marshalling of: TensorFlowLite.Registration
IL2CPP_EXTERN_C void Registration_t34E0DA460DECEB37E6616D4AB9101BE2A4A01D3C_marshal_com_cleanup(Registration_t34E0DA460DECEB37E6616D4AB9101BE2A4A01D3C_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___customName_6);
	marshaled.___customName_6 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void InitDelegate_Invoke_mD683C210959A625E12055393C5EB7F0264689CE5_Multicast(InitDelegate_t41591186284D5B1C6DC3F2361A600DC37DB31A61* __this, intptr_t ___0_context, intptr_t ___1_buffer, uint64_t ___2_length, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		InitDelegate_t41591186284D5B1C6DC3F2361A600DC37DB31A61* currentDelegate = reinterpret_cast<InitDelegate_t41591186284D5B1C6DC3F2361A600DC37DB31A61*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, uint64_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_context, ___1_buffer, ___2_length, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void InitDelegate_Invoke_mD683C210959A625E12055393C5EB7F0264689CE5_OpenInst(InitDelegate_t41591186284D5B1C6DC3F2361A600DC37DB31A61* __this, intptr_t ___0_context, intptr_t ___1_buffer, uint64_t ___2_length, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, uint64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_context, ___1_buffer, ___2_length, method);
}
void InitDelegate_Invoke_mD683C210959A625E12055393C5EB7F0264689CE5_OpenStatic(InitDelegate_t41591186284D5B1C6DC3F2361A600DC37DB31A61* __this, intptr_t ___0_context, intptr_t ___1_buffer, uint64_t ___2_length, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, uint64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_context, ___1_buffer, ___2_length, method);
}
void InitDelegate_Invoke_mD683C210959A625E12055393C5EB7F0264689CE5_OpenStaticInvoker(InitDelegate_t41591186284D5B1C6DC3F2361A600DC37DB31A61* __this, intptr_t ___0_context, intptr_t ___1_buffer, uint64_t ___2_length, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, intptr_t, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_context, ___1_buffer, ___2_length);
}
void InitDelegate_Invoke_mD683C210959A625E12055393C5EB7F0264689CE5_ClosedStaticInvoker(InitDelegate_t41591186284D5B1C6DC3F2361A600DC37DB31A61* __this, intptr_t ___0_context, intptr_t ___1_buffer, uint64_t ___2_length, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, intptr_t, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_context, ___1_buffer, ___2_length);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_InitDelegate_t41591186284D5B1C6DC3F2361A600DC37DB31A61 (InitDelegate_t41591186284D5B1C6DC3F2361A600DC37DB31A61* __this, intptr_t ___0_context, intptr_t ___1_buffer, uint64_t ___2_length, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t, uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_context, ___1_buffer, ___2_length);

}
// System.Void TensorFlowLite.Registration/InitDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitDelegate__ctor_mDF99B7FB23D6BCF64E46687B427CBB5B7A0901B5 (InitDelegate_t41591186284D5B1C6DC3F2361A600DC37DB31A61* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&InitDelegate_Invoke_mD683C210959A625E12055393C5EB7F0264689CE5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&InitDelegate_Invoke_mD683C210959A625E12055393C5EB7F0264689CE5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&InitDelegate_Invoke_mD683C210959A625E12055393C5EB7F0264689CE5_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&InitDelegate_Invoke_mD683C210959A625E12055393C5EB7F0264689CE5_Multicast;
}
// System.Void TensorFlowLite.Registration/InitDelegate::Invoke(System.IntPtr,System.IntPtr,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitDelegate_Invoke_mD683C210959A625E12055393C5EB7F0264689CE5 (InitDelegate_t41591186284D5B1C6DC3F2361A600DC37DB31A61* __this, intptr_t ___0_context, intptr_t ___1_buffer, uint64_t ___2_length, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, uint64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_context, ___1_buffer, ___2_length, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TensorFlowLite.Registration/InitDelegate::BeginInvoke(System.IntPtr,System.IntPtr,System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InitDelegate_BeginInvoke_m0F60356C60AC503054019A7B775D5BFDF1223449 (InitDelegate_t41591186284D5B1C6DC3F2361A600DC37DB31A61* __this, intptr_t ___0_context, intptr_t ___1_buffer, uint64_t ___2_length, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_context);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___1_buffer);
	__d_args[2] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___2_length);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void TensorFlowLite.Registration/InitDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitDelegate_EndInvoke_mCCC16386B54727EF278503D6EC6226D916A4092D (InitDelegate_t41591186284D5B1C6DC3F2361A600DC37DB31A61* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void FreeDelegate_Invoke_m4D99A4F301A9BA64255B47EFE35A5F1895C09BB3_Multicast(FreeDelegate_t640DC802E5E1FE50761346233E93508C0021C2BC* __this, intptr_t ___0_context, intptr_t ___1_buffer, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FreeDelegate_t640DC802E5E1FE50761346233E93508C0021C2BC* currentDelegate = reinterpret_cast<FreeDelegate_t640DC802E5E1FE50761346233E93508C0021C2BC*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_context, ___1_buffer, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void FreeDelegate_Invoke_m4D99A4F301A9BA64255B47EFE35A5F1895C09BB3_OpenInst(FreeDelegate_t640DC802E5E1FE50761346233E93508C0021C2BC* __this, intptr_t ___0_context, intptr_t ___1_buffer, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_context, ___1_buffer, method);
}
void FreeDelegate_Invoke_m4D99A4F301A9BA64255B47EFE35A5F1895C09BB3_OpenStatic(FreeDelegate_t640DC802E5E1FE50761346233E93508C0021C2BC* __this, intptr_t ___0_context, intptr_t ___1_buffer, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_context, ___1_buffer, method);
}
void FreeDelegate_Invoke_m4D99A4F301A9BA64255B47EFE35A5F1895C09BB3_OpenStaticInvoker(FreeDelegate_t640DC802E5E1FE50761346233E93508C0021C2BC* __this, intptr_t ___0_context, intptr_t ___1_buffer, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_context, ___1_buffer);
}
void FreeDelegate_Invoke_m4D99A4F301A9BA64255B47EFE35A5F1895C09BB3_ClosedStaticInvoker(FreeDelegate_t640DC802E5E1FE50761346233E93508C0021C2BC* __this, intptr_t ___0_context, intptr_t ___1_buffer, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_context, ___1_buffer);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FreeDelegate_t640DC802E5E1FE50761346233E93508C0021C2BC (FreeDelegate_t640DC802E5E1FE50761346233E93508C0021C2BC* __this, intptr_t ___0_context, intptr_t ___1_buffer, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_context, ___1_buffer);

}
// System.Void TensorFlowLite.Registration/FreeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeDelegate__ctor_mBF5010F96195EA6B2AD64842F5B811060D3AB1C2 (FreeDelegate_t640DC802E5E1FE50761346233E93508C0021C2BC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FreeDelegate_Invoke_m4D99A4F301A9BA64255B47EFE35A5F1895C09BB3_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&FreeDelegate_Invoke_m4D99A4F301A9BA64255B47EFE35A5F1895C09BB3_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FreeDelegate_Invoke_m4D99A4F301A9BA64255B47EFE35A5F1895C09BB3_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&FreeDelegate_Invoke_m4D99A4F301A9BA64255B47EFE35A5F1895C09BB3_Multicast;
}
// System.Void TensorFlowLite.Registration/FreeDelegate::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeDelegate_Invoke_m4D99A4F301A9BA64255B47EFE35A5F1895C09BB3 (FreeDelegate_t640DC802E5E1FE50761346233E93508C0021C2BC* __this, intptr_t ___0_context, intptr_t ___1_buffer, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_context, ___1_buffer, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TensorFlowLite.Registration/FreeDelegate::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FreeDelegate_BeginInvoke_m36067551E2B9B6AD45F066AC621946BD0C67C50B (FreeDelegate_t640DC802E5E1FE50761346233E93508C0021C2BC* __this, intptr_t ___0_context, intptr_t ___1_buffer, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_context);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___1_buffer);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void TensorFlowLite.Registration/FreeDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeDelegate_EndInvoke_mA959AC7BF3A2D512289FB296B13BDC8CB1621E6D (FreeDelegate_t640DC802E5E1FE50761346233E93508C0021C2BC* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t PrepareDelegate_Invoke_m521CD35846E4FC34CD2D2938B7161241D8EBCE9A_Multicast(PrepareDelegate_tBE56FEC322506B3126582F03C4322AB6EA67255A* __this, intptr_t ___0_context, intptr_t ___1_node, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PrepareDelegate_tBE56FEC322506B3126582F03C4322AB6EA67255A* currentDelegate = reinterpret_cast<PrepareDelegate_tBE56FEC322506B3126582F03C4322AB6EA67255A*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_context, ___1_node, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t PrepareDelegate_Invoke_m521CD35846E4FC34CD2D2938B7161241D8EBCE9A_OpenInst(PrepareDelegate_tBE56FEC322506B3126582F03C4322AB6EA67255A* __this, intptr_t ___0_context, intptr_t ___1_node, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_context, ___1_node, method);
}
int32_t PrepareDelegate_Invoke_m521CD35846E4FC34CD2D2938B7161241D8EBCE9A_OpenStatic(PrepareDelegate_tBE56FEC322506B3126582F03C4322AB6EA67255A* __this, intptr_t ___0_context, intptr_t ___1_node, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_context, ___1_node, method);
}
int32_t PrepareDelegate_Invoke_m521CD35846E4FC34CD2D2938B7161241D8EBCE9A_OpenStaticInvoker(PrepareDelegate_tBE56FEC322506B3126582F03C4322AB6EA67255A* __this, intptr_t ___0_context, intptr_t ___1_node, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_context, ___1_node);
}
int32_t PrepareDelegate_Invoke_m521CD35846E4FC34CD2D2938B7161241D8EBCE9A_ClosedStaticInvoker(PrepareDelegate_tBE56FEC322506B3126582F03C4322AB6EA67255A* __this, intptr_t ___0_context, intptr_t ___1_node, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_context, ___1_node);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_PrepareDelegate_tBE56FEC322506B3126582F03C4322AB6EA67255A (PrepareDelegate_tBE56FEC322506B3126582F03C4322AB6EA67255A* __this, intptr_t ___0_context, intptr_t ___1_node, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_context, ___1_node);

	return returnValue;
}
// System.Void TensorFlowLite.Registration/PrepareDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrepareDelegate__ctor_mE3C072B1ED084AAC22DFD75E2D7EF9F72C44BB08 (PrepareDelegate_tBE56FEC322506B3126582F03C4322AB6EA67255A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PrepareDelegate_Invoke_m521CD35846E4FC34CD2D2938B7161241D8EBCE9A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PrepareDelegate_Invoke_m521CD35846E4FC34CD2D2938B7161241D8EBCE9A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PrepareDelegate_Invoke_m521CD35846E4FC34CD2D2938B7161241D8EBCE9A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&PrepareDelegate_Invoke_m521CD35846E4FC34CD2D2938B7161241D8EBCE9A_Multicast;
}
// TensorFlowLite.Interpreter/Status TensorFlowLite.Registration/PrepareDelegate::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrepareDelegate_Invoke_m521CD35846E4FC34CD2D2938B7161241D8EBCE9A (PrepareDelegate_tBE56FEC322506B3126582F03C4322AB6EA67255A* __this, intptr_t ___0_context, intptr_t ___1_node, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_context, ___1_node, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TensorFlowLite.Registration/PrepareDelegate::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PrepareDelegate_BeginInvoke_m8FB03A09830AD62C5A70A06F056928202883DCC7 (PrepareDelegate_tBE56FEC322506B3126582F03C4322AB6EA67255A* __this, intptr_t ___0_context, intptr_t ___1_node, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_context);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___1_node);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// TensorFlowLite.Interpreter/Status TensorFlowLite.Registration/PrepareDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrepareDelegate_EndInvoke_m51AE865A73B0C3AF4E57224D77AE8CC4286E08ED (PrepareDelegate_tBE56FEC322506B3126582F03C4322AB6EA67255A* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t InvokeDelegate_Invoke_mE3255D0EA2328183C8A2109D26C0C75FAE48AED5_Multicast(InvokeDelegate_t1DC0DC15F148850EFC016D0C27EF491CD5E8D1FA* __this, intptr_t ___0_context, intptr_t ___1_node, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		InvokeDelegate_t1DC0DC15F148850EFC016D0C27EF491CD5E8D1FA* currentDelegate = reinterpret_cast<InvokeDelegate_t1DC0DC15F148850EFC016D0C27EF491CD5E8D1FA*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_context, ___1_node, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t InvokeDelegate_Invoke_mE3255D0EA2328183C8A2109D26C0C75FAE48AED5_OpenInst(InvokeDelegate_t1DC0DC15F148850EFC016D0C27EF491CD5E8D1FA* __this, intptr_t ___0_context, intptr_t ___1_node, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_context, ___1_node, method);
}
int32_t InvokeDelegate_Invoke_mE3255D0EA2328183C8A2109D26C0C75FAE48AED5_OpenStatic(InvokeDelegate_t1DC0DC15F148850EFC016D0C27EF491CD5E8D1FA* __this, intptr_t ___0_context, intptr_t ___1_node, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_context, ___1_node, method);
}
int32_t InvokeDelegate_Invoke_mE3255D0EA2328183C8A2109D26C0C75FAE48AED5_OpenStaticInvoker(InvokeDelegate_t1DC0DC15F148850EFC016D0C27EF491CD5E8D1FA* __this, intptr_t ___0_context, intptr_t ___1_node, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_context, ___1_node);
}
int32_t InvokeDelegate_Invoke_mE3255D0EA2328183C8A2109D26C0C75FAE48AED5_ClosedStaticInvoker(InvokeDelegate_t1DC0DC15F148850EFC016D0C27EF491CD5E8D1FA* __this, intptr_t ___0_context, intptr_t ___1_node, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_context, ___1_node);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_InvokeDelegate_t1DC0DC15F148850EFC016D0C27EF491CD5E8D1FA (InvokeDelegate_t1DC0DC15F148850EFC016D0C27EF491CD5E8D1FA* __this, intptr_t ___0_context, intptr_t ___1_node, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_context, ___1_node);

	return returnValue;
}
// System.Void TensorFlowLite.Registration/InvokeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokeDelegate__ctor_m7E09C51ADF7EA647BE51A4331DECB9AEF6374B0F (InvokeDelegate_t1DC0DC15F148850EFC016D0C27EF491CD5E8D1FA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&InvokeDelegate_Invoke_mE3255D0EA2328183C8A2109D26C0C75FAE48AED5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&InvokeDelegate_Invoke_mE3255D0EA2328183C8A2109D26C0C75FAE48AED5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&InvokeDelegate_Invoke_mE3255D0EA2328183C8A2109D26C0C75FAE48AED5_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&InvokeDelegate_Invoke_mE3255D0EA2328183C8A2109D26C0C75FAE48AED5_Multicast;
}
// TensorFlowLite.Interpreter/Status TensorFlowLite.Registration/InvokeDelegate::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InvokeDelegate_Invoke_mE3255D0EA2328183C8A2109D26C0C75FAE48AED5 (InvokeDelegate_t1DC0DC15F148850EFC016D0C27EF491CD5E8D1FA* __this, intptr_t ___0_context, intptr_t ___1_node, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_context, ___1_node, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TensorFlowLite.Registration/InvokeDelegate::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InvokeDelegate_BeginInvoke_m83A51DD36B7628DD0FE3FE6BF87DDBC57CD479F1 (InvokeDelegate_t1DC0DC15F148850EFC016D0C27EF491CD5E8D1FA* __this, intptr_t ___0_context, intptr_t ___1_node, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_context);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___1_node);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// TensorFlowLite.Interpreter/Status TensorFlowLite.Registration/InvokeDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InvokeDelegate_EndInvoke_m1B08FAC973903E7324078E5B8DFEF8B5B19FD584 (InvokeDelegate_t1DC0DC15F148850EFC016D0C27EF491CD5E8D1FA* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
String_t* ProfilingStringDelegate_Invoke_mB07D67E196E5854A86097A0ADECCF50FFA503E83_Multicast(ProfilingStringDelegate_t91B2B2E825070CDB9A07A9AD58EDC6D51183EB1D* __this, intptr_t ___0_context, intptr_t ___1_node, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	String_t* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ProfilingStringDelegate_t91B2B2E825070CDB9A07A9AD58EDC6D51183EB1D* currentDelegate = reinterpret_cast<ProfilingStringDelegate_t91B2B2E825070CDB9A07A9AD58EDC6D51183EB1D*>(delegatesToInvoke[i]);
		typedef String_t* (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_context, ___1_node, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
String_t* ProfilingStringDelegate_Invoke_mB07D67E196E5854A86097A0ADECCF50FFA503E83_OpenInst(ProfilingStringDelegate_t91B2B2E825070CDB9A07A9AD58EDC6D51183EB1D* __this, intptr_t ___0_context, intptr_t ___1_node, const RuntimeMethod* method)
{
	typedef String_t* (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_context, ___1_node, method);
}
String_t* ProfilingStringDelegate_Invoke_mB07D67E196E5854A86097A0ADECCF50FFA503E83_OpenStatic(ProfilingStringDelegate_t91B2B2E825070CDB9A07A9AD58EDC6D51183EB1D* __this, intptr_t ___0_context, intptr_t ___1_node, const RuntimeMethod* method)
{
	typedef String_t* (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_context, ___1_node, method);
}
String_t* ProfilingStringDelegate_Invoke_mB07D67E196E5854A86097A0ADECCF50FFA503E83_OpenStaticInvoker(ProfilingStringDelegate_t91B2B2E825070CDB9A07A9AD58EDC6D51183EB1D* __this, intptr_t ___0_context, intptr_t ___1_node, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< String_t*, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_context, ___1_node);
}
String_t* ProfilingStringDelegate_Invoke_mB07D67E196E5854A86097A0ADECCF50FFA503E83_ClosedStaticInvoker(ProfilingStringDelegate_t91B2B2E825070CDB9A07A9AD58EDC6D51183EB1D* __this, intptr_t ___0_context, intptr_t ___1_node, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< String_t*, RuntimeObject*, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_context, ___1_node);
}
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_ProfilingStringDelegate_t91B2B2E825070CDB9A07A9AD58EDC6D51183EB1D (ProfilingStringDelegate_t91B2B2E825070CDB9A07A9AD58EDC6D51183EB1D* __this, intptr_t ___0_context, intptr_t ___1_node, const RuntimeMethod* method)
{
	typedef char* (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	char* returnValue = il2cppPInvokeFunc(___0_context, ___1_node);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void TensorFlowLite.Registration/ProfilingStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilingStringDelegate__ctor_mAE6AA49CC4FCCB9642A4847BE80C3A3A5EC901A9 (ProfilingStringDelegate_t91B2B2E825070CDB9A07A9AD58EDC6D51183EB1D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ProfilingStringDelegate_Invoke_mB07D67E196E5854A86097A0ADECCF50FFA503E83_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ProfilingStringDelegate_Invoke_mB07D67E196E5854A86097A0ADECCF50FFA503E83_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ProfilingStringDelegate_Invoke_mB07D67E196E5854A86097A0ADECCF50FFA503E83_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ProfilingStringDelegate_Invoke_mB07D67E196E5854A86097A0ADECCF50FFA503E83_Multicast;
}
// System.String TensorFlowLite.Registration/ProfilingStringDelegate::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProfilingStringDelegate_Invoke_mB07D67E196E5854A86097A0ADECCF50FFA503E83 (ProfilingStringDelegate_t91B2B2E825070CDB9A07A9AD58EDC6D51183EB1D* __this, intptr_t ___0_context, intptr_t ___1_node, const RuntimeMethod* method) 
{
	typedef String_t* (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_context, ___1_node, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TensorFlowLite.Registration/ProfilingStringDelegate::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProfilingStringDelegate_BeginInvoke_m572929170C5124E1E1B4F40F8BE750A42BCB07DA (ProfilingStringDelegate_t91B2B2E825070CDB9A07A9AD58EDC6D51183EB1D* __this, intptr_t ___0_context, intptr_t ___1_node, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_context);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___1_node);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.String TensorFlowLite.Registration/ProfilingStringDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProfilingStringDelegate_EndInvoke_mD455B2052114C5C6D9BCD3571DDCA44B90658AB5 (ProfilingStringDelegate_t91B2B2E825070CDB9A07A9AD58EDC6D51183EB1D* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (String_t*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TensorFlowLite.InterpreterExperimental::AddCustomOp(TensorFlowLite.Interpreter,System.String,TensorFlowLite.Registration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterExperimental_AddCustomOp_m7A13E42A0A032ED2A6204956C736074D35274B93 (Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* ___0_interpreter, String_t* ___1_name, Registration_t34E0DA460DECEB37E6616D4AB9101BE2A4A01D3C ___2_registration, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InterpreterExperimental_AddCustomOp_m7A13E42A0A032ED2A6204956C736074D35274B93_RuntimeMethod_var)));
	}
}
// System.Void TensorFlowLite.InterpreterExperimental::SetAllowBufferHandleOutput(TensorFlowLite.Interpreter,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterExperimental_SetAllowBufferHandleOutput_m83DE2727D81918C90F57B3D1D65BEB8C95F25380 (Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* ___0_interpreter, bool ___1_allowBufferHandleOutput, const RuntimeMethod* method) 
{
	{
		// TfLiteSetAllowBufferHandleOutput(interpreter.InterpreterPointer, allowBufferHandleOutput);
		Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* L_0 = ___0_interpreter;
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = Interpreter_get_InterpreterPointer_m42E045A97C9B3CFCD8200E66ECDF46CC43ECAC57_inline(L_0, NULL);
		bool L_2 = ___1_allowBufferHandleOutput;
		InterpreterExperimental_TfLiteSetAllowBufferHandleOutput_m1C09C845EB92A3E72AF17A01A4A709F76BB95CE9(L_1, L_2, NULL);
		// }
		return;
	}
}
// TensorFlowLite.Interpreter/Status TensorFlowLite.InterpreterExperimental::ModifyGraphWithDelegate(TensorFlowLite.Interpreter,TensorFlowLite.IGpuDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InterpreterExperimental_ModifyGraphWithDelegate_m5071993B42E7A2B78F8FA36BD46F4A55BB186431 (Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* ___0_interpreter, RuntimeObject* ___1_gpuDelegate, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGpuDelegate_t487B38F8FEE6A5774DAEB2CD49BE3F92FC945546_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return TfLiteInterpreterModifyGraphWithDelegate(interpreter.InterpreterPointer, gpuDelegate.Delegate);
		Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* L_0 = ___0_interpreter;
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = Interpreter_get_InterpreterPointer_m42E045A97C9B3CFCD8200E66ECDF46CC43ECAC57_inline(L_0, NULL);
		RuntimeObject* L_2 = ___1_gpuDelegate;
		NullCheck(L_2);
		intptr_t L_3;
		L_3 = InterfaceFuncInvoker0< intptr_t >::Invoke(0 /* System.IntPtr TensorFlowLite.IGpuDelegate::get_Delegate() */, IGpuDelegate_t487B38F8FEE6A5774DAEB2CD49BE3F92FC945546_il2cpp_TypeInfo_var, L_2);
		int32_t L_4;
		L_4 = InterpreterExperimental_TfLiteInterpreterModifyGraphWithDelegate_m5B60806AAF9E452D38EA863F8FF3F0671D3CD8AB(L_1, L_3, NULL);
		return L_4;
	}
}
// System.Int32 TensorFlowLite.InterpreterExperimental::GetInputTensorIndex(TensorFlowLite.Interpreter,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InterpreterExperimental_GetInputTensorIndex_mB1BDFCA9AA8F67945CF796E3DB41D7EE6F9B0E70 (Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* ___0_interpreter, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		// return TfLiteInterpreterGetInputTensorIndex(interpreter.InterpreterPointer, index);
		Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* L_0 = ___0_interpreter;
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = Interpreter_get_InterpreterPointer_m42E045A97C9B3CFCD8200E66ECDF46CC43ECAC57_inline(L_0, NULL);
		int32_t L_2 = ___1_index;
		int32_t L_3;
		L_3 = InterpreterExperimental_TfLiteInterpreterGetInputTensorIndex_m68B1C8F59F0B4E45A16BC993953596D239464D07(L_1, L_2, NULL);
		return L_3;
	}
}
// System.Int32 TensorFlowLite.InterpreterExperimental::GetOutputTensorIndex(TensorFlowLite.Interpreter,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InterpreterExperimental_GetOutputTensorIndex_m91FA4F174B8D03C8383EE72E7BA15DD47B1E4AAA (Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* ___0_interpreter, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		// return TfLiteInterpreterGetOutputTensorIndex(interpreter.InterpreterPointer, index);
		Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* L_0 = ___0_interpreter;
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = Interpreter_get_InterpreterPointer_m42E045A97C9B3CFCD8200E66ECDF46CC43ECAC57_inline(L_0, NULL);
		int32_t L_2 = ___1_index;
		int32_t L_3;
		L_3 = InterpreterExperimental_TfLiteInterpreterGetOutputTensorIndex_mEB5647EAACE6A172D158E97E926225A16FE7AAD2(L_1, L_2, NULL);
		return L_3;
	}
}
// TensorFlowLite.Interpreter/Status TensorFlowLite.InterpreterExperimental::TfLiteInterpreterResetVariableTensors(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InterpreterExperimental_TfLiteInterpreterResetVariableTensors_m5C3891AE58B25937815CF2766D515C58938B4F5F (intptr_t ___0_interpreter, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterResetVariableTensors", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteInterpreterResetVariableTensors)(___0_interpreter);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_interpreter);
	#endif

	return returnValue;
}
// System.Void TensorFlowLite.InterpreterExperimental::TfLiteInterpreterOptionsAddBuiltinOp(System.IntPtr,TensorFlowLite.BuiltinOperator,System.IntPtr,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterExperimental_TfLiteInterpreterOptionsAddBuiltinOp_m5EC2E7E55C831F3427851491B31C24B6A54FED57 (intptr_t ___0_options, int32_t ___1_op, intptr_t ___2_registration, uint32_t ___3_min_version, uint32_t ___4_max_version, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, intptr_t, uint32_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(intptr_t) + sizeof(uint32_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterOptionsAddBuiltinOp", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(TfLiteInterpreterOptionsAddBuiltinOp)(___0_options, ___1_op, ___2_registration, ___3_min_version, ___4_max_version);
	#else
	il2cppPInvokeFunc(___0_options, ___1_op, ___2_registration, ___3_min_version, ___4_max_version);
	#endif

}
// System.Void TensorFlowLite.InterpreterExperimental::TfLiteInterpreterOptionsAddCustomOp(System.IntPtr,System.String,System.IntPtr,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterExperimental_TfLiteInterpreterOptionsAddCustomOp_mE464D9C1E39942A43D278FE783C0C5ED2AF73326 (intptr_t ___0_options, String_t* ___1_name, intptr_t ___2_registration, uint32_t ___3_min_version, uint32_t ___4_max_version, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, intptr_t, uint32_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*) + sizeof(intptr_t) + sizeof(uint32_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterOptionsAddCustomOp", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_name' to native representation
	char* ____1_name_marshaled = NULL;
	____1_name_marshaled = il2cpp_codegen_marshal_string(___1_name);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(TfLiteInterpreterOptionsAddCustomOp)(___0_options, ____1_name_marshaled, ___2_registration, ___3_min_version, ___4_max_version);
	#else
	il2cppPInvokeFunc(___0_options, ____1_name_marshaled, ___2_registration, ___3_min_version, ___4_max_version);
	#endif

	// Marshaling cleanup of parameter '___1_name' native representation
	il2cpp_codegen_marshal_free(____1_name_marshaled);
	____1_name_marshaled = NULL;

}
// System.Void TensorFlowLite.InterpreterExperimental::TfLiteInterpreterOptionsSetUseNNAPI(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterExperimental_TfLiteInterpreterOptionsSetUseNNAPI_m0059E0680C44CB316AE06B639C518504582ABC1E (intptr_t ___0_options, bool ___1_enable, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterOptionsSetUseNNAPI", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(TfLiteInterpreterOptionsSetUseNNAPI)(___0_options, static_cast<int32_t>(___1_enable));
	#else
	il2cppPInvokeFunc(___0_options, static_cast<int32_t>(___1_enable));
	#endif

}
// System.Void TensorFlowLite.InterpreterExperimental::TfLiteSetAllowBufferHandleOutput(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterExperimental_TfLiteSetAllowBufferHandleOutput_m1C09C845EB92A3E72AF17A01A4A709F76BB95CE9 (intptr_t ___0_interpreter, bool ___1_allow_buffer_handle_output, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteSetAllowBufferHandleOutput", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(TfLiteSetAllowBufferHandleOutput)(___0_interpreter, static_cast<int32_t>(___1_allow_buffer_handle_output));
	#else
	il2cppPInvokeFunc(___0_interpreter, static_cast<int32_t>(___1_allow_buffer_handle_output));
	#endif

}
// TensorFlowLite.Interpreter/Status TensorFlowLite.InterpreterExperimental::TfLiteInterpreterModifyGraphWithDelegate(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InterpreterExperimental_TfLiteInterpreterModifyGraphWithDelegate_m5B60806AAF9E452D38EA863F8FF3F0671D3CD8AB (intptr_t ___0_interpreter, intptr_t ___1_gpuDelegate, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterModifyGraphWithDelegate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteInterpreterModifyGraphWithDelegate)(___0_interpreter, ___1_gpuDelegate);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_interpreter, ___1_gpuDelegate);
	#endif

	return returnValue;
}
// System.Int32 TensorFlowLite.InterpreterExperimental::TfLiteInterpreterGetInputTensorIndex(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InterpreterExperimental_TfLiteInterpreterGetInputTensorIndex_m68B1C8F59F0B4E45A16BC993953596D239464D07 (intptr_t ___0_interpreter, int32_t ___1_input_index, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterGetInputTensorIndex", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteInterpreterGetInputTensorIndex)(___0_interpreter, ___1_input_index);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_interpreter, ___1_input_index);
	#endif

	return returnValue;
}
// System.Int32 TensorFlowLite.InterpreterExperimental::TfLiteInterpreterGetOutputTensorIndex(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InterpreterExperimental_TfLiteInterpreterGetOutputTensorIndex_mEB5647EAACE6A172D158E97E926225A16FE7AAD2 (intptr_t ___0_interpreter, int32_t ___1_output_index, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterGetOutputTensorIndex", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteInterpreterGetOutputTensorIndex)(___0_interpreter, ___1_output_index);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_interpreter, ___1_output_index);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 TensorFlowLite.InterpreterOptions::get_threads()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InterpreterOptions_get_threads_m7665BE39BE134458328A7E31D25D1EC2107A6D24 (InterpreterOptions_t9E95AA774C31B5ACAE144C947B861C026677E487* __this, const RuntimeMethod* method) 
{
	{
		// get => _threads;
		int32_t L_0 = __this->____threads_2;
		return L_0;
	}
}
// System.Void TensorFlowLite.InterpreterOptions::set_threads(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_set_threads_m6FE497B58348B1F178C1ACAE2AFEED8D577BC8EE (InterpreterOptions_t9E95AA774C31B5ACAE144C947B861C026677E487* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// _threads = value;
		int32_t L_0 = ___0_value;
		__this->____threads_2 = L_0;
		// TfLiteInterpreterOptionsSetNumThreads(nativePtr, value);
		intptr_t L_1 = __this->___nativePtr_0;
		int32_t L_2 = ___0_value;
		InterpreterOptions_TfLiteInterpreterOptionsSetNumThreads_m2274CA3716CB9355CFE46A386876785E35CEFE33(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Boolean TensorFlowLite.InterpreterOptions::get_useNNAPI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterpreterOptions_get_useNNAPI_m64C23D202049FAEE6258F5291EC02EB2F1B0CC26 (InterpreterOptions_t9E95AA774C31B5ACAE144C947B861C026677E487* __this, const RuntimeMethod* method) 
{
	{
		// get => _useNNAPI;
		bool L_0 = __this->____useNNAPI_3;
		return L_0;
	}
}
// System.Void TensorFlowLite.InterpreterOptions::set_useNNAPI(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_set_useNNAPI_mA2F5EDB5B08B1539EFADB544D0023D92D7470FE4 (InterpreterOptions_t9E95AA774C31B5ACAE144C947B861C026677E487* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// _useNNAPI = value;
		bool L_0 = ___0_value;
		__this->____useNNAPI_3 = L_0;
		// InterpreterExperimental.TfLiteInterpreterOptionsSetUseNNAPI(nativePtr, value);
		intptr_t L_1 = __this->___nativePtr_0;
		bool L_2 = ___0_value;
		InterpreterExperimental_TfLiteInterpreterOptionsSetUseNNAPI_m0059E0680C44CB316AE06B639C518504582ABC1E(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.InterpreterOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions__ctor_mEEC2148897A34DBBC2445A8C70B7F42E8579AA75 (InterpreterOptions_t9E95AA774C31B5ACAE144C947B861C026677E487* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m497AAECBCA3426096BFBE418E39A380FDDF57603_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3F263848BA2695073FE2245A8F675993522CADAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public InterpreterOptions()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// nativePtr = TfLiteInterpreterOptionsCreate();
		intptr_t L_0;
		L_0 = InterpreterOptions_TfLiteInterpreterOptionsCreate_mD2CAA158F9F1BE9B42F8199E9D882B5E51508E14(NULL);
		__this->___nativePtr_0 = L_0;
		// delegates = new List<IGpuDelegate>();
		List_1_t3F263848BA2695073FE2245A8F675993522CADAB* L_1 = (List_1_t3F263848BA2695073FE2245A8F675993522CADAB*)il2cpp_codegen_object_new(List_1_t3F263848BA2695073FE2245A8F675993522CADAB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m497AAECBCA3426096BFBE418E39A380FDDF57603(L_1, List_1__ctor_m497AAECBCA3426096BFBE418E39A380FDDF57603_RuntimeMethod_var);
		__this->___delegates_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___delegates_1), (void*)L_1);
		// ErrorReporter.ConfigureReporter(nativePtr);
		intptr_t L_2 = __this->___nativePtr_0;
		ErrorReporter_ConfigureReporter_m1A6EEB9748D9C5BD59856E178A84F7B394D8F58B(L_2, NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.InterpreterOptions::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_Dispose_mA62A6677F5A57F3E9F4FEB2C2E3EECA581241FC9 (InterpreterOptions_t9E95AA774C31B5ACAE144C947B861C026677E487* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB42C83BE2C203BF82BF64BA5C04EBCF842F54E8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2DAA66FBAABE8C96458883F25C5F7419ACA68ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE1052649733DDD0047A38B9E404AF7462357343A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF3E6FBEB14CC3657C9C40D8C9D03BA3DF6EBB11F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7D5DD2C7907575CF7CE952D0A77FDDE9BB900090_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t9F662B1A6D503111950AF04F2905140AD59AF375 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (nativePtr != IntPtr.Zero)
		intptr_t L_0 = __this->___nativePtr_0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// TfLiteInterpreterOptionsDelete(nativePtr);
		intptr_t L_3 = __this->___nativePtr_0;
		InterpreterOptions_TfLiteInterpreterOptionsDelete_m24A5BD39697518ABF5157557D920771B9B078004(L_3, NULL);
	}

IL_001d:
	{
		// foreach (var gpuDelegate in delegates)
		List_1_t3F263848BA2695073FE2245A8F675993522CADAB* L_4 = __this->___delegates_1;
		NullCheck(L_4);
		Enumerator_t9F662B1A6D503111950AF04F2905140AD59AF375 L_5;
		L_5 = List_1_GetEnumerator_m7D5DD2C7907575CF7CE952D0A77FDDE9BB900090(L_4, List_1_GetEnumerator_m7D5DD2C7907575CF7CE952D0A77FDDE9BB900090_RuntimeMethod_var);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0042:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mB42C83BE2C203BF82BF64BA5C04EBCF842F54E8D((&V_0), Enumerator_Dispose_mB42C83BE2C203BF82BF64BA5C04EBCF842F54E8D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0037_1;
			}

IL_002b_1:
			{
				// foreach (var gpuDelegate in delegates)
				RuntimeObject* L_6;
				L_6 = Enumerator_get_Current_mE1052649733DDD0047A38B9E404AF7462357343A_inline((&V_0), Enumerator_get_Current_mE1052649733DDD0047A38B9E404AF7462357343A_RuntimeMethod_var);
				// gpuDelegate.Dispose();
				NullCheck(L_6);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
			}

IL_0037_1:
			{
				// foreach (var gpuDelegate in delegates)
				bool L_7;
				L_7 = Enumerator_MoveNext_m2DAA66FBAABE8C96458883F25C5F7419ACA68ED4((&V_0), Enumerator_MoveNext_m2DAA66FBAABE8C96458883F25C5F7419ACA68ED4_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_0050;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0050:
	{
		// delegates.Clear();
		List_1_t3F263848BA2695073FE2245A8F675993522CADAB* L_8 = __this->___delegates_1;
		NullCheck(L_8);
		List_1_Clear_mF3E6FBEB14CC3657C9C40D8C9D03BA3DF6EBB11F_inline(L_8, List_1_Clear_mF3E6FBEB14CC3657C9C40D8C9D03BA3DF6EBB11F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TensorFlowLite.InterpreterOptions::AddGpuDelegate(TensorFlowLite.IGpuDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_AddGpuDelegate_m416FD63EC44C8A875A1FABAA581E4432A2E986BA (InterpreterOptions_t9E95AA774C31B5ACAE144C947B861C026677E487* __this, RuntimeObject* ___0_gpuDelegate, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGpuDelegate_t487B38F8FEE6A5774DAEB2CD49BE3F92FC945546_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5A46C6159F42FF5AE644E17C4C1D6A97D50F06D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gpuDelegate == null) return;
		RuntimeObject* L_0 = ___0_gpuDelegate;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// if (gpuDelegate == null) return;
		return;
	}

IL_0004:
	{
		// TfLiteInterpreterOptionsAddDelegate(nativePtr, gpuDelegate.Delegate);
		intptr_t L_1 = __this->___nativePtr_0;
		RuntimeObject* L_2 = ___0_gpuDelegate;
		NullCheck(L_2);
		intptr_t L_3;
		L_3 = InterfaceFuncInvoker0< intptr_t >::Invoke(0 /* System.IntPtr TensorFlowLite.IGpuDelegate::get_Delegate() */, IGpuDelegate_t487B38F8FEE6A5774DAEB2CD49BE3F92FC945546_il2cpp_TypeInfo_var, L_2);
		InterpreterOptions_TfLiteInterpreterOptionsAddDelegate_m53BAA2376CF63C72B3E972AE6D6E268BAED73B0A(L_1, L_3, NULL);
		// delegates.Add(gpuDelegate);
		List_1_t3F263848BA2695073FE2245A8F675993522CADAB* L_4 = __this->___delegates_1;
		RuntimeObject* L_5 = ___0_gpuDelegate;
		NullCheck(L_4);
		List_1_Add_m5A46C6159F42FF5AE644E17C4C1D6A97D50F06D4_inline(L_4, L_5, List_1_Add_m5A46C6159F42FF5AE644E17C4C1D6A97D50F06D4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TensorFlowLite.InterpreterOptions::AddGpuDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_AddGpuDelegate_m5F69BB683C1FAEF3AA35B87263BE16562C634BE2 (InterpreterOptions_t9E95AA774C31B5ACAE144C947B861C026677E487* __this, const RuntimeMethod* method) 
{
	{
		// AddGpuDelegate(CreateGpuDelegate());
		RuntimeObject* L_0;
		L_0 = InterpreterOptions_CreateGpuDelegate_m08777486461979E0B19831F0B40079CC70300A91(NULL);
		InterpreterOptions_AddGpuDelegate_m416FD63EC44C8A875A1FABAA581E4432A2E986BA(__this, L_0, NULL);
		// }
		return;
	}
}
// TensorFlowLite.IGpuDelegate TensorFlowLite.InterpreterOptions::CreateGpuDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InterpreterOptions_CreateGpuDelegate_m08777486461979E0B19831F0B40079CC70300A91 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GpuDelegateV2_t58AC666626083BE71F779E388B319E3D8690090D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new GpuDelegateV2();
		GpuDelegateV2_t58AC666626083BE71F779E388B319E3D8690090D* L_0 = (GpuDelegateV2_t58AC666626083BE71F779E388B319E3D8690090D*)il2cpp_codegen_object_new(GpuDelegateV2_t58AC666626083BE71F779E388B319E3D8690090D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GpuDelegateV2__ctor_mADAE239EFBE9EFD809C8BC0B782A9246F35CF2BF(L_0, NULL);
		return L_0;
	}
}
// System.IntPtr TensorFlowLite.InterpreterOptions::TfLiteInterpreterOptionsCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t InterpreterOptions_TfLiteInterpreterOptionsCreate_mD2CAA158F9F1BE9B42F8199E9D882B5E51508E14 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterOptionsCreate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteInterpreterOptionsCreate)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void TensorFlowLite.InterpreterOptions::TfLiteInterpreterOptionsDelete(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_TfLiteInterpreterOptionsDelete_m24A5BD39697518ABF5157557D920771B9B078004 (intptr_t ___0_options, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterOptionsDelete", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(TfLiteInterpreterOptionsDelete)(___0_options);
	#else
	il2cppPInvokeFunc(___0_options);
	#endif

}
// System.Void TensorFlowLite.InterpreterOptions::TfLiteInterpreterOptionsSetNumThreads(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_TfLiteInterpreterOptionsSetNumThreads_m2274CA3716CB9355CFE46A386876785E35CEFE33 (intptr_t ___0_options, int32_t ___1_num_threads, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterOptionsSetNumThreads", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(TfLiteInterpreterOptionsSetNumThreads)(___0_options, ___1_num_threads);
	#else
	il2cppPInvokeFunc(___0_options, ___1_num_threads);
	#endif

}
// System.Void TensorFlowLite.InterpreterOptions::TfLiteInterpreterOptionsAddDelegate(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_TfLiteInterpreterOptionsAddDelegate_m53BAA2376CF63C72B3E972AE6D6E268BAED73B0A (intptr_t ___0_options, intptr_t ___1__delegate, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterOptionsAddDelegate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(TfLiteInterpreterOptionsAddDelegate)(___0_options, ___1__delegate);
	#else
	il2cppPInvokeFunc(___0_options, ___1__delegate);
	#endif

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ErrorReporterDelegate_Invoke_mA4A8BDCE70C213D918E4909ECAB1E36EB2B9EE85_Multicast(ErrorReporterDelegate_t9FEC315AEE9802E32AFC132C78CDD0F162983DB7* __this, intptr_t ___0_userData, String_t* ___1_format, intptr_t ___2_argsPtrs, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ErrorReporterDelegate_t9FEC315AEE9802E32AFC132C78CDD0F162983DB7* currentDelegate = reinterpret_cast<ErrorReporterDelegate_t9FEC315AEE9802E32AFC132C78CDD0F162983DB7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, String_t*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_userData, ___1_format, ___2_argsPtrs, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ErrorReporterDelegate_Invoke_mA4A8BDCE70C213D918E4909ECAB1E36EB2B9EE85_OpenInst(ErrorReporterDelegate_t9FEC315AEE9802E32AFC132C78CDD0F162983DB7* __this, intptr_t ___0_userData, String_t* ___1_format, intptr_t ___2_argsPtrs, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, String_t*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_userData, ___1_format, ___2_argsPtrs, method);
}
void ErrorReporterDelegate_Invoke_mA4A8BDCE70C213D918E4909ECAB1E36EB2B9EE85_OpenStatic(ErrorReporterDelegate_t9FEC315AEE9802E32AFC132C78CDD0F162983DB7* __this, intptr_t ___0_userData, String_t* ___1_format, intptr_t ___2_argsPtrs, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, String_t*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_userData, ___1_format, ___2_argsPtrs, method);
}
void ErrorReporterDelegate_Invoke_mA4A8BDCE70C213D918E4909ECAB1E36EB2B9EE85_OpenStaticInvoker(ErrorReporterDelegate_t9FEC315AEE9802E32AFC132C78CDD0F162983DB7* __this, intptr_t ___0_userData, String_t* ___1_format, intptr_t ___2_argsPtrs, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, String_t*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_userData, ___1_format, ___2_argsPtrs);
}
void ErrorReporterDelegate_Invoke_mA4A8BDCE70C213D918E4909ECAB1E36EB2B9EE85_ClosedStaticInvoker(ErrorReporterDelegate_t9FEC315AEE9802E32AFC132C78CDD0F162983DB7* __this, intptr_t ___0_userData, String_t* ___1_format, intptr_t ___2_argsPtrs, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, String_t*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_userData, ___1_format, ___2_argsPtrs);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ErrorReporterDelegate_t9FEC315AEE9802E32AFC132C78CDD0F162983DB7 (ErrorReporterDelegate_t9FEC315AEE9802E32AFC132C78CDD0F162983DB7* __this, intptr_t ___0_userData, String_t* ___1_format, intptr_t ___2_argsPtrs, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, char*, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___1_format' to native representation
	char* ____1_format_marshaled = NULL;
	____1_format_marshaled = il2cpp_codegen_marshal_string(___1_format);

	// Native function invocation
	il2cppPInvokeFunc(___0_userData, ____1_format_marshaled, ___2_argsPtrs);

	// Marshaling cleanup of parameter '___1_format' native representation
	il2cpp_codegen_marshal_free(____1_format_marshaled);
	____1_format_marshaled = NULL;

}
// System.Void TensorFlowLite.InterpreterOptions/ErrorReporterDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReporterDelegate__ctor_mE1483D633D4CCA1FB1E916FCCA87F55EEC0ABED0 (ErrorReporterDelegate_t9FEC315AEE9802E32AFC132C78CDD0F162983DB7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ErrorReporterDelegate_Invoke_mA4A8BDCE70C213D918E4909ECAB1E36EB2B9EE85_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ErrorReporterDelegate_Invoke_mA4A8BDCE70C213D918E4909ECAB1E36EB2B9EE85_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ErrorReporterDelegate_Invoke_mA4A8BDCE70C213D918E4909ECAB1E36EB2B9EE85_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ErrorReporterDelegate_Invoke_mA4A8BDCE70C213D918E4909ECAB1E36EB2B9EE85_Multicast;
}
// System.Void TensorFlowLite.InterpreterOptions/ErrorReporterDelegate::Invoke(System.IntPtr,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReporterDelegate_Invoke_mA4A8BDCE70C213D918E4909ECAB1E36EB2B9EE85 (ErrorReporterDelegate_t9FEC315AEE9802E32AFC132C78CDD0F162983DB7* __this, intptr_t ___0_userData, String_t* ___1_format, intptr_t ___2_argsPtrs, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, String_t*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_userData, ___1_format, ___2_argsPtrs, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TensorFlowLite.InterpreterOptions/ErrorReporterDelegate::BeginInvoke(System.IntPtr,System.String,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ErrorReporterDelegate_BeginInvoke_m8440EA3F1A285EA0C61896F14936EA5DC945FFC5 (ErrorReporterDelegate_t9FEC315AEE9802E32AFC132C78CDD0F162983DB7* __this, intptr_t ___0_userData, String_t* ___1_format, intptr_t ___2_argsPtrs, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_userData);
	__d_args[1] = ___1_format;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___2_argsPtrs);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void TensorFlowLite.InterpreterOptions/ErrorReporterDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReporterDelegate_EndInvoke_mCD4ED0DAC345A3943C77105FABB288E6F25D889E (ErrorReporterDelegate_t9FEC315AEE9802E32AFC132C78CDD0F162983DB7* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GlDelegate_set_Delegate_mA56F334CDB77A50EDD0DCA1D1BB2BBFE614AC431_inline (GlDelegate_tA63F41A18E8E7216656C1608713B534AFC023351* __this, intptr_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TfLiteDelegate Delegate { get; private set; }
		intptr_t L_0 = ___0_value;
		__this->___U3CDelegateU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GlDelegate_get_Delegate_mCA0ECD848DC9D9473774F55528BDE29780E3EE97_inline (GlDelegate_tA63F41A18E8E7216656C1608713B534AFC023351* __this, const RuntimeMethod* method) 
{
	{
		// public TfLiteDelegate Delegate { get; private set; }
		intptr_t L_0 = __this->___U3CDelegateU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GpuDelegateV2_set_Delegate_m36871EDE0D91B085A31969BA028A3B15BD1670AF_inline (GpuDelegateV2_t58AC666626083BE71F779E388B319E3D8690090D* __this, intptr_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TfLiteDelegate Delegate { get; private set; }
		intptr_t L_0 = ___0_value;
		__this->___U3CDelegateU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GpuDelegateV2_get_Delegate_m1B04DD78607E6851556396A330162083DC12CEFA_inline (GpuDelegateV2_t58AC666626083BE71F779E388B319E3D8690090D* __this, const RuntimeMethod* method) 
{
	{
		// public TfLiteDelegate Delegate { get; private set; }
		intptr_t L_0 = __this->___U3CDelegateU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TensorInfo_set_name_m8AE89B0FD55BA8BFC2EFE44E28F3B70C756BC260_inline (TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string name { get; internal set; }
		String_t* L_0 = ___0_value;
		__this->___U3CnameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TensorInfo_set_type_mAEBFD7AF7B853389EA292A8EEE6CE05737F21BA7_inline (TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public DataType type { get; internal set; }
		int32_t L_0 = ___0_value;
		__this->___U3CtypeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TensorInfo_set_shape_mE54A05F75006295FC1BD708B0EC18EFECD8DA1D2_inline (TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_value, const RuntimeMethod* method) 
{
	{
		// public int[] shape { get; internal set; }
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_value;
		__this->___U3CshapeU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CshapeU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TensorInfo_set_quantizationParams_mD0A6FE7340B5ED7472D4C156CBDB71EE0AEC18D1_inline (TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* __this, QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A ___0_value, const RuntimeMethod* method) 
{
	{
		// public QuantizationParams quantizationParams { get; internal set; }
		QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A L_0 = ___0_value;
		__this->___U3CquantizationParamsU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TensorInfo_get_name_mD236725D81F877DA4F915E63F652A13B8918A009_inline (TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* __this, const RuntimeMethod* method) 
{
	{
		// public string name { get; internal set; }
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TensorInfo_get_type_m64001E63590AB3363C4D841FE34F8CF28040DE4D_inline (TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* __this, const RuntimeMethod* method) 
{
	{
		// public DataType type { get; internal set; }
		int32_t L_0 = __this->___U3CtypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* TensorInfo_get_shape_m4C97C5A16EE75923845BA3E6BB5C3D7B0CA1FB4E_inline (TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* __this, const RuntimeMethod* method) 
{
	{
		// public int[] shape { get; internal set; }
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___U3CshapeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A TensorInfo_get_quantizationParams_m5CB7855D0330D43CAC000BBAF1E1A7BF3AB76184_inline (TensorInfo_t47206160F4EA17A8FECB53A4D5DA6F469D4404E2* __this, const RuntimeMethod* method) 
{
	{
		// public QuantizationParams quantizationParams { get; internal set; }
		QuantizationParams_t1289C9CF6B60874BC10C124C3A5411847152831A L_0 = __this->___U3CquantizationParamsU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t Interpreter_get_InterpreterPointer_m42E045A97C9B3CFCD8200E66ECDF46CC43ECAC57_inline (Interpreter_tF194547712938C5ACA8DBDDDF5B992F04D92D520* __this, const RuntimeMethod* method) 
{
	{
		// internal TfLiteInterpreter InterpreterPointer => interpreter;
		intptr_t L_0 = __this->___interpreter_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
