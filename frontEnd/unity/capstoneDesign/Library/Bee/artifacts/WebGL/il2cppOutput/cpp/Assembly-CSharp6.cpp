#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<System.Exception>
struct Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps>
struct Dictionary_2_tCF7516CE51B39B9C8416CEB844633D6AC735739D;
// System.Func`2<UniGLTF.Zip.CentralDirectoryFileHeader,System.String>
struct Func_2_t44B3D462DDC8ED1C56511253ED4DB7535263B7E8;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Transform>
struct IEnumerable_1_t4980F9E076B96A4E697C2E09671204DD70B5573F;
// System.Collections.Generic.IEnumerator`1<DepthFirstScheduler.ISchedulable>
struct IEnumerator_1_t42E839B1CC555BA075867EF148D708C0C905331F;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform>
struct IEnumerator_1_t7A84A9E8C72BB62928150241D1BDAEF0137B5092;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// DepthFirstScheduler.IFunctor`1<DepthFirstScheduler.Unit>
struct IFunctor_1_t84636209DD6E7C68B243D163028ECBC0B35B1831;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UniGLTF.ShaderPropExporter.ShaderProps>
struct KeyCollection_t24B272AD3F2FE27C0BDA4583D9F35DDA4ED4A42C;
// System.Collections.Generic.List`1<DepthFirstScheduler.ISchedulable>
struct List_1_t196746B26A14525E7D44FA8DE0F092D2FAF239F7;
// System.Collections.Generic.List`1<DepthFirstScheduler.TaskChain>
struct List_1_t866FDA26C8D8C5456AB2EEEE34B52D41F473C2CC;
// DepthFirstScheduler.LockQueue`1<System.Object>
struct LockQueue_1_tBFB64D777A50ECC7F2EB4DB7DBBBECDD245E5276;
// DepthFirstScheduler.LockQueue`1<DepthFirstScheduler.TaskChain>
struct LockQueue_1_tCE05F62CFDC18D642CBBC99CDAAAF1665D0F8DD3;
// DepthFirstScheduler.MonitorQueue`1<System.Object>
struct MonitorQueue_1_t77842F522FC86ED85F242176289D66D4793D6275;
// DepthFirstScheduler.MonitorQueue`1<DepthFirstScheduler.TaskChain>
struct MonitorQueue_1_t11ECF6EA2905CD822FBD4CBC675A42E9B2ABB156;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.Generic.Queue`1<DepthFirstScheduler.TaskChain>
struct Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8;
// DepthFirstScheduler.Schedulable`1<DepthFirstScheduler.Unit>
struct Schedulable_1_t39CFE1E7639D7FCAF745B12B9A4A2CA62B24BAE5;
// System.Collections.Generic.Stack`1<System.Collections.IEnumerator>
struct Stack_1_tCCF0E342E1E3E67D3A5E29186184FCC97134D9AB;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UniGLTF.ShaderPropExporter.ShaderProps>
struct ValueCollection_t4496DB31D1E9D68C2A2FBD98DBA6916C2DA25995;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UniGLTF.ShaderPropExporter.ShaderProps>[]
struct EntryU5BU5D_t145CF1479EA7091117B6799AEE35A911D01CF6BE;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Collections.IEnumerator[]
struct IEnumeratorU5BU5D_tC12A5EDF69B5926D22A47F36F800785CA737530A;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UniGLTF.ShaderPropExporter.ShaderProperty[]
struct ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UniGLTF.ShaderPropExporter.SupportedShader[]
struct SupportedShaderU5BU5D_t9AF4D633766F24E2E986D043F44B96099E2AEC4C;
// DepthFirstScheduler.TaskChain[]
struct TaskChainU5BU5D_tDBF740B69B58504115165CE95B27ADFDB216BE34;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UniGLTF.Zip.CentralDirectoryFileHeader
struct CentralDirectoryFileHeader_tBB88937CDB5641D59FD5FEDECE80EFEA44098B5C;
// MToon.ColorDefinition
struct ColorDefinition_tA6E1131529870216A0C7BA37ED74404978D96AF7;
// UniGLTF.Zip.CommonHeader
struct CommonHeader_t0F077CE9938E6817F7FAEE515E3CDC0FA6078D37;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// MToon.EmissionDefinition
struct EmissionDefinition_tA20BD3838E10D38EA8098B9C296E9F8630D8B9B3;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// DepthFirstScheduler.ISchedulable
struct ISchedulable_t194CCA63841FD033D1793B14465788FAEEDAAC8B;
// DepthFirstScheduler.IScheduler
struct IScheduler_tCC0C7771CE96DAB145ABAE916D194A40667DB881;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// MToon.LightingDefinition
struct LightingDefinition_tE7A44337B9F6CDEE30749E9437C4EE0B84ABCAC8;
// MToon.LightingInfluenceDefinition
struct LightingInfluenceDefinition_t489DF60FCA3352B6F3E6F65B8AFB1A1BCAB0FDC4;
// MToon.LitAndShadeMixingDefinition
struct LitAndShadeMixingDefinition_t89688F4B755AFB2FE2DAACCA0BB1CDD9B71FBA2E;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// MToon.MToonDefinition
struct MToonDefinition_t903F9801D7CB352188C70F7084F85190A15F6D15;
// DepthFirstScheduler.MainThreadDispatcher
struct MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98;
// MToon.MatCapDefinition
struct MatCapDefinition_t9BC823FEF27F7F0B5A90748E0B88DC37D3A8A5FE;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// MToon.MetaDefinition
struct MetaDefinition_t75DEF3D69E2B8E1AA665EB08E28AC8274770EF60;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.MulticastDelegate
struct MulticastDelegate_t;
// DepthFirstScheduler.NoParentException
struct NoParentException_tF1C398500C8702967982FF14FAB171D300C0F5F5;
// MToon.NormalDefinition
struct NormalDefinition_tD5D8120BEBA6577B6BBFAA094727456900D1461D;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// MToon.OutlineDefinition
struct OutlineDefinition_tF5668C9080267CF32544D7914FE991B5B8AEE25A;
// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9;
// UniGLTF.ShaderPropExporter.PreExportShaderAttribute
struct PreExportShaderAttribute_t8D9809E8CFB4A4557430A5755A66061EB87269F5;
// UniGLTF.ShaderPropExporter.PreExportShadersAttribute
struct PreExportShadersAttribute_tFAC060D43264C6113FE055289B240F2FFC03B885;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// MToon.RenderQueueDefinition
struct RenderQueueDefinition_tA4022C2F52B0C6329338A156A9A19DDF19FFE295;
// MToon.RenderingDefinition
struct RenderingDefinition_t3B13BE451A3151F1CB86BB750250234D87012D65;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UniGLTF.ShaderPropExporter.ShaderProps
struct ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD;
// System.String
struct String_t;
// DepthFirstScheduler.TaskChain
struct TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// MToon.TextureUvCoordsDefinition
struct TextureUvCoordsDefinition_t2FA4034BC371D1D03DB0A84E29B635580081C46A;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// DepthFirstScheduler.MainThreadDispatcher/<Ancestors>d__1
struct U3CAncestorsU3Ed__1_t23FAA5756285F020086D340BCE1FD7307DD60E68;
// DepthFirstScheduler.Schedulable/<>c
struct U3CU3Ec_tAC22565E0BAAE2BD63D233D23526464A6E4D839B;
// DepthFirstScheduler.Scheduler/CurrentThreadScheduler
struct CurrentThreadScheduler_t615B9E89AE1B5FAB26CC3B9170FF6D0A8C5C32C9;
// DepthFirstScheduler.Scheduler/StepScheduler
struct StepScheduler_t09FEF8CFAB003524F34FE965F7138CB1E1C2FF28;
// DepthFirstScheduler.Scheduler/ThreadPoolScheduler
struct ThreadPoolScheduler_t8734547779F29DE0E1ED11F3278962B10DEE8E40;
// DepthFirstScheduler.Scheduler/ThreadScheduler
struct ThreadScheduler_t537C2059D25B13EEC4806EBD8FA3F1CBE7705C50;
// UniGLTF.Zip.ZipArchiveStorage/<>c
struct U3CU3Ec_tC180EB410EC7150613555B972A05831681D48B84;
// UniGLTF.Zip.ZipArchiveStorage/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t7CCEA93A22341A2E02A2833F4E3815D2C90EBEE3;
// DepthFirstScheduler.Scheduler/ThreadPoolScheduler/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tD53261C6B2302E54F50300401F30CEC7EA501B95;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CurrentThreadScheduler_t615B9E89AE1B5FAB26CC3B9170FF6D0A8C5C32C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tCF7516CE51B39B9C8416CEB844633D6AC735739D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t4980F9E076B96A4E697C2E09671204DD70B5573F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t8566A34A42AB821EF7B0DB0557B450103DA1B975_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t42E839B1CC555BA075867EF148D708C0C905331F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t7A84A9E8C72BB62928150241D1BDAEF0137B5092_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISchedulable_t194CCA63841FD033D1793B14465788FAEEDAAC8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IScheduler_tCC0C7771CE96DAB145ABAE916D194A40667DB881_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LockQueue_1_tCE05F62CFDC18D642CBBC99CDAAAF1665D0F8DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonitorQueue_1_t11ECF6EA2905CD822FBD4CBC675A42E9B2ABB156_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PreShaderPropExporter_t33693D745BAEF8D0D7281EB7F8A08627BB61A5D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderMode_t3E9D7E486E29D29C79CCCBAADA7B4DC85D54F763_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Schedulable_1_t39CFE1E7639D7FCAF745B12B9A4A2CA62B24BAE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_tCCF0E342E1E3E67D3A5E29186184FCC97134D9AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StepScheduler_t09FEF8CFAB003524F34FE965F7138CB1E1C2FF28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportedShaderU5BU5D_t9AF4D633766F24E2E986D043F44B96099E2AEC4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadPoolScheduler_t8734547779F29DE0E1ED11F3278962B10DEE8E40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadScheduler_t537C2059D25B13EEC4806EBD8FA3F1CBE7705C50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAncestorsU3Ed__1_t23FAA5756285F020086D340BCE1FD7307DD60E68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_tD53261C6B2302E54F50300401F30CEC7EA501B95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tAC22565E0BAAE2BD63D233D23526464A6E4D839B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC180EB410EC7150613555B972A05831681D48B84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral05CAACB43AE60632DFAEDD8AFD98A0C279C2A0F7;
IL2CPP_EXTERN_C String_t* _stringLiteral0ADDF9B1EA1757764D349DC4FC1A57BFF8657444;
IL2CPP_EXTERN_C String_t* _stringLiteral1232F1D4055DAD90B2422B989CED7F4FE55A98C9;
IL2CPP_EXTERN_C String_t* _stringLiteral190F8E7A2EE5F0ECB5F3B99A48BCF468A59D1526;
IL2CPP_EXTERN_C String_t* _stringLiteral19B50A6FEDC2668C350DF299DDC83E1A4873D7C9;
IL2CPP_EXTERN_C String_t* _stringLiteral1CF7FFDB31D8970F37EDC72C88111329205F9669;
IL2CPP_EXTERN_C String_t* _stringLiteral1DFC8F10738E456123C54F4B530A50ABDDD1ED90;
IL2CPP_EXTERN_C String_t* _stringLiteral2458AF57ED05EE1E1B606F99869605D7F2D9A77D;
IL2CPP_EXTERN_C String_t* _stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4;
IL2CPP_EXTERN_C String_t* _stringLiteral2C5DEF38C3D3689AB6F719BCC283EB0DFE8BCFDE;
IL2CPP_EXTERN_C String_t* _stringLiteral30E5B38553E51419924E8EC9DF17949D13973236;
IL2CPP_EXTERN_C String_t* _stringLiteral3223D004C9379F2B3083B62944F7924A92190F90;
IL2CPP_EXTERN_C String_t* _stringLiteral326129114EB43E5A03AD980A3709D55FE7934916;
IL2CPP_EXTERN_C String_t* _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F;
IL2CPP_EXTERN_C String_t* _stringLiteral38B8C8C0BD25C5963BB0276F350E52AE4F3288D3;
IL2CPP_EXTERN_C String_t* _stringLiteral3AB3801D5903DC14A1F0FABE51F8060D38C36BCE;
IL2CPP_EXTERN_C String_t* _stringLiteral3D93A89666F831FB9324883A9347EA29365E69DF;
IL2CPP_EXTERN_C String_t* _stringLiteral40BFB095782D36D1B276A40A276C76911EF9318F;
IL2CPP_EXTERN_C String_t* _stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral4FC108C6FF0A706B87BCEE07E7584DC45FD16B4B;
IL2CPP_EXTERN_C String_t* _stringLiteral51E77BE760A981E17113C4BA376BD85874B58A45;
IL2CPP_EXTERN_C String_t* _stringLiteral5235BC8A11AC79193A67E99975CCDBC94A0FA351;
IL2CPP_EXTERN_C String_t* _stringLiteral52CBE4A5A42509939BB9DB58A4B9A2C9BBA81C1C;
IL2CPP_EXTERN_C String_t* _stringLiteral58D77E1ECF3579ADA2EDE01E1640D1E1CA4A37E8;
IL2CPP_EXTERN_C String_t* _stringLiteral59B259A263D1796F7617C20534034F94A19001FE;
IL2CPP_EXTERN_C String_t* _stringLiteral5CA1EA9A1B125DBC8227444B69329446BAE7DBE6;
IL2CPP_EXTERN_C String_t* _stringLiteral5EAA19E6B3D79923759AC0F3C611403170C03B32;
IL2CPP_EXTERN_C String_t* _stringLiteral60BECFD9EBE7638FECA5779A69100169C8558400;
IL2CPP_EXTERN_C String_t* _stringLiteral61304A4D1A7F7C3C856F975F251F1F79885933C8;
IL2CPP_EXTERN_C String_t* _stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946;
IL2CPP_EXTERN_C String_t* _stringLiteral650165F35FFDCCFC9A135C7EF035B30377DD7229;
IL2CPP_EXTERN_C String_t* _stringLiteral6745B6DA0001B3F7ED67EF8B643A443FE62C8E6E;
IL2CPP_EXTERN_C String_t* _stringLiteral684F9F5743C3D1DE5AF358333F20040FBA298574;
IL2CPP_EXTERN_C String_t* _stringLiteral6B53D108B835E0DFF5B2DCB4F56BA198075BD11E;
IL2CPP_EXTERN_C String_t* _stringLiteral6E08E58AD13E5769D3AFD33FB33C17E306122492;
IL2CPP_EXTERN_C String_t* _stringLiteral709A3080636DE7247244D1C92D73863AB8827B81;
IL2CPP_EXTERN_C String_t* _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A;
IL2CPP_EXTERN_C String_t* _stringLiteral7508FBFA90989A889507F7A38F1F0BFFB25CE421;
IL2CPP_EXTERN_C String_t* _stringLiteral7D61FA9D9BE7581D7E2EE28C775ABE0D4B8C3D69;
IL2CPP_EXTERN_C String_t* _stringLiteral7F71C428308BBDDAA9B87455C2B687167C3F78A5;
IL2CPP_EXTERN_C String_t* _stringLiteral7F94A8E8715AB28B4A3A63F016AFABE058C94FF0;
IL2CPP_EXTERN_C String_t* _stringLiteral81D9EDA345C5B40F47464B7A3FDD94805B6F86E2;
IL2CPP_EXTERN_C String_t* _stringLiteral915923FF23DAC30B2D70516B4F5D56256E060201;
IL2CPP_EXTERN_C String_t* _stringLiteral93FF374E13B6170A58BCF7F129DE52B26AE7DFDC;
IL2CPP_EXTERN_C String_t* _stringLiteral9BF9FDA83C54B3E4D921C2ABBCF673E2E2E37FBA;
IL2CPP_EXTERN_C String_t* _stringLiteral9D069221DE352372E43A85A2868AE71709AFBC3F;
IL2CPP_EXTERN_C String_t* _stringLiteral9E489994D4C2D1FB6036C4A637D4B30F1BD119D5;
IL2CPP_EXTERN_C String_t* _stringLiteralA2A3DF99788A73C2F0FE7267B988915F72D2C1F1;
IL2CPP_EXTERN_C String_t* _stringLiteralA69C83831B4753F9D2B4F65C16372EA1A6F0482F;
IL2CPP_EXTERN_C String_t* _stringLiteralAC2205CB3AEC457605CBAE18F9FEEECC950BD105;
IL2CPP_EXTERN_C String_t* _stringLiteralAC5B3304C047D60B4E3EC2809E3CE3FA62191A79;
IL2CPP_EXTERN_C String_t* _stringLiteralADC17917ABE91ECE45DB8FC83D1E5AE5D561978E;
IL2CPP_EXTERN_C String_t* _stringLiteralAF174CA7E7AF4D5F1E9BBC2BBDAE31F0162179E9;
IL2CPP_EXTERN_C String_t* _stringLiteralB1E5015D41347EB006BAB57463C4BE8648DEB555;
IL2CPP_EXTERN_C String_t* _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C;
IL2CPP_EXTERN_C String_t* _stringLiteralB32F137D7398FFB53E5E7ACA2526882ADE8473A6;
IL2CPP_EXTERN_C String_t* _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466;
IL2CPP_EXTERN_C String_t* _stringLiteralB9AD78CBFE96EFE3227B6F467DA563E5F6136C6B;
IL2CPP_EXTERN_C String_t* _stringLiteralBA742A186906F0F8C7697B6B0E504781DA1064D7;
IL2CPP_EXTERN_C String_t* _stringLiteralBDF9B173DAF73E26798C34AD51EE9193221B59C0;
IL2CPP_EXTERN_C String_t* _stringLiteralBE5A164234C945013CE7F044C3EE99C37CD7930D;
IL2CPP_EXTERN_C String_t* _stringLiteralC1FD6731DCC40BEB999541837AEACC56DC18E0CF;
IL2CPP_EXTERN_C String_t* _stringLiteralC8E54DC0584021FDD77DA842B94FD97F28B5A628;
IL2CPP_EXTERN_C String_t* _stringLiteralCB06293E3070D888955542383617A31852FFF8DF;
IL2CPP_EXTERN_C String_t* _stringLiteralCBCD3D866AF896F9B010A0FEE7F961DBC91A08C5;
IL2CPP_EXTERN_C String_t* _stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4;
IL2CPP_EXTERN_C String_t* _stringLiteralD0059090FADDF02EED2889EC3EF70CE420AAA5C9;
IL2CPP_EXTERN_C String_t* _stringLiteralD1418B66EFD4F2E84F8EE977170F5ACBF35CE35C;
IL2CPP_EXTERN_C String_t* _stringLiteralD5EE7E97308629AA70B2119EC70AFD628CDF576C;
IL2CPP_EXTERN_C String_t* _stringLiteralDB2408F5DB54B0FC4ADB755C918A8347F536AE27;
IL2CPP_EXTERN_C String_t* _stringLiteralDBA7C831DC50E7E9885CC3A53919297A72C39B76;
IL2CPP_EXTERN_C String_t* _stringLiteralDC36021300B277DA11A9B13D4303D3176FF7F2D7;
IL2CPP_EXTERN_C String_t* _stringLiteralDF17A9BFA8A9CE193E1BCDFA78953986FDA621F1;
IL2CPP_EXTERN_C String_t* _stringLiteralE147FC8F66BE740F2F8674E00CBC75BC21B73934;
IL2CPP_EXTERN_C String_t* _stringLiteralE9A9803A2F865A6AE859153F70A100ACC2DD5E97;
IL2CPP_EXTERN_C String_t* _stringLiteralEA079692DED56FA02201B916BF75CCB06628ED3B;
IL2CPP_EXTERN_C String_t* _stringLiteralEF62ADAC6B7778E129C2559B757B0C7B2E692DB8;
IL2CPP_EXTERN_C String_t* _stringLiteralF0D9104AB624D4BF63F12ED168216DC1948D19B8;
IL2CPP_EXTERN_C String_t* _stringLiteralF318A9CBF6133558944579D6309707D3FF4760E1;
IL2CPP_EXTERN_C String_t* _stringLiteralF42B6EC895E3DC70F8183E72033DF05F5B5CF6D2;
IL2CPP_EXTERN_C String_t* _stringLiteralF77AA42AA2620E7B5DEE6C75E8A77962B0B6B2CF;
IL2CPP_EXTERN_C String_t* _stringLiteralF9778B0981FF8E88A4B0D9949087837966B685DD;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m48A495425B604D5E9111229379AA45DF27806631_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m4C31AFC006F2A82A3464C2C5F620AEE8809B47A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mF1E5D7383BFC26A82A10D42650A4EE167D9B091B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_m8F45553149E91028219F7668D4F67884FD85A42C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m3E0AEB8F3C3953ABFEC50FE77BF3B32552C80D22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m0E88FF128ADD89043FB8F078C432663C7BCE4648_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LockQueue_1_Dequeue_mE23BAB21EB8E60D344C4EBB6328EC2BFEE0D88F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LockQueue_1_Enqueue_mBBCB1B5296B7BDBDD18A1A563FFC7FF72E4BF4F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LockQueue_1__ctor_m80909F2E9A93C89C72EA19AC912D3872DE57315D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LockQueue_1_get_Count_m9F21C87AB63B6016741A7804C1F866A27A31C208_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MainThreadDispatcher_Initialize_mBAAEA37815AF6D4E085E8333902B4579DD5B4FB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonitorQueue_1_Dequeue_m9A1928078C3EE24DA5995577D9DDA6C6C0FB2C76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonitorQueue_1_Enqueue_m65726E4D19E75E941D12D075E048B4132C93A2EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonitorQueue_1__ctor_m8D4A54E98E00952B71337C0D00E9FD624CA88C67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisMainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_m6AFBBD0DD586BCF389DA02049AB68C032886EB77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_m18C60A40150AD3FF1A62930EAF781C3DEB24C5B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m4C723782C81649A08962D7008843BC15F441E2A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mBFE01B20CC307A78B88F025DC869ACFBEFD243F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mC3598FD68D21F0C4CAF515483D5ACE7C1805366A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mCBF6326C20CE3A227279FE057EB64EFB34E2EF44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Schedulable_1_AddTask_mE3CA6CFC745099F44BCD78A2E1D3E1F163AA9982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Schedulable_1__ctor_mD54FB9D87D1209B0C6D06EF9029AE585180D63B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_mB478B84AB35FBA331FF13DBABB9BE194C7186881_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mC456C42E8578B42F4B25CDB65F6B4E79D45CE19B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m239291822C02AB16175907B3016054EC207D43FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_mF218547BE4368C5557FF1F40E220917E694CAFF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_m20D4C6A9E28611C814D9D5305229E5FB3C501803_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadScheduler_Worker_m2424C326115E4D3F61EBC8829B414DDABE9D73CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAncestorsU3Ed__1_System_Collections_IEnumerator_Reset_m9011C7EEAF2E1CB55110D1B17C9D6D4E263167C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateU3Eb__0_0_m550A71BB2040F6A646452F29640F1B16093D5740_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CEnqueueU3Eb__0_m37E6E2477D04E7862546D94F8B5BD65650EF675C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utils_GetMToonParametersFromMaterial_mA85D42B611B1865713B23E71A55ABB1D12C9BCA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utils_GetRenderQueueRequirement_m81B91FE79C44B97B825D4EFA58DBD08910B79544_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utils_SetMToonParametersToMaterial_m63EDA836B012DD57BAF971E4A2178C3C68E8179A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* PreExportShaderAttribute_t8D9809E8CFB4A4557430A5755A66061EB87269F5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PreShaderPropExporter_t33693D745BAEF8D0D7281EB7F8A08627BB61A5D7_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7;
struct ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88;
struct SupportedShaderU5BU5D_t9AF4D633766F24E2E986D043F44B96099E2AEC4C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps>
struct Dictionary_2_tCF7516CE51B39B9C8416CEB844633D6AC735739D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t145CF1479EA7091117B6799AEE35A911D01CF6BE* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t24B272AD3F2FE27C0BDA4583D9F35DDA4ED4A42C* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t4496DB31D1E9D68C2A2FBD98DBA6916C2DA25995* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// DepthFirstScheduler.LockQueue`1<DepthFirstScheduler.TaskChain>
struct LockQueue_1_tCE05F62CFDC18D642CBBC99CDAAAF1665D0F8DD3  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> DepthFirstScheduler.LockQueue`1::m_queue
	List_1_t866FDA26C8D8C5456AB2EEEE34B52D41F473C2CC* ___m_queue_0;
};

// DepthFirstScheduler.MonitorQueue`1<DepthFirstScheduler.TaskChain>
struct MonitorQueue_1_t11ECF6EA2905CD822FBD4CBC675A42E9B2ABB156  : public RuntimeObject
{
	// System.Int32 DepthFirstScheduler.MonitorQueue`1::_count
	int32_t ____count_0;
	// System.Collections.Generic.Queue`1<T> DepthFirstScheduler.MonitorQueue`1::_queue
	Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* ____queue_1;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<DepthFirstScheduler.TaskChain>
struct Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	TaskChainU5BU5D_tDBF740B69B58504115165CE95B27ADFDB216BE34* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// DepthFirstScheduler.Schedulable`1<DepthFirstScheduler.Unit>
struct Schedulable_1_t39CFE1E7639D7FCAF745B12B9A4A2CA62B24BAE5  : public RuntimeObject
{
	// System.Collections.Generic.List`1<DepthFirstScheduler.ISchedulable> DepthFirstScheduler.Schedulable`1::m_children
	List_1_t196746B26A14525E7D44FA8DE0F092D2FAF239F7* ___m_children_0;
	// DepthFirstScheduler.ISchedulable DepthFirstScheduler.Schedulable`1::<Parent>k__BackingField
	RuntimeObject* ___U3CParentU3Ek__BackingField_1;
	// DepthFirstScheduler.IScheduler DepthFirstScheduler.Schedulable`1::<Schedulder>k__BackingField
	RuntimeObject* ___U3CSchedulderU3Ek__BackingField_2;
	// DepthFirstScheduler.IFunctor`1<T> DepthFirstScheduler.Schedulable`1::<Func>k__BackingField
	RuntimeObject* ___U3CFuncU3Ek__BackingField_3;
};

// System.Collections.Generic.Stack`1<System.Collections.IEnumerator>
struct Stack_1_tCCF0E342E1E3E67D3A5E29186184FCC97134D9AB  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	IEnumeratorU5BU5D_tC12A5EDF69B5926D22A47F36F800785CA737530A* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// UniGLTF.Zip.CommonHeader
struct CommonHeader_t0F077CE9938E6817F7FAEE515E3CDC0FA6078D37  : public RuntimeObject
{
	// System.Text.Encoding UniGLTF.Zip.CommonHeader::Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___Encoding_0;
	// System.Byte[] UniGLTF.Zip.CommonHeader::Bytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Bytes_1;
	// System.Int32 UniGLTF.Zip.CommonHeader::Offset
	int32_t ___Offset_2;
	// System.UInt16 UniGLTF.Zip.CommonHeader::VersionNeededToExtract
	uint16_t ___VersionNeededToExtract_3;
	// System.UInt16 UniGLTF.Zip.CommonHeader::GeneralPurposeBitFlag
	uint16_t ___GeneralPurposeBitFlag_4;
	// UniGLTF.Zip.CompressionMethod UniGLTF.Zip.CommonHeader::CompressionMethod
	uint16_t ___CompressionMethod_5;
	// System.UInt16 UniGLTF.Zip.CommonHeader::FileLastModificationTime
	uint16_t ___FileLastModificationTime_6;
	// System.UInt16 UniGLTF.Zip.CommonHeader::FileLastModificationDate
	uint16_t ___FileLastModificationDate_7;
	// System.Int32 UniGLTF.Zip.CommonHeader::CRC32
	int32_t ___CRC32_8;
	// System.Int32 UniGLTF.Zip.CommonHeader::CompressedSize
	int32_t ___CompressedSize_9;
	// System.Int32 UniGLTF.Zip.CommonHeader::UncompressedSize
	int32_t ___UncompressedSize_10;
	// System.UInt16 UniGLTF.Zip.CommonHeader::FileNameLength
	uint16_t ___FileNameLength_11;
	// System.UInt16 UniGLTF.Zip.CommonHeader::ExtraFieldLength
	uint16_t ___ExtraFieldLength_12;
};

// DepthFirstScheduler.CoroutineFunctor
struct CoroutineFunctor_t4352CB3C69DB539774C5B9317BD0E4B3696EBD00  : public RuntimeObject
{
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// DepthFirstScheduler.Functor
struct Functor_t1B24DEB9E650EE66D9B5E16A4042CFF4DC13CF11  : public RuntimeObject
{
};

// DepthFirstScheduler.IEnumeratorExtensions
struct IEnumeratorExtensions_t6589516482C45C84CBB134146649E00A63BE2E6E  : public RuntimeObject
{
};

// DepthFirstScheduler.ISchedulableExtensions
struct ISchedulableExtensions_t1C4D559A63C7C98837F48B727B2B463562AC2E0D  : public RuntimeObject
{
};

// MToon.LightingDefinition
struct LightingDefinition_tE7A44337B9F6CDEE30749E9437C4EE0B84ABCAC8  : public RuntimeObject
{
	// MToon.LitAndShadeMixingDefinition MToon.LightingDefinition::LitAndShadeMixing
	LitAndShadeMixingDefinition_t89688F4B755AFB2FE2DAACCA0BB1CDD9B71FBA2E* ___LitAndShadeMixing_0;
	// MToon.LightingInfluenceDefinition MToon.LightingDefinition::LightingInfluence
	LightingInfluenceDefinition_t489DF60FCA3352B6F3E6F65B8AFB1A1BCAB0FDC4* ___LightingInfluence_1;
	// MToon.EmissionDefinition MToon.LightingDefinition::Emission
	EmissionDefinition_tA20BD3838E10D38EA8098B9C296E9F8630D8B9B3* ___Emission_2;
	// MToon.MatCapDefinition MToon.LightingDefinition::MatCap
	MatCapDefinition_t9BC823FEF27F7F0B5A90748E0B88DC37D3A8A5FE* ___MatCap_3;
	// MToon.NormalDefinition MToon.LightingDefinition::Normal
	NormalDefinition_tD5D8120BEBA6577B6BBFAA094727456900D1461D* ___Normal_4;
};

// MToon.LightingInfluenceDefinition
struct LightingInfluenceDefinition_t489DF60FCA3352B6F3E6F65B8AFB1A1BCAB0FDC4  : public RuntimeObject
{
	// System.Single MToon.LightingInfluenceDefinition::LightColorAttenuationValue
	float ___LightColorAttenuationValue_0;
	// System.Single MToon.LightingInfluenceDefinition::GiIntensityValue
	float ___GiIntensityValue_1;
};

// MToon.LitAndShadeMixingDefinition
struct LitAndShadeMixingDefinition_t89688F4B755AFB2FE2DAACCA0BB1CDD9B71FBA2E  : public RuntimeObject
{
	// System.Single MToon.LitAndShadeMixingDefinition::ShadingShiftValue
	float ___ShadingShiftValue_0;
	// System.Single MToon.LitAndShadeMixingDefinition::ShadingToonyValue
	float ___ShadingToonyValue_1;
	// System.Single MToon.LitAndShadeMixingDefinition::ShadowReceiveMultiplierValue
	float ___ShadowReceiveMultiplierValue_2;
	// UnityEngine.Texture2D MToon.LitAndShadeMixingDefinition::ShadowReceiveMultiplierMultiplyTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___ShadowReceiveMultiplierMultiplyTexture_3;
	// System.Single MToon.LitAndShadeMixingDefinition::LitAndShadeMixingMultiplierValue
	float ___LitAndShadeMixingMultiplierValue_4;
	// UnityEngine.Texture2D MToon.LitAndShadeMixingDefinition::LitAndShadeMixingMultiplierMultiplyTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___LitAndShadeMixingMultiplierMultiplyTexture_5;
};

// MToon.MToonDefinition
struct MToonDefinition_t903F9801D7CB352188C70F7084F85190A15F6D15  : public RuntimeObject
{
	// MToon.MetaDefinition MToon.MToonDefinition::Meta
	MetaDefinition_t75DEF3D69E2B8E1AA665EB08E28AC8274770EF60* ___Meta_0;
	// MToon.RenderingDefinition MToon.MToonDefinition::Rendering
	RenderingDefinition_t3B13BE451A3151F1CB86BB750250234D87012D65* ___Rendering_1;
	// MToon.ColorDefinition MToon.MToonDefinition::Color
	ColorDefinition_tA6E1131529870216A0C7BA37ED74404978D96AF7* ___Color_2;
	// MToon.LightingDefinition MToon.MToonDefinition::Lighting
	LightingDefinition_tE7A44337B9F6CDEE30749E9437C4EE0B84ABCAC8* ___Lighting_3;
	// MToon.OutlineDefinition MToon.MToonDefinition::Outline
	OutlineDefinition_tF5668C9080267CF32544D7914FE991B5B8AEE25A* ___Outline_4;
	// MToon.TextureUvCoordsDefinition MToon.MToonDefinition::TextureOption
	TextureUvCoordsDefinition_t2FA4034BC371D1D03DB0A84E29B635580081C46A* ___TextureOption_5;
	// MToon.RenderQueueDefinition MToon.MToonDefinition::RenderQueue
	RenderQueueDefinition_tA4022C2F52B0C6329338A156A9A19DDF19FFE295* ___RenderQueue_6;
};

// MToon.MatCapDefinition
struct MatCapDefinition_t9BC823FEF27F7F0B5A90748E0B88DC37D3A8A5FE  : public RuntimeObject
{
	// UnityEngine.Texture2D MToon.MatCapDefinition::AdditiveTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___AdditiveTexture_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// MToon.MetaDefinition
struct MetaDefinition_t75DEF3D69E2B8E1AA665EB08E28AC8274770EF60  : public RuntimeObject
{
	// System.Int32 MToon.MetaDefinition::VersionNumber
	int32_t ___VersionNumber_0;
};

// MToon.NormalDefinition
struct NormalDefinition_tD5D8120BEBA6577B6BBFAA094727456900D1461D  : public RuntimeObject
{
	// UnityEngine.Texture2D MToon.NormalDefinition::NormalTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___NormalTexture_0;
	// System.Single MToon.NormalDefinition::NormalScaleValue
	float ___NormalScaleValue_1;
};

// UniGLTF.ShaderPropExporter.PreShaderPropExporter
struct PreShaderPropExporter_t33693D745BAEF8D0D7281EB7F8A08627BB61A5D7  : public RuntimeObject
{
};

// MToon.RenderQueueDefinition
struct RenderQueueDefinition_tA4022C2F52B0C6329338A156A9A19DDF19FFE295  : public RuntimeObject
{
	// MToon.RenderMode MToon.RenderQueueDefinition::RenderQueueOriginMode
	int32_t ___RenderQueueOriginMode_0;
	// System.Int32 MToon.RenderQueueDefinition::RenderQueueOffsetNumber
	int32_t ___RenderQueueOffsetNumber_1;
};

// MToon.RenderingDefinition
struct RenderingDefinition_t3B13BE451A3151F1CB86BB750250234D87012D65  : public RuntimeObject
{
	// MToon.RenderMode MToon.RenderingDefinition::RenderMode
	int32_t ___RenderMode_0;
	// MToon.CullMode MToon.RenderingDefinition::CullMode
	int32_t ___CullMode_1;
};

// DepthFirstScheduler.Schedulable
struct Schedulable_t07D23EA84328426C593FDC07E39D8FB34B7F7A56  : public RuntimeObject
{
};

// DepthFirstScheduler.SchedulableExtensions
struct SchedulableExtensions_tD5E8B0A4A6A4278E5A31F06E4ED3195A1DEF7B55  : public RuntimeObject
{
};

// DepthFirstScheduler.Scheduler
struct Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0  : public RuntimeObject
{
};

// UniGLTF.ShaderPropExporter.ShaderProps
struct ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD  : public RuntimeObject
{
	// UniGLTF.ShaderPropExporter.ShaderProperty[] UniGLTF.ShaderPropExporter.ShaderProps::Properties
	ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* ___Properties_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// DepthFirstScheduler.TaskChain
struct TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E  : public RuntimeObject
{
	// System.Collections.Generic.IEnumerator`1<DepthFirstScheduler.ISchedulable> DepthFirstScheduler.TaskChain::Enumerator
	RuntimeObject* ___Enumerator_0;
	// System.Action`1<System.Exception> DepthFirstScheduler.TaskChain::OnError
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___OnError_1;
	// DepthFirstScheduler.ChainStatus DepthFirstScheduler.TaskChain::ChainStatus
	int32_t ___ChainStatus_2;
};

// MToon.Utils
struct Utils_t504782DB61E6CB077B2D3DDA01FBBF7CE2EBC81B  : public RuntimeObject
{
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

// DepthFirstScheduler.MainThreadDispatcher/<Ancestors>d__1
struct U3CAncestorsU3Ed__1_t23FAA5756285F020086D340BCE1FD7307DD60E68  : public RuntimeObject
{
	// System.Int32 DepthFirstScheduler.MainThreadDispatcher/<Ancestors>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Transform DepthFirstScheduler.MainThreadDispatcher/<Ancestors>d__1::<>2__current
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CU3E2__current_1;
	// System.Int32 DepthFirstScheduler.MainThreadDispatcher/<Ancestors>d__1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.Transform DepthFirstScheduler.MainThreadDispatcher/<Ancestors>d__1::t
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___t_3;
	// UnityEngine.Transform DepthFirstScheduler.MainThreadDispatcher/<Ancestors>d__1::<>3__t
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CU3E3__t_4;
	// DepthFirstScheduler.MainThreadDispatcher DepthFirstScheduler.MainThreadDispatcher/<Ancestors>d__1::<>4__this
	MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98* ___U3CU3E4__this_5;
	// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> DepthFirstScheduler.MainThreadDispatcher/<Ancestors>d__1::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_6;
};

// DepthFirstScheduler.Schedulable/<>c
struct U3CU3Ec_tAC22565E0BAAE2BD63D233D23526464A6E4D839B  : public RuntimeObject
{
};

// DepthFirstScheduler.Scheduler/CurrentThreadScheduler
struct CurrentThreadScheduler_t615B9E89AE1B5FAB26CC3B9170FF6D0A8C5C32C9  : public RuntimeObject
{
	// System.Boolean DepthFirstScheduler.Scheduler/CurrentThreadScheduler::disposedValue
	bool ___disposedValue_1;
};

// DepthFirstScheduler.Scheduler/StepScheduler
struct StepScheduler_t09FEF8CFAB003524F34FE965F7138CB1E1C2FF28  : public RuntimeObject
{
	// DepthFirstScheduler.LockQueue`1<DepthFirstScheduler.TaskChain> DepthFirstScheduler.Scheduler/StepScheduler::m_taskQueue
	LockQueue_1_tCE05F62CFDC18D642CBBC99CDAAAF1665D0F8DD3* ___m_taskQueue_0;
	// DepthFirstScheduler.TaskChain DepthFirstScheduler.Scheduler/StepScheduler::m_chain
	TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* ___m_chain_1;
};

// DepthFirstScheduler.Scheduler/ThreadPoolScheduler
struct ThreadPoolScheduler_t8734547779F29DE0E1ED11F3278962B10DEE8E40  : public RuntimeObject
{
};

// DepthFirstScheduler.Scheduler/ThreadScheduler
struct ThreadScheduler_t537C2059D25B13EEC4806EBD8FA3F1CBE7705C50  : public RuntimeObject
{
	// DepthFirstScheduler.MonitorQueue`1<DepthFirstScheduler.TaskChain> DepthFirstScheduler.Scheduler/ThreadScheduler::m_queue
	MonitorQueue_1_t11ECF6EA2905CD822FBD4CBC675A42E9B2ABB156* ___m_queue_0;
	// System.Threading.Thread DepthFirstScheduler.Scheduler/ThreadScheduler::m_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___m_thread_1;
	// System.Boolean DepthFirstScheduler.Scheduler/ThreadScheduler::disposedValue
	bool ___disposedValue_2;
};

// DepthFirstScheduler.Scheduler/Trampoline
struct Trampoline_t61630DC9CE50107372C78EC1A39602517D36E95B  : public RuntimeObject
{
};

// UniGLTF.Zip.ZipArchiveStorage/<>c
struct U3CU3Ec_tC180EB410EC7150613555B972A05831681D48B84  : public RuntimeObject
{
};

// UniGLTF.Zip.ZipArchiveStorage/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t7CCEA93A22341A2E02A2833F4E3815D2C90EBEE3  : public RuntimeObject
{
	// System.String UniGLTF.Zip.ZipArchiveStorage/<>c__DisplayClass5_0::url
	String_t* ___url_0;
};

// DepthFirstScheduler.Scheduler/ThreadPoolScheduler/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tD53261C6B2302E54F50300401F30CEC7EA501B95  : public RuntimeObject
{
	// DepthFirstScheduler.TaskChain DepthFirstScheduler.Scheduler/ThreadPoolScheduler/<>c__DisplayClass0_0::item
	TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* ___item_0;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps>
struct KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UniGLTF.Zip.CentralDirectoryFileHeader
struct CentralDirectoryFileHeader_tBB88937CDB5641D59FD5FEDECE80EFEA44098B5C  : public CommonHeader_t0F077CE9938E6817F7FAEE515E3CDC0FA6078D37
{
	// System.UInt16 UniGLTF.Zip.CentralDirectoryFileHeader::VersionMadeBy
	uint16_t ___VersionMadeBy_13;
	// System.UInt16 UniGLTF.Zip.CentralDirectoryFileHeader::FileCommentLength
	uint16_t ___FileCommentLength_14;
	// System.UInt16 UniGLTF.Zip.CentralDirectoryFileHeader::DiskNumberWhereFileStarts
	uint16_t ___DiskNumberWhereFileStarts_15;
	// System.UInt16 UniGLTF.Zip.CentralDirectoryFileHeader::InternalFileAttributes
	uint16_t ___InternalFileAttributes_16;
	// System.Int32 UniGLTF.Zip.CentralDirectoryFileHeader::ExternalFileAttributes
	int32_t ___ExternalFileAttributes_17;
	// System.Int32 UniGLTF.Zip.CentralDirectoryFileHeader::RelativeOffsetOfLocalFileHeader
	int32_t ___RelativeOffsetOfLocalFileHeader_18;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// UniGLTF.ShaderPropExporter.PreExportShaderAttribute
struct PreExportShaderAttribute_t8D9809E8CFB4A4557430A5755A66061EB87269F5  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// UniGLTF.ShaderPropExporter.PreExportShadersAttribute
struct PreExportShadersAttribute_tFAC060D43264C6113FE055289B240F2FFC03B885  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// MToon.RenderQueueRequirement
struct RenderQueueRequirement_t4A0FFB65A52822A7199C09466B30A93497243302 
{
	// System.Int32 MToon.RenderQueueRequirement::DefaultValue
	int32_t ___DefaultValue_0;
	// System.Int32 MToon.RenderQueueRequirement::MinValue
	int32_t ___MinValue_1;
	// System.Int32 MToon.RenderQueueRequirement::MaxValue
	int32_t ___MaxValue_2;
};

// UniGLTF.ShaderPropExporter.ShaderProperty
struct ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F 
{
	// System.String UniGLTF.ShaderPropExporter.ShaderProperty::Key
	String_t* ___Key_0;
	// UniGLTF.ShaderPropExporter.ShaderPropertyType UniGLTF.ShaderPropExporter.ShaderProperty::ShaderPropertyType
	int32_t ___ShaderPropertyType_1;
};
// Native definition for P/Invoke marshalling of UniGLTF.ShaderPropExporter.ShaderProperty
struct ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F_marshaled_pinvoke
{
	char* ___Key_0;
	int32_t ___ShaderPropertyType_1;
};
// Native definition for COM marshalling of UniGLTF.ShaderPropExporter.ShaderProperty
struct ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F_marshaled_com
{
	Il2CppChar* ___Key_0;
	int32_t ___ShaderPropertyType_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UniGLTF.ShaderPropExporter.SupportedShader
struct SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD 
{
	// System.String UniGLTF.ShaderPropExporter.SupportedShader::TargetFolder
	String_t* ___TargetFolder_0;
	// System.String UniGLTF.ShaderPropExporter.SupportedShader::ShaderName
	String_t* ___ShaderName_1;
};
// Native definition for P/Invoke marshalling of UniGLTF.ShaderPropExporter.SupportedShader
struct SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD_marshaled_pinvoke
{
	char* ___TargetFolder_0;
	char* ___ShaderName_1;
};
// Native definition for COM marshalling of UniGLTF.ShaderPropExporter.SupportedShader
struct SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD_marshaled_com
{
	Il2CppChar* ___TargetFolder_0;
	Il2CppChar* ___ShaderName_1;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// DepthFirstScheduler.Unit
struct Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A 
{
	union
	{
		struct
		{
		};
		uint8_t Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A__padding[1];
	};
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=18
struct __StaticArrayInitTypeSizeU3D18_t6E0330D09464182596CB51323A9C0A4DC19FC9AF 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D18_t6E0330D09464182596CB51323A9C0A4DC19FC9AF__padding[18];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

// MToon.ColorDefinition
struct ColorDefinition_tA6E1131529870216A0C7BA37ED74404978D96AF7  : public RuntimeObject
{
	// UnityEngine.Color MToon.ColorDefinition::LitColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___LitColor_0;
	// UnityEngine.Texture2D MToon.ColorDefinition::LitMultiplyTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___LitMultiplyTexture_1;
	// UnityEngine.Color MToon.ColorDefinition::ShadeColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___ShadeColor_2;
	// UnityEngine.Texture2D MToon.ColorDefinition::ShadeMultiplyTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___ShadeMultiplyTexture_3;
	// System.Single MToon.ColorDefinition::CutoutThresholdValue
	float ___CutoutThresholdValue_4;
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

// MToon.EmissionDefinition
struct EmissionDefinition_tA20BD3838E10D38EA8098B9C296E9F8630D8B9B3  : public RuntimeObject
{
	// UnityEngine.Color MToon.EmissionDefinition::EmissionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___EmissionColor_0;
	// UnityEngine.Texture2D MToon.EmissionDefinition::EmissionMultiplyTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___EmissionMultiplyTexture_1;
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

// MToon.OutlineDefinition
struct OutlineDefinition_tF5668C9080267CF32544D7914FE991B5B8AEE25A  : public RuntimeObject
{
	// MToon.OutlineWidthMode MToon.OutlineDefinition::OutlineWidthMode
	int32_t ___OutlineWidthMode_0;
	// System.Single MToon.OutlineDefinition::OutlineWidthValue
	float ___OutlineWidthValue_1;
	// UnityEngine.Texture2D MToon.OutlineDefinition::OutlineWidthMultiplyTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___OutlineWidthMultiplyTexture_2;
	// System.Single MToon.OutlineDefinition::OutlineScaledMaxDistanceValue
	float ___OutlineScaledMaxDistanceValue_3;
	// MToon.OutlineColorMode MToon.OutlineDefinition::OutlineColorMode
	int32_t ___OutlineColorMode_4;
	// UnityEngine.Color MToon.OutlineDefinition::OutlineColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___OutlineColor_5;
	// System.Single MToon.OutlineDefinition::OutlineLightingMixValue
	float ___OutlineLightingMixValue_6;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// MToon.TextureUvCoordsDefinition
struct TextureUvCoordsDefinition_t2FA4034BC371D1D03DB0A84E29B635580081C46A  : public RuntimeObject
{
	// UnityEngine.Vector2 MToon.TextureUvCoordsDefinition::MainTextureLeftBottomOriginScale
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___MainTextureLeftBottomOriginScale_0;
	// UnityEngine.Vector2 MToon.TextureUvCoordsDefinition::MainTextureLeftBottomOriginOffset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___MainTextureLeftBottomOriginOffset_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// DepthFirstScheduler.NoParentException
struct NoParentException_tF1C398500C8702967982FF14FAB171D300C0F5F5  : public Exception_t
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`1<System.Exception>
struct Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9  : public MulticastDelegate_t
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3  : public MulticastDelegate_t
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// DepthFirstScheduler.MainThreadDispatcher
struct MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 DepthFirstScheduler.MainThreadDispatcher::TaskCount
	int32_t ___TaskCount_4;
};

// System.Collections.Generic.Dictionary`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps>

// System.Collections.Generic.Dictionary`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps>

// DepthFirstScheduler.LockQueue`1<DepthFirstScheduler.TaskChain>

// DepthFirstScheduler.LockQueue`1<DepthFirstScheduler.TaskChain>

// DepthFirstScheduler.MonitorQueue`1<DepthFirstScheduler.TaskChain>

// DepthFirstScheduler.MonitorQueue`1<DepthFirstScheduler.TaskChain>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<DepthFirstScheduler.TaskChain>

// System.Collections.Generic.Queue`1<DepthFirstScheduler.TaskChain>

// DepthFirstScheduler.Schedulable`1<DepthFirstScheduler.Unit>

// DepthFirstScheduler.Schedulable`1<DepthFirstScheduler.Unit>

// System.Collections.Generic.Stack`1<System.Collections.IEnumerator>

// System.Collections.Generic.Stack`1<System.Collections.IEnumerator>

// System.Collections.Generic.Stack`1<System.Object>

// System.Collections.Generic.Stack`1<System.Object>

// System.Attribute

// System.Attribute

// UniGLTF.Zip.CommonHeader

// UniGLTF.Zip.CommonHeader

// DepthFirstScheduler.CoroutineFunctor

// DepthFirstScheduler.CoroutineFunctor

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject

// DepthFirstScheduler.Functor

// DepthFirstScheduler.Functor

// DepthFirstScheduler.IEnumeratorExtensions

// DepthFirstScheduler.IEnumeratorExtensions

// DepthFirstScheduler.ISchedulableExtensions

// DepthFirstScheduler.ISchedulableExtensions

// MToon.LightingDefinition

// MToon.LightingDefinition

// MToon.LightingInfluenceDefinition

// MToon.LightingInfluenceDefinition

// MToon.LitAndShadeMixingDefinition

// MToon.LitAndShadeMixingDefinition

// MToon.MToonDefinition

// MToon.MToonDefinition

// MToon.MatCapDefinition

// MToon.MatCapDefinition

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// MToon.MetaDefinition

// MToon.MetaDefinition

// MToon.NormalDefinition

// MToon.NormalDefinition

// UniGLTF.ShaderPropExporter.PreShaderPropExporter
struct PreShaderPropExporter_t33693D745BAEF8D0D7281EB7F8A08627BB61A5D7_StaticFields
{
	// UniGLTF.ShaderPropExporter.SupportedShader[] UniGLTF.ShaderPropExporter.PreShaderPropExporter::SupportedShaders
	SupportedShaderU5BU5D_t9AF4D633766F24E2E986D043F44B96099E2AEC4C* ___SupportedShaders_1;
	// System.Collections.Generic.Dictionary`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::m_shaderPropMap
	Dictionary_2_tCF7516CE51B39B9C8416CEB844633D6AC735739D* ___m_shaderPropMap_2;
	// UniGLTF.ShaderPropExporter.SupportedShader[] UniGLTF.ShaderPropExporter.PreShaderPropExporter::VRMSupportedShaders
	SupportedShaderU5BU5D_t9AF4D633766F24E2E986D043F44B96099E2AEC4C* ___VRMSupportedShaders_4;
};

// UniGLTF.ShaderPropExporter.PreShaderPropExporter

// MToon.RenderQueueDefinition

// MToon.RenderQueueDefinition

// MToon.RenderingDefinition

// MToon.RenderingDefinition

// DepthFirstScheduler.Schedulable

// DepthFirstScheduler.Schedulable

// DepthFirstScheduler.SchedulableExtensions

// DepthFirstScheduler.SchedulableExtensions

// DepthFirstScheduler.Scheduler
struct Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_StaticFields
{
	// DepthFirstScheduler.IScheduler DepthFirstScheduler.Scheduler::currentThread
	RuntimeObject* ___currentThread_0;
	// DepthFirstScheduler.Scheduler/StepScheduler DepthFirstScheduler.Scheduler::mainThread
	StepScheduler_t09FEF8CFAB003524F34FE965F7138CB1E1C2FF28* ___mainThread_1;
	// DepthFirstScheduler.IScheduler DepthFirstScheduler.Scheduler::threadPool
	RuntimeObject* ___threadPool_2;
	// DepthFirstScheduler.IScheduler DepthFirstScheduler.Scheduler::singleWorkerThread
	RuntimeObject* ___singleWorkerThread_3;
};

// DepthFirstScheduler.Scheduler

// UniGLTF.ShaderPropExporter.ShaderProps

// UniGLTF.ShaderPropExporter.ShaderProps

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// DepthFirstScheduler.TaskChain

// DepthFirstScheduler.TaskChain

// MToon.Utils

// MToon.Utils

// System.ValueType

// System.ValueType

// DepthFirstScheduler.MainThreadDispatcher/<Ancestors>d__1

// DepthFirstScheduler.MainThreadDispatcher/<Ancestors>d__1

// DepthFirstScheduler.Schedulable/<>c
struct U3CU3Ec_tAC22565E0BAAE2BD63D233D23526464A6E4D839B_StaticFields
{
	// DepthFirstScheduler.Schedulable/<>c DepthFirstScheduler.Schedulable/<>c::<>9
	U3CU3Ec_tAC22565E0BAAE2BD63D233D23526464A6E4D839B* ___U3CU3E9_0;
	// System.Action DepthFirstScheduler.Schedulable/<>c::<>9__0_0
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__0_0_1;
};

// DepthFirstScheduler.Schedulable/<>c

// DepthFirstScheduler.Scheduler/CurrentThreadScheduler

// DepthFirstScheduler.Scheduler/CurrentThreadScheduler
struct CurrentThreadScheduler_t615B9E89AE1B5FAB26CC3B9170FF6D0A8C5C32C9_ThreadStaticFields
{
	// System.Collections.Generic.Queue`1<DepthFirstScheduler.TaskChain> DepthFirstScheduler.Scheduler/CurrentThreadScheduler::queue
	Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* ___queue_0;
};

// DepthFirstScheduler.Scheduler/StepScheduler

// DepthFirstScheduler.Scheduler/StepScheduler

// DepthFirstScheduler.Scheduler/ThreadPoolScheduler

// DepthFirstScheduler.Scheduler/ThreadPoolScheduler

// DepthFirstScheduler.Scheduler/ThreadScheduler

// DepthFirstScheduler.Scheduler/ThreadScheduler

// DepthFirstScheduler.Scheduler/Trampoline

// DepthFirstScheduler.Scheduler/Trampoline

// UniGLTF.Zip.ZipArchiveStorage/<>c
struct U3CU3Ec_tC180EB410EC7150613555B972A05831681D48B84_StaticFields
{
	// UniGLTF.Zip.ZipArchiveStorage/<>c UniGLTF.Zip.ZipArchiveStorage/<>c::<>9
	U3CU3Ec_tC180EB410EC7150613555B972A05831681D48B84* ___U3CU3E9_0;
	// System.Func`2<UniGLTF.Zip.CentralDirectoryFileHeader,System.String> UniGLTF.Zip.ZipArchiveStorage/<>c::<>9__0_0
	Func_2_t44B3D462DDC8ED1C56511253ED4DB7535263B7E8* ___U3CU3E9__0_0_1;
};

// UniGLTF.Zip.ZipArchiveStorage/<>c

// UniGLTF.Zip.ZipArchiveStorage/<>c__DisplayClass5_0

// UniGLTF.Zip.ZipArchiveStorage/<>c__DisplayClass5_0

// DepthFirstScheduler.Scheduler/ThreadPoolScheduler/<>c__DisplayClass0_0

// DepthFirstScheduler.Scheduler/ThreadPoolScheduler/<>c__DisplayClass0_0

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps>

// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UniGLTF.Zip.CentralDirectoryFileHeader

// UniGLTF.Zip.CentralDirectoryFileHeader

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UniGLTF.ShaderPropExporter.PreExportShaderAttribute

// UniGLTF.ShaderPropExporter.PreExportShaderAttribute

// UniGLTF.ShaderPropExporter.PreExportShadersAttribute

// UniGLTF.ShaderPropExporter.PreExportShadersAttribute

// System.Reflection.PropertyInfo

// System.Reflection.PropertyInfo

// MToon.RenderQueueRequirement

// MToon.RenderQueueRequirement

// UniGLTF.ShaderPropExporter.ShaderProperty

// UniGLTF.ShaderPropExporter.ShaderProperty

// System.Single

// System.Single

// UniGLTF.ShaderPropExporter.SupportedShader

// UniGLTF.ShaderPropExporter.SupportedShader

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
};

// System.UInt32

// System.UInt32

// DepthFirstScheduler.Unit
struct Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A_StaticFields
{
	// DepthFirstScheduler.Unit DepthFirstScheduler.Unit::default
	Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A ___default_0;
};

// DepthFirstScheduler.Unit

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

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=18

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=18

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=18 <PrivateImplementationDetails>::57B0A7E913A6CBB7C5554095EB31FFE93AB6628DCBEC34C82369E40829116FDC
	__StaticArrayInitTypeSizeU3D18_t6E0330D09464182596CB51323A9C0A4DC19FC9AF ___57B0A7E913A6CBB7C5554095EB31FFE93AB6628DCBEC34C82369E40829116FDC_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::F6BB1294DA2F78CD935B01C7656280DF5EAA0439E9D97BC03775825A41A508E4
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___F6BB1294DA2F78CD935B01C7656280DF5EAA0439E9D97BC03775825A41A508E4_1;
};

// <PrivateImplementationDetails>

// MToon.ColorDefinition

// MToon.ColorDefinition

// System.Delegate

// System.Delegate

// MToon.EmissionDefinition

// MToon.EmissionDefinition

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// MToon.OutlineDefinition

// MToon.OutlineDefinition

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// MToon.TextureUvCoordsDefinition

// MToon.TextureUvCoordsDefinition

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// System.MulticastDelegate

// System.MulticastDelegate

// DepthFirstScheduler.NoParentException

// DepthFirstScheduler.NoParentException

// System.SystemException

// System.SystemException

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Action`1<System.Exception>

// System.Action`1<System.Exception>

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action

// System.Action

// System.ArgumentException

// System.ArgumentException

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.NotImplementedException

// System.NotImplementedException

// System.NotSupportedException

// System.NotSupportedException

// System.Threading.ParameterizedThreadStart

// System.Threading.ParameterizedThreadStart

// UnityEngine.Transform

// UnityEngine.Transform

// System.Threading.WaitCallback

// System.Threading.WaitCallback

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// DepthFirstScheduler.MainThreadDispatcher
struct MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_StaticFields
{
	// DepthFirstScheduler.MainThreadDispatcher DepthFirstScheduler.MainThreadDispatcher::instance
	MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98* ___instance_5;
	// System.Boolean DepthFirstScheduler.MainThreadDispatcher::initialized
	bool ___initialized_6;
	// System.Boolean DepthFirstScheduler.MainThreadDispatcher::isQuitting
	bool ___isQuitting_7;
};

// DepthFirstScheduler.MainThreadDispatcher
struct MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_ThreadStaticFields
{
	// System.Object DepthFirstScheduler.MainThreadDispatcher::mainThreadToken
	RuntimeObject* ___mainThreadToken_8;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7  : public RuntimeArray
{
	ALIGN_FIELD (8) PropertyInfo_t* m_Items[1];

	inline PropertyInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// UniGLTF.ShaderPropExporter.ShaderProperty[]
struct ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88  : public RuntimeArray
{
	ALIGN_FIELD (8) ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F m_Items[1];

	inline ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Key_0), (void*)NULL);
	}
	inline ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Key_0), (void*)NULL);
	}
};
// UniGLTF.ShaderPropExporter.SupportedShader[]
struct SupportedShaderU5BU5D_t9AF4D633766F24E2E986D043F44B96099E2AEC4C  : public RuntimeArray
{
	ALIGN_FIELD (8) SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD m_Items[1];

	inline SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___TargetFolder_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___ShaderName_1), (void*)NULL);
		#endif
	}
	inline SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___TargetFolder_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___ShaderName_1), (void*)NULL);
		#endif
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void DepthFirstScheduler.Schedulable`1<DepthFirstScheduler.Unit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Schedulable_1__ctor_mD54FB9D87D1209B0C6D06EF9029AE585180D63B5_gshared (Schedulable_1_t39CFE1E7639D7FCAF745B12B9A4A2CA62B24BAE5* __this, const RuntimeMethod* method) ;
// DepthFirstScheduler.Schedulable`1<DepthFirstScheduler.Unit> DepthFirstScheduler.Schedulable`1<DepthFirstScheduler.Unit>::AddTask(DepthFirstScheduler.IScheduler,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Schedulable_1_t39CFE1E7639D7FCAF745B12B9A4A2CA62B24BAE5* Schedulable_1_AddTask_mE3CA6CFC745099F44BCD78A2E1D3E1F163AA9982_gshared (Schedulable_1_t39CFE1E7639D7FCAF745B12B9A4A2CA62B24BAE5* __this, RuntimeObject* ___0_scheduler, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_pred, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m487BCAF8F7A2FB003B54B1E744B80FB6651B4963_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void DepthFirstScheduler.LockQueue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockQueue_1_Enqueue_m52C94C31B6352A4115796F16E23E64DEB7DFB75A_gshared (LockQueue_1_tBFB64D777A50ECC7F2EB4DB7DBBBECDD245E5276* __this, RuntimeObject* ___0_t, const RuntimeMethod* method) ;
// System.Int32 DepthFirstScheduler.LockQueue`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LockQueue_1_get_Count_m363C1F539A7A6AEE8CE0B6E82722DE3CD12B169C_gshared (LockQueue_1_tBFB64D777A50ECC7F2EB4DB7DBBBECDD245E5276* __this, const RuntimeMethod* method) ;
// T DepthFirstScheduler.LockQueue`1<System.Object>::Dequeue(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LockQueue_1_Dequeue_m9E3BA173BE9C8757D423609C5AE0CD307591801E_gshared (LockQueue_1_tBFB64D777A50ECC7F2EB4DB7DBBBECDD245E5276* __this, int32_t* ___0_remain, const RuntimeMethod* method) ;
// System.Void DepthFirstScheduler.LockQueue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockQueue_1__ctor_m634654E996A94204E7B38C086B78BAF73600139B_gshared (LockQueue_1_tBFB64D777A50ECC7F2EB4DB7DBBBECDD245E5276* __this, const RuntimeMethod* method) ;
// System.Void DepthFirstScheduler.MonitorQueue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorQueue_1__ctor_mE3B161EC40F018430DCC0C4AA13EF01F0FB2384B_gshared (MonitorQueue_1_t77842F522FC86ED85F242176289D66D4793D6275* __this, const RuntimeMethod* method) ;
// T DepthFirstScheduler.MonitorQueue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MonitorQueue_1_Dequeue_mD4A52FD8D9EB5B682A9176FBDE959B35DE9DE704_gshared (MonitorQueue_1_t77842F522FC86ED85F242176289D66D4793D6275* __this, const RuntimeMethod* method) ;
// System.Void DepthFirstScheduler.MonitorQueue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorQueue_1_Enqueue_mA3CDF16192A9BE15D593EF4E2864650CFEB909D9_gshared (MonitorQueue_1_t77842F522FC86ED85F242176289D66D4793D6275* __this, RuntimeObject* ___0_data, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;

// System.Void UniGLTF.Zip.ZipArchiveStorage/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6D6C41B3498BF95557C5BDFD94BA73461CA74133 (U3CU3Ec_tC180EB410EC7150613555B972A05831681D48B84* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.String UniGLTF.Zip.CommonHeader::get_FileName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommonHeader_get_FileName_m1B58286382761DBAFD9F5911351D311D09DEF7B3 (CommonHeader_t0F077CE9938E6817F7FAEE515E3CDC0FA6078D37* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void UniGLTF.ShaderPropExporter.SupportedShader::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedShader__ctor_m4B124BA4FD1C9016E02B29151C87AFF920CF0A46 (SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD* __this, String_t* ___0_targetFolder, String_t* ___1_shaderName, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps>::.ctor()
inline void Dictionary_2__ctor_mF1E5D7383BFC26A82A10D42650A4EE167D9B091B (Dictionary_2_tCF7516CE51B39B9C8416CEB844633D6AC735739D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCF7516CE51B39B9C8416CEB844633D6AC735739D*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_gshared)(___0_source, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m3E0AEB8F3C3953ABFEC50FE77BF3B32552C80D22_inline (KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps>::get_Value()
inline ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* KeyValuePair_2_get_Value_m0E88FF128ADD89043FB8F078C432663C7BCE4648_inline (KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802* __this, const RuntimeMethod* method)
{
	return ((  ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* (*) (KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps>::Add(TKey,TValue)
inline void Dictionary_2_Add_m48A495425B604D5E9111229379AA45DF27806631 (Dictionary_2_tCF7516CE51B39B9C8416CEB844633D6AC735739D* __this, String_t* ___0_key, ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCF7516CE51B39B9C8416CEB844633D6AC735739D*, String_t*, ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m4C31AFC006F2A82A3464C2C5F620AEE8809B47A8 (Dictionary_2_tCF7516CE51B39B9C8416CEB844633D6AC735739D* __this, String_t* ___0_key, ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCF7516CE51B39B9C8416CEB844633D6AC735739D*, String_t*, ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void UniGLTF.ShaderPropExporter.ShaderProps::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderProps__ctor_m5D520C4E1B5972147C2E598508BBFFF21346F4E9 (ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* __this, const RuntimeMethod* method) ;
// System.Void UniGLTF.ShaderPropExporter.ShaderProperty::.ctor(System.String,UniGLTF.ShaderPropExporter.ShaderPropertyType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4 (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F* __this, String_t* ___0_key, int32_t ___1_propType, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209 (KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802* __this, String_t* ___0_key, ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802*, String_t*, ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD*, const RuntimeMethod*))KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Material::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void MToon.Utils::ValidateBlendMode(UnityEngine.Material,MToon.RenderMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_ValidateBlendMode_m4C2F7C217861AFB2ABC92BE968D85E70CBD702C5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, int32_t ___1_renderMode, bool ___2_isChangedByUser, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Material_GetTexture_mBA07A377A7DDD29CD53E6F687DE6D49A42C0C719 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Void MToon.Utils::ValidateNormalMode(UnityEngine.Material,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_ValidateNormalMode_mFA5D44C92D0C47BA9D14F033CC325142EFAD242A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, bool ___1_requireNormalMapping, const RuntimeMethod* method) ;
// System.Void MToon.Utils::ValidateOutlineMode(UnityEngine.Material,MToon.OutlineWidthMode,MToon.OutlineColorMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_ValidateOutlineMode_mE3EB9133CFBE8D6512D424F8C54C64262670A2CC (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, int32_t ___1_outlineWidthMode, int32_t ___2_outlineColorMode, const RuntimeMethod* method) ;
// System.Void MToon.Utils::ValidateDebugMode(UnityEngine.Material,MToon.DebugMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_ValidateDebugMode_m562B018FCDE48D193C9F3F360523E1F514DC1070 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, int32_t ___1_debugMode, const RuntimeMethod* method) ;
// System.Void MToon.Utils::ValidateCullMode(UnityEngine.Material,MToon.CullMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_ValidateCullMode_m1B8E37C56DA7BEB74D77F0EEE70E7F2D4B659836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, int32_t ___1_cullMode, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_value, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, RuntimeObject* ___1_actualValue, String_t* ___2_message, const RuntimeMethod* method) ;
// System.Void MToon.Utils::SetKeyword(UnityEngine.Material,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_mat, String_t* ___1_keyword, bool ___2_required, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetOverrideTag(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetOverrideTag_mD68833CD28EBAF71CB6AF127B38075629B74FE08 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_tag, String_t* ___1_val, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
// MToon.RenderQueueRequirement MToon.Utils::GetRenderQueueRequirement(MToon.RenderMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderQueueRequirement_t4A0FFB65A52822A7199C09466B30A93497243302 Utils_GetRenderQueueRequirement_m81B91FE79C44B97B825D4EFA58DBD08910B79544 (int32_t ___0_renderMode, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_renderQueue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Material::get_renderQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Material_get_renderQueue_mC427C54D2667620CBB845559DA4DA31BE166C757 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_keyword, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::DisableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_keyword, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Collections.IEnumerator>::.ctor()
inline void Stack_1__ctor_mF218547BE4368C5557FF1F40E220917E694CAFF0 (Stack_1_tCCF0E342E1E3E67D3A5E29186184FCC97134D9AB* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tCCF0E342E1E3E67D3A5E29186184FCC97134D9AB*, const RuntimeMethod*))Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Collections.IEnumerator>::Push(T)
inline void Stack_1_Push_m239291822C02AB16175907B3016054EC207D43FF (Stack_1_tCCF0E342E1E3E67D3A5E29186184FCC97134D9AB* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tCCF0E342E1E3E67D3A5E29186184FCC97134D9AB*, RuntimeObject*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___0_item, method);
}
// T System.Collections.Generic.Stack`1<System.Collections.IEnumerator>::Peek()
inline RuntimeObject* Stack_1_Peek_mB478B84AB35FBA331FF13DBABB9BE194C7186881 (Stack_1_tCCF0E342E1E3E67D3A5E29186184FCC97134D9AB* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Stack_1_tCCF0E342E1E3E67D3A5E29186184FCC97134D9AB*, const RuntimeMethod*))Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared)(__this, method);
}
// T System.Collections.Generic.Stack`1<System.Collections.IEnumerator>::Pop()
inline RuntimeObject* Stack_1_Pop_mC456C42E8578B42F4B25CDB65F6B4E79D45CE19B (Stack_1_tCCF0E342E1E3E67D3A5E29186184FCC97134D9AB* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Stack_1_tCCF0E342E1E3E67D3A5E29186184FCC97134D9AB*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Stack`1<System.Collections.IEnumerator>::get_Count()
inline int32_t Stack_1_get_Count_m20D4C6A9E28611C814D9D5305229E5FB3C501803_inline (Stack_1_tCCF0E342E1E3E67D3A5E29186184FCC97134D9AB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tCCF0E342E1E3E67D3A5E29186184FCC97134D9AB*, const RuntimeMethod*))Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline)(__this, method);
}
// System.Void DepthFirstScheduler.MainThreadDispatcher/<Ancestors>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAncestorsU3Ed__1__ctor_m68490F9D5DF41104A3A44ACCD3F0BEEEE026766A (U3CAncestorsU3Ed__1_t23FAA5756285F020086D340BCE1FD7307DD60E68* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// DepthFirstScheduler.Scheduler/StepScheduler DepthFirstScheduler.Scheduler::get_MainThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StepScheduler_t09FEF8CFAB003524F34FE965F7138CB1E1C2FF28* Scheduler_get_MainThread_m62AF20A0BD44979961B4F7DA32581A6D85DF74C9 (const RuntimeMethod* method) ;
// System.Int32 DepthFirstScheduler.Scheduler/StepScheduler::UpdateAndGetTaskCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StepScheduler_UpdateAndGetTaskCount_m1903DA6962BC1DF3ED8966AA4D25F6A0B0A67404 (StepScheduler_t09FEF8CFAB003524F34FE965F7138CB1E1C2FF28* __this, const RuntimeMethod* method) ;
// System.Void DepthFirstScheduler.MainThreadDispatcher::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_Initialize_mBAAEA37815AF6D4E085E8333902B4579DD5B4FB3 (const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<DepthFirstScheduler.MainThreadDispatcher>()
inline MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98* Object_FindObjectOfType_TisMainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_m6AFBBD0DD586BCF389DA02049AB68C032886EB77 (const RuntimeMethod* method)
{
	return ((  MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<DepthFirstScheduler.MainThreadDispatcher>()
inline MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98* GameObject_AddComponent_TisMainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_m8F45553149E91028219F7668D4F67884FD85A42C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void DepthFirstScheduler.MainThreadDispatcher::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_Awake_mBBF05702D73DE02D7618427E72F82FF930CD31E8 (MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// DepthFirstScheduler.IScheduler DepthFirstScheduler.Scheduler::get_SingleWorkerThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Scheduler_get_SingleWorkerThread_mD86861577D068FF13C15F800939EBF5B64CA2E2D (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
// System.Void DepthFirstScheduler.MainThreadDispatcher/<Ancestors>d__1::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAncestorsU3Ed__1_U3CU3Em__Finally1_m212CAF38CDE822994B68E67A063C5A6E9C632196 (U3CAncestorsU3Ed__1_t23FAA5756285F020086D340BCE1FD7307DD60E68* __this, const RuntimeMethod* method) ;
// System.Void DepthFirstScheduler.MainThreadDispatcher/<Ancestors>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAncestorsU3Ed__1_System_IDisposable_Dispose_m7FE6C2708A3FBD3E7C41426C6EAB0CC14266AC38 (U3CAncestorsU3Ed__1_t23FAA5756285F020086D340BCE1FD7307DD60E68* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Transform> DepthFirstScheduler.MainThreadDispatcher::Ancestors(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MainThreadDispatcher_Ancestors_mF9852931F3BF7674CE1EAB34477C04573D03AF5A (MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_t, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> DepthFirstScheduler.MainThreadDispatcher/<Ancestors>d__1::System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAncestorsU3Ed__1_System_Collections_Generic_IEnumerableU3CUnityEngine_TransformU3E_GetEnumerator_mB54CADE6C59F9DDDFFDE39756C22B2D4ACB86366 (U3CAncestorsU3Ed__1_t23FAA5756285F020086D340BCE1FD7307DD60E68* __this, const RuntimeMethod* method) ;
// System.Void DepthFirstScheduler.Schedulable`1<DepthFirstScheduler.Unit>::.ctor()
inline void Schedulable_1__ctor_mD54FB9D87D1209B0C6D06EF9029AE585180D63B5 (Schedulable_1_t39CFE1E7639D7FCAF745B12B9A4A2CA62B24BAE5* __this, const RuntimeMethod* method)
{
	((  void (*) (Schedulable_1_t39CFE1E7639D7FCAF745B12B9A4A2CA62B24BAE5*, const RuntimeMethod*))Schedulable_1__ctor_mD54FB9D87D1209B0C6D06EF9029AE585180D63B5_gshared)(__this, method);
}
// DepthFirstScheduler.IScheduler DepthFirstScheduler.Scheduler::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Scheduler_get_CurrentThread_m892DF9D40B8BCBE2892B608C3E40D7B2109D3E6A (const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// DepthFirstScheduler.Schedulable`1<DepthFirstScheduler.Unit> DepthFirstScheduler.Schedulable`1<DepthFirstScheduler.Unit>::AddTask(DepthFirstScheduler.IScheduler,System.Action)
inline Schedulable_1_t39CFE1E7639D7FCAF745B12B9A4A2CA62B24BAE5* Schedulable_1_AddTask_mE3CA6CFC745099F44BCD78A2E1D3E1F163AA9982 (Schedulable_1_t39CFE1E7639D7FCAF745B12B9A4A2CA62B24BAE5* __this, RuntimeObject* ___0_scheduler, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_pred, const RuntimeMethod* method)
{
	return ((  Schedulable_1_t39CFE1E7639D7FCAF745B12B9A4A2CA62B24BAE5* (*) (Schedulable_1_t39CFE1E7639D7FCAF745B12B9A4A2CA62B24BAE5*, RuntimeObject*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))Schedulable_1_AddTask_mE3CA6CFC745099F44BCD78A2E1D3E1F163AA9982_gshared)(__this, ___0_scheduler, ___1_pred, method);
}
// System.Void DepthFirstScheduler.Schedulable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m57350C5856ED28F786AB1FDD739F5E1C75A56CDA (U3CU3Ec_tAC22565E0BAAE2BD63D233D23526464A6E4D839B* __this, const RuntimeMethod* method) ;
// System.Void DepthFirstScheduler.Scheduler/CurrentThreadScheduler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurrentThreadScheduler__ctor_mD6C6AA3F41F896DD9C3692AC58313324F9EDBF25 (CurrentThreadScheduler_t615B9E89AE1B5FAB26CC3B9170FF6D0A8C5C32C9* __this, const RuntimeMethod* method) ;
// System.Void DepthFirstScheduler.Scheduler/StepScheduler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StepScheduler__ctor_m00941AFD6610CF7FFD514DF3A124D3BC8F0FF7C8 (StepScheduler_t09FEF8CFAB003524F34FE965F7138CB1E1C2FF28* __this, const RuntimeMethod* method) ;
// System.Void DepthFirstScheduler.Scheduler/ThreadPoolScheduler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadPoolScheduler__ctor_mB5230C631ABBF77C562455CD969C4A67308D3EA4 (ThreadPoolScheduler_t8734547779F29DE0E1ED11F3278962B10DEE8E40* __this, const RuntimeMethod* method) ;
// System.Void DepthFirstScheduler.Scheduler/ThreadScheduler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadScheduler__ctor_mC1A7209620D396ADE415BBD3B66B4B27890DF7F9 (ThreadScheduler_t537C2059D25B13EEC4806EBD8FA3F1CBE7705C50* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Queue`1<DepthFirstScheduler.TaskChain> DepthFirstScheduler.Scheduler/CurrentThreadScheduler::GetQueue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* CurrentThreadScheduler_GetQueue_m002E52175C20844D716A37A8DC3527944752E202_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<DepthFirstScheduler.TaskChain>::.ctor(System.Int32)
inline void Queue_1__ctor_mC3598FD68D21F0C4CAF515483D5ACE7C1805366A (Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8*, int32_t, const RuntimeMethod*))Queue_1__ctor_m487BCAF8F7A2FB003B54B1E744B80FB6651B4963_gshared)(__this, ___0_capacity, method);
}
// System.Void System.Collections.Generic.Queue`1<DepthFirstScheduler.TaskChain>::Enqueue(T)
inline void Queue_1_Enqueue_mBFE01B20CC307A78B88F025DC869ACFBEFD243F0 (Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* __this, TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8*, TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___0_item, method);
}
// System.Void DepthFirstScheduler.Scheduler/CurrentThreadScheduler::SetQueue(System.Collections.Generic.Queue`1<DepthFirstScheduler.TaskChain>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CurrentThreadScheduler_SetQueue_m030AC3D1C020612D129197986D4D6C8D084EDC42_inline (Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* ___0_newQueue, const RuntimeMethod* method) ;
// System.Void DepthFirstScheduler.Scheduler/Trampoline::Run(System.Collections.Generic.Queue`1<DepthFirstScheduler.TaskChain>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trampoline_Run_m213696A86667EECE467F62F23F17820B9126C3D8 (Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* ___0_queue, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<DepthFirstScheduler.TaskChain>::Clear()
inline void Queue_1_Clear_m18C60A40150AD3FF1A62930EAF781C3DEB24C5B5 (Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8*, const RuntimeMethod*))Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_gshared)(__this, method);
}
// T System.Collections.Generic.Queue`1<DepthFirstScheduler.TaskChain>::Dequeue()
inline TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* Queue_1_Dequeue_m4C723782C81649A08962D7008843BC15F441E2A7 (Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* __this, const RuntimeMethod* method)
{
	return ((  TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* (*) (Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// DepthFirstScheduler.ExecutionStatus DepthFirstScheduler.TaskChain::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskChain_Next_mB59B913FBDA74763199CAE46E86222CE95209431 (TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<DepthFirstScheduler.TaskChain>::get_Count()
inline int32_t Queue_1_get_Count_mCBF6326C20CE3A227279FE057EB64EFB34E2EF44_inline (Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// System.Void DepthFirstScheduler.LockQueue`1<DepthFirstScheduler.TaskChain>::Enqueue(T)
inline void LockQueue_1_Enqueue_mBBCB1B5296B7BDBDD18A1A563FFC7FF72E4BF4F5 (LockQueue_1_tCE05F62CFDC18D642CBBC99CDAAAF1665D0F8DD3* __this, TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* ___0_t, const RuntimeMethod* method)
{
	((  void (*) (LockQueue_1_tCE05F62CFDC18D642CBBC99CDAAAF1665D0F8DD3*, TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E*, const RuntimeMethod*))LockQueue_1_Enqueue_m52C94C31B6352A4115796F16E23E64DEB7DFB75A_gshared)(__this, ___0_t, method);
}
// System.Int32 DepthFirstScheduler.LockQueue`1<DepthFirstScheduler.TaskChain>::get_Count()
inline int32_t LockQueue_1_get_Count_m9F21C87AB63B6016741A7804C1F866A27A31C208 (LockQueue_1_tCE05F62CFDC18D642CBBC99CDAAAF1665D0F8DD3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LockQueue_1_tCE05F62CFDC18D642CBBC99CDAAAF1665D0F8DD3*, const RuntimeMethod*))LockQueue_1_get_Count_m363C1F539A7A6AEE8CE0B6E82722DE3CD12B169C_gshared)(__this, method);
}
// T DepthFirstScheduler.LockQueue`1<DepthFirstScheduler.TaskChain>::Dequeue(System.Int32&)
inline TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* LockQueue_1_Dequeue_mE23BAB21EB8E60D344C4EBB6328EC2BFEE0D88F3 (LockQueue_1_tCE05F62CFDC18D642CBBC99CDAAAF1665D0F8DD3* __this, int32_t* ___0_remain, const RuntimeMethod* method)
{
	return ((  TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* (*) (LockQueue_1_tCE05F62CFDC18D642CBBC99CDAAAF1665D0F8DD3*, int32_t*, const RuntimeMethod*))LockQueue_1_Dequeue_m9E3BA173BE9C8757D423609C5AE0CD307591801E_gshared)(__this, ___0_remain, method);
}
// System.Void DepthFirstScheduler.LockQueue`1<DepthFirstScheduler.TaskChain>::.ctor()
inline void LockQueue_1__ctor_m80909F2E9A93C89C72EA19AC912D3872DE57315D (LockQueue_1_tCE05F62CFDC18D642CBBC99CDAAAF1665D0F8DD3* __this, const RuntimeMethod* method)
{
	((  void (*) (LockQueue_1_tCE05F62CFDC18D642CBBC99CDAAAF1665D0F8DD3*, const RuntimeMethod*))LockQueue_1__ctor_m634654E996A94204E7B38C086B78BAF73600139B_gshared)(__this, method);
}
// System.Void DepthFirstScheduler.Scheduler/ThreadPoolScheduler/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m095B0B39D7BD4E86983A965A22C03989A18BFF60 (U3CU3Ec__DisplayClass0_0_tD53261C6B2302E54F50300401F30CEC7EA501B95* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_m24B9C1887DBABE1F408E31475AF15B9B9A08854D (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___0_callBack, const RuntimeMethod* method) ;
// System.Void DepthFirstScheduler.MonitorQueue`1<DepthFirstScheduler.TaskChain>::.ctor()
inline void MonitorQueue_1__ctor_m8D4A54E98E00952B71337C0D00E9FD624CA88C67 (MonitorQueue_1_t11ECF6EA2905CD822FBD4CBC675A42E9B2ABB156* __this, const RuntimeMethod* method)
{
	((  void (*) (MonitorQueue_1_t11ECF6EA2905CD822FBD4CBC675A42E9B2ABB156*, const RuntimeMethod*))MonitorQueue_1__ctor_mE3B161EC40F018430DCC0C4AA13EF01F0FB2384B_gshared)(__this, method);
}
// System.Void System.Threading.ParameterizedThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterizedThreadStart__ctor_m31EA734851CB478E822BAB7E1B479CA4FDBF2718 (ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::.ctor(System.Threading.ParameterizedThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m7319B115C7E11770EEEC7F1D4A01A50E29550700 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9* ___0_start, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Start(System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m64E3F27883C3CCCE7209F5D2BD268A33D4C71566 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, RuntimeObject* ___0_parameter, const RuntimeMethod* method) ;
// T DepthFirstScheduler.MonitorQueue`1<DepthFirstScheduler.TaskChain>::Dequeue()
inline TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* MonitorQueue_1_Dequeue_m9A1928078C3EE24DA5995577D9DDA6C6C0FB2C76 (MonitorQueue_1_t11ECF6EA2905CD822FBD4CBC675A42E9B2ABB156* __this, const RuntimeMethod* method)
{
	return ((  TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* (*) (MonitorQueue_1_t11ECF6EA2905CD822FBD4CBC675A42E9B2ABB156*, const RuntimeMethod*))MonitorQueue_1_Dequeue_mD4A52FD8D9EB5B682A9176FBDE959B35DE9DE704_gshared)(__this, method);
}
// System.Void DepthFirstScheduler.MonitorQueue`1<DepthFirstScheduler.TaskChain>::Enqueue(T)
inline void MonitorQueue_1_Enqueue_m65726E4D19E75E941D12D075E048B4132C93A2EE (MonitorQueue_1_t11ECF6EA2905CD822FBD4CBC675A42E9B2ABB156* __this, TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* ___0_data, const RuntimeMethod* method)
{
	((  void (*) (MonitorQueue_1_t11ECF6EA2905CD822FBD4CBC675A42E9B2ABB156*, TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E*, const RuntimeMethod*))MonitorQueue_1_Enqueue_mA3CDF16192A9BE15D593EF4E2864650CFEB909D9_gshared)(__this, ___0_data, method);
}
// System.Void System.Threading.Thread::Join()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Join_mB756581AAF5EB028081256E0517892BC8867779F (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void DepthFirstScheduler.TaskChain::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskChain__ctor_mAED150EDE82E2E3D753D8B1CF06BE499121857EC (TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* __this, const RuntimeMethod* method) ;
// System.Void DepthFirstScheduler.Scheduler/StepScheduler::Enqueue(DepthFirstScheduler.TaskChain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StepScheduler_Enqueue_m76720BF40FEA4659AC5B43B631C934F0EAA6EB7C (StepScheduler_t09FEF8CFAB003524F34FE965F7138CB1E1C2FF28* __this, TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Exception>::Invoke(T)
inline void Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* __this, Exception_t* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*, Exception_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Boolean DepthFirstScheduler.Unit::Equals(DepthFirstScheduler.Unit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unit_Equals_mF02931137294908A8B9A5E2107647521E4650596 (Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A* __this, Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A ___0_other, const RuntimeMethod* method) ;
// System.Boolean DepthFirstScheduler.Unit::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unit_Equals_mB50C36A25904AD159D242859F127E5D829964396 (Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 DepthFirstScheduler.Unit::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unit_GetHashCode_m459119921509F9A1B506ACEF693BDFE7A954F7A7 (Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A* __this, const RuntimeMethod* method) ;
// System.String DepthFirstScheduler.Unit::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Unit_ToString_m096BDF2B5B49A4ECDF6ED277E8DC6882282A37DA (Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniGLTF.Zip.ZipArchiveStorage/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3841DF242A291E961FF0803C5ED8DFF1A1A3DD61 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC180EB410EC7150613555B972A05831681D48B84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC180EB410EC7150613555B972A05831681D48B84* L_0 = (U3CU3Ec_tC180EB410EC7150613555B972A05831681D48B84*)il2cpp_codegen_object_new(U3CU3Ec_tC180EB410EC7150613555B972A05831681D48B84_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m6D6C41B3498BF95557C5BDFD94BA73461CA74133(L_0, NULL);
		((U3CU3Ec_tC180EB410EC7150613555B972A05831681D48B84_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC180EB410EC7150613555B972A05831681D48B84_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tC180EB410EC7150613555B972A05831681D48B84_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC180EB410EC7150613555B972A05831681D48B84_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void UniGLTF.Zip.ZipArchiveStorage/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6D6C41B3498BF95557C5BDFD94BA73461CA74133 (U3CU3Ec_tC180EB410EC7150613555B972A05831681D48B84* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String UniGLTF.Zip.ZipArchiveStorage/<>c::<ToString>b__0_0(UniGLTF.Zip.CentralDirectoryFileHeader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToStringU3Eb__0_0_m5D303FFA4C09E204453E7DCBB16C7762C9358746 (U3CU3Ec_tC180EB410EC7150613555B972A05831681D48B84* __this, CentralDirectoryFileHeader_tBB88937CDB5641D59FD5FEDECE80EFEA44098B5C* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("<ZIPArchive\n{0}>", String.Join("", Entries.Select(x => x.ToString() + "\n").ToArray()));
		CentralDirectoryFileHeader_tBB88937CDB5641D59FD5FEDECE80EFEA44098B5C* L_0 = ___0_x;
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		return L_2;
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
// System.Void UniGLTF.Zip.ZipArchiveStorage/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m7ED750F1E4A531C81F17A2DC644B8DE77BDCE1B0 (U3CU3Ec__DisplayClass5_0_t7CCEA93A22341A2E02A2833F4E3815D2C90EBEE3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean UniGLTF.Zip.ZipArchiveStorage/<>c__DisplayClass5_0::<Get>b__0(UniGLTF.Zip.CentralDirectoryFileHeader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass5_0_U3CGetU3Eb__0_m1B0B45338FC9A07977990BEC148DB1AEC6E8189D (U3CU3Ec__DisplayClass5_0_t7CCEA93A22341A2E02A2833F4E3815D2C90EBEE3* __this, CentralDirectoryFileHeader_tBB88937CDB5641D59FD5FEDECE80EFEA44098B5C* ___0_x, const RuntimeMethod* method) 
{
	{
		// var found = Entries.FirstOrDefault(x => x.FileName == url);
		CentralDirectoryFileHeader_tBB88937CDB5641D59FD5FEDECE80EFEA44098B5C* L_0 = ___0_x;
		String_t* L_1;
		L_1 = CommonHeader_get_FileName_m1B58286382761DBAFD9F5911351D311D09DEF7B3(L_0, NULL);
		String_t* L_2 = __this->___url_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
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
// System.Void UniGLTF.ShaderPropExporter.PreExportShadersAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreExportShadersAttribute__ctor_m4A56EBA7037D7D841BA2D8A90CB3BE86128C87A2 (PreExportShadersAttribute_tFAC060D43264C6113FE055289B240F2FFC03B885* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void UniGLTF.ShaderPropExporter.PreExportShaderAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreExportShaderAttribute__ctor_m4CEA7CAAEB6A4C4A4C3C40BD014FF055FB89C50E (PreExportShaderAttribute_t8D9809E8CFB4A4557430A5755A66061EB87269F5* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// Conversion methods for marshalling of: UniGLTF.ShaderPropExporter.SupportedShader
IL2CPP_EXTERN_C void SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD_marshal_pinvoke(const SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD& unmarshaled, SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD_marshaled_pinvoke& marshaled)
{
	marshaled.___TargetFolder_0 = il2cpp_codegen_marshal_string(unmarshaled.___TargetFolder_0);
	marshaled.___ShaderName_1 = il2cpp_codegen_marshal_string(unmarshaled.___ShaderName_1);
}
IL2CPP_EXTERN_C void SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD_marshal_pinvoke_back(const SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD_marshaled_pinvoke& marshaled, SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD& unmarshaled)
{
	unmarshaled.___TargetFolder_0 = il2cpp_codegen_marshal_string_result(marshaled.___TargetFolder_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TargetFolder_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___TargetFolder_0));
	unmarshaled.___ShaderName_1 = il2cpp_codegen_marshal_string_result(marshaled.___ShaderName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ShaderName_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___ShaderName_1));
}
// Conversion method for clean up from marshalling of: UniGLTF.ShaderPropExporter.SupportedShader
IL2CPP_EXTERN_C void SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD_marshal_pinvoke_cleanup(SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___TargetFolder_0);
	marshaled.___TargetFolder_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___ShaderName_1);
	marshaled.___ShaderName_1 = NULL;
}
// Conversion methods for marshalling of: UniGLTF.ShaderPropExporter.SupportedShader
IL2CPP_EXTERN_C void SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD_marshal_com(const SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD& unmarshaled, SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD_marshaled_com& marshaled)
{
	marshaled.___TargetFolder_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___TargetFolder_0);
	marshaled.___ShaderName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___ShaderName_1);
}
IL2CPP_EXTERN_C void SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD_marshal_com_back(const SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD_marshaled_com& marshaled, SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD& unmarshaled)
{
	unmarshaled.___TargetFolder_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___TargetFolder_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TargetFolder_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___TargetFolder_0));
	unmarshaled.___ShaderName_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___ShaderName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ShaderName_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___ShaderName_1));
}
// Conversion method for clean up from marshalling of: UniGLTF.ShaderPropExporter.SupportedShader
IL2CPP_EXTERN_C void SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD_marshal_com_cleanup(SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___TargetFolder_0);
	marshaled.___TargetFolder_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___ShaderName_1);
	marshaled.___ShaderName_1 = NULL;
}
// System.Void UniGLTF.ShaderPropExporter.SupportedShader::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedShader__ctor_m4B124BA4FD1C9016E02B29151C87AFF920CF0A46 (SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD* __this, String_t* ___0_targetFolder, String_t* ___1_shaderName, const RuntimeMethod* method) 
{
	{
		// TargetFolder = targetFolder;
		String_t* L_0 = ___0_targetFolder;
		__this->___TargetFolder_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TargetFolder_0), (void*)L_0);
		// ShaderName = shaderName;
		String_t* L_1 = ___1_shaderName;
		__this->___ShaderName_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ShaderName_1), (void*)L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SupportedShader__ctor_m4B124BA4FD1C9016E02B29151C87AFF920CF0A46_AdjustorThunk (RuntimeObject* __this, String_t* ___0_targetFolder, String_t* ___1_shaderName, const RuntimeMethod* method)
{
	SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD*>(__this + _offset);
	SupportedShader__ctor_m4B124BA4FD1C9016E02B29151C87AFF920CF0A46(_thisAdjusted, ___0_targetFolder, ___1_shaderName, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UniGLTF.ShaderPropExporter.ShaderProps UniGLTF.ShaderPropExporter.PreShaderPropExporter::GetPropsForSupportedShader(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* PreShaderPropExporter_GetPropsForSupportedShader_mC12F64EFB6D6827E64D951E7071D7C196D2AB2CD (String_t* ___0_shaderName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m48A495425B604D5E9111229379AA45DF27806631_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m4C31AFC006F2A82A3464C2C5F620AEE8809B47A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mF1E5D7383BFC26A82A10D42650A4EE167D9B091B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tCF7516CE51B39B9C8416CEB844633D6AC735739D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m3E0AEB8F3C3953ABFEC50FE77BF3B32552C80D22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m0E88FF128ADD89043FB8F078C432663C7BCE4648_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreExportShaderAttribute_t8D9809E8CFB4A4557430A5755A66061EB87269F5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreShaderPropExporter_t33693D745BAEF8D0D7281EB7F8A08627BB61A5D7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreShaderPropExporter_t33693D745BAEF8D0D7281EB7F8A08627BB61A5D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* V_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* V_1 = NULL;
	int32_t V_2 = 0;
	PropertyInfo_t* V_3 = NULL;
	KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (m_shaderPropMap == null)
		il2cpp_codegen_runtime_class_init_inline(PreShaderPropExporter_t33693D745BAEF8D0D7281EB7F8A08627BB61A5D7_il2cpp_TypeInfo_var);
		Dictionary_2_tCF7516CE51B39B9C8416CEB844633D6AC735739D* L_0 = ((PreShaderPropExporter_t33693D745BAEF8D0D7281EB7F8A08627BB61A5D7_StaticFields*)il2cpp_codegen_static_fields_for(PreShaderPropExporter_t33693D745BAEF8D0D7281EB7F8A08627BB61A5D7_il2cpp_TypeInfo_var))->___m_shaderPropMap_2;
		if (L_0)
		{
			goto IL_0074;
		}
	}
	{
		// m_shaderPropMap = new Dictionary<string, ShaderProps>();
		Dictionary_2_tCF7516CE51B39B9C8416CEB844633D6AC735739D* L_1 = (Dictionary_2_tCF7516CE51B39B9C8416CEB844633D6AC735739D*)il2cpp_codegen_object_new(Dictionary_2_tCF7516CE51B39B9C8416CEB844633D6AC735739D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mF1E5D7383BFC26A82A10D42650A4EE167D9B091B(L_1, Dictionary_2__ctor_mF1E5D7383BFC26A82A10D42650A4EE167D9B091B_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(PreShaderPropExporter_t33693D745BAEF8D0D7281EB7F8A08627BB61A5D7_il2cpp_TypeInfo_var);
		((PreShaderPropExporter_t33693D745BAEF8D0D7281EB7F8A08627BB61A5D7_StaticFields*)il2cpp_codegen_static_fields_for(PreShaderPropExporter_t33693D745BAEF8D0D7281EB7F8A08627BB61A5D7_il2cpp_TypeInfo_var))->___m_shaderPropMap_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((PreShaderPropExporter_t33693D745BAEF8D0D7281EB7F8A08627BB61A5D7_StaticFields*)il2cpp_codegen_static_fields_for(PreShaderPropExporter_t33693D745BAEF8D0D7281EB7F8A08627BB61A5D7_il2cpp_TypeInfo_var))->___m_shaderPropMap_2), (void*)L_1);
		// foreach (var prop in typeof(PreShaderPropExporter).GetProperties(BindingFlags.Static | BindingFlags.Public | BindingFlags.NonPublic))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (PreShaderPropExporter_t33693D745BAEF8D0D7281EB7F8A08627BB61A5D7_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_4;
		L_4 = VirtualFuncInvoker1< PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7*, int32_t >::Invoke(107 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_3, ((int32_t)56));
		V_1 = L_4;
		V_2 = 0;
		goto IL_006e;
	}

IL_0027:
	{
		// foreach (var prop in typeof(PreShaderPropExporter).GetProperties(BindingFlags.Static | BindingFlags.Public | BindingFlags.NonPublic))
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_5 = V_1;
		int32_t L_6 = V_2;
		int32_t L_7 = L_6;
		PropertyInfo_t* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		// if (prop.GetCustomAttributes(typeof(PreExportShaderAttribute), true).Any())
		PropertyInfo_t* L_9 = V_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (PreExportShaderAttribute_t8D9809E8CFB4A4557430A5755A66061EB87269F5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12;
		L_12 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_9, L_11, (bool)1);
		bool L_13;
		L_13 = Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847((RuntimeObject*)L_12, Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_RuntimeMethod_var);
		if (!L_13)
		{
			goto IL_006a;
		}
	}
	{
		// var kv = (KeyValuePair<string, ShaderProps>)prop.GetValue(null, null);
		PropertyInfo_t* L_14 = V_3;
		RuntimeObject* L_15;
		L_15 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(22 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_14, NULL, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		V_4 = ((*(KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802*)((KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802*)(KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802*)UnBox(L_15, KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802_il2cpp_TypeInfo_var))));
		// m_shaderPropMap.Add(kv.Key, kv.Value);
		il2cpp_codegen_runtime_class_init_inline(PreShaderPropExporter_t33693D745BAEF8D0D7281EB7F8A08627BB61A5D7_il2cpp_TypeInfo_var);
		Dictionary_2_tCF7516CE51B39B9C8416CEB844633D6AC735739D* L_16 = ((PreShaderPropExporter_t33693D745BAEF8D0D7281EB7F8A08627BB61A5D7_StaticFields*)il2cpp_codegen_static_fields_for(PreShaderPropExporter_t33693D745BAEF8D0D7281EB7F8A08627BB61A5D7_il2cpp_TypeInfo_var))->___m_shaderPropMap_2;
		String_t* L_17;
		L_17 = KeyValuePair_2_get_Key_m3E0AEB8F3C3953ABFEC50FE77BF3B32552C80D22_inline((&V_4), KeyValuePair_2_get_Key_m3E0AEB8F3C3953ABFEC50FE77BF3B32552C80D22_RuntimeMethod_var);
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_18;
		L_18 = KeyValuePair_2_get_Value_m0E88FF128ADD89043FB8F078C432663C7BCE4648_inline((&V_4), KeyValuePair_2_get_Value_m0E88FF128ADD89043FB8F078C432663C7BCE4648_RuntimeMethod_var);
		Dictionary_2_Add_m48A495425B604D5E9111229379AA45DF27806631(L_16, L_17, L_18, Dictionary_2_Add_m48A495425B604D5E9111229379AA45DF27806631_RuntimeMethod_var);
	}

IL_006a:
	{
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_006e:
	{
		// foreach (var prop in typeof(PreShaderPropExporter).GetProperties(BindingFlags.Static | BindingFlags.Public | BindingFlags.NonPublic))
		int32_t L_20 = V_2;
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_21 = V_1;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0027;
		}
	}

IL_0074:
	{
		// if (m_shaderPropMap.TryGetValue(shaderName, out props))
		il2cpp_codegen_runtime_class_init_inline(PreShaderPropExporter_t33693D745BAEF8D0D7281EB7F8A08627BB61A5D7_il2cpp_TypeInfo_var);
		Dictionary_2_tCF7516CE51B39B9C8416CEB844633D6AC735739D* L_22 = ((PreShaderPropExporter_t33693D745BAEF8D0D7281EB7F8A08627BB61A5D7_StaticFields*)il2cpp_codegen_static_fields_for(PreShaderPropExporter_t33693D745BAEF8D0D7281EB7F8A08627BB61A5D7_il2cpp_TypeInfo_var))->___m_shaderPropMap_2;
		String_t* L_23 = ___0_shaderName;
		bool L_24;
		L_24 = Dictionary_2_TryGetValue_m4C31AFC006F2A82A3464C2C5F620AEE8809B47A8(L_22, L_23, (&V_0), Dictionary_2_TryGetValue_m4C31AFC006F2A82A3464C2C5F620AEE8809B47A8_RuntimeMethod_var);
		if (!L_24)
		{
			goto IL_0085;
		}
	}
	{
		// return props;
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_25 = V_0;
		return L_25;
	}

IL_0085:
	{
		// return null;
		return (ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD*)NULL;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_Standard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802 PreShaderPropExporter_get_Standard_mB095865F25B64466D4084077D9C649C1DBC8CEAE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral326129114EB43E5A03AD980A3709D55FE7934916);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38B8C8C0BD25C5963BB0276F350E52AE4F3288D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40BFB095782D36D1B276A40A276C76911EF9318F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FC108C6FF0A706B87BCEE07E7584DC45FD16B4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51E77BE760A981E17113C4BA376BD85874B58A45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58D77E1ECF3579ADA2EDE01E1640D1E1CA4A37E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60BECFD9EBE7638FECA5779A69100169C8558400);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E08E58AD13E5769D3AFD33FB33C17E306122492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D61FA9D9BE7581D7E2EE28C775ABE0D4B8C3D69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F94A8E8715AB28B4A3A63F016AFABE058C94FF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral915923FF23DAC30B2D70516B4F5D56256E060201);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BF9FDA83C54B3E4D921C2ABBCF673E2E2E37FBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2A3DF99788A73C2F0FE7267B988915F72D2C1F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC2205CB3AEC457605CBAE18F9FEEECC950BD105);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB32F137D7398FFB53E5E7ACA2526882ADE8473A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB06293E3070D888955542383617A31852FFF8DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF17A9BFA8A9CE193E1BCDFA78953986FDA621F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE147FC8F66BE740F2F8674E00CBC75BC21B73934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA079692DED56FA02201B916BF75CCB06628ED3B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0D9104AB624D4BF63F12ED168216DC1948D19B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF42B6EC895E3DC70F8183E72033DF05F5B5CF6D2);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "Standard",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_Color", ShaderPropertyType.Color)
		// ,new ShaderProperty("_MainTex", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_Cutoff", ShaderPropertyType.Range)
		// ,new ShaderProperty("_Glossiness", ShaderPropertyType.Range)
		// ,new ShaderProperty("_GlossMapScale", ShaderPropertyType.Range)
		// ,new ShaderProperty("_SmoothnessTextureChannel", ShaderPropertyType.Float)
		// ,new ShaderProperty("_Metallic", ShaderPropertyType.Range)
		// ,new ShaderProperty("_MetallicGlossMap", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_SpecularHighlights", ShaderPropertyType.Float)
		// ,new ShaderProperty("_GlossyReflections", ShaderPropertyType.Float)
		// ,new ShaderProperty("_BumpScale", ShaderPropertyType.Float)
		// ,new ShaderProperty("_BumpMap", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_Parallax", ShaderPropertyType.Range)
		// ,new ShaderProperty("_ParallaxMap", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_OcclusionStrength", ShaderPropertyType.Range)
		// ,new ShaderProperty("_OcclusionMap", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_EmissionColor", ShaderPropertyType.Color)
		// ,new ShaderProperty("_EmissionMap", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_DetailMask", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_DetailAlbedoMap", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_DetailNormalMapScale", ShaderPropertyType.Float)
		// ,new ShaderProperty("_DetailNormalMap", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_UVSec", ShaderPropertyType.Float)
		// ,new ShaderProperty("_Mode", ShaderPropertyType.Float)
		// ,new ShaderProperty("_SrcBlend", ShaderPropertyType.Float)
		// ,new ShaderProperty("_DstBlend", ShaderPropertyType.Float)
		// ,new ShaderProperty("_ZWrite", ShaderPropertyType.Float)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_0 = (ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD*)il2cpp_codegen_object_new(ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD_il2cpp_TypeInfo_var);
		ShaderProps__ctor_m5D520C4E1B5972147C2E598508BBFFF21346F4E9(L_0, NULL);
		V_0 = L_0;
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_1 = V_0;
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_2 = (ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88*)(ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88*)SZArrayNew(ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88_il2cpp_TypeInfo_var, (uint32_t)((int32_t)27));
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_3 = L_2;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_4), _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, 1, /*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_4);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_5 = L_3;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_6;
		memset((&L_6), 0, sizeof(L_6));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_6), _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, 0, /*hidden argument*/NULL);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_6);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_7 = L_5;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_8;
		memset((&L_8), 0, sizeof(L_8));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_8), _stringLiteral326129114EB43E5A03AD980A3709D55FE7934916, 2, /*hidden argument*/NULL);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_8);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_9 = L_7;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_10;
		memset((&L_10), 0, sizeof(L_10));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_10), _stringLiteralA2A3DF99788A73C2F0FE7267B988915F72D2C1F1, 2, /*hidden argument*/NULL);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_10);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_11 = L_9;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_12;
		memset((&L_12), 0, sizeof(L_12));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_12), _stringLiteralAC2205CB3AEC457605CBAE18F9FEEECC950BD105, 2, /*hidden argument*/NULL);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_12);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_13 = L_11;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_14;
		memset((&L_14), 0, sizeof(L_14));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_14), _stringLiteral51E77BE760A981E17113C4BA376BD85874B58A45, 3, /*hidden argument*/NULL);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_14);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_15 = L_13;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_16;
		memset((&L_16), 0, sizeof(L_16));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_16), _stringLiteral7F94A8E8715AB28B4A3A63F016AFABE058C94FF0, 2, /*hidden argument*/NULL);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_16);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_17 = L_15;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_18;
		memset((&L_18), 0, sizeof(L_18));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_18), _stringLiteralE147FC8F66BE740F2F8674E00CBC75BC21B73934, 0, /*hidden argument*/NULL);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_18);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_19 = L_17;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_20;
		memset((&L_20), 0, sizeof(L_20));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_20), _stringLiteral38B8C8C0BD25C5963BB0276F350E52AE4F3288D3, 3, /*hidden argument*/NULL);
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_20);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_21 = L_19;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_22;
		memset((&L_22), 0, sizeof(L_22));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_22), _stringLiteral6E08E58AD13E5769D3AFD33FB33C17E306122492, 3, /*hidden argument*/NULL);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_22);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_23 = L_21;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_24;
		memset((&L_24), 0, sizeof(L_24));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_24), _stringLiteral915923FF23DAC30B2D70516B4F5D56256E060201, 3, /*hidden argument*/NULL);
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_24);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_25 = L_23;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_26;
		memset((&L_26), 0, sizeof(L_26));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_26), _stringLiteral9BF9FDA83C54B3E4D921C2ABBCF673E2E2E37FBA, 0, /*hidden argument*/NULL);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_26);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_27 = L_25;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_28;
		memset((&L_28), 0, sizeof(L_28));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_28), _stringLiteralF0D9104AB624D4BF63F12ED168216DC1948D19B8, 2, /*hidden argument*/NULL);
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_28);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_29 = L_27;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_30;
		memset((&L_30), 0, sizeof(L_30));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_30), _stringLiteralCB06293E3070D888955542383617A31852FFF8DF, 0, /*hidden argument*/NULL);
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_30);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_31 = L_29;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_32;
		memset((&L_32), 0, sizeof(L_32));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_32), _stringLiteral4FC108C6FF0A706B87BCEE07E7584DC45FD16B4B, 2, /*hidden argument*/NULL);
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_32);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_33 = L_31;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_34;
		memset((&L_34), 0, sizeof(L_34));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_34), _stringLiteral40BFB095782D36D1B276A40A276C76911EF9318F, 0, /*hidden argument*/NULL);
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_34);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_35 = L_33;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_36;
		memset((&L_36), 0, sizeof(L_36));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_36), _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, 1, /*hidden argument*/NULL);
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)16)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_36);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_37 = L_35;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_38;
		memset((&L_38), 0, sizeof(L_38));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_38), _stringLiteralB32F137D7398FFB53E5E7ACA2526882ADE8473A6, 0, /*hidden argument*/NULL);
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)17)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_38);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_39 = L_37;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_40;
		memset((&L_40), 0, sizeof(L_40));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_40), _stringLiteralEA079692DED56FA02201B916BF75CCB06628ED3B, 0, /*hidden argument*/NULL);
		(L_39)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)18)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_40);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_41 = L_39;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_42;
		memset((&L_42), 0, sizeof(L_42));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_42), _stringLiteral58D77E1ECF3579ADA2EDE01E1640D1E1CA4A37E8, 0, /*hidden argument*/NULL);
		(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)19)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_42);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_43 = L_41;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_44;
		memset((&L_44), 0, sizeof(L_44));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_44), _stringLiteralDF17A9BFA8A9CE193E1BCDFA78953986FDA621F1, 3, /*hidden argument*/NULL);
		(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)20)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_44);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_45 = L_43;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_46;
		memset((&L_46), 0, sizeof(L_46));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_46), _stringLiteral60BECFD9EBE7638FECA5779A69100169C8558400, 0, /*hidden argument*/NULL);
		(L_45)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)21)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_46);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_47 = L_45;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_48;
		memset((&L_48), 0, sizeof(L_48));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_48), _stringLiteralF42B6EC895E3DC70F8183E72033DF05F5B5CF6D2, 3, /*hidden argument*/NULL);
		(L_47)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)22)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_48);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_49 = L_47;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_50;
		memset((&L_50), 0, sizeof(L_50));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_50), _stringLiteral7D61FA9D9BE7581D7E2EE28C775ABE0D4B8C3D69, 3, /*hidden argument*/NULL);
		(L_49)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)23)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_50);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_51 = L_49;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_52;
		memset((&L_52), 0, sizeof(L_52));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_52), _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 3, /*hidden argument*/NULL);
		(L_51)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)24)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_52);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_53 = L_51;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_54;
		memset((&L_54), 0, sizeof(L_54));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_54), _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 3, /*hidden argument*/NULL);
		(L_53)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)25)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_54);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_55 = L_53;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_56;
		memset((&L_56), 0, sizeof(L_56));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_56), _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C, 3, /*hidden argument*/NULL);
		(L_55)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)26)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_56);
		L_1->___Properties_0 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Properties_0), (void*)L_55);
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_57 = V_0;
		KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802 L_58;
		memset((&L_58), 0, sizeof(L_58));
		KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209((&L_58), _stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4, L_57, /*hidden argument*/KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209_RuntimeMethod_var);
		return L_58;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_UniGLTF_UniUnlit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802 PreShaderPropExporter_get_UniGLTF_UniUnlit_mCE5DE1A4C6B99C0A1E1CDD95591AC8D2D418A84A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral326129114EB43E5A03AD980A3709D55FE7934916);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59B259A263D1796F7617C20534034F94A19001FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D069221DE352372E43A85A2868AE71709AFBC3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA69C83831B4753F9D2B4F65C16372EA1A6F0482F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8E54DC0584021FDD77DA842B94FD97F28B5A628);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "UniGLTF/UniUnlit",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_MainTex", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_Color", ShaderPropertyType.Color)
		// ,new ShaderProperty("_Cutoff", ShaderPropertyType.Range)
		// ,new ShaderProperty("_BlendMode", ShaderPropertyType.Float)
		// ,new ShaderProperty("_CullMode", ShaderPropertyType.Float)
		// ,new ShaderProperty("_VColBlendMode", ShaderPropertyType.Float)
		// ,new ShaderProperty("_SrcBlend", ShaderPropertyType.Float)
		// ,new ShaderProperty("_DstBlend", ShaderPropertyType.Float)
		// ,new ShaderProperty("_ZWrite", ShaderPropertyType.Float)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_0 = (ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD*)il2cpp_codegen_object_new(ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD_il2cpp_TypeInfo_var);
		ShaderProps__ctor_m5D520C4E1B5972147C2E598508BBFFF21346F4E9(L_0, NULL);
		V_0 = L_0;
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_1 = V_0;
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_2 = (ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88*)(ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88*)SZArrayNew(ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_3 = L_2;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_4), _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, 0, /*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_4);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_5 = L_3;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_6;
		memset((&L_6), 0, sizeof(L_6));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_6), _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, 1, /*hidden argument*/NULL);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_6);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_7 = L_5;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_8;
		memset((&L_8), 0, sizeof(L_8));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_8), _stringLiteral326129114EB43E5A03AD980A3709D55FE7934916, 2, /*hidden argument*/NULL);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_8);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_9 = L_7;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_10;
		memset((&L_10), 0, sizeof(L_10));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_10), _stringLiteralA69C83831B4753F9D2B4F65C16372EA1A6F0482F, 3, /*hidden argument*/NULL);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_10);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_11 = L_9;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_12;
		memset((&L_12), 0, sizeof(L_12));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_12), _stringLiteral59B259A263D1796F7617C20534034F94A19001FE, 3, /*hidden argument*/NULL);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_12);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_13 = L_11;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_14;
		memset((&L_14), 0, sizeof(L_14));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_14), _stringLiteralC8E54DC0584021FDD77DA842B94FD97F28B5A628, 3, /*hidden argument*/NULL);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_14);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_15 = L_13;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_16;
		memset((&L_16), 0, sizeof(L_16));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_16), _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 3, /*hidden argument*/NULL);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_16);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_17 = L_15;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_18;
		memset((&L_18), 0, sizeof(L_18));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_18), _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 3, /*hidden argument*/NULL);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_18);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_19 = L_17;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_20;
		memset((&L_20), 0, sizeof(L_20));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_20), _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C, 3, /*hidden argument*/NULL);
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_20);
		L_1->___Properties_0 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Properties_0), (void*)L_19);
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_21 = V_0;
		KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802 L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209((&L_22), _stringLiteral9D069221DE352372E43A85A2868AE71709AFBC3F, L_21, /*hidden argument*/KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209_RuntimeMethod_var);
		return L_22;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_Unlit_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802 PreShaderPropExporter_get_Unlit_Color_m93986E368971B5194DF2496ABE49C7B865B9AA59 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D93A89666F831FB9324883A9347EA29365E69DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "Unlit/Color",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_Color", ShaderPropertyType.Color)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_0 = (ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD*)il2cpp_codegen_object_new(ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD_il2cpp_TypeInfo_var);
		ShaderProps__ctor_m5D520C4E1B5972147C2E598508BBFFF21346F4E9(L_0, NULL);
		V_0 = L_0;
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_1 = V_0;
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_2 = (ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88*)(ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88*)SZArrayNew(ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88_il2cpp_TypeInfo_var, (uint32_t)1);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_3 = L_2;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_4), _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, 1, /*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_4);
		L_1->___Properties_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Properties_0), (void*)L_3);
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_5 = V_0;
		KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802 L_6;
		memset((&L_6), 0, sizeof(L_6));
		KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209((&L_6), _stringLiteral3D93A89666F831FB9324883A9347EA29365E69DF, L_5, /*hidden argument*/KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209_RuntimeMethod_var);
		return L_6;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_Unlit_Texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802 PreShaderPropExporter_get_Unlit_Texture_m959E25F41FC1A14BD3136BFAC4A92FC57CEC2C6F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral684F9F5743C3D1DE5AF358333F20040FBA298574);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "Unlit/Texture",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_MainTex", ShaderPropertyType.TexEnv)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_0 = (ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD*)il2cpp_codegen_object_new(ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD_il2cpp_TypeInfo_var);
		ShaderProps__ctor_m5D520C4E1B5972147C2E598508BBFFF21346F4E9(L_0, NULL);
		V_0 = L_0;
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_1 = V_0;
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_2 = (ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88*)(ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88*)SZArrayNew(ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88_il2cpp_TypeInfo_var, (uint32_t)1);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_3 = L_2;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_4), _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, 0, /*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_4);
		L_1->___Properties_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Properties_0), (void*)L_3);
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_5 = V_0;
		KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802 L_6;
		memset((&L_6), 0, sizeof(L_6));
		KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209((&L_6), _stringLiteral684F9F5743C3D1DE5AF358333F20040FBA298574, L_5, /*hidden argument*/KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209_RuntimeMethod_var);
		return L_6;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_Unlit_Transparent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802 PreShaderPropExporter_get_Unlit_Transparent_mC40D52AEEC010A48CC957F963D320C52CEFC51BB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9AD78CBFE96EFE3227B6F467DA563E5F6136C6B);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "Unlit/Transparent",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_MainTex", ShaderPropertyType.TexEnv)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_0 = (ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD*)il2cpp_codegen_object_new(ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD_il2cpp_TypeInfo_var);
		ShaderProps__ctor_m5D520C4E1B5972147C2E598508BBFFF21346F4E9(L_0, NULL);
		V_0 = L_0;
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_1 = V_0;
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_2 = (ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88*)(ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88*)SZArrayNew(ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88_il2cpp_TypeInfo_var, (uint32_t)1);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_3 = L_2;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_4), _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, 0, /*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_4);
		L_1->___Properties_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Properties_0), (void*)L_3);
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_5 = V_0;
		KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802 L_6;
		memset((&L_6), 0, sizeof(L_6));
		KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209((&L_6), _stringLiteralB9AD78CBFE96EFE3227B6F467DA563E5F6136C6B, L_5, /*hidden argument*/KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209_RuntimeMethod_var);
		return L_6;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_Unlit_Transparent_Cutout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802 PreShaderPropExporter_get_Unlit_Transparent_Cutout_m8DEC8CDF0C548C02C13032305E89AC59D936DB6C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral326129114EB43E5A03AD980A3709D55FE7934916);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EAA19E6B3D79923759AC0F3C611403170C03B32);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "Unlit/Transparent Cutout",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_MainTex", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_Cutoff", ShaderPropertyType.Range)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_0 = (ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD*)il2cpp_codegen_object_new(ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD_il2cpp_TypeInfo_var);
		ShaderProps__ctor_m5D520C4E1B5972147C2E598508BBFFF21346F4E9(L_0, NULL);
		V_0 = L_0;
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_1 = V_0;
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_2 = (ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88*)(ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88*)SZArrayNew(ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88_il2cpp_TypeInfo_var, (uint32_t)2);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_3 = L_2;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_4), _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, 0, /*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_4);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_5 = L_3;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_6;
		memset((&L_6), 0, sizeof(L_6));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_6), _stringLiteral326129114EB43E5A03AD980A3709D55FE7934916, 2, /*hidden argument*/NULL);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_6);
		L_1->___Properties_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Properties_0), (void*)L_5);
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_7 = V_0;
		KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802 L_8;
		memset((&L_8), 0, sizeof(L_8));
		KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209((&L_8), _stringLiteral5EAA19E6B3D79923759AC0F3C611403170C03B32, L_7, /*hidden argument*/KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209_RuntimeMethod_var);
		return L_8;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_VRM_MToon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802 PreShaderPropExporter_get_VRM_MToon_m4CBF53F909FD1EECE5FCD2DC7A7AA911941C13E7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1232F1D4055DAD90B2422B989CED7F4FE55A98C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral190F8E7A2EE5F0ECB5F3B99A48BCF468A59D1526);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19B50A6FEDC2668C350DF299DDC83E1A4873D7C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CF7FFDB31D8970F37EDC72C88111329205F9669);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DFC8F10738E456123C54F4B530A50ABDDD1ED90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C5DEF38C3D3689AB6F719BCC283EB0DFE8BCFDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30E5B38553E51419924E8EC9DF17949D13973236);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral326129114EB43E5A03AD980A3709D55FE7934916);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AB3801D5903DC14A1F0FABE51F8060D38C36BCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59B259A263D1796F7617C20534034F94A19001FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral650165F35FFDCCFC9A135C7EF035B30377DD7229);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F71C428308BBDDAA9B87455C2B687167C3F78A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81D9EDA345C5B40F47464B7A3FDD94805B6F86E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral915923FF23DAC30B2D70516B4F5D56256E060201);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93FF374E13B6170A58BCF7F129DE52B26AE7DFDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BF9FDA83C54B3E4D921C2ABBCF673E2E2E37FBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E489994D4C2D1FB6036C4A637D4B30F1BD119D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA69C83831B4753F9D2B4F65C16372EA1A6F0482F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADC17917ABE91ECE45DB8FC83D1E5AE5D561978E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB32F137D7398FFB53E5E7ACA2526882ADE8473A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA742A186906F0F8C7697B6B0E504781DA1064D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE5A164234C945013CE7F044C3EE99C37CD7930D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1FD6731DCC40BEB999541837AEACC56DC18E0CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0059090FADDF02EED2889EC3EF70CE420AAA5C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1418B66EFD4F2E84F8EE977170F5ACBF35CE35C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF77AA42AA2620E7B5DEE6C75E8A77962B0B6B2CF);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "VRM/MToon",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_Cutoff", ShaderPropertyType.Range)
		// ,new ShaderProperty("_Color", ShaderPropertyType.Color)
		// ,new ShaderProperty("_ShadeColor", ShaderPropertyType.Color)
		// ,new ShaderProperty("_MainTex", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_ShadeTexture", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_BumpScale", ShaderPropertyType.Float)
		// ,new ShaderProperty("_BumpMap", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_ReceiveShadowRate", ShaderPropertyType.Range)
		// ,new ShaderProperty("_ReceiveShadowTexture", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_ShadingGradeRate", ShaderPropertyType.Range)
		// ,new ShaderProperty("_ShadingGradeTexture", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_ShadeShift", ShaderPropertyType.Range)
		// ,new ShaderProperty("_ShadeToony", ShaderPropertyType.Range)
		// ,new ShaderProperty("_LightColorAttenuation", ShaderPropertyType.Range)
		// ,new ShaderProperty("_IndirectLightIntensity", ShaderPropertyType.Range)
		// ,new ShaderProperty("_SphereAdd", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_EmissionColor", ShaderPropertyType.Color)
		// ,new ShaderProperty("_EmissionMap", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_OutlineWidthTexture", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_OutlineWidth", ShaderPropertyType.Range)
		// ,new ShaderProperty("_OutlineScaledMaxDistance", ShaderPropertyType.Range)
		// ,new ShaderProperty("_OutlineColor", ShaderPropertyType.Color)
		// ,new ShaderProperty("_OutlineLightingMix", ShaderPropertyType.Range)
		// ,new ShaderProperty("_DebugMode", ShaderPropertyType.Float)
		// ,new ShaderProperty("_BlendMode", ShaderPropertyType.Float)
		// ,new ShaderProperty("_OutlineWidthMode", ShaderPropertyType.Float)
		// ,new ShaderProperty("_OutlineColorMode", ShaderPropertyType.Float)
		// ,new ShaderProperty("_CullMode", ShaderPropertyType.Float)
		// ,new ShaderProperty("_OutlineCullMode", ShaderPropertyType.Float)
		// ,new ShaderProperty("_SrcBlend", ShaderPropertyType.Float)
		// ,new ShaderProperty("_DstBlend", ShaderPropertyType.Float)
		// ,new ShaderProperty("_ZWrite", ShaderPropertyType.Float)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_0 = (ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD*)il2cpp_codegen_object_new(ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD_il2cpp_TypeInfo_var);
		ShaderProps__ctor_m5D520C4E1B5972147C2E598508BBFFF21346F4E9(L_0, NULL);
		V_0 = L_0;
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_1 = V_0;
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_2 = (ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88*)(ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88*)SZArrayNew(ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_3 = L_2;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_4), _stringLiteral326129114EB43E5A03AD980A3709D55FE7934916, 2, /*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_4);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_5 = L_3;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_6;
		memset((&L_6), 0, sizeof(L_6));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_6), _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, 1, /*hidden argument*/NULL);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_6);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_7 = L_5;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_8;
		memset((&L_8), 0, sizeof(L_8));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_8), _stringLiteral9E489994D4C2D1FB6036C4A637D4B30F1BD119D5, 1, /*hidden argument*/NULL);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_8);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_9 = L_7;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_10;
		memset((&L_10), 0, sizeof(L_10));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_10), _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, 0, /*hidden argument*/NULL);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_10);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_11 = L_9;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_12;
		memset((&L_12), 0, sizeof(L_12));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_12), _stringLiteral1232F1D4055DAD90B2422B989CED7F4FE55A98C9, 0, /*hidden argument*/NULL);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_12);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_13 = L_11;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_14;
		memset((&L_14), 0, sizeof(L_14));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_14), _stringLiteral915923FF23DAC30B2D70516B4F5D56256E060201, 3, /*hidden argument*/NULL);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_14);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_15 = L_13;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_16;
		memset((&L_16), 0, sizeof(L_16));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_16), _stringLiteral9BF9FDA83C54B3E4D921C2ABBCF673E2E2E37FBA, 0, /*hidden argument*/NULL);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_16);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_17 = L_15;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_18;
		memset((&L_18), 0, sizeof(L_18));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_18), _stringLiteral93FF374E13B6170A58BCF7F129DE52B26AE7DFDC, 2, /*hidden argument*/NULL);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_18);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_19 = L_17;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_20;
		memset((&L_20), 0, sizeof(L_20));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_20), _stringLiteral30E5B38553E51419924E8EC9DF17949D13973236, 0, /*hidden argument*/NULL);
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_20);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_21 = L_19;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_22;
		memset((&L_22), 0, sizeof(L_22));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_22), _stringLiteral650165F35FFDCCFC9A135C7EF035B30377DD7229, 2, /*hidden argument*/NULL);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_22);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_23 = L_21;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_24;
		memset((&L_24), 0, sizeof(L_24));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_24), _stringLiteral190F8E7A2EE5F0ECB5F3B99A48BCF468A59D1526, 0, /*hidden argument*/NULL);
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_24);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_25 = L_23;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_26;
		memset((&L_26), 0, sizeof(L_26));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_26), _stringLiteral1DFC8F10738E456123C54F4B530A50ABDDD1ED90, 2, /*hidden argument*/NULL);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_26);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_27 = L_25;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_28;
		memset((&L_28), 0, sizeof(L_28));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_28), _stringLiteral3AB3801D5903DC14A1F0FABE51F8060D38C36BCE, 2, /*hidden argument*/NULL);
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_28);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_29 = L_27;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_30;
		memset((&L_30), 0, sizeof(L_30));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_30), _stringLiteralADC17917ABE91ECE45DB8FC83D1E5AE5D561978E, 2, /*hidden argument*/NULL);
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_30);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_31 = L_29;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_32;
		memset((&L_32), 0, sizeof(L_32));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_32), _stringLiteralC1FD6731DCC40BEB999541837AEACC56DC18E0CF, 2, /*hidden argument*/NULL);
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_32);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_33 = L_31;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_34;
		memset((&L_34), 0, sizeof(L_34));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_34), _stringLiteralBA742A186906F0F8C7697B6B0E504781DA1064D7, 0, /*hidden argument*/NULL);
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_34);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_35 = L_33;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_36;
		memset((&L_36), 0, sizeof(L_36));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_36), _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, 1, /*hidden argument*/NULL);
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)16)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_36);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_37 = L_35;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_38;
		memset((&L_38), 0, sizeof(L_38));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_38), _stringLiteralB32F137D7398FFB53E5E7ACA2526882ADE8473A6, 0, /*hidden argument*/NULL);
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)17)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_38);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_39 = L_37;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_40;
		memset((&L_40), 0, sizeof(L_40));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_40), _stringLiteral19B50A6FEDC2668C350DF299DDC83E1A4873D7C9, 0, /*hidden argument*/NULL);
		(L_39)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)18)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_40);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_41 = L_39;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_42;
		memset((&L_42), 0, sizeof(L_42));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_42), _stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257, 2, /*hidden argument*/NULL);
		(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)19)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_42);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_43 = L_41;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_44;
		memset((&L_44), 0, sizeof(L_44));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_44), _stringLiteralF77AA42AA2620E7B5DEE6C75E8A77962B0B6B2CF, 2, /*hidden argument*/NULL);
		(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)20)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_44);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_45 = L_43;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_46;
		memset((&L_46), 0, sizeof(L_46));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_46), _stringLiteralD1418B66EFD4F2E84F8EE977170F5ACBF35CE35C, 1, /*hidden argument*/NULL);
		(L_45)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)21)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_46);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_47 = L_45;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_48;
		memset((&L_48), 0, sizeof(L_48));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_48), _stringLiteralBE5A164234C945013CE7F044C3EE99C37CD7930D, 2, /*hidden argument*/NULL);
		(L_47)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)22)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_48);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_49 = L_47;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_50;
		memset((&L_50), 0, sizeof(L_50));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_50), _stringLiteralD0059090FADDF02EED2889EC3EF70CE420AAA5C9, 3, /*hidden argument*/NULL);
		(L_49)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)23)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_50);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_51 = L_49;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_52;
		memset((&L_52), 0, sizeof(L_52));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_52), _stringLiteralA69C83831B4753F9D2B4F65C16372EA1A6F0482F, 3, /*hidden argument*/NULL);
		(L_51)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)24)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_52);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_53 = L_51;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_54;
		memset((&L_54), 0, sizeof(L_54));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_54), _stringLiteral2C5DEF38C3D3689AB6F719BCC283EB0DFE8BCFDE, 3, /*hidden argument*/NULL);
		(L_53)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)25)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_54);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_55 = L_53;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_56;
		memset((&L_56), 0, sizeof(L_56));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_56), _stringLiteral81D9EDA345C5B40F47464B7A3FDD94805B6F86E2, 3, /*hidden argument*/NULL);
		(L_55)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)26)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_56);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_57 = L_55;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_58;
		memset((&L_58), 0, sizeof(L_58));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_58), _stringLiteral59B259A263D1796F7617C20534034F94A19001FE, 3, /*hidden argument*/NULL);
		(L_57)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)27)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_58);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_59 = L_57;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_60;
		memset((&L_60), 0, sizeof(L_60));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_60), _stringLiteral7F71C428308BBDDAA9B87455C2B687167C3F78A5, 3, /*hidden argument*/NULL);
		(L_59)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)28)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_60);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_61 = L_59;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_62;
		memset((&L_62), 0, sizeof(L_62));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_62), _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 3, /*hidden argument*/NULL);
		(L_61)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)29)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_62);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_63 = L_61;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_64;
		memset((&L_64), 0, sizeof(L_64));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_64), _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 3, /*hidden argument*/NULL);
		(L_63)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)30)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_64);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_65 = L_63;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_66;
		memset((&L_66), 0, sizeof(L_66));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_66), _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C, 3, /*hidden argument*/NULL);
		(L_65)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)31)), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_66);
		L_1->___Properties_0 = L_65;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Properties_0), (void*)L_65);
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_67 = V_0;
		KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802 L_68;
		memset((&L_68), 0, sizeof(L_68));
		KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209((&L_68), _stringLiteral1CF7FFDB31D8970F37EDC72C88111329205F9669, L_67, /*hidden argument*/KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209_RuntimeMethod_var);
		return L_68;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_VRM_UnlitCutout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802 PreShaderPropExporter_get_VRM_UnlitCutout_mA5407F68C1BB9299A2FB202A35C82F81C54055F4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral326129114EB43E5A03AD980A3709D55FE7934916);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA1EA9A1B125DBC8227444B69329446BAE7DBE6);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "VRM/UnlitCutout",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_MainTex", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_Cutoff", ShaderPropertyType.Range)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_0 = (ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD*)il2cpp_codegen_object_new(ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD_il2cpp_TypeInfo_var);
		ShaderProps__ctor_m5D520C4E1B5972147C2E598508BBFFF21346F4E9(L_0, NULL);
		V_0 = L_0;
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_1 = V_0;
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_2 = (ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88*)(ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88*)SZArrayNew(ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88_il2cpp_TypeInfo_var, (uint32_t)2);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_3 = L_2;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_4), _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, 0, /*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_4);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_5 = L_3;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_6;
		memset((&L_6), 0, sizeof(L_6));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_6), _stringLiteral326129114EB43E5A03AD980A3709D55FE7934916, 2, /*hidden argument*/NULL);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_6);
		L_1->___Properties_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Properties_0), (void*)L_5);
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_7 = V_0;
		KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802 L_8;
		memset((&L_8), 0, sizeof(L_8));
		KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209((&L_8), _stringLiteral5CA1EA9A1B125DBC8227444B69329446BAE7DBE6, L_7, /*hidden argument*/KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209_RuntimeMethod_var);
		return L_8;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_VRM_UnlitTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802 PreShaderPropExporter_get_VRM_UnlitTexture_m3E9CA481494C38FD900413301290ED40B92246D9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC36021300B277DA11A9B13D4303D3176FF7F2D7);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "VRM/UnlitTexture",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_MainTex", ShaderPropertyType.TexEnv)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_0 = (ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD*)il2cpp_codegen_object_new(ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD_il2cpp_TypeInfo_var);
		ShaderProps__ctor_m5D520C4E1B5972147C2E598508BBFFF21346F4E9(L_0, NULL);
		V_0 = L_0;
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_1 = V_0;
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_2 = (ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88*)(ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88*)SZArrayNew(ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88_il2cpp_TypeInfo_var, (uint32_t)1);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_3 = L_2;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_4), _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, 0, /*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_4);
		L_1->___Properties_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Properties_0), (void*)L_3);
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_5 = V_0;
		KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802 L_6;
		memset((&L_6), 0, sizeof(L_6));
		KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209((&L_6), _stringLiteralDC36021300B277DA11A9B13D4303D3176FF7F2D7, L_5, /*hidden argument*/KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209_RuntimeMethod_var);
		return L_6;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_VRM_UnlitTransparent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802 PreShaderPropExporter_get_VRM_UnlitTransparent_m53BF64429F800C599FCFCC738B4090C161E4A43E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7508FBFA90989A889507F7A38F1F0BFFB25CE421);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "VRM/UnlitTransparent",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_MainTex", ShaderPropertyType.TexEnv)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_0 = (ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD*)il2cpp_codegen_object_new(ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD_il2cpp_TypeInfo_var);
		ShaderProps__ctor_m5D520C4E1B5972147C2E598508BBFFF21346F4E9(L_0, NULL);
		V_0 = L_0;
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_1 = V_0;
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_2 = (ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88*)(ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88*)SZArrayNew(ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88_il2cpp_TypeInfo_var, (uint32_t)1);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_3 = L_2;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_4), _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, 0, /*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_4);
		L_1->___Properties_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Properties_0), (void*)L_3);
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_5 = V_0;
		KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802 L_6;
		memset((&L_6), 0, sizeof(L_6));
		KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209((&L_6), _stringLiteral7508FBFA90989A889507F7A38F1F0BFFB25CE421, L_5, /*hidden argument*/KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209_RuntimeMethod_var);
		return L_6;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_VRM_UnlitTransparentZWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802 PreShaderPropExporter_get_VRM_UnlitTransparentZWrite_m5190BA095DC47F91BB651AF69F7EA8E3688777F6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBA7C831DC50E7E9885CC3A53919297A72C39B76);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "VRM/UnlitTransparentZWrite",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_MainTex", ShaderPropertyType.TexEnv)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_0 = (ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD*)il2cpp_codegen_object_new(ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD_il2cpp_TypeInfo_var);
		ShaderProps__ctor_m5D520C4E1B5972147C2E598508BBFFF21346F4E9(L_0, NULL);
		V_0 = L_0;
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_1 = V_0;
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_2 = (ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88*)(ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88*)SZArrayNew(ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88_il2cpp_TypeInfo_var, (uint32_t)1);
		ShaderPropertyU5BU5D_t76DB773FA1AC219BD55C783B3E816C7AF743DB88* L_3 = L_2;
		ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4((&L_4), _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, 0, /*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F)L_4);
		L_1->___Properties_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Properties_0), (void*)L_3);
		ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* L_5 = V_0;
		KeyValuePair_2_tC3860D570AA1803EA9796F1D8FC88FF820D35802 L_6;
		memset((&L_6), 0, sizeof(L_6));
		KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209((&L_6), _stringLiteralDBA7C831DC50E7E9885CC3A53919297A72C39B76, L_5, /*hidden argument*/KeyValuePair_2__ctor_mABF7BF43082168BB4EA4276DAD0834701EAE7209_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void UniGLTF.ShaderPropExporter.PreShaderPropExporter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreShaderPropExporter__cctor_mF6B25D5731C5AA983305EDF5A76F37835E2C1040 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreShaderPropExporter_t33693D745BAEF8D0D7281EB7F8A08627BB61A5D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedShaderU5BU5D_t9AF4D633766F24E2E986D043F44B96099E2AEC4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CF7FFDB31D8970F37EDC72C88111329205F9669);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D93A89666F831FB9324883A9347EA29365E69DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA1EA9A1B125DBC8227444B69329446BAE7DBE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EAA19E6B3D79923759AC0F3C611403170C03B32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral684F9F5743C3D1DE5AF358333F20040FBA298574);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B53D108B835E0DFF5B2DCB4F56BA198075BD11E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7508FBFA90989A889507F7A38F1F0BFFB25CE421);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D069221DE352372E43A85A2868AE71709AFBC3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9AD78CBFE96EFE3227B6F467DA563E5F6136C6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBA7C831DC50E7E9885CC3A53919297A72C39B76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC36021300B277DA11A9B13D4303D3176FF7F2D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9778B0981FF8E88A4B0D9949087837966B685DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static SupportedShader[] SupportedShaders = new SupportedShader[]
		// {
		//     new SupportedShader(TARGET_FOLDER, "Standard"),
		//     new SupportedShader(TARGET_FOLDER, "Unlit/Color"),
		//     new SupportedShader(TARGET_FOLDER, "Unlit/Texture"),
		//     new SupportedShader(TARGET_FOLDER, "Unlit/Transparent"),
		//     new SupportedShader(TARGET_FOLDER, "Unlit/Transparent Cutout"),
		//     new SupportedShader(TARGET_FOLDER, "UniGLTF/UniUnlit"),
		// };
		SupportedShaderU5BU5D_t9AF4D633766F24E2E986D043F44B96099E2AEC4C* L_0 = (SupportedShaderU5BU5D_t9AF4D633766F24E2E986D043F44B96099E2AEC4C*)(SupportedShaderU5BU5D_t9AF4D633766F24E2E986D043F44B96099E2AEC4C*)SZArrayNew(SupportedShaderU5BU5D_t9AF4D633766F24E2E986D043F44B96099E2AEC4C_il2cpp_TypeInfo_var, (uint32_t)6);
		SupportedShaderU5BU5D_t9AF4D633766F24E2E986D043F44B96099E2AEC4C* L_1 = L_0;
		SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD L_2;
		memset((&L_2), 0, sizeof(L_2));
		SupportedShader__ctor_m4B124BA4FD1C9016E02B29151C87AFF920CF0A46((&L_2), _stringLiteral6B53D108B835E0DFF5B2DCB4F56BA198075BD11E, _stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4, /*hidden argument*/NULL);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD)L_2);
		SupportedShaderU5BU5D_t9AF4D633766F24E2E986D043F44B96099E2AEC4C* L_3 = L_1;
		SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD L_4;
		memset((&L_4), 0, sizeof(L_4));
		SupportedShader__ctor_m4B124BA4FD1C9016E02B29151C87AFF920CF0A46((&L_4), _stringLiteral6B53D108B835E0DFF5B2DCB4F56BA198075BD11E, _stringLiteral3D93A89666F831FB9324883A9347EA29365E69DF, /*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD)L_4);
		SupportedShaderU5BU5D_t9AF4D633766F24E2E986D043F44B96099E2AEC4C* L_5 = L_3;
		SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD L_6;
		memset((&L_6), 0, sizeof(L_6));
		SupportedShader__ctor_m4B124BA4FD1C9016E02B29151C87AFF920CF0A46((&L_6), _stringLiteral6B53D108B835E0DFF5B2DCB4F56BA198075BD11E, _stringLiteral684F9F5743C3D1DE5AF358333F20040FBA298574, /*hidden argument*/NULL);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD)L_6);
		SupportedShaderU5BU5D_t9AF4D633766F24E2E986D043F44B96099E2AEC4C* L_7 = L_5;
		SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD L_8;
		memset((&L_8), 0, sizeof(L_8));
		SupportedShader__ctor_m4B124BA4FD1C9016E02B29151C87AFF920CF0A46((&L_8), _stringLiteral6B53D108B835E0DFF5B2DCB4F56BA198075BD11E, _stringLiteralB9AD78CBFE96EFE3227B6F467DA563E5F6136C6B, /*hidden argument*/NULL);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD)L_8);
		SupportedShaderU5BU5D_t9AF4D633766F24E2E986D043F44B96099E2AEC4C* L_9 = L_7;
		SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD L_10;
		memset((&L_10), 0, sizeof(L_10));
		SupportedShader__ctor_m4B124BA4FD1C9016E02B29151C87AFF920CF0A46((&L_10), _stringLiteral6B53D108B835E0DFF5B2DCB4F56BA198075BD11E, _stringLiteral5EAA19E6B3D79923759AC0F3C611403170C03B32, /*hidden argument*/NULL);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD)L_10);
		SupportedShaderU5BU5D_t9AF4D633766F24E2E986D043F44B96099E2AEC4C* L_11 = L_9;
		SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD L_12;
		memset((&L_12), 0, sizeof(L_12));
		SupportedShader__ctor_m4B124BA4FD1C9016E02B29151C87AFF920CF0A46((&L_12), _stringLiteral6B53D108B835E0DFF5B2DCB4F56BA198075BD11E, _stringLiteral9D069221DE352372E43A85A2868AE71709AFBC3F, /*hidden argument*/NULL);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD)L_12);
		((PreShaderPropExporter_t33693D745BAEF8D0D7281EB7F8A08627BB61A5D7_StaticFields*)il2cpp_codegen_static_fields_for(PreShaderPropExporter_t33693D745BAEF8D0D7281EB7F8A08627BB61A5D7_il2cpp_TypeInfo_var))->___SupportedShaders_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((PreShaderPropExporter_t33693D745BAEF8D0D7281EB7F8A08627BB61A5D7_StaticFields*)il2cpp_codegen_static_fields_for(PreShaderPropExporter_t33693D745BAEF8D0D7281EB7F8A08627BB61A5D7_il2cpp_TypeInfo_var))->___SupportedShaders_1), (void*)L_11);
		// public static SupportedShader[] VRMSupportedShaders = new SupportedShader[]
		// {
		//     new SupportedShader(VRM_TARGET_FOLDER, "VRM/MToon"),
		//     new SupportedShader(VRM_TARGET_FOLDER, "VRM/UnlitTexture"),
		//     new SupportedShader(VRM_TARGET_FOLDER, "VRM/UnlitCutout"),
		//     new SupportedShader(VRM_TARGET_FOLDER, "VRM/UnlitTransparent"),
		//     new SupportedShader(VRM_TARGET_FOLDER, "VRM/UnlitTransparentZWrite"),
		// };
		SupportedShaderU5BU5D_t9AF4D633766F24E2E986D043F44B96099E2AEC4C* L_13 = (SupportedShaderU5BU5D_t9AF4D633766F24E2E986D043F44B96099E2AEC4C*)(SupportedShaderU5BU5D_t9AF4D633766F24E2E986D043F44B96099E2AEC4C*)SZArrayNew(SupportedShaderU5BU5D_t9AF4D633766F24E2E986D043F44B96099E2AEC4C_il2cpp_TypeInfo_var, (uint32_t)5);
		SupportedShaderU5BU5D_t9AF4D633766F24E2E986D043F44B96099E2AEC4C* L_14 = L_13;
		SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD L_15;
		memset((&L_15), 0, sizeof(L_15));
		SupportedShader__ctor_m4B124BA4FD1C9016E02B29151C87AFF920CF0A46((&L_15), _stringLiteralF9778B0981FF8E88A4B0D9949087837966B685DD, _stringLiteral1CF7FFDB31D8970F37EDC72C88111329205F9669, /*hidden argument*/NULL);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD)L_15);
		SupportedShaderU5BU5D_t9AF4D633766F24E2E986D043F44B96099E2AEC4C* L_16 = L_14;
		SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD L_17;
		memset((&L_17), 0, sizeof(L_17));
		SupportedShader__ctor_m4B124BA4FD1C9016E02B29151C87AFF920CF0A46((&L_17), _stringLiteralF9778B0981FF8E88A4B0D9949087837966B685DD, _stringLiteralDC36021300B277DA11A9B13D4303D3176FF7F2D7, /*hidden argument*/NULL);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD)L_17);
		SupportedShaderU5BU5D_t9AF4D633766F24E2E986D043F44B96099E2AEC4C* L_18 = L_16;
		SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD L_19;
		memset((&L_19), 0, sizeof(L_19));
		SupportedShader__ctor_m4B124BA4FD1C9016E02B29151C87AFF920CF0A46((&L_19), _stringLiteralF9778B0981FF8E88A4B0D9949087837966B685DD, _stringLiteral5CA1EA9A1B125DBC8227444B69329446BAE7DBE6, /*hidden argument*/NULL);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD)L_19);
		SupportedShaderU5BU5D_t9AF4D633766F24E2E986D043F44B96099E2AEC4C* L_20 = L_18;
		SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD L_21;
		memset((&L_21), 0, sizeof(L_21));
		SupportedShader__ctor_m4B124BA4FD1C9016E02B29151C87AFF920CF0A46((&L_21), _stringLiteralF9778B0981FF8E88A4B0D9949087837966B685DD, _stringLiteral7508FBFA90989A889507F7A38F1F0BFFB25CE421, /*hidden argument*/NULL);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD)L_21);
		SupportedShaderU5BU5D_t9AF4D633766F24E2E986D043F44B96099E2AEC4C* L_22 = L_20;
		SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD L_23;
		memset((&L_23), 0, sizeof(L_23));
		SupportedShader__ctor_m4B124BA4FD1C9016E02B29151C87AFF920CF0A46((&L_23), _stringLiteralF9778B0981FF8E88A4B0D9949087837966B685DD, _stringLiteralDBA7C831DC50E7E9885CC3A53919297A72C39B76, /*hidden argument*/NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (SupportedShader_tDF6B0456824F5659BCE7DD2C6288B8575CD91CCD)L_23);
		((PreShaderPropExporter_t33693D745BAEF8D0D7281EB7F8A08627BB61A5D7_StaticFields*)il2cpp_codegen_static_fields_for(PreShaderPropExporter_t33693D745BAEF8D0D7281EB7F8A08627BB61A5D7_il2cpp_TypeInfo_var))->___VRMSupportedShaders_4 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((PreShaderPropExporter_t33693D745BAEF8D0D7281EB7F8A08627BB61A5D7_StaticFields*)il2cpp_codegen_static_fields_for(PreShaderPropExporter_t33693D745BAEF8D0D7281EB7F8A08627BB61A5D7_il2cpp_TypeInfo_var))->___VRMSupportedShaders_4), (void*)L_22);
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
// Conversion methods for marshalling of: UniGLTF.ShaderPropExporter.ShaderProperty
IL2CPP_EXTERN_C void ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F_marshal_pinvoke(const ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F& unmarshaled, ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F_marshaled_pinvoke& marshaled)
{
	marshaled.___Key_0 = il2cpp_codegen_marshal_string(unmarshaled.___Key_0);
	marshaled.___ShaderPropertyType_1 = unmarshaled.___ShaderPropertyType_1;
}
IL2CPP_EXTERN_C void ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F_marshal_pinvoke_back(const ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F_marshaled_pinvoke& marshaled, ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F& unmarshaled)
{
	unmarshaled.___Key_0 = il2cpp_codegen_marshal_string_result(marshaled.___Key_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Key_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___Key_0));
	int32_t unmarshaledShaderPropertyType_temp_1 = 0;
	unmarshaledShaderPropertyType_temp_1 = marshaled.___ShaderPropertyType_1;
	unmarshaled.___ShaderPropertyType_1 = unmarshaledShaderPropertyType_temp_1;
}
// Conversion method for clean up from marshalling of: UniGLTF.ShaderPropExporter.ShaderProperty
IL2CPP_EXTERN_C void ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F_marshal_pinvoke_cleanup(ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Key_0);
	marshaled.___Key_0 = NULL;
}
// Conversion methods for marshalling of: UniGLTF.ShaderPropExporter.ShaderProperty
IL2CPP_EXTERN_C void ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F_marshal_com(const ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F& unmarshaled, ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F_marshaled_com& marshaled)
{
	marshaled.___Key_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___Key_0);
	marshaled.___ShaderPropertyType_1 = unmarshaled.___ShaderPropertyType_1;
}
IL2CPP_EXTERN_C void ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F_marshal_com_back(const ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F_marshaled_com& marshaled, ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F& unmarshaled)
{
	unmarshaled.___Key_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___Key_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Key_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___Key_0));
	int32_t unmarshaledShaderPropertyType_temp_1 = 0;
	unmarshaledShaderPropertyType_temp_1 = marshaled.___ShaderPropertyType_1;
	unmarshaled.___ShaderPropertyType_1 = unmarshaledShaderPropertyType_temp_1;
}
// Conversion method for clean up from marshalling of: UniGLTF.ShaderPropExporter.ShaderProperty
IL2CPP_EXTERN_C void ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F_marshal_com_cleanup(ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___Key_0);
	marshaled.___Key_0 = NULL;
}
// System.Void UniGLTF.ShaderPropExporter.ShaderProperty::.ctor(System.String,UniGLTF.ShaderPropExporter.ShaderPropertyType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4 (ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F* __this, String_t* ___0_key, int32_t ___1_propType, const RuntimeMethod* method) 
{
	{
		// Key = key;
		String_t* L_0 = ___0_key;
		__this->___Key_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Key_0), (void*)L_0);
		// ShaderPropertyType = propType;
		int32_t L_1 = ___1_propType;
		__this->___ShaderPropertyType_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4_AdjustorThunk (RuntimeObject* __this, String_t* ___0_key, int32_t ___1_propType, const RuntimeMethod* method)
{
	ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShaderProperty_t8AF0BC217D0AAB6AEB3677FF49525DC026A7617F*>(__this + _offset);
	ShaderProperty__ctor_mF395A1784DE7CB9F30FAF5A3DD50082D54C7B7B4(_thisAdjusted, ___0_key, ___1_propType, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniGLTF.ShaderPropExporter.ShaderProps::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderProps__ctor_m5D520C4E1B5972147C2E598508BBFFF21346F4E9 (ShaderProps_t9D85E1200BE9F93CE93B7565562D2AE0798DE1CD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MToon.MToonDefinition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MToonDefinition__ctor_mA075DB04842FF65BE18220F1BADDFC80124D5EE0 (MToonDefinition_t903F9801D7CB352188C70F7084F85190A15F6D15* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void MToon.MetaDefinition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaDefinition__ctor_m0C496CED93E8D98B604BAB24B545C4C4B570C7D4 (MetaDefinition_t75DEF3D69E2B8E1AA665EB08E28AC8274770EF60* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void MToon.RenderingDefinition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderingDefinition__ctor_m1A0ED769D0B0AF5EAEAE1D1107534933E1A07017 (RenderingDefinition_t3B13BE451A3151F1CB86BB750250234D87012D65* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void MToon.ColorDefinition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorDefinition__ctor_m2E5080BEF9929277BB738DFC7B21FBB8041FF667 (ColorDefinition_tA6E1131529870216A0C7BA37ED74404978D96AF7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void MToon.LightingDefinition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightingDefinition__ctor_m7C291BD90B8FBACE64E4D399D3976BC79A035243 (LightingDefinition_tE7A44337B9F6CDEE30749E9437C4EE0B84ABCAC8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void MToon.LitAndShadeMixingDefinition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LitAndShadeMixingDefinition__ctor_m1B0E80674B28E8A82D039C57F86E53CABF6012E1 (LitAndShadeMixingDefinition_t89688F4B755AFB2FE2DAACCA0BB1CDD9B71FBA2E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void MToon.LightingInfluenceDefinition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightingInfluenceDefinition__ctor_m72141EF73F70FB95B8EA412BC60D83533287E262 (LightingInfluenceDefinition_t489DF60FCA3352B6F3E6F65B8AFB1A1BCAB0FDC4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void MToon.EmissionDefinition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionDefinition__ctor_mF60887BB4CAD30FFE90E1C60B50F7D0A3A84CAC5 (EmissionDefinition_tA20BD3838E10D38EA8098B9C296E9F8630D8B9B3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void MToon.MatCapDefinition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatCapDefinition__ctor_mE4A537D7DAAA99DD3AA45D540796904CC029FB14 (MatCapDefinition_t9BC823FEF27F7F0B5A90748E0B88DC37D3A8A5FE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void MToon.NormalDefinition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NormalDefinition__ctor_mB248969E75CCED23D7394E35DF70062F4C82A569 (NormalDefinition_tD5D8120BEBA6577B6BBFAA094727456900D1461D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void MToon.OutlineDefinition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutlineDefinition__ctor_m01D3560723CD26BE54509FC072671DC46C02FA56 (OutlineDefinition_tF5668C9080267CF32544D7914FE991B5B8AEE25A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void MToon.TextureUvCoordsDefinition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureUvCoordsDefinition__ctor_mDD309B0FC506D9B097610F7B63FBAAD932ABD3F3 (TextureUvCoordsDefinition_t2FA4034BC371D1D03DB0A84E29B635580081C46A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void MToon.RenderQueueDefinition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderQueueDefinition__ctor_mD17D05415328DFC8BECC8DFC2971A40AFE7DB555 (RenderQueueDefinition_tA4022C2F52B0C6329338A156A9A19DDF19FFE295* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void MToon.Utils::SetMToonParametersToMaterial(UnityEngine.Material,MToon.MToonDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_SetMToonParametersToMaterial_m63EDA836B012DD57BAF971E4A2178C3C68E8179A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, MToonDefinition_t903F9801D7CB352188C70F7084F85190A15F6D15* ___1_parameters, const RuntimeMethod* method) 
{
	{
		// throw new NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utils_SetMToonParametersToMaterial_m63EDA836B012DD57BAF971E4A2178C3C68E8179A_RuntimeMethod_var)));
	}
}
// MToon.MToonDefinition MToon.Utils::GetMToonParametersFromMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MToonDefinition_t903F9801D7CB352188C70F7084F85190A15F6D15* Utils_GetMToonParametersFromMaterial_mA85D42B611B1865713B23E71A55ABB1D12C9BCA6 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, const RuntimeMethod* method) 
{
	{
		// throw new NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utils_GetMToonParametersFromMaterial_mA85D42B611B1865713B23E71A55ABB1D12C9BCA6_RuntimeMethod_var)));
	}
}
// System.Void MToon.Utils::ValidateProperties(UnityEngine.Material,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_ValidateProperties_m3AF090EFFD7E97413D4F80805C24476B061CD4CC (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, bool ___1_isBlendModeChangedByUser, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1232F1D4055DAD90B2422B989CED7F4FE55A98C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C5DEF38C3D3689AB6F719BCC283EB0DFE8BCFDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59B259A263D1796F7617C20534034F94A19001FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81D9EDA345C5B40F47464B7A3FDD94805B6F86E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BF9FDA83C54B3E4D921C2ABBCF673E2E2E37FBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA69C83831B4753F9D2B4F65C16372EA1A6F0482F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0059090FADDF02EED2889EC3EF70CE420AAA5C9);
		s_Il2CppMethodInitialized = true;
	}
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_0 = NULL;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_1 = NULL;
	{
		// ValidateBlendMode(material, (RenderMode) material.GetFloat(PropBlendMode), isBlendModeChangedByUser);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___0_material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___0_material;
		float L_2;
		L_2 = Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A(L_1, _stringLiteralA69C83831B4753F9D2B4F65C16372EA1A6F0482F, NULL);
		bool L_3 = ___1_isBlendModeChangedByUser;
		Utils_ValidateBlendMode_m4C2F7C217861AFB2ABC92BE968D85E70CBD702C5(L_0, il2cpp_codegen_cast_double_to_int<int32_t>(L_2), L_3, NULL);
		// ValidateNormalMode(material, material.GetTexture(PropBumpMap));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = ___0_material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ___0_material;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_6;
		L_6 = Material_GetTexture_mBA07A377A7DDD29CD53E6F687DE6D49A42C0C719(L_5, _stringLiteral9BF9FDA83C54B3E4D921C2ABBCF673E2E2E37FBA, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		Utils_ValidateNormalMode_mFA5D44C92D0C47BA9D14F033CC325142EFAD242A(L_4, L_7, NULL);
		// ValidateOutlineMode(material,
		//     (OutlineWidthMode) material.GetFloat(PropOutlineWidthMode),
		//     (OutlineColorMode) material.GetFloat(PropOutlineColorMode));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = ___0_material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = ___0_material;
		float L_10;
		L_10 = Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A(L_9, _stringLiteral2C5DEF38C3D3689AB6F719BCC283EB0DFE8BCFDE, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = ___0_material;
		float L_12;
		L_12 = Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A(L_11, _stringLiteral81D9EDA345C5B40F47464B7A3FDD94805B6F86E2, NULL);
		Utils_ValidateOutlineMode_mE3EB9133CFBE8D6512D424F8C54C64262670A2CC(L_8, il2cpp_codegen_cast_double_to_int<int32_t>(L_10), il2cpp_codegen_cast_double_to_int<int32_t>(L_12), NULL);
		// ValidateDebugMode(material, (DebugMode) material.GetFloat(PropDebugMode));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = ___0_material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = ___0_material;
		float L_15;
		L_15 = Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A(L_14, _stringLiteralD0059090FADDF02EED2889EC3EF70CE420AAA5C9, NULL);
		Utils_ValidateDebugMode_m562B018FCDE48D193C9F3F360523E1F514DC1070(L_13, il2cpp_codegen_cast_double_to_int<int32_t>(L_15), NULL);
		// ValidateCullMode(material, (CullMode) material.GetFloat(PropCullMode));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = ___0_material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = ___0_material;
		float L_18;
		L_18 = Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A(L_17, _stringLiteral59B259A263D1796F7617C20534034F94A19001FE, NULL);
		Utils_ValidateCullMode_m1B8E37C56DA7BEB74D77F0EEE70E7F2D4B659836(L_16, il2cpp_codegen_cast_double_to_int<int32_t>(L_18), NULL);
		// var mainTex = material.GetTexture(PropMainTex);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = ___0_material;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_20;
		L_20 = Material_GetTexture_mBA07A377A7DDD29CD53E6F687DE6D49A42C0C719(L_19, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, NULL);
		V_0 = L_20;
		// var shadeTex = material.GetTexture(PropShadeTexture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = ___0_material;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_22;
		L_22 = Material_GetTexture_mBA07A377A7DDD29CD53E6F687DE6D49A42C0C719(L_21, _stringLiteral1232F1D4055DAD90B2422B989CED7F4FE55A98C9, NULL);
		V_1 = L_22;
		// if (mainTex != null && shadeTex == null)
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_23 = V_0;
		bool L_24;
		L_24 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_24)
		{
			goto IL_00a1;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_25 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_25, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_26)
		{
			goto IL_00a1;
		}
	}
	{
		// material.SetTexture(PropShadeTexture, mainTex);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = ___0_material;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_28 = V_0;
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_27, _stringLiteral1232F1D4055DAD90B2422B989CED7F4FE55A98C9, L_28, NULL);
	}

IL_00a1:
	{
		// }
		return;
	}
}
// MToon.RenderQueueRequirement MToon.Utils::GetRenderQueueRequirement(MToon.RenderMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderQueueRequirement_t4A0FFB65A52822A7199C09466B30A93497243302 Utils_GetRenderQueueRequirement_m81B91FE79C44B97B825D4EFA58DBD08910B79544 (int32_t ___0_renderMode, const RuntimeMethod* method) 
{
	RenderQueueRequirement_t4A0FFB65A52822A7199C09466B30A93497243302 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_renderMode;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_003d;
			}
			case 2:
			{
				goto IL_006b;
			}
			case 3:
			{
				goto IL_0099;
			}
		}
	}
	{
		goto IL_00c7;
	}

IL_001b:
	{
		// return new RenderQueueRequirement()
		// {
		//     DefaultValue = shaderDefaultQueue,
		//     MinValue = shaderDefaultQueue,
		//     MaxValue = shaderDefaultQueue,
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(RenderQueueRequirement_t4A0FFB65A52822A7199C09466B30A93497243302));
		(&V_0)->___DefaultValue_0 = (-1);
		(&V_0)->___MinValue_1 = (-1);
		(&V_0)->___MaxValue_2 = (-1);
		RenderQueueRequirement_t4A0FFB65A52822A7199C09466B30A93497243302 L_1 = V_0;
		return L_1;
	}

IL_003d:
	{
		// return new RenderQueueRequirement()
		// {
		//     DefaultValue = (int) RenderQueue.AlphaTest,
		//     MinValue = (int) RenderQueue.AlphaTest,
		//     MaxValue = (int) RenderQueue.AlphaTest,
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(RenderQueueRequirement_t4A0FFB65A52822A7199C09466B30A93497243302));
		(&V_0)->___DefaultValue_0 = ((int32_t)2450);
		(&V_0)->___MinValue_1 = ((int32_t)2450);
		(&V_0)->___MaxValue_2 = ((int32_t)2450);
		RenderQueueRequirement_t4A0FFB65A52822A7199C09466B30A93497243302 L_2 = V_0;
		return L_2;
	}

IL_006b:
	{
		// return new RenderQueueRequirement()
		// {
		//     DefaultValue = (int) RenderQueue.Transparent,
		//     MinValue = (int) RenderQueue.Transparent - spanOfQueue + 1,
		//     MaxValue = (int) RenderQueue.Transparent,
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(RenderQueueRequirement_t4A0FFB65A52822A7199C09466B30A93497243302));
		(&V_0)->___DefaultValue_0 = ((int32_t)3000);
		(&V_0)->___MinValue_1 = ((int32_t)2951);
		(&V_0)->___MaxValue_2 = ((int32_t)3000);
		RenderQueueRequirement_t4A0FFB65A52822A7199C09466B30A93497243302 L_3 = V_0;
		return L_3;
	}

IL_0099:
	{
		// return new RenderQueueRequirement()
		// {
		//     DefaultValue = firstTransparentQueue,
		//     MinValue = firstTransparentQueue,
		//     MaxValue = firstTransparentQueue + spanOfQueue - 1,
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(RenderQueueRequirement_t4A0FFB65A52822A7199C09466B30A93497243302));
		(&V_0)->___DefaultValue_0 = ((int32_t)2501);
		(&V_0)->___MinValue_1 = ((int32_t)2501);
		(&V_0)->___MaxValue_2 = ((int32_t)2550);
		RenderQueueRequirement_t4A0FFB65A52822A7199C09466B30A93497243302 L_4 = V_0;
		return L_4;
	}

IL_00c7:
	{
		// throw new ArgumentOutOfRangeException("renderMode", renderMode, null);
		int32_t L_5 = ___0_renderMode;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RenderMode_t3E9D7E486E29D29C79CCCBAADA7B4DC85D54F763_il2cpp_TypeInfo_var)), &L_6);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral05CAACB43AE60632DFAEDD8AFD98A0C279C2A0F7)), L_7, (String_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utils_GetRenderQueueRequirement_m81B91FE79C44B97B825D4EFA58DBD08910B79544_RuntimeMethod_var)));
	}
}
// System.Void MToon.Utils::ValidateDebugMode(UnityEngine.Material,MToon.DebugMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_ValidateDebugMode_m562B018FCDE48D193C9F3F360523E1F514DC1070 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, int32_t ___1_debugMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral709A3080636DE7247244D1C92D73863AB8827B81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9A9803A2F865A6AE859153F70A100ACC2DD5E97);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___1_debugMode;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0013;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_0045;
			}
		}
	}
	{
		return;
	}

IL_0013:
	{
		// SetKeyword(material, KeyDebugNormal, false);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___0_material;
		Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF(L_1, _stringLiteralE9A9803A2F865A6AE859153F70A100ACC2DD5E97, (bool)0, NULL);
		// SetKeyword(material, KeyDebugLitShadeRate, false);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___0_material;
		Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF(L_2, _stringLiteral709A3080636DE7247244D1C92D73863AB8827B81, (bool)0, NULL);
		// break;
		return;
	}

IL_002c:
	{
		// SetKeyword(material, KeyDebugNormal, true);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___0_material;
		Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF(L_3, _stringLiteralE9A9803A2F865A6AE859153F70A100ACC2DD5E97, (bool)1, NULL);
		// SetKeyword(material, KeyDebugLitShadeRate, false);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = ___0_material;
		Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF(L_4, _stringLiteral709A3080636DE7247244D1C92D73863AB8827B81, (bool)0, NULL);
		// break;
		return;
	}

IL_0045:
	{
		// SetKeyword(material, KeyDebugNormal, false);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ___0_material;
		Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF(L_5, _stringLiteralE9A9803A2F865A6AE859153F70A100ACC2DD5E97, (bool)0, NULL);
		// SetKeyword(material, KeyDebugLitShadeRate, true);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = ___0_material;
		Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF(L_6, _stringLiteral709A3080636DE7247244D1C92D73863AB8827B81, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MToon.Utils::ValidateBlendMode(UnityEngine.Material,MToon.RenderMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_ValidateBlendMode_m4C2F7C217861AFB2ABC92BE968D85E70CBD702C5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, int32_t ___1_renderMode, bool ___2_isChangedByUser, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3223D004C9379F2B3083B62944F7924A92190F90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52CBE4A5A42509939BB9DB58A4B9A2C9BBA81C1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61304A4D1A7F7C3C856F975F251F1F79885933C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC5B3304C047D60B4E3EC2809E3CE3FA62191A79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBCD3D866AF896F9B010A0FEE7F961DBC91A08C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF318A9CBF6133558944579D6309707D3FF4760E1);
		s_Il2CppMethodInitialized = true;
	}
	RenderQueueRequirement_t4A0FFB65A52822A7199C09466B30A93497243302 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___1_renderMode;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0078;
			}
			case 2:
			{
				goto IL_00d5;
			}
			case 3:
			{
				goto IL_0130;
			}
		}
	}
	{
		goto IL_0189;
	}

IL_001b:
	{
		// material.SetOverrideTag(TagRenderTypeKey, TagRenderTypeValueOpaque);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___0_material;
		Material_SetOverrideTag_mD68833CD28EBAF71CB6AF127B38075629B74FE08(L_1, _stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4, _stringLiteral3223D004C9379F2B3083B62944F7924A92190F90, NULL);
		// material.SetInt(PropSrcBlend, (int) BlendMode.One);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___0_material;
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_2, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// material.SetInt(PropDstBlend, (int) BlendMode.Zero);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___0_material;
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_3, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 0, NULL);
		// material.SetInt(PropZWrite, 1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = ___0_material;
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_4, _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C, 1, NULL);
		// SetKeyword(material, KeyAlphaTestOn, false);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ___0_material;
		Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF(L_5, _stringLiteralCBCD3D866AF896F9B010A0FEE7F961DBC91A08C5, (bool)0, NULL);
		// SetKeyword(material, KeyAlphaBlendOn, false);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = ___0_material;
		Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF(L_6, _stringLiteral52CBE4A5A42509939BB9DB58A4B9A2C9BBA81C1C, (bool)0, NULL);
		// SetKeyword(material, KeyAlphaPremultiplyOn, false);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = ___0_material;
		Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF(L_7, _stringLiteral61304A4D1A7F7C3C856F975F251F1F79885933C8, (bool)0, NULL);
		// break;
		goto IL_0189;
	}

IL_0078:
	{
		// material.SetOverrideTag(TagRenderTypeKey, TagRenderTypeValueTransparentCutout);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = ___0_material;
		Material_SetOverrideTag_mD68833CD28EBAF71CB6AF127B38075629B74FE08(L_8, _stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4, _stringLiteralAC5B3304C047D60B4E3EC2809E3CE3FA62191A79, NULL);
		// material.SetInt(PropSrcBlend, (int) BlendMode.One);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = ___0_material;
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_9, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// material.SetInt(PropDstBlend, (int) BlendMode.Zero);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = ___0_material;
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_10, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 0, NULL);
		// material.SetInt(PropZWrite, 1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = ___0_material;
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_11, _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C, 1, NULL);
		// SetKeyword(material, KeyAlphaTestOn, true);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = ___0_material;
		Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF(L_12, _stringLiteralCBCD3D866AF896F9B010A0FEE7F961DBC91A08C5, (bool)1, NULL);
		// SetKeyword(material, KeyAlphaBlendOn, false);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = ___0_material;
		Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF(L_13, _stringLiteral52CBE4A5A42509939BB9DB58A4B9A2C9BBA81C1C, (bool)0, NULL);
		// SetKeyword(material, KeyAlphaPremultiplyOn, false);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = ___0_material;
		Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF(L_14, _stringLiteral61304A4D1A7F7C3C856F975F251F1F79885933C8, (bool)0, NULL);
		// break;
		goto IL_0189;
	}

IL_00d5:
	{
		// material.SetOverrideTag(TagRenderTypeKey, TagRenderTypeValueTransparent);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = ___0_material;
		Material_SetOverrideTag_mD68833CD28EBAF71CB6AF127B38075629B74FE08(L_15, _stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4, _stringLiteralF318A9CBF6133558944579D6309707D3FF4760E1, NULL);
		// material.SetInt(PropSrcBlend, (int) BlendMode.SrcAlpha);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = ___0_material;
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_16, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 5, NULL);
		// material.SetInt(PropDstBlend, (int) BlendMode.OneMinusSrcAlpha);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = ___0_material;
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_17, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
		// material.SetInt(PropZWrite, 0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = ___0_material;
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_18, _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C, 0, NULL);
		// SetKeyword(material, KeyAlphaTestOn, false);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = ___0_material;
		Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF(L_19, _stringLiteralCBCD3D866AF896F9B010A0FEE7F961DBC91A08C5, (bool)0, NULL);
		// SetKeyword(material, KeyAlphaBlendOn, true);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = ___0_material;
		Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF(L_20, _stringLiteral52CBE4A5A42509939BB9DB58A4B9A2C9BBA81C1C, (bool)1, NULL);
		// SetKeyword(material, KeyAlphaPremultiplyOn, false);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = ___0_material;
		Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF(L_21, _stringLiteral61304A4D1A7F7C3C856F975F251F1F79885933C8, (bool)0, NULL);
		// break;
		goto IL_0189;
	}

IL_0130:
	{
		// material.SetOverrideTag(TagRenderTypeKey, TagRenderTypeValueTransparent);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = ___0_material;
		Material_SetOverrideTag_mD68833CD28EBAF71CB6AF127B38075629B74FE08(L_22, _stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4, _stringLiteralF318A9CBF6133558944579D6309707D3FF4760E1, NULL);
		// material.SetInt(PropSrcBlend, (int) BlendMode.SrcAlpha);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = ___0_material;
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_23, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 5, NULL);
		// material.SetInt(PropDstBlend, (int) BlendMode.OneMinusSrcAlpha);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_24 = ___0_material;
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_24, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
		// material.SetInt(PropZWrite, 1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = ___0_material;
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_25, _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C, 1, NULL);
		// SetKeyword(material, KeyAlphaTestOn, false);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = ___0_material;
		Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF(L_26, _stringLiteralCBCD3D866AF896F9B010A0FEE7F961DBC91A08C5, (bool)0, NULL);
		// SetKeyword(material, KeyAlphaBlendOn, true);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = ___0_material;
		Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF(L_27, _stringLiteral52CBE4A5A42509939BB9DB58A4B9A2C9BBA81C1C, (bool)1, NULL);
		// SetKeyword(material, KeyAlphaPremultiplyOn, false);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = ___0_material;
		Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF(L_28, _stringLiteral61304A4D1A7F7C3C856F975F251F1F79885933C8, (bool)0, NULL);
	}

IL_0189:
	{
		// var requirement = GetRenderQueueRequirement(renderMode);
		int32_t L_29 = ___1_renderMode;
		RenderQueueRequirement_t4A0FFB65A52822A7199C09466B30A93497243302 L_30;
		L_30 = Utils_GetRenderQueueRequirement_m81B91FE79C44B97B825D4EFA58DBD08910B79544(L_29, NULL);
		V_0 = L_30;
		// if (isChangedByUser)
		bool L_31 = ___2_isChangedByUser;
		if (!L_31)
		{
			goto IL_01a0;
		}
	}
	{
		// material.renderQueue = requirement.DefaultValue;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = ___0_material;
		RenderQueueRequirement_t4A0FFB65A52822A7199C09466B30A93497243302 L_33 = V_0;
		int32_t L_34 = L_33.___DefaultValue_0;
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_32, L_34, NULL);
		return;
	}

IL_01a0:
	{
		// material.renderQueue = Mathf.Clamp(material.renderQueue, requirement.MinValue, requirement.MaxValue);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = ___0_material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_36 = ___0_material;
		int32_t L_37;
		L_37 = Material_get_renderQueue_mC427C54D2667620CBB845559DA4DA31BE166C757(L_36, NULL);
		RenderQueueRequirement_t4A0FFB65A52822A7199C09466B30A93497243302 L_38 = V_0;
		int32_t L_39 = L_38.___MinValue_1;
		RenderQueueRequirement_t4A0FFB65A52822A7199C09466B30A93497243302 L_40 = V_0;
		int32_t L_41 = L_40.___MaxValue_2;
		int32_t L_42;
		L_42 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_37, L_39, L_41, NULL);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_35, L_42, NULL);
		// }
		return;
	}
}
// System.Void MToon.Utils::ValidateOutlineMode(UnityEngine.Material,MToon.OutlineWidthMode,MToon.OutlineColorMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_ValidateOutlineMode_mE3EB9133CFBE8D6512D424F8C54C64262670A2CC (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, int32_t ___1_outlineWidthMode, int32_t ___2_outlineColorMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5015D41347EB006BAB57463C4BE8648DEB555);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDF9B173DAF73E26798C34AD51EE9193221B59C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5EE7E97308629AA70B2119EC70AFD628CDF576C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB2408F5DB54B0FC4ADB755C918A8347F536AE27);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// var isFixed = outlineColorMode == OutlineColorMode.FixedColor;
		int32_t L_0 = ___2_outlineColorMode;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// var isMixed = outlineColorMode == OutlineColorMode.MixedLighting;
		int32_t L_1 = ___2_outlineColorMode;
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		int32_t L_2 = ___1_outlineWidthMode;
		switch (L_2)
		{
			case 0:
			{
				goto IL_001d;
			}
			case 1:
			{
				goto IL_004e;
			}
			case 2:
			{
				goto IL_007f;
			}
		}
	}
	{
		return;
	}

IL_001d:
	{
		// SetKeyword(material, KeyOutlineWidthWorld, false);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___0_material;
		Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF(L_3, _stringLiteralD5EE7E97308629AA70B2119EC70AFD628CDF576C, (bool)0, NULL);
		// SetKeyword(material, KeyOutlineWidthScreen, false);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = ___0_material;
		Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF(L_4, _stringLiteralDB2408F5DB54B0FC4ADB755C918A8347F536AE27, (bool)0, NULL);
		// SetKeyword(material, KeyOutlineColorFixed, false);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ___0_material;
		Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF(L_5, _stringLiteralB1E5015D41347EB006BAB57463C4BE8648DEB555, (bool)0, NULL);
		// SetKeyword(material, KeyOutlineColorMixed, false);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = ___0_material;
		Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF(L_6, _stringLiteralBDF9B173DAF73E26798C34AD51EE9193221B59C0, (bool)0, NULL);
		// break;
		return;
	}

IL_004e:
	{
		// SetKeyword(material, KeyOutlineWidthWorld, true);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = ___0_material;
		Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF(L_7, _stringLiteralD5EE7E97308629AA70B2119EC70AFD628CDF576C, (bool)1, NULL);
		// SetKeyword(material, KeyOutlineWidthScreen, false);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = ___0_material;
		Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF(L_8, _stringLiteralDB2408F5DB54B0FC4ADB755C918A8347F536AE27, (bool)0, NULL);
		// SetKeyword(material, KeyOutlineColorFixed, isFixed);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = ___0_material;
		bool L_10 = V_0;
		Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF(L_9, _stringLiteralB1E5015D41347EB006BAB57463C4BE8648DEB555, L_10, NULL);
		// SetKeyword(material, KeyOutlineColorMixed, isMixed);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = ___0_material;
		bool L_12 = V_1;
		Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF(L_11, _stringLiteralBDF9B173DAF73E26798C34AD51EE9193221B59C0, L_12, NULL);
		// break;
		return;
	}

IL_007f:
	{
		// SetKeyword(material, KeyOutlineWidthWorld, false);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = ___0_material;
		Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF(L_13, _stringLiteralD5EE7E97308629AA70B2119EC70AFD628CDF576C, (bool)0, NULL);
		// SetKeyword(material, KeyOutlineWidthScreen, true);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = ___0_material;
		Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF(L_14, _stringLiteralDB2408F5DB54B0FC4ADB755C918A8347F536AE27, (bool)1, NULL);
		// SetKeyword(material, KeyOutlineColorFixed, isFixed);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = ___0_material;
		bool L_16 = V_0;
		Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF(L_15, _stringLiteralB1E5015D41347EB006BAB57463C4BE8648DEB555, L_16, NULL);
		// SetKeyword(material, KeyOutlineColorMixed, isMixed);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = ___0_material;
		bool L_18 = V_1;
		Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF(L_17, _stringLiteralBDF9B173DAF73E26798C34AD51EE9193221B59C0, L_18, NULL);
		// }
		return;
	}
}
// System.Void MToon.Utils::ValidateNormalMode(UnityEngine.Material,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_ValidateNormalMode_mFA5D44C92D0C47BA9D14F033CC325142EFAD242A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, bool ___1_requireNormalMapping, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5235BC8A11AC79193A67E99975CCDBC94A0FA351);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetKeyword(material, KeyNormalMap, requireNormalMapping);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___0_material;
		bool L_1 = ___1_requireNormalMapping;
		Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF(L_0, _stringLiteral5235BC8A11AC79193A67E99975CCDBC94A0FA351, L_1, NULL);
		// }
		return;
	}
}
// System.Void MToon.Utils::ValidateCullMode(UnityEngine.Material,MToon.CullMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_ValidateCullMode_m1B8E37C56DA7BEB74D77F0EEE70E7F2D4B659836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, int32_t ___1_cullMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59B259A263D1796F7617C20534034F94A19001FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F71C428308BBDDAA9B87455C2B687167C3F78A5);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___1_cullMode;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0045;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_0013;
			}
		}
	}
	{
		return;
	}

IL_0013:
	{
		// material.SetInt(PropCullMode, (int) CullMode.Back);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___0_material;
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_1, _stringLiteral59B259A263D1796F7617C20534034F94A19001FE, 2, NULL);
		// material.SetInt(PropOutlineCullMode, (int) CullMode.Front);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___0_material;
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_2, _stringLiteral7F71C428308BBDDAA9B87455C2B687167C3F78A5, 1, NULL);
		// break;
		return;
	}

IL_002c:
	{
		// material.SetInt(PropCullMode, (int) CullMode.Front);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___0_material;
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_3, _stringLiteral59B259A263D1796F7617C20534034F94A19001FE, 1, NULL);
		// material.SetInt(PropOutlineCullMode, (int) CullMode.Back);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = ___0_material;
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_4, _stringLiteral7F71C428308BBDDAA9B87455C2B687167C3F78A5, 2, NULL);
		// break;
		return;
	}

IL_0045:
	{
		// material.SetInt(PropCullMode, (int) CullMode.Off);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ___0_material;
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_5, _stringLiteral59B259A263D1796F7617C20534034F94A19001FE, 0, NULL);
		// material.SetInt(PropOutlineCullMode, (int) CullMode.Front);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = ___0_material;
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_6, _stringLiteral7F71C428308BBDDAA9B87455C2B687167C3F78A5, 1, NULL);
		// }
		return;
	}
}
// System.Void MToon.Utils::SetKeyword(UnityEngine.Material,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_SetKeyword_m7E82163E40F630E36E07AE3B77B60E46BAFF45DF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_mat, String_t* ___1_keyword, bool ___2_required, const RuntimeMethod* method) 
{
	{
		// if (required)
		bool L_0 = ___2_required;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		// mat.EnableKeyword(keyword);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___0_mat;
		String_t* L_2 = ___1_keyword;
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_1, L_2, NULL);
		return;
	}

IL_000b:
	{
		// mat.DisableKeyword(keyword);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___0_mat;
		String_t* L_4 = ___1_keyword;
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_3, L_4, NULL);
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
// System.Void DepthFirstScheduler.IEnumeratorExtensions::CoroutinetoEnd(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IEnumeratorExtensions_CoroutinetoEnd_mD51D6BA651BDD96D25F9BD3B19ECF712CB7C275A (RuntimeObject* ___0_coroutine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_mB478B84AB35FBA331FF13DBABB9BE194C7186881_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mC456C42E8578B42F4B25CDB65F6B4E79D45CE19B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m239291822C02AB16175907B3016054EC207D43FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_mF218547BE4368C5557FF1F40E220917E694CAFF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m20D4C6A9E28611C814D9D5305229E5FB3C501803_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_tCCF0E342E1E3E67D3A5E29186184FCC97134D9AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Stack_1_tCCF0E342E1E3E67D3A5E29186184FCC97134D9AB* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// var stack = new Stack<IEnumerator>();
		Stack_1_tCCF0E342E1E3E67D3A5E29186184FCC97134D9AB* L_0 = (Stack_1_tCCF0E342E1E3E67D3A5E29186184FCC97134D9AB*)il2cpp_codegen_object_new(Stack_1_tCCF0E342E1E3E67D3A5E29186184FCC97134D9AB_il2cpp_TypeInfo_var);
		Stack_1__ctor_mF218547BE4368C5557FF1F40E220917E694CAFF0(L_0, Stack_1__ctor_mF218547BE4368C5557FF1F40E220917E694CAFF0_RuntimeMethod_var);
		V_0 = L_0;
		// stack.Push(coroutine);
		Stack_1_tCCF0E342E1E3E67D3A5E29186184FCC97134D9AB* L_1 = V_0;
		RuntimeObject* L_2 = ___0_coroutine;
		Stack_1_Push_m239291822C02AB16175907B3016054EC207D43FF(L_1, L_2, Stack_1_Push_m239291822C02AB16175907B3016054EC207D43FF_RuntimeMethod_var);
		goto IL_0040;
	}

IL_000f:
	{
		// if (stack.Peek().MoveNext())
		Stack_1_tCCF0E342E1E3E67D3A5E29186184FCC97134D9AB* L_3 = V_0;
		RuntimeObject* L_4;
		L_4 = Stack_1_Peek_mB478B84AB35FBA331FF13DBABB9BE194C7186881(L_3, Stack_1_Peek_mB478B84AB35FBA331FF13DBABB9BE194C7186881_RuntimeMethod_var);
		bool L_5;
		L_5 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_4);
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// var nested = stack.Peek().Current as IEnumerator;
		Stack_1_tCCF0E342E1E3E67D3A5E29186184FCC97134D9AB* L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = Stack_1_Peek_mB478B84AB35FBA331FF13DBABB9BE194C7186881(L_6, Stack_1_Peek_mB478B84AB35FBA331FF13DBABB9BE194C7186881_RuntimeMethod_var);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var));
		// if (nested != null)
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		// stack.Push(nested);
		Stack_1_tCCF0E342E1E3E67D3A5E29186184FCC97134D9AB* L_10 = V_0;
		RuntimeObject* L_11 = V_1;
		Stack_1_Push_m239291822C02AB16175907B3016054EC207D43FF(L_10, L_11, Stack_1_Push_m239291822C02AB16175907B3016054EC207D43FF_RuntimeMethod_var);
		goto IL_0040;
	}

IL_0039:
	{
		// stack.Pop();
		Stack_1_tCCF0E342E1E3E67D3A5E29186184FCC97134D9AB* L_12 = V_0;
		RuntimeObject* L_13;
		L_13 = Stack_1_Pop_mC456C42E8578B42F4B25CDB65F6B4E79D45CE19B(L_12, Stack_1_Pop_mC456C42E8578B42F4B25CDB65F6B4E79D45CE19B_RuntimeMethod_var);
	}

IL_0040:
	{
		// while (stack.Count > 0)
		Stack_1_tCCF0E342E1E3E67D3A5E29186184FCC97134D9AB* L_14 = V_0;
		int32_t L_15;
		L_15 = Stack_1_get_Count_m20D4C6A9E28611C814D9D5305229E5FB3C501803_inline(L_14, Stack_1_get_Count_m20D4C6A9E28611C814D9D5305229E5FB3C501803_RuntimeMethod_var);
		if ((((int32_t)L_15) > ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
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
// System.Collections.Generic.IEnumerable`1<UnityEngine.Transform> DepthFirstScheduler.MainThreadDispatcher::Ancestors(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MainThreadDispatcher_Ancestors_mF9852931F3BF7674CE1EAB34477C04573D03AF5A (MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAncestorsU3Ed__1_t23FAA5756285F020086D340BCE1FD7307DD60E68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAncestorsU3Ed__1_t23FAA5756285F020086D340BCE1FD7307DD60E68* L_0 = (U3CAncestorsU3Ed__1_t23FAA5756285F020086D340BCE1FD7307DD60E68*)il2cpp_codegen_object_new(U3CAncestorsU3Ed__1_t23FAA5756285F020086D340BCE1FD7307DD60E68_il2cpp_TypeInfo_var);
		U3CAncestorsU3Ed__1__ctor_m68490F9D5DF41104A3A44ACCD3F0BEEEE026766A(L_0, ((int32_t)-2), NULL);
		U3CAncestorsU3Ed__1_t23FAA5756285F020086D340BCE1FD7307DD60E68* L_1 = L_0;
		L_1->___U3CU3E4__this_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_5), (void*)__this);
		U3CAncestorsU3Ed__1_t23FAA5756285F020086D340BCE1FD7307DD60E68* L_2 = L_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_t;
		L_2->___U3CU3E3__t_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___U3CU3E3__t_4), (void*)L_3);
		return L_2;
	}
}
// System.Void DepthFirstScheduler.MainThreadDispatcher::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_Update_m5640B5C32B53BCC76863B6E18CD51385FE1E4046 (MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98* __this, const RuntimeMethod* method) 
{
	{
		// TaskCount = Scheduler.MainThread.UpdateAndGetTaskCount();
		StepScheduler_t09FEF8CFAB003524F34FE965F7138CB1E1C2FF28* L_0;
		L_0 = Scheduler_get_MainThread_m62AF20A0BD44979961B4F7DA32581A6D85DF74C9(NULL);
		int32_t L_1;
		L_1 = StepScheduler_UpdateAndGetTaskCount_m1903DA6962BC1DF3ED8966AA4D25F6A0B0A67404(L_0, NULL);
		__this->___TaskCount_4 = L_1;
		// }
		return;
	}
}
// System.Boolean DepthFirstScheduler.MainThreadDispatcher::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainThreadDispatcher_get_IsInitialized_m270ECA3600C07699422FE4C0B5AA62F9C332A964 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return initialized && instance != null; }
		bool L_0 = ((MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_il2cpp_TypeInfo_var))->___initialized_6;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98* L_1 = ((MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_il2cpp_TypeInfo_var))->___instance_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_2;
	}

IL_0013:
	{
		return (bool)0;
	}
}
// DepthFirstScheduler.MainThreadDispatcher DepthFirstScheduler.MainThreadDispatcher::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98* MainThreadDispatcher_get_Instance_mBAFD588FA850F632E2D5B35AFFE1C1BAE7177597 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Initialize();
		MainThreadDispatcher_Initialize_mBAAEA37815AF6D4E085E8333902B4579DD5B4FB3(NULL);
		// return instance;
		MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98* L_0 = ((MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_il2cpp_TypeInfo_var))->___instance_5;
		return L_0;
	}
}
// System.Void DepthFirstScheduler.MainThreadDispatcher::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_Initialize_mBAAEA37815AF6D4E085E8333902B4579DD5B4FB3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_m8F45553149E91028219F7668D4F67884FD85A42C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisMainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_m6AFBBD0DD586BCF389DA02049AB68C032886EB77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ADDF9B1EA1757764D349DC4FC1A57BFF8657444);
		s_Il2CppMethodInitialized = true;
	}
	MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (!initialized)
		bool L_0 = ((MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_il2cpp_TypeInfo_var))->___initialized_6;
		if (L_0)
		{
			goto IL_004b;
		}
	}
	{
		// MainThreadDispatcher dispatcher = null;
		V_0 = (MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98*)NULL;
	}
	try
	{// begin try (depth: 1)
		// dispatcher = GameObject.FindObjectOfType<MainThreadDispatcher>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98* L_1;
		L_1 = Object_FindObjectOfType_TisMainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_m6AFBBD0DD586BCF389DA02049AB68C032886EB77(Object_FindObjectOfType_TisMainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_m6AFBBD0DD586BCF389DA02049AB68C032886EB77_RuntimeMethod_var);
		V_0 = L_1;
		// }
		goto IL_0023;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0011;
		}
		throw e;
	}

CATCH_0011:
	{// begin catch(System.Object)
		// catch
		// var ex = new Exception(
		//     "DepthFirstScheduler requires a MainThreadDispatcher component created on the main thread."
		//     + " Make sure it is added to the scene before calling DepthFirstScheduler from a worker thread.");
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAF174CA7E7AF4D5F1E9BBC2BBDAE31F0162179E9)), NULL);
		// UnityEngine.Debug.LogException(ex);
		Exception_t* L_3 = L_2;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_3, NULL);
		// throw ex;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MainThreadDispatcher_Initialize_mBAAEA37815AF6D4E085E8333902B4579DD5B4FB3_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0023:
	{
		// if (isQuitting)
		bool L_4 = ((MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_il2cpp_TypeInfo_var))->___isQuitting_7;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// return;
		return;
	}

IL_002b:
	{
		// if (dispatcher == null)
		MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		// new GameObject("DepthFirstScheduler").AddComponent<MainThreadDispatcher>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_7, _stringLiteral0ADDF9B1EA1757764D349DC4FC1A57BFF8657444, NULL);
		MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98* L_8;
		L_8 = GameObject_AddComponent_TisMainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_m8F45553149E91028219F7668D4F67884FD85A42C(L_7, GameObject_AddComponent_TisMainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_m8F45553149E91028219F7668D4F67884FD85A42C_RuntimeMethod_var);
		return;
	}

IL_0045:
	{
		// dispatcher.Awake(); // force awake
		MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98* L_9 = V_0;
		MainThreadDispatcher_Awake_mBBF05702D73DE02D7618427E72F82FF930CD31E8(L_9, NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Boolean DepthFirstScheduler.MainThreadDispatcher::get_IsInMainThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainThreadDispatcher_get_IsInMainThread_m0A1A4F772875E58FC9315FE69C396EEE510F326F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (mainThreadToken != null);
		RuntimeObject* L_0 = ((MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_il2cpp_TypeInfo_var))->___mainThreadToken_8;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Void DepthFirstScheduler.MainThreadDispatcher::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_Awake_mBBF05702D73DE02D7618427E72F82FF930CD31E8 (MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6745B6DA0001B3F7ED67EF8B643A443FE62C8E6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF62ADAC6B7778E129C2559B757B0C7B2E692DB8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98* L_0 = ((MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_il2cpp_TypeInfo_var))->___instance_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		// Debug.Log("Initialize UniTask.MainThredDispatcher");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralEF62ADAC6B7778E129C2559B757B0C7B2E692DB8, NULL);
		// instance = this;
		((MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_il2cpp_TypeInfo_var))->___instance_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_il2cpp_TypeInfo_var))->___instance_5), (void*)__this);
		// mainThreadToken = new object();
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		((MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_il2cpp_TypeInfo_var))->___mainThreadToken_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_il2cpp_TypeInfo_var))->___mainThreadToken_8), (void*)L_2);
		// initialized = true;
		((MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_il2cpp_TypeInfo_var))->___initialized_6 = (bool)1;
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_3, NULL);
		return;
	}

IL_0039:
	{
		// if (this != instance)
		MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98* L_4 = ((MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_il2cpp_TypeInfo_var))->___instance_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(__this, L_4, NULL);
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		// Debug.LogWarning("There is already a MainThreadDispatcher in the scene.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral6745B6DA0001B3F7ED67EF8B643A443FE62C8E6E, NULL);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void DepthFirstScheduler.MainThreadDispatcher::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_OnDestroy_m68D8811C41EB8B72DA1ADE2039E2390F963C4DE3 (MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisMainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_m6AFBBD0DD586BCF389DA02049AB68C032886EB77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == this)
		MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98* L_0 = ((MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_il2cpp_TypeInfo_var))->___instance_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, __this, NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// instance = GameObject.FindObjectOfType<MainThreadDispatcher>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98* L_2;
		L_2 = Object_FindObjectOfType_TisMainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_m6AFBBD0DD586BCF389DA02049AB68C032886EB77(Object_FindObjectOfType_TisMainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_m6AFBBD0DD586BCF389DA02049AB68C032886EB77_RuntimeMethod_var);
		((MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_il2cpp_TypeInfo_var))->___instance_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_il2cpp_TypeInfo_var))->___instance_5), (void*)L_2);
		// initialized = instance != null;
		MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98* L_3 = ((MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_il2cpp_TypeInfo_var))->___instance_5;
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		((MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_il2cpp_TypeInfo_var))->___initialized_6 = L_4;
	}

IL_0027:
	{
		// if (Scheduler.SingleWorkerThread != null)
		RuntimeObject* L_5;
		L_5 = Scheduler_get_SingleWorkerThread_mD86861577D068FF13C15F800939EBF5B64CA2E2D(NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		// Scheduler.SingleWorkerThread.Dispose();
		RuntimeObject* L_6;
		L_6 = Scheduler_get_SingleWorkerThread_mD86861577D068FF13C15F800939EBF5B64CA2E2D(NULL);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void DepthFirstScheduler.MainThreadDispatcher::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_OnApplicationQuit_m4E3EE89B6A6BD1CF6018459048531683EAFAE0FC (MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isQuitting = true;
		((MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98_il2cpp_TypeInfo_var))->___isQuitting_7 = (bool)1;
		// }
		return;
	}
}
// System.Void DepthFirstScheduler.MainThreadDispatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher__ctor_mCC3E6B8C9C6044D9982C804BB3789EEE8E175AF9 (MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void DepthFirstScheduler.MainThreadDispatcher/<Ancestors>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAncestorsU3Ed__1__ctor_m68490F9D5DF41104A3A44ACCD3F0BEEEE026766A (U3CAncestorsU3Ed__1_t23FAA5756285F020086D340BCE1FD7307DD60E68* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void DepthFirstScheduler.MainThreadDispatcher/<Ancestors>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAncestorsU3Ed__1_System_IDisposable_Dispose_m7FE6C2708A3FBD3E7C41426C6EAB0CC14266AC38 (U3CAncestorsU3Ed__1_t23FAA5756285F020086D340BCE1FD7307DD60E68* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CAncestorsU3Ed__1_U3CU3Em__Finally1_m212CAF38CDE822994B68E67A063C5A6E9C632196(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean DepthFirstScheduler.MainThreadDispatcher/<Ancestors>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAncestorsU3Ed__1_MoveNext_m241AE92A74C6BE4586FAF6ED34BA7743B116EF7B (U3CAncestorsU3Ed__1_t23FAA5756285F020086D340BCE1FD7307DD60E68* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t4980F9E076B96A4E697C2E09671204DD70B5573F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t7A84A9E8C72BB62928150241D1BDAEF0137B5092_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98* V_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_3 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00cc:
			{// begin fault (depth: 1)
				U3CAncestorsU3Ed__1_System_IDisposable_Dispose_m7FE6C2708A3FBD3E7C41426C6EAB0CC14266AC38(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98* L_1 = __this->___U3CU3E4__this_5;
				V_2 = L_1;
				int32_t L_2 = V_1;
				switch (L_2)
				{
					case 0:
					{
						goto IL_0027_1;
					}
					case 1:
					{
						goto IL_0048_1;
					}
					case 2:
					{
						goto IL_00a6_1;
					}
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00d3;
			}

IL_0027_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// yield return t;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___t_3;
				__this->___U3CU3E2__current_1 = L_3;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_00d3;
			}

IL_0048_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// if (t.parent != null)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___t_3;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
				L_5 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_4, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_6;
				L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_6)
				{
					goto IL_00c8_1;
				}
			}
			{
				// foreach (var x in Ancestors(t.parent))
				MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98* L_7 = V_2;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___t_3;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
				L_9 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_8, NULL);
				RuntimeObject* L_10;
				L_10 = MainThreadDispatcher_Ancestors_mF9852931F3BF7674CE1EAB34477C04573D03AF5A(L_7, L_9, NULL);
				RuntimeObject* L_11;
				L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Transform>::GetEnumerator() */, IEnumerable_1_t4980F9E076B96A4E697C2E09671204DD70B5573F_il2cpp_TypeInfo_var, L_10);
				__this->___U3CU3E7__wrap1_6 = L_11;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_6), (void*)L_11);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_00ae_1;
			}

IL_0088_1:
			{
				// foreach (var x in Ancestors(t.parent))
				RuntimeObject* L_12 = __this->___U3CU3E7__wrap1_6;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
				L_13 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.Transform>::get_Current() */, IEnumerator_1_t7A84A9E8C72BB62928150241D1BDAEF0137B5092_il2cpp_TypeInfo_var, L_12);
				V_3 = L_13;
				// yield return x;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = V_3;
				__this->___U3CU3E2__current_1 = L_14;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_14);
				__this->___U3CU3E1__state_0 = 2;
				V_0 = (bool)1;
				goto IL_00d3;
			}

IL_00a6_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_00ae_1:
			{
				// foreach (var x in Ancestors(t.parent))
				RuntimeObject* L_15 = __this->___U3CU3E7__wrap1_6;
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_0088_1;
				}
			}
			{
				U3CAncestorsU3Ed__1_U3CU3Em__Finally1_m212CAF38CDE822994B68E67A063C5A6E9C632196(__this, NULL);
				__this->___U3CU3E7__wrap1_6 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_6), (void*)(RuntimeObject*)NULL);
			}

IL_00c8_1:
			{
				// }
				V_0 = (bool)0;
				goto IL_00d3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d3:
	{
		bool L_17 = V_0;
		return L_17;
	}
}
// System.Void DepthFirstScheduler.MainThreadDispatcher/<Ancestors>d__1::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAncestorsU3Ed__1_U3CU3Em__Finally1_m212CAF38CDE822994B68E67A063C5A6E9C632196 (U3CAncestorsU3Ed__1_t23FAA5756285F020086D340BCE1FD7307DD60E68* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap1_6;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap1_6;
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// UnityEngine.Transform DepthFirstScheduler.MainThreadDispatcher/<Ancestors>d__1::System.Collections.Generic.IEnumerator<UnityEngine.Transform>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* U3CAncestorsU3Ed__1_System_Collections_Generic_IEnumeratorU3CUnityEngine_TransformU3E_get_Current_m4FADE9804478BB7A84380BAD1393AF56D2F88259 (U3CAncestorsU3Ed__1_t23FAA5756285F020086D340BCE1FD7307DD60E68* __this, const RuntimeMethod* method) 
{
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DepthFirstScheduler.MainThreadDispatcher/<Ancestors>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAncestorsU3Ed__1_System_Collections_IEnumerator_Reset_m9011C7EEAF2E1CB55110D1B17C9D6D4E263167C2 (U3CAncestorsU3Ed__1_t23FAA5756285F020086D340BCE1FD7307DD60E68* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAncestorsU3Ed__1_System_Collections_IEnumerator_Reset_m9011C7EEAF2E1CB55110D1B17C9D6D4E263167C2_RuntimeMethod_var)));
	}
}
// System.Object DepthFirstScheduler.MainThreadDispatcher/<Ancestors>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAncestorsU3Ed__1_System_Collections_IEnumerator_get_Current_mB64C05643AFC1D391F9181C18A7A1414F25E1135 (U3CAncestorsU3Ed__1_t23FAA5756285F020086D340BCE1FD7307DD60E68* __this, const RuntimeMethod* method) 
{
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> DepthFirstScheduler.MainThreadDispatcher/<Ancestors>d__1::System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAncestorsU3Ed__1_System_Collections_Generic_IEnumerableU3CUnityEngine_TransformU3E_GetEnumerator_mB54CADE6C59F9DDDFFDE39756C22B2D4ACB86366 (U3CAncestorsU3Ed__1_t23FAA5756285F020086D340BCE1FD7307DD60E68* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAncestorsU3Ed__1_t23FAA5756285F020086D340BCE1FD7307DD60E68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CAncestorsU3Ed__1_t23FAA5756285F020086D340BCE1FD7307DD60E68* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CAncestorsU3Ed__1_t23FAA5756285F020086D340BCE1FD7307DD60E68* L_3 = (U3CAncestorsU3Ed__1_t23FAA5756285F020086D340BCE1FD7307DD60E68*)il2cpp_codegen_object_new(U3CAncestorsU3Ed__1_t23FAA5756285F020086D340BCE1FD7307DD60E68_il2cpp_TypeInfo_var);
		U3CAncestorsU3Ed__1__ctor_m68490F9D5DF41104A3A44ACCD3F0BEEEE026766A(L_3, 0, NULL);
		V_0 = L_3;
		U3CAncestorsU3Ed__1_t23FAA5756285F020086D340BCE1FD7307DD60E68* L_4 = V_0;
		MainThreadDispatcher_t381A24D88882FD969BF396C8E3E8CCE471336B98* L_5 = __this->___U3CU3E4__this_5;
		L_4->___U3CU3E4__this_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_5), (void*)L_5);
	}

IL_0035:
	{
		U3CAncestorsU3Ed__1_t23FAA5756285F020086D340BCE1FD7307DD60E68* L_6 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___U3CU3E3__t_4;
		L_6->___t_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___t_3), (void*)L_7);
		U3CAncestorsU3Ed__1_t23FAA5756285F020086D340BCE1FD7307DD60E68* L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator DepthFirstScheduler.MainThreadDispatcher/<Ancestors>d__1::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAncestorsU3Ed__1_System_Collections_IEnumerable_GetEnumerator_mCF21BE381CB5638FF8E9FDD99BAF9183323B2908 (U3CAncestorsU3Ed__1_t23FAA5756285F020086D340BCE1FD7307DD60E68* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CAncestorsU3Ed__1_System_Collections_Generic_IEnumerableU3CUnityEngine_TransformU3E_GetEnumerator_mB54CADE6C59F9DDDFFDE39756C22B2D4ACB86366(__this, NULL);
		return L_0;
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
// DepthFirstScheduler.ISchedulable DepthFirstScheduler.ISchedulableExtensions::GetRoot(DepthFirstScheduler.ISchedulable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ISchedulableExtensions_GetRoot_mEAACC4F6F4306965F66150F9F6759CAB263CC0B4 (RuntimeObject* ___0_self, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISchedulable_t194CCA63841FD033D1793B14465788FAEEDAAC8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var current = self;
		RuntimeObject* L_0 = ___0_self;
		V_0 = L_0;
		goto IL_000b;
	}

IL_0004:
	{
		// current = current.Parent;
		RuntimeObject* L_1 = V_0;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* DepthFirstScheduler.ISchedulable DepthFirstScheduler.ISchedulable::get_Parent() */, ISchedulable_t194CCA63841FD033D1793B14465788FAEEDAAC8B_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}

IL_000b:
	{
		// while (current.Parent != null)
		RuntimeObject* L_3 = V_0;
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* DepthFirstScheduler.ISchedulable DepthFirstScheduler.ISchedulable::get_Parent() */, ISchedulable_t194CCA63841FD033D1793B14465788FAEEDAAC8B_il2cpp_TypeInfo_var, L_3);
		if (L_4)
		{
			goto IL_0004;
		}
	}
	{
		// return current;
		RuntimeObject* L_5 = V_0;
		return L_5;
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
// System.Void DepthFirstScheduler.NoParentException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoParentException__ctor_mFF3EC9406442A3004CEB6D7921D937B0C9FDF446 (NoParentException_tF1C398500C8702967982FF14FAB171D300C0F5F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2458AF57ED05EE1E1B606F99869605D7F2D9A77D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NoParentException():base("No parent task can't ContinueWith or OnExecute. First AddTask")
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, _stringLiteral2458AF57ED05EE1E1B606F99869605D7F2D9A77D, NULL);
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
// DepthFirstScheduler.Schedulable`1<DepthFirstScheduler.Unit> DepthFirstScheduler.Schedulable::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Schedulable_1_t39CFE1E7639D7FCAF745B12B9A4A2CA62B24BAE5* Schedulable_Create_m0B42F9B6D22877386F7F43BDBE401FA3CFDA3DC2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Schedulable_1_AddTask_mE3CA6CFC745099F44BCD78A2E1D3E1F163AA9982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Schedulable_1__ctor_mD54FB9D87D1209B0C6D06EF9029AE585180D63B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Schedulable_1_t39CFE1E7639D7FCAF745B12B9A4A2CA62B24BAE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateU3Eb__0_0_m550A71BB2040F6A646452F29640F1B16093D5740_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAC22565E0BAAE2BD63D233D23526464A6E4D839B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Schedulable_1_t39CFE1E7639D7FCAF745B12B9A4A2CA62B24BAE5* G_B2_2 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	Schedulable_1_t39CFE1E7639D7FCAF745B12B9A4A2CA62B24BAE5* G_B1_2 = NULL;
	{
		// return new Schedulable<Unit>().AddTask(Scheduler.CurrentThread, () =>
		// {
		// });
		Schedulable_1_t39CFE1E7639D7FCAF745B12B9A4A2CA62B24BAE5* L_0 = (Schedulable_1_t39CFE1E7639D7FCAF745B12B9A4A2CA62B24BAE5*)il2cpp_codegen_object_new(Schedulable_1_t39CFE1E7639D7FCAF745B12B9A4A2CA62B24BAE5_il2cpp_TypeInfo_var);
		Schedulable_1__ctor_mD54FB9D87D1209B0C6D06EF9029AE585180D63B5(L_0, Schedulable_1__ctor_mD54FB9D87D1209B0C6D06EF9029AE585180D63B5_RuntimeMethod_var);
		RuntimeObject* L_1;
		L_1 = Scheduler_get_CurrentThread_m892DF9D40B8BCBE2892B608C3E40D7B2109D3E6A(NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tAC22565E0BAAE2BD63D233D23526464A6E4D839B_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ((U3CU3Ec_tAC22565E0BAAE2BD63D233D23526464A6E4D839B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAC22565E0BAAE2BD63D233D23526464A6E4D839B_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_0029;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tAC22565E0BAAE2BD63D233D23526464A6E4D839B_il2cpp_TypeInfo_var);
		U3CU3Ec_tAC22565E0BAAE2BD63D233D23526464A6E4D839B* L_4 = ((U3CU3Ec_tAC22565E0BAAE2BD63D233D23526464A6E4D839B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAC22565E0BAAE2BD63D233D23526464A6E4D839B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CCreateU3Eb__0_0_m550A71BB2040F6A646452F29640F1B16093D5740_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = L_5;
		((U3CU3Ec_tAC22565E0BAAE2BD63D233D23526464A6E4D839B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAC22565E0BAAE2BD63D233D23526464A6E4D839B_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tAC22565E0BAAE2BD63D233D23526464A6E4D839B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAC22565E0BAAE2BD63D233D23526464A6E4D839B_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0029:
	{
		Schedulable_1_t39CFE1E7639D7FCAF745B12B9A4A2CA62B24BAE5* L_7;
		L_7 = Schedulable_1_AddTask_mE3CA6CFC745099F44BCD78A2E1D3E1F163AA9982(G_B2_2, G_B2_1, G_B2_0, Schedulable_1_AddTask_mE3CA6CFC745099F44BCD78A2E1D3E1F163AA9982_RuntimeMethod_var);
		return L_7;
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
// System.Void DepthFirstScheduler.Schedulable/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m96F02814AC42E4C7A96A8DCFF360B6882DAACFF0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAC22565E0BAAE2BD63D233D23526464A6E4D839B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tAC22565E0BAAE2BD63D233D23526464A6E4D839B* L_0 = (U3CU3Ec_tAC22565E0BAAE2BD63D233D23526464A6E4D839B*)il2cpp_codegen_object_new(U3CU3Ec_tAC22565E0BAAE2BD63D233D23526464A6E4D839B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m57350C5856ED28F786AB1FDD739F5E1C75A56CDA(L_0, NULL);
		((U3CU3Ec_tAC22565E0BAAE2BD63D233D23526464A6E4D839B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAC22565E0BAAE2BD63D233D23526464A6E4D839B_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tAC22565E0BAAE2BD63D233D23526464A6E4D839B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAC22565E0BAAE2BD63D233D23526464A6E4D839B_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void DepthFirstScheduler.Schedulable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m57350C5856ED28F786AB1FDD739F5E1C75A56CDA (U3CU3Ec_tAC22565E0BAAE2BD63D233D23526464A6E4D839B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void DepthFirstScheduler.Schedulable/<>c::<Create>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CCreateU3Eb__0_0_m550A71BB2040F6A646452F29640F1B16093D5740 (U3CU3Ec_tAC22565E0BAAE2BD63D233D23526464A6E4D839B* __this, const RuntimeMethod* method) 
{
	{
		// });
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// DepthFirstScheduler.IScheduler DepthFirstScheduler.Scheduler::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Scheduler_get_CurrentThread_m892DF9D40B8BCBE2892B608C3E40D7B2109D3E6A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurrentThreadScheduler_t615B9E89AE1B5FAB26CC3B9170FF6D0A8C5C32C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// get { return currentThread ?? (currentThread = new CurrentThreadScheduler()); }
		RuntimeObject* L_0 = ((Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_StaticFields*)il2cpp_codegen_static_fields_for(Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_il2cpp_TypeInfo_var))->___currentThread_0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
	}
	{
		CurrentThreadScheduler_t615B9E89AE1B5FAB26CC3B9170FF6D0A8C5C32C9* L_2 = (CurrentThreadScheduler_t615B9E89AE1B5FAB26CC3B9170FF6D0A8C5C32C9*)il2cpp_codegen_object_new(CurrentThreadScheduler_t615B9E89AE1B5FAB26CC3B9170FF6D0A8C5C32C9_il2cpp_TypeInfo_var);
		CurrentThreadScheduler__ctor_mD6C6AA3F41F896DD9C3692AC58313324F9EDBF25(L_2, NULL);
		CurrentThreadScheduler_t615B9E89AE1B5FAB26CC3B9170FF6D0A8C5C32C9* L_3 = L_2;
		((Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_StaticFields*)il2cpp_codegen_static_fields_for(Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_il2cpp_TypeInfo_var))->___currentThread_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_StaticFields*)il2cpp_codegen_static_fields_for(Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_il2cpp_TypeInfo_var))->___currentThread_0), (void*)L_3);
		G_B2_0 = ((RuntimeObject*)(L_3));
	}

IL_0014:
	{
		return G_B2_0;
	}
}
// DepthFirstScheduler.Scheduler/StepScheduler DepthFirstScheduler.Scheduler::get_MainThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StepScheduler_t09FEF8CFAB003524F34FE965F7138CB1E1C2FF28* Scheduler_get_MainThread_m62AF20A0BD44979961B4F7DA32581A6D85DF74C9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StepScheduler_t09FEF8CFAB003524F34FE965F7138CB1E1C2FF28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mainThread != null) return mainThread;
		StepScheduler_t09FEF8CFAB003524F34FE965F7138CB1E1C2FF28* L_0 = ((Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_StaticFields*)il2cpp_codegen_static_fields_for(Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_il2cpp_TypeInfo_var))->___mainThread_1;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// if (mainThread != null) return mainThread;
		StepScheduler_t09FEF8CFAB003524F34FE965F7138CB1E1C2FF28* L_1 = ((Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_StaticFields*)il2cpp_codegen_static_fields_for(Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_il2cpp_TypeInfo_var))->___mainThread_1;
		return L_1;
	}

IL_000d:
	{
		// mainThread = new StepScheduler();
		StepScheduler_t09FEF8CFAB003524F34FE965F7138CB1E1C2FF28* L_2 = (StepScheduler_t09FEF8CFAB003524F34FE965F7138CB1E1C2FF28*)il2cpp_codegen_object_new(StepScheduler_t09FEF8CFAB003524F34FE965F7138CB1E1C2FF28_il2cpp_TypeInfo_var);
		StepScheduler__ctor_m00941AFD6610CF7FFD514DF3A124D3BC8F0FF7C8(L_2, NULL);
		((Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_StaticFields*)il2cpp_codegen_static_fields_for(Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_il2cpp_TypeInfo_var))->___mainThread_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_StaticFields*)il2cpp_codegen_static_fields_for(Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_il2cpp_TypeInfo_var))->___mainThread_1), (void*)L_2);
		// MainThreadDispatcher.Initialize();
		MainThreadDispatcher_Initialize_mBAAEA37815AF6D4E085E8333902B4579DD5B4FB3(NULL);
		// return mainThread;
		StepScheduler_t09FEF8CFAB003524F34FE965F7138CB1E1C2FF28* L_3 = ((Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_StaticFields*)il2cpp_codegen_static_fields_for(Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_il2cpp_TypeInfo_var))->___mainThread_1;
		return L_3;
	}
}
// DepthFirstScheduler.IScheduler DepthFirstScheduler.Scheduler::get_ThreadPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Scheduler_get_ThreadPool_m1A7F8E28508D2DB34BEB9A67582DBC9FF03ED521 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPoolScheduler_t8734547779F29DE0E1ED11F3278962B10DEE8E40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// get { return threadPool ?? (threadPool = new ThreadPoolScheduler()); }
		RuntimeObject* L_0 = ((Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_StaticFields*)il2cpp_codegen_static_fields_for(Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_il2cpp_TypeInfo_var))->___threadPool_2;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
	}
	{
		ThreadPoolScheduler_t8734547779F29DE0E1ED11F3278962B10DEE8E40* L_2 = (ThreadPoolScheduler_t8734547779F29DE0E1ED11F3278962B10DEE8E40*)il2cpp_codegen_object_new(ThreadPoolScheduler_t8734547779F29DE0E1ED11F3278962B10DEE8E40_il2cpp_TypeInfo_var);
		ThreadPoolScheduler__ctor_mB5230C631ABBF77C562455CD969C4A67308D3EA4(L_2, NULL);
		ThreadPoolScheduler_t8734547779F29DE0E1ED11F3278962B10DEE8E40* L_3 = L_2;
		((Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_StaticFields*)il2cpp_codegen_static_fields_for(Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_il2cpp_TypeInfo_var))->___threadPool_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_StaticFields*)il2cpp_codegen_static_fields_for(Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_il2cpp_TypeInfo_var))->___threadPool_2), (void*)L_3);
		G_B2_0 = ((RuntimeObject*)(L_3));
	}

IL_0014:
	{
		return G_B2_0;
	}
}
// DepthFirstScheduler.IScheduler DepthFirstScheduler.Scheduler::get_SingleWorkerThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Scheduler_get_SingleWorkerThread_mD86861577D068FF13C15F800939EBF5B64CA2E2D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadScheduler_t537C2059D25B13EEC4806EBD8FA3F1CBE7705C50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// get { return singleWorkerThread ?? (singleWorkerThread = new ThreadScheduler()); }
		RuntimeObject* L_0 = ((Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_StaticFields*)il2cpp_codegen_static_fields_for(Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_il2cpp_TypeInfo_var))->___singleWorkerThread_3;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
	}
	{
		ThreadScheduler_t537C2059D25B13EEC4806EBD8FA3F1CBE7705C50* L_2 = (ThreadScheduler_t537C2059D25B13EEC4806EBD8FA3F1CBE7705C50*)il2cpp_codegen_object_new(ThreadScheduler_t537C2059D25B13EEC4806EBD8FA3F1CBE7705C50_il2cpp_TypeInfo_var);
		ThreadScheduler__ctor_mC1A7209620D396ADE415BBD3B66B4B27890DF7F9(L_2, NULL);
		ThreadScheduler_t537C2059D25B13EEC4806EBD8FA3F1CBE7705C50* L_3 = L_2;
		((Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_StaticFields*)il2cpp_codegen_static_fields_for(Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_il2cpp_TypeInfo_var))->___singleWorkerThread_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_StaticFields*)il2cpp_codegen_static_fields_for(Scheduler_tA0718FA274B72677EDE02D3B0CBCFBBA867850B0_il2cpp_TypeInfo_var))->___singleWorkerThread_3), (void*)L_3);
		G_B2_0 = ((RuntimeObject*)(L_3));
	}

IL_0014:
	{
		return G_B2_0;
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
// System.Collections.Generic.Queue`1<DepthFirstScheduler.TaskChain> DepthFirstScheduler.Scheduler/CurrentThreadScheduler::GetQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* CurrentThreadScheduler_GetQueue_m002E52175C20844D716A37A8DC3527944752E202 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurrentThreadScheduler_t615B9E89AE1B5FAB26CC3B9170FF6D0A8C5C32C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return queue;
		Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* L_0 = ((CurrentThreadScheduler_t615B9E89AE1B5FAB26CC3B9170FF6D0A8C5C32C9_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(CurrentThreadScheduler_t615B9E89AE1B5FAB26CC3B9170FF6D0A8C5C32C9_il2cpp_TypeInfo_var))->___queue_0;
		return L_0;
	}
}
// System.Void DepthFirstScheduler.Scheduler/CurrentThreadScheduler::SetQueue(System.Collections.Generic.Queue`1<DepthFirstScheduler.TaskChain>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurrentThreadScheduler_SetQueue_m030AC3D1C020612D129197986D4D6C8D084EDC42 (Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* ___0_newQueue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurrentThreadScheduler_t615B9E89AE1B5FAB26CC3B9170FF6D0A8C5C32C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// queue = newQueue;
		Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* L_0 = ___0_newQueue;
		((CurrentThreadScheduler_t615B9E89AE1B5FAB26CC3B9170FF6D0A8C5C32C9_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(CurrentThreadScheduler_t615B9E89AE1B5FAB26CC3B9170FF6D0A8C5C32C9_il2cpp_TypeInfo_var))->___queue_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CurrentThreadScheduler_t615B9E89AE1B5FAB26CC3B9170FF6D0A8C5C32C9_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(CurrentThreadScheduler_t615B9E89AE1B5FAB26CC3B9170FF6D0A8C5C32C9_il2cpp_TypeInfo_var))->___queue_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void DepthFirstScheduler.Scheduler/CurrentThreadScheduler::Enqueue(DepthFirstScheduler.TaskChain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurrentThreadScheduler_Enqueue_m949DC2BF217E87DDA40B1BAF8915439A7CE49632 (CurrentThreadScheduler_t615B9E89AE1B5FAB26CC3B9170FF6D0A8C5C32C9* __this, TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mBFE01B20CC307A78B88F025DC869ACFBEFD243F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mC3598FD68D21F0C4CAF515483D5ACE7C1805366A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* V_0 = NULL;
	{
		// var q = GetQueue();
		Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* L_0;
		L_0 = CurrentThreadScheduler_GetQueue_m002E52175C20844D716A37A8DC3527944752E202_inline(NULL);
		V_0 = L_0;
		// if (q == null)
		Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* L_1 = V_0;
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		// q = new Queue<TaskChain>(5);
		Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* L_2 = (Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8*)il2cpp_codegen_object_new(Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8_il2cpp_TypeInfo_var);
		Queue_1__ctor_mC3598FD68D21F0C4CAF515483D5ACE7C1805366A(L_2, 5, Queue_1__ctor_mC3598FD68D21F0C4CAF515483D5ACE7C1805366A_RuntimeMethod_var);
		V_0 = L_2;
		// q.Enqueue(item);
		Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* L_3 = V_0;
		TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* L_4 = ___0_item;
		Queue_1_Enqueue_mBFE01B20CC307A78B88F025DC869ACFBEFD243F0(L_3, L_4, Queue_1_Enqueue_mBFE01B20CC307A78B88F025DC869ACFBEFD243F0_RuntimeMethod_var);
		// SetQueue(q);
		Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* L_5 = V_0;
		CurrentThreadScheduler_SetQueue_m030AC3D1C020612D129197986D4D6C8D084EDC42_inline(L_5, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				// SetQueue(null);
				CurrentThreadScheduler_SetQueue_m030AC3D1C020612D129197986D4D6C8D084EDC42_inline((Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8*)NULL, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Trampoline.Run(q);
			Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* L_6 = V_0;
			Trampoline_Run_m213696A86667EECE467F62F23F17820B9126C3D8(L_6, NULL);
			// }
			goto IL_0033;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002c:
	{
		// q.Enqueue(item);
		Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* L_7 = V_0;
		TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* L_8 = ___0_item;
		Queue_1_Enqueue_mBFE01B20CC307A78B88F025DC869ACFBEFD243F0(L_7, L_8, Queue_1_Enqueue_mBFE01B20CC307A78B88F025DC869ACFBEFD243F0_RuntimeMethod_var);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void DepthFirstScheduler.Scheduler/CurrentThreadScheduler::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurrentThreadScheduler_Dispose_mB7254A411C0E7CBB3D776FD53B8137F5BBC7F15D (CurrentThreadScheduler_t615B9E89AE1B5FAB26CC3B9170FF6D0A8C5C32C9* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Clear_m18C60A40150AD3FF1A62930EAF781C3DEB24C5B5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* V_0 = NULL;
	{
		// if (!disposedValue)
		bool L_0 = __this->___disposedValue_1;
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		// if (disposing)
		bool L_1 = ___0_disposing;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// var queue = GetQueue();
		Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* L_2;
		L_2 = CurrentThreadScheduler_GetQueue_m002E52175C20844D716A37A8DC3527944752E202_inline(NULL);
		V_0 = L_2;
		// if (queue != null) queue.Clear();
		Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* L_3 = V_0;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// if (queue != null) queue.Clear();
		Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* L_4 = V_0;
		Queue_1_Clear_m18C60A40150AD3FF1A62930EAF781C3DEB24C5B5(L_4, Queue_1_Clear_m18C60A40150AD3FF1A62930EAF781C3DEB24C5B5_RuntimeMethod_var);
	}

IL_001a:
	{
		// SetQueue(null);
		CurrentThreadScheduler_SetQueue_m030AC3D1C020612D129197986D4D6C8D084EDC42_inline((Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8*)NULL, NULL);
	}

IL_0020:
	{
		// disposedValue = true;
		__this->___disposedValue_1 = (bool)1;
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void DepthFirstScheduler.Scheduler/CurrentThreadScheduler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurrentThreadScheduler_Dispose_m340AE091C1FA4AA64B7C655C0DB119C411B6A1C7 (CurrentThreadScheduler_t615B9E89AE1B5FAB26CC3B9170FF6D0A8C5C32C9* __this, const RuntimeMethod* method) 
{
	{
		// Dispose(true);
		VirtualActionInvoker1< bool >::Invoke(6 /* System.Void DepthFirstScheduler.Scheduler/CurrentThreadScheduler::Dispose(System.Boolean) */, __this, (bool)1);
		// }
		return;
	}
}
// System.Void DepthFirstScheduler.Scheduler/CurrentThreadScheduler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurrentThreadScheduler__ctor_mD6C6AA3F41F896DD9C3692AC58313324F9EDBF25 (CurrentThreadScheduler_t615B9E89AE1B5FAB26CC3B9170FF6D0A8C5C32C9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void DepthFirstScheduler.Scheduler/Trampoline::Run(System.Collections.Generic.Queue`1<DepthFirstScheduler.TaskChain>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trampoline_Run_m213696A86667EECE467F62F23F17820B9126C3D8 (Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* ___0_queue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m4C723782C81649A08962D7008843BC15F441E2A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mCBF6326C20CE3A227279FE057EB64EFB34E2EF44_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* V_0 = NULL;
	{
		goto IL_0012;
	}

IL_0002:
	{
		// var chain = queue.Dequeue();
		Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* L_0 = ___0_queue;
		TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* L_1;
		L_1 = Queue_1_Dequeue_m4C723782C81649A08962D7008843BC15F441E2A7(L_0, Queue_1_Dequeue_m4C723782C81649A08962D7008843BC15F441E2A7_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_0009:
	{
		// var status = chain.Next();
		TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* L_2 = V_0;
		int32_t L_3;
		L_3 = TaskChain_Next_mB59B913FBDA74763199CAE46E86222CE95209431(L_2, NULL);
		// if (status != ExecutionStatus.Continue)
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0009;
		}
	}

IL_0012:
	{
		// while (queue.Count > 0)
		Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* L_4 = ___0_queue;
		int32_t L_5;
		L_5 = Queue_1_get_Count_mCBF6326C20CE3A227279FE057EB64EFB34E2EF44_inline(L_4, Queue_1_get_Count_mCBF6326C20CE3A227279FE057EB64EFB34E2EF44_RuntimeMethod_var);
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
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
// System.Void DepthFirstScheduler.Scheduler/StepScheduler::Enqueue(DepthFirstScheduler.TaskChain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StepScheduler_Enqueue_m76720BF40FEA4659AC5B43B631C934F0EAA6EB7C (StepScheduler_t09FEF8CFAB003524F34FE965F7138CB1E1C2FF28* __this, TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LockQueue_1_Enqueue_mBBCB1B5296B7BDBDD18A1A563FFC7FF72E4BF4F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_taskQueue.Enqueue(item);
		LockQueue_1_tCE05F62CFDC18D642CBBC99CDAAAF1665D0F8DD3* L_0 = __this->___m_taskQueue_0;
		TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* L_1 = ___0_item;
		LockQueue_1_Enqueue_mBBCB1B5296B7BDBDD18A1A563FFC7FF72E4BF4F5(L_0, L_1, LockQueue_1_Enqueue_mBBCB1B5296B7BDBDD18A1A563FFC7FF72E4BF4F5_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 DepthFirstScheduler.Scheduler/StepScheduler::UpdateAndGetTaskCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StepScheduler_UpdateAndGetTaskCount_m1903DA6962BC1DF3ED8966AA4D25F6A0B0A67404 (StepScheduler_t09FEF8CFAB003524F34FE965F7138CB1E1C2FF28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LockQueue_1_Dequeue_mE23BAB21EB8E60D344C4EBB6328EC2BFEE0D88F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LockQueue_1_get_Count_m9F21C87AB63B6016741A7804C1F866A27A31C208_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (m_chain != null)
		TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* L_0 = __this->___m_chain_1;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// var status = m_chain.Next();
		TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* L_1 = __this->___m_chain_1;
		int32_t L_2;
		L_2 = TaskChain_Next_mB59B913FBDA74763199CAE46E86222CE95209431(L_1, NULL);
		// if (status == ExecutionStatus.Continue)
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		// return m_taskQueue.Count;
		LockQueue_1_tCE05F62CFDC18D642CBBC99CDAAAF1665D0F8DD3* L_3 = __this->___m_taskQueue_0;
		int32_t L_4;
		L_4 = LockQueue_1_get_Count_m9F21C87AB63B6016741A7804C1F866A27A31C208(L_3, LockQueue_1_get_Count_m9F21C87AB63B6016741A7804C1F866A27A31C208_RuntimeMethod_var);
		return L_4;
	}

IL_0022:
	{
		// m_chain = null;
		__this->___m_chain_1 = (TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_chain_1), (void*)(TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E*)NULL);
	}

IL_0029:
	{
		// m_chain = m_taskQueue.Dequeue(out count);
		LockQueue_1_tCE05F62CFDC18D642CBBC99CDAAAF1665D0F8DD3* L_5 = __this->___m_taskQueue_0;
		TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* L_6;
		L_6 = LockQueue_1_Dequeue_mE23BAB21EB8E60D344C4EBB6328EC2BFEE0D88F3(L_5, (&V_0), LockQueue_1_Dequeue_mE23BAB21EB8E60D344C4EBB6328EC2BFEE0D88F3_RuntimeMethod_var);
		__this->___m_chain_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_chain_1), (void*)L_6);
		// return count;
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Void DepthFirstScheduler.Scheduler/StepScheduler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StepScheduler_Dispose_mA8450EFCD1ED23AAA40D1FDD8FB81A8ACF9E0E3E (StepScheduler_t09FEF8CFAB003524F34FE965F7138CB1E1C2FF28* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DepthFirstScheduler.Scheduler/StepScheduler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StepScheduler__ctor_m00941AFD6610CF7FFD514DF3A124D3BC8F0FF7C8 (StepScheduler_t09FEF8CFAB003524F34FE965F7138CB1E1C2FF28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LockQueue_1__ctor_m80909F2E9A93C89C72EA19AC912D3872DE57315D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LockQueue_1_tCE05F62CFDC18D642CBBC99CDAAAF1665D0F8DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LockQueue<TaskChain> m_taskQueue = new LockQueue<TaskChain>();
		LockQueue_1_tCE05F62CFDC18D642CBBC99CDAAAF1665D0F8DD3* L_0 = (LockQueue_1_tCE05F62CFDC18D642CBBC99CDAAAF1665D0F8DD3*)il2cpp_codegen_object_new(LockQueue_1_tCE05F62CFDC18D642CBBC99CDAAAF1665D0F8DD3_il2cpp_TypeInfo_var);
		LockQueue_1__ctor_m80909F2E9A93C89C72EA19AC912D3872DE57315D(L_0, LockQueue_1__ctor_m80909F2E9A93C89C72EA19AC912D3872DE57315D_RuntimeMethod_var);
		__this->___m_taskQueue_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_taskQueue_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void DepthFirstScheduler.Scheduler/ThreadPoolScheduler::Enqueue(DepthFirstScheduler.TaskChain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadPoolScheduler_Enqueue_m2639CEEAA5388A43B2AA2847DB44F2DEE13A8B69 (ThreadPoolScheduler_t8734547779F29DE0E1ED11F3278962B10DEE8E40* __this, TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CEnqueueU3Eb__0_m37E6E2477D04E7862546D94F8B5BD65650EF675C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_tD53261C6B2302E54F50300401F30CEC7EA501B95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass0_0_tD53261C6B2302E54F50300401F30CEC7EA501B95* L_0 = (U3CU3Ec__DisplayClass0_0_tD53261C6B2302E54F50300401F30CEC7EA501B95*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_tD53261C6B2302E54F50300401F30CEC7EA501B95_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass0_0__ctor_m095B0B39D7BD4E86983A965A22C03989A18BFF60(L_0, NULL);
		U3CU3Ec__DisplayClass0_0_tD53261C6B2302E54F50300401F30CEC7EA501B95* L_1 = L_0;
		TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* L_2 = ___0_item;
		L_1->___item_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___item_0), (void*)L_2);
		// System.Threading.ThreadPool.QueueUserWorkItem(_ =>
		// {
		//     if (item == null)
		//     {
		//         return;
		//     }
		// 
		//     while (true)
		//     {
		//         var status = item.Next();
		//         if (status != ExecutionStatus.Continue)
		//         {
		//             break;
		//         }
		//     }
		// 
		// });
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_3 = (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3*)il2cpp_codegen_object_new(WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C(L_3, L_1, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3CEnqueueU3Eb__0_m37E6E2477D04E7862546D94F8B5BD65650EF675C_RuntimeMethod_var), NULL);
		bool L_4;
		L_4 = ThreadPool_QueueUserWorkItem_m24B9C1887DBABE1F408E31475AF15B9B9A08854D(L_3, NULL);
		// }
		return;
	}
}
// System.Void DepthFirstScheduler.Scheduler/ThreadPoolScheduler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadPoolScheduler_Dispose_m584047DB49BB838E150E00EDE6B33DB84F96F1B8 (ThreadPoolScheduler_t8734547779F29DE0E1ED11F3278962B10DEE8E40* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DepthFirstScheduler.Scheduler/ThreadPoolScheduler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadPoolScheduler__ctor_mB5230C631ABBF77C562455CD969C4A67308D3EA4 (ThreadPoolScheduler_t8734547779F29DE0E1ED11F3278962B10DEE8E40* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void DepthFirstScheduler.Scheduler/ThreadPoolScheduler/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m095B0B39D7BD4E86983A965A22C03989A18BFF60 (U3CU3Ec__DisplayClass0_0_tD53261C6B2302E54F50300401F30CEC7EA501B95* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void DepthFirstScheduler.Scheduler/ThreadPoolScheduler/<>c__DisplayClass0_0::<Enqueue>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0_U3CEnqueueU3Eb__0_m37E6E2477D04E7862546D94F8B5BD65650EF675C (U3CU3Ec__DisplayClass0_0_tD53261C6B2302E54F50300401F30CEC7EA501B95* __this, RuntimeObject* ___0__, const RuntimeMethod* method) 
{
	{
		// if (item == null)
		TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* L_0 = __this->___item_0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// var status = item.Next();
		TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* L_1 = __this->___item_0;
		int32_t L_2;
		L_2 = TaskChain_Next_mB59B913FBDA74763199CAE46E86222CE95209431(L_1, NULL);
		// if (status != ExecutionStatus.Continue)
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0009;
		}
	}
	{
		// });
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
// System.Void DepthFirstScheduler.Scheduler/ThreadScheduler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadScheduler__ctor_mC1A7209620D396ADE415BBD3B66B4B27890DF7F9 (ThreadScheduler_t537C2059D25B13EEC4806EBD8FA3F1CBE7705C50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonitorQueue_1__ctor_m8D4A54E98E00952B71337C0D00E9FD624CA88C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonitorQueue_1_t11ECF6EA2905CD822FBD4CBC675A42E9B2ABB156_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadScheduler_Worker_m2424C326115E4D3F61EBC8829B414DDABE9D73CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MonitorQueue<TaskChain> m_queue = new MonitorQueue<TaskChain>();
		MonitorQueue_1_t11ECF6EA2905CD822FBD4CBC675A42E9B2ABB156* L_0 = (MonitorQueue_1_t11ECF6EA2905CD822FBD4CBC675A42E9B2ABB156*)il2cpp_codegen_object_new(MonitorQueue_1_t11ECF6EA2905CD822FBD4CBC675A42E9B2ABB156_il2cpp_TypeInfo_var);
		MonitorQueue_1__ctor_m8D4A54E98E00952B71337C0D00E9FD624CA88C67(L_0, MonitorQueue_1__ctor_m8D4A54E98E00952B71337C0D00E9FD624CA88C67_RuntimeMethod_var);
		__this->___m_queue_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_queue_0), (void*)L_0);
		// public ThreadScheduler()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_thread = new Thread(new ParameterizedThreadStart(Worker));
		ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9* L_1 = (ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9*)il2cpp_codegen_object_new(ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9_il2cpp_TypeInfo_var);
		ParameterizedThreadStart__ctor_m31EA734851CB478E822BAB7E1B479CA4FDBF2718(L_1, NULL, (intptr_t)((void*)ThreadScheduler_Worker_m2424C326115E4D3F61EBC8829B414DDABE9D73CE_RuntimeMethod_var), NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_2 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		Thread__ctor_m7319B115C7E11770EEEC7F1D4A01A50E29550700(L_2, L_1, NULL);
		__this->___m_thread_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_thread_1), (void*)L_2);
		// m_thread.Start(m_queue);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_3 = __this->___m_thread_1;
		MonitorQueue_1_t11ECF6EA2905CD822FBD4CBC675A42E9B2ABB156* L_4 = __this->___m_queue_0;
		Thread_Start_m64E3F27883C3CCCE7209F5D2BD268A33D4C71566(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void DepthFirstScheduler.Scheduler/ThreadScheduler::Worker(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadScheduler_Worker_m2424C326115E4D3F61EBC8829B414DDABE9D73CE (RuntimeObject* ___0_arg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonitorQueue_1_Dequeue_m9A1928078C3EE24DA5995577D9DDA6C6C0FB2C76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonitorQueue_1_t11ECF6EA2905CD822FBD4CBC675A42E9B2ABB156_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonitorQueue_1_t11ECF6EA2905CD822FBD4CBC675A42E9B2ABB156* V_0 = NULL;
	TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* V_1 = NULL;
	{
		// MonitorQueue<TaskChain> queue = (MonitorQueue<TaskChain>)arg;
		RuntimeObject* L_0 = ___0_arg;
		V_0 = ((MonitorQueue_1_t11ECF6EA2905CD822FBD4CBC675A42E9B2ABB156*)CastclassClass((RuntimeObject*)L_0, MonitorQueue_1_t11ECF6EA2905CD822FBD4CBC675A42E9B2ABB156_il2cpp_TypeInfo_var));
	}

IL_0007:
	{
		// var chain = queue.Dequeue();
		MonitorQueue_1_t11ECF6EA2905CD822FBD4CBC675A42E9B2ABB156* L_1 = V_0;
		TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* L_2;
		L_2 = MonitorQueue_1_Dequeue_m9A1928078C3EE24DA5995577D9DDA6C6C0FB2C76(L_1, MonitorQueue_1_Dequeue_m9A1928078C3EE24DA5995577D9DDA6C6C0FB2C76_RuntimeMethod_var);
		V_1 = L_2;
		// if (chain == null)
		TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}

IL_0011:
	{
		// var status = chain.Next();
		TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* L_4 = V_1;
		int32_t L_5;
		L_5 = TaskChain_Next_mB59B913FBDA74763199CAE46E86222CE95209431(L_4, NULL);
		// if (status != ExecutionStatus.Continue)
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0011;
		}
	}
	{
		// break;
		goto IL_0007;
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void DepthFirstScheduler.Scheduler/ThreadScheduler::Enqueue(DepthFirstScheduler.TaskChain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadScheduler_Enqueue_m773F0628EB198EE4EB7AAB0F0C011E8FD62FA831 (ThreadScheduler_t537C2059D25B13EEC4806EBD8FA3F1CBE7705C50* __this, TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonitorQueue_1_Enqueue_m65726E4D19E75E941D12D075E048B4132C93A2EE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_queue.Enqueue(item);
		MonitorQueue_1_t11ECF6EA2905CD822FBD4CBC675A42E9B2ABB156* L_0 = __this->___m_queue_0;
		TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* L_1 = ___0_item;
		MonitorQueue_1_Enqueue_m65726E4D19E75E941D12D075E048B4132C93A2EE(L_0, L_1, MonitorQueue_1_Enqueue_m65726E4D19E75E941D12D075E048B4132C93A2EE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DepthFirstScheduler.Scheduler/ThreadScheduler::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadScheduler_Dispose_m4B112475B4ABC443CCB14C075799C3EFE99181B9 (ThreadScheduler_t537C2059D25B13EEC4806EBD8FA3F1CBE7705C50* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonitorQueue_1_Enqueue_m65726E4D19E75E941D12D075E048B4132C93A2EE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!disposedValue)
		bool L_0 = __this->___disposedValue_2;
		if (L_0)
		{
			goto IL_0038;
		}
	}
	{
		// if (disposing)
		bool L_1 = ___0_disposing;
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		// if (m_thread != null)
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_2 = __this->___m_thread_1;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// m_queue.Enqueue(null);
		MonitorQueue_1_t11ECF6EA2905CD822FBD4CBC675A42E9B2ABB156* L_3 = __this->___m_queue_0;
		MonitorQueue_1_Enqueue_m65726E4D19E75E941D12D075E048B4132C93A2EE(L_3, (TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E*)NULL, MonitorQueue_1_Enqueue_m65726E4D19E75E941D12D075E048B4132C93A2EE_RuntimeMethod_var);
		// m_thread.Join();
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_4 = __this->___m_thread_1;
		Thread_Join_mB756581AAF5EB028081256E0517892BC8867779F(L_4, NULL);
		// m_thread = null;
		__this->___m_thread_1 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_thread_1), (void*)(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)NULL);
	}

IL_0031:
	{
		// disposedValue = true;
		__this->___disposedValue_2 = (bool)1;
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void DepthFirstScheduler.Scheduler/ThreadScheduler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadScheduler_Dispose_mB1125685CCEBBCA9ECBF370A547A75F4FF91B601 (ThreadScheduler_t537C2059D25B13EEC4806EBD8FA3F1CBE7705C50* __this, const RuntimeMethod* method) 
{
	{
		// Dispose(true);
		VirtualActionInvoker1< bool >::Invoke(6 /* System.Void DepthFirstScheduler.Scheduler/ThreadScheduler::Dispose(System.Boolean) */, __this, (bool)1);
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
// DepthFirstScheduler.TaskChain DepthFirstScheduler.TaskChain::Schedule(DepthFirstScheduler.ISchedulable,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* TaskChain_Schedule_m7026907E3B2C293B8DF8FFE0EA15EB2DD7DD9789 (RuntimeObject* ___0_schedulable, Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___1_onError, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t8566A34A42AB821EF7B0DB0557B450103DA1B975_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t42E839B1CC555BA075867EF148D708C0C905331F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISchedulable_t194CCA63841FD033D1793B14465788FAEEDAAC8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IScheduler_tCC0C7771CE96DAB145ABAE916D194A40667DB881_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* V_0 = NULL;
	{
		// var item = new TaskChain
		// {
		//     Enumerator = schedulable.Traverse().GetEnumerator(),
		//     OnError = onError
		// };
		TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* L_0 = (TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E*)il2cpp_codegen_object_new(TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E_il2cpp_TypeInfo_var);
		TaskChain__ctor_mAED150EDE82E2E3D753D8B1CF06BE499121857EC(L_0, NULL);
		TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* L_1 = L_0;
		RuntimeObject* L_2 = ___0_schedulable;
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Collections.Generic.IEnumerable`1<DepthFirstScheduler.ISchedulable> DepthFirstScheduler.ISchedulable::Traverse() */, ISchedulable_t194CCA63841FD033D1793B14465788FAEEDAAC8B_il2cpp_TypeInfo_var, L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<DepthFirstScheduler.ISchedulable>::GetEnumerator() */, IEnumerable_1_t8566A34A42AB821EF7B0DB0557B450103DA1B975_il2cpp_TypeInfo_var, L_3);
		L_1->___Enumerator_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Enumerator_0), (void*)L_4);
		TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* L_5 = L_1;
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_6 = ___1_onError;
		L_5->___OnError_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___OnError_1), (void*)L_6);
		V_0 = L_5;
		// if (item.Enumerator.MoveNext())
		TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* L_7 = V_0;
		RuntimeObject* L_8 = L_7->___Enumerator_0;
		bool L_9;
		L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
		if (!L_9)
		{
			goto IL_0060;
		}
	}
	{
		// if (item.Enumerator.Current.Schedulder == null)
		TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* L_10 = V_0;
		RuntimeObject* L_11 = L_10->___Enumerator_0;
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<DepthFirstScheduler.ISchedulable>::get_Current() */, IEnumerator_1_t42E839B1CC555BA075867EF148D708C0C905331F_il2cpp_TypeInfo_var, L_11);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* DepthFirstScheduler.IScheduler DepthFirstScheduler.ISchedulable::get_Schedulder() */, ISchedulable_t194CCA63841FD033D1793B14465788FAEEDAAC8B_il2cpp_TypeInfo_var, L_12);
		if (L_13)
		{
			goto IL_004a;
		}
	}
	{
		// Scheduler.MainThread.Enqueue(item);
		StepScheduler_t09FEF8CFAB003524F34FE965F7138CB1E1C2FF28* L_14;
		L_14 = Scheduler_get_MainThread_m62AF20A0BD44979961B4F7DA32581A6D85DF74C9(NULL);
		TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* L_15 = V_0;
		StepScheduler_Enqueue_m76720BF40FEA4659AC5B43B631C934F0EAA6EB7C(L_14, L_15, NULL);
		goto IL_0060;
	}

IL_004a:
	{
		// item.Enumerator.Current.Schedulder.Enqueue(item);
		TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* L_16 = V_0;
		RuntimeObject* L_17 = L_16->___Enumerator_0;
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<DepthFirstScheduler.ISchedulable>::get_Current() */, IEnumerator_1_t42E839B1CC555BA075867EF148D708C0C905331F_il2cpp_TypeInfo_var, L_17);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* DepthFirstScheduler.IScheduler DepthFirstScheduler.ISchedulable::get_Schedulder() */, ISchedulable_t194CCA63841FD033D1793B14465788FAEEDAAC8B_il2cpp_TypeInfo_var, L_18);
		TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* L_20 = V_0;
		InterfaceActionInvoker1< TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* >::Invoke(0 /* System.Void DepthFirstScheduler.IScheduler::Enqueue(DepthFirstScheduler.TaskChain) */, IScheduler_tCC0C7771CE96DAB145ABAE916D194A40667DB881_il2cpp_TypeInfo_var, L_19, L_20);
	}

IL_0060:
	{
		// return item;
		TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* L_21 = V_0;
		return L_21;
	}
}
// DepthFirstScheduler.ExecutionStatus DepthFirstScheduler.TaskChain::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskChain_Next_mB59B913FBDA74763199CAE46E86222CE95209431 (TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t42E839B1CC555BA075867EF148D708C0C905331F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISchedulable_t194CCA63841FD033D1793B14465788FAEEDAAC8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IScheduler_tCC0C7771CE96DAB145ABAE916D194A40667DB881_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	{
		// if (this.ChainStatus == ChainStatus.Done
		//     || this.ChainStatus== ChainStatus.Error)
		int32_t L_0 = __this->___ChainStatus_2;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = __this->___ChainStatus_2;
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		// return ExecutionStatus.Done;
		return (int32_t)(1);
	}

IL_0014:
	{
		// var status = Enumerator.Current.Execute();
		RuntimeObject* L_2 = __this->___Enumerator_0;
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<DepthFirstScheduler.ISchedulable>::get_Current() */, IEnumerator_1_t42E839B1CC555BA075867EF148D708C0C905331F_il2cpp_TypeInfo_var, L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* DepthFirstScheduler.ExecutionStatus DepthFirstScheduler.ISchedulable::Execute() */, ISchedulable_t194CCA63841FD033D1793B14465788FAEEDAAC8B_il2cpp_TypeInfo_var, L_3);
		// if (status == ExecutionStatus.Error)
		int32_t L_5 = L_4;
		G_B4_0 = L_5;
		if ((!(((uint32_t)L_5) == ((uint32_t)3))))
		{
			G_B5_0 = L_5;
			goto IL_004a;
		}
	}
	{
		// ChainStatus = ChainStatus.Error;
		__this->___ChainStatus_2 = 3;
		// OnError(Enumerator.Current.GetError());
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_6 = __this->___OnError_1;
		RuntimeObject* L_7 = __this->___Enumerator_0;
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<DepthFirstScheduler.ISchedulable>::get_Current() */, IEnumerator_1_t42E839B1CC555BA075867EF148D708C0C905331F_il2cpp_TypeInfo_var, L_7);
		Exception_t* L_9;
		L_9 = InterfaceFuncInvoker0< Exception_t* >::Invoke(1 /* System.Exception DepthFirstScheduler.ISchedulable::GetError() */, ISchedulable_t194CCA63841FD033D1793B14465788FAEEDAAC8B_il2cpp_TypeInfo_var, L_8);
		Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(L_6, L_9, NULL);
		G_B5_0 = G_B4_0;
	}

IL_004a:
	{
		// if (status == ExecutionStatus.Continue)
		if ((!(((uint32_t)G_B5_0) == ((uint32_t)2))))
		{
			goto IL_0056;
		}
	}
	{
		// ChainStatus = ChainStatus.Continue;
		__this->___ChainStatus_2 = 1;
		// return ExecutionStatus.Continue;
		return (int32_t)(2);
	}

IL_0056:
	{
		// if (!Enumerator.MoveNext())
		RuntimeObject* L_10 = __this->___Enumerator_0;
		bool L_11;
		L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
		if (L_11)
		{
			goto IL_006c;
		}
	}
	{
		// ChainStatus = ChainStatus.Done;
		__this->___ChainStatus_2 = 2;
		// return ExecutionStatus.Done;
		return (int32_t)(1);
	}

IL_006c:
	{
		// if (Enumerator.Current.Schedulder != null)
		RuntimeObject* L_12 = __this->___Enumerator_0;
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<DepthFirstScheduler.ISchedulable>::get_Current() */, IEnumerator_1_t42E839B1CC555BA075867EF148D708C0C905331F_il2cpp_TypeInfo_var, L_12);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* DepthFirstScheduler.IScheduler DepthFirstScheduler.ISchedulable::get_Schedulder() */, ISchedulable_t194CCA63841FD033D1793B14465788FAEEDAAC8B_il2cpp_TypeInfo_var, L_13);
		if (!L_14)
		{
			goto IL_009d;
		}
	}
	{
		// ChainStatus = ChainStatus.Continue;
		__this->___ChainStatus_2 = 1;
		// Enumerator.Current.Schedulder.Enqueue(this);
		RuntimeObject* L_15 = __this->___Enumerator_0;
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<DepthFirstScheduler.ISchedulable>::get_Current() */, IEnumerator_1_t42E839B1CC555BA075867EF148D708C0C905331F_il2cpp_TypeInfo_var, L_15);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* DepthFirstScheduler.IScheduler DepthFirstScheduler.ISchedulable::get_Schedulder() */, ISchedulable_t194CCA63841FD033D1793B14465788FAEEDAAC8B_il2cpp_TypeInfo_var, L_16);
		InterfaceActionInvoker1< TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* >::Invoke(0 /* System.Void DepthFirstScheduler.IScheduler::Enqueue(DepthFirstScheduler.TaskChain) */, IScheduler_tCC0C7771CE96DAB145ABAE916D194A40667DB881_il2cpp_TypeInfo_var, L_17, __this);
		// return ExecutionStatus.Done;
		return (int32_t)(1);
	}

IL_009d:
	{
		// return Next();
		int32_t L_18;
		L_18 = TaskChain_Next_mB59B913FBDA74763199CAE46E86222CE95209431(__this, NULL);
		return L_18;
	}
}
// System.Void DepthFirstScheduler.TaskChain::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskChain__ctor_mAED150EDE82E2E3D753D8B1CF06BE499121857EC (TaskChain_t9313EDE86BBF9712E9BE101FB19C8DC4CA3D920E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// DepthFirstScheduler.Unit DepthFirstScheduler.Unit::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A Unit_get_Default_m8AE5DF6FC1AFCCA0434536511CEE6106DBB5242C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Unit Default { get { return @default; } }
		il2cpp_codegen_runtime_class_init_inline(Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A_il2cpp_TypeInfo_var);
		Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A L_0 = ((Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A_StaticFields*)il2cpp_codegen_static_fields_for(Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A_il2cpp_TypeInfo_var))->___default_0;
		return L_0;
	}
}
// System.Boolean DepthFirstScheduler.Unit::op_Equality(DepthFirstScheduler.Unit,DepthFirstScheduler.Unit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unit_op_Equality_m229E68B6D97D50F478E25989C6F0CAFC24E8E4F9 (Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A ___0_first, Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A ___1_second, const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean DepthFirstScheduler.Unit::op_Inequality(DepthFirstScheduler.Unit,DepthFirstScheduler.Unit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unit_op_Inequality_m6562C30C690082FDAEF7A283B313F8CF7760D420 (Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A ___0_first, Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A ___1_second, const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean DepthFirstScheduler.Unit::Equals(DepthFirstScheduler.Unit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unit_Equals_mF02931137294908A8B9A5E2107647521E4650596 (Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A* __this, Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A ___0_other, const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool Unit_Equals_mF02931137294908A8B9A5E2107647521E4650596_AdjustorThunk (RuntimeObject* __this, Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A ___0_other, const RuntimeMethod* method)
{
	Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A*>(__this + _offset);
	bool _returnValue;
	_returnValue = Unit_Equals_mF02931137294908A8B9A5E2107647521E4650596(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean DepthFirstScheduler.Unit::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unit_Equals_mB50C36A25904AD159D242859F127E5D829964396 (Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return obj is Unit;
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Unit_Equals_mB50C36A25904AD159D242859F127E5D829964396_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A*>(__this + _offset);
	bool _returnValue;
	_returnValue = Unit_Equals_mB50C36A25904AD159D242859F127E5D829964396(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 DepthFirstScheduler.Unit::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unit_GetHashCode_m459119921509F9A1B506ACEF693BDFE7A954F7A7 (Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A* __this, const RuntimeMethod* method) 
{
	{
		// return 0;
		return 0;
	}
}
IL2CPP_EXTERN_C  int32_t Unit_GetHashCode_m459119921509F9A1B506ACEF693BDFE7A954F7A7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Unit_GetHashCode_m459119921509F9A1B506ACEF693BDFE7A954F7A7(_thisAdjusted, method);
	return _returnValue;
}
// System.String DepthFirstScheduler.Unit::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Unit_ToString_m096BDF2B5B49A4ECDF6ED277E8DC6882282A37DA (Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "()";
		return _stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946;
	}
}
IL2CPP_EXTERN_C  String_t* Unit_ToString_m096BDF2B5B49A4ECDF6ED277E8DC6882282A37DA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Unit_t79A215B99C53B366C72E392E8F8C786972E20C5A*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Unit_ToString_m096BDF2B5B49A4ECDF6ED277E8DC6882282A37DA(_thisAdjusted, method);
	return _returnValue;
}
// System.Void DepthFirstScheduler.Unit::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit__cctor_m6D666DF0AB268CFC73C88EE09D226453ADD0059F (const RuntimeMethod* method) 
{
	{
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876 (String_t* ___0_s, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_s;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___0_s;
		int32_t L_2 = V_1;
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___0_s;
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_min;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___0_value;
		int32_t L_5 = ___2_max;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* CurrentThreadScheduler_GetQueue_m002E52175C20844D716A37A8DC3527944752E202_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurrentThreadScheduler_t615B9E89AE1B5FAB26CC3B9170FF6D0A8C5C32C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return queue;
		Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* L_0 = ((CurrentThreadScheduler_t615B9E89AE1B5FAB26CC3B9170FF6D0A8C5C32C9_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(CurrentThreadScheduler_t615B9E89AE1B5FAB26CC3B9170FF6D0A8C5C32C9_il2cpp_TypeInfo_var))->___queue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CurrentThreadScheduler_SetQueue_m030AC3D1C020612D129197986D4D6C8D084EDC42_inline (Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* ___0_newQueue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurrentThreadScheduler_t615B9E89AE1B5FAB26CC3B9170FF6D0A8C5C32C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// queue = newQueue;
		Queue_1_t7A04D3F2D6AB89936DD8D8BC63F68B17E1206AA8* L_0 = ___0_newQueue;
		((CurrentThreadScheduler_t615B9E89AE1B5FAB26CC3B9170FF6D0A8C5C32C9_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(CurrentThreadScheduler_t615B9E89AE1B5FAB26CC3B9170FF6D0A8C5C32C9_il2cpp_TypeInfo_var))->___queue_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CurrentThreadScheduler_t615B9E89AE1B5FAB26CC3B9170FF6D0A8C5C32C9_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(CurrentThreadScheduler_t615B9E89AE1B5FAB26CC3B9170FF6D0A8C5C32C9_il2cpp_TypeInfo_var))->___queue_0), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
