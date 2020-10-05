#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Ionic.Crc.CRC32
struct CRC32_tA22999B2090CF8FB9FD50B79803BF2E296E4437C;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// PlayFab.Internal.CallRequestContainer
struct CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Text.Decoder
struct Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// Ionic.Zlib.DeflateManager
struct DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// Ionic.Zlib.GZipStream
struct GZipStream_tD1892FDA4711C4DDED84FD050A205322630365EA;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// PlayFab.SharedModels.IPlayFabInstanceApi
struct IPlayFabInstanceApi_tEDCA40C79BCDA82378590B4D1C479461D1A46A55;
// PlayFab.Public.IPlayFabLogger
struct IPlayFabLogger_tBA1C8C1A4E58EF9EAF3A8EEF521300BFA91334FB;
// PlayFab.Public.IScreenTimeTracker
struct IScreenTimeTracker_tE69CAFEA54F38655D9BE29B5BAA20B649FB2E5BE;
// Ionic.Zlib.InflateBlocks
struct InflateBlocks_t64E396F2FC55FDE88EED6F55B0D7769466E82286;
// Ionic.Zlib.InflateManager
struct InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// PlayFab.PlayFabApiSettings
struct PlayFabApiSettings_t62DC7BEDADD9C5CBEA3E3613AAF5521633496913;
// PlayFab.PlayFabAuthenticationContext
struct PlayFabAuthenticationContext_tEC17E9E687F890C5A626A3043464B68314443652;
// PlayFab.PlayFabError
struct PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586;
// PlayFab.Internal.PlayFabHttp
struct PlayFabHttp_t52EDE594B062E2A18F3BAEC1D2AE6017C0093AC6;
// PlayFab.Public.PlayFabLoggerBase
struct PlayFabLoggerBase_t770DB83E134BEB645A2D9C063DDD42DAA7C2D6CE;
// PlayFab.SharedModels.PlayFabRequestCommon
struct PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A;
// PlayFab.SharedModels.PlayFabResultCommon
struct PlayFabResultCommon_t9DD4B71D8199989BBFB06770ED84AD5F666EF7FB;
// PlayFabSharedSettings
struct PlayFabSharedSettings_t5F6331E1584B71FCBC22C42E4375846778C948BB;
// PlayFab.Internal.PlayFabUnityHttp
struct PlayFabUnityHttp_t9BEA925C264DCE78C5ADD55715644170DC16D04A;
// PlayFab.Internal.PlayFabWebRequest
struct PlayFabWebRequest_t8B559043BC6B902CA68E57AF2CF876901CD78C26;
// PlayFab.Json.PocoJsonSerializerStrategy
struct PocoJsonSerializerStrategy_tB152DBDAF927D624432CB706707C696F4E740E5D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Ionic.Zlib.ZTree
struct ZTree_t7DA6B673E43E37EE39DC59763E8C0FD3DE9CD04D;
// Ionic.Zlib.ZlibBaseStream
struct ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62;
// Ionic.Zlib.ZlibCodec
struct ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7;
// Ionic.Zlib.ZlibException
struct ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069;
// Ionic.Zlib.ZlibStream
struct ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076;
// Ionic.Zlib.DeflateManager/CompressFunc
struct CompressFunc_t59B35532A7EFBB0597CD39547BC0D0AECC998FB8;
// Ionic.Zlib.DeflateManager/Config
struct Config_t4E6F95E1778498BE0378D1749D94BC05EE856948;
// PlayFab.Internal.PlayFabDeviceUtil/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t21572621033F5BAC55B2E578DEC70FE634137C18;
// PlayFab.Events.PlayFabEvents/PlayFabErrorEvent
struct PlayFabErrorEvent_t7DE9B8D5DAC932EE3A942A11847A2ECB94A0DA90;
// PlayFab.Internal.PlayFabHttp/<SendScreenTimeEvents>d__17
struct U3CSendScreenTimeEventsU3Ed__17_t3042A3544A01ED5C832A82C99F10D539F893FDD4;
// PlayFab.Internal.PlayFabHttp/ApiProcessErrorEvent
struct ApiProcessErrorEvent_tDD3E2CF95D51D8D06234A16D27C8573AAD410903;
// PlayFab.Public.PlayFabLoggerBase/<RegisterLogger>d__23
struct U3CRegisterLoggerU3Ed__23_t66C9DD99B248E95C13ECD2FFB2E62F8EBA1F6E19;
// PlayFab.PlayFabSettings/<>c
struct U3CU3Ec_tEA6EC5BFAD34550F7D558FE6FCF52CB5A3E8AA57;
// PlayFab.Internal.PlayFabUnityHttp/<Post>d__12
struct U3CPostU3Ed__12_t44CD9CF8A88433BD2FCF9FE1106161A28F144489;
// PlayFab.Internal.PlayFabUnityHttp/<SimpleCallCoroutine>d__10
struct U3CSimpleCallCoroutineU3Ed__10_tE47ACDD22401ED44B679B9B64BADB4B5C51C004A;
// PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t170018259DEFF42402484A5709A5A784DE224A38;
// PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_tBC36B06ECC9E8E0DDDFFB4BBA97A914925E780B9;
// PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_t3722747C51037F78D8A4C73ACDD906037B55E64F;
// PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass30_0
struct U3CU3Ec__DisplayClass30_0_t16C6742935DDF4A0D83417A4F7DC05DBC2CF95BA;
// PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_tCB17FC28F80C14092FF929FC37795F8D51700D42;
// PlayFab.Json.ReflectionUtils/<>c__DisplayClass26_0
struct U3CU3Ec__DisplayClass26_0_t9E9D1D6C457855593F1CF8DFA0D9CE14584BD00F;
// PlayFab.Json.ReflectionUtils/<>c__DisplayClass30_0
struct U3CU3Ec__DisplayClass30_0_tF615FB78091E446220AF7E5B0829963B60EE35A1;
// PlayFab.Json.ReflectionUtils/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t7C2360B9616692CFC4B194EDF6DC933B83D6CDF8;
// PlayFab.Json.ReflectionUtils/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_tBDEA6E4377149E351FF0FE76AAEF70C4EFCF7772;
// PlayFab.Json.ReflectionUtils/<>c__DisplayClass35_0
struct U3CU3Ec__DisplayClass35_0_tDF185DD175EE578E3C3ED8554D1F41CFFAD265BB;
// PlayFab.Json.ReflectionUtils/ConstructorDelegate
struct ConstructorDelegate_t4487226C10DA6CCAB43C4059510EFFAD5BBE6B05;
// PlayFab.Json.ReflectionUtils/GetDelegate
struct GetDelegate_t9AB020979295CCB233548FEA1EE7075152F081CC;
// PlayFab.Json.ReflectionUtils/SetDelegate
struct SetDelegate_t0E36BE7527973AE2CCB3FDB961AD0DCCA33F241F;
// PlayFab.Json.SimpleJsonInstance/PlayFabSimpleJsonCuztomization
struct PlayFabSimpleJsonCuztomization_t203EDD43BC148076B30573A468084CE2D5CC4EB1;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<PlayFab.PlayFabError>
struct Action_1_t783DC837D7772A52296BE8080F3FE74761B96F8F;
// System.Action`1<System.Byte[]>
struct Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// PlayFab.Internal.PlayFabHttp/ApiProcessingEvent`1<PlayFab.Internal.ApiProcessingEventArgs>
struct ApiProcessingEvent_1_t7A554E52A0EEDC705FD9AD05BB223502D86DD69D;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Collections.Generic.IDictionary`2<System.Type,PlayFab.Json.ReflectionUtils/ConstructorDelegate>
struct IDictionary_2_tAE7562E8A6376CFA5D38A8C56643ABE348AE7AE6;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Reflection.MemberInfo,PlayFab.Json.ReflectionUtils/GetDelegate>>
struct IDictionary_2_tF4DD1322CD7F1AE85EBD9DDA3085E10C2EF8A48B;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,PlayFab.Json.ReflectionUtils/SetDelegate>>>
struct IDictionary_2_t5064C14C0D29A53DB0A2BADE71DACD23CB08C8A3;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.List`1<PlayFab.Internal.CallRequestContainer>
struct List_1_t24703A5FAC676916D88CEE11A3A4553C0670F6A8;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4;
// System.Collections.Generic.Queue`1<System.Collections.IEnumerator>
struct Queue_1_t742C51B86E137125C769B81406E5B4BE6FC6FA32;
// System.Collections.Generic.Queue`1<System.String>
struct Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Ionic.Zlib.DeflateManager/Config[]
struct ConfigU5BU5D_t0FB342CEEC50F6672104901D9439FDAD8BDC1A6F;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Net.HttpWebRequest
struct HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Net.IPAddress
struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE;
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.ObjectDisposedException
struct ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.IO.StreamReader
struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.Application/LogCallback
struct LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD;

IL2CPP_EXTERN_C RuntimeClass* Adler_t860D37298395E89045511F7B0CDA6ECE490C12F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigU5BU5D_t0FB342CEEC50F6672104901D9439FDAD8BDC1A6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Config_t4E6F95E1778498BE0378D1749D94BC05EE856948_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FlushType_tE34F47FCFE2F372FBF64FC21EF23825DBBEDACCA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GZipStream_tD1892FDA4711C4DDED84FD050A205322630365EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IScreenTimeTracker_tE69CAFEA54F38655D9BE29B5BAA20B649FB2E5BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayFabHttp_t52EDE594B062E2A18F3BAEC1D2AE6017C0093AC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayFabSettings_tA8E9D5A2A101C5AE9F889E4542545ACA2683216C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayFabUtil_t6B9409219700C3BD9282B5C4A4D9F169B6870C90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PocoJsonSerializerStrategy_tB152DBDAF927D624432CB706707C696F4E740E5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionUtils_t23DB43160F54AC632646B53561BDAE335838E9D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tEA6EC5BFAD34550F7D558FE6FCF52CB5A3E8AA57_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708;
IL2CPP_EXTERN_C String_t* _stringLiteral09BE1A5FDF1304B1AF66C7AA9E11F5D68F1A7A53;
IL2CPP_EXTERN_C String_t* _stringLiteral0D42FA553012F7D01ECBD85D631E382744581C46;
IL2CPP_EXTERN_C String_t* _stringLiteral0FE5434C6E938CF30A74BC53A565C36727AA6E9E;
IL2CPP_EXTERN_C String_t* _stringLiteral11220FB36F3572638BE52ECAC48D2D2FEFDCC24E;
IL2CPP_EXTERN_C String_t* _stringLiteral14382552CFC64B2635A52F221D8B0E364321F9D0;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral3301E1AE1BCA5C134551471AB287F2443E658618;
IL2CPP_EXTERN_C String_t* _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6;
IL2CPP_EXTERN_C String_t* _stringLiteral5A97C560200976976C8FD835DF91243ED65A7BC1;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral5E8D8498F7E1FE7ABCB662D0A1CCD0D77D0C00AC;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral72D8EBEB6FFCC1EF2435586ABCD7FAEE5A00634B;
IL2CPP_EXTERN_C String_t* _stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64;
IL2CPP_EXTERN_C String_t* _stringLiteral983DAC088DBADBDF2CEE0A7F894D264FCD8D805D;
IL2CPP_EXTERN_C String_t* _stringLiteral9A538D87C765D16B9229A517D7D588C30AF3D5AE;
IL2CPP_EXTERN_C String_t* _stringLiteral9AE36592E95F2354A6676CC52CF848B11A46DBD9;
IL2CPP_EXTERN_C String_t* _stringLiteralE1686A95CCC23DC313964E1B08D4D364C468214D;
IL2CPP_EXTERN_C String_t* _stringLiteralE7072161266D4F867CE0A311142D9F3D4A0956CA;
IL2CPP_EXTERN_C String_t* _stringLiteralEA19E9F11822E13AAB30BB69AC1CFDDCCBDFA41A;
IL2CPP_EXTERN_C String_t* _stringLiteralF0FA167A2B553EA3A482772133E47AA3C132FFA2;
IL2CPP_EXTERN_C String_t* _stringLiteralFD05F65935228424A37C063FA2EA601FC227D69A;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mD271144E3B9B6C3BF8C6AD6E8E076ED05C54A276_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayFabLoggerBase_HandleUnityLog_mFC5723B8436D44C20D0B7BCA9CDBBD195AAFC52C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPostU3Ed__12_System_Collections_IEnumerator_Reset_m02923BB3B7B1E59DC540B90B893C89D7FEA22064_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRegisterLoggerU3Ed__23_System_Collections_IEnumerator_Reset_m5AFFEFFB243DF74189C575341D63CB5C9D1AF4CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSendScreenTimeEventsU3Ed__17_System_Collections_IEnumerator_Reset_mDA792596D4F352921F816D2868DE0EA2428D6D23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSimpleCallCoroutineU3Ed__10_System_Collections_IEnumerator_Reset_m6E9CEE9ADA201821B9226E50469FABF1F1DE6C84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibCodec_Deflate_m67F5E8F9FCFB53AAF25555A08C0295AC6F2651BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibCodec_EndDeflate_m370DC27D1526D5DAFAFBBDBE687E3D6410D4AF4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibCodec_EndInflate_mC7B25994330545D62E71FF66BD453C89716CAA31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibCodec_Inflate_mF5AD5FE5B5F52DF42BE47A3ACC0A5CB747BDAB77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibCodec_InitializeInflate_mC343BB3077AF966B4E70A43BDAA37F42777903FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibCodec_ResetDeflate_m8CE97F8542EC0FCDB0ABC0C3E71F84446E98B5ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibCodec_SetDeflateParams_mEF1A99CCC3C2047CDDF339B58A346DCAFC417F81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibCodec_SetDictionary_m28FC1265DEA484D32F0E2E9E9F82A838A34868F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibCodec_SyncInflate_mB7A8E815C5A15D854A0143C28CAFE7315FC57696_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibCodec__InternalInitializeDeflate_m4D6BB53615CA88B51F905060934F9818B21FE0C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibCodec__ctor_m10046AF5EC9D8B1990AD06B5C5678C427938C7C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibCodec_flush_pending_mA0557671025B00DC0A13A7A7E1FAEED8F80668E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibStream_Flush_mAA07BB46074C4FBF2564CD4BC5E3DE790C15E466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibStream_Read_m1B6B90DB19018E69DDE475C3797732E11681EF41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibStream_Seek_m109467CDE5CA00E08FEC80F288541E0790669AF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibStream_SetLength_m5C97A2002D4F681F18044EE7CE04FA90D02269EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibStream_Write_mAFAF2B905AF0A46250B54387993332A6DE8BBCD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibStream_get_CanRead_m10E40A43DAB3CE743788A9B1D595B288C026999F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibStream_get_CanWrite_m3E998D83D211E819F841435662988819C1C13653_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibStream_get_Length_mD3BC44AA67C75B2C7902F45F701F5657B983DA38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibStream_set_BufferSize_m73EA9D961AF5F0211E72B1020B0BD5B534613B8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibStream_set_FlushMode_m8C39FFECA492B4EE3F6A3CDE7192D5265280407D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibStream_set_Position_mF677AB500A47C68FC9B46FF04D8BB7C75BA44644_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t CompressFunc_BeginInvoke_mD1BB72AA88CDE92A01D060367898CCB1DE7694A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Config_Lookup_mA55A53EAA68EA1523738F879E38D475B32327F4A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Config__cctor_m9BC7C4B4F4DB19519FD846B2D7BA0EBB0C162654_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayFabSimpleJsonCuztomization_DeserializeObject_m93D5529A83B24E8DA96C844205FEE3AC3F264645_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayFabSimpleJsonCuztomization_TrySerializeKnownTypes_m98612660DE68E87AF2D108854A552FB424FD2970_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayFabSimpleJsonCuztomization__ctor_m22B61E29D913F59FE1BB12C3332C9276671B8F0C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CPostU3Ed__12_MoveNext_mF1F179958F9B5D38185E8A65879BA2ACDF433B57_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CPostU3Ed__12_System_Collections_IEnumerator_Reset_m02923BB3B7B1E59DC540B90B893C89D7FEA22064_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CRegisterLoggerU3Ed__23_MoveNext_mE7954DBFB039A6BF5FB7713343FF020C5EAC1CC2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CRegisterLoggerU3Ed__23_System_Collections_IEnumerator_Reset_m5AFFEFFB243DF74189C575341D63CB5C9D1AF4CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSendScreenTimeEventsU3Ed__17_MoveNext_m28061F18C14BC5554FE39A384C23AC102C0F2656_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSendScreenTimeEventsU3Ed__17_System_Collections_IEnumerator_Reset_mDA792596D4F352921F816D2868DE0EA2428D6D23_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSimpleCallCoroutineU3Ed__10_MoveNext_mCAC5A8A42775F8D37F2087C9EE4FF31D7AC82877_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSimpleCallCoroutineU3Ed__10_System_Collections_IEnumerator_Reset_m6E9CEE9ADA201821B9226E50469FABF1F1DE6C84_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSimpleCallCoroutineU3Ed__10_U3CU3Em__Finally1_mBAFA84DF5905BBFA4EB5FC8478AEE4767862A148_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__0_0_m8BB2BCA1A75452B8E372491C172F9E5938734EC9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass21_0_U3CSimpleGetCallU3Eb__0_m2BDBB7CB1899BD32355EB912D04A83C65050F377_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass22_0_U3CSimplePutCallU3Eb__0_m17AD070224913AA56DDDA6BC62F49E8142A2A38F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass23_0_U3CSimplePostCallU3Eb__0_mCC75B2E6E5B0D5B395EE72A0174C1ECB69273FCD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass30_0_U3CGetGetMethodByReflectionU3Eb__0_m771143A4E0C62113CA55C7283C79FEB34FE73435_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass30_0_U3CQueueRequestErrorU3Eb__0_m4B7FFF71F5DBEC46BA92B9C3A6FB6016E318C439_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass31_0_U3CProcessJsonResponseU3Eb__1_mC947B8B2154A019A0AA672B12B57042FE5ACEA01_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass34_0_U3CGetSetMethodByReflectionU3Eb__0_mFA8DBA295B9CF6536D755212B09CDB9D2812CA40_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass9_0_U3CGetAdvertIdFromUnityU3Eb__0_mFA307F463E555F144F7FFBDD1FF068221BA1EC59_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mCF5524C034CE92C3A9CC1BDD890CCA4589BB6F0D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibCodec_Deflate_m67F5E8F9FCFB53AAF25555A08C0295AC6F2651BA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibCodec_EndDeflate_m370DC27D1526D5DAFAFBBDBE687E3D6410D4AF4D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibCodec_EndInflate_mC7B25994330545D62E71FF66BD453C89716CAA31_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibCodec_Inflate_mF5AD5FE5B5F52DF42BE47A3ACC0A5CB747BDAB77_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibCodec_InitializeInflate_mC343BB3077AF966B4E70A43BDAA37F42777903FC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibCodec_ResetDeflate_m8CE97F8542EC0FCDB0ABC0C3E71F84446E98B5ED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibCodec_SetDeflateParams_mEF1A99CCC3C2047CDDF339B58A346DCAFC417F81_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibCodec_SetDictionary_m28FC1265DEA484D32F0E2E9E9F82A838A34868F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibCodec_SyncInflate_mB7A8E815C5A15D854A0143C28CAFE7315FC57696_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibCodec__InternalInitializeDeflate_m4D6BB53615CA88B51F905060934F9818B21FE0C5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibCodec__ctor_m10046AF5EC9D8B1990AD06B5C5678C427938C7C7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibCodec_flush_pending_mA0557671025B00DC0A13A7A7E1FAEED8F80668E4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibCodec_read_buf_mEBA089371CAA77793B1FB87F80FC7DCC7FC01F58_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibException__ctor_m0D80D4A212E71AEDE3B98ED8801A63B1FBB524C7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibException__ctor_mA10C3C2AD58584CA005A553F6C6135BF7DE68AA6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibStream_CompressBuffer_m9BA1FADDC9F5D9F6F86B07DE0C3DCBB935D0F767_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibStream_CompressString_m70BCB316D570DBF7194A4B9E879C6B245275202B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibStream_Flush_mAA07BB46074C4FBF2564CD4BC5E3DE790C15E466_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibStream_Read_m1B6B90DB19018E69DDE475C3797732E11681EF41_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibStream_Seek_m109467CDE5CA00E08FEC80F288541E0790669AF7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibStream_SetLength_m5C97A2002D4F681F18044EE7CE04FA90D02269EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibStream_UncompressBuffer_m19A8834A76DDA49AE1EE7F62A53D28A51D129FA8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibStream_UncompressString_m589239555D85284365A7E9DF57006698CB947D25_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibStream_Write_mAFAF2B905AF0A46250B54387993332A6DE8BBCD7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibStream__ctor_m7E47303C1A5E7DA2D475527E843887B94D901B88_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibStream_get_CanRead_m10E40A43DAB3CE743788A9B1D595B288C026999F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibStream_get_CanWrite_m3E998D83D211E819F841435662988819C1C13653_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibStream_get_Length_mD3BC44AA67C75B2C7902F45F701F5657B983DA38_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibStream_set_BufferSize_m73EA9D961AF5F0211E72B1020B0BD5B534613B8F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibStream_set_FlushMode_m8C39FFECA492B4EE3F6A3CDE7192D5265280407D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZlibStream_set_Position_mF677AB500A47C68FC9B46FF04D8BB7C75BA44644_MetadataUsageId;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;

struct ConfigU5BU5D_t0FB342CEEC50F6672104901D9439FDAD8BDC1A6F;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Ionic.Zlib.ZlibConstants
struct  ZlibConstants_tB19C249CD7E5F1DE6B6C450483FEB1A3DD29246D  : public RuntimeObject
{
public:

public:
};


// PlayFab.Internal.PlayFabDeviceUtil_<>c__DisplayClass9_0
struct  U3CU3Ec__DisplayClass9_0_t21572621033F5BAC55B2E578DEC70FE634137C18  : public RuntimeObject
{
public:
	// PlayFab.PlayFabApiSettings PlayFab.Internal.PlayFabDeviceUtil_<>c__DisplayClass9_0::settings
	PlayFabApiSettings_t62DC7BEDADD9C5CBEA3E3613AAF5521633496913 * ___settings_0;
	// PlayFab.SharedModels.IPlayFabInstanceApi PlayFab.Internal.PlayFabDeviceUtil_<>c__DisplayClass9_0::instanceApi
	RuntimeObject* ___instanceApi_1;

public:
	inline static int32_t get_offset_of_settings_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_t21572621033F5BAC55B2E578DEC70FE634137C18, ___settings_0)); }
	inline PlayFabApiSettings_t62DC7BEDADD9C5CBEA3E3613AAF5521633496913 * get_settings_0() const { return ___settings_0; }
	inline PlayFabApiSettings_t62DC7BEDADD9C5CBEA3E3613AAF5521633496913 ** get_address_of_settings_0() { return &___settings_0; }
	inline void set_settings_0(PlayFabApiSettings_t62DC7BEDADD9C5CBEA3E3613AAF5521633496913 * value)
	{
		___settings_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settings_0), (void*)value);
	}

	inline static int32_t get_offset_of_instanceApi_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_t21572621033F5BAC55B2E578DEC70FE634137C18, ___instanceApi_1)); }
	inline RuntimeObject* get_instanceApi_1() const { return ___instanceApi_1; }
	inline RuntimeObject** get_address_of_instanceApi_1() { return &___instanceApi_1; }
	inline void set_instanceApi_1(RuntimeObject* value)
	{
		___instanceApi_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instanceApi_1), (void*)value);
	}
};


// PlayFab.Internal.PlayFabHttp_<SendScreenTimeEvents>d__17
struct  U3CSendScreenTimeEventsU3Ed__17_t3042A3544A01ED5C832A82C99F10D539F893FDD4  : public RuntimeObject
{
public:
	// System.Int32 PlayFab.Internal.PlayFabHttp_<SendScreenTimeEvents>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayFab.Internal.PlayFabHttp_<SendScreenTimeEvents>d__17::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single PlayFab.Internal.PlayFabHttp_<SendScreenTimeEvents>d__17::secondsBetweenBatches
	float ___secondsBetweenBatches_2;
	// UnityEngine.WaitForSeconds PlayFab.Internal.PlayFabHttp_<SendScreenTimeEvents>d__17::<delay>5__2
	WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * ___U3CdelayU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSendScreenTimeEventsU3Ed__17_t3042A3544A01ED5C832A82C99F10D539F893FDD4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSendScreenTimeEventsU3Ed__17_t3042A3544A01ED5C832A82C99F10D539F893FDD4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_secondsBetweenBatches_2() { return static_cast<int32_t>(offsetof(U3CSendScreenTimeEventsU3Ed__17_t3042A3544A01ED5C832A82C99F10D539F893FDD4, ___secondsBetweenBatches_2)); }
	inline float get_secondsBetweenBatches_2() const { return ___secondsBetweenBatches_2; }
	inline float* get_address_of_secondsBetweenBatches_2() { return &___secondsBetweenBatches_2; }
	inline void set_secondsBetweenBatches_2(float value)
	{
		___secondsBetweenBatches_2 = value;
	}

	inline static int32_t get_offset_of_U3CdelayU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CSendScreenTimeEventsU3Ed__17_t3042A3544A01ED5C832A82C99F10D539F893FDD4, ___U3CdelayU3E5__2_3)); }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * get_U3CdelayU3E5__2_3() const { return ___U3CdelayU3E5__2_3; }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 ** get_address_of_U3CdelayU3E5__2_3() { return &___U3CdelayU3E5__2_3; }
	inline void set_U3CdelayU3E5__2_3(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * value)
	{
		___U3CdelayU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdelayU3E5__2_3), (void*)value);
	}
};


// PlayFab.Internal.PlayFabUnityHttp
struct  PlayFabUnityHttp_t9BEA925C264DCE78C5ADD55715644170DC16D04A  : public RuntimeObject
{
public:
	// System.Boolean PlayFab.Internal.PlayFabUnityHttp::_isInitialized
	bool ____isInitialized_0;
	// System.Int32 PlayFab.Internal.PlayFabUnityHttp::_pendingWwwMessages
	int32_t ____pendingWwwMessages_1;

public:
	inline static int32_t get_offset_of__isInitialized_0() { return static_cast<int32_t>(offsetof(PlayFabUnityHttp_t9BEA925C264DCE78C5ADD55715644170DC16D04A, ____isInitialized_0)); }
	inline bool get__isInitialized_0() const { return ____isInitialized_0; }
	inline bool* get_address_of__isInitialized_0() { return &____isInitialized_0; }
	inline void set__isInitialized_0(bool value)
	{
		____isInitialized_0 = value;
	}

	inline static int32_t get_offset_of__pendingWwwMessages_1() { return static_cast<int32_t>(offsetof(PlayFabUnityHttp_t9BEA925C264DCE78C5ADD55715644170DC16D04A, ____pendingWwwMessages_1)); }
	inline int32_t get__pendingWwwMessages_1() const { return ____pendingWwwMessages_1; }
	inline int32_t* get_address_of__pendingWwwMessages_1() { return &____pendingWwwMessages_1; }
	inline void set__pendingWwwMessages_1(int32_t value)
	{
		____pendingWwwMessages_1 = value;
	}
};


// PlayFab.Internal.PlayFabUnityHttp_<Post>d__12
struct  U3CPostU3Ed__12_t44CD9CF8A88433BD2FCF9FE1106161A28F144489  : public RuntimeObject
{
public:
	// System.Int32 PlayFab.Internal.PlayFabUnityHttp_<Post>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayFab.Internal.PlayFabUnityHttp_<Post>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PlayFab.Internal.CallRequestContainer PlayFab.Internal.PlayFabUnityHttp_<Post>d__12::reqContainer
	CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D * ___reqContainer_2;
	// PlayFab.Internal.PlayFabUnityHttp PlayFab.Internal.PlayFabUnityHttp_<Post>d__12::<>4__this
	PlayFabUnityHttp_t9BEA925C264DCE78C5ADD55715644170DC16D04A * ___U3CU3E4__this_3;
	// UnityEngine.Networking.UnityWebRequest PlayFab.Internal.PlayFabUnityHttp_<Post>d__12::<www>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwwwU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPostU3Ed__12_t44CD9CF8A88433BD2FCF9FE1106161A28F144489, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPostU3Ed__12_t44CD9CF8A88433BD2FCF9FE1106161A28F144489, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_reqContainer_2() { return static_cast<int32_t>(offsetof(U3CPostU3Ed__12_t44CD9CF8A88433BD2FCF9FE1106161A28F144489, ___reqContainer_2)); }
	inline CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D * get_reqContainer_2() const { return ___reqContainer_2; }
	inline CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D ** get_address_of_reqContainer_2() { return &___reqContainer_2; }
	inline void set_reqContainer_2(CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D * value)
	{
		___reqContainer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reqContainer_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CPostU3Ed__12_t44CD9CF8A88433BD2FCF9FE1106161A28F144489, ___U3CU3E4__this_3)); }
	inline PlayFabUnityHttp_t9BEA925C264DCE78C5ADD55715644170DC16D04A * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline PlayFabUnityHttp_t9BEA925C264DCE78C5ADD55715644170DC16D04A ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(PlayFabUnityHttp_t9BEA925C264DCE78C5ADD55715644170DC16D04A * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CPostU3Ed__12_t44CD9CF8A88433BD2FCF9FE1106161A28F144489, ___U3CwwwU3E5__2_4)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwwwU3E5__2_4() const { return ___U3CwwwU3E5__2_4; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwwwU3E5__2_4() { return &___U3CwwwU3E5__2_4; }
	inline void set_U3CwwwU3E5__2_4(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwwwU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_4), (void*)value);
	}
};


// PlayFab.Internal.PlayFabUnityHttp_<SimpleCallCoroutine>d__10
struct  U3CSimpleCallCoroutineU3Ed__10_tE47ACDD22401ED44B679B9B64BADB4B5C51C004A  : public RuntimeObject
{
public:
	// System.Int32 PlayFab.Internal.PlayFabUnityHttp_<SimpleCallCoroutine>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayFab.Internal.PlayFabUnityHttp_<SimpleCallCoroutine>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Byte[] PlayFab.Internal.PlayFabUnityHttp_<SimpleCallCoroutine>d__10::payload
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___payload_2;
	// System.String PlayFab.Internal.PlayFabUnityHttp_<SimpleCallCoroutine>d__10::fullUrl
	String_t* ___fullUrl_3;
	// System.Action`1<System.String> PlayFab.Internal.PlayFabUnityHttp_<SimpleCallCoroutine>d__10::errorCallback
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___errorCallback_4;
	// System.Action`1<System.Byte[]> PlayFab.Internal.PlayFabUnityHttp_<SimpleCallCoroutine>d__10::successCallback
	Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * ___successCallback_5;
	// System.String PlayFab.Internal.PlayFabUnityHttp_<SimpleCallCoroutine>d__10::method
	String_t* ___method_6;
	// UnityEngine.Networking.UnityWebRequest PlayFab.Internal.PlayFabUnityHttp_<SimpleCallCoroutine>d__10::<www>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwwwU3E5__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSimpleCallCoroutineU3Ed__10_tE47ACDD22401ED44B679B9B64BADB4B5C51C004A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSimpleCallCoroutineU3Ed__10_tE47ACDD22401ED44B679B9B64BADB4B5C51C004A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_payload_2() { return static_cast<int32_t>(offsetof(U3CSimpleCallCoroutineU3Ed__10_tE47ACDD22401ED44B679B9B64BADB4B5C51C004A, ___payload_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_payload_2() const { return ___payload_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_payload_2() { return &___payload_2; }
	inline void set_payload_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___payload_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___payload_2), (void*)value);
	}

	inline static int32_t get_offset_of_fullUrl_3() { return static_cast<int32_t>(offsetof(U3CSimpleCallCoroutineU3Ed__10_tE47ACDD22401ED44B679B9B64BADB4B5C51C004A, ___fullUrl_3)); }
	inline String_t* get_fullUrl_3() const { return ___fullUrl_3; }
	inline String_t** get_address_of_fullUrl_3() { return &___fullUrl_3; }
	inline void set_fullUrl_3(String_t* value)
	{
		___fullUrl_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fullUrl_3), (void*)value);
	}

	inline static int32_t get_offset_of_errorCallback_4() { return static_cast<int32_t>(offsetof(U3CSimpleCallCoroutineU3Ed__10_tE47ACDD22401ED44B679B9B64BADB4B5C51C004A, ___errorCallback_4)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_errorCallback_4() const { return ___errorCallback_4; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_errorCallback_4() { return &___errorCallback_4; }
	inline void set_errorCallback_4(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___errorCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___errorCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_successCallback_5() { return static_cast<int32_t>(offsetof(U3CSimpleCallCoroutineU3Ed__10_tE47ACDD22401ED44B679B9B64BADB4B5C51C004A, ___successCallback_5)); }
	inline Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * get_successCallback_5() const { return ___successCallback_5; }
	inline Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 ** get_address_of_successCallback_5() { return &___successCallback_5; }
	inline void set_successCallback_5(Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * value)
	{
		___successCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___successCallback_5), (void*)value);
	}

	inline static int32_t get_offset_of_method_6() { return static_cast<int32_t>(offsetof(U3CSimpleCallCoroutineU3Ed__10_tE47ACDD22401ED44B679B9B64BADB4B5C51C004A, ___method_6)); }
	inline String_t* get_method_6() const { return ___method_6; }
	inline String_t** get_address_of_method_6() { return &___method_6; }
	inline void set_method_6(String_t* value)
	{
		___method_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CSimpleCallCoroutineU3Ed__10_tE47ACDD22401ED44B679B9B64BADB4B5C51C004A, ___U3CwwwU3E5__2_7)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwwwU3E5__2_7() const { return ___U3CwwwU3E5__2_7; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwwwU3E5__2_7() { return &___U3CwwwU3E5__2_7; }
	inline void set_U3CwwwU3E5__2_7(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwwwU3E5__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_7), (void*)value);
	}
};


// PlayFab.Internal.PlayFabWebRequest_<>c__DisplayClass21_0
struct  U3CU3Ec__DisplayClass21_0_t170018259DEFF42402484A5709A5A784DE224A38  : public RuntimeObject
{
public:
	// PlayFab.Internal.PlayFabWebRequest PlayFab.Internal.PlayFabWebRequest_<>c__DisplayClass21_0::<>4__this
	PlayFabWebRequest_t8B559043BC6B902CA68E57AF2CF876901CD78C26 * ___U3CU3E4__this_0;
	// System.String PlayFab.Internal.PlayFabWebRequest_<>c__DisplayClass21_0::fullUrl
	String_t* ___fullUrl_1;
	// System.Action`1<System.Byte[]> PlayFab.Internal.PlayFabWebRequest_<>c__DisplayClass21_0::successCallback
	Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * ___successCallback_2;
	// System.Action`1<System.String> PlayFab.Internal.PlayFabWebRequest_<>c__DisplayClass21_0::errorCallback
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___errorCallback_3;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_t170018259DEFF42402484A5709A5A784DE224A38, ___U3CU3E4__this_0)); }
	inline PlayFabWebRequest_t8B559043BC6B902CA68E57AF2CF876901CD78C26 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline PlayFabWebRequest_t8B559043BC6B902CA68E57AF2CF876901CD78C26 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(PlayFabWebRequest_t8B559043BC6B902CA68E57AF2CF876901CD78C26 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_fullUrl_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_t170018259DEFF42402484A5709A5A784DE224A38, ___fullUrl_1)); }
	inline String_t* get_fullUrl_1() const { return ___fullUrl_1; }
	inline String_t** get_address_of_fullUrl_1() { return &___fullUrl_1; }
	inline void set_fullUrl_1(String_t* value)
	{
		___fullUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fullUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of_successCallback_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_t170018259DEFF42402484A5709A5A784DE224A38, ___successCallback_2)); }
	inline Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * get_successCallback_2() const { return ___successCallback_2; }
	inline Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 ** get_address_of_successCallback_2() { return &___successCallback_2; }
	inline void set_successCallback_2(Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * value)
	{
		___successCallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___successCallback_2), (void*)value);
	}

	inline static int32_t get_offset_of_errorCallback_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_t170018259DEFF42402484A5709A5A784DE224A38, ___errorCallback_3)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_errorCallback_3() const { return ___errorCallback_3; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_errorCallback_3() { return &___errorCallback_3; }
	inline void set_errorCallback_3(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___errorCallback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___errorCallback_3), (void*)value);
	}
};


// PlayFab.Internal.PlayFabWebRequest_<>c__DisplayClass22_0
struct  U3CU3Ec__DisplayClass22_0_tBC36B06ECC9E8E0DDDFFB4BBA97A914925E780B9  : public RuntimeObject
{
public:
	// PlayFab.Internal.PlayFabWebRequest PlayFab.Internal.PlayFabWebRequest_<>c__DisplayClass22_0::<>4__this
	PlayFabWebRequest_t8B559043BC6B902CA68E57AF2CF876901CD78C26 * ___U3CU3E4__this_0;
	// System.String PlayFab.Internal.PlayFabWebRequest_<>c__DisplayClass22_0::fullUrl
	String_t* ___fullUrl_1;
	// System.Byte[] PlayFab.Internal.PlayFabWebRequest_<>c__DisplayClass22_0::payload
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___payload_2;
	// System.Action`1<System.Byte[]> PlayFab.Internal.PlayFabWebRequest_<>c__DisplayClass22_0::successCallback
	Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * ___successCallback_3;
	// System.Action`1<System.String> PlayFab.Internal.PlayFabWebRequest_<>c__DisplayClass22_0::errorCallback
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___errorCallback_4;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_tBC36B06ECC9E8E0DDDFFB4BBA97A914925E780B9, ___U3CU3E4__this_0)); }
	inline PlayFabWebRequest_t8B559043BC6B902CA68E57AF2CF876901CD78C26 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline PlayFabWebRequest_t8B559043BC6B902CA68E57AF2CF876901CD78C26 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(PlayFabWebRequest_t8B559043BC6B902CA68E57AF2CF876901CD78C26 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_fullUrl_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_tBC36B06ECC9E8E0DDDFFB4BBA97A914925E780B9, ___fullUrl_1)); }
	inline String_t* get_fullUrl_1() const { return ___fullUrl_1; }
	inline String_t** get_address_of_fullUrl_1() { return &___fullUrl_1; }
	inline void set_fullUrl_1(String_t* value)
	{
		___fullUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fullUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of_payload_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_tBC36B06ECC9E8E0DDDFFB4BBA97A914925E780B9, ___payload_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_payload_2() const { return ___payload_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_payload_2() { return &___payload_2; }
	inline void set_payload_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___payload_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___payload_2), (void*)value);
	}

	inline static int32_t get_offset_of_successCallback_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_tBC36B06ECC9E8E0DDDFFB4BBA97A914925E780B9, ___successCallback_3)); }
	inline Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * get_successCallback_3() const { return ___successCallback_3; }
	inline Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 ** get_address_of_successCallback_3() { return &___successCallback_3; }
	inline void set_successCallback_3(Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * value)
	{
		___successCallback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___successCallback_3), (void*)value);
	}

	inline static int32_t get_offset_of_errorCallback_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_tBC36B06ECC9E8E0DDDFFB4BBA97A914925E780B9, ___errorCallback_4)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_errorCallback_4() const { return ___errorCallback_4; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_errorCallback_4() { return &___errorCallback_4; }
	inline void set_errorCallback_4(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___errorCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___errorCallback_4), (void*)value);
	}
};


// PlayFab.Internal.PlayFabWebRequest_<>c__DisplayClass23_0
struct  U3CU3Ec__DisplayClass23_0_t3722747C51037F78D8A4C73ACDD906037B55E64F  : public RuntimeObject
{
public:
	// PlayFab.Internal.PlayFabWebRequest PlayFab.Internal.PlayFabWebRequest_<>c__DisplayClass23_0::<>4__this
	PlayFabWebRequest_t8B559043BC6B902CA68E57AF2CF876901CD78C26 * ___U3CU3E4__this_0;
	// System.String PlayFab.Internal.PlayFabWebRequest_<>c__DisplayClass23_0::fullUrl
	String_t* ___fullUrl_1;
	// System.Byte[] PlayFab.Internal.PlayFabWebRequest_<>c__DisplayClass23_0::payload
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___payload_2;
	// System.Action`1<System.Byte[]> PlayFab.Internal.PlayFabWebRequest_<>c__DisplayClass23_0::successCallback
	Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * ___successCallback_3;
	// System.Action`1<System.String> PlayFab.Internal.PlayFabWebRequest_<>c__DisplayClass23_0::errorCallback
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___errorCallback_4;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass23_0_t3722747C51037F78D8A4C73ACDD906037B55E64F, ___U3CU3E4__this_0)); }
	inline PlayFabWebRequest_t8B559043BC6B902CA68E57AF2CF876901CD78C26 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline PlayFabWebRequest_t8B559043BC6B902CA68E57AF2CF876901CD78C26 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(PlayFabWebRequest_t8B559043BC6B902CA68E57AF2CF876901CD78C26 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_fullUrl_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass23_0_t3722747C51037F78D8A4C73ACDD906037B55E64F, ___fullUrl_1)); }
	inline String_t* get_fullUrl_1() const { return ___fullUrl_1; }
	inline String_t** get_address_of_fullUrl_1() { return &___fullUrl_1; }
	inline void set_fullUrl_1(String_t* value)
	{
		___fullUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fullUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of_payload_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass23_0_t3722747C51037F78D8A4C73ACDD906037B55E64F, ___payload_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_payload_2() const { return ___payload_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_payload_2() { return &___payload_2; }
	inline void set_payload_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___payload_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___payload_2), (void*)value);
	}

	inline static int32_t get_offset_of_successCallback_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass23_0_t3722747C51037F78D8A4C73ACDD906037B55E64F, ___successCallback_3)); }
	inline Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * get_successCallback_3() const { return ___successCallback_3; }
	inline Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 ** get_address_of_successCallback_3() { return &___successCallback_3; }
	inline void set_successCallback_3(Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * value)
	{
		___successCallback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___successCallback_3), (void*)value);
	}

	inline static int32_t get_offset_of_errorCallback_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass23_0_t3722747C51037F78D8A4C73ACDD906037B55E64F, ___errorCallback_4)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_errorCallback_4() const { return ___errorCallback_4; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_errorCallback_4() { return &___errorCallback_4; }
	inline void set_errorCallback_4(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___errorCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___errorCallback_4), (void*)value);
	}
};


// PlayFab.Internal.PlayFabWebRequest_<>c__DisplayClass30_0
struct  U3CU3Ec__DisplayClass30_0_t16C6742935DDF4A0D83417A4F7DC05DBC2CF95BA  : public RuntimeObject
{
public:
	// PlayFab.Internal.CallRequestContainer PlayFab.Internal.PlayFabWebRequest_<>c__DisplayClass30_0::reqContainer
	CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D * ___reqContainer_0;

public:
	inline static int32_t get_offset_of_reqContainer_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass30_0_t16C6742935DDF4A0D83417A4F7DC05DBC2CF95BA, ___reqContainer_0)); }
	inline CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D * get_reqContainer_0() const { return ___reqContainer_0; }
	inline CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D ** get_address_of_reqContainer_0() { return &___reqContainer_0; }
	inline void set_reqContainer_0(CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D * value)
	{
		___reqContainer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reqContainer_0), (void*)value);
	}
};


// PlayFab.Internal.PlayFabWebRequest_<>c__DisplayClass31_0
struct  U3CU3Ec__DisplayClass31_0_tCB17FC28F80C14092FF929FC37795F8D51700D42  : public RuntimeObject
{
public:
	// PlayFab.Internal.CallRequestContainer PlayFab.Internal.PlayFabWebRequest_<>c__DisplayClass31_0::reqContainer
	CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D * ___reqContainer_0;

public:
	inline static int32_t get_offset_of_reqContainer_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass31_0_tCB17FC28F80C14092FF929FC37795F8D51700D42, ___reqContainer_0)); }
	inline CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D * get_reqContainer_0() const { return ___reqContainer_0; }
	inline CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D ** get_address_of_reqContainer_0() { return &___reqContainer_0; }
	inline void set_reqContainer_0(CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D * value)
	{
		___reqContainer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reqContainer_0), (void*)value);
	}
};


// PlayFab.Json.PocoJsonSerializerStrategy
struct  PocoJsonSerializerStrategy_tB152DBDAF927D624432CB706707C696F4E740E5D  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.Type,PlayFab.Json.ReflectionUtils_ConstructorDelegate> PlayFab.Json.PocoJsonSerializerStrategy::ConstructorCache
	RuntimeObject* ___ConstructorCache_0;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Reflection.MemberInfo,PlayFab.Json.ReflectionUtils_GetDelegate>> PlayFab.Json.PocoJsonSerializerStrategy::GetCache
	RuntimeObject* ___GetCache_1;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,PlayFab.Json.ReflectionUtils_SetDelegate>>> PlayFab.Json.PocoJsonSerializerStrategy::SetCache
	RuntimeObject* ___SetCache_2;

public:
	inline static int32_t get_offset_of_ConstructorCache_0() { return static_cast<int32_t>(offsetof(PocoJsonSerializerStrategy_tB152DBDAF927D624432CB706707C696F4E740E5D, ___ConstructorCache_0)); }
	inline RuntimeObject* get_ConstructorCache_0() const { return ___ConstructorCache_0; }
	inline RuntimeObject** get_address_of_ConstructorCache_0() { return &___ConstructorCache_0; }
	inline void set_ConstructorCache_0(RuntimeObject* value)
	{
		___ConstructorCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConstructorCache_0), (void*)value);
	}

	inline static int32_t get_offset_of_GetCache_1() { return static_cast<int32_t>(offsetof(PocoJsonSerializerStrategy_tB152DBDAF927D624432CB706707C696F4E740E5D, ___GetCache_1)); }
	inline RuntimeObject* get_GetCache_1() const { return ___GetCache_1; }
	inline RuntimeObject** get_address_of_GetCache_1() { return &___GetCache_1; }
	inline void set_GetCache_1(RuntimeObject* value)
	{
		___GetCache_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetCache_1), (void*)value);
	}

	inline static int32_t get_offset_of_SetCache_2() { return static_cast<int32_t>(offsetof(PocoJsonSerializerStrategy_tB152DBDAF927D624432CB706707C696F4E740E5D, ___SetCache_2)); }
	inline RuntimeObject* get_SetCache_2() const { return ___SetCache_2; }
	inline RuntimeObject** get_address_of_SetCache_2() { return &___SetCache_2; }
	inline void set_SetCache_2(RuntimeObject* value)
	{
		___SetCache_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SetCache_2), (void*)value);
	}
};

struct PocoJsonSerializerStrategy_tB152DBDAF927D624432CB706707C696F4E740E5D_StaticFields
{
public:
	// System.Type[] PlayFab.Json.PocoJsonSerializerStrategy::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_3;
	// System.Type[] PlayFab.Json.PocoJsonSerializerStrategy::ArrayConstructorParameterTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___ArrayConstructorParameterTypes_4;
	// System.String[] PlayFab.Json.PocoJsonSerializerStrategy::Iso8601Format
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___Iso8601Format_5;

public:
	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(PocoJsonSerializerStrategy_tB152DBDAF927D624432CB706707C696F4E740E5D_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_3), (void*)value);
	}

	inline static int32_t get_offset_of_ArrayConstructorParameterTypes_4() { return static_cast<int32_t>(offsetof(PocoJsonSerializerStrategy_tB152DBDAF927D624432CB706707C696F4E740E5D_StaticFields, ___ArrayConstructorParameterTypes_4)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_ArrayConstructorParameterTypes_4() const { return ___ArrayConstructorParameterTypes_4; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_ArrayConstructorParameterTypes_4() { return &___ArrayConstructorParameterTypes_4; }
	inline void set_ArrayConstructorParameterTypes_4(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___ArrayConstructorParameterTypes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ArrayConstructorParameterTypes_4), (void*)value);
	}

	inline static int32_t get_offset_of_Iso8601Format_5() { return static_cast<int32_t>(offsetof(PocoJsonSerializerStrategy_tB152DBDAF927D624432CB706707C696F4E740E5D_StaticFields, ___Iso8601Format_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_Iso8601Format_5() const { return ___Iso8601Format_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_Iso8601Format_5() { return &___Iso8601Format_5; }
	inline void set_Iso8601Format_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___Iso8601Format_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Iso8601Format_5), (void*)value);
	}
};


// PlayFab.Json.ReflectionUtils
struct  ReflectionUtils_t23DB43160F54AC632646B53561BDAE335838E9D3  : public RuntimeObject
{
public:

public:
};

struct ReflectionUtils_t23DB43160F54AC632646B53561BDAE335838E9D3_StaticFields
{
public:
	// System.Object[] PlayFab.Json.ReflectionUtils::EmptyObjects
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___EmptyObjects_0;

public:
	inline static int32_t get_offset_of_EmptyObjects_0() { return static_cast<int32_t>(offsetof(ReflectionUtils_t23DB43160F54AC632646B53561BDAE335838E9D3_StaticFields, ___EmptyObjects_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_EmptyObjects_0() const { return ___EmptyObjects_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_EmptyObjects_0() { return &___EmptyObjects_0; }
	inline void set_EmptyObjects_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___EmptyObjects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyObjects_0), (void*)value);
	}
};

struct ReflectionUtils_t23DB43160F54AC632646B53561BDAE335838E9D3_ThreadStaticFields
{
public:
	// System.Object[] PlayFab.Json.ReflectionUtils::_1ObjArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____1ObjArray_1;

public:
	inline static int32_t get_offset_of__1ObjArray_1() { return static_cast<int32_t>(offsetof(ReflectionUtils_t23DB43160F54AC632646B53561BDAE335838E9D3_ThreadStaticFields, ____1ObjArray_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__1ObjArray_1() const { return ____1ObjArray_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__1ObjArray_1() { return &____1ObjArray_1; }
	inline void set__1ObjArray_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____1ObjArray_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____1ObjArray_1), (void*)value);
	}
};


// PlayFab.Json.ReflectionUtils_<>c__DisplayClass26_0
struct  U3CU3Ec__DisplayClass26_0_t9E9D1D6C457855593F1CF8DFA0D9CE14584BD00F  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo PlayFab.Json.ReflectionUtils_<>c__DisplayClass26_0::constructorInfo
	ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___constructorInfo_0;

public:
	inline static int32_t get_offset_of_constructorInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass26_0_t9E9D1D6C457855593F1CF8DFA0D9CE14584BD00F, ___constructorInfo_0)); }
	inline ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * get_constructorInfo_0() const { return ___constructorInfo_0; }
	inline ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** get_address_of_constructorInfo_0() { return &___constructorInfo_0; }
	inline void set_constructorInfo_0(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * value)
	{
		___constructorInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___constructorInfo_0), (void*)value);
	}
};


// PlayFab.Json.ReflectionUtils_<>c__DisplayClass30_0
struct  U3CU3Ec__DisplayClass30_0_tF615FB78091E446220AF7E5B0829963B60EE35A1  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo PlayFab.Json.ReflectionUtils_<>c__DisplayClass30_0::methodInfo
	MethodInfo_t * ___methodInfo_0;

public:
	inline static int32_t get_offset_of_methodInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass30_0_tF615FB78091E446220AF7E5B0829963B60EE35A1, ___methodInfo_0)); }
	inline MethodInfo_t * get_methodInfo_0() const { return ___methodInfo_0; }
	inline MethodInfo_t ** get_address_of_methodInfo_0() { return &___methodInfo_0; }
	inline void set_methodInfo_0(MethodInfo_t * value)
	{
		___methodInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___methodInfo_0), (void*)value);
	}
};


// PlayFab.Json.ReflectionUtils_<>c__DisplayClass31_0
struct  U3CU3Ec__DisplayClass31_0_t7C2360B9616692CFC4B194EDF6DC933B83D6CDF8  : public RuntimeObject
{
public:
	// System.Reflection.FieldInfo PlayFab.Json.ReflectionUtils_<>c__DisplayClass31_0::fieldInfo
	FieldInfo_t * ___fieldInfo_0;

public:
	inline static int32_t get_offset_of_fieldInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass31_0_t7C2360B9616692CFC4B194EDF6DC933B83D6CDF8, ___fieldInfo_0)); }
	inline FieldInfo_t * get_fieldInfo_0() const { return ___fieldInfo_0; }
	inline FieldInfo_t ** get_address_of_fieldInfo_0() { return &___fieldInfo_0; }
	inline void set_fieldInfo_0(FieldInfo_t * value)
	{
		___fieldInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fieldInfo_0), (void*)value);
	}
};


// PlayFab.Json.ReflectionUtils_<>c__DisplayClass34_0
struct  U3CU3Ec__DisplayClass34_0_tBDEA6E4377149E351FF0FE76AAEF70C4EFCF7772  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo PlayFab.Json.ReflectionUtils_<>c__DisplayClass34_0::methodInfo
	MethodInfo_t * ___methodInfo_0;

public:
	inline static int32_t get_offset_of_methodInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass34_0_tBDEA6E4377149E351FF0FE76AAEF70C4EFCF7772, ___methodInfo_0)); }
	inline MethodInfo_t * get_methodInfo_0() const { return ___methodInfo_0; }
	inline MethodInfo_t ** get_address_of_methodInfo_0() { return &___methodInfo_0; }
	inline void set_methodInfo_0(MethodInfo_t * value)
	{
		___methodInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___methodInfo_0), (void*)value);
	}
};


// PlayFab.Json.ReflectionUtils_<>c__DisplayClass35_0
struct  U3CU3Ec__DisplayClass35_0_tDF185DD175EE578E3C3ED8554D1F41CFFAD265BB  : public RuntimeObject
{
public:
	// System.Reflection.FieldInfo PlayFab.Json.ReflectionUtils_<>c__DisplayClass35_0::fieldInfo
	FieldInfo_t * ___fieldInfo_0;

public:
	inline static int32_t get_offset_of_fieldInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass35_0_tDF185DD175EE578E3C3ED8554D1F41CFFAD265BB, ___fieldInfo_0)); }
	inline FieldInfo_t * get_fieldInfo_0() const { return ___fieldInfo_0; }
	inline FieldInfo_t ** get_address_of_fieldInfo_0() { return &___fieldInfo_0; }
	inline void set_fieldInfo_0(FieldInfo_t * value)
	{
		___fieldInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fieldInfo_0), (void*)value);
	}
};


// PlayFab.PlayFabApiSettings
struct  PlayFabApiSettings_t62DC7BEDADD9C5CBEA3E3613AAF5521633496913  : public RuntimeObject
{
public:
	// System.String PlayFab.PlayFabApiSettings::_ProductionEnvironmentUrl
	String_t* ____ProductionEnvironmentUrl_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.PlayFabApiSettings::_requestGetParams
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ____requestGetParams_1;
	// System.String PlayFab.PlayFabApiSettings::<TitleId>k__BackingField
	String_t* ___U3CTitleIdU3Ek__BackingField_2;
	// System.String PlayFab.PlayFabApiSettings::<VerticalName>k__BackingField
	String_t* ___U3CVerticalNameU3Ek__BackingField_3;
	// System.String PlayFab.PlayFabApiSettings::<AdvertisingIdType>k__BackingField
	String_t* ___U3CAdvertisingIdTypeU3Ek__BackingField_4;
	// System.String PlayFab.PlayFabApiSettings::<AdvertisingIdValue>k__BackingField
	String_t* ___U3CAdvertisingIdValueU3Ek__BackingField_5;
	// System.Boolean PlayFab.PlayFabApiSettings::<DisableAdvertising>k__BackingField
	bool ___U3CDisableAdvertisingU3Ek__BackingField_6;
	// System.Boolean PlayFab.PlayFabApiSettings::<DisableDeviceInfo>k__BackingField
	bool ___U3CDisableDeviceInfoU3Ek__BackingField_7;
	// System.Boolean PlayFab.PlayFabApiSettings::<DisableFocusTimeCollection>k__BackingField
	bool ___U3CDisableFocusTimeCollectionU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of__ProductionEnvironmentUrl_0() { return static_cast<int32_t>(offsetof(PlayFabApiSettings_t62DC7BEDADD9C5CBEA3E3613AAF5521633496913, ____ProductionEnvironmentUrl_0)); }
	inline String_t* get__ProductionEnvironmentUrl_0() const { return ____ProductionEnvironmentUrl_0; }
	inline String_t** get_address_of__ProductionEnvironmentUrl_0() { return &____ProductionEnvironmentUrl_0; }
	inline void set__ProductionEnvironmentUrl_0(String_t* value)
	{
		____ProductionEnvironmentUrl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ProductionEnvironmentUrl_0), (void*)value);
	}

	inline static int32_t get_offset_of__requestGetParams_1() { return static_cast<int32_t>(offsetof(PlayFabApiSettings_t62DC7BEDADD9C5CBEA3E3613AAF5521633496913, ____requestGetParams_1)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get__requestGetParams_1() const { return ____requestGetParams_1; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of__requestGetParams_1() { return &____requestGetParams_1; }
	inline void set__requestGetParams_1(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		____requestGetParams_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____requestGetParams_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTitleIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PlayFabApiSettings_t62DC7BEDADD9C5CBEA3E3613AAF5521633496913, ___U3CTitleIdU3Ek__BackingField_2)); }
	inline String_t* get_U3CTitleIdU3Ek__BackingField_2() const { return ___U3CTitleIdU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CTitleIdU3Ek__BackingField_2() { return &___U3CTitleIdU3Ek__BackingField_2; }
	inline void set_U3CTitleIdU3Ek__BackingField_2(String_t* value)
	{
		___U3CTitleIdU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTitleIdU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVerticalNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PlayFabApiSettings_t62DC7BEDADD9C5CBEA3E3613AAF5521633496913, ___U3CVerticalNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CVerticalNameU3Ek__BackingField_3() const { return ___U3CVerticalNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CVerticalNameU3Ek__BackingField_3() { return &___U3CVerticalNameU3Ek__BackingField_3; }
	inline void set_U3CVerticalNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CVerticalNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVerticalNameU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAdvertisingIdTypeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PlayFabApiSettings_t62DC7BEDADD9C5CBEA3E3613AAF5521633496913, ___U3CAdvertisingIdTypeU3Ek__BackingField_4)); }
	inline String_t* get_U3CAdvertisingIdTypeU3Ek__BackingField_4() const { return ___U3CAdvertisingIdTypeU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CAdvertisingIdTypeU3Ek__BackingField_4() { return &___U3CAdvertisingIdTypeU3Ek__BackingField_4; }
	inline void set_U3CAdvertisingIdTypeU3Ek__BackingField_4(String_t* value)
	{
		___U3CAdvertisingIdTypeU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdvertisingIdTypeU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAdvertisingIdValueU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PlayFabApiSettings_t62DC7BEDADD9C5CBEA3E3613AAF5521633496913, ___U3CAdvertisingIdValueU3Ek__BackingField_5)); }
	inline String_t* get_U3CAdvertisingIdValueU3Ek__BackingField_5() const { return ___U3CAdvertisingIdValueU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CAdvertisingIdValueU3Ek__BackingField_5() { return &___U3CAdvertisingIdValueU3Ek__BackingField_5; }
	inline void set_U3CAdvertisingIdValueU3Ek__BackingField_5(String_t* value)
	{
		___U3CAdvertisingIdValueU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdvertisingIdValueU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDisableAdvertisingU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PlayFabApiSettings_t62DC7BEDADD9C5CBEA3E3613AAF5521633496913, ___U3CDisableAdvertisingU3Ek__BackingField_6)); }
	inline bool get_U3CDisableAdvertisingU3Ek__BackingField_6() const { return ___U3CDisableAdvertisingU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CDisableAdvertisingU3Ek__BackingField_6() { return &___U3CDisableAdvertisingU3Ek__BackingField_6; }
	inline void set_U3CDisableAdvertisingU3Ek__BackingField_6(bool value)
	{
		___U3CDisableAdvertisingU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CDisableDeviceInfoU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PlayFabApiSettings_t62DC7BEDADD9C5CBEA3E3613AAF5521633496913, ___U3CDisableDeviceInfoU3Ek__BackingField_7)); }
	inline bool get_U3CDisableDeviceInfoU3Ek__BackingField_7() const { return ___U3CDisableDeviceInfoU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CDisableDeviceInfoU3Ek__BackingField_7() { return &___U3CDisableDeviceInfoU3Ek__BackingField_7; }
	inline void set_U3CDisableDeviceInfoU3Ek__BackingField_7(bool value)
	{
		___U3CDisableDeviceInfoU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CDisableFocusTimeCollectionU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PlayFabApiSettings_t62DC7BEDADD9C5CBEA3E3613AAF5521633496913, ___U3CDisableFocusTimeCollectionU3Ek__BackingField_8)); }
	inline bool get_U3CDisableFocusTimeCollectionU3Ek__BackingField_8() const { return ___U3CDisableFocusTimeCollectionU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CDisableFocusTimeCollectionU3Ek__BackingField_8() { return &___U3CDisableFocusTimeCollectionU3Ek__BackingField_8; }
	inline void set_U3CDisableFocusTimeCollectionU3Ek__BackingField_8(bool value)
	{
		___U3CDisableFocusTimeCollectionU3Ek__BackingField_8 = value;
	}
};


// PlayFab.PlayFabSettings_<>c
struct  U3CU3Ec_tEA6EC5BFAD34550F7D558FE6FCF52CB5A3E8AA57  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tEA6EC5BFAD34550F7D558FE6FCF52CB5A3E8AA57_StaticFields
{
public:
	// PlayFab.PlayFabSettings_<>c PlayFab.PlayFabSettings_<>c::<>9
	U3CU3Ec_tEA6EC5BFAD34550F7D558FE6FCF52CB5A3E8AA57 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tEA6EC5BFAD34550F7D558FE6FCF52CB5A3E8AA57_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tEA6EC5BFAD34550F7D558FE6FCF52CB5A3E8AA57 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tEA6EC5BFAD34550F7D558FE6FCF52CB5A3E8AA57 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tEA6EC5BFAD34550F7D558FE6FCF52CB5A3E8AA57 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// PlayFab.Public.PlayFabLoggerBase_<RegisterLogger>d__23
struct  U3CRegisterLoggerU3Ed__23_t66C9DD99B248E95C13ECD2FFB2E62F8EBA1F6E19  : public RuntimeObject
{
public:
	// System.Int32 PlayFab.Public.PlayFabLoggerBase_<RegisterLogger>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayFab.Public.PlayFabLoggerBase_<RegisterLogger>d__23::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PlayFab.Public.PlayFabLoggerBase PlayFab.Public.PlayFabLoggerBase_<RegisterLogger>d__23::<>4__this
	PlayFabLoggerBase_t770DB83E134BEB645A2D9C063DDD42DAA7C2D6CE * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRegisterLoggerU3Ed__23_t66C9DD99B248E95C13ECD2FFB2E62F8EBA1F6E19, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRegisterLoggerU3Ed__23_t66C9DD99B248E95C13ECD2FFB2E62F8EBA1F6E19, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRegisterLoggerU3Ed__23_t66C9DD99B248E95C13ECD2FFB2E62F8EBA1F6E19, ___U3CU3E4__this_2)); }
	inline PlayFabLoggerBase_t770DB83E134BEB645A2D9C063DDD42DAA7C2D6CE * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayFabLoggerBase_t770DB83E134BEB645A2D9C063DDD42DAA7C2D6CE ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayFabLoggerBase_t770DB83E134BEB645A2D9C063DDD42DAA7C2D6CE * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// PlayFab.SharedModels.PlayFabBaseModel
struct  PlayFabBaseModel_t0D2596A31DA55DBF24FD068C35ED05FBF0001EF4  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Globalization.CultureInfo
struct  CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.Encoding
struct  Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D1152
struct  __StaticArrayInitTypeSizeU3D1152_tE5C212F864AB895F06E8D5862E82E17859271D5D 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1152_tE5C212F864AB895F06E8D5862E82E17859271D5D__padding[1152];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D116
struct  __StaticArrayInitTypeSizeU3D116_t639520A43DB1FF821CE70310C1DC232A42437830 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D116_t639520A43DB1FF821CE70310C1DC232A42437830__padding[116];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D120
struct  __StaticArrayInitTypeSizeU3D120_tF5D0DBFEAF13A6E3AA936530707299AAFB1CD1A9 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_tF5D0DBFEAF13A6E3AA936530707299AAFB1CD1A9__padding[120];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D124
struct  __StaticArrayInitTypeSizeU3D124_t6DE47B6CC2A4AE2C3310B109A94D6C321C91B3EA 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D124_t6DE47B6CC2A4AE2C3310B109A94D6C321C91B3EA__padding[124];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D14
struct  __StaticArrayInitTypeSizeU3D14_t002D2262CA7270F9256A38C2C8E8A85934AF1FEC 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D14_t002D2262CA7270F9256A38C2C8E8A85934AF1FEC__padding[14];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D19
struct  __StaticArrayInitTypeSizeU3D19_t717B24634277EEEF4B10CB297D812C4A6DB76D57 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D19_t717B24634277EEEF4B10CB297D812C4A6DB76D57__padding[19];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D256
struct  __StaticArrayInitTypeSizeU3D256_t7A934061A8749E88B1769EF9CA896090D0F2FEA7 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t7A934061A8749E88B1769EF9CA896090D0F2FEA7__padding[256];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D384
struct  __StaticArrayInitTypeSizeU3D384_tB272CDB43E0CA93CB681D4C2D1CCDE9B7E917EA6 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D384_tB272CDB43E0CA93CB681D4C2D1CCDE9B7E917EA6__padding[384];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D512
struct  __StaticArrayInitTypeSizeU3D512_t0D8612F434782E12905996C208940F2A3E10F0ED 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D512_t0D8612F434782E12905996C208940F2A3E10F0ED__padding[512];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D6144
struct  __StaticArrayInitTypeSizeU3D6144_t50C50D086C6B3CE22EF1CA9F10CB92F0636AF4D8 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6144_t50C50D086C6B3CE22EF1CA9F10CB92F0636AF4D8__padding[6144];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D68
struct  __StaticArrayInitTypeSizeU3D68_t292F4A58D6AF428DEB1C95831E4D2EC21A71E1BB 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D68_t292F4A58D6AF428DEB1C95831E4D2EC21A71E1BB__padding[68];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D76
struct  __StaticArrayInitTypeSizeU3D76_t2D7342996D36136B50B99ED04A02CD8F0DAD302C 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D76_t2D7342996D36136B50B99ED04A02CD8F0DAD302C__padding[76];
	};

public:
};


// PlayFab.Json.SimpleJsonInstance_PlayFabSimpleJsonCuztomization
struct  PlayFabSimpleJsonCuztomization_t203EDD43BC148076B30573A468084CE2D5CC4EB1  : public PocoJsonSerializerStrategy_tB152DBDAF927D624432CB706707C696F4E740E5D
{
public:

public:
};


// PlayFab.SharedModels.PlayFabRequestCommon
struct  PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A  : public PlayFabBaseModel_t0D2596A31DA55DBF24FD068C35ED05FBF0001EF4
{
public:
	// PlayFab.PlayFabAuthenticationContext PlayFab.SharedModels.PlayFabRequestCommon::AuthenticationContext
	PlayFabAuthenticationContext_tEC17E9E687F890C5A626A3043464B68314443652 * ___AuthenticationContext_0;

public:
	inline static int32_t get_offset_of_AuthenticationContext_0() { return static_cast<int32_t>(offsetof(PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A, ___AuthenticationContext_0)); }
	inline PlayFabAuthenticationContext_tEC17E9E687F890C5A626A3043464B68314443652 * get_AuthenticationContext_0() const { return ___AuthenticationContext_0; }
	inline PlayFabAuthenticationContext_tEC17E9E687F890C5A626A3043464B68314443652 ** get_address_of_AuthenticationContext_0() { return &___AuthenticationContext_0; }
	inline void set_AuthenticationContext_0(PlayFabAuthenticationContext_tEC17E9E687F890C5A626A3043464B68314443652 * value)
	{
		___AuthenticationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AuthenticationContext_0), (void*)value);
	}
};


// PlayFab.SharedModels.PlayFabResultCommon
struct  PlayFabResultCommon_t9DD4B71D8199989BBFB06770ED84AD5F666EF7FB  : public PlayFabBaseModel_t0D2596A31DA55DBF24FD068C35ED05FBF0001EF4
{
public:
	// PlayFab.SharedModels.PlayFabRequestCommon PlayFab.SharedModels.PlayFabResultCommon::Request
	PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A * ___Request_0;
	// System.Object PlayFab.SharedModels.PlayFabResultCommon::CustomData
	RuntimeObject * ___CustomData_1;

public:
	inline static int32_t get_offset_of_Request_0() { return static_cast<int32_t>(offsetof(PlayFabResultCommon_t9DD4B71D8199989BBFB06770ED84AD5F666EF7FB, ___Request_0)); }
	inline PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A * get_Request_0() const { return ___Request_0; }
	inline PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A ** get_address_of_Request_0() { return &___Request_0; }
	inline void set_Request_0(PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A * value)
	{
		___Request_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Request_0), (void*)value);
	}

	inline static int32_t get_offset_of_CustomData_1() { return static_cast<int32_t>(offsetof(PlayFabResultCommon_t9DD4B71D8199989BBFB06770ED84AD5F666EF7FB, ___CustomData_1)); }
	inline RuntimeObject * get_CustomData_1() const { return ___CustomData_1; }
	inline RuntimeObject ** get_address_of_CustomData_1() { return &___CustomData_1; }
	inline void set_CustomData_1(RuntimeObject * value)
	{
		___CustomData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomData_1), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct  KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.DateTime
struct  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.IO.Stream
struct  Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.IO.TextReader
struct  TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ___Null_3)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_Null_3() const { return ___Null_3; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// Ionic.Zlib.BlockState
struct  BlockState_t5654664643E81F05FFE4D644F17D4521B52A6D98 
{
public:
	// System.Int32 Ionic.Zlib.BlockState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlockState_t5654664643E81F05FFE4D644F17D4521B52A6D98, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Ionic.Zlib.CompressionLevel
struct  CompressionLevel_t150E4E07CF122D7CF77381D460AA8018527E61A4 
{
public:
	// System.Int32 Ionic.Zlib.CompressionLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionLevel_t150E4E07CF122D7CF77381D460AA8018527E61A4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Ionic.Zlib.CompressionMode
struct  CompressionMode_t6770C5732521C8B62EB90866D58D56EFB7CBE130 
{
public:
	// System.Int32 Ionic.Zlib.CompressionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionMode_t6770C5732521C8B62EB90866D58D56EFB7CBE130, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Ionic.Zlib.CompressionStrategy
struct  CompressionStrategy_t74626201BC9B138DBCA352FE3ACA9277292E2DEA 
{
public:
	// System.Int32 Ionic.Zlib.CompressionStrategy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionStrategy_t74626201BC9B138DBCA352FE3ACA9277292E2DEA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Ionic.Zlib.DeflateFlavor
struct  DeflateFlavor_t4D0F4D2A073D0172895F6B2964C1C22C283FB4F5 
{
public:
	// System.Int32 Ionic.Zlib.DeflateFlavor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeflateFlavor_t4D0F4D2A073D0172895F6B2964C1C22C283FB4F5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Ionic.Zlib.FlushType
struct  FlushType_tE34F47FCFE2F372FBF64FC21EF23825DBBEDACCA 
{
public:
	// System.Int32 Ionic.Zlib.FlushType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FlushType_tE34F47FCFE2F372FBF64FC21EF23825DBBEDACCA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Ionic.Zlib.InflateBlocks_InflateBlockMode
struct  InflateBlockMode_t5BE4CCECC662FD6E844D096217065869BFF83057 
{
public:
	// System.Int32 Ionic.Zlib.InflateBlocks_InflateBlockMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InflateBlockMode_t5BE4CCECC662FD6E844D096217065869BFF83057, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Ionic.Zlib.InflateManager_InflateManagerMode
struct  InflateManagerMode_t2B39B95279693AFF798E7A83F4FF19694889662E 
{
public:
	// System.Int32 Ionic.Zlib.InflateManager_InflateManagerMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InflateManagerMode_t2B39B95279693AFF798E7A83F4FF19694889662E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Ionic.Zlib.ParallelDeflateOutputStream_TraceBits
struct  TraceBits_t32034ECF6CB69AC18680BAD8F16AC8ABDB89EEAD 
{
public:
	// System.UInt32 Ionic.Zlib.ParallelDeflateOutputStream_TraceBits::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TraceBits_t32034ECF6CB69AC18680BAD8F16AC8ABDB89EEAD, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Ionic.Zlib.ZlibBaseStream_StreamMode
struct  StreamMode_tF298049D5CD82BA30FCD78CB2BC90ABA261ED363 
{
public:
	// System.Int32 Ionic.Zlib.ZlibBaseStream_StreamMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamMode_tF298049D5CD82BA30FCD78CB2BC90ABA261ED363, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Ionic.Zlib.ZlibStream
struct  ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// Ionic.Zlib.ZlibBaseStream Ionic.Zlib.ZlibStream::_baseStream
	ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62 * ____baseStream_5;
	// System.Boolean Ionic.Zlib.ZlibStream::_disposed
	bool ____disposed_6;

public:
	inline static int32_t get_offset_of__baseStream_5() { return static_cast<int32_t>(offsetof(ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076, ____baseStream_5)); }
	inline ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62 * get__baseStream_5() const { return ____baseStream_5; }
	inline ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62 ** get_address_of__baseStream_5() { return &____baseStream_5; }
	inline void set__baseStream_5(ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62 * value)
	{
		____baseStream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____baseStream_5), (void*)value);
	}

	inline static int32_t get_offset_of__disposed_6() { return static_cast<int32_t>(offsetof(ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076, ____disposed_6)); }
	inline bool get__disposed_6() const { return ____disposed_6; }
	inline bool* get_address_of__disposed_6() { return &____disposed_6; }
	inline void set__disposed_6(bool value)
	{
		____disposed_6 = value;
	}
};


// Ionic.Zlib.ZlibStreamFlavor
struct  ZlibStreamFlavor_t1C38AB23174E7250E44BFCC58F098392E43B6C72 
{
public:
	// System.Int32 Ionic.Zlib.ZlibStreamFlavor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ZlibStreamFlavor_t1C38AB23174E7250E44BFCC58F098392E43B6C72, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PlayFab.Internal.ApiProcessingEventType
struct  ApiProcessingEventType_t1ECEF649A3032E2EEBAC7236AC48ECCFF9D13BF7 
{
public:
	// System.Int32 PlayFab.Internal.ApiProcessingEventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ApiProcessingEventType_t1ECEF649A3032E2EEBAC7236AC48ECCFF9D13BF7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PlayFab.Internal.HttpRequestState
struct  HttpRequestState_t1F5462D545AD83C9E9056509CAB98689C1DD957C 
{
public:
	// System.Int32 PlayFab.Internal.HttpRequestState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HttpRequestState_t1F5462D545AD83C9E9056509CAB98689C1DD957C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PlayFab.Json.PlayFabSimpleJson_TokenType
struct  TokenType_tC12A6F8F37D32AA4B51010A0290EBF3BFCBE0A85 
{
public:
	// System.Byte PlayFab.Json.PlayFabSimpleJson_TokenType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TokenType_tC12A6F8F37D32AA4B51010A0290EBF3BFCBE0A85, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// PlayFab.PlayFabErrorCode
struct  PlayFabErrorCode_t8C421CF1057B15346B319766BAB2773CB4949F48 
{
public:
	// System.Int32 PlayFab.PlayFabErrorCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayFabErrorCode_t8C421CF1057B15346B319766BAB2773CB4949F48, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PlayFab.PlayFabLogLevel
struct  PlayFabLogLevel_t090BE832E1ECAF6EC1A7E0549A2C6013F737803C 
{
public:
	// System.Int32 PlayFab.PlayFabLogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayFabLogLevel_t090BE832E1ECAF6EC1A7E0549A2C6013F737803C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PlayFab.WebRequestType
struct  WebRequestType_tF676D3EA2BAB181D2C4FE820F5C2959961A541F1 
{
public:
	// System.Int32 PlayFab.WebRequestType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebRequestType_tF676D3EA2BAB181D2C4FE820F5C2959961A541F1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.Object,System.Object>
struct  Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.String,System.String>
struct  Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___dictionary_0)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___current_3)); }
	inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.DateTimeOffset
struct  DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_dateTime_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MaxValue_1 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Globalization.DateTimeStyles
struct  DateTimeStyles_t2E18E2817B83F518AD684A16EB44A96EE6E765D4 
{
public:
	// System.Int32 System.Globalization.DateTimeStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeStyles_t2E18E2817B83F518AD684A16EB44A96EE6E765D4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.MemoryStream
struct  MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_14;

public:
	inline static int32_t get_offset_of__buffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____buffer_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_5() const { return ____buffer_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_5() { return &____buffer_5; }
	inline void set__buffer_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of__origin_6() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____origin_6)); }
	inline int32_t get__origin_6() const { return ____origin_6; }
	inline int32_t* get_address_of__origin_6() { return &____origin_6; }
	inline void set__origin_6(int32_t value)
	{
		____origin_6 = value;
	}

	inline static int32_t get_offset_of__position_7() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____position_7)); }
	inline int32_t get__position_7() const { return ____position_7; }
	inline int32_t* get_address_of__position_7() { return &____position_7; }
	inline void set__position_7(int32_t value)
	{
		____position_7 = value;
	}

	inline static int32_t get_offset_of__length_8() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____length_8)); }
	inline int32_t get__length_8() const { return ____length_8; }
	inline int32_t* get_address_of__length_8() { return &____length_8; }
	inline void set__length_8(int32_t value)
	{
		____length_8 = value;
	}

	inline static int32_t get_offset_of__capacity_9() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____capacity_9)); }
	inline int32_t get__capacity_9() const { return ____capacity_9; }
	inline int32_t* get_address_of__capacity_9() { return &____capacity_9; }
	inline void set__capacity_9(int32_t value)
	{
		____capacity_9 = value;
	}

	inline static int32_t get_offset_of__expandable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____expandable_10)); }
	inline bool get__expandable_10() const { return ____expandable_10; }
	inline bool* get_address_of__expandable_10() { return &____expandable_10; }
	inline void set__expandable_10(bool value)
	{
		____expandable_10 = value;
	}

	inline static int32_t get_offset_of__writable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____writable_11)); }
	inline bool get__writable_11() const { return ____writable_11; }
	inline bool* get_address_of__writable_11() { return &____writable_11; }
	inline void set__writable_11(bool value)
	{
		____writable_11 = value;
	}

	inline static int32_t get_offset_of__exposable_12() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____exposable_12)); }
	inline bool get__exposable_12() const { return ____exposable_12; }
	inline bool* get_address_of__exposable_12() { return &____exposable_12; }
	inline void set__exposable_12(bool value)
	{
		____exposable_12 = value;
	}

	inline static int32_t get_offset_of__isOpen_13() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____isOpen_13)); }
	inline bool get__isOpen_13() const { return ____isOpen_13; }
	inline bool* get_address_of__isOpen_13() { return &____isOpen_13; }
	inline void set__isOpen_13(bool value)
	{
		____isOpen_13 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_14() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____lastReadTask_14)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_14() const { return ____lastReadTask_14; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_14() { return &____lastReadTask_14; }
	inline void set__lastReadTask_14(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_14), (void*)value);
	}
};


// System.IO.SeekOrigin
struct  SeekOrigin_t4A91B37D046CD7A6578066059AE9F6269A888D4F 
{
public:
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SeekOrigin_t4A91B37D046CD7A6578066059AE9F6269A888D4F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.StreamReader
struct  StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.IO.Stream System.IO.StreamReader::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_5;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding_6;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * ___decoder_7;
	// System.Byte[] System.IO.StreamReader::byteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteBuffer_8;
	// System.Char[] System.IO.StreamReader::charBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___charBuffer_9;
	// System.Byte[] System.IO.StreamReader::_preamble
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____preamble_10;
	// System.Int32 System.IO.StreamReader::charPos
	int32_t ___charPos_11;
	// System.Int32 System.IO.StreamReader::charLen
	int32_t ___charLen_12;
	// System.Int32 System.IO.StreamReader::byteLen
	int32_t ___byteLen_13;
	// System.Int32 System.IO.StreamReader::bytePos
	int32_t ___bytePos_14;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_15;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_16;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_17;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_18;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_19;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamReader::_asyncReadTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ____asyncReadTask_20;

public:
	inline static int32_t get_offset_of_stream_5() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___stream_5)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_5() const { return ___stream_5; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_5() { return &___stream_5; }
	inline void set_stream_5(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_5), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_6() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___encoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_encoding_6() const { return ___encoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_encoding_6() { return &___encoding_6; }
	inline void set_encoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___encoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_decoder_7() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___decoder_7)); }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * get_decoder_7() const { return ___decoder_7; }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 ** get_address_of_decoder_7() { return &___decoder_7; }
	inline void set_decoder_7(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * value)
	{
		___decoder_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoder_7), (void*)value);
	}

	inline static int32_t get_offset_of_byteBuffer_8() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___byteBuffer_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_byteBuffer_8() const { return ___byteBuffer_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_byteBuffer_8() { return &___byteBuffer_8; }
	inline void set_byteBuffer_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___byteBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_8), (void*)value);
	}

	inline static int32_t get_offset_of_charBuffer_9() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charBuffer_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_charBuffer_9() const { return ___charBuffer_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_charBuffer_9() { return &___charBuffer_9; }
	inline void set_charBuffer_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___charBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charBuffer_9), (void*)value);
	}

	inline static int32_t get_offset_of__preamble_10() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____preamble_10)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__preamble_10() const { return ____preamble_10; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__preamble_10() { return &____preamble_10; }
	inline void set__preamble_10(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____preamble_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____preamble_10), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_11() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charPos_11)); }
	inline int32_t get_charPos_11() const { return ___charPos_11; }
	inline int32_t* get_address_of_charPos_11() { return &___charPos_11; }
	inline void set_charPos_11(int32_t value)
	{
		___charPos_11 = value;
	}

	inline static int32_t get_offset_of_charLen_12() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charLen_12)); }
	inline int32_t get_charLen_12() const { return ___charLen_12; }
	inline int32_t* get_address_of_charLen_12() { return &___charLen_12; }
	inline void set_charLen_12(int32_t value)
	{
		___charLen_12 = value;
	}

	inline static int32_t get_offset_of_byteLen_13() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___byteLen_13)); }
	inline int32_t get_byteLen_13() const { return ___byteLen_13; }
	inline int32_t* get_address_of_byteLen_13() { return &___byteLen_13; }
	inline void set_byteLen_13(int32_t value)
	{
		___byteLen_13 = value;
	}

	inline static int32_t get_offset_of_bytePos_14() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___bytePos_14)); }
	inline int32_t get_bytePos_14() const { return ___bytePos_14; }
	inline int32_t* get_address_of_bytePos_14() { return &___bytePos_14; }
	inline void set_bytePos_14(int32_t value)
	{
		___bytePos_14 = value;
	}

	inline static int32_t get_offset_of__maxCharsPerBuffer_15() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____maxCharsPerBuffer_15)); }
	inline int32_t get__maxCharsPerBuffer_15() const { return ____maxCharsPerBuffer_15; }
	inline int32_t* get_address_of__maxCharsPerBuffer_15() { return &____maxCharsPerBuffer_15; }
	inline void set__maxCharsPerBuffer_15(int32_t value)
	{
		____maxCharsPerBuffer_15 = value;
	}

	inline static int32_t get_offset_of__detectEncoding_16() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____detectEncoding_16)); }
	inline bool get__detectEncoding_16() const { return ____detectEncoding_16; }
	inline bool* get_address_of__detectEncoding_16() { return &____detectEncoding_16; }
	inline void set__detectEncoding_16(bool value)
	{
		____detectEncoding_16 = value;
	}

	inline static int32_t get_offset_of__checkPreamble_17() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____checkPreamble_17)); }
	inline bool get__checkPreamble_17() const { return ____checkPreamble_17; }
	inline bool* get_address_of__checkPreamble_17() { return &____checkPreamble_17; }
	inline void set__checkPreamble_17(bool value)
	{
		____checkPreamble_17 = value;
	}

	inline static int32_t get_offset_of__isBlocked_18() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____isBlocked_18)); }
	inline bool get__isBlocked_18() const { return ____isBlocked_18; }
	inline bool* get_address_of__isBlocked_18() { return &____isBlocked_18; }
	inline void set__isBlocked_18(bool value)
	{
		____isBlocked_18 = value;
	}

	inline static int32_t get_offset_of__closable_19() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____closable_19)); }
	inline bool get__closable_19() const { return ____closable_19; }
	inline bool* get_address_of__closable_19() { return &____closable_19; }
	inline void set__closable_19(bool value)
	{
		____closable_19 = value;
	}

	inline static int32_t get_offset_of__asyncReadTask_20() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____asyncReadTask_20)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get__asyncReadTask_20() const { return ____asyncReadTask_20; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of__asyncReadTask_20() { return &____asyncReadTask_20; }
	inline void set__asyncReadTask_20(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		____asyncReadTask_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncReadTask_20), (void*)value);
	}
};

struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * ___Null_4;

public:
	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_StaticFields, ___Null_4)); }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * get_Null_4() const { return ___Null_4; }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 ** get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * value)
	{
		___Null_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_4), (void*)value);
	}
};


// System.Nullable`1<System.DateTime>
struct  Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D 
{
public:
	// T System.Nullable`1::value
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D, ___value_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_value_0() const { return ___value_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B  : public MethodBase_t
{
public:

public:
};

struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConstructorName_0), (void*)value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeConstructorName_1), (void*)value);
	}
};


// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.TimeSpan
struct  TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// UnityEngine.AsyncOperation
struct  AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.LogType
struct  LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.CertificateHandler
struct  CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.DownloadHandler
struct  DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.UploadHandler
struct  UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Ionic.Zlib.DeflateManager
struct  DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38  : public RuntimeObject
{
public:
	// Ionic.Zlib.DeflateManager_CompressFunc Ionic.Zlib.DeflateManager::DeflateFunction
	CompressFunc_t59B35532A7EFBB0597CD39547BC0D0AECC998FB8 * ___DeflateFunction_2;
	// Ionic.Zlib.ZlibCodec Ionic.Zlib.DeflateManager::_codec
	ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * ____codec_21;
	// System.Int32 Ionic.Zlib.DeflateManager::status
	int32_t ___status_22;
	// System.Byte[] Ionic.Zlib.DeflateManager::pending
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___pending_23;
	// System.Int32 Ionic.Zlib.DeflateManager::nextPending
	int32_t ___nextPending_24;
	// System.Int32 Ionic.Zlib.DeflateManager::pendingCount
	int32_t ___pendingCount_25;
	// System.SByte Ionic.Zlib.DeflateManager::data_type
	int8_t ___data_type_26;
	// System.Int32 Ionic.Zlib.DeflateManager::last_flush
	int32_t ___last_flush_27;
	// System.Int32 Ionic.Zlib.DeflateManager::w_size
	int32_t ___w_size_28;
	// System.Int32 Ionic.Zlib.DeflateManager::w_bits
	int32_t ___w_bits_29;
	// System.Int32 Ionic.Zlib.DeflateManager::w_mask
	int32_t ___w_mask_30;
	// System.Byte[] Ionic.Zlib.DeflateManager::window
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___window_31;
	// System.Int32 Ionic.Zlib.DeflateManager::window_size
	int32_t ___window_size_32;
	// System.Int16[] Ionic.Zlib.DeflateManager::prev
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___prev_33;
	// System.Int16[] Ionic.Zlib.DeflateManager::head
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___head_34;
	// System.Int32 Ionic.Zlib.DeflateManager::ins_h
	int32_t ___ins_h_35;
	// System.Int32 Ionic.Zlib.DeflateManager::hash_size
	int32_t ___hash_size_36;
	// System.Int32 Ionic.Zlib.DeflateManager::hash_bits
	int32_t ___hash_bits_37;
	// System.Int32 Ionic.Zlib.DeflateManager::hash_mask
	int32_t ___hash_mask_38;
	// System.Int32 Ionic.Zlib.DeflateManager::hash_shift
	int32_t ___hash_shift_39;
	// System.Int32 Ionic.Zlib.DeflateManager::block_start
	int32_t ___block_start_40;
	// Ionic.Zlib.DeflateManager_Config Ionic.Zlib.DeflateManager::config
	Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 * ___config_41;
	// System.Int32 Ionic.Zlib.DeflateManager::match_length
	int32_t ___match_length_42;
	// System.Int32 Ionic.Zlib.DeflateManager::prev_match
	int32_t ___prev_match_43;
	// System.Int32 Ionic.Zlib.DeflateManager::match_available
	int32_t ___match_available_44;
	// System.Int32 Ionic.Zlib.DeflateManager::strstart
	int32_t ___strstart_45;
	// System.Int32 Ionic.Zlib.DeflateManager::match_start
	int32_t ___match_start_46;
	// System.Int32 Ionic.Zlib.DeflateManager::lookahead
	int32_t ___lookahead_47;
	// System.Int32 Ionic.Zlib.DeflateManager::prev_length
	int32_t ___prev_length_48;
	// Ionic.Zlib.CompressionLevel Ionic.Zlib.DeflateManager::compressionLevel
	int32_t ___compressionLevel_49;
	// Ionic.Zlib.CompressionStrategy Ionic.Zlib.DeflateManager::compressionStrategy
	int32_t ___compressionStrategy_50;
	// System.Int16[] Ionic.Zlib.DeflateManager::dyn_ltree
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___dyn_ltree_51;
	// System.Int16[] Ionic.Zlib.DeflateManager::dyn_dtree
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___dyn_dtree_52;
	// System.Int16[] Ionic.Zlib.DeflateManager::bl_tree
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___bl_tree_53;
	// Ionic.Zlib.ZTree Ionic.Zlib.DeflateManager::treeLiterals
	ZTree_t7DA6B673E43E37EE39DC59763E8C0FD3DE9CD04D * ___treeLiterals_54;
	// Ionic.Zlib.ZTree Ionic.Zlib.DeflateManager::treeDistances
	ZTree_t7DA6B673E43E37EE39DC59763E8C0FD3DE9CD04D * ___treeDistances_55;
	// Ionic.Zlib.ZTree Ionic.Zlib.DeflateManager::treeBitLengths
	ZTree_t7DA6B673E43E37EE39DC59763E8C0FD3DE9CD04D * ___treeBitLengths_56;
	// System.Int16[] Ionic.Zlib.DeflateManager::bl_count
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___bl_count_57;
	// System.Int32[] Ionic.Zlib.DeflateManager::heap
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___heap_58;
	// System.Int32 Ionic.Zlib.DeflateManager::heap_len
	int32_t ___heap_len_59;
	// System.Int32 Ionic.Zlib.DeflateManager::heap_max
	int32_t ___heap_max_60;
	// System.SByte[] Ionic.Zlib.DeflateManager::depth
	SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ___depth_61;
	// System.Int32 Ionic.Zlib.DeflateManager::_lengthOffset
	int32_t ____lengthOffset_62;
	// System.Int32 Ionic.Zlib.DeflateManager::lit_bufsize
	int32_t ___lit_bufsize_63;
	// System.Int32 Ionic.Zlib.DeflateManager::last_lit
	int32_t ___last_lit_64;
	// System.Int32 Ionic.Zlib.DeflateManager::_distanceOffset
	int32_t ____distanceOffset_65;
	// System.Int32 Ionic.Zlib.DeflateManager::opt_len
	int32_t ___opt_len_66;
	// System.Int32 Ionic.Zlib.DeflateManager::static_len
	int32_t ___static_len_67;
	// System.Int32 Ionic.Zlib.DeflateManager::matches
	int32_t ___matches_68;
	// System.Int32 Ionic.Zlib.DeflateManager::last_eob_len
	int32_t ___last_eob_len_69;
	// System.Int16 Ionic.Zlib.DeflateManager::bi_buf
	int16_t ___bi_buf_70;
	// System.Int32 Ionic.Zlib.DeflateManager::bi_valid
	int32_t ___bi_valid_71;
	// System.Boolean Ionic.Zlib.DeflateManager::Rfc1950BytesEmitted
	bool ___Rfc1950BytesEmitted_72;
	// System.Boolean Ionic.Zlib.DeflateManager::_WantRfc1950HeaderBytes
	bool ____WantRfc1950HeaderBytes_73;

public:
	inline static int32_t get_offset_of_DeflateFunction_2() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___DeflateFunction_2)); }
	inline CompressFunc_t59B35532A7EFBB0597CD39547BC0D0AECC998FB8 * get_DeflateFunction_2() const { return ___DeflateFunction_2; }
	inline CompressFunc_t59B35532A7EFBB0597CD39547BC0D0AECC998FB8 ** get_address_of_DeflateFunction_2() { return &___DeflateFunction_2; }
	inline void set_DeflateFunction_2(CompressFunc_t59B35532A7EFBB0597CD39547BC0D0AECC998FB8 * value)
	{
		___DeflateFunction_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DeflateFunction_2), (void*)value);
	}

	inline static int32_t get_offset_of__codec_21() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ____codec_21)); }
	inline ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * get__codec_21() const { return ____codec_21; }
	inline ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 ** get_address_of__codec_21() { return &____codec_21; }
	inline void set__codec_21(ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * value)
	{
		____codec_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____codec_21), (void*)value);
	}

	inline static int32_t get_offset_of_status_22() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___status_22)); }
	inline int32_t get_status_22() const { return ___status_22; }
	inline int32_t* get_address_of_status_22() { return &___status_22; }
	inline void set_status_22(int32_t value)
	{
		___status_22 = value;
	}

	inline static int32_t get_offset_of_pending_23() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___pending_23)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_pending_23() const { return ___pending_23; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_pending_23() { return &___pending_23; }
	inline void set_pending_23(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___pending_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_23), (void*)value);
	}

	inline static int32_t get_offset_of_nextPending_24() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___nextPending_24)); }
	inline int32_t get_nextPending_24() const { return ___nextPending_24; }
	inline int32_t* get_address_of_nextPending_24() { return &___nextPending_24; }
	inline void set_nextPending_24(int32_t value)
	{
		___nextPending_24 = value;
	}

	inline static int32_t get_offset_of_pendingCount_25() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___pendingCount_25)); }
	inline int32_t get_pendingCount_25() const { return ___pendingCount_25; }
	inline int32_t* get_address_of_pendingCount_25() { return &___pendingCount_25; }
	inline void set_pendingCount_25(int32_t value)
	{
		___pendingCount_25 = value;
	}

	inline static int32_t get_offset_of_data_type_26() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___data_type_26)); }
	inline int8_t get_data_type_26() const { return ___data_type_26; }
	inline int8_t* get_address_of_data_type_26() { return &___data_type_26; }
	inline void set_data_type_26(int8_t value)
	{
		___data_type_26 = value;
	}

	inline static int32_t get_offset_of_last_flush_27() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___last_flush_27)); }
	inline int32_t get_last_flush_27() const { return ___last_flush_27; }
	inline int32_t* get_address_of_last_flush_27() { return &___last_flush_27; }
	inline void set_last_flush_27(int32_t value)
	{
		___last_flush_27 = value;
	}

	inline static int32_t get_offset_of_w_size_28() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___w_size_28)); }
	inline int32_t get_w_size_28() const { return ___w_size_28; }
	inline int32_t* get_address_of_w_size_28() { return &___w_size_28; }
	inline void set_w_size_28(int32_t value)
	{
		___w_size_28 = value;
	}

	inline static int32_t get_offset_of_w_bits_29() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___w_bits_29)); }
	inline int32_t get_w_bits_29() const { return ___w_bits_29; }
	inline int32_t* get_address_of_w_bits_29() { return &___w_bits_29; }
	inline void set_w_bits_29(int32_t value)
	{
		___w_bits_29 = value;
	}

	inline static int32_t get_offset_of_w_mask_30() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___w_mask_30)); }
	inline int32_t get_w_mask_30() const { return ___w_mask_30; }
	inline int32_t* get_address_of_w_mask_30() { return &___w_mask_30; }
	inline void set_w_mask_30(int32_t value)
	{
		___w_mask_30 = value;
	}

	inline static int32_t get_offset_of_window_31() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___window_31)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_window_31() const { return ___window_31; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_window_31() { return &___window_31; }
	inline void set_window_31(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___window_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___window_31), (void*)value);
	}

	inline static int32_t get_offset_of_window_size_32() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___window_size_32)); }
	inline int32_t get_window_size_32() const { return ___window_size_32; }
	inline int32_t* get_address_of_window_size_32() { return &___window_size_32; }
	inline void set_window_size_32(int32_t value)
	{
		___window_size_32 = value;
	}

	inline static int32_t get_offset_of_prev_33() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___prev_33)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_prev_33() const { return ___prev_33; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_prev_33() { return &___prev_33; }
	inline void set_prev_33(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___prev_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prev_33), (void*)value);
	}

	inline static int32_t get_offset_of_head_34() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___head_34)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_head_34() const { return ___head_34; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_head_34() { return &___head_34; }
	inline void set_head_34(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___head_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___head_34), (void*)value);
	}

	inline static int32_t get_offset_of_ins_h_35() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___ins_h_35)); }
	inline int32_t get_ins_h_35() const { return ___ins_h_35; }
	inline int32_t* get_address_of_ins_h_35() { return &___ins_h_35; }
	inline void set_ins_h_35(int32_t value)
	{
		___ins_h_35 = value;
	}

	inline static int32_t get_offset_of_hash_size_36() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___hash_size_36)); }
	inline int32_t get_hash_size_36() const { return ___hash_size_36; }
	inline int32_t* get_address_of_hash_size_36() { return &___hash_size_36; }
	inline void set_hash_size_36(int32_t value)
	{
		___hash_size_36 = value;
	}

	inline static int32_t get_offset_of_hash_bits_37() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___hash_bits_37)); }
	inline int32_t get_hash_bits_37() const { return ___hash_bits_37; }
	inline int32_t* get_address_of_hash_bits_37() { return &___hash_bits_37; }
	inline void set_hash_bits_37(int32_t value)
	{
		___hash_bits_37 = value;
	}

	inline static int32_t get_offset_of_hash_mask_38() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___hash_mask_38)); }
	inline int32_t get_hash_mask_38() const { return ___hash_mask_38; }
	inline int32_t* get_address_of_hash_mask_38() { return &___hash_mask_38; }
	inline void set_hash_mask_38(int32_t value)
	{
		___hash_mask_38 = value;
	}

	inline static int32_t get_offset_of_hash_shift_39() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___hash_shift_39)); }
	inline int32_t get_hash_shift_39() const { return ___hash_shift_39; }
	inline int32_t* get_address_of_hash_shift_39() { return &___hash_shift_39; }
	inline void set_hash_shift_39(int32_t value)
	{
		___hash_shift_39 = value;
	}

	inline static int32_t get_offset_of_block_start_40() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___block_start_40)); }
	inline int32_t get_block_start_40() const { return ___block_start_40; }
	inline int32_t* get_address_of_block_start_40() { return &___block_start_40; }
	inline void set_block_start_40(int32_t value)
	{
		___block_start_40 = value;
	}

	inline static int32_t get_offset_of_config_41() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___config_41)); }
	inline Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 * get_config_41() const { return ___config_41; }
	inline Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 ** get_address_of_config_41() { return &___config_41; }
	inline void set_config_41(Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 * value)
	{
		___config_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___config_41), (void*)value);
	}

	inline static int32_t get_offset_of_match_length_42() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___match_length_42)); }
	inline int32_t get_match_length_42() const { return ___match_length_42; }
	inline int32_t* get_address_of_match_length_42() { return &___match_length_42; }
	inline void set_match_length_42(int32_t value)
	{
		___match_length_42 = value;
	}

	inline static int32_t get_offset_of_prev_match_43() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___prev_match_43)); }
	inline int32_t get_prev_match_43() const { return ___prev_match_43; }
	inline int32_t* get_address_of_prev_match_43() { return &___prev_match_43; }
	inline void set_prev_match_43(int32_t value)
	{
		___prev_match_43 = value;
	}

	inline static int32_t get_offset_of_match_available_44() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___match_available_44)); }
	inline int32_t get_match_available_44() const { return ___match_available_44; }
	inline int32_t* get_address_of_match_available_44() { return &___match_available_44; }
	inline void set_match_available_44(int32_t value)
	{
		___match_available_44 = value;
	}

	inline static int32_t get_offset_of_strstart_45() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___strstart_45)); }
	inline int32_t get_strstart_45() const { return ___strstart_45; }
	inline int32_t* get_address_of_strstart_45() { return &___strstart_45; }
	inline void set_strstart_45(int32_t value)
	{
		___strstart_45 = value;
	}

	inline static int32_t get_offset_of_match_start_46() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___match_start_46)); }
	inline int32_t get_match_start_46() const { return ___match_start_46; }
	inline int32_t* get_address_of_match_start_46() { return &___match_start_46; }
	inline void set_match_start_46(int32_t value)
	{
		___match_start_46 = value;
	}

	inline static int32_t get_offset_of_lookahead_47() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___lookahead_47)); }
	inline int32_t get_lookahead_47() const { return ___lookahead_47; }
	inline int32_t* get_address_of_lookahead_47() { return &___lookahead_47; }
	inline void set_lookahead_47(int32_t value)
	{
		___lookahead_47 = value;
	}

	inline static int32_t get_offset_of_prev_length_48() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___prev_length_48)); }
	inline int32_t get_prev_length_48() const { return ___prev_length_48; }
	inline int32_t* get_address_of_prev_length_48() { return &___prev_length_48; }
	inline void set_prev_length_48(int32_t value)
	{
		___prev_length_48 = value;
	}

	inline static int32_t get_offset_of_compressionLevel_49() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___compressionLevel_49)); }
	inline int32_t get_compressionLevel_49() const { return ___compressionLevel_49; }
	inline int32_t* get_address_of_compressionLevel_49() { return &___compressionLevel_49; }
	inline void set_compressionLevel_49(int32_t value)
	{
		___compressionLevel_49 = value;
	}

	inline static int32_t get_offset_of_compressionStrategy_50() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___compressionStrategy_50)); }
	inline int32_t get_compressionStrategy_50() const { return ___compressionStrategy_50; }
	inline int32_t* get_address_of_compressionStrategy_50() { return &___compressionStrategy_50; }
	inline void set_compressionStrategy_50(int32_t value)
	{
		___compressionStrategy_50 = value;
	}

	inline static int32_t get_offset_of_dyn_ltree_51() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___dyn_ltree_51)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_dyn_ltree_51() const { return ___dyn_ltree_51; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_dyn_ltree_51() { return &___dyn_ltree_51; }
	inline void set_dyn_ltree_51(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___dyn_ltree_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dyn_ltree_51), (void*)value);
	}

	inline static int32_t get_offset_of_dyn_dtree_52() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___dyn_dtree_52)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_dyn_dtree_52() const { return ___dyn_dtree_52; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_dyn_dtree_52() { return &___dyn_dtree_52; }
	inline void set_dyn_dtree_52(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___dyn_dtree_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dyn_dtree_52), (void*)value);
	}

	inline static int32_t get_offset_of_bl_tree_53() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___bl_tree_53)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_bl_tree_53() const { return ___bl_tree_53; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_bl_tree_53() { return &___bl_tree_53; }
	inline void set_bl_tree_53(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___bl_tree_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bl_tree_53), (void*)value);
	}

	inline static int32_t get_offset_of_treeLiterals_54() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___treeLiterals_54)); }
	inline ZTree_t7DA6B673E43E37EE39DC59763E8C0FD3DE9CD04D * get_treeLiterals_54() const { return ___treeLiterals_54; }
	inline ZTree_t7DA6B673E43E37EE39DC59763E8C0FD3DE9CD04D ** get_address_of_treeLiterals_54() { return &___treeLiterals_54; }
	inline void set_treeLiterals_54(ZTree_t7DA6B673E43E37EE39DC59763E8C0FD3DE9CD04D * value)
	{
		___treeLiterals_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___treeLiterals_54), (void*)value);
	}

	inline static int32_t get_offset_of_treeDistances_55() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___treeDistances_55)); }
	inline ZTree_t7DA6B673E43E37EE39DC59763E8C0FD3DE9CD04D * get_treeDistances_55() const { return ___treeDistances_55; }
	inline ZTree_t7DA6B673E43E37EE39DC59763E8C0FD3DE9CD04D ** get_address_of_treeDistances_55() { return &___treeDistances_55; }
	inline void set_treeDistances_55(ZTree_t7DA6B673E43E37EE39DC59763E8C0FD3DE9CD04D * value)
	{
		___treeDistances_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___treeDistances_55), (void*)value);
	}

	inline static int32_t get_offset_of_treeBitLengths_56() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___treeBitLengths_56)); }
	inline ZTree_t7DA6B673E43E37EE39DC59763E8C0FD3DE9CD04D * get_treeBitLengths_56() const { return ___treeBitLengths_56; }
	inline ZTree_t7DA6B673E43E37EE39DC59763E8C0FD3DE9CD04D ** get_address_of_treeBitLengths_56() { return &___treeBitLengths_56; }
	inline void set_treeBitLengths_56(ZTree_t7DA6B673E43E37EE39DC59763E8C0FD3DE9CD04D * value)
	{
		___treeBitLengths_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___treeBitLengths_56), (void*)value);
	}

	inline static int32_t get_offset_of_bl_count_57() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___bl_count_57)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_bl_count_57() const { return ___bl_count_57; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_bl_count_57() { return &___bl_count_57; }
	inline void set_bl_count_57(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___bl_count_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bl_count_57), (void*)value);
	}

	inline static int32_t get_offset_of_heap_58() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___heap_58)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_heap_58() const { return ___heap_58; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_heap_58() { return &___heap_58; }
	inline void set_heap_58(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___heap_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heap_58), (void*)value);
	}

	inline static int32_t get_offset_of_heap_len_59() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___heap_len_59)); }
	inline int32_t get_heap_len_59() const { return ___heap_len_59; }
	inline int32_t* get_address_of_heap_len_59() { return &___heap_len_59; }
	inline void set_heap_len_59(int32_t value)
	{
		___heap_len_59 = value;
	}

	inline static int32_t get_offset_of_heap_max_60() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___heap_max_60)); }
	inline int32_t get_heap_max_60() const { return ___heap_max_60; }
	inline int32_t* get_address_of_heap_max_60() { return &___heap_max_60; }
	inline void set_heap_max_60(int32_t value)
	{
		___heap_max_60 = value;
	}

	inline static int32_t get_offset_of_depth_61() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___depth_61)); }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* get_depth_61() const { return ___depth_61; }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7** get_address_of_depth_61() { return &___depth_61; }
	inline void set_depth_61(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* value)
	{
		___depth_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___depth_61), (void*)value);
	}

	inline static int32_t get_offset_of__lengthOffset_62() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ____lengthOffset_62)); }
	inline int32_t get__lengthOffset_62() const { return ____lengthOffset_62; }
	inline int32_t* get_address_of__lengthOffset_62() { return &____lengthOffset_62; }
	inline void set__lengthOffset_62(int32_t value)
	{
		____lengthOffset_62 = value;
	}

	inline static int32_t get_offset_of_lit_bufsize_63() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___lit_bufsize_63)); }
	inline int32_t get_lit_bufsize_63() const { return ___lit_bufsize_63; }
	inline int32_t* get_address_of_lit_bufsize_63() { return &___lit_bufsize_63; }
	inline void set_lit_bufsize_63(int32_t value)
	{
		___lit_bufsize_63 = value;
	}

	inline static int32_t get_offset_of_last_lit_64() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___last_lit_64)); }
	inline int32_t get_last_lit_64() const { return ___last_lit_64; }
	inline int32_t* get_address_of_last_lit_64() { return &___last_lit_64; }
	inline void set_last_lit_64(int32_t value)
	{
		___last_lit_64 = value;
	}

	inline static int32_t get_offset_of__distanceOffset_65() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ____distanceOffset_65)); }
	inline int32_t get__distanceOffset_65() const { return ____distanceOffset_65; }
	inline int32_t* get_address_of__distanceOffset_65() { return &____distanceOffset_65; }
	inline void set__distanceOffset_65(int32_t value)
	{
		____distanceOffset_65 = value;
	}

	inline static int32_t get_offset_of_opt_len_66() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___opt_len_66)); }
	inline int32_t get_opt_len_66() const { return ___opt_len_66; }
	inline int32_t* get_address_of_opt_len_66() { return &___opt_len_66; }
	inline void set_opt_len_66(int32_t value)
	{
		___opt_len_66 = value;
	}

	inline static int32_t get_offset_of_static_len_67() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___static_len_67)); }
	inline int32_t get_static_len_67() const { return ___static_len_67; }
	inline int32_t* get_address_of_static_len_67() { return &___static_len_67; }
	inline void set_static_len_67(int32_t value)
	{
		___static_len_67 = value;
	}

	inline static int32_t get_offset_of_matches_68() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___matches_68)); }
	inline int32_t get_matches_68() const { return ___matches_68; }
	inline int32_t* get_address_of_matches_68() { return &___matches_68; }
	inline void set_matches_68(int32_t value)
	{
		___matches_68 = value;
	}

	inline static int32_t get_offset_of_last_eob_len_69() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___last_eob_len_69)); }
	inline int32_t get_last_eob_len_69() const { return ___last_eob_len_69; }
	inline int32_t* get_address_of_last_eob_len_69() { return &___last_eob_len_69; }
	inline void set_last_eob_len_69(int32_t value)
	{
		___last_eob_len_69 = value;
	}

	inline static int32_t get_offset_of_bi_buf_70() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___bi_buf_70)); }
	inline int16_t get_bi_buf_70() const { return ___bi_buf_70; }
	inline int16_t* get_address_of_bi_buf_70() { return &___bi_buf_70; }
	inline void set_bi_buf_70(int16_t value)
	{
		___bi_buf_70 = value;
	}

	inline static int32_t get_offset_of_bi_valid_71() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___bi_valid_71)); }
	inline int32_t get_bi_valid_71() const { return ___bi_valid_71; }
	inline int32_t* get_address_of_bi_valid_71() { return &___bi_valid_71; }
	inline void set_bi_valid_71(int32_t value)
	{
		___bi_valid_71 = value;
	}

	inline static int32_t get_offset_of_Rfc1950BytesEmitted_72() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ___Rfc1950BytesEmitted_72)); }
	inline bool get_Rfc1950BytesEmitted_72() const { return ___Rfc1950BytesEmitted_72; }
	inline bool* get_address_of_Rfc1950BytesEmitted_72() { return &___Rfc1950BytesEmitted_72; }
	inline void set_Rfc1950BytesEmitted_72(bool value)
	{
		___Rfc1950BytesEmitted_72 = value;
	}

	inline static int32_t get_offset_of__WantRfc1950HeaderBytes_73() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38, ____WantRfc1950HeaderBytes_73)); }
	inline bool get__WantRfc1950HeaderBytes_73() const { return ____WantRfc1950HeaderBytes_73; }
	inline bool* get_address_of__WantRfc1950HeaderBytes_73() { return &____WantRfc1950HeaderBytes_73; }
	inline void set__WantRfc1950HeaderBytes_73(bool value)
	{
		____WantRfc1950HeaderBytes_73 = value;
	}
};

struct DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38_StaticFields
{
public:
	// System.Int32 Ionic.Zlib.DeflateManager::MEM_LEVEL_MAX
	int32_t ___MEM_LEVEL_MAX_0;
	// System.Int32 Ionic.Zlib.DeflateManager::MEM_LEVEL_DEFAULT
	int32_t ___MEM_LEVEL_DEFAULT_1;
	// System.String[] Ionic.Zlib.DeflateManager::_ErrorMessage
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____ErrorMessage_3;
	// System.Int32 Ionic.Zlib.DeflateManager::PRESET_DICT
	int32_t ___PRESET_DICT_4;
	// System.Int32 Ionic.Zlib.DeflateManager::INIT_STATE
	int32_t ___INIT_STATE_5;
	// System.Int32 Ionic.Zlib.DeflateManager::BUSY_STATE
	int32_t ___BUSY_STATE_6;
	// System.Int32 Ionic.Zlib.DeflateManager::FINISH_STATE
	int32_t ___FINISH_STATE_7;
	// System.Int32 Ionic.Zlib.DeflateManager::Z_DEFLATED
	int32_t ___Z_DEFLATED_8;
	// System.Int32 Ionic.Zlib.DeflateManager::STORED_BLOCK
	int32_t ___STORED_BLOCK_9;
	// System.Int32 Ionic.Zlib.DeflateManager::STATIC_TREES
	int32_t ___STATIC_TREES_10;
	// System.Int32 Ionic.Zlib.DeflateManager::DYN_TREES
	int32_t ___DYN_TREES_11;
	// System.Int32 Ionic.Zlib.DeflateManager::Z_BINARY
	int32_t ___Z_BINARY_12;
	// System.Int32 Ionic.Zlib.DeflateManager::Z_ASCII
	int32_t ___Z_ASCII_13;
	// System.Int32 Ionic.Zlib.DeflateManager::Z_UNKNOWN
	int32_t ___Z_UNKNOWN_14;
	// System.Int32 Ionic.Zlib.DeflateManager::Buf_size
	int32_t ___Buf_size_15;
	// System.Int32 Ionic.Zlib.DeflateManager::MIN_MATCH
	int32_t ___MIN_MATCH_16;
	// System.Int32 Ionic.Zlib.DeflateManager::MAX_MATCH
	int32_t ___MAX_MATCH_17;
	// System.Int32 Ionic.Zlib.DeflateManager::MIN_LOOKAHEAD
	int32_t ___MIN_LOOKAHEAD_18;
	// System.Int32 Ionic.Zlib.DeflateManager::HEAP_SIZE
	int32_t ___HEAP_SIZE_19;
	// System.Int32 Ionic.Zlib.DeflateManager::END_BLOCK
	int32_t ___END_BLOCK_20;

public:
	inline static int32_t get_offset_of_MEM_LEVEL_MAX_0() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38_StaticFields, ___MEM_LEVEL_MAX_0)); }
	inline int32_t get_MEM_LEVEL_MAX_0() const { return ___MEM_LEVEL_MAX_0; }
	inline int32_t* get_address_of_MEM_LEVEL_MAX_0() { return &___MEM_LEVEL_MAX_0; }
	inline void set_MEM_LEVEL_MAX_0(int32_t value)
	{
		___MEM_LEVEL_MAX_0 = value;
	}

	inline static int32_t get_offset_of_MEM_LEVEL_DEFAULT_1() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38_StaticFields, ___MEM_LEVEL_DEFAULT_1)); }
	inline int32_t get_MEM_LEVEL_DEFAULT_1() const { return ___MEM_LEVEL_DEFAULT_1; }
	inline int32_t* get_address_of_MEM_LEVEL_DEFAULT_1() { return &___MEM_LEVEL_DEFAULT_1; }
	inline void set_MEM_LEVEL_DEFAULT_1(int32_t value)
	{
		___MEM_LEVEL_DEFAULT_1 = value;
	}

	inline static int32_t get_offset_of__ErrorMessage_3() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38_StaticFields, ____ErrorMessage_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__ErrorMessage_3() const { return ____ErrorMessage_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__ErrorMessage_3() { return &____ErrorMessage_3; }
	inline void set__ErrorMessage_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____ErrorMessage_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ErrorMessage_3), (void*)value);
	}

	inline static int32_t get_offset_of_PRESET_DICT_4() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38_StaticFields, ___PRESET_DICT_4)); }
	inline int32_t get_PRESET_DICT_4() const { return ___PRESET_DICT_4; }
	inline int32_t* get_address_of_PRESET_DICT_4() { return &___PRESET_DICT_4; }
	inline void set_PRESET_DICT_4(int32_t value)
	{
		___PRESET_DICT_4 = value;
	}

	inline static int32_t get_offset_of_INIT_STATE_5() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38_StaticFields, ___INIT_STATE_5)); }
	inline int32_t get_INIT_STATE_5() const { return ___INIT_STATE_5; }
	inline int32_t* get_address_of_INIT_STATE_5() { return &___INIT_STATE_5; }
	inline void set_INIT_STATE_5(int32_t value)
	{
		___INIT_STATE_5 = value;
	}

	inline static int32_t get_offset_of_BUSY_STATE_6() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38_StaticFields, ___BUSY_STATE_6)); }
	inline int32_t get_BUSY_STATE_6() const { return ___BUSY_STATE_6; }
	inline int32_t* get_address_of_BUSY_STATE_6() { return &___BUSY_STATE_6; }
	inline void set_BUSY_STATE_6(int32_t value)
	{
		___BUSY_STATE_6 = value;
	}

	inline static int32_t get_offset_of_FINISH_STATE_7() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38_StaticFields, ___FINISH_STATE_7)); }
	inline int32_t get_FINISH_STATE_7() const { return ___FINISH_STATE_7; }
	inline int32_t* get_address_of_FINISH_STATE_7() { return &___FINISH_STATE_7; }
	inline void set_FINISH_STATE_7(int32_t value)
	{
		___FINISH_STATE_7 = value;
	}

	inline static int32_t get_offset_of_Z_DEFLATED_8() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38_StaticFields, ___Z_DEFLATED_8)); }
	inline int32_t get_Z_DEFLATED_8() const { return ___Z_DEFLATED_8; }
	inline int32_t* get_address_of_Z_DEFLATED_8() { return &___Z_DEFLATED_8; }
	inline void set_Z_DEFLATED_8(int32_t value)
	{
		___Z_DEFLATED_8 = value;
	}

	inline static int32_t get_offset_of_STORED_BLOCK_9() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38_StaticFields, ___STORED_BLOCK_9)); }
	inline int32_t get_STORED_BLOCK_9() const { return ___STORED_BLOCK_9; }
	inline int32_t* get_address_of_STORED_BLOCK_9() { return &___STORED_BLOCK_9; }
	inline void set_STORED_BLOCK_9(int32_t value)
	{
		___STORED_BLOCK_9 = value;
	}

	inline static int32_t get_offset_of_STATIC_TREES_10() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38_StaticFields, ___STATIC_TREES_10)); }
	inline int32_t get_STATIC_TREES_10() const { return ___STATIC_TREES_10; }
	inline int32_t* get_address_of_STATIC_TREES_10() { return &___STATIC_TREES_10; }
	inline void set_STATIC_TREES_10(int32_t value)
	{
		___STATIC_TREES_10 = value;
	}

	inline static int32_t get_offset_of_DYN_TREES_11() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38_StaticFields, ___DYN_TREES_11)); }
	inline int32_t get_DYN_TREES_11() const { return ___DYN_TREES_11; }
	inline int32_t* get_address_of_DYN_TREES_11() { return &___DYN_TREES_11; }
	inline void set_DYN_TREES_11(int32_t value)
	{
		___DYN_TREES_11 = value;
	}

	inline static int32_t get_offset_of_Z_BINARY_12() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38_StaticFields, ___Z_BINARY_12)); }
	inline int32_t get_Z_BINARY_12() const { return ___Z_BINARY_12; }
	inline int32_t* get_address_of_Z_BINARY_12() { return &___Z_BINARY_12; }
	inline void set_Z_BINARY_12(int32_t value)
	{
		___Z_BINARY_12 = value;
	}

	inline static int32_t get_offset_of_Z_ASCII_13() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38_StaticFields, ___Z_ASCII_13)); }
	inline int32_t get_Z_ASCII_13() const { return ___Z_ASCII_13; }
	inline int32_t* get_address_of_Z_ASCII_13() { return &___Z_ASCII_13; }
	inline void set_Z_ASCII_13(int32_t value)
	{
		___Z_ASCII_13 = value;
	}

	inline static int32_t get_offset_of_Z_UNKNOWN_14() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38_StaticFields, ___Z_UNKNOWN_14)); }
	inline int32_t get_Z_UNKNOWN_14() const { return ___Z_UNKNOWN_14; }
	inline int32_t* get_address_of_Z_UNKNOWN_14() { return &___Z_UNKNOWN_14; }
	inline void set_Z_UNKNOWN_14(int32_t value)
	{
		___Z_UNKNOWN_14 = value;
	}

	inline static int32_t get_offset_of_Buf_size_15() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38_StaticFields, ___Buf_size_15)); }
	inline int32_t get_Buf_size_15() const { return ___Buf_size_15; }
	inline int32_t* get_address_of_Buf_size_15() { return &___Buf_size_15; }
	inline void set_Buf_size_15(int32_t value)
	{
		___Buf_size_15 = value;
	}

	inline static int32_t get_offset_of_MIN_MATCH_16() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38_StaticFields, ___MIN_MATCH_16)); }
	inline int32_t get_MIN_MATCH_16() const { return ___MIN_MATCH_16; }
	inline int32_t* get_address_of_MIN_MATCH_16() { return &___MIN_MATCH_16; }
	inline void set_MIN_MATCH_16(int32_t value)
	{
		___MIN_MATCH_16 = value;
	}

	inline static int32_t get_offset_of_MAX_MATCH_17() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38_StaticFields, ___MAX_MATCH_17)); }
	inline int32_t get_MAX_MATCH_17() const { return ___MAX_MATCH_17; }
	inline int32_t* get_address_of_MAX_MATCH_17() { return &___MAX_MATCH_17; }
	inline void set_MAX_MATCH_17(int32_t value)
	{
		___MAX_MATCH_17 = value;
	}

	inline static int32_t get_offset_of_MIN_LOOKAHEAD_18() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38_StaticFields, ___MIN_LOOKAHEAD_18)); }
	inline int32_t get_MIN_LOOKAHEAD_18() const { return ___MIN_LOOKAHEAD_18; }
	inline int32_t* get_address_of_MIN_LOOKAHEAD_18() { return &___MIN_LOOKAHEAD_18; }
	inline void set_MIN_LOOKAHEAD_18(int32_t value)
	{
		___MIN_LOOKAHEAD_18 = value;
	}

	inline static int32_t get_offset_of_HEAP_SIZE_19() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38_StaticFields, ___HEAP_SIZE_19)); }
	inline int32_t get_HEAP_SIZE_19() const { return ___HEAP_SIZE_19; }
	inline int32_t* get_address_of_HEAP_SIZE_19() { return &___HEAP_SIZE_19; }
	inline void set_HEAP_SIZE_19(int32_t value)
	{
		___HEAP_SIZE_19 = value;
	}

	inline static int32_t get_offset_of_END_BLOCK_20() { return static_cast<int32_t>(offsetof(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38_StaticFields, ___END_BLOCK_20)); }
	inline int32_t get_END_BLOCK_20() const { return ___END_BLOCK_20; }
	inline int32_t* get_address_of_END_BLOCK_20() { return &___END_BLOCK_20; }
	inline void set_END_BLOCK_20(int32_t value)
	{
		___END_BLOCK_20 = value;
	}
};


// Ionic.Zlib.DeflateManager_Config
struct  Config_t4E6F95E1778498BE0378D1749D94BC05EE856948  : public RuntimeObject
{
public:
	// System.Int32 Ionic.Zlib.DeflateManager_Config::GoodLength
	int32_t ___GoodLength_0;
	// System.Int32 Ionic.Zlib.DeflateManager_Config::MaxLazy
	int32_t ___MaxLazy_1;
	// System.Int32 Ionic.Zlib.DeflateManager_Config::NiceLength
	int32_t ___NiceLength_2;
	// System.Int32 Ionic.Zlib.DeflateManager_Config::MaxChainLength
	int32_t ___MaxChainLength_3;
	// Ionic.Zlib.DeflateFlavor Ionic.Zlib.DeflateManager_Config::Flavor
	int32_t ___Flavor_4;

public:
	inline static int32_t get_offset_of_GoodLength_0() { return static_cast<int32_t>(offsetof(Config_t4E6F95E1778498BE0378D1749D94BC05EE856948, ___GoodLength_0)); }
	inline int32_t get_GoodLength_0() const { return ___GoodLength_0; }
	inline int32_t* get_address_of_GoodLength_0() { return &___GoodLength_0; }
	inline void set_GoodLength_0(int32_t value)
	{
		___GoodLength_0 = value;
	}

	inline static int32_t get_offset_of_MaxLazy_1() { return static_cast<int32_t>(offsetof(Config_t4E6F95E1778498BE0378D1749D94BC05EE856948, ___MaxLazy_1)); }
	inline int32_t get_MaxLazy_1() const { return ___MaxLazy_1; }
	inline int32_t* get_address_of_MaxLazy_1() { return &___MaxLazy_1; }
	inline void set_MaxLazy_1(int32_t value)
	{
		___MaxLazy_1 = value;
	}

	inline static int32_t get_offset_of_NiceLength_2() { return static_cast<int32_t>(offsetof(Config_t4E6F95E1778498BE0378D1749D94BC05EE856948, ___NiceLength_2)); }
	inline int32_t get_NiceLength_2() const { return ___NiceLength_2; }
	inline int32_t* get_address_of_NiceLength_2() { return &___NiceLength_2; }
	inline void set_NiceLength_2(int32_t value)
	{
		___NiceLength_2 = value;
	}

	inline static int32_t get_offset_of_MaxChainLength_3() { return static_cast<int32_t>(offsetof(Config_t4E6F95E1778498BE0378D1749D94BC05EE856948, ___MaxChainLength_3)); }
	inline int32_t get_MaxChainLength_3() const { return ___MaxChainLength_3; }
	inline int32_t* get_address_of_MaxChainLength_3() { return &___MaxChainLength_3; }
	inline void set_MaxChainLength_3(int32_t value)
	{
		___MaxChainLength_3 = value;
	}

	inline static int32_t get_offset_of_Flavor_4() { return static_cast<int32_t>(offsetof(Config_t4E6F95E1778498BE0378D1749D94BC05EE856948, ___Flavor_4)); }
	inline int32_t get_Flavor_4() const { return ___Flavor_4; }
	inline int32_t* get_address_of_Flavor_4() { return &___Flavor_4; }
	inline void set_Flavor_4(int32_t value)
	{
		___Flavor_4 = value;
	}
};

struct Config_t4E6F95E1778498BE0378D1749D94BC05EE856948_StaticFields
{
public:
	// Ionic.Zlib.DeflateManager_Config[] Ionic.Zlib.DeflateManager_Config::Table
	ConfigU5BU5D_t0FB342CEEC50F6672104901D9439FDAD8BDC1A6F* ___Table_5;

public:
	inline static int32_t get_offset_of_Table_5() { return static_cast<int32_t>(offsetof(Config_t4E6F95E1778498BE0378D1749D94BC05EE856948_StaticFields, ___Table_5)); }
	inline ConfigU5BU5D_t0FB342CEEC50F6672104901D9439FDAD8BDC1A6F* get_Table_5() const { return ___Table_5; }
	inline ConfigU5BU5D_t0FB342CEEC50F6672104901D9439FDAD8BDC1A6F** get_address_of_Table_5() { return &___Table_5; }
	inline void set_Table_5(ConfigU5BU5D_t0FB342CEEC50F6672104901D9439FDAD8BDC1A6F* value)
	{
		___Table_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Table_5), (void*)value);
	}
};


// Ionic.Zlib.GZipStream
struct  GZipStream_tD1892FDA4711C4DDED84FD050A205322630365EA  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Nullable`1<System.DateTime> Ionic.Zlib.GZipStream::LastModified
	Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___LastModified_5;
	// System.Int32 Ionic.Zlib.GZipStream::_headerByteCount
	int32_t ____headerByteCount_6;
	// Ionic.Zlib.ZlibBaseStream Ionic.Zlib.GZipStream::_baseStream
	ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62 * ____baseStream_7;
	// System.Boolean Ionic.Zlib.GZipStream::_disposed
	bool ____disposed_8;
	// System.Boolean Ionic.Zlib.GZipStream::_firstReadDone
	bool ____firstReadDone_9;
	// System.String Ionic.Zlib.GZipStream::_FileName
	String_t* ____FileName_10;
	// System.String Ionic.Zlib.GZipStream::_Comment
	String_t* ____Comment_11;
	// System.Int32 Ionic.Zlib.GZipStream::_Crc32
	int32_t ____Crc32_12;

public:
	inline static int32_t get_offset_of_LastModified_5() { return static_cast<int32_t>(offsetof(GZipStream_tD1892FDA4711C4DDED84FD050A205322630365EA, ___LastModified_5)); }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  get_LastModified_5() const { return ___LastModified_5; }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * get_address_of_LastModified_5() { return &___LastModified_5; }
	inline void set_LastModified_5(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  value)
	{
		___LastModified_5 = value;
	}

	inline static int32_t get_offset_of__headerByteCount_6() { return static_cast<int32_t>(offsetof(GZipStream_tD1892FDA4711C4DDED84FD050A205322630365EA, ____headerByteCount_6)); }
	inline int32_t get__headerByteCount_6() const { return ____headerByteCount_6; }
	inline int32_t* get_address_of__headerByteCount_6() { return &____headerByteCount_6; }
	inline void set__headerByteCount_6(int32_t value)
	{
		____headerByteCount_6 = value;
	}

	inline static int32_t get_offset_of__baseStream_7() { return static_cast<int32_t>(offsetof(GZipStream_tD1892FDA4711C4DDED84FD050A205322630365EA, ____baseStream_7)); }
	inline ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62 * get__baseStream_7() const { return ____baseStream_7; }
	inline ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62 ** get_address_of__baseStream_7() { return &____baseStream_7; }
	inline void set__baseStream_7(ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62 * value)
	{
		____baseStream_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____baseStream_7), (void*)value);
	}

	inline static int32_t get_offset_of__disposed_8() { return static_cast<int32_t>(offsetof(GZipStream_tD1892FDA4711C4DDED84FD050A205322630365EA, ____disposed_8)); }
	inline bool get__disposed_8() const { return ____disposed_8; }
	inline bool* get_address_of__disposed_8() { return &____disposed_8; }
	inline void set__disposed_8(bool value)
	{
		____disposed_8 = value;
	}

	inline static int32_t get_offset_of__firstReadDone_9() { return static_cast<int32_t>(offsetof(GZipStream_tD1892FDA4711C4DDED84FD050A205322630365EA, ____firstReadDone_9)); }
	inline bool get__firstReadDone_9() const { return ____firstReadDone_9; }
	inline bool* get_address_of__firstReadDone_9() { return &____firstReadDone_9; }
	inline void set__firstReadDone_9(bool value)
	{
		____firstReadDone_9 = value;
	}

	inline static int32_t get_offset_of__FileName_10() { return static_cast<int32_t>(offsetof(GZipStream_tD1892FDA4711C4DDED84FD050A205322630365EA, ____FileName_10)); }
	inline String_t* get__FileName_10() const { return ____FileName_10; }
	inline String_t** get_address_of__FileName_10() { return &____FileName_10; }
	inline void set__FileName_10(String_t* value)
	{
		____FileName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FileName_10), (void*)value);
	}

	inline static int32_t get_offset_of__Comment_11() { return static_cast<int32_t>(offsetof(GZipStream_tD1892FDA4711C4DDED84FD050A205322630365EA, ____Comment_11)); }
	inline String_t* get__Comment_11() const { return ____Comment_11; }
	inline String_t** get_address_of__Comment_11() { return &____Comment_11; }
	inline void set__Comment_11(String_t* value)
	{
		____Comment_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Comment_11), (void*)value);
	}

	inline static int32_t get_offset_of__Crc32_12() { return static_cast<int32_t>(offsetof(GZipStream_tD1892FDA4711C4DDED84FD050A205322630365EA, ____Crc32_12)); }
	inline int32_t get__Crc32_12() const { return ____Crc32_12; }
	inline int32_t* get_address_of__Crc32_12() { return &____Crc32_12; }
	inline void set__Crc32_12(int32_t value)
	{
		____Crc32_12 = value;
	}
};

struct GZipStream_tD1892FDA4711C4DDED84FD050A205322630365EA_StaticFields
{
public:
	// System.DateTime Ionic.Zlib.GZipStream::_unixEpoch
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ____unixEpoch_13;
	// System.Text.Encoding Ionic.Zlib.GZipStream::iso8859dash1
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___iso8859dash1_14;

public:
	inline static int32_t get_offset_of__unixEpoch_13() { return static_cast<int32_t>(offsetof(GZipStream_tD1892FDA4711C4DDED84FD050A205322630365EA_StaticFields, ____unixEpoch_13)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get__unixEpoch_13() const { return ____unixEpoch_13; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of__unixEpoch_13() { return &____unixEpoch_13; }
	inline void set__unixEpoch_13(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		____unixEpoch_13 = value;
	}

	inline static int32_t get_offset_of_iso8859dash1_14() { return static_cast<int32_t>(offsetof(GZipStream_tD1892FDA4711C4DDED84FD050A205322630365EA_StaticFields, ___iso8859dash1_14)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_iso8859dash1_14() const { return ___iso8859dash1_14; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_iso8859dash1_14() { return &___iso8859dash1_14; }
	inline void set_iso8859dash1_14(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___iso8859dash1_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso8859dash1_14), (void*)value);
	}
};


// Ionic.Zlib.InflateManager
struct  InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020  : public RuntimeObject
{
public:
	// Ionic.Zlib.InflateManager_InflateManagerMode Ionic.Zlib.InflateManager::mode
	int32_t ___mode_2;
	// Ionic.Zlib.ZlibCodec Ionic.Zlib.InflateManager::_codec
	ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * ____codec_3;
	// System.Int32 Ionic.Zlib.InflateManager::method
	int32_t ___method_4;
	// System.UInt32 Ionic.Zlib.InflateManager::computedCheck
	uint32_t ___computedCheck_5;
	// System.UInt32 Ionic.Zlib.InflateManager::expectedCheck
	uint32_t ___expectedCheck_6;
	// System.Int32 Ionic.Zlib.InflateManager::marker
	int32_t ___marker_7;
	// System.Boolean Ionic.Zlib.InflateManager::_handleRfc1950HeaderBytes
	bool ____handleRfc1950HeaderBytes_8;
	// System.Int32 Ionic.Zlib.InflateManager::wbits
	int32_t ___wbits_9;
	// Ionic.Zlib.InflateBlocks Ionic.Zlib.InflateManager::blocks
	InflateBlocks_t64E396F2FC55FDE88EED6F55B0D7769466E82286 * ___blocks_10;

public:
	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020, ___mode_2)); }
	inline int32_t get_mode_2() const { return ___mode_2; }
	inline int32_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(int32_t value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of__codec_3() { return static_cast<int32_t>(offsetof(InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020, ____codec_3)); }
	inline ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * get__codec_3() const { return ____codec_3; }
	inline ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 ** get_address_of__codec_3() { return &____codec_3; }
	inline void set__codec_3(ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * value)
	{
		____codec_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____codec_3), (void*)value);
	}

	inline static int32_t get_offset_of_method_4() { return static_cast<int32_t>(offsetof(InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020, ___method_4)); }
	inline int32_t get_method_4() const { return ___method_4; }
	inline int32_t* get_address_of_method_4() { return &___method_4; }
	inline void set_method_4(int32_t value)
	{
		___method_4 = value;
	}

	inline static int32_t get_offset_of_computedCheck_5() { return static_cast<int32_t>(offsetof(InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020, ___computedCheck_5)); }
	inline uint32_t get_computedCheck_5() const { return ___computedCheck_5; }
	inline uint32_t* get_address_of_computedCheck_5() { return &___computedCheck_5; }
	inline void set_computedCheck_5(uint32_t value)
	{
		___computedCheck_5 = value;
	}

	inline static int32_t get_offset_of_expectedCheck_6() { return static_cast<int32_t>(offsetof(InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020, ___expectedCheck_6)); }
	inline uint32_t get_expectedCheck_6() const { return ___expectedCheck_6; }
	inline uint32_t* get_address_of_expectedCheck_6() { return &___expectedCheck_6; }
	inline void set_expectedCheck_6(uint32_t value)
	{
		___expectedCheck_6 = value;
	}

	inline static int32_t get_offset_of_marker_7() { return static_cast<int32_t>(offsetof(InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020, ___marker_7)); }
	inline int32_t get_marker_7() const { return ___marker_7; }
	inline int32_t* get_address_of_marker_7() { return &___marker_7; }
	inline void set_marker_7(int32_t value)
	{
		___marker_7 = value;
	}

	inline static int32_t get_offset_of__handleRfc1950HeaderBytes_8() { return static_cast<int32_t>(offsetof(InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020, ____handleRfc1950HeaderBytes_8)); }
	inline bool get__handleRfc1950HeaderBytes_8() const { return ____handleRfc1950HeaderBytes_8; }
	inline bool* get_address_of__handleRfc1950HeaderBytes_8() { return &____handleRfc1950HeaderBytes_8; }
	inline void set__handleRfc1950HeaderBytes_8(bool value)
	{
		____handleRfc1950HeaderBytes_8 = value;
	}

	inline static int32_t get_offset_of_wbits_9() { return static_cast<int32_t>(offsetof(InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020, ___wbits_9)); }
	inline int32_t get_wbits_9() const { return ___wbits_9; }
	inline int32_t* get_address_of_wbits_9() { return &___wbits_9; }
	inline void set_wbits_9(int32_t value)
	{
		___wbits_9 = value;
	}

	inline static int32_t get_offset_of_blocks_10() { return static_cast<int32_t>(offsetof(InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020, ___blocks_10)); }
	inline InflateBlocks_t64E396F2FC55FDE88EED6F55B0D7769466E82286 * get_blocks_10() const { return ___blocks_10; }
	inline InflateBlocks_t64E396F2FC55FDE88EED6F55B0D7769466E82286 ** get_address_of_blocks_10() { return &___blocks_10; }
	inline void set_blocks_10(InflateBlocks_t64E396F2FC55FDE88EED6F55B0D7769466E82286 * value)
	{
		___blocks_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blocks_10), (void*)value);
	}
};

struct InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020_StaticFields
{
public:
	// System.Byte[] Ionic.Zlib.InflateManager::mark
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mark_11;

public:
	inline static int32_t get_offset_of_mark_11() { return static_cast<int32_t>(offsetof(InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020_StaticFields, ___mark_11)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_mark_11() const { return ___mark_11; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_mark_11() { return &___mark_11; }
	inline void set_mark_11(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___mark_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mark_11), (void*)value);
	}
};


// Ionic.Zlib.ZlibBaseStream
struct  ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// Ionic.Zlib.ZlibCodec Ionic.Zlib.ZlibBaseStream::_z
	ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * ____z_5;
	// Ionic.Zlib.ZlibBaseStream_StreamMode Ionic.Zlib.ZlibBaseStream::_streamMode
	int32_t ____streamMode_6;
	// Ionic.Zlib.FlushType Ionic.Zlib.ZlibBaseStream::_flushMode
	int32_t ____flushMode_7;
	// Ionic.Zlib.ZlibStreamFlavor Ionic.Zlib.ZlibBaseStream::_flavor
	int32_t ____flavor_8;
	// Ionic.Zlib.CompressionMode Ionic.Zlib.ZlibBaseStream::_compressionMode
	int32_t ____compressionMode_9;
	// Ionic.Zlib.CompressionLevel Ionic.Zlib.ZlibBaseStream::_level
	int32_t ____level_10;
	// System.Boolean Ionic.Zlib.ZlibBaseStream::_leaveOpen
	bool ____leaveOpen_11;
	// System.Byte[] Ionic.Zlib.ZlibBaseStream::_workingBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____workingBuffer_12;
	// System.Int32 Ionic.Zlib.ZlibBaseStream::_bufferSize
	int32_t ____bufferSize_13;
	// System.Byte[] Ionic.Zlib.ZlibBaseStream::_buf1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buf1_14;
	// System.IO.Stream Ionic.Zlib.ZlibBaseStream::_stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____stream_15;
	// Ionic.Zlib.CompressionStrategy Ionic.Zlib.ZlibBaseStream::Strategy
	int32_t ___Strategy_16;
	// Ionic.Crc.CRC32 Ionic.Zlib.ZlibBaseStream::crc
	CRC32_tA22999B2090CF8FB9FD50B79803BF2E296E4437C * ___crc_17;
	// System.String Ionic.Zlib.ZlibBaseStream::_GzipFileName
	String_t* ____GzipFileName_18;
	// System.String Ionic.Zlib.ZlibBaseStream::_GzipComment
	String_t* ____GzipComment_19;
	// System.DateTime Ionic.Zlib.ZlibBaseStream::_GzipMtime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ____GzipMtime_20;
	// System.Int32 Ionic.Zlib.ZlibBaseStream::_gzipHeaderByteCount
	int32_t ____gzipHeaderByteCount_21;
	// System.Boolean Ionic.Zlib.ZlibBaseStream::nomoreinput
	bool ___nomoreinput_22;

public:
	inline static int32_t get_offset_of__z_5() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62, ____z_5)); }
	inline ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * get__z_5() const { return ____z_5; }
	inline ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 ** get_address_of__z_5() { return &____z_5; }
	inline void set__z_5(ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * value)
	{
		____z_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____z_5), (void*)value);
	}

	inline static int32_t get_offset_of__streamMode_6() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62, ____streamMode_6)); }
	inline int32_t get__streamMode_6() const { return ____streamMode_6; }
	inline int32_t* get_address_of__streamMode_6() { return &____streamMode_6; }
	inline void set__streamMode_6(int32_t value)
	{
		____streamMode_6 = value;
	}

	inline static int32_t get_offset_of__flushMode_7() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62, ____flushMode_7)); }
	inline int32_t get__flushMode_7() const { return ____flushMode_7; }
	inline int32_t* get_address_of__flushMode_7() { return &____flushMode_7; }
	inline void set__flushMode_7(int32_t value)
	{
		____flushMode_7 = value;
	}

	inline static int32_t get_offset_of__flavor_8() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62, ____flavor_8)); }
	inline int32_t get__flavor_8() const { return ____flavor_8; }
	inline int32_t* get_address_of__flavor_8() { return &____flavor_8; }
	inline void set__flavor_8(int32_t value)
	{
		____flavor_8 = value;
	}

	inline static int32_t get_offset_of__compressionMode_9() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62, ____compressionMode_9)); }
	inline int32_t get__compressionMode_9() const { return ____compressionMode_9; }
	inline int32_t* get_address_of__compressionMode_9() { return &____compressionMode_9; }
	inline void set__compressionMode_9(int32_t value)
	{
		____compressionMode_9 = value;
	}

	inline static int32_t get_offset_of__level_10() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62, ____level_10)); }
	inline int32_t get__level_10() const { return ____level_10; }
	inline int32_t* get_address_of__level_10() { return &____level_10; }
	inline void set__level_10(int32_t value)
	{
		____level_10 = value;
	}

	inline static int32_t get_offset_of__leaveOpen_11() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62, ____leaveOpen_11)); }
	inline bool get__leaveOpen_11() const { return ____leaveOpen_11; }
	inline bool* get_address_of__leaveOpen_11() { return &____leaveOpen_11; }
	inline void set__leaveOpen_11(bool value)
	{
		____leaveOpen_11 = value;
	}

	inline static int32_t get_offset_of__workingBuffer_12() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62, ____workingBuffer_12)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__workingBuffer_12() const { return ____workingBuffer_12; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__workingBuffer_12() { return &____workingBuffer_12; }
	inline void set__workingBuffer_12(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____workingBuffer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____workingBuffer_12), (void*)value);
	}

	inline static int32_t get_offset_of__bufferSize_13() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62, ____bufferSize_13)); }
	inline int32_t get__bufferSize_13() const { return ____bufferSize_13; }
	inline int32_t* get_address_of__bufferSize_13() { return &____bufferSize_13; }
	inline void set__bufferSize_13(int32_t value)
	{
		____bufferSize_13 = value;
	}

	inline static int32_t get_offset_of__buf1_14() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62, ____buf1_14)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buf1_14() const { return ____buf1_14; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buf1_14() { return &____buf1_14; }
	inline void set__buf1_14(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buf1_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buf1_14), (void*)value);
	}

	inline static int32_t get_offset_of__stream_15() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62, ____stream_15)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__stream_15() const { return ____stream_15; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__stream_15() { return &____stream_15; }
	inline void set__stream_15(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____stream_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stream_15), (void*)value);
	}

	inline static int32_t get_offset_of_Strategy_16() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62, ___Strategy_16)); }
	inline int32_t get_Strategy_16() const { return ___Strategy_16; }
	inline int32_t* get_address_of_Strategy_16() { return &___Strategy_16; }
	inline void set_Strategy_16(int32_t value)
	{
		___Strategy_16 = value;
	}

	inline static int32_t get_offset_of_crc_17() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62, ___crc_17)); }
	inline CRC32_tA22999B2090CF8FB9FD50B79803BF2E296E4437C * get_crc_17() const { return ___crc_17; }
	inline CRC32_tA22999B2090CF8FB9FD50B79803BF2E296E4437C ** get_address_of_crc_17() { return &___crc_17; }
	inline void set_crc_17(CRC32_tA22999B2090CF8FB9FD50B79803BF2E296E4437C * value)
	{
		___crc_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___crc_17), (void*)value);
	}

	inline static int32_t get_offset_of__GzipFileName_18() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62, ____GzipFileName_18)); }
	inline String_t* get__GzipFileName_18() const { return ____GzipFileName_18; }
	inline String_t** get_address_of__GzipFileName_18() { return &____GzipFileName_18; }
	inline void set__GzipFileName_18(String_t* value)
	{
		____GzipFileName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____GzipFileName_18), (void*)value);
	}

	inline static int32_t get_offset_of__GzipComment_19() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62, ____GzipComment_19)); }
	inline String_t* get__GzipComment_19() const { return ____GzipComment_19; }
	inline String_t** get_address_of__GzipComment_19() { return &____GzipComment_19; }
	inline void set__GzipComment_19(String_t* value)
	{
		____GzipComment_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____GzipComment_19), (void*)value);
	}

	inline static int32_t get_offset_of__GzipMtime_20() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62, ____GzipMtime_20)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get__GzipMtime_20() const { return ____GzipMtime_20; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of__GzipMtime_20() { return &____GzipMtime_20; }
	inline void set__GzipMtime_20(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		____GzipMtime_20 = value;
	}

	inline static int32_t get_offset_of__gzipHeaderByteCount_21() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62, ____gzipHeaderByteCount_21)); }
	inline int32_t get__gzipHeaderByteCount_21() const { return ____gzipHeaderByteCount_21; }
	inline int32_t* get_address_of__gzipHeaderByteCount_21() { return &____gzipHeaderByteCount_21; }
	inline void set__gzipHeaderByteCount_21(int32_t value)
	{
		____gzipHeaderByteCount_21 = value;
	}

	inline static int32_t get_offset_of_nomoreinput_22() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62, ___nomoreinput_22)); }
	inline bool get_nomoreinput_22() const { return ___nomoreinput_22; }
	inline bool* get_address_of_nomoreinput_22() { return &___nomoreinput_22; }
	inline void set_nomoreinput_22(bool value)
	{
		___nomoreinput_22 = value;
	}
};


// Ionic.Zlib.ZlibCodec
struct  ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7  : public RuntimeObject
{
public:
	static const Il2CppGuid CLSID;

public:
	// System.Byte[] Ionic.Zlib.ZlibCodec::InputBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___InputBuffer_0;
	// System.Int32 Ionic.Zlib.ZlibCodec::NextIn
	int32_t ___NextIn_1;
	// System.Int32 Ionic.Zlib.ZlibCodec::AvailableBytesIn
	int32_t ___AvailableBytesIn_2;
	// System.Int64 Ionic.Zlib.ZlibCodec::TotalBytesIn
	int64_t ___TotalBytesIn_3;
	// System.Byte[] Ionic.Zlib.ZlibCodec::OutputBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___OutputBuffer_4;
	// System.Int32 Ionic.Zlib.ZlibCodec::NextOut
	int32_t ___NextOut_5;
	// System.Int32 Ionic.Zlib.ZlibCodec::AvailableBytesOut
	int32_t ___AvailableBytesOut_6;
	// System.Int64 Ionic.Zlib.ZlibCodec::TotalBytesOut
	int64_t ___TotalBytesOut_7;
	// System.String Ionic.Zlib.ZlibCodec::Message
	String_t* ___Message_8;
	// Ionic.Zlib.DeflateManager Ionic.Zlib.ZlibCodec::dstate
	DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * ___dstate_9;
	// Ionic.Zlib.InflateManager Ionic.Zlib.ZlibCodec::istate
	InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020 * ___istate_10;
	// System.UInt32 Ionic.Zlib.ZlibCodec::_Adler32
	uint32_t ____Adler32_11;
	// Ionic.Zlib.CompressionLevel Ionic.Zlib.ZlibCodec::CompressLevel
	int32_t ___CompressLevel_12;
	// System.Int32 Ionic.Zlib.ZlibCodec::WindowBits
	int32_t ___WindowBits_13;
	// Ionic.Zlib.CompressionStrategy Ionic.Zlib.ZlibCodec::Strategy
	int32_t ___Strategy_14;

public:
	inline static int32_t get_offset_of_InputBuffer_0() { return static_cast<int32_t>(offsetof(ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7, ___InputBuffer_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_InputBuffer_0() const { return ___InputBuffer_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_InputBuffer_0() { return &___InputBuffer_0; }
	inline void set_InputBuffer_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___InputBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputBuffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_NextIn_1() { return static_cast<int32_t>(offsetof(ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7, ___NextIn_1)); }
	inline int32_t get_NextIn_1() const { return ___NextIn_1; }
	inline int32_t* get_address_of_NextIn_1() { return &___NextIn_1; }
	inline void set_NextIn_1(int32_t value)
	{
		___NextIn_1 = value;
	}

	inline static int32_t get_offset_of_AvailableBytesIn_2() { return static_cast<int32_t>(offsetof(ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7, ___AvailableBytesIn_2)); }
	inline int32_t get_AvailableBytesIn_2() const { return ___AvailableBytesIn_2; }
	inline int32_t* get_address_of_AvailableBytesIn_2() { return &___AvailableBytesIn_2; }
	inline void set_AvailableBytesIn_2(int32_t value)
	{
		___AvailableBytesIn_2 = value;
	}

	inline static int32_t get_offset_of_TotalBytesIn_3() { return static_cast<int32_t>(offsetof(ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7, ___TotalBytesIn_3)); }
	inline int64_t get_TotalBytesIn_3() const { return ___TotalBytesIn_3; }
	inline int64_t* get_address_of_TotalBytesIn_3() { return &___TotalBytesIn_3; }
	inline void set_TotalBytesIn_3(int64_t value)
	{
		___TotalBytesIn_3 = value;
	}

	inline static int32_t get_offset_of_OutputBuffer_4() { return static_cast<int32_t>(offsetof(ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7, ___OutputBuffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_OutputBuffer_4() const { return ___OutputBuffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_OutputBuffer_4() { return &___OutputBuffer_4; }
	inline void set_OutputBuffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___OutputBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OutputBuffer_4), (void*)value);
	}

	inline static int32_t get_offset_of_NextOut_5() { return static_cast<int32_t>(offsetof(ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7, ___NextOut_5)); }
	inline int32_t get_NextOut_5() const { return ___NextOut_5; }
	inline int32_t* get_address_of_NextOut_5() { return &___NextOut_5; }
	inline void set_NextOut_5(int32_t value)
	{
		___NextOut_5 = value;
	}

	inline static int32_t get_offset_of_AvailableBytesOut_6() { return static_cast<int32_t>(offsetof(ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7, ___AvailableBytesOut_6)); }
	inline int32_t get_AvailableBytesOut_6() const { return ___AvailableBytesOut_6; }
	inline int32_t* get_address_of_AvailableBytesOut_6() { return &___AvailableBytesOut_6; }
	inline void set_AvailableBytesOut_6(int32_t value)
	{
		___AvailableBytesOut_6 = value;
	}

	inline static int32_t get_offset_of_TotalBytesOut_7() { return static_cast<int32_t>(offsetof(ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7, ___TotalBytesOut_7)); }
	inline int64_t get_TotalBytesOut_7() const { return ___TotalBytesOut_7; }
	inline int64_t* get_address_of_TotalBytesOut_7() { return &___TotalBytesOut_7; }
	inline void set_TotalBytesOut_7(int64_t value)
	{
		___TotalBytesOut_7 = value;
	}

	inline static int32_t get_offset_of_Message_8() { return static_cast<int32_t>(offsetof(ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7, ___Message_8)); }
	inline String_t* get_Message_8() const { return ___Message_8; }
	inline String_t** get_address_of_Message_8() { return &___Message_8; }
	inline void set_Message_8(String_t* value)
	{
		___Message_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Message_8), (void*)value);
	}

	inline static int32_t get_offset_of_dstate_9() { return static_cast<int32_t>(offsetof(ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7, ___dstate_9)); }
	inline DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * get_dstate_9() const { return ___dstate_9; }
	inline DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 ** get_address_of_dstate_9() { return &___dstate_9; }
	inline void set_dstate_9(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * value)
	{
		___dstate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dstate_9), (void*)value);
	}

	inline static int32_t get_offset_of_istate_10() { return static_cast<int32_t>(offsetof(ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7, ___istate_10)); }
	inline InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020 * get_istate_10() const { return ___istate_10; }
	inline InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020 ** get_address_of_istate_10() { return &___istate_10; }
	inline void set_istate_10(InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020 * value)
	{
		___istate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___istate_10), (void*)value);
	}

	inline static int32_t get_offset_of__Adler32_11() { return static_cast<int32_t>(offsetof(ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7, ____Adler32_11)); }
	inline uint32_t get__Adler32_11() const { return ____Adler32_11; }
	inline uint32_t* get_address_of__Adler32_11() { return &____Adler32_11; }
	inline void set__Adler32_11(uint32_t value)
	{
		____Adler32_11 = value;
	}

	inline static int32_t get_offset_of_CompressLevel_12() { return static_cast<int32_t>(offsetof(ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7, ___CompressLevel_12)); }
	inline int32_t get_CompressLevel_12() const { return ___CompressLevel_12; }
	inline int32_t* get_address_of_CompressLevel_12() { return &___CompressLevel_12; }
	inline void set_CompressLevel_12(int32_t value)
	{
		___CompressLevel_12 = value;
	}

	inline static int32_t get_offset_of_WindowBits_13() { return static_cast<int32_t>(offsetof(ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7, ___WindowBits_13)); }
	inline int32_t get_WindowBits_13() const { return ___WindowBits_13; }
	inline int32_t* get_address_of_WindowBits_13() { return &___WindowBits_13; }
	inline void set_WindowBits_13(int32_t value)
	{
		___WindowBits_13 = value;
	}

	inline static int32_t get_offset_of_Strategy_14() { return static_cast<int32_t>(offsetof(ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7, ___Strategy_14)); }
	inline int32_t get_Strategy_14() const { return ___Strategy_14; }
	inline int32_t* get_address_of_Strategy_14() { return &___Strategy_14; }
	inline void set_Strategy_14(int32_t value)
	{
		___Strategy_14 = value;
	}
};


// Ionic.Zlib.ZlibException
struct  ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069  : public Exception_t
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};


// PlayFab.Internal.CallRequestContainer
struct  CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D  : public RuntimeObject
{
public:
	// PlayFab.Internal.HttpRequestState PlayFab.Internal.CallRequestContainer::HttpState
	int32_t ___HttpState_0;
	// System.Net.HttpWebRequest PlayFab.Internal.CallRequestContainer::HttpRequest
	HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * ___HttpRequest_1;
	// System.String PlayFab.Internal.CallRequestContainer::ApiEndpoint
	String_t* ___ApiEndpoint_2;
	// System.String PlayFab.Internal.CallRequestContainer::FullUrl
	String_t* ___FullUrl_3;
	// System.Byte[] PlayFab.Internal.CallRequestContainer::Payload
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Payload_4;
	// System.String PlayFab.Internal.CallRequestContainer::JsonResponse
	String_t* ___JsonResponse_5;
	// PlayFab.SharedModels.PlayFabRequestCommon PlayFab.Internal.CallRequestContainer::ApiRequest
	PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A * ___ApiRequest_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.Internal.CallRequestContainer::RequestHeaders
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___RequestHeaders_7;
	// PlayFab.SharedModels.PlayFabResultCommon PlayFab.Internal.CallRequestContainer::ApiResult
	PlayFabResultCommon_t9DD4B71D8199989BBFB06770ED84AD5F666EF7FB * ___ApiResult_8;
	// PlayFab.PlayFabError PlayFab.Internal.CallRequestContainer::Error
	PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 * ___Error_9;
	// System.Action PlayFab.Internal.CallRequestContainer::DeserializeResultJson
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___DeserializeResultJson_10;
	// System.Action PlayFab.Internal.CallRequestContainer::InvokeSuccessCallback
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___InvokeSuccessCallback_11;
	// System.Action`1<PlayFab.PlayFabError> PlayFab.Internal.CallRequestContainer::ErrorCallback
	Action_1_t783DC837D7772A52296BE8080F3FE74761B96F8F * ___ErrorCallback_12;
	// System.Object PlayFab.Internal.CallRequestContainer::CustomData
	RuntimeObject * ___CustomData_13;
	// PlayFab.PlayFabApiSettings PlayFab.Internal.CallRequestContainer::settings
	PlayFabApiSettings_t62DC7BEDADD9C5CBEA3E3613AAF5521633496913 * ___settings_14;
	// PlayFab.PlayFabAuthenticationContext PlayFab.Internal.CallRequestContainer::context
	PlayFabAuthenticationContext_tEC17E9E687F890C5A626A3043464B68314443652 * ___context_15;
	// PlayFab.SharedModels.IPlayFabInstanceApi PlayFab.Internal.CallRequestContainer::instanceApi
	RuntimeObject* ___instanceApi_16;

public:
	inline static int32_t get_offset_of_HttpState_0() { return static_cast<int32_t>(offsetof(CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D, ___HttpState_0)); }
	inline int32_t get_HttpState_0() const { return ___HttpState_0; }
	inline int32_t* get_address_of_HttpState_0() { return &___HttpState_0; }
	inline void set_HttpState_0(int32_t value)
	{
		___HttpState_0 = value;
	}

	inline static int32_t get_offset_of_HttpRequest_1() { return static_cast<int32_t>(offsetof(CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D, ___HttpRequest_1)); }
	inline HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * get_HttpRequest_1() const { return ___HttpRequest_1; }
	inline HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A ** get_address_of_HttpRequest_1() { return &___HttpRequest_1; }
	inline void set_HttpRequest_1(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * value)
	{
		___HttpRequest_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HttpRequest_1), (void*)value);
	}

	inline static int32_t get_offset_of_ApiEndpoint_2() { return static_cast<int32_t>(offsetof(CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D, ___ApiEndpoint_2)); }
	inline String_t* get_ApiEndpoint_2() const { return ___ApiEndpoint_2; }
	inline String_t** get_address_of_ApiEndpoint_2() { return &___ApiEndpoint_2; }
	inline void set_ApiEndpoint_2(String_t* value)
	{
		___ApiEndpoint_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ApiEndpoint_2), (void*)value);
	}

	inline static int32_t get_offset_of_FullUrl_3() { return static_cast<int32_t>(offsetof(CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D, ___FullUrl_3)); }
	inline String_t* get_FullUrl_3() const { return ___FullUrl_3; }
	inline String_t** get_address_of_FullUrl_3() { return &___FullUrl_3; }
	inline void set_FullUrl_3(String_t* value)
	{
		___FullUrl_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FullUrl_3), (void*)value);
	}

	inline static int32_t get_offset_of_Payload_4() { return static_cast<int32_t>(offsetof(CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D, ___Payload_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Payload_4() const { return ___Payload_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Payload_4() { return &___Payload_4; }
	inline void set_Payload_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Payload_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Payload_4), (void*)value);
	}

	inline static int32_t get_offset_of_JsonResponse_5() { return static_cast<int32_t>(offsetof(CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D, ___JsonResponse_5)); }
	inline String_t* get_JsonResponse_5() const { return ___JsonResponse_5; }
	inline String_t** get_address_of_JsonResponse_5() { return &___JsonResponse_5; }
	inline void set_JsonResponse_5(String_t* value)
	{
		___JsonResponse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___JsonResponse_5), (void*)value);
	}

	inline static int32_t get_offset_of_ApiRequest_6() { return static_cast<int32_t>(offsetof(CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D, ___ApiRequest_6)); }
	inline PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A * get_ApiRequest_6() const { return ___ApiRequest_6; }
	inline PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A ** get_address_of_ApiRequest_6() { return &___ApiRequest_6; }
	inline void set_ApiRequest_6(PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A * value)
	{
		___ApiRequest_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ApiRequest_6), (void*)value);
	}

	inline static int32_t get_offset_of_RequestHeaders_7() { return static_cast<int32_t>(offsetof(CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D, ___RequestHeaders_7)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_RequestHeaders_7() const { return ___RequestHeaders_7; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_RequestHeaders_7() { return &___RequestHeaders_7; }
	inline void set_RequestHeaders_7(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___RequestHeaders_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RequestHeaders_7), (void*)value);
	}

	inline static int32_t get_offset_of_ApiResult_8() { return static_cast<int32_t>(offsetof(CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D, ___ApiResult_8)); }
	inline PlayFabResultCommon_t9DD4B71D8199989BBFB06770ED84AD5F666EF7FB * get_ApiResult_8() const { return ___ApiResult_8; }
	inline PlayFabResultCommon_t9DD4B71D8199989BBFB06770ED84AD5F666EF7FB ** get_address_of_ApiResult_8() { return &___ApiResult_8; }
	inline void set_ApiResult_8(PlayFabResultCommon_t9DD4B71D8199989BBFB06770ED84AD5F666EF7FB * value)
	{
		___ApiResult_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ApiResult_8), (void*)value);
	}

	inline static int32_t get_offset_of_Error_9() { return static_cast<int32_t>(offsetof(CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D, ___Error_9)); }
	inline PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 * get_Error_9() const { return ___Error_9; }
	inline PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 ** get_address_of_Error_9() { return &___Error_9; }
	inline void set_Error_9(PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 * value)
	{
		___Error_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Error_9), (void*)value);
	}

	inline static int32_t get_offset_of_DeserializeResultJson_10() { return static_cast<int32_t>(offsetof(CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D, ___DeserializeResultJson_10)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_DeserializeResultJson_10() const { return ___DeserializeResultJson_10; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_DeserializeResultJson_10() { return &___DeserializeResultJson_10; }
	inline void set_DeserializeResultJson_10(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___DeserializeResultJson_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DeserializeResultJson_10), (void*)value);
	}

	inline static int32_t get_offset_of_InvokeSuccessCallback_11() { return static_cast<int32_t>(offsetof(CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D, ___InvokeSuccessCallback_11)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_InvokeSuccessCallback_11() const { return ___InvokeSuccessCallback_11; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_InvokeSuccessCallback_11() { return &___InvokeSuccessCallback_11; }
	inline void set_InvokeSuccessCallback_11(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___InvokeSuccessCallback_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InvokeSuccessCallback_11), (void*)value);
	}

	inline static int32_t get_offset_of_ErrorCallback_12() { return static_cast<int32_t>(offsetof(CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D, ___ErrorCallback_12)); }
	inline Action_1_t783DC837D7772A52296BE8080F3FE74761B96F8F * get_ErrorCallback_12() const { return ___ErrorCallback_12; }
	inline Action_1_t783DC837D7772A52296BE8080F3FE74761B96F8F ** get_address_of_ErrorCallback_12() { return &___ErrorCallback_12; }
	inline void set_ErrorCallback_12(Action_1_t783DC837D7772A52296BE8080F3FE74761B96F8F * value)
	{
		___ErrorCallback_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorCallback_12), (void*)value);
	}

	inline static int32_t get_offset_of_CustomData_13() { return static_cast<int32_t>(offsetof(CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D, ___CustomData_13)); }
	inline RuntimeObject * get_CustomData_13() const { return ___CustomData_13; }
	inline RuntimeObject ** get_address_of_CustomData_13() { return &___CustomData_13; }
	inline void set_CustomData_13(RuntimeObject * value)
	{
		___CustomData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomData_13), (void*)value);
	}

	inline static int32_t get_offset_of_settings_14() { return static_cast<int32_t>(offsetof(CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D, ___settings_14)); }
	inline PlayFabApiSettings_t62DC7BEDADD9C5CBEA3E3613AAF5521633496913 * get_settings_14() const { return ___settings_14; }
	inline PlayFabApiSettings_t62DC7BEDADD9C5CBEA3E3613AAF5521633496913 ** get_address_of_settings_14() { return &___settings_14; }
	inline void set_settings_14(PlayFabApiSettings_t62DC7BEDADD9C5CBEA3E3613AAF5521633496913 * value)
	{
		___settings_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settings_14), (void*)value);
	}

	inline static int32_t get_offset_of_context_15() { return static_cast<int32_t>(offsetof(CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D, ___context_15)); }
	inline PlayFabAuthenticationContext_tEC17E9E687F890C5A626A3043464B68314443652 * get_context_15() const { return ___context_15; }
	inline PlayFabAuthenticationContext_tEC17E9E687F890C5A626A3043464B68314443652 ** get_address_of_context_15() { return &___context_15; }
	inline void set_context_15(PlayFabAuthenticationContext_tEC17E9E687F890C5A626A3043464B68314443652 * value)
	{
		___context_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___context_15), (void*)value);
	}

	inline static int32_t get_offset_of_instanceApi_16() { return static_cast<int32_t>(offsetof(CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D, ___instanceApi_16)); }
	inline RuntimeObject* get_instanceApi_16() const { return ___instanceApi_16; }
	inline RuntimeObject** get_address_of_instanceApi_16() { return &___instanceApi_16; }
	inline void set_instanceApi_16(RuntimeObject* value)
	{
		___instanceApi_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instanceApi_16), (void*)value);
	}
};


// PlayFab.Internal.PlayFabUtil
struct  PlayFabUtil_t6B9409219700C3BD9282B5C4A4D9F169B6870C90  : public RuntimeObject
{
public:

public:
};

struct PlayFabUtil_t6B9409219700C3BD9282B5C4A4D9F169B6870C90_StaticFields
{
public:
	// System.String PlayFab.Internal.PlayFabUtil::_localSettingsFileName
	String_t* ____localSettingsFileName_0;
	// System.String[] PlayFab.Internal.PlayFabUtil::_defaultDateTimeFormats
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____defaultDateTimeFormats_1;
	// System.Globalization.DateTimeStyles PlayFab.Internal.PlayFabUtil::DateTimeStyles
	int32_t ___DateTimeStyles_4;

public:
	inline static int32_t get_offset_of__localSettingsFileName_0() { return static_cast<int32_t>(offsetof(PlayFabUtil_t6B9409219700C3BD9282B5C4A4D9F169B6870C90_StaticFields, ____localSettingsFileName_0)); }
	inline String_t* get__localSettingsFileName_0() const { return ____localSettingsFileName_0; }
	inline String_t** get_address_of__localSettingsFileName_0() { return &____localSettingsFileName_0; }
	inline void set__localSettingsFileName_0(String_t* value)
	{
		____localSettingsFileName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____localSettingsFileName_0), (void*)value);
	}

	inline static int32_t get_offset_of__defaultDateTimeFormats_1() { return static_cast<int32_t>(offsetof(PlayFabUtil_t6B9409219700C3BD9282B5C4A4D9F169B6870C90_StaticFields, ____defaultDateTimeFormats_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__defaultDateTimeFormats_1() const { return ____defaultDateTimeFormats_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__defaultDateTimeFormats_1() { return &____defaultDateTimeFormats_1; }
	inline void set__defaultDateTimeFormats_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____defaultDateTimeFormats_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____defaultDateTimeFormats_1), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeStyles_4() { return static_cast<int32_t>(offsetof(PlayFabUtil_t6B9409219700C3BD9282B5C4A4D9F169B6870C90_StaticFields, ___DateTimeStyles_4)); }
	inline int32_t get_DateTimeStyles_4() const { return ___DateTimeStyles_4; }
	inline int32_t* get_address_of_DateTimeStyles_4() { return &___DateTimeStyles_4; }
	inline void set_DateTimeStyles_4(int32_t value)
	{
		___DateTimeStyles_4 = value;
	}
};

struct PlayFabUtil_t6B9409219700C3BD9282B5C4A4D9F169B6870C90_ThreadStaticFields
{
public:
	// System.Text.StringBuilder PlayFab.Internal.PlayFabUtil::_sb
	StringBuilder_t * ____sb_5;

public:
	inline static int32_t get_offset_of__sb_5() { return static_cast<int32_t>(offsetof(PlayFabUtil_t6B9409219700C3BD9282B5C4A4D9F169B6870C90_ThreadStaticFields, ____sb_5)); }
	inline StringBuilder_t * get__sb_5() const { return ____sb_5; }
	inline StringBuilder_t ** get_address_of__sb_5() { return &____sb_5; }
	inline void set__sb_5(StringBuilder_t * value)
	{
		____sb_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sb_5), (void*)value);
	}
};


// PlayFab.Internal.PlayFabWebRequest
struct  PlayFabWebRequest_t8B559043BC6B902CA68E57AF2CF876901CD78C26  : public RuntimeObject
{
public:
	// System.Boolean PlayFab.Internal.PlayFabWebRequest::_isInitialized
	bool ____isInitialized_11;

public:
	inline static int32_t get_offset_of__isInitialized_11() { return static_cast<int32_t>(offsetof(PlayFabWebRequest_t8B559043BC6B902CA68E57AF2CF876901CD78C26, ____isInitialized_11)); }
	inline bool get__isInitialized_11() const { return ____isInitialized_11; }
	inline bool* get_address_of__isInitialized_11() { return &____isInitialized_11; }
	inline void set__isInitialized_11(bool value)
	{
		____isInitialized_11 = value;
	}
};

struct PlayFabWebRequest_t8B559043BC6B902CA68E57AF2CF876901CD78C26_StaticFields
{
public:
	// System.Collections.Generic.Queue`1<System.Action> PlayFab.Internal.PlayFabWebRequest::ResultQueueTransferThread
	Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * ___ResultQueueTransferThread_0;
	// System.Collections.Generic.Queue`1<System.Action> PlayFab.Internal.PlayFabWebRequest::ResultQueueMainThread
	Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * ___ResultQueueMainThread_1;
	// System.Collections.Generic.List`1<PlayFab.Internal.CallRequestContainer> PlayFab.Internal.PlayFabWebRequest::ActiveRequests
	List_1_t24703A5FAC676916D88CEE11A3A4553C0670F6A8 * ___ActiveRequests_2;
	// System.Boolean PlayFab.Internal.PlayFabWebRequest::certValidationSet
	bool ___certValidationSet_3;
	// System.Threading.Thread PlayFab.Internal.PlayFabWebRequest::_requestQueueThread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ____requestQueueThread_4;
	// System.Object PlayFab.Internal.PlayFabWebRequest::_ThreadLock
	RuntimeObject * ____ThreadLock_5;
	// System.TimeSpan PlayFab.Internal.PlayFabWebRequest::ThreadKillTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___ThreadKillTimeout_6;
	// System.DateTime PlayFab.Internal.PlayFabWebRequest::_threadKillTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ____threadKillTime_7;
	// System.Boolean PlayFab.Internal.PlayFabWebRequest::_isApplicationPlaying
	bool ____isApplicationPlaying_8;
	// System.Int32 PlayFab.Internal.PlayFabWebRequest::_activeCallCount
	int32_t ____activeCallCount_9;
	// System.String PlayFab.Internal.PlayFabWebRequest::_unityVersion
	String_t* ____unityVersion_10;

public:
	inline static int32_t get_offset_of_ResultQueueTransferThread_0() { return static_cast<int32_t>(offsetof(PlayFabWebRequest_t8B559043BC6B902CA68E57AF2CF876901CD78C26_StaticFields, ___ResultQueueTransferThread_0)); }
	inline Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * get_ResultQueueTransferThread_0() const { return ___ResultQueueTransferThread_0; }
	inline Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 ** get_address_of_ResultQueueTransferThread_0() { return &___ResultQueueTransferThread_0; }
	inline void set_ResultQueueTransferThread_0(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * value)
	{
		___ResultQueueTransferThread_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResultQueueTransferThread_0), (void*)value);
	}

	inline static int32_t get_offset_of_ResultQueueMainThread_1() { return static_cast<int32_t>(offsetof(PlayFabWebRequest_t8B559043BC6B902CA68E57AF2CF876901CD78C26_StaticFields, ___ResultQueueMainThread_1)); }
	inline Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * get_ResultQueueMainThread_1() const { return ___ResultQueueMainThread_1; }
	inline Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 ** get_address_of_ResultQueueMainThread_1() { return &___ResultQueueMainThread_1; }
	inline void set_ResultQueueMainThread_1(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * value)
	{
		___ResultQueueMainThread_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResultQueueMainThread_1), (void*)value);
	}

	inline static int32_t get_offset_of_ActiveRequests_2() { return static_cast<int32_t>(offsetof(PlayFabWebRequest_t8B559043BC6B902CA68E57AF2CF876901CD78C26_StaticFields, ___ActiveRequests_2)); }
	inline List_1_t24703A5FAC676916D88CEE11A3A4553C0670F6A8 * get_ActiveRequests_2() const { return ___ActiveRequests_2; }
	inline List_1_t24703A5FAC676916D88CEE11A3A4553C0670F6A8 ** get_address_of_ActiveRequests_2() { return &___ActiveRequests_2; }
	inline void set_ActiveRequests_2(List_1_t24703A5FAC676916D88CEE11A3A4553C0670F6A8 * value)
	{
		___ActiveRequests_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActiveRequests_2), (void*)value);
	}

	inline static int32_t get_offset_of_certValidationSet_3() { return static_cast<int32_t>(offsetof(PlayFabWebRequest_t8B559043BC6B902CA68E57AF2CF876901CD78C26_StaticFields, ___certValidationSet_3)); }
	inline bool get_certValidationSet_3() const { return ___certValidationSet_3; }
	inline bool* get_address_of_certValidationSet_3() { return &___certValidationSet_3; }
	inline void set_certValidationSet_3(bool value)
	{
		___certValidationSet_3 = value;
	}

	inline static int32_t get_offset_of__requestQueueThread_4() { return static_cast<int32_t>(offsetof(PlayFabWebRequest_t8B559043BC6B902CA68E57AF2CF876901CD78C26_StaticFields, ____requestQueueThread_4)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get__requestQueueThread_4() const { return ____requestQueueThread_4; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of__requestQueueThread_4() { return &____requestQueueThread_4; }
	inline void set__requestQueueThread_4(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		____requestQueueThread_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____requestQueueThread_4), (void*)value);
	}

	inline static int32_t get_offset_of__ThreadLock_5() { return static_cast<int32_t>(offsetof(PlayFabWebRequest_t8B559043BC6B902CA68E57AF2CF876901CD78C26_StaticFields, ____ThreadLock_5)); }
	inline RuntimeObject * get__ThreadLock_5() const { return ____ThreadLock_5; }
	inline RuntimeObject ** get_address_of__ThreadLock_5() { return &____ThreadLock_5; }
	inline void set__ThreadLock_5(RuntimeObject * value)
	{
		____ThreadLock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ThreadLock_5), (void*)value);
	}

	inline static int32_t get_offset_of_ThreadKillTimeout_6() { return static_cast<int32_t>(offsetof(PlayFabWebRequest_t8B559043BC6B902CA68E57AF2CF876901CD78C26_StaticFields, ___ThreadKillTimeout_6)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_ThreadKillTimeout_6() const { return ___ThreadKillTimeout_6; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_ThreadKillTimeout_6() { return &___ThreadKillTimeout_6; }
	inline void set_ThreadKillTimeout_6(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___ThreadKillTimeout_6 = value;
	}

	inline static int32_t get_offset_of__threadKillTime_7() { return static_cast<int32_t>(offsetof(PlayFabWebRequest_t8B559043BC6B902CA68E57AF2CF876901CD78C26_StaticFields, ____threadKillTime_7)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get__threadKillTime_7() const { return ____threadKillTime_7; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of__threadKillTime_7() { return &____threadKillTime_7; }
	inline void set__threadKillTime_7(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		____threadKillTime_7 = value;
	}

	inline static int32_t get_offset_of__isApplicationPlaying_8() { return static_cast<int32_t>(offsetof(PlayFabWebRequest_t8B559043BC6B902CA68E57AF2CF876901CD78C26_StaticFields, ____isApplicationPlaying_8)); }
	inline bool get__isApplicationPlaying_8() const { return ____isApplicationPlaying_8; }
	inline bool* get_address_of__isApplicationPlaying_8() { return &____isApplicationPlaying_8; }
	inline void set__isApplicationPlaying_8(bool value)
	{
		____isApplicationPlaying_8 = value;
	}

	inline static int32_t get_offset_of__activeCallCount_9() { return static_cast<int32_t>(offsetof(PlayFabWebRequest_t8B559043BC6B902CA68E57AF2CF876901CD78C26_StaticFields, ____activeCallCount_9)); }
	inline int32_t get__activeCallCount_9() const { return ____activeCallCount_9; }
	inline int32_t* get_address_of__activeCallCount_9() { return &____activeCallCount_9; }
	inline void set__activeCallCount_9(int32_t value)
	{
		____activeCallCount_9 = value;
	}

	inline static int32_t get_offset_of__unityVersion_10() { return static_cast<int32_t>(offsetof(PlayFabWebRequest_t8B559043BC6B902CA68E57AF2CF876901CD78C26_StaticFields, ____unityVersion_10)); }
	inline String_t* get__unityVersion_10() const { return ____unityVersion_10; }
	inline String_t** get_address_of__unityVersion_10() { return &____unityVersion_10; }
	inline void set__unityVersion_10(String_t* value)
	{
		____unityVersion_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unityVersion_10), (void*)value);
	}
};


// PlayFab.PlayFabError
struct  PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586  : public RuntimeObject
{
public:
	// System.String PlayFab.PlayFabError::ApiEndpoint
	String_t* ___ApiEndpoint_0;
	// System.Int32 PlayFab.PlayFabError::HttpCode
	int32_t ___HttpCode_1;
	// System.String PlayFab.PlayFabError::HttpStatus
	String_t* ___HttpStatus_2;
	// PlayFab.PlayFabErrorCode PlayFab.PlayFabError::Error
	int32_t ___Error_3;
	// System.String PlayFab.PlayFabError::ErrorMessage
	String_t* ___ErrorMessage_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>> PlayFab.PlayFabError::ErrorDetails
	Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * ___ErrorDetails_5;
	// System.Object PlayFab.PlayFabError::CustomData
	RuntimeObject * ___CustomData_6;

public:
	inline static int32_t get_offset_of_ApiEndpoint_0() { return static_cast<int32_t>(offsetof(PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586, ___ApiEndpoint_0)); }
	inline String_t* get_ApiEndpoint_0() const { return ___ApiEndpoint_0; }
	inline String_t** get_address_of_ApiEndpoint_0() { return &___ApiEndpoint_0; }
	inline void set_ApiEndpoint_0(String_t* value)
	{
		___ApiEndpoint_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ApiEndpoint_0), (void*)value);
	}

	inline static int32_t get_offset_of_HttpCode_1() { return static_cast<int32_t>(offsetof(PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586, ___HttpCode_1)); }
	inline int32_t get_HttpCode_1() const { return ___HttpCode_1; }
	inline int32_t* get_address_of_HttpCode_1() { return &___HttpCode_1; }
	inline void set_HttpCode_1(int32_t value)
	{
		___HttpCode_1 = value;
	}

	inline static int32_t get_offset_of_HttpStatus_2() { return static_cast<int32_t>(offsetof(PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586, ___HttpStatus_2)); }
	inline String_t* get_HttpStatus_2() const { return ___HttpStatus_2; }
	inline String_t** get_address_of_HttpStatus_2() { return &___HttpStatus_2; }
	inline void set_HttpStatus_2(String_t* value)
	{
		___HttpStatus_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HttpStatus_2), (void*)value);
	}

	inline static int32_t get_offset_of_Error_3() { return static_cast<int32_t>(offsetof(PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586, ___Error_3)); }
	inline int32_t get_Error_3() const { return ___Error_3; }
	inline int32_t* get_address_of_Error_3() { return &___Error_3; }
	inline void set_Error_3(int32_t value)
	{
		___Error_3 = value;
	}

	inline static int32_t get_offset_of_ErrorMessage_4() { return static_cast<int32_t>(offsetof(PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586, ___ErrorMessage_4)); }
	inline String_t* get_ErrorMessage_4() const { return ___ErrorMessage_4; }
	inline String_t** get_address_of_ErrorMessage_4() { return &___ErrorMessage_4; }
	inline void set_ErrorMessage_4(String_t* value)
	{
		___ErrorMessage_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorMessage_4), (void*)value);
	}

	inline static int32_t get_offset_of_ErrorDetails_5() { return static_cast<int32_t>(offsetof(PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586, ___ErrorDetails_5)); }
	inline Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * get_ErrorDetails_5() const { return ___ErrorDetails_5; }
	inline Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 ** get_address_of_ErrorDetails_5() { return &___ErrorDetails_5; }
	inline void set_ErrorDetails_5(Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * value)
	{
		___ErrorDetails_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorDetails_5), (void*)value);
	}

	inline static int32_t get_offset_of_CustomData_6() { return static_cast<int32_t>(offsetof(PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586, ___CustomData_6)); }
	inline RuntimeObject * get_CustomData_6() const { return ___CustomData_6; }
	inline RuntimeObject ** get_address_of_CustomData_6() { return &___CustomData_6; }
	inline void set_CustomData_6(RuntimeObject * value)
	{
		___CustomData_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomData_6), (void*)value);
	}
};

struct PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586_ThreadStaticFields
{
public:
	// System.Text.StringBuilder PlayFab.PlayFabError::_tempSb
	StringBuilder_t * ____tempSb_7;

public:
	inline static int32_t get_offset_of__tempSb_7() { return static_cast<int32_t>(offsetof(PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586_ThreadStaticFields, ____tempSb_7)); }
	inline StringBuilder_t * get__tempSb_7() const { return ____tempSb_7; }
	inline StringBuilder_t ** get_address_of__tempSb_7() { return &____tempSb_7; }
	inline void set__tempSb_7(StringBuilder_t * value)
	{
		____tempSb_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tempSb_7), (void*)value);
	}
};


// PlayFab.Public.PlayFabLoggerBase
struct  PlayFabLoggerBase_t770DB83E134BEB645A2D9C063DDD42DAA7C2D6CE  : public RuntimeObject
{
public:
	// System.Collections.Generic.Queue`1<System.String> PlayFab.Public.PlayFabLoggerBase::LogMessageQueue
	Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D * ___LogMessageQueue_1;
	// System.Threading.Thread PlayFab.Public.PlayFabLoggerBase::_writeLogThread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ____writeLogThread_3;
	// System.Object PlayFab.Public.PlayFabLoggerBase::_threadLock
	RuntimeObject * ____threadLock_4;
	// System.DateTime PlayFab.Public.PlayFabLoggerBase::_threadKillTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ____threadKillTime_6;
	// System.Boolean PlayFab.Public.PlayFabLoggerBase::_isApplicationPlaying
	bool ____isApplicationPlaying_7;
	// System.Int32 PlayFab.Public.PlayFabLoggerBase::_pendingLogsCount
	int32_t ____pendingLogsCount_8;
	// System.Net.IPAddress PlayFab.Public.PlayFabLoggerBase::<ip>k__BackingField
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___U3CipU3Ek__BackingField_9;
	// System.Int32 PlayFab.Public.PlayFabLoggerBase::<port>k__BackingField
	int32_t ___U3CportU3Ek__BackingField_10;
	// System.String PlayFab.Public.PlayFabLoggerBase::<url>k__BackingField
	String_t* ___U3CurlU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_LogMessageQueue_1() { return static_cast<int32_t>(offsetof(PlayFabLoggerBase_t770DB83E134BEB645A2D9C063DDD42DAA7C2D6CE, ___LogMessageQueue_1)); }
	inline Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D * get_LogMessageQueue_1() const { return ___LogMessageQueue_1; }
	inline Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D ** get_address_of_LogMessageQueue_1() { return &___LogMessageQueue_1; }
	inline void set_LogMessageQueue_1(Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D * value)
	{
		___LogMessageQueue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LogMessageQueue_1), (void*)value);
	}

	inline static int32_t get_offset_of__writeLogThread_3() { return static_cast<int32_t>(offsetof(PlayFabLoggerBase_t770DB83E134BEB645A2D9C063DDD42DAA7C2D6CE, ____writeLogThread_3)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get__writeLogThread_3() const { return ____writeLogThread_3; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of__writeLogThread_3() { return &____writeLogThread_3; }
	inline void set__writeLogThread_3(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		____writeLogThread_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____writeLogThread_3), (void*)value);
	}

	inline static int32_t get_offset_of__threadLock_4() { return static_cast<int32_t>(offsetof(PlayFabLoggerBase_t770DB83E134BEB645A2D9C063DDD42DAA7C2D6CE, ____threadLock_4)); }
	inline RuntimeObject * get__threadLock_4() const { return ____threadLock_4; }
	inline RuntimeObject ** get_address_of__threadLock_4() { return &____threadLock_4; }
	inline void set__threadLock_4(RuntimeObject * value)
	{
		____threadLock_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____threadLock_4), (void*)value);
	}

	inline static int32_t get_offset_of__threadKillTime_6() { return static_cast<int32_t>(offsetof(PlayFabLoggerBase_t770DB83E134BEB645A2D9C063DDD42DAA7C2D6CE, ____threadKillTime_6)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get__threadKillTime_6() const { return ____threadKillTime_6; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of__threadKillTime_6() { return &____threadKillTime_6; }
	inline void set__threadKillTime_6(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		____threadKillTime_6 = value;
	}

	inline static int32_t get_offset_of__isApplicationPlaying_7() { return static_cast<int32_t>(offsetof(PlayFabLoggerBase_t770DB83E134BEB645A2D9C063DDD42DAA7C2D6CE, ____isApplicationPlaying_7)); }
	inline bool get__isApplicationPlaying_7() const { return ____isApplicationPlaying_7; }
	inline bool* get_address_of__isApplicationPlaying_7() { return &____isApplicationPlaying_7; }
	inline void set__isApplicationPlaying_7(bool value)
	{
		____isApplicationPlaying_7 = value;
	}

	inline static int32_t get_offset_of__pendingLogsCount_8() { return static_cast<int32_t>(offsetof(PlayFabLoggerBase_t770DB83E134BEB645A2D9C063DDD42DAA7C2D6CE, ____pendingLogsCount_8)); }
	inline int32_t get__pendingLogsCount_8() const { return ____pendingLogsCount_8; }
	inline int32_t* get_address_of__pendingLogsCount_8() { return &____pendingLogsCount_8; }
	inline void set__pendingLogsCount_8(int32_t value)
	{
		____pendingLogsCount_8 = value;
	}

	inline static int32_t get_offset_of_U3CipU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PlayFabLoggerBase_t770DB83E134BEB645A2D9C063DDD42DAA7C2D6CE, ___U3CipU3Ek__BackingField_9)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_U3CipU3Ek__BackingField_9() const { return ___U3CipU3Ek__BackingField_9; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_U3CipU3Ek__BackingField_9() { return &___U3CipU3Ek__BackingField_9; }
	inline void set_U3CipU3Ek__BackingField_9(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___U3CipU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CipU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CportU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PlayFabLoggerBase_t770DB83E134BEB645A2D9C063DDD42DAA7C2D6CE, ___U3CportU3Ek__BackingField_10)); }
	inline int32_t get_U3CportU3Ek__BackingField_10() const { return ___U3CportU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CportU3Ek__BackingField_10() { return &___U3CportU3Ek__BackingField_10; }
	inline void set_U3CportU3Ek__BackingField_10(int32_t value)
	{
		___U3CportU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CurlU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PlayFabLoggerBase_t770DB83E134BEB645A2D9C063DDD42DAA7C2D6CE, ___U3CurlU3Ek__BackingField_11)); }
	inline String_t* get_U3CurlU3Ek__BackingField_11() const { return ___U3CurlU3Ek__BackingField_11; }
	inline String_t** get_address_of_U3CurlU3Ek__BackingField_11() { return &___U3CurlU3Ek__BackingField_11; }
	inline void set_U3CurlU3Ek__BackingField_11(String_t* value)
	{
		___U3CurlU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CurlU3Ek__BackingField_11), (void*)value);
	}
};

struct PlayFabLoggerBase_t770DB83E134BEB645A2D9C063DDD42DAA7C2D6CE_StaticFields
{
public:
	// System.Text.StringBuilder PlayFab.Public.PlayFabLoggerBase::Sb
	StringBuilder_t * ___Sb_0;
	// System.TimeSpan PlayFab.Public.PlayFabLoggerBase::_threadKillTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ____threadKillTimeout_5;

public:
	inline static int32_t get_offset_of_Sb_0() { return static_cast<int32_t>(offsetof(PlayFabLoggerBase_t770DB83E134BEB645A2D9C063DDD42DAA7C2D6CE_StaticFields, ___Sb_0)); }
	inline StringBuilder_t * get_Sb_0() const { return ___Sb_0; }
	inline StringBuilder_t ** get_address_of_Sb_0() { return &___Sb_0; }
	inline void set_Sb_0(StringBuilder_t * value)
	{
		___Sb_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Sb_0), (void*)value);
	}

	inline static int32_t get_offset_of__threadKillTimeout_5() { return static_cast<int32_t>(offsetof(PlayFabLoggerBase_t770DB83E134BEB645A2D9C063DDD42DAA7C2D6CE_StaticFields, ____threadKillTimeout_5)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get__threadKillTimeout_5() const { return ____threadKillTimeout_5; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of__threadKillTimeout_5() { return &____threadKillTimeout_5; }
	inline void set__threadKillTimeout_5(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		____threadKillTimeout_5 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Networking.DownloadHandlerBuffer
struct  DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D  : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_pinvoke : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_com : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
};

// UnityEngine.Networking.UnityWebRequest
struct  UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct  UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Networking.UploadHandlerRaw
struct  UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669  : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_pinvoke : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_com : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
};

// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// Ionic.Zlib.DeflateManager_CompressFunc
struct  CompressFunc_t59B35532A7EFBB0597CD39547BC0D0AECC998FB8  : public MulticastDelegate_t
{
public:

public:
};


// PlayFab.Events.PlayFabEvents_PlayFabErrorEvent
struct  PlayFabErrorEvent_t7DE9B8D5DAC932EE3A942A11847A2ECB94A0DA90  : public MulticastDelegate_t
{
public:

public:
};


// PlayFab.Internal.PlayFabHttp_ApiProcessErrorEvent
struct  ApiProcessErrorEvent_tDD3E2CF95D51D8D06234A16D27C8573AAD410903  : public MulticastDelegate_t
{
public:

public:
};


// PlayFab.Json.ReflectionUtils_ConstructorDelegate
struct  ConstructorDelegate_t4487226C10DA6CCAB43C4059510EFFAD5BBE6B05  : public MulticastDelegate_t
{
public:

public:
};


// PlayFab.Json.ReflectionUtils_GetDelegate
struct  GetDelegate_t9AB020979295CCB233548FEA1EE7075152F081CC  : public MulticastDelegate_t
{
public:

public:
};


// PlayFab.Json.ReflectionUtils_SetDelegate
struct  SetDelegate_t0E36BE7527973AE2CCB3FDB961AD0DCCA33F241F  : public MulticastDelegate_t
{
public:

public:
};


// PlayFabSharedSettings
struct  PlayFabSharedSettings_t5F6331E1584B71FCBC22C42E4375846778C948BB  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String PlayFabSharedSettings::TitleId
	String_t* ___TitleId_4;
	// System.String PlayFabSharedSettings::VerticalName
	String_t* ___VerticalName_5;
	// System.String PlayFabSharedSettings::ProductionEnvironmentUrl
	String_t* ___ProductionEnvironmentUrl_6;
	// PlayFab.WebRequestType PlayFabSharedSettings::RequestType
	int32_t ___RequestType_7;
	// System.String PlayFabSharedSettings::AdvertisingIdType
	String_t* ___AdvertisingIdType_8;
	// System.String PlayFabSharedSettings::AdvertisingIdValue
	String_t* ___AdvertisingIdValue_9;
	// System.Boolean PlayFabSharedSettings::DisableAdvertising
	bool ___DisableAdvertising_10;
	// System.Boolean PlayFabSharedSettings::DisableDeviceInfo
	bool ___DisableDeviceInfo_11;
	// System.Boolean PlayFabSharedSettings::DisableFocusTimeCollection
	bool ___DisableFocusTimeCollection_12;
	// System.Int32 PlayFabSharedSettings::RequestTimeout
	int32_t ___RequestTimeout_13;
	// System.Boolean PlayFabSharedSettings::RequestKeepAlive
	bool ___RequestKeepAlive_14;
	// System.Boolean PlayFabSharedSettings::CompressApiData
	bool ___CompressApiData_15;
	// PlayFab.PlayFabLogLevel PlayFabSharedSettings::LogLevel
	int32_t ___LogLevel_16;
	// System.String PlayFabSharedSettings::LoggerHost
	String_t* ___LoggerHost_17;
	// System.Int32 PlayFabSharedSettings::LoggerPort
	int32_t ___LoggerPort_18;
	// System.Boolean PlayFabSharedSettings::EnableRealTimeLogging
	bool ___EnableRealTimeLogging_19;
	// System.Int32 PlayFabSharedSettings::LogCapLimit
	int32_t ___LogCapLimit_20;

public:
	inline static int32_t get_offset_of_TitleId_4() { return static_cast<int32_t>(offsetof(PlayFabSharedSettings_t5F6331E1584B71FCBC22C42E4375846778C948BB, ___TitleId_4)); }
	inline String_t* get_TitleId_4() const { return ___TitleId_4; }
	inline String_t** get_address_of_TitleId_4() { return &___TitleId_4; }
	inline void set_TitleId_4(String_t* value)
	{
		___TitleId_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TitleId_4), (void*)value);
	}

	inline static int32_t get_offset_of_VerticalName_5() { return static_cast<int32_t>(offsetof(PlayFabSharedSettings_t5F6331E1584B71FCBC22C42E4375846778C948BB, ___VerticalName_5)); }
	inline String_t* get_VerticalName_5() const { return ___VerticalName_5; }
	inline String_t** get_address_of_VerticalName_5() { return &___VerticalName_5; }
	inline void set_VerticalName_5(String_t* value)
	{
		___VerticalName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VerticalName_5), (void*)value);
	}

	inline static int32_t get_offset_of_ProductionEnvironmentUrl_6() { return static_cast<int32_t>(offsetof(PlayFabSharedSettings_t5F6331E1584B71FCBC22C42E4375846778C948BB, ___ProductionEnvironmentUrl_6)); }
	inline String_t* get_ProductionEnvironmentUrl_6() const { return ___ProductionEnvironmentUrl_6; }
	inline String_t** get_address_of_ProductionEnvironmentUrl_6() { return &___ProductionEnvironmentUrl_6; }
	inline void set_ProductionEnvironmentUrl_6(String_t* value)
	{
		___ProductionEnvironmentUrl_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProductionEnvironmentUrl_6), (void*)value);
	}

	inline static int32_t get_offset_of_RequestType_7() { return static_cast<int32_t>(offsetof(PlayFabSharedSettings_t5F6331E1584B71FCBC22C42E4375846778C948BB, ___RequestType_7)); }
	inline int32_t get_RequestType_7() const { return ___RequestType_7; }
	inline int32_t* get_address_of_RequestType_7() { return &___RequestType_7; }
	inline void set_RequestType_7(int32_t value)
	{
		___RequestType_7 = value;
	}

	inline static int32_t get_offset_of_AdvertisingIdType_8() { return static_cast<int32_t>(offsetof(PlayFabSharedSettings_t5F6331E1584B71FCBC22C42E4375846778C948BB, ___AdvertisingIdType_8)); }
	inline String_t* get_AdvertisingIdType_8() const { return ___AdvertisingIdType_8; }
	inline String_t** get_address_of_AdvertisingIdType_8() { return &___AdvertisingIdType_8; }
	inline void set_AdvertisingIdType_8(String_t* value)
	{
		___AdvertisingIdType_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AdvertisingIdType_8), (void*)value);
	}

	inline static int32_t get_offset_of_AdvertisingIdValue_9() { return static_cast<int32_t>(offsetof(PlayFabSharedSettings_t5F6331E1584B71FCBC22C42E4375846778C948BB, ___AdvertisingIdValue_9)); }
	inline String_t* get_AdvertisingIdValue_9() const { return ___AdvertisingIdValue_9; }
	inline String_t** get_address_of_AdvertisingIdValue_9() { return &___AdvertisingIdValue_9; }
	inline void set_AdvertisingIdValue_9(String_t* value)
	{
		___AdvertisingIdValue_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AdvertisingIdValue_9), (void*)value);
	}

	inline static int32_t get_offset_of_DisableAdvertising_10() { return static_cast<int32_t>(offsetof(PlayFabSharedSettings_t5F6331E1584B71FCBC22C42E4375846778C948BB, ___DisableAdvertising_10)); }
	inline bool get_DisableAdvertising_10() const { return ___DisableAdvertising_10; }
	inline bool* get_address_of_DisableAdvertising_10() { return &___DisableAdvertising_10; }
	inline void set_DisableAdvertising_10(bool value)
	{
		___DisableAdvertising_10 = value;
	}

	inline static int32_t get_offset_of_DisableDeviceInfo_11() { return static_cast<int32_t>(offsetof(PlayFabSharedSettings_t5F6331E1584B71FCBC22C42E4375846778C948BB, ___DisableDeviceInfo_11)); }
	inline bool get_DisableDeviceInfo_11() const { return ___DisableDeviceInfo_11; }
	inline bool* get_address_of_DisableDeviceInfo_11() { return &___DisableDeviceInfo_11; }
	inline void set_DisableDeviceInfo_11(bool value)
	{
		___DisableDeviceInfo_11 = value;
	}

	inline static int32_t get_offset_of_DisableFocusTimeCollection_12() { return static_cast<int32_t>(offsetof(PlayFabSharedSettings_t5F6331E1584B71FCBC22C42E4375846778C948BB, ___DisableFocusTimeCollection_12)); }
	inline bool get_DisableFocusTimeCollection_12() const { return ___DisableFocusTimeCollection_12; }
	inline bool* get_address_of_DisableFocusTimeCollection_12() { return &___DisableFocusTimeCollection_12; }
	inline void set_DisableFocusTimeCollection_12(bool value)
	{
		___DisableFocusTimeCollection_12 = value;
	}

	inline static int32_t get_offset_of_RequestTimeout_13() { return static_cast<int32_t>(offsetof(PlayFabSharedSettings_t5F6331E1584B71FCBC22C42E4375846778C948BB, ___RequestTimeout_13)); }
	inline int32_t get_RequestTimeout_13() const { return ___RequestTimeout_13; }
	inline int32_t* get_address_of_RequestTimeout_13() { return &___RequestTimeout_13; }
	inline void set_RequestTimeout_13(int32_t value)
	{
		___RequestTimeout_13 = value;
	}

	inline static int32_t get_offset_of_RequestKeepAlive_14() { return static_cast<int32_t>(offsetof(PlayFabSharedSettings_t5F6331E1584B71FCBC22C42E4375846778C948BB, ___RequestKeepAlive_14)); }
	inline bool get_RequestKeepAlive_14() const { return ___RequestKeepAlive_14; }
	inline bool* get_address_of_RequestKeepAlive_14() { return &___RequestKeepAlive_14; }
	inline void set_RequestKeepAlive_14(bool value)
	{
		___RequestKeepAlive_14 = value;
	}

	inline static int32_t get_offset_of_CompressApiData_15() { return static_cast<int32_t>(offsetof(PlayFabSharedSettings_t5F6331E1584B71FCBC22C42E4375846778C948BB, ___CompressApiData_15)); }
	inline bool get_CompressApiData_15() const { return ___CompressApiData_15; }
	inline bool* get_address_of_CompressApiData_15() { return &___CompressApiData_15; }
	inline void set_CompressApiData_15(bool value)
	{
		___CompressApiData_15 = value;
	}

	inline static int32_t get_offset_of_LogLevel_16() { return static_cast<int32_t>(offsetof(PlayFabSharedSettings_t5F6331E1584B71FCBC22C42E4375846778C948BB, ___LogLevel_16)); }
	inline int32_t get_LogLevel_16() const { return ___LogLevel_16; }
	inline int32_t* get_address_of_LogLevel_16() { return &___LogLevel_16; }
	inline void set_LogLevel_16(int32_t value)
	{
		___LogLevel_16 = value;
	}

	inline static int32_t get_offset_of_LoggerHost_17() { return static_cast<int32_t>(offsetof(PlayFabSharedSettings_t5F6331E1584B71FCBC22C42E4375846778C948BB, ___LoggerHost_17)); }
	inline String_t* get_LoggerHost_17() const { return ___LoggerHost_17; }
	inline String_t** get_address_of_LoggerHost_17() { return &___LoggerHost_17; }
	inline void set_LoggerHost_17(String_t* value)
	{
		___LoggerHost_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LoggerHost_17), (void*)value);
	}

	inline static int32_t get_offset_of_LoggerPort_18() { return static_cast<int32_t>(offsetof(PlayFabSharedSettings_t5F6331E1584B71FCBC22C42E4375846778C948BB, ___LoggerPort_18)); }
	inline int32_t get_LoggerPort_18() const { return ___LoggerPort_18; }
	inline int32_t* get_address_of_LoggerPort_18() { return &___LoggerPort_18; }
	inline void set_LoggerPort_18(int32_t value)
	{
		___LoggerPort_18 = value;
	}

	inline static int32_t get_offset_of_EnableRealTimeLogging_19() { return static_cast<int32_t>(offsetof(PlayFabSharedSettings_t5F6331E1584B71FCBC22C42E4375846778C948BB, ___EnableRealTimeLogging_19)); }
	inline bool get_EnableRealTimeLogging_19() const { return ___EnableRealTimeLogging_19; }
	inline bool* get_address_of_EnableRealTimeLogging_19() { return &___EnableRealTimeLogging_19; }
	inline void set_EnableRealTimeLogging_19(bool value)
	{
		___EnableRealTimeLogging_19 = value;
	}

	inline static int32_t get_offset_of_LogCapLimit_20() { return static_cast<int32_t>(offsetof(PlayFabSharedSettings_t5F6331E1584B71FCBC22C42E4375846778C948BB, ___LogCapLimit_20)); }
	inline int32_t get_LogCapLimit_20() const { return ___LogCapLimit_20; }
	inline int32_t* get_address_of_LogCapLimit_20() { return &___LogCapLimit_20; }
	inline void set_LogCapLimit_20(int32_t value)
	{
		___LogCapLimit_20 = value;
	}
};


// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<PlayFab.PlayFabError>
struct  Action_1_t783DC837D7772A52296BE8080F3FE74761B96F8F  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Byte[]>
struct  Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.String>
struct  Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Application_LogCallback
struct  LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.ObjectDisposedException
struct  ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A  : public InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB
{
public:
	// System.String System.ObjectDisposedException::objectName
	String_t* ___objectName_17;

public:
	inline static int32_t get_offset_of_objectName_17() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A, ___objectName_17)); }
	inline String_t* get_objectName_17() const { return ___objectName_17; }
	inline String_t** get_address_of_objectName_17() { return &___objectName_17; }
	inline void set_objectName_17(String_t* value)
	{
		___objectName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectName_17), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// PlayFab.Internal.SingletonMonoBehaviour`1<PlayFab.Internal.PlayFabHttp>
struct  SingletonMonoBehaviour_1_tB75730A1B418BEE546BCC70FAC75FE26750214A1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean PlayFab.Internal.SingletonMonoBehaviour`1::initialized
	bool ___initialized_5;

public:
	inline static int32_t get_offset_of_initialized_5() { return static_cast<int32_t>(offsetof(SingletonMonoBehaviour_1_tB75730A1B418BEE546BCC70FAC75FE26750214A1, ___initialized_5)); }
	inline bool get_initialized_5() const { return ___initialized_5; }
	inline bool* get_address_of_initialized_5() { return &___initialized_5; }
	inline void set_initialized_5(bool value)
	{
		___initialized_5 = value;
	}
};

struct SingletonMonoBehaviour_1_tB75730A1B418BEE546BCC70FAC75FE26750214A1_StaticFields
{
public:
	// T PlayFab.Internal.SingletonMonoBehaviour`1::_instance
	PlayFabHttp_t52EDE594B062E2A18F3BAEC1D2AE6017C0093AC6 * ____instance_4;

public:
	inline static int32_t get_offset_of__instance_4() { return static_cast<int32_t>(offsetof(SingletonMonoBehaviour_1_tB75730A1B418BEE546BCC70FAC75FE26750214A1_StaticFields, ____instance_4)); }
	inline PlayFabHttp_t52EDE594B062E2A18F3BAEC1D2AE6017C0093AC6 * get__instance_4() const { return ____instance_4; }
	inline PlayFabHttp_t52EDE594B062E2A18F3BAEC1D2AE6017C0093AC6 ** get_address_of__instance_4() { return &____instance_4; }
	inline void set__instance_4(PlayFabHttp_t52EDE594B062E2A18F3BAEC1D2AE6017C0093AC6 * value)
	{
		____instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_4), (void*)value);
	}
};


// PlayFab.Internal.PlayFabHttp
struct  PlayFabHttp_t52EDE594B062E2A18F3BAEC1D2AE6017C0093AC6  : public SingletonMonoBehaviour_1_tB75730A1B418BEE546BCC70FAC75FE26750214A1
{
public:
	// System.Collections.Generic.Queue`1<System.Collections.IEnumerator> PlayFab.Internal.PlayFabHttp::_injectedCoroutines
	Queue_1_t742C51B86E137125C769B81406E5B4BE6FC6FA32 * ____injectedCoroutines_13;
	// System.Collections.Generic.Queue`1<System.Action> PlayFab.Internal.PlayFabHttp::_injectedAction
	Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * ____injectedAction_14;

public:
	inline static int32_t get_offset_of__injectedCoroutines_13() { return static_cast<int32_t>(offsetof(PlayFabHttp_t52EDE594B062E2A18F3BAEC1D2AE6017C0093AC6, ____injectedCoroutines_13)); }
	inline Queue_1_t742C51B86E137125C769B81406E5B4BE6FC6FA32 * get__injectedCoroutines_13() const { return ____injectedCoroutines_13; }
	inline Queue_1_t742C51B86E137125C769B81406E5B4BE6FC6FA32 ** get_address_of__injectedCoroutines_13() { return &____injectedCoroutines_13; }
	inline void set__injectedCoroutines_13(Queue_1_t742C51B86E137125C769B81406E5B4BE6FC6FA32 * value)
	{
		____injectedCoroutines_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____injectedCoroutines_13), (void*)value);
	}

	inline static int32_t get_offset_of__injectedAction_14() { return static_cast<int32_t>(offsetof(PlayFabHttp_t52EDE594B062E2A18F3BAEC1D2AE6017C0093AC6, ____injectedAction_14)); }
	inline Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * get__injectedAction_14() const { return ____injectedAction_14; }
	inline Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 ** get_address_of__injectedAction_14() { return &____injectedAction_14; }
	inline void set__injectedAction_14(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * value)
	{
		____injectedAction_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____injectedAction_14), (void*)value);
	}
};

struct PlayFabHttp_t52EDE594B062E2A18F3BAEC1D2AE6017C0093AC6_StaticFields
{
public:
	// System.Collections.Generic.List`1<PlayFab.Internal.CallRequestContainer> PlayFab.Internal.PlayFabHttp::_apiCallQueue
	List_1_t24703A5FAC676916D88CEE11A3A4553C0670F6A8 * ____apiCallQueue_6;
	// PlayFab.Internal.PlayFabHttp_ApiProcessingEvent`1<PlayFab.Internal.ApiProcessingEventArgs> PlayFab.Internal.PlayFabHttp::ApiProcessingEventHandler
	ApiProcessingEvent_1_t7A554E52A0EEDC705FD9AD05BB223502D86DD69D * ___ApiProcessingEventHandler_7;
	// PlayFab.Internal.PlayFabHttp_ApiProcessErrorEvent PlayFab.Internal.PlayFabHttp::ApiProcessingErrorEventHandler
	ApiProcessErrorEvent_tDD3E2CF95D51D8D06234A16D27C8573AAD410903 * ___ApiProcessingErrorEventHandler_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.Internal.PlayFabHttp::GlobalHeaderInjection
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___GlobalHeaderInjection_9;
	// PlayFab.Public.IPlayFabLogger PlayFab.Internal.PlayFabHttp::_logger
	RuntimeObject* ____logger_10;
	// PlayFab.Public.IScreenTimeTracker PlayFab.Internal.PlayFabHttp::screenTimeTracker
	RuntimeObject* ___screenTimeTracker_11;

public:
	inline static int32_t get_offset_of__apiCallQueue_6() { return static_cast<int32_t>(offsetof(PlayFabHttp_t52EDE594B062E2A18F3BAEC1D2AE6017C0093AC6_StaticFields, ____apiCallQueue_6)); }
	inline List_1_t24703A5FAC676916D88CEE11A3A4553C0670F6A8 * get__apiCallQueue_6() const { return ____apiCallQueue_6; }
	inline List_1_t24703A5FAC676916D88CEE11A3A4553C0670F6A8 ** get_address_of__apiCallQueue_6() { return &____apiCallQueue_6; }
	inline void set__apiCallQueue_6(List_1_t24703A5FAC676916D88CEE11A3A4553C0670F6A8 * value)
	{
		____apiCallQueue_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____apiCallQueue_6), (void*)value);
	}

	inline static int32_t get_offset_of_ApiProcessingEventHandler_7() { return static_cast<int32_t>(offsetof(PlayFabHttp_t52EDE594B062E2A18F3BAEC1D2AE6017C0093AC6_StaticFields, ___ApiProcessingEventHandler_7)); }
	inline ApiProcessingEvent_1_t7A554E52A0EEDC705FD9AD05BB223502D86DD69D * get_ApiProcessingEventHandler_7() const { return ___ApiProcessingEventHandler_7; }
	inline ApiProcessingEvent_1_t7A554E52A0EEDC705FD9AD05BB223502D86DD69D ** get_address_of_ApiProcessingEventHandler_7() { return &___ApiProcessingEventHandler_7; }
	inline void set_ApiProcessingEventHandler_7(ApiProcessingEvent_1_t7A554E52A0EEDC705FD9AD05BB223502D86DD69D * value)
	{
		___ApiProcessingEventHandler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ApiProcessingEventHandler_7), (void*)value);
	}

	inline static int32_t get_offset_of_ApiProcessingErrorEventHandler_8() { return static_cast<int32_t>(offsetof(PlayFabHttp_t52EDE594B062E2A18F3BAEC1D2AE6017C0093AC6_StaticFields, ___ApiProcessingErrorEventHandler_8)); }
	inline ApiProcessErrorEvent_tDD3E2CF95D51D8D06234A16D27C8573AAD410903 * get_ApiProcessingErrorEventHandler_8() const { return ___ApiProcessingErrorEventHandler_8; }
	inline ApiProcessErrorEvent_tDD3E2CF95D51D8D06234A16D27C8573AAD410903 ** get_address_of_ApiProcessingErrorEventHandler_8() { return &___ApiProcessingErrorEventHandler_8; }
	inline void set_ApiProcessingErrorEventHandler_8(ApiProcessErrorEvent_tDD3E2CF95D51D8D06234A16D27C8573AAD410903 * value)
	{
		___ApiProcessingErrorEventHandler_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ApiProcessingErrorEventHandler_8), (void*)value);
	}

	inline static int32_t get_offset_of_GlobalHeaderInjection_9() { return static_cast<int32_t>(offsetof(PlayFabHttp_t52EDE594B062E2A18F3BAEC1D2AE6017C0093AC6_StaticFields, ___GlobalHeaderInjection_9)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_GlobalHeaderInjection_9() const { return ___GlobalHeaderInjection_9; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_GlobalHeaderInjection_9() { return &___GlobalHeaderInjection_9; }
	inline void set_GlobalHeaderInjection_9(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___GlobalHeaderInjection_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GlobalHeaderInjection_9), (void*)value);
	}

	inline static int32_t get_offset_of__logger_10() { return static_cast<int32_t>(offsetof(PlayFabHttp_t52EDE594B062E2A18F3BAEC1D2AE6017C0093AC6_StaticFields, ____logger_10)); }
	inline RuntimeObject* get__logger_10() const { return ____logger_10; }
	inline RuntimeObject** get_address_of__logger_10() { return &____logger_10; }
	inline void set__logger_10(RuntimeObject* value)
	{
		____logger_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____logger_10), (void*)value);
	}

	inline static int32_t get_offset_of_screenTimeTracker_11() { return static_cast<int32_t>(offsetof(PlayFabHttp_t52EDE594B062E2A18F3BAEC1D2AE6017C0093AC6_StaticFields, ___screenTimeTracker_11)); }
	inline RuntimeObject* get_screenTimeTracker_11() const { return ___screenTimeTracker_11; }
	inline RuntimeObject** get_address_of_screenTimeTracker_11() { return &___screenTimeTracker_11; }
	inline void set_screenTimeTracker_11(RuntimeObject* value)
	{
		___screenTimeTracker_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___screenTimeTracker_11), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Ionic.Zlib.DeflateManager_Config[]
struct ConfigU5BU5D_t0FB342CEEC50F6672104901D9439FDAD8BDC1A6F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 * m_Items[1];

public:
	inline Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 Ionic.Zlib.ZlibCodec::InitializeDeflate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeDeflate_m4C369A9EE63B76AC49D84383BF49D44FB0D03A25 (ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * __this, const RuntimeMethod* method);
// System.Void Ionic.Zlib.ZlibException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibException__ctor_m0D80D4A212E71AEDE3B98ED8801A63B1FBB524C7 (ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 * __this, String_t* ___s0, const RuntimeMethod* method);
// System.Int32 Ionic.Zlib.ZlibCodec::InitializeInflate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeInflate_m2BCA471CA486BB0A4A8B2AEE7FD7E412336DA86A (ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * __this, const RuntimeMethod* method);
// System.Int32 Ionic.Zlib.ZlibCodec::InitializeInflate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeInflate_m11776A4FEF9744DFC0C0A5E36657E2302BB2C059 (ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * __this, int32_t ___windowBits0, const RuntimeMethod* method);
// System.Int32 Ionic.Zlib.ZlibCodec::InitializeInflate(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeInflate_mC343BB3077AF966B4E70A43BDAA37F42777903FC (ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * __this, int32_t ___windowBits0, bool ___expectRfc1950Header1, const RuntimeMethod* method);
// System.Void Ionic.Zlib.InflateManager::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateManager__ctor_mE7E31B2A93F2B22D0EEF5B57EC03CBDAFF469813 (InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020 * __this, bool ___expectRfc1950HeaderBytes0, const RuntimeMethod* method);
// System.Int32 Ionic.Zlib.InflateManager::Initialize(Ionic.Zlib.ZlibCodec,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_Initialize_m03829896921E5207DB06F2D61D76480D2F4D953B (InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020 * __this, ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * ___codec0, int32_t ___w1, const RuntimeMethod* method);
// System.Int32 Ionic.Zlib.InflateManager::Inflate(Ionic.Zlib.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_Inflate_m863C91C0E32DE2FE90622D6DFBBEFFDC4F049188 (InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020 * __this, int32_t ___flush0, const RuntimeMethod* method);
// System.Int32 Ionic.Zlib.InflateManager::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_End_m89EC5BC0C98F08FBA64E959EB8D7E0A2AFD7DAA2 (InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020 * __this, const RuntimeMethod* method);
// System.Int32 Ionic.Zlib.InflateManager::Sync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_Sync_mC6990B2B941A92C6751361A82C7E88942480C053 (InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020 * __this, const RuntimeMethod* method);
// System.Int32 Ionic.Zlib.ZlibCodec::_InternalInitializeDeflate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec__InternalInitializeDeflate_m4D6BB53615CA88B51F905060934F9818B21FE0C5 (ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * __this, bool ___wantRfc1950Header0, const RuntimeMethod* method);
// System.Void Ionic.Zlib.DeflateManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__ctor_m41C59B68AE06363784DD3A467AE7FE2879AB1BEE (DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * __this, const RuntimeMethod* method);
// System.Void Ionic.Zlib.DeflateManager::set_WantRfc1950HeaderBytes(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DeflateManager_set_WantRfc1950HeaderBytes_m15A21BFD5BB2F088E85B1B6A73AC3EC7532C3052_inline (DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 Ionic.Zlib.DeflateManager::Initialize(Ionic.Zlib.ZlibCodec,Ionic.Zlib.CompressionLevel,System.Int32,Ionic.Zlib.CompressionStrategy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_Initialize_m482A59B4A8027AAFFE0507C9313B366B0B842082 (DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * __this, ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * ___codec0, int32_t ___level1, int32_t ___bits2, int32_t ___compressionStrategy3, const RuntimeMethod* method);
// System.Int32 Ionic.Zlib.DeflateManager::Deflate(Ionic.Zlib.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_Deflate_mABB1C9865505D245D81E69C9F2A584C2F9797FFA (DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * __this, int32_t ___flush0, const RuntimeMethod* method);
// System.Void Ionic.Zlib.DeflateManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_Reset_m6D6A0B2C3FC182A9FF976E79B37293142DDC8B3C (DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * __this, const RuntimeMethod* method);
// System.Int32 Ionic.Zlib.DeflateManager::SetParams(Ionic.Zlib.CompressionLevel,Ionic.Zlib.CompressionStrategy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_SetParams_mE518332E7CBCB100B9103C0FD97AC86AE2152EC1 (DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * __this, int32_t ___level0, int32_t ___strategy1, const RuntimeMethod* method);
// System.Int32 Ionic.Zlib.InflateManager::SetDictionary(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_SetDictionary_m359345D9D93A61970D91A13FB34C9F8241E72DBD (InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___dictionary0, const RuntimeMethod* method);
// System.Int32 Ionic.Zlib.DeflateManager::SetDictionary(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_SetDictionary_mE041B9870EA31F4485E8152C7BBCF4D6F41778E2 (DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___dictionary0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.Boolean Ionic.Zlib.DeflateManager::get_WantRfc1950HeaderBytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeflateManager_get_WantRfc1950HeaderBytes_m01D0A60D5950C4E50E1112ECA95441FA52878895_inline (DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * __this, const RuntimeMethod* method);
// System.UInt32 Ionic.Zlib.Adler::Adler32(System.UInt32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Adler_Adler32_mA201DEB270EE25B45F1A87928DE80B9FDEDC99D4 (uint32_t ___adler0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf1, int32_t ___index2, int32_t ___len3, const RuntimeMethod* method);
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B (Exception_t * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Ionic.Zlib.ZlibStream::.ctor(System.IO.Stream,Ionic.Zlib.CompressionMode,Ionic.Zlib.CompressionLevel,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibStream__ctor_m7E47303C1A5E7DA2D475527E843887B94D901B88 (ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___mode1, int32_t ___level2, bool ___leaveOpen3, const RuntimeMethod* method);
// System.Void System.IO.Stream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_m5EB0B4BCC014E7D1F18FE0E72B2D6D0C5C13D5C4 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * __this, const RuntimeMethod* method);
// System.Void Ionic.Zlib.ZlibBaseStream::.ctor(System.IO.Stream,Ionic.Zlib.CompressionMode,Ionic.Zlib.CompressionLevel,Ionic.Zlib.ZlibStreamFlavor,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibBaseStream__ctor_m072923196D697948E547AC30B02DB3E36349047A (ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___compressionMode1, int32_t ___level2, int32_t ___flavor3, bool ___leaveOpen4, const RuntimeMethod* method);
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880 (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * __this, String_t* ___objectName0, const RuntimeMethod* method);
// System.Void System.IO.Stream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mDC5C7A9933446223A84ED106AE3E949E644FB0BE (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * __this, bool ___disposing0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * __this, const RuntimeMethod* method);
// System.Void Ionic.Zlib.ZlibStream::.ctor(System.IO.Stream,Ionic.Zlib.CompressionMode,Ionic.Zlib.CompressionLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibStream__ctor_m21B2A882022473CB098A5DFBD65418C361BBA57B (ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___mode1, int32_t ___level2, const RuntimeMethod* method);
// System.Void Ionic.Zlib.ZlibBaseStream::CompressString(System.String,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibBaseStream_CompressString_mEF3A4EFEF05225830399BD7E9F2B44D8E45383A4 (String_t* ___s0, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___compressor1, const RuntimeMethod* method);
// System.Void Ionic.Zlib.ZlibBaseStream::CompressBuffer(System.Byte[],System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibBaseStream_CompressBuffer_m4B4DFF5513C13460978D4ADD64E3E9ED61F7CCF7 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___b0, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___compressor1, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2 (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, const RuntimeMethod* method);
// System.Void Ionic.Zlib.ZlibStream::.ctor(System.IO.Stream,Ionic.Zlib.CompressionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibStream__ctor_mF9137480E8BB8B67819658511EB42A502FE3B4D0 (ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___mode1, const RuntimeMethod* method);
// System.String Ionic.Zlib.ZlibBaseStream::UncompressString(System.Byte[],System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ZlibBaseStream_UncompressString_m5492C2BD1B3C2C9784DB05A90391AAA9D0955856 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___compressed0, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___decompressor1, const RuntimeMethod* method);
// System.Byte[] Ionic.Zlib.ZlibBaseStream::UncompressBuffer(System.Byte[],System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ZlibBaseStream_UncompressBuffer_mB279630378D590BD8456C35F31BE916FEFEE34DB (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___compressed0, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___decompressor1, const RuntimeMethod* method);
// System.Void Ionic.Zlib.DeflateManager/Config::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,Ionic.Zlib.DeflateFlavor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Config__ctor_m07EB4B0B5AC83C04524842BBDA779F82D42DD844 (Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 * __this, int32_t ___goodLength0, int32_t ___maxLazy1, int32_t ___niceLength2, int32_t ___maxChainLength3, int32_t ___flavor4, const RuntimeMethod* method);
// System.Void PlayFab.Internal.PlayFabDeviceUtil::DoAttributeInstall(PlayFab.PlayFabApiSettings,PlayFab.SharedModels.IPlayFabInstanceApi)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabDeviceUtil_DoAttributeInstall_mFC6335B12DFF668DF2AD43FF9D5075C28527985D (PlayFabApiSettings_t62DC7BEDADD9C5CBEA3E3613AAF5521633496913 * ___settings0, RuntimeObject* ___instanceApi1, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Boolean PlayFab.PlayFabSettings::get_DisableFocusTimeCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayFabSettings_get_DisableFocusTimeCollection_m267D1D428AA9515756F3BF80CF197445C7603164 (const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// System.String PlayFab.PlayFabSettings::get_LoggerHost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayFabSettings_get_LoggerHost_mE06EDBB91AB25C9DF9078B821CA742AD7976E9B9 (const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallback__ctor_mB5F165ECC180A20258EF4EFF589D88FB9F9E9C57 (LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Application::add_logMessageReceivedThreaded(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_logMessageReceivedThreaded_m194F07FE09AAB0235637EB9CDB60EBB7A860B02C (LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD * ___value0, const RuntimeMethod* method);
// System.Void PlayFab.PlayFabSettings/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2F3515A74B6FFBD84A657A03B379EDCD4F068A10 (U3CU3Ec_tEA6EC5BFAD34550F7D558FE6FCF52CB5A3E8AA57 * __this, const RuntimeMethod* method);
// PlayFabSharedSettings PlayFab.PlayFabSettings::get_PlayFabSharedPrivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayFabSharedSettings_t5F6331E1584B71FCBC22C42E4375846778C948BB * PlayFabSettings_get_PlayFabSharedPrivate_m1105F6364444F152D2671C861495FFF674CA86F2 (const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_m1467508E7C27528D22989503B5A3FD71903C3CED (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___url0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9 (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774 (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_method(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_method_m603E0D94414F046DE2A60E127A715B3303F46AA7 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_inline (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8 (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22 (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void PlayFab.Internal.PlayFabUnityHttp::OnError(System.String,PlayFab.Internal.CallRequestContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabUnityHttp_OnError_mFA3974E23AA1C66CBFC8649AE238264488E39D13 (PlayFabUnityHttp_t9BEA925C264DCE78C5ADD55715644170DC16D04A * __this, String_t* ___error0, CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D * ___reqContainer1, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Byte[] UnityEngine.Networking.DownloadHandler::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DownloadHandler_get_data_m3AE551AAE6BF21279435D386E76EA7084CC037D3 (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Void Ionic.Zlib.GZipStream::.ctor(System.IO.Stream,Ionic.Zlib.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_m9A047CAFCB2A5E5149E9B51AA2476F26A4384A63 (GZipStream_tD1892FDA4711C4DDED84FD050A205322630365EA * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___mode1, bool ___leaveOpen2, const RuntimeMethod* method);
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_m0F256281F982E077C73A4C297F1301026A3C2905 (StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method);
// System.Void PlayFab.Internal.PlayFabUnityHttp::OnResponse(System.String,PlayFab.Internal.CallRequestContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabUnityHttp_OnResponse_m09AAB133DA0AF7F5C8C6DAF8118F971F4F6E63A8 (PlayFabUnityHttp_t9BEA925C264DCE78C5ADD55715644170DC16D04A * __this, String_t* ___response0, CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D * ___reqContainer1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Dispose_m8032472F6BC2EC4FEE017DE7E4C440078BC4E1C8 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void PlayFab.Internal.PlayFabUnityHttp/<SimpleCallCoroutine>d__10::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSimpleCallCoroutineU3Ed__10_U3CU3Em__Finally1_mBAFA84DF5905BBFA4EB5FC8478AEE4767862A148 (U3CSimpleCallCoroutineU3Ed__10_tE47ACDD22401ED44B679B9B64BADB4B5C51C004A * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A (String_t* ___uri0, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::Invoke(!0)
inline void Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, String_t*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void System.Action`1<System.Byte[]>::Invoke(!0)
inline void Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30 (Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Put(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Put_mA2C337337953404F65F36D8F59747F566E3266A4 (String_t* ___uri0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bodyData1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mC2ED369A4ACE53AFF2E70A38BE95EB48D68D4975 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___url0, String_t* ___method1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isNetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isNetworkError_m0126D38DA9B39159CB12F8DE0C3962A4BEEE5C03 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isHttpError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isHttpError_m23ADCBE1CF082A940EF6AA75A15051583228B616 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void PlayFab.Internal.PlayFabUnityHttp/<SimpleCallCoroutine>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSimpleCallCoroutineU3Ed__10_System_IDisposable_Dispose_mD6941740F9CCE99DA2B58B8350320B7DBEDA46AE (U3CSimpleCallCoroutineU3Ed__10_tE47ACDD22401ED44B679B9B64BADB4B5C51C004A * __this, const RuntimeMethod* method);
// System.Void PlayFab.Internal.PlayFabWebRequest::SimpleHttpsWorker(System.String,System.String,System.Byte[],System.Action`1<System.Byte[]>,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabWebRequest_SimpleHttpsWorker_m8A09E7ED55C6E8E722B70080C5C45E6B7D08C0A4 (PlayFabWebRequest_t8B559043BC6B902CA68E57AF2CF876901CD78C26 * __this, String_t* ___httpMethod0, String_t* ___fullUrl1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___payload2, Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * ___successCallback3, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___errorCallback4, const RuntimeMethod* method);
// System.Void PlayFab.Internal.PlayFabHttp::SendErrorEvent(PlayFab.SharedModels.PlayFabRequestCommon,PlayFab.PlayFabError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabHttp_SendErrorEvent_mD28899182B1CAC9171CF5B140D680EBBA8F74E03 (PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A * ___request0, PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 * ___error1, const RuntimeMethod* method);
// System.Void System.Action`1<PlayFab.PlayFabError>::Invoke(!0)
inline void Action_1_Invoke_mD271144E3B9B6C3BF8C6AD6E8E076ED05C54A276 (Action_1_t783DC837D7772A52296BE8080F3FE74761B96F8F * __this, PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t783DC837D7772A52296BE8080F3FE74761B96F8F *, PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void PlayFab.Internal.PlayFabDeviceUtil::OnPlayFabLogin(PlayFab.SharedModels.PlayFabResultCommon,PlayFab.PlayFabApiSettings,PlayFab.SharedModels.IPlayFabInstanceApi)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabDeviceUtil_OnPlayFabLogin_mF1622A757BBF5D88E6BCB6E48A642F595F3CAC4D (PlayFabResultCommon_t9DD4B71D8199989BBFB06770ED84AD5F666EF7FB * ___result0, PlayFabApiSettings_t62DC7BEDADD9C5CBEA3E3613AAF5521633496913 * ___settings1, RuntimeObject* ___instanceApi2, const RuntimeMethod* method);
// System.Void PlayFab.Internal.PlayFabHttp::SendEvent(System.String,PlayFab.SharedModels.PlayFabRequestCommon,PlayFab.SharedModels.PlayFabResultCommon,PlayFab.Internal.ApiProcessingEventType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabHttp_SendEvent_m12DF426CA1FFDB1D8FCC12A9B04A91FE5E5F91C3 (String_t* ___apiEndpoint0, PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A * ___request1, PlayFabResultCommon_t9DD4B71D8199989BBFB06770ED84AD5F666EF7FB * ___result2, int32_t ___eventType3, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA (Exception_t * ___exception0, const RuntimeMethod* method);
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConstructorInfo_Invoke_m8DF5D6F53038C7B6443EEA82D922724F39CD2906 (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters0, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters1, const RuntimeMethod* method);
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C (FieldInfo_t * __this, RuntimeObject * ___obj0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Object PlayFab.Json.PocoJsonSerializerStrategy::DeserializeObject(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PocoJsonSerializerStrategy_DeserializeObject_m0F57B3981D287E428459873F067DE2C22C6BF013 (PocoJsonSerializerStrategy_tB152DBDAF927D624432CB706707C696F4E740E5D * __this, RuntimeObject * ___value0, Type_t * ___type1, const RuntimeMethod* method);
// System.Type System.Nullable::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629 (Type_t * ___nullableType0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Type PlayFab.WsaReflectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * WsaReflectionExtensions_GetTypeInfo_m8BD30CCE2EC3FFA2142A83351E9AB2CE540066B5 (Type_t * ___type0, const RuntimeMethod* method);
// System.Object System.Enum::Parse(System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039 (Type_t * ___enumType0, String_t* ___value1, bool ___ignoreCase2, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.Boolean System.DateTime::TryParseExact(System.String,System.String[],System.IFormatProvider,System.Globalization.DateTimeStyles,System.DateTime&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_TryParseExact_m8A1F0C68B9CF7B5174E4675D11E72DA289833AD6 (String_t* ___s0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___formats1, RuntimeObject* ___provider2, int32_t ___style3, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * ___result4, const RuntimeMethod* method);
// System.Boolean System.DateTimeOffset::TryParseExact(System.String,System.String[],System.IFormatProvider,System.Globalization.DateTimeStyles,System.DateTimeOffset&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeOffset_TryParseExact_m43B7CB3D3414B1C97AF5627A711D00E901A25DAC (String_t* ___input0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___formats1, RuntimeObject* ___formatProvider2, int32_t ___styles3, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * ___result4, const RuntimeMethod* method);
// System.Boolean System.Double::TryParse(System.String,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m9152D976CDFE0B30C7E251DDD04EAD6BBD0800B0 (String_t* ___s0, double* ___result1, const RuntimeMethod* method);
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  TimeSpan_FromSeconds_m4644EABECA69BC6C07AD649C5898A8E53F4FE7B0 (double ___value0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.DateTime::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_mE44033D2750D165DED2A17A927381872EF9FC986 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String System.DateTimeOffset::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTimeOffset_ToString_m6F59F045A0B1063335C1BC88DBD80C1868B9E6AF (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Boolean PlayFab.Json.PocoJsonSerializerStrategy::TrySerializeKnownTypes(System.Object,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PocoJsonSerializerStrategy_TrySerializeKnownTypes_m67796921D29C117C58781B02AEA311BC62E2E991 (PocoJsonSerializerStrategy_tB152DBDAF927D624432CB706707C696F4E740E5D * __this, RuntimeObject * ___input0, RuntimeObject ** ___output1, const RuntimeMethod* method);
// System.Void PlayFab.Json.PocoJsonSerializerStrategy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PocoJsonSerializerStrategy__ctor_m026C1210226CAD9AEE8088DE39B9715DC3A392B3 (PocoJsonSerializerStrategy_tB152DBDAF927D624432CB706707C696F4E740E5D * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Ionic.Zlib.ZlibCodec::get_Adler32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_get_Adler32_m009B0758FCD6132BCC3AE86307D1C59C5D17D59F (ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * __this, const RuntimeMethod* method)
{
	{
		// public int Adler32 { get { return (int)_Adler32; } }
		uint32_t L_0 = __this->get__Adler32_11();
		return L_0;
	}
}
// System.Void Ionic.Zlib.ZlibCodec::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibCodec__ctor_m4DB27EE12BFDF7A7145AD3F345E48F395A3B33D7 (ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * __this, const RuntimeMethod* method)
{
	{
		// public CompressionLevel CompressLevel = CompressionLevel.Default;
		__this->set_CompressLevel_12(6);
		// public int WindowBits = ZlibConstants.WindowBitsDefault;
		__this->set_WindowBits_13(((int32_t)15));
		// public ZlibCodec() { }
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public ZlibCodec() { }
		return;
	}
}
// System.Void Ionic.Zlib.ZlibCodec::.ctor(Ionic.Zlib.CompressionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibCodec__ctor_m10046AF5EC9D8B1990AD06B5C5678C427938C7C7 (ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec__ctor_m10046AF5EC9D8B1990AD06B5C5678C427938C7C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public CompressionLevel CompressLevel = CompressionLevel.Default;
		__this->set_CompressLevel_12(6);
		// public int WindowBits = ZlibConstants.WindowBitsDefault;
		__this->set_WindowBits_13(((int32_t)15));
		// public ZlibCodec(CompressionMode mode)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// if (mode == CompressionMode.Compress)
		int32_t L_0 = ___mode0;
		if (L_0)
		{
			goto IL_002b;
		}
	}
	{
		// int rc = InitializeDeflate();
		int32_t L_1 = ZlibCodec_InitializeDeflate_m4C369A9EE63B76AC49D84383BF49D44FB0D03A25(__this, /*hidden argument*/NULL);
		// if (rc != ZlibConstants.Z_OK) throw new ZlibException("Cannot initialize for deflate.");
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		// if (rc != ZlibConstants.Z_OK) throw new ZlibException("Cannot initialize for deflate.");
		ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 * L_2 = (ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 *)il2cpp_codegen_object_new(ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069_il2cpp_TypeInfo_var);
		ZlibException__ctor_m0D80D4A212E71AEDE3B98ED8801A63B1FBB524C7(L_2, _stringLiteral11220FB36F3572638BE52ECAC48D2D2FEFDCC24E, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ZlibCodec__ctor_m10046AF5EC9D8B1990AD06B5C5678C427938C7C7_RuntimeMethod_var);
	}

IL_002b:
	{
		// else if (mode == CompressionMode.Decompress)
		int32_t L_3 = ___mode0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0042;
		}
	}
	{
		// int rc = InitializeInflate();
		int32_t L_4 = ZlibCodec_InitializeInflate_m2BCA471CA486BB0A4A8B2AEE7FD7E412336DA86A(__this, /*hidden argument*/NULL);
		// if (rc != ZlibConstants.Z_OK) throw new ZlibException("Cannot initialize for inflate.");
		if (!L_4)
		{
			goto IL_004d;
		}
	}
	{
		// if (rc != ZlibConstants.Z_OK) throw new ZlibException("Cannot initialize for inflate.");
		ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 * L_5 = (ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 *)il2cpp_codegen_object_new(ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069_il2cpp_TypeInfo_var);
		ZlibException__ctor_m0D80D4A212E71AEDE3B98ED8801A63B1FBB524C7(L_5, _stringLiteralFD05F65935228424A37C063FA2EA601FC227D69A, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ZlibCodec__ctor_m10046AF5EC9D8B1990AD06B5C5678C427938C7C7_RuntimeMethod_var);
	}

IL_0042:
	{
		// else throw new ZlibException("Invalid ZlibStreamFlavor.");
		ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 * L_6 = (ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 *)il2cpp_codegen_object_new(ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069_il2cpp_TypeInfo_var);
		ZlibException__ctor_m0D80D4A212E71AEDE3B98ED8801A63B1FBB524C7(L_6, _stringLiteral72D8EBEB6FFCC1EF2435586ABCD7FAEE5A00634B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ZlibCodec__ctor_m10046AF5EC9D8B1990AD06B5C5678C427938C7C7_RuntimeMethod_var);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Int32 Ionic.Zlib.ZlibCodec::InitializeInflate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeInflate_m2BCA471CA486BB0A4A8B2AEE7FD7E412336DA86A (ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * __this, const RuntimeMethod* method)
{
	{
		// return InitializeInflate(this.WindowBits);
		int32_t L_0 = __this->get_WindowBits_13();
		int32_t L_1 = ZlibCodec_InitializeInflate_m11776A4FEF9744DFC0C0A5E36657E2302BB2C059(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Ionic.Zlib.ZlibCodec::InitializeInflate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeInflate_m05449936409DFFAFCF508158A89F589189D3D698 (ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * __this, bool ___expectRfc1950Header0, const RuntimeMethod* method)
{
	{
		// return InitializeInflate(this.WindowBits, expectRfc1950Header);
		int32_t L_0 = __this->get_WindowBits_13();
		bool L_1 = ___expectRfc1950Header0;
		int32_t L_2 = ZlibCodec_InitializeInflate_mC343BB3077AF966B4E70A43BDAA37F42777903FC(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Ionic.Zlib.ZlibCodec::InitializeInflate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeInflate_m11776A4FEF9744DFC0C0A5E36657E2302BB2C059 (ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * __this, int32_t ___windowBits0, const RuntimeMethod* method)
{
	{
		// this.WindowBits = windowBits;
		int32_t L_0 = ___windowBits0;
		__this->set_WindowBits_13(L_0);
		// return InitializeInflate(windowBits, true);
		int32_t L_1 = ___windowBits0;
		int32_t L_2 = ZlibCodec_InitializeInflate_mC343BB3077AF966B4E70A43BDAA37F42777903FC(__this, L_1, (bool)1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Ionic.Zlib.ZlibCodec::InitializeInflate(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeInflate_mC343BB3077AF966B4E70A43BDAA37F42777903FC (ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * __this, int32_t ___windowBits0, bool ___expectRfc1950Header1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec_InitializeInflate_mC343BB3077AF966B4E70A43BDAA37F42777903FC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.WindowBits = windowBits;
		int32_t L_0 = ___windowBits0;
		__this->set_WindowBits_13(L_0);
		// if (dstate != null) throw new ZlibException("You may not call InitializeInflate() after calling InitializeDeflate().");
		DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * L_1 = __this->get_dstate_9();
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// if (dstate != null) throw new ZlibException("You may not call InitializeInflate() after calling InitializeDeflate().");
		ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 * L_2 = (ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 *)il2cpp_codegen_object_new(ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069_il2cpp_TypeInfo_var);
		ZlibException__ctor_m0D80D4A212E71AEDE3B98ED8801A63B1FBB524C7(L_2, _stringLiteral0FE5434C6E938CF30A74BC53A565C36727AA6E9E, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ZlibCodec_InitializeInflate_mC343BB3077AF966B4E70A43BDAA37F42777903FC_RuntimeMethod_var);
	}

IL_001a:
	{
		// istate = new InflateManager(expectRfc1950Header);
		bool L_3 = ___expectRfc1950Header1;
		InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020 * L_4 = (InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020 *)il2cpp_codegen_object_new(InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020_il2cpp_TypeInfo_var);
		InflateManager__ctor_mE7E31B2A93F2B22D0EEF5B57EC03CBDAFF469813(L_4, L_3, /*hidden argument*/NULL);
		__this->set_istate_10(L_4);
		// return istate.Initialize(this, windowBits);
		InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020 * L_5 = __this->get_istate_10();
		int32_t L_6 = ___windowBits0;
		NullCheck(L_5);
		int32_t L_7 = InflateManager_Initialize_m03829896921E5207DB06F2D61D76480D2F4D953B(L_5, __this, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Int32 Ionic.Zlib.ZlibCodec::Inflate(Ionic.Zlib.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_Inflate_mF5AD5FE5B5F52DF42BE47A3ACC0A5CB747BDAB77 (ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * __this, int32_t ___flush0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec_Inflate_mF5AD5FE5B5F52DF42BE47A3ACC0A5CB747BDAB77_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (istate == null)
		InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020 * L_0 = __this->get_istate_10();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ZlibException("No Inflate State!");
		ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 * L_1 = (ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 *)il2cpp_codegen_object_new(ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069_il2cpp_TypeInfo_var);
		ZlibException__ctor_m0D80D4A212E71AEDE3B98ED8801A63B1FBB524C7(L_1, _stringLiteralF0FA167A2B553EA3A482772133E47AA3C132FFA2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ZlibCodec_Inflate_mF5AD5FE5B5F52DF42BE47A3ACC0A5CB747BDAB77_RuntimeMethod_var);
	}

IL_0013:
	{
		// return istate.Inflate(flush);
		InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020 * L_2 = __this->get_istate_10();
		int32_t L_3 = ___flush0;
		NullCheck(L_2);
		int32_t L_4 = InflateManager_Inflate_m863C91C0E32DE2FE90622D6DFBBEFFDC4F049188(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 Ionic.Zlib.ZlibCodec::EndInflate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_EndInflate_mC7B25994330545D62E71FF66BD453C89716CAA31 (ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec_EndInflate_mC7B25994330545D62E71FF66BD453C89716CAA31_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (istate == null)
		InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020 * L_0 = __this->get_istate_10();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ZlibException("No Inflate State!");
		ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 * L_1 = (ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 *)il2cpp_codegen_object_new(ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069_il2cpp_TypeInfo_var);
		ZlibException__ctor_m0D80D4A212E71AEDE3B98ED8801A63B1FBB524C7(L_1, _stringLiteralF0FA167A2B553EA3A482772133E47AA3C132FFA2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ZlibCodec_EndInflate_mC7B25994330545D62E71FF66BD453C89716CAA31_RuntimeMethod_var);
	}

IL_0013:
	{
		// int ret = istate.End();
		InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020 * L_2 = __this->get_istate_10();
		NullCheck(L_2);
		int32_t L_3 = InflateManager_End_m89EC5BC0C98F08FBA64E959EB8D7E0A2AFD7DAA2(L_2, /*hidden argument*/NULL);
		// istate = null;
		__this->set_istate_10((InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020 *)NULL);
		// return ret;
		return L_3;
	}
}
// System.Int32 Ionic.Zlib.ZlibCodec::SyncInflate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_SyncInflate_mB7A8E815C5A15D854A0143C28CAFE7315FC57696 (ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec_SyncInflate_mB7A8E815C5A15D854A0143C28CAFE7315FC57696_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (istate == null)
		InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020 * L_0 = __this->get_istate_10();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ZlibException("No Inflate State!");
		ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 * L_1 = (ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 *)il2cpp_codegen_object_new(ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069_il2cpp_TypeInfo_var);
		ZlibException__ctor_m0D80D4A212E71AEDE3B98ED8801A63B1FBB524C7(L_1, _stringLiteralF0FA167A2B553EA3A482772133E47AA3C132FFA2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ZlibCodec_SyncInflate_mB7A8E815C5A15D854A0143C28CAFE7315FC57696_RuntimeMethod_var);
	}

IL_0013:
	{
		// return istate.Sync();
		InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020 * L_2 = __this->get_istate_10();
		NullCheck(L_2);
		int32_t L_3 = InflateManager_Sync_mC6990B2B941A92C6751361A82C7E88942480C053(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 Ionic.Zlib.ZlibCodec::InitializeDeflate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeDeflate_m4C369A9EE63B76AC49D84383BF49D44FB0D03A25 (ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * __this, const RuntimeMethod* method)
{
	{
		// return _InternalInitializeDeflate(true);
		int32_t L_0 = ZlibCodec__InternalInitializeDeflate_m4D6BB53615CA88B51F905060934F9818B21FE0C5(__this, (bool)1, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Ionic.Zlib.ZlibCodec::InitializeDeflate(Ionic.Zlib.CompressionLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeDeflate_mF955D26547443404AA24E9AEB107CC82731BCCC3 (ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * __this, int32_t ___level0, const RuntimeMethod* method)
{
	{
		// this.CompressLevel = level;
		int32_t L_0 = ___level0;
		__this->set_CompressLevel_12(L_0);
		// return _InternalInitializeDeflate(true);
		int32_t L_1 = ZlibCodec__InternalInitializeDeflate_m4D6BB53615CA88B51F905060934F9818B21FE0C5(__this, (bool)1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Ionic.Zlib.ZlibCodec::InitializeDeflate(Ionic.Zlib.CompressionLevel,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeDeflate_mBE14C8C51ED15C2F14A423C3E33E80433F334B8B (ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * __this, int32_t ___level0, bool ___wantRfc1950Header1, const RuntimeMethod* method)
{
	{
		// this.CompressLevel = level;
		int32_t L_0 = ___level0;
		__this->set_CompressLevel_12(L_0);
		// return _InternalInitializeDeflate(wantRfc1950Header);
		bool L_1 = ___wantRfc1950Header1;
		int32_t L_2 = ZlibCodec__InternalInitializeDeflate_m4D6BB53615CA88B51F905060934F9818B21FE0C5(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Ionic.Zlib.ZlibCodec::InitializeDeflate(Ionic.Zlib.CompressionLevel,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeDeflate_m931319C770D45B0E3A0D69527D2295AD007AE819 (ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * __this, int32_t ___level0, int32_t ___bits1, const RuntimeMethod* method)
{
	{
		// this.CompressLevel = level;
		int32_t L_0 = ___level0;
		__this->set_CompressLevel_12(L_0);
		// this.WindowBits = bits;
		int32_t L_1 = ___bits1;
		__this->set_WindowBits_13(L_1);
		// return _InternalInitializeDeflate(true);
		int32_t L_2 = ZlibCodec__InternalInitializeDeflate_m4D6BB53615CA88B51F905060934F9818B21FE0C5(__this, (bool)1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Ionic.Zlib.ZlibCodec::InitializeDeflate(Ionic.Zlib.CompressionLevel,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeDeflate_m7314F089987E73F6F412BB6C2CCF88CFDA2CE6BE (ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * __this, int32_t ___level0, int32_t ___bits1, bool ___wantRfc1950Header2, const RuntimeMethod* method)
{
	{
		// this.CompressLevel = level;
		int32_t L_0 = ___level0;
		__this->set_CompressLevel_12(L_0);
		// this.WindowBits = bits;
		int32_t L_1 = ___bits1;
		__this->set_WindowBits_13(L_1);
		// return _InternalInitializeDeflate(wantRfc1950Header);
		bool L_2 = ___wantRfc1950Header2;
		int32_t L_3 = ZlibCodec__InternalInitializeDeflate_m4D6BB53615CA88B51F905060934F9818B21FE0C5(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 Ionic.Zlib.ZlibCodec::_InternalInitializeDeflate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec__InternalInitializeDeflate_m4D6BB53615CA88B51F905060934F9818B21FE0C5 (ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * __this, bool ___wantRfc1950Header0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec__InternalInitializeDeflate_m4D6BB53615CA88B51F905060934F9818B21FE0C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (istate != null) throw new ZlibException("You may not call InitializeDeflate() after calling InitializeInflate().");
		InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020 * L_0 = __this->get_istate_10();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (istate != null) throw new ZlibException("You may not call InitializeDeflate() after calling InitializeInflate().");
		ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 * L_1 = (ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 *)il2cpp_codegen_object_new(ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069_il2cpp_TypeInfo_var);
		ZlibException__ctor_m0D80D4A212E71AEDE3B98ED8801A63B1FBB524C7(L_1, _stringLiteral9AE36592E95F2354A6676CC52CF848B11A46DBD9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ZlibCodec__InternalInitializeDeflate_m4D6BB53615CA88B51F905060934F9818B21FE0C5_RuntimeMethod_var);
	}

IL_0013:
	{
		// dstate = new DeflateManager();
		DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * L_2 = (DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 *)il2cpp_codegen_object_new(DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38_il2cpp_TypeInfo_var);
		DeflateManager__ctor_m41C59B68AE06363784DD3A467AE7FE2879AB1BEE(L_2, /*hidden argument*/NULL);
		__this->set_dstate_9(L_2);
		// dstate.WantRfc1950HeaderBytes = wantRfc1950Header;
		DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * L_3 = __this->get_dstate_9();
		bool L_4 = ___wantRfc1950Header0;
		NullCheck(L_3);
		DeflateManager_set_WantRfc1950HeaderBytes_m15A21BFD5BB2F088E85B1B6A73AC3EC7532C3052_inline(L_3, L_4, /*hidden argument*/NULL);
		// return dstate.Initialize(this, this.CompressLevel, this.WindowBits, this.Strategy);
		DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * L_5 = __this->get_dstate_9();
		int32_t L_6 = __this->get_CompressLevel_12();
		int32_t L_7 = __this->get_WindowBits_13();
		int32_t L_8 = __this->get_Strategy_14();
		NullCheck(L_5);
		int32_t L_9 = DeflateManager_Initialize_m482A59B4A8027AAFFE0507C9313B366B0B842082(L_5, __this, L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Int32 Ionic.Zlib.ZlibCodec::Deflate(Ionic.Zlib.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_Deflate_m67F5E8F9FCFB53AAF25555A08C0295AC6F2651BA (ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * __this, int32_t ___flush0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec_Deflate_m67F5E8F9FCFB53AAF25555A08C0295AC6F2651BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (dstate == null)
		DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * L_0 = __this->get_dstate_9();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ZlibException("No Deflate State!");
		ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 * L_1 = (ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 *)il2cpp_codegen_object_new(ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069_il2cpp_TypeInfo_var);
		ZlibException__ctor_m0D80D4A212E71AEDE3B98ED8801A63B1FBB524C7(L_1, _stringLiteral983DAC088DBADBDF2CEE0A7F894D264FCD8D805D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ZlibCodec_Deflate_m67F5E8F9FCFB53AAF25555A08C0295AC6F2651BA_RuntimeMethod_var);
	}

IL_0013:
	{
		// return dstate.Deflate(flush);
		DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * L_2 = __this->get_dstate_9();
		int32_t L_3 = ___flush0;
		NullCheck(L_2);
		int32_t L_4 = DeflateManager_Deflate_mABB1C9865505D245D81E69C9F2A584C2F9797FFA(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 Ionic.Zlib.ZlibCodec::EndDeflate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_EndDeflate_m370DC27D1526D5DAFAFBBDBE687E3D6410D4AF4D (ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec_EndDeflate_m370DC27D1526D5DAFAFBBDBE687E3D6410D4AF4D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (dstate == null)
		DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * L_0 = __this->get_dstate_9();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ZlibException("No Deflate State!");
		ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 * L_1 = (ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 *)il2cpp_codegen_object_new(ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069_il2cpp_TypeInfo_var);
		ZlibException__ctor_m0D80D4A212E71AEDE3B98ED8801A63B1FBB524C7(L_1, _stringLiteral983DAC088DBADBDF2CEE0A7F894D264FCD8D805D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ZlibCodec_EndDeflate_m370DC27D1526D5DAFAFBBDBE687E3D6410D4AF4D_RuntimeMethod_var);
	}

IL_0013:
	{
		// dstate = null;
		__this->set_dstate_9((DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 *)NULL);
		// return ZlibConstants.Z_OK; //ret;
		return 0;
	}
}
// System.Void Ionic.Zlib.ZlibCodec::ResetDeflate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibCodec_ResetDeflate_m8CE97F8542EC0FCDB0ABC0C3E71F84446E98B5ED (ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec_ResetDeflate_m8CE97F8542EC0FCDB0ABC0C3E71F84446E98B5ED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (dstate == null)
		DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * L_0 = __this->get_dstate_9();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ZlibException("No Deflate State!");
		ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 * L_1 = (ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 *)il2cpp_codegen_object_new(ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069_il2cpp_TypeInfo_var);
		ZlibException__ctor_m0D80D4A212E71AEDE3B98ED8801A63B1FBB524C7(L_1, _stringLiteral983DAC088DBADBDF2CEE0A7F894D264FCD8D805D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ZlibCodec_ResetDeflate_m8CE97F8542EC0FCDB0ABC0C3E71F84446E98B5ED_RuntimeMethod_var);
	}

IL_0013:
	{
		// dstate.Reset();
		DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * L_2 = __this->get_dstate_9();
		NullCheck(L_2);
		DeflateManager_Reset_m6D6A0B2C3FC182A9FF976E79B37293142DDC8B3C(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Ionic.Zlib.ZlibCodec::SetDeflateParams(Ionic.Zlib.CompressionLevel,Ionic.Zlib.CompressionStrategy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_SetDeflateParams_mEF1A99CCC3C2047CDDF339B58A346DCAFC417F81 (ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * __this, int32_t ___level0, int32_t ___strategy1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec_SetDeflateParams_mEF1A99CCC3C2047CDDF339B58A346DCAFC417F81_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (dstate == null)
		DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * L_0 = __this->get_dstate_9();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ZlibException("No Deflate State!");
		ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 * L_1 = (ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 *)il2cpp_codegen_object_new(ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069_il2cpp_TypeInfo_var);
		ZlibException__ctor_m0D80D4A212E71AEDE3B98ED8801A63B1FBB524C7(L_1, _stringLiteral983DAC088DBADBDF2CEE0A7F894D264FCD8D805D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ZlibCodec_SetDeflateParams_mEF1A99CCC3C2047CDDF339B58A346DCAFC417F81_RuntimeMethod_var);
	}

IL_0013:
	{
		// return dstate.SetParams(level, strategy);
		DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * L_2 = __this->get_dstate_9();
		int32_t L_3 = ___level0;
		int32_t L_4 = ___strategy1;
		NullCheck(L_2);
		int32_t L_5 = DeflateManager_SetParams_mE518332E7CBCB100B9103C0FD97AC86AE2152EC1(L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int32 Ionic.Zlib.ZlibCodec::SetDictionary(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_SetDictionary_m28FC1265DEA484D32F0E2E9E9F82A838A34868F8 (ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___dictionary0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec_SetDictionary_m28FC1265DEA484D32F0E2E9E9F82A838A34868F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (istate != null)
		InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020 * L_0 = __this->get_istate_10();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// return istate.SetDictionary(dictionary);
		InflateManager_t9B2D8122B6F2137C0D6D9160C93DA04585EF1020 * L_1 = __this->get_istate_10();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___dictionary0;
		NullCheck(L_1);
		int32_t L_3 = InflateManager_SetDictionary_m359345D9D93A61970D91A13FB34C9F8241E72DBD(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0015:
	{
		// if (dstate != null)
		DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * L_4 = __this->get_dstate_9();
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// return dstate.SetDictionary(dictionary);
		DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * L_5 = __this->get_dstate_9();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___dictionary0;
		NullCheck(L_5);
		int32_t L_7 = DeflateManager_SetDictionary_mE041B9870EA31F4485E8152C7BBCF4D6F41778E2(L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_002a:
	{
		// throw new ZlibException("No Inflate or Deflate state!");
		ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 * L_8 = (ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 *)il2cpp_codegen_object_new(ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069_il2cpp_TypeInfo_var);
		ZlibException__ctor_m0D80D4A212E71AEDE3B98ED8801A63B1FBB524C7(L_8, _stringLiteral0D42FA553012F7D01ECBD85D631E382744581C46, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ZlibCodec_SetDictionary_m28FC1265DEA484D32F0E2E9E9F82A838A34868F8_RuntimeMethod_var);
	}
}
// System.Void Ionic.Zlib.ZlibCodec::flush_pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibCodec_flush_pending_mA0557671025B00DC0A13A7A7E1FAEED8F80668E4 (ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec_flush_pending_mA0557671025B00DC0A13A7A7E1FAEED8F80668E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int len = dstate.pendingCount;
		DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * L_0 = __this->get_dstate_9();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_pendingCount_25();
		V_0 = L_1;
		// if (len > AvailableBytesOut)
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get_AvailableBytesOut_6();
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_001c;
		}
	}
	{
		// len = AvailableBytesOut;
		int32_t L_4 = __this->get_AvailableBytesOut_6();
		V_0 = L_4;
	}

IL_001c:
	{
		// if (len == 0)
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		// return;
		return;
	}

IL_0020:
	{
		// if (dstate.pending.Length <= dstate.nextPending ||
		//     OutputBuffer.Length <= NextOut ||
		//     dstate.pending.Length < (dstate.nextPending + len) ||
		//     OutputBuffer.Length < (NextOut + len))
		DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * L_6 = __this->get_dstate_9();
		NullCheck(L_6);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = L_6->get_pending_23();
		NullCheck(L_7);
		DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * L_8 = __this->get_dstate_9();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_nextPending_24();
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))) <= ((int32_t)L_9)))
		{
			goto IL_0078;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = __this->get_OutputBuffer_4();
		NullCheck(L_10);
		int32_t L_11 = __this->get_NextOut_5();
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))) <= ((int32_t)L_11)))
		{
			goto IL_0078;
		}
	}
	{
		DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * L_12 = __this->get_dstate_9();
		NullCheck(L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = L_12->get_pending_23();
		NullCheck(L_13);
		DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * L_14 = __this->get_dstate_9();
		NullCheck(L_14);
		int32_t L_15 = L_14->get_nextPending_24();
		int32_t L_16 = V_0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16)))))
		{
			goto IL_0078;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = __this->get_OutputBuffer_4();
		NullCheck(L_17);
		int32_t L_18 = __this->get_NextOut_5();
		int32_t L_19 = V_0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_19)))))
		{
			goto IL_00aa;
		}
	}

IL_0078:
	{
		// throw new ZlibException(String.Format("Invalid State. (pending.Length={0}, pendingCount={1})",
		//     dstate.pending.Length, dstate.pendingCount));
		DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * L_20 = __this->get_dstate_9();
		NullCheck(L_20);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = L_20->get_pending_23();
		NullCheck(L_21);
		int32_t L_22 = (((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))));
		RuntimeObject * L_23 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_22);
		DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * L_24 = __this->get_dstate_9();
		NullCheck(L_24);
		int32_t L_25 = L_24->get_pendingCount_25();
		int32_t L_26 = L_25;
		RuntimeObject * L_27 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_26);
		String_t* L_28 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral09BE1A5FDF1304B1AF66C7AA9E11F5D68F1A7A53, L_23, L_27, /*hidden argument*/NULL);
		ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 * L_29 = (ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 *)il2cpp_codegen_object_new(ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069_il2cpp_TypeInfo_var);
		ZlibException__ctor_m0D80D4A212E71AEDE3B98ED8801A63B1FBB524C7(L_29, L_28, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ZlibCodec_flush_pending_mA0557671025B00DC0A13A7A7E1FAEED8F80668E4_RuntimeMethod_var);
	}

IL_00aa:
	{
		// Array.Copy(dstate.pending, dstate.nextPending, OutputBuffer, NextOut, len);
		DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * L_30 = __this->get_dstate_9();
		NullCheck(L_30);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31 = L_30->get_pending_23();
		DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * L_32 = __this->get_dstate_9();
		NullCheck(L_32);
		int32_t L_33 = L_32->get_nextPending_24();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = __this->get_OutputBuffer_4();
		int32_t L_35 = __this->get_NextOut_5();
		int32_t L_36 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_31, L_33, (RuntimeArray *)(RuntimeArray *)L_34, L_35, L_36, /*hidden argument*/NULL);
		// NextOut             += len;
		int32_t L_37 = __this->get_NextOut_5();
		int32_t L_38 = V_0;
		__this->set_NextOut_5(((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)L_38)));
		// dstate.nextPending  += len;
		DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * L_39 = __this->get_dstate_9();
		DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * L_40 = L_39;
		NullCheck(L_40);
		int32_t L_41 = L_40->get_nextPending_24();
		int32_t L_42 = V_0;
		NullCheck(L_40);
		L_40->set_nextPending_24(((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)L_42)));
		// TotalBytesOut       += len;
		int64_t L_43 = __this->get_TotalBytesOut_7();
		int32_t L_44 = V_0;
		__this->set_TotalBytesOut_7(((int64_t)il2cpp_codegen_add((int64_t)L_43, (int64_t)(((int64_t)((int64_t)L_44))))));
		// AvailableBytesOut   -= len;
		int32_t L_45 = __this->get_AvailableBytesOut_6();
		int32_t L_46 = V_0;
		__this->set_AvailableBytesOut_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_45, (int32_t)L_46)));
		// dstate.pendingCount -= len;
		DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * L_47 = __this->get_dstate_9();
		DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * L_48 = L_47;
		NullCheck(L_48);
		int32_t L_49 = L_48->get_pendingCount_25();
		int32_t L_50 = V_0;
		NullCheck(L_48);
		L_48->set_pendingCount_25(((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)L_50)));
		// if (dstate.pendingCount == 0)
		DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * L_51 = __this->get_dstate_9();
		NullCheck(L_51);
		int32_t L_52 = L_51->get_pendingCount_25();
		if (L_52)
		{
			goto IL_013c;
		}
	}
	{
		// dstate.nextPending = 0;
		DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * L_53 = __this->get_dstate_9();
		NullCheck(L_53);
		L_53->set_nextPending_24(0);
	}

IL_013c:
	{
		// }
		return;
	}
}
// System.Int32 Ionic.Zlib.ZlibCodec::read_buf(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_read_buf_mEBA089371CAA77793B1FB87F80FC7DCC7FC01F58 (ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf0, int32_t ___start1, int32_t ___size2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec_read_buf_mEBA089371CAA77793B1FB87F80FC7DCC7FC01F58_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int len = AvailableBytesIn;
		int32_t L_0 = __this->get_AvailableBytesIn_2();
		V_0 = L_0;
		// if (len > size)
		int32_t L_1 = V_0;
		int32_t L_2 = ___size2;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_000d;
		}
	}
	{
		// len = size;
		int32_t L_3 = ___size2;
		V_0 = L_3;
	}

IL_000d:
	{
		// if (len == 0)
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_0012;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_0012:
	{
		// AvailableBytesIn -= len;
		int32_t L_5 = __this->get_AvailableBytesIn_2();
		int32_t L_6 = V_0;
		__this->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6)));
		// if (dstate.WantRfc1950HeaderBytes)
		DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * L_7 = __this->get_dstate_9();
		NullCheck(L_7);
		bool L_8 = DeflateManager_get_WantRfc1950HeaderBytes_m01D0A60D5950C4E50E1112ECA95441FA52878895_inline(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		// _Adler32 = Adler.Adler32(_Adler32, InputBuffer, NextIn, len);
		uint32_t L_9 = __this->get__Adler32_11();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = __this->get_InputBuffer_0();
		int32_t L_11 = __this->get_NextIn_1();
		int32_t L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Adler_t860D37298395E89045511F7B0CDA6ECE490C12F1_il2cpp_TypeInfo_var);
		uint32_t L_13 = Adler_Adler32_mA201DEB270EE25B45F1A87928DE80B9FDEDC99D4(L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		__this->set__Adler32_11(L_13);
	}

IL_004b:
	{
		// Array.Copy(InputBuffer, NextIn, buf, start, len);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = __this->get_InputBuffer_0();
		int32_t L_15 = __this->get_NextIn_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = ___buf0;
		int32_t L_17 = ___start1;
		int32_t L_18 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_14, L_15, (RuntimeArray *)(RuntimeArray *)L_16, L_17, L_18, /*hidden argument*/NULL);
		// NextIn += len;
		int32_t L_19 = __this->get_NextIn_1();
		int32_t L_20 = V_0;
		__this->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)L_20)));
		// TotalBytesIn += len;
		int64_t L_21 = __this->get_TotalBytesIn_3();
		int32_t L_22 = V_0;
		__this->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_21, (int64_t)(((int64_t)((int64_t)L_22))))));
		// return len;
		int32_t L_23 = V_0;
		return L_23;
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
// System.Void Ionic.Zlib.ZlibException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibException__ctor_mA10C3C2AD58584CA005A553F6C6135BF7DE68AA6 (ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibException__ctor_mA10C3C2AD58584CA005A553F6C6135BF7DE68AA6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base()
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Ionic.Zlib.ZlibException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibException__ctor_m0D80D4A212E71AEDE3B98ED8801A63B1FBB524C7 (ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibException__ctor_m0D80D4A212E71AEDE3B98ED8801A63B1FBB524C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(s)
		String_t* L_0 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_0, /*hidden argument*/NULL);
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
// System.Void Ionic.Zlib.ZlibStream::.ctor(System.IO.Stream,Ionic.Zlib.CompressionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibStream__ctor_mF9137480E8BB8B67819658511EB42A502FE3B4D0 (ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___mode1, const RuntimeMethod* method)
{
	{
		// : this(stream, mode, CompressionLevel.Default, false)
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		ZlibStream__ctor_m7E47303C1A5E7DA2D475527E843887B94D901B88(__this, L_0, L_1, 6, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Ionic.Zlib.ZlibStream::.ctor(System.IO.Stream,Ionic.Zlib.CompressionMode,Ionic.Zlib.CompressionLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibStream__ctor_m21B2A882022473CB098A5DFBD65418C361BBA57B (ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___mode1, int32_t ___level2, const RuntimeMethod* method)
{
	{
		// : this(stream, mode, level, false)
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		int32_t L_2 = ___level2;
		ZlibStream__ctor_m7E47303C1A5E7DA2D475527E843887B94D901B88(__this, L_0, L_1, L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Ionic.Zlib.ZlibStream::.ctor(System.IO.Stream,Ionic.Zlib.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibStream__ctor_mB8761E73992B0986E4028971F22EAB47F3ED8A8F (ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___mode1, bool ___leaveOpen2, const RuntimeMethod* method)
{
	{
		// : this(stream, mode, CompressionLevel.Default, leaveOpen)
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		bool L_2 = ___leaveOpen2;
		ZlibStream__ctor_m7E47303C1A5E7DA2D475527E843887B94D901B88(__this, L_0, L_1, 6, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Ionic.Zlib.ZlibStream::.ctor(System.IO.Stream,Ionic.Zlib.CompressionMode,Ionic.Zlib.CompressionLevel,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibStream__ctor_m7E47303C1A5E7DA2D475527E843887B94D901B88 (ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___mode1, int32_t ___level2, bool ___leaveOpen3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibStream__ctor_m7E47303C1A5E7DA2D475527E843887B94D901B88_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ZlibStream(System.IO.Stream stream, CompressionMode mode, CompressionLevel level, bool leaveOpen)
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_il2cpp_TypeInfo_var);
		Stream__ctor_m5EB0B4BCC014E7D1F18FE0E72B2D6D0C5C13D5C4(__this, /*hidden argument*/NULL);
		// _baseStream = new ZlibBaseStream(stream, mode, level, ZlibStreamFlavor.ZLIB, leaveOpen);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		int32_t L_2 = ___level2;
		bool L_3 = ___leaveOpen3;
		ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62 * L_4 = (ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62 *)il2cpp_codegen_object_new(ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62_il2cpp_TypeInfo_var);
		ZlibBaseStream__ctor_m072923196D697948E547AC30B02DB3E36349047A(L_4, L_0, L_1, L_2, ((int32_t)1950), L_3, /*hidden argument*/NULL);
		__this->set__baseStream_5(L_4);
		// }
		return;
	}
}
// Ionic.Zlib.FlushType Ionic.Zlib.ZlibStream::get_FlushMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibStream_get_FlushMode_m9313AF668BA46860DF62F2C5165934E1ED3F21EA (ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 * __this, const RuntimeMethod* method)
{
	{
		// get { return (this._baseStream._flushMode); }
		ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62 * L_0 = __this->get__baseStream_5();
		NullCheck(L_0);
		int32_t L_1 = L_0->get__flushMode_7();
		return L_1;
	}
}
// System.Void Ionic.Zlib.ZlibStream::set_FlushMode(Ionic.Zlib.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibStream_set_FlushMode_m8C39FFECA492B4EE3F6A3CDE7192D5265280407D (ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibStream_set_FlushMode_m8C39FFECA492B4EE3F6A3CDE7192D5265280407D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_disposed) throw new ObjectDisposedException("ZlibStream");
		bool L_0 = __this->get__disposed_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (_disposed) throw new ObjectDisposedException("ZlibStream");
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_1 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_1, _stringLiteral5E8D8498F7E1FE7ABCB662D0A1CCD0D77D0C00AC, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ZlibStream_set_FlushMode_m8C39FFECA492B4EE3F6A3CDE7192D5265280407D_RuntimeMethod_var);
	}

IL_0013:
	{
		// this._baseStream._flushMode = value;
		ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62 * L_2 = __this->get__baseStream_5();
		int32_t L_3 = ___value0;
		NullCheck(L_2);
		L_2->set__flushMode_7(L_3);
		// }
		return;
	}
}
// System.Int32 Ionic.Zlib.ZlibStream::get_BufferSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibStream_get_BufferSize_m7905154607D292A13A7368520BAFD504CFFD0D73 (ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 * __this, const RuntimeMethod* method)
{
	{
		// return this._baseStream._bufferSize;
		ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62 * L_0 = __this->get__baseStream_5();
		NullCheck(L_0);
		int32_t L_1 = L_0->get__bufferSize_13();
		return L_1;
	}
}
// System.Void Ionic.Zlib.ZlibStream::set_BufferSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibStream_set_BufferSize_m73EA9D961AF5F0211E72B1020B0BD5B534613B8F (ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibStream_set_BufferSize_m73EA9D961AF5F0211E72B1020B0BD5B534613B8F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_disposed) throw new ObjectDisposedException("ZlibStream");
		bool L_0 = __this->get__disposed_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (_disposed) throw new ObjectDisposedException("ZlibStream");
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_1 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_1, _stringLiteral5E8D8498F7E1FE7ABCB662D0A1CCD0D77D0C00AC, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ZlibStream_set_BufferSize_m73EA9D961AF5F0211E72B1020B0BD5B534613B8F_RuntimeMethod_var);
	}

IL_0013:
	{
		// if (this._baseStream._workingBuffer != null)
		ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62 * L_2 = __this->get__baseStream_5();
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = L_2->get__workingBuffer_12();
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// throw new ZlibException("The working buffer is already set.");
		ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 * L_4 = (ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 *)il2cpp_codegen_object_new(ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069_il2cpp_TypeInfo_var);
		ZlibException__ctor_m0D80D4A212E71AEDE3B98ED8801A63B1FBB524C7(L_4, _stringLiteral9A538D87C765D16B9229A517D7D588C30AF3D5AE, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ZlibStream_set_BufferSize_m73EA9D961AF5F0211E72B1020B0BD5B534613B8F_RuntimeMethod_var);
	}

IL_002b:
	{
		// if (value < ZlibConstants.WorkingBufferSizeMin)
		int32_t L_5 = ___value0;
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)1024))))
		{
			goto IL_0053;
		}
	}
	{
		// throw new ZlibException(String.Format("Don't be silly. {0} bytes?? Use a bigger buffer, at least {1}.", value, ZlibConstants.WorkingBufferSizeMin));
		int32_t L_6 = ___value0;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		int32_t L_9 = ((int32_t)1024);
		RuntimeObject * L_10 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral3301E1AE1BCA5C134551471AB287F2443E658618, L_8, L_10, /*hidden argument*/NULL);
		ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 * L_12 = (ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069 *)il2cpp_codegen_object_new(ZlibException_t217CF0EBDDEFE3D859299FF4E2658E83A9A78069_il2cpp_TypeInfo_var);
		ZlibException__ctor_m0D80D4A212E71AEDE3B98ED8801A63B1FBB524C7(L_12, L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ZlibStream_set_BufferSize_m73EA9D961AF5F0211E72B1020B0BD5B534613B8F_RuntimeMethod_var);
	}

IL_0053:
	{
		// this._baseStream._bufferSize = value;
		ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62 * L_13 = __this->get__baseStream_5();
		int32_t L_14 = ___value0;
		NullCheck(L_13);
		L_13->set__bufferSize_13(L_14);
		// }
		return;
	}
}
// System.Int64 Ionic.Zlib.ZlibStream::get_TotalIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZlibStream_get_TotalIn_m54D3735A0769C02125FC0E6872BC6E41D945BA70 (ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 * __this, const RuntimeMethod* method)
{
	{
		// get { return this._baseStream._z.TotalBytesIn; }
		ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62 * L_0 = __this->get__baseStream_5();
		NullCheck(L_0);
		ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * L_1 = L_0->get__z_5();
		NullCheck(L_1);
		int64_t L_2 = L_1->get_TotalBytesIn_3();
		return L_2;
	}
}
// System.Int64 Ionic.Zlib.ZlibStream::get_TotalOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZlibStream_get_TotalOut_m51107F08718C16FAA2332DC8ECCAD3E2274148BC (ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 * __this, const RuntimeMethod* method)
{
	{
		// get { return this._baseStream._z.TotalBytesOut; }
		ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62 * L_0 = __this->get__baseStream_5();
		NullCheck(L_0);
		ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * L_1 = L_0->get__z_5();
		NullCheck(L_1);
		int64_t L_2 = L_1->get_TotalBytesOut_7();
		return L_2;
	}
}
// System.Void Ionic.Zlib.ZlibStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibStream_Dispose_mF541B96C65E0B87EA9E6E4EE70271B282C66F6BF (ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// if (!_disposed)
			bool L_0 = __this->get__disposed_6();
			if (L_0)
			{
				goto IL_0025;
			}
		}

IL_0008:
		{
			// if (disposing && (this._baseStream != null))
			bool L_1 = ___disposing0;
			if (!L_1)
			{
				goto IL_001e;
			}
		}

IL_000b:
		{
			ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62 * L_2 = __this->get__baseStream_5();
			if (!L_2)
			{
				goto IL_001e;
			}
		}

IL_0013:
		{
			// this._baseStream.Close();
			ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62 * L_3 = __this->get__baseStream_5();
			NullCheck(L_3);
			VirtActionInvoker0::Invoke(18 /* System.Void System.IO.Stream::Close() */, L_3);
		}

IL_001e:
		{
			// _disposed = true;
			__this->set__disposed_6((bool)1);
		}

IL_0025:
		{
			// }
			IL2CPP_LEAVE(0x2F, FINALLY_0027);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0027;
	}

FINALLY_0027:
	{ // begin finally (depth: 1)
		// base.Dispose(disposing);
		bool L_4 = ___disposing0;
		Stream_Dispose_mDC5C7A9933446223A84ED106AE3E949E644FB0BE(__this, L_4, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(39)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(39)
	{
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Boolean Ionic.Zlib.ZlibStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZlibStream_get_CanRead_m10E40A43DAB3CE743788A9B1D595B288C026999F (ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibStream_get_CanRead_m10E40A43DAB3CE743788A9B1D595B288C026999F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_disposed) throw new ObjectDisposedException("ZlibStream");
		bool L_0 = __this->get__disposed_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (_disposed) throw new ObjectDisposedException("ZlibStream");
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_1 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_1, _stringLiteral5E8D8498F7E1FE7ABCB662D0A1CCD0D77D0C00AC, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ZlibStream_get_CanRead_m10E40A43DAB3CE743788A9B1D595B288C026999F_RuntimeMethod_var);
	}

IL_0013:
	{
		// return _baseStream._stream.CanRead;
		ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62 * L_2 = __this->get__baseStream_5();
		NullCheck(L_2);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_3 = L_2->get__stream_15();
		NullCheck(L_3);
		bool L_4 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_3);
		return L_4;
	}
}
// System.Boolean Ionic.Zlib.ZlibStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZlibStream_get_CanSeek_mD3DA3DE915671F5560C6E2E0A7FA5EB6E11FE008 (ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 * __this, const RuntimeMethod* method)
{
	{
		// get { return false; }
		return (bool)0;
	}
}
// System.Boolean Ionic.Zlib.ZlibStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZlibStream_get_CanWrite_m3E998D83D211E819F841435662988819C1C13653 (ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibStream_get_CanWrite_m3E998D83D211E819F841435662988819C1C13653_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_disposed) throw new ObjectDisposedException("ZlibStream");
		bool L_0 = __this->get__disposed_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (_disposed) throw new ObjectDisposedException("ZlibStream");
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_1 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_1, _stringLiteral5E8D8498F7E1FE7ABCB662D0A1CCD0D77D0C00AC, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ZlibStream_get_CanWrite_m3E998D83D211E819F841435662988819C1C13653_RuntimeMethod_var);
	}

IL_0013:
	{
		// return _baseStream._stream.CanWrite;
		ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62 * L_2 = __this->get__baseStream_5();
		NullCheck(L_2);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_3 = L_2->get__stream_15();
		NullCheck(L_3);
		bool L_4 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_3);
		return L_4;
	}
}
// System.Void Ionic.Zlib.ZlibStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibStream_Flush_mAA07BB46074C4FBF2564CD4BC5E3DE790C15E466 (ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibStream_Flush_mAA07BB46074C4FBF2564CD4BC5E3DE790C15E466_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_disposed) throw new ObjectDisposedException("ZlibStream");
		bool L_0 = __this->get__disposed_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (_disposed) throw new ObjectDisposedException("ZlibStream");
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_1 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_1, _stringLiteral5E8D8498F7E1FE7ABCB662D0A1CCD0D77D0C00AC, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ZlibStream_Flush_mAA07BB46074C4FBF2564CD4BC5E3DE790C15E466_RuntimeMethod_var);
	}

IL_0013:
	{
		// _baseStream.Flush();
		ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62 * L_2 = __this->get__baseStream_5();
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(20 /* System.Void System.IO.Stream::Flush() */, L_2);
		// }
		return;
	}
}
// System.Int64 Ionic.Zlib.ZlibStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZlibStream_get_Length_mD3BC44AA67C75B2C7902F45F701F5657B983DA38 (ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibStream_get_Length_mD3BC44AA67C75B2C7902F45F701F5657B983DA38_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { throw new NotSupportedException(); }
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ZlibStream_get_Length_mD3BC44AA67C75B2C7902F45F701F5657B983DA38_RuntimeMethod_var);
	}
}
// System.Int64 Ionic.Zlib.ZlibStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZlibStream_get_Position_mF67DC7ACF824C2F374A57ECF1ED9DA5E24C2853D (ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 * __this, const RuntimeMethod* method)
{
	{
		// if (this._baseStream._streamMode == Ionic.Zlib.ZlibBaseStream.StreamMode.Writer)
		ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62 * L_0 = __this->get__baseStream_5();
		NullCheck(L_0);
		int32_t L_1 = L_0->get__streamMode_6();
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// return this._baseStream._z.TotalBytesOut;
		ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62 * L_2 = __this->get__baseStream_5();
		NullCheck(L_2);
		ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * L_3 = L_2->get__z_5();
		NullCheck(L_3);
		int64_t L_4 = L_3->get_TotalBytesOut_7();
		return L_4;
	}

IL_001e:
	{
		// if (this._baseStream._streamMode == Ionic.Zlib.ZlibBaseStream.StreamMode.Reader)
		ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62 * L_5 = __this->get__baseStream_5();
		NullCheck(L_5);
		int32_t L_6 = L_5->get__streamMode_6();
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_003d;
		}
	}
	{
		// return this._baseStream._z.TotalBytesIn;
		ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62 * L_7 = __this->get__baseStream_5();
		NullCheck(L_7);
		ZlibCodec_tB99A629ABFD523976E5FB4B8BCC7DD0085718EA7 * L_8 = L_7->get__z_5();
		NullCheck(L_8);
		int64_t L_9 = L_8->get_TotalBytesIn_3();
		return L_9;
	}

IL_003d:
	{
		// return 0;
		return (((int64_t)((int64_t)0)));
	}
}
// System.Void Ionic.Zlib.ZlibStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibStream_set_Position_mF677AB500A47C68FC9B46FF04D8BB7C75BA44644 (ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibStream_set_Position_mF677AB500A47C68FC9B46FF04D8BB7C75BA44644_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { throw new NotSupportedException(); }
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ZlibStream_set_Position_mF677AB500A47C68FC9B46FF04D8BB7C75BA44644_RuntimeMethod_var);
	}
}
// System.Int32 Ionic.Zlib.ZlibStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibStream_Read_m1B6B90DB19018E69DDE475C3797732E11681EF41 (ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibStream_Read_m1B6B90DB19018E69DDE475C3797732E11681EF41_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_disposed) throw new ObjectDisposedException("ZlibStream");
		bool L_0 = __this->get__disposed_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (_disposed) throw new ObjectDisposedException("ZlibStream");
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_1 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_1, _stringLiteral5E8D8498F7E1FE7ABCB662D0A1CCD0D77D0C00AC, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ZlibStream_Read_m1B6B90DB19018E69DDE475C3797732E11681EF41_RuntimeMethod_var);
	}

IL_0013:
	{
		// return _baseStream.Read(buffer, offset, count);
		ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62 * L_2 = __this->get__baseStream_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___buffer0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		NullCheck(L_2);
		int32_t L_6 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(30 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Int64 Ionic.Zlib.ZlibStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZlibStream_Seek_m109467CDE5CA00E08FEC80F288541E0790669AF7 (ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 * __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibStream_Seek_m109467CDE5CA00E08FEC80F288541E0790669AF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new NotSupportedException();
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ZlibStream_Seek_m109467CDE5CA00E08FEC80F288541E0790669AF7_RuntimeMethod_var);
	}
}
// System.Void Ionic.Zlib.ZlibStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibStream_SetLength_m5C97A2002D4F681F18044EE7CE04FA90D02269EA (ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibStream_SetLength_m5C97A2002D4F681F18044EE7CE04FA90D02269EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new NotSupportedException();
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ZlibStream_SetLength_m5C97A2002D4F681F18044EE7CE04FA90D02269EA_RuntimeMethod_var);
	}
}
// System.Void Ionic.Zlib.ZlibStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibStream_Write_mAFAF2B905AF0A46250B54387993332A6DE8BBCD7 (ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibStream_Write_mAFAF2B905AF0A46250B54387993332A6DE8BBCD7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_disposed) throw new ObjectDisposedException("ZlibStream");
		bool L_0 = __this->get__disposed_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (_disposed) throw new ObjectDisposedException("ZlibStream");
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_1 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_1, _stringLiteral5E8D8498F7E1FE7ABCB662D0A1CCD0D77D0C00AC, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ZlibStream_Write_mAFAF2B905AF0A46250B54387993332A6DE8BBCD7_RuntimeMethod_var);
	}

IL_0013:
	{
		// _baseStream.Write(buffer, offset, count);
		ZlibBaseStream_t79CFD42021DF09238189A80AEE72C04656C16E62 * L_2 = __this->get__baseStream_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___buffer0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		NullCheck(L_2);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(32 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, L_4, L_5);
		// }
		return;
	}
}
// System.Byte[] Ionic.Zlib.ZlibStream::CompressString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ZlibStream_CompressString_m70BCB316D570DBF7194A4B9E879C6B245275202B (String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibStream_CompressString_m70BCB316D570DBF7194A4B9E879C6B245275202B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_0 = NULL;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * V_1 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (var ms = new MemoryStream())
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_0 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		// Stream compressor =
		//     new ZlibStream(ms, CompressionMode.Compress, CompressionLevel.BestCompression);
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_1 = V_0;
		ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 * L_2 = (ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 *)il2cpp_codegen_object_new(ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076_il2cpp_TypeInfo_var);
		ZlibStream__ctor_m21B2A882022473CB098A5DFBD65418C361BBA57B(L_2, L_1, 0, ((int32_t)9), /*hidden argument*/NULL);
		V_1 = L_2;
		// ZlibBaseStream.CompressString(s, compressor);
		String_t* L_3 = ___s0;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_4 = V_1;
		ZlibBaseStream_CompressString_mEF3A4EFEF05225830399BD7E9F2B44D8E45383A4(L_3, L_4, /*hidden argument*/NULL);
		// return ms.ToArray();
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_5 = V_0;
		NullCheck(L_5);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(37 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_5);
		V_2 = L_6;
		IL2CPP_LEAVE(0x2A, FINALLY_0020);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0020;
	}

FINALLY_0020:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_7 = V_0;
			if (!L_7)
			{
				goto IL_0029;
			}
		}

IL_0023:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_8);
		}

IL_0029:
		{
			IL2CPP_END_FINALLY(32)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(32)
	{
		IL2CPP_JUMP_TBL(0x2A, IL_002a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002a:
	{
		// }
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_2;
		return L_9;
	}
}
// System.Byte[] Ionic.Zlib.ZlibStream::CompressBuffer(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ZlibStream_CompressBuffer_m9BA1FADDC9F5D9F6F86B07DE0C3DCBB935D0F767 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___b0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibStream_CompressBuffer_m9BA1FADDC9F5D9F6F86B07DE0C3DCBB935D0F767_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_0 = NULL;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * V_1 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (var ms = new MemoryStream())
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_0 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		// Stream compressor =
		//     new ZlibStream( ms, CompressionMode.Compress, CompressionLevel.BestCompression );
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_1 = V_0;
		ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 * L_2 = (ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 *)il2cpp_codegen_object_new(ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076_il2cpp_TypeInfo_var);
		ZlibStream__ctor_m21B2A882022473CB098A5DFBD65418C361BBA57B(L_2, L_1, 0, ((int32_t)9), /*hidden argument*/NULL);
		V_1 = L_2;
		// ZlibBaseStream.CompressBuffer(b, compressor);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___b0;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_4 = V_1;
		ZlibBaseStream_CompressBuffer_m4B4DFF5513C13460978D4ADD64E3E9ED61F7CCF7(L_3, L_4, /*hidden argument*/NULL);
		// return ms.ToArray();
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_5 = V_0;
		NullCheck(L_5);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(37 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_5);
		V_2 = L_6;
		IL2CPP_LEAVE(0x2A, FINALLY_0020);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0020;
	}

FINALLY_0020:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_7 = V_0;
			if (!L_7)
			{
				goto IL_0029;
			}
		}

IL_0023:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_8);
		}

IL_0029:
		{
			IL2CPP_END_FINALLY(32)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(32)
	{
		IL2CPP_JUMP_TBL(0x2A, IL_002a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002a:
	{
		// }
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_2;
		return L_9;
	}
}
// System.String Ionic.Zlib.ZlibStream::UncompressString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ZlibStream_UncompressString_m589239555D85284365A7E9DF57006698CB947D25 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___compressed0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibStream_UncompressString_m589239555D85284365A7E9DF57006698CB947D25_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_0 = NULL;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * V_1 = NULL;
	String_t* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (var input = new MemoryStream(compressed))
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___compressed0;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_1 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		// Stream decompressor =
		//     new ZlibStream(input, CompressionMode.Decompress);
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_2 = V_0;
		ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 * L_3 = (ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 *)il2cpp_codegen_object_new(ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076_il2cpp_TypeInfo_var);
		ZlibStream__ctor_mF9137480E8BB8B67819658511EB42A502FE3B4D0(L_3, L_2, 1, /*hidden argument*/NULL);
		V_1 = L_3;
		// return ZlibBaseStream.UncompressString(compressed, decompressor);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___compressed0;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_5 = V_1;
		String_t* L_6 = ZlibBaseStream_UncompressString_m5492C2BD1B3C2C9784DB05A90391AAA9D0955856(L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		IL2CPP_LEAVE(0x23, FINALLY_0019);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0019;
	}

FINALLY_0019:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_7 = V_0;
			if (!L_7)
			{
				goto IL_0022;
			}
		}

IL_001c:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_8);
		}

IL_0022:
		{
			IL2CPP_END_FINALLY(25)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(25)
	{
		IL2CPP_JUMP_TBL(0x23, IL_0023)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0023:
	{
		// }
		String_t* L_9 = V_2;
		return L_9;
	}
}
// System.Byte[] Ionic.Zlib.ZlibStream::UncompressBuffer(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ZlibStream_UncompressBuffer_m19A8834A76DDA49AE1EE7F62A53D28A51D129FA8 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___compressed0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibStream_UncompressBuffer_m19A8834A76DDA49AE1EE7F62A53D28A51D129FA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_0 = NULL;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * V_1 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (var input = new MemoryStream(compressed))
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___compressed0;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_1 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		// Stream decompressor =
		//     new ZlibStream( input, CompressionMode.Decompress );
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_2 = V_0;
		ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 * L_3 = (ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076 *)il2cpp_codegen_object_new(ZlibStream_t19672AFEF595F10022C65540E1543DFC7ED61076_il2cpp_TypeInfo_var);
		ZlibStream__ctor_mF9137480E8BB8B67819658511EB42A502FE3B4D0(L_3, L_2, 1, /*hidden argument*/NULL);
		V_1 = L_3;
		// return ZlibBaseStream.UncompressBuffer(compressed, decompressor);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___compressed0;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_5 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ZlibBaseStream_UncompressBuffer_mB279630378D590BD8456C35F31BE916FEFEE34DB(L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		IL2CPP_LEAVE(0x23, FINALLY_0019);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0019;
	}

FINALLY_0019:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_7 = V_0;
			if (!L_7)
			{
				goto IL_0022;
			}
		}

IL_001c:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_8);
		}

IL_0022:
		{
			IL2CPP_END_FINALLY(25)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(25)
	{
		IL2CPP_JUMP_TBL(0x23, IL_0023)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0023:
	{
		// }
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_2;
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
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_CompressFunc_t59B35532A7EFBB0597CD39547BC0D0AECC998FB8 (CompressFunc_t59B35532A7EFBB0597CD39547BC0D0AECC998FB8 * __this, int32_t ___flush0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___flush0);

	return returnValue;
}
// System.Void Ionic.Zlib.DeflateManager_CompressFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressFunc__ctor_mDC92AEEA42AF4760E5E640B0B5DCE3A0A84B579B (CompressFunc_t59B35532A7EFBB0597CD39547BC0D0AECC998FB8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Ionic.Zlib.BlockState Ionic.Zlib.DeflateManager_CompressFunc::Invoke(Ionic.Zlib.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompressFunc_Invoke_mEA048936526915503AD62BE9521CEF0FDFBDCDF1 (CompressFunc_t59B35532A7EFBB0597CD39547BC0D0AECC998FB8 * __this, int32_t ___flush0, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef int32_t (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___flush0, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___flush0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef int32_t (*FunctionPointerType) (int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___flush0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___flush0);
					else
						result = GenericVirtFuncInvoker1< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___flush0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___flush0);
					else
						result = VirtFuncInvoker1< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___flush0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___flush0) - 1), targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___flush0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Ionic.Zlib.DeflateManager_CompressFunc::BeginInvoke(Ionic.Zlib.FlushType,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompressFunc_BeginInvoke_mD1BB72AA88CDE92A01D060367898CCB1DE7694A5 (CompressFunc_t59B35532A7EFBB0597CD39547BC0D0AECC998FB8 * __this, int32_t ___flush0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CompressFunc_BeginInvoke_mD1BB72AA88CDE92A01D060367898CCB1DE7694A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(FlushType_tE34F47FCFE2F372FBF64FC21EF23825DBBEDACCA_il2cpp_TypeInfo_var, &___flush0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// Ionic.Zlib.BlockState Ionic.Zlib.DeflateManager_CompressFunc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompressFunc_EndInvoke_m8FF400236E1AAE803E4E96E12C6125E9AA4C07A9 (CompressFunc_t59B35532A7EFBB0597CD39547BC0D0AECC998FB8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
// System.Void Ionic.Zlib.DeflateManager_Config::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,Ionic.Zlib.DeflateFlavor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Config__ctor_m07EB4B0B5AC83C04524842BBDA779F82D42DD844 (Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 * __this, int32_t ___goodLength0, int32_t ___maxLazy1, int32_t ___niceLength2, int32_t ___maxChainLength3, int32_t ___flavor4, const RuntimeMethod* method)
{
	{
		// private Config(int goodLength, int maxLazy, int niceLength, int maxChainLength, DeflateFlavor flavor)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.GoodLength = goodLength;
		int32_t L_0 = ___goodLength0;
		__this->set_GoodLength_0(L_0);
		// this.MaxLazy = maxLazy;
		int32_t L_1 = ___maxLazy1;
		__this->set_MaxLazy_1(L_1);
		// this.NiceLength = niceLength;
		int32_t L_2 = ___niceLength2;
		__this->set_NiceLength_2(L_2);
		// this.MaxChainLength = maxChainLength;
		int32_t L_3 = ___maxChainLength3;
		__this->set_MaxChainLength_3(L_3);
		// this.Flavor = flavor;
		int32_t L_4 = ___flavor4;
		__this->set_Flavor_4(L_4);
		// }
		return;
	}
}
// Ionic.Zlib.DeflateManager_Config Ionic.Zlib.DeflateManager_Config::Lookup(Ionic.Zlib.CompressionLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 * Config_Lookup_mA55A53EAA68EA1523738F879E38D475B32327F4A (int32_t ___level0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Config_Lookup_mA55A53EAA68EA1523738F879E38D475B32327F4A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Table[(int)level];
		IL2CPP_RUNTIME_CLASS_INIT(Config_t4E6F95E1778498BE0378D1749D94BC05EE856948_il2cpp_TypeInfo_var);
		ConfigU5BU5D_t0FB342CEEC50F6672104901D9439FDAD8BDC1A6F* L_0 = ((Config_t4E6F95E1778498BE0378D1749D94BC05EE856948_StaticFields*)il2cpp_codegen_static_fields_for(Config_t4E6F95E1778498BE0378D1749D94BC05EE856948_il2cpp_TypeInfo_var))->get_Table_5();
		int32_t L_1 = ___level0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Void Ionic.Zlib.DeflateManager_Config::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Config__cctor_m9BC7C4B4F4DB19519FD846B2D7BA0EBB0C162654 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Config__cctor_m9BC7C4B4F4DB19519FD846B2D7BA0EBB0C162654_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Table = new Config[] {
		//     new Config(0, 0, 0, 0, DeflateFlavor.Store),
		//     new Config(4, 4, 8, 4, DeflateFlavor.Fast),
		//     new Config(4, 5, 16, 8, DeflateFlavor.Fast),
		//     new Config(4, 6, 32, 32, DeflateFlavor.Fast),
		// 
		//     new Config(4, 4, 16, 16, DeflateFlavor.Slow),
		//     new Config(8, 16, 32, 32, DeflateFlavor.Slow),
		//     new Config(8, 16, 128, 128, DeflateFlavor.Slow),
		//     new Config(8, 32, 128, 256, DeflateFlavor.Slow),
		//     new Config(32, 128, 258, 1024, DeflateFlavor.Slow),
		//     new Config(32, 258, 258, 4096, DeflateFlavor.Slow),
		// };
		ConfigU5BU5D_t0FB342CEEC50F6672104901D9439FDAD8BDC1A6F* L_0 = (ConfigU5BU5D_t0FB342CEEC50F6672104901D9439FDAD8BDC1A6F*)(ConfigU5BU5D_t0FB342CEEC50F6672104901D9439FDAD8BDC1A6F*)SZArrayNew(ConfigU5BU5D_t0FB342CEEC50F6672104901D9439FDAD8BDC1A6F_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		ConfigU5BU5D_t0FB342CEEC50F6672104901D9439FDAD8BDC1A6F* L_1 = L_0;
		Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 * L_2 = (Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 *)il2cpp_codegen_object_new(Config_t4E6F95E1778498BE0378D1749D94BC05EE856948_il2cpp_TypeInfo_var);
		Config__ctor_m07EB4B0B5AC83C04524842BBDA779F82D42DD844(L_2, 0, 0, 0, 0, 0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 *)L_2);
		ConfigU5BU5D_t0FB342CEEC50F6672104901D9439FDAD8BDC1A6F* L_3 = L_1;
		Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 * L_4 = (Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 *)il2cpp_codegen_object_new(Config_t4E6F95E1778498BE0378D1749D94BC05EE856948_il2cpp_TypeInfo_var);
		Config__ctor_m07EB4B0B5AC83C04524842BBDA779F82D42DD844(L_4, 4, 4, 8, 4, 1, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 *)L_4);
		ConfigU5BU5D_t0FB342CEEC50F6672104901D9439FDAD8BDC1A6F* L_5 = L_3;
		Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 * L_6 = (Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 *)il2cpp_codegen_object_new(Config_t4E6F95E1778498BE0378D1749D94BC05EE856948_il2cpp_TypeInfo_var);
		Config__ctor_m07EB4B0B5AC83C04524842BBDA779F82D42DD844(L_6, 4, 5, ((int32_t)16), 8, 1, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 *)L_6);
		ConfigU5BU5D_t0FB342CEEC50F6672104901D9439FDAD8BDC1A6F* L_7 = L_5;
		Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 * L_8 = (Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 *)il2cpp_codegen_object_new(Config_t4E6F95E1778498BE0378D1749D94BC05EE856948_il2cpp_TypeInfo_var);
		Config__ctor_m07EB4B0B5AC83C04524842BBDA779F82D42DD844(L_8, 4, 6, ((int32_t)32), ((int32_t)32), 1, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 *)L_8);
		ConfigU5BU5D_t0FB342CEEC50F6672104901D9439FDAD8BDC1A6F* L_9 = L_7;
		Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 * L_10 = (Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 *)il2cpp_codegen_object_new(Config_t4E6F95E1778498BE0378D1749D94BC05EE856948_il2cpp_TypeInfo_var);
		Config__ctor_m07EB4B0B5AC83C04524842BBDA779F82D42DD844(L_10, 4, 4, ((int32_t)16), ((int32_t)16), 2, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 *)L_10);
		ConfigU5BU5D_t0FB342CEEC50F6672104901D9439FDAD8BDC1A6F* L_11 = L_9;
		Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 * L_12 = (Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 *)il2cpp_codegen_object_new(Config_t4E6F95E1778498BE0378D1749D94BC05EE856948_il2cpp_TypeInfo_var);
		Config__ctor_m07EB4B0B5AC83C04524842BBDA779F82D42DD844(L_12, 8, ((int32_t)16), ((int32_t)32), ((int32_t)32), 2, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 *)L_12);
		ConfigU5BU5D_t0FB342CEEC50F6672104901D9439FDAD8BDC1A6F* L_13 = L_11;
		Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 * L_14 = (Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 *)il2cpp_codegen_object_new(Config_t4E6F95E1778498BE0378D1749D94BC05EE856948_il2cpp_TypeInfo_var);
		Config__ctor_m07EB4B0B5AC83C04524842BBDA779F82D42DD844(L_14, 8, ((int32_t)16), ((int32_t)128), ((int32_t)128), 2, /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 *)L_14);
		ConfigU5BU5D_t0FB342CEEC50F6672104901D9439FDAD8BDC1A6F* L_15 = L_13;
		Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 * L_16 = (Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 *)il2cpp_codegen_object_new(Config_t4E6F95E1778498BE0378D1749D94BC05EE856948_il2cpp_TypeInfo_var);
		Config__ctor_m07EB4B0B5AC83C04524842BBDA779F82D42DD844(L_16, 8, ((int32_t)32), ((int32_t)128), ((int32_t)256), 2, /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 *)L_16);
		ConfigU5BU5D_t0FB342CEEC50F6672104901D9439FDAD8BDC1A6F* L_17 = L_15;
		Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 * L_18 = (Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 *)il2cpp_codegen_object_new(Config_t4E6F95E1778498BE0378D1749D94BC05EE856948_il2cpp_TypeInfo_var);
		Config__ctor_m07EB4B0B5AC83C04524842BBDA779F82D42DD844(L_18, ((int32_t)32), ((int32_t)128), ((int32_t)258), ((int32_t)1024), 2, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 *)L_18);
		ConfigU5BU5D_t0FB342CEEC50F6672104901D9439FDAD8BDC1A6F* L_19 = L_17;
		Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 * L_20 = (Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 *)il2cpp_codegen_object_new(Config_t4E6F95E1778498BE0378D1749D94BC05EE856948_il2cpp_TypeInfo_var);
		Config__ctor_m07EB4B0B5AC83C04524842BBDA779F82D42DD844(L_20, ((int32_t)32), ((int32_t)258), ((int32_t)258), ((int32_t)4096), 2, /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (Config_t4E6F95E1778498BE0378D1749D94BC05EE856948 *)L_20);
		((Config_t4E6F95E1778498BE0378D1749D94BC05EE856948_StaticFields*)il2cpp_codegen_static_fields_for(Config_t4E6F95E1778498BE0378D1749D94BC05EE856948_il2cpp_TypeInfo_var))->set_Table_5(L_19);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayFab.Internal.PlayFabDeviceUtil_<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m8A1B5DAA83B81A5E415FB78160FAFC27D69A6DFA (U3CU3Ec__DisplayClass9_0_t21572621033F5BAC55B2E578DEC70FE634137C18 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayFab.Internal.PlayFabDeviceUtil_<>c__DisplayClass9_0::<GetAdvertIdFromUnity>b__0(System.String,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CGetAdvertIdFromUnityU3Eb__0_mFA307F463E555F144F7FFBDD1FF068221BA1EC59 (U3CU3Ec__DisplayClass9_0_t21572621033F5BAC55B2E578DEC70FE634137C18 * __this, String_t* ___advertisingId0, bool ___trackingEnabled1, String_t* ___error2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass9_0_U3CGetAdvertIdFromUnityU3Eb__0_mFA307F463E555F144F7FFBDD1FF068221BA1EC59_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// settings.DisableAdvertising = !trackingEnabled;
		PlayFabApiSettings_t62DC7BEDADD9C5CBEA3E3613AAF5521633496913 * L_0 = __this->get_settings_0();
		bool L_1 = ___trackingEnabled1;
		NullCheck(L_0);
		VirtActionInvoker1< bool >::Invoke(16 /* System.Void PlayFab.PlayFabApiSettings::set_DisableAdvertising(System.Boolean) */, L_0, (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0));
		// if (!trackingEnabled)
		bool L_2 = ___trackingEnabled1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		return;
	}

IL_0013:
	{
		// settings.AdvertisingIdType = PlayFabSettings.AD_TYPE_IDFA;
		PlayFabApiSettings_t62DC7BEDADD9C5CBEA3E3613AAF5521633496913 * L_3 = __this->get_settings_0();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void PlayFab.PlayFabApiSettings::set_AdvertisingIdType(System.String) */, L_3, _stringLiteralE1686A95CCC23DC313964E1B08D4D364C468214D);
		// settings.AdvertisingIdValue = advertisingId;
		PlayFabApiSettings_t62DC7BEDADD9C5CBEA3E3613AAF5521633496913 * L_4 = __this->get_settings_0();
		String_t* L_5 = ___advertisingId0;
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void PlayFab.PlayFabApiSettings::set_AdvertisingIdValue(System.String) */, L_4, L_5);
		// DoAttributeInstall(settings, instanceApi);
		PlayFabApiSettings_t62DC7BEDADD9C5CBEA3E3613AAF5521633496913 * L_6 = __this->get_settings_0();
		RuntimeObject* L_7 = __this->get_instanceApi_1();
		PlayFabDeviceUtil_DoAttributeInstall_mFC6335B12DFF668DF2AD43FF9D5075C28527985D(L_6, L_7, /*hidden argument*/NULL);
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
// System.Void PlayFab.Events.PlayFabEvents_PlayFabErrorEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabErrorEvent__ctor_mE79E0899361AF892D558A07516BAF9FCA1D83978 (PlayFabErrorEvent_t7DE9B8D5DAC932EE3A942A11847A2ECB94A0DA90 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void PlayFab.Events.PlayFabEvents_PlayFabErrorEvent::Invoke(PlayFab.SharedModels.PlayFabRequestCommon,PlayFab.PlayFabError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabErrorEvent_Invoke_m9286B8860B560785B241D3A51E3529461729324A (PlayFabErrorEvent_t7DE9B8D5DAC932EE3A942A11847A2ECB94A0DA90 * __this, PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A * ___request0, PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 * ___error1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A *, PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___request0, ___error1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A *, PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___request0, ___error1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 * >::Invoke(targetMethod, ___request0, ___error1);
					else
						GenericVirtActionInvoker1< PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 * >::Invoke(targetMethod, ___request0, ___error1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___request0, ___error1);
					else
						VirtActionInvoker1< PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___request0, ___error1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___error1) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A *, PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___request0, ___error1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A *, PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___request0, ___error1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A *, PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 * >::Invoke(targetMethod, targetThis, ___request0, ___error1);
					else
						GenericVirtActionInvoker2< PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A *, PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 * >::Invoke(targetMethod, targetThis, ___request0, ___error1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A *, PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___request0, ___error1);
					else
						VirtActionInvoker2< PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A *, PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___request0, ___error1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___request0) - 1), ___error1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A *, PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___request0, ___error1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult PlayFab.Events.PlayFabEvents_PlayFabErrorEvent::BeginInvoke(PlayFab.SharedModels.PlayFabRequestCommon,PlayFab.PlayFabError,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayFabErrorEvent_BeginInvoke_m16E3FB72ED6B7587DD076EF297EB6D2496E0945E (PlayFabErrorEvent_t7DE9B8D5DAC932EE3A942A11847A2ECB94A0DA90 * __this, PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A * ___request0, PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 * ___error1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___request0;
	__d_args[1] = ___error1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void PlayFab.Events.PlayFabEvents_PlayFabErrorEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabErrorEvent_EndInvoke_m7877FBC1004B74067C681D8C6CB1048E5E12A594 (PlayFabErrorEvent_t7DE9B8D5DAC932EE3A942A11847A2ECB94A0DA90 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayFab.Internal.PlayFabHttp_<SendScreenTimeEvents>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendScreenTimeEventsU3Ed__17__ctor_m6AD3D25CF077445FED2E2FC6373BB0AFE41194EC (U3CSendScreenTimeEventsU3Ed__17_t3042A3544A01ED5C832A82C99F10D539F893FDD4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PlayFab.Internal.PlayFabHttp_<SendScreenTimeEvents>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendScreenTimeEventsU3Ed__17_System_IDisposable_Dispose_m94B22931376B902900616421B9933097066F7E02 (U3CSendScreenTimeEventsU3Ed__17_t3042A3544A01ED5C832A82C99F10D539F893FDD4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PlayFab.Internal.PlayFabHttp_<SendScreenTimeEvents>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSendScreenTimeEventsU3Ed__17_MoveNext_m28061F18C14BC5554FE39A384C23AC102C0F2656 (U3CSendScreenTimeEventsU3Ed__17_t3042A3544A01ED5C832A82C99F10D539F893FDD4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSendScreenTimeEventsU3Ed__17_MoveNext_m28061F18C14BC5554FE39A384C23AC102C0F2656_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// WaitForSeconds delay = new WaitForSeconds(secondsBetweenBatches);
		float L_3 = __this->get_secondsBetweenBatches_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CdelayU3E5__2_3(L_4);
		goto IL_0050;
	}

IL_002a:
	{
		// screenTimeTracker.Send();
		IL2CPP_RUNTIME_CLASS_INIT(PlayFabHttp_t52EDE594B062E2A18F3BAEC1D2AE6017C0093AC6_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = ((PlayFabHttp_t52EDE594B062E2A18F3BAEC1D2AE6017C0093AC6_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabHttp_t52EDE594B062E2A18F3BAEC1D2AE6017C0093AC6_il2cpp_TypeInfo_var))->get_screenTimeTracker_11();
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(6 /* System.Void PlayFab.Public.IScreenTimeTracker::Send() */, IScreenTimeTracker_tE69CAFEA54F38655D9BE29B5BAA20B649FB2E5BE_il2cpp_TypeInfo_var, L_5);
		// yield return delay;
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = __this->get_U3CdelayU3E5__2_3();
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0049:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0050:
	{
		// while (!PlayFabSettings.DisableFocusTimeCollection)
		IL2CPP_RUNTIME_CLASS_INIT(PlayFabSettings_tA8E9D5A2A101C5AE9F889E4542545ACA2683216C_il2cpp_TypeInfo_var);
		bool L_7 = PlayFabSettings_get_DisableFocusTimeCollection_m267D1D428AA9515756F3BF80CF197445C7603164(/*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_002a;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object PlayFab.Internal.PlayFabHttp_<SendScreenTimeEvents>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSendScreenTimeEventsU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAF989462934B006BE1CA1CF57F7694547551274D (U3CSendScreenTimeEventsU3Ed__17_t3042A3544A01ED5C832A82C99F10D539F893FDD4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayFab.Internal.PlayFabHttp_<SendScreenTimeEvents>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendScreenTimeEventsU3Ed__17_System_Collections_IEnumerator_Reset_mDA792596D4F352921F816D2868DE0EA2428D6D23 (U3CSendScreenTimeEventsU3Ed__17_t3042A3544A01ED5C832A82C99F10D539F893FDD4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSendScreenTimeEventsU3Ed__17_System_Collections_IEnumerator_Reset_mDA792596D4F352921F816D2868DE0EA2428D6D23_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CSendScreenTimeEventsU3Ed__17_System_Collections_IEnumerator_Reset_mDA792596D4F352921F816D2868DE0EA2428D6D23_RuntimeMethod_var);
	}
}
// System.Object PlayFab.Internal.PlayFabHttp_<SendScreenTimeEvents>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSendScreenTimeEventsU3Ed__17_System_Collections_IEnumerator_get_Current_mF96195B3BCC95502FAF02FF6E1172E5FBD45108A (U3CSendScreenTimeEventsU3Ed__17_t3042A3544A01ED5C832A82C99F10D539F893FDD4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void PlayFab.Internal.PlayFabHttp_ApiProcessErrorEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiProcessErrorEvent__ctor_mC8DA6860FC4E2B2D144A554DE431208AA853D126 (ApiProcessErrorEvent_tDD3E2CF95D51D8D06234A16D27C8573AAD410903 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void PlayFab.Internal.PlayFabHttp_ApiProcessErrorEvent::Invoke(PlayFab.SharedModels.PlayFabRequestCommon,PlayFab.PlayFabError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiProcessErrorEvent_Invoke_mAAAB533AA41A5EDC8BBA1BEA0DDD8393A7AF9FE2 (ApiProcessErrorEvent_tDD3E2CF95D51D8D06234A16D27C8573AAD410903 * __this, PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A * ___request0, PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 * ___error1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A *, PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___request0, ___error1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A *, PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___request0, ___error1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 * >::Invoke(targetMethod, ___request0, ___error1);
					else
						GenericVirtActionInvoker1< PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 * >::Invoke(targetMethod, ___request0, ___error1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___request0, ___error1);
					else
						VirtActionInvoker1< PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___request0, ___error1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___error1) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A *, PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___request0, ___error1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A *, PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___request0, ___error1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A *, PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 * >::Invoke(targetMethod, targetThis, ___request0, ___error1);
					else
						GenericVirtActionInvoker2< PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A *, PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 * >::Invoke(targetMethod, targetThis, ___request0, ___error1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A *, PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___request0, ___error1);
					else
						VirtActionInvoker2< PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A *, PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___request0, ___error1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___request0) - 1), ___error1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A *, PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___request0, ___error1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult PlayFab.Internal.PlayFabHttp_ApiProcessErrorEvent::BeginInvoke(PlayFab.SharedModels.PlayFabRequestCommon,PlayFab.PlayFabError,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ApiProcessErrorEvent_BeginInvoke_mDCD4FCDBFBDB4174A1EA2F2710B7F1472F7BE092 (ApiProcessErrorEvent_tDD3E2CF95D51D8D06234A16D27C8573AAD410903 * __this, PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A * ___request0, PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 * ___error1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___request0;
	__d_args[1] = ___error1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void PlayFab.Internal.PlayFabHttp_ApiProcessErrorEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiProcessErrorEvent_EndInvoke_m842F9AE35A0C3ADE78CE622495C1082879246624 (ApiProcessErrorEvent_tDD3E2CF95D51D8D06234A16D27C8573AAD410903 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayFab.Public.PlayFabLoggerBase_<RegisterLogger>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterLoggerU3Ed__23__ctor_m99234F86D737561326D43E8CF1A15E3BB1E80B08 (U3CRegisterLoggerU3Ed__23_t66C9DD99B248E95C13ECD2FFB2E62F8EBA1F6E19 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PlayFab.Public.PlayFabLoggerBase_<RegisterLogger>d__23::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterLoggerU3Ed__23_System_IDisposable_Dispose_mBE9F0E0E2CBD5A00FB9F31C030C07D16EF6093FC (U3CRegisterLoggerU3Ed__23_t66C9DD99B248E95C13ECD2FFB2E62F8EBA1F6E19 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PlayFab.Public.PlayFabLoggerBase_<RegisterLogger>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRegisterLoggerU3Ed__23_MoveNext_mE7954DBFB039A6BF5FB7713343FF020C5EAC1CC2 (U3CRegisterLoggerU3Ed__23_t66C9DD99B248E95C13ECD2FFB2E62F8EBA1F6E19 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRegisterLoggerU3Ed__23_MoveNext_mE7954DBFB039A6BF5FB7713343FF020C5EAC1CC2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayFabLoggerBase_t770DB83E134BEB645A2D9C063DDD42DAA7C2D6CE * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PlayFabLoggerBase_t770DB83E134BEB645A2D9C063DDD42DAA7C2D6CE * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForEndOfFrame(); // Effectively just a short wait before activating this registration
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_4 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0032:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!string.IsNullOrEmpty(PlayFabSettings.LoggerHost))
		IL2CPP_RUNTIME_CLASS_INIT(PlayFabSettings_tA8E9D5A2A101C5AE9F889E4542545ACA2683216C_il2cpp_TypeInfo_var);
		String_t* L_5 = PlayFabSettings_get_LoggerHost_mE06EDBB91AB25C9DF9078B821CA742AD7976E9B9(/*hidden argument*/NULL);
		bool L_6 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0056;
		}
	}
	{
		// Application.logMessageReceivedThreaded += HandleUnityLog;
		PlayFabLoggerBase_t770DB83E134BEB645A2D9C063DDD42DAA7C2D6CE * L_7 = V_1;
		LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD * L_8 = (LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD *)il2cpp_codegen_object_new(LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD_il2cpp_TypeInfo_var);
		LogCallback__ctor_mB5F165ECC180A20258EF4EFF589D88FB9F9E9C57(L_8, L_7, (intptr_t)((intptr_t)PlayFabLoggerBase_HandleUnityLog_mFC5723B8436D44C20D0B7BCA9CDBBD195AAFC52C_RuntimeMethod_var), /*hidden argument*/NULL);
		Application_add_logMessageReceivedThreaded_m194F07FE09AAB0235637EB9CDB60EBB7A860B02C(L_8, /*hidden argument*/NULL);
	}

IL_0056:
	{
		// }
		return (bool)0;
	}
}
// System.Object PlayFab.Public.PlayFabLoggerBase_<RegisterLogger>d__23::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRegisterLoggerU3Ed__23_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8E3E90707B859F10EB27A9D986D33A8F97A21661 (U3CRegisterLoggerU3Ed__23_t66C9DD99B248E95C13ECD2FFB2E62F8EBA1F6E19 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayFab.Public.PlayFabLoggerBase_<RegisterLogger>d__23::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterLoggerU3Ed__23_System_Collections_IEnumerator_Reset_m5AFFEFFB243DF74189C575341D63CB5C9D1AF4CD (U3CRegisterLoggerU3Ed__23_t66C9DD99B248E95C13ECD2FFB2E62F8EBA1F6E19 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRegisterLoggerU3Ed__23_System_Collections_IEnumerator_Reset_m5AFFEFFB243DF74189C575341D63CB5C9D1AF4CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CRegisterLoggerU3Ed__23_System_Collections_IEnumerator_Reset_m5AFFEFFB243DF74189C575341D63CB5C9D1AF4CD_RuntimeMethod_var);
	}
}
// System.Object PlayFab.Public.PlayFabLoggerBase_<RegisterLogger>d__23::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRegisterLoggerU3Ed__23_System_Collections_IEnumerator_get_Current_mA84BFD78F92148F022426F7C63573EA0075257EF (U3CRegisterLoggerU3Ed__23_t66C9DD99B248E95C13ECD2FFB2E62F8EBA1F6E19 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void PlayFab.PlayFabSettings_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mCF5524C034CE92C3A9CC1BDD890CCA4589BB6F0D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mCF5524C034CE92C3A9CC1BDD890CCA4589BB6F0D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tEA6EC5BFAD34550F7D558FE6FCF52CB5A3E8AA57 * L_0 = (U3CU3Ec_tEA6EC5BFAD34550F7D558FE6FCF52CB5A3E8AA57 *)il2cpp_codegen_object_new(U3CU3Ec_tEA6EC5BFAD34550F7D558FE6FCF52CB5A3E8AA57_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m2F3515A74B6FFBD84A657A03B379EDCD4F068A10(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tEA6EC5BFAD34550F7D558FE6FCF52CB5A3E8AA57_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEA6EC5BFAD34550F7D558FE6FCF52CB5A3E8AA57_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void PlayFab.PlayFabSettings_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2F3515A74B6FFBD84A657A03B379EDCD4F068A10 (U3CU3Ec_tEA6EC5BFAD34550F7D558FE6FCF52CB5A3E8AA57 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// PlayFabSharedSettings PlayFab.PlayFabSettings_<>c::<.cctor>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayFabSharedSettings_t5F6331E1584B71FCBC22C42E4375846778C948BB * U3CU3Ec_U3C_cctorU3Eb__0_0_m8BB2BCA1A75452B8E372491C172F9E5938734EC9 (U3CU3Ec_tEA6EC5BFAD34550F7D558FE6FCF52CB5A3E8AA57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__0_0_m8BB2BCA1A75452B8E372491C172F9E5938734EC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly PlayFabApiSettings staticSettings = new PlayFabSettingsRedirect(() => { return PlayFabSharedPrivate; });
		IL2CPP_RUNTIME_CLASS_INIT(PlayFabSettings_tA8E9D5A2A101C5AE9F889E4542545ACA2683216C_il2cpp_TypeInfo_var);
		PlayFabSharedSettings_t5F6331E1584B71FCBC22C42E4375846778C948BB * L_0 = PlayFabSettings_get_PlayFabSharedPrivate_m1105F6364444F152D2671C861495FFF674CA86F2(/*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayFab.Internal.PlayFabUnityHttp_<Post>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostU3Ed__12__ctor_m149600D84E21985A94F4061D79A142224135ADA0 (U3CPostU3Ed__12_t44CD9CF8A88433BD2FCF9FE1106161A28F144489 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PlayFab.Internal.PlayFabUnityHttp_<Post>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostU3Ed__12_System_IDisposable_Dispose_m725C946D3CE7B98171A46B1A97CD3AABD0F9543D (U3CPostU3Ed__12_t44CD9CF8A88433BD2FCF9FE1106161A28F144489 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PlayFab.Internal.PlayFabUnityHttp_<Post>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPostU3Ed__12_MoveNext_mF1F179958F9B5D38185E8A65879BA2ACDF433B57 (U3CPostU3Ed__12_t44CD9CF8A88433BD2FCF9FE1106161A28F144489 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CPostU3Ed__12_MoveNext_mF1F179958F9B5D38185E8A65879BA2ACDF433B57_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayFabUnityHttp_t9BEA925C264DCE78C5ADD55715644170DC16D04A * V_1 = NULL;
	Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_4 = NULL;
	String_t* V_5 = NULL;
	GZipStream_tD1892FDA4711C4DDED84FD050A205322630365EA * V_6 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_7 = NULL;
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_8 = NULL;
	int32_t V_9 = 0;
	String_t* V_10 = NULL;
	Exception_t * V_11 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B20_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B22_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PlayFabUnityHttp_t9BEA925C264DCE78C5ADD55715644170DC16D04A * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_010a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var www = new UnityWebRequest(reqContainer.FullUrl)
		// {
		//     uploadHandler = new UploadHandlerRaw(reqContainer.Payload),
		//     downloadHandler = new DownloadHandlerBuffer(),
		//     method = "POST"
		// };
		CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D * L_4 = __this->get_reqContainer_2();
		NullCheck(L_4);
		String_t* L_5 = L_4->get_FullUrl_3();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_6 = (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)il2cpp_codegen_object_new(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_m1467508E7C27528D22989503B5A3FD71903C3CED(L_6, L_5, /*hidden argument*/NULL);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_7 = L_6;
		CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D * L_8 = __this->get_reqContainer_2();
		NullCheck(L_8);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = L_8->get_Payload_4();
		UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * L_10 = (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 *)il2cpp_codegen_object_new(UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9(L_10, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA(L_7, L_10, /*hidden argument*/NULL);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_11 = L_7;
		DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * L_12 = (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D *)il2cpp_codegen_object_new(DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2(L_11, L_12, /*hidden argument*/NULL);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_13 = L_11;
		NullCheck(L_13);
		UnityWebRequest_set_method_m603E0D94414F046DE2A60E127A715B3303F46AA7(L_13, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__2_4(L_13);
		// foreach (var headerPair in reqContainer.RequestHeaders)
		CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D * L_14 = __this->get_reqContainer_2();
		NullCheck(L_14);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_15 = L_14->get_RequestHeaders_7();
		NullCheck(L_15);
		Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  L_16 = Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5(L_15, /*hidden argument*/Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var);
		V_2 = L_16;
	}

IL_0074:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00d7;
		}

IL_0076:
		{
			// foreach (var headerPair in reqContainer.RequestHeaders)
			KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  L_17 = Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_inline((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_2), /*hidden argument*/Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var);
			V_3 = L_17;
			// if (!string.IsNullOrEmpty(headerPair.Key) && !string.IsNullOrEmpty(headerPair.Value))
			String_t* L_18 = KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
			bool L_19 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_18, /*hidden argument*/NULL);
			if (L_19)
			{
				goto IL_00b5;
			}
		}

IL_008c:
		{
			String_t* L_20 = KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
			bool L_21 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_20, /*hidden argument*/NULL);
			if (L_21)
			{
				goto IL_00b5;
			}
		}

IL_009a:
		{
			// www.SetRequestHeader(headerPair.Key, headerPair.Value);
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_22 = __this->get_U3CwwwU3E5__2_4();
			String_t* L_23 = KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
			String_t* L_24 = KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
			NullCheck(L_22);
			UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_22, L_23, L_24, /*hidden argument*/NULL);
			goto IL_00d7;
		}

IL_00b5:
		{
			// Debug.LogWarning("Null header: " + headerPair.Key + " = " + headerPair.Value);
			String_t* L_25 = KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
			String_t* L_26 = KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
			String_t* L_27 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteralEA19E9F11822E13AAB30BB69AC1CFDDCCBDFA41A, L_25, _stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64, L_26, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_27, /*hidden argument*/NULL);
		}

IL_00d7:
		{
			// foreach (var headerPair in reqContainer.RequestHeaders)
			bool L_28 = Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var);
			if (L_28)
			{
				goto IL_0076;
			}
		}

IL_00e0:
		{
			IL2CPP_LEAVE(0xF0, FINALLY_00e2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e2;
	}

FINALLY_00e2:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_2), /*hidden argument*/Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var);
		IL2CPP_END_FINALLY(226)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(226)
	{
		IL2CPP_JUMP_TBL(0xF0, IL_00f0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00f0:
	{
		// yield return www.SendWebRequest();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_29 = __this->get_U3CwwwU3E5__2_4();
		NullCheck(L_29);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_30 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_29, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_30);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_010a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!string.IsNullOrEmpty(www.error))
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_31 = __this->get_U3CwwwU3E5__2_4();
		NullCheck(L_31);
		String_t* L_32 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_31, /*hidden argument*/NULL);
		bool L_33 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_32, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_013f;
		}
	}
	{
		// OnError(www.error, reqContainer);
		PlayFabUnityHttp_t9BEA925C264DCE78C5ADD55715644170DC16D04A * L_34 = V_1;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_35 = __this->get_U3CwwwU3E5__2_4();
		NullCheck(L_35);
		String_t* L_36 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_35, /*hidden argument*/NULL);
		CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D * L_37 = __this->get_reqContainer_2();
		NullCheck(L_34);
		PlayFabUnityHttp_OnError_mFA3974E23AA1C66CBFC8649AE238264488E39D13(L_34, L_36, L_37, /*hidden argument*/NULL);
		// }
		goto IL_0246;
	}

IL_013f:
	{
	}

IL_0140:
	try
	{ // begin try (depth: 1)
		{
			// byte[] responseBytes = www.downloadHandler.data;
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_38 = __this->get_U3CwwwU3E5__2_4();
			NullCheck(L_38);
			DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_39 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_38, /*hidden argument*/NULL);
			NullCheck(L_39);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_40 = DownloadHandler_get_data_m3AE551AAE6BF21279435D386E76EA7084CC037D3(L_39, /*hidden argument*/NULL);
			V_4 = L_40;
			// bool isGzipCompressed = responseBytes != null && responseBytes[0] == 31 && responseBytes[1] == 139;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_41 = V_4;
			if (!L_41)
			{
				goto IL_016b;
			}
		}

IL_0156:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_42 = V_4;
			NullCheck(L_42);
			int32_t L_43 = 0;
			uint8_t L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
			if ((!(((uint32_t)L_44) == ((uint32_t)((int32_t)31)))))
			{
				goto IL_016b;
			}
		}

IL_015e:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_45 = V_4;
			NullCheck(L_45);
			int32_t L_46 = 1;
			uint8_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
			G_B20_0 = ((((int32_t)L_47) == ((int32_t)((int32_t)139)))? 1 : 0);
			goto IL_016c;
		}

IL_016b:
		{
			G_B20_0 = 0;
		}

IL_016c:
		{
			// string responseText = "Unexpected error: cannot decompress GZIP stream.";
			V_5 = _stringLiteral5A97C560200976976C8FD835DF91243ED65A7BC1;
			// if (!isGzipCompressed && responseBytes != null)
			int32_t L_48 = G_B20_0;
			G_B21_0 = L_48;
			if (L_48)
			{
				G_B23_0 = L_48;
				goto IL_018d;
			}
		}

IL_0176:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_49 = V_4;
			G_B22_0 = G_B21_0;
			if (!L_49)
			{
				G_B23_0 = G_B21_0;
				goto IL_018d;
			}
		}

IL_017a:
		{
			// responseText = System.Text.Encoding.UTF8.GetString(responseBytes, 0, responseBytes.Length);
			Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_50 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_51 = V_4;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_52 = V_4;
			NullCheck(L_52);
			NullCheck(L_50);
			String_t* L_53 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(35 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_50, L_51, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_52)->max_length)))));
			V_5 = L_53;
			G_B23_0 = G_B22_0;
		}

IL_018d:
		{
			// if (isGzipCompressed)
			if (!G_B23_0)
			{
				goto IL_021a;
			}
		}

IL_0192:
		{
			// var stream = new MemoryStream(responseBytes);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_54 = V_4;
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_55 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
			MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2(L_55, L_54, /*hidden argument*/NULL);
			// using (var gZipStream = new Ionic.Zlib.GZipStream(stream, Ionic.Zlib.CompressionMode.Decompress, false))
			GZipStream_tD1892FDA4711C4DDED84FD050A205322630365EA * L_56 = (GZipStream_tD1892FDA4711C4DDED84FD050A205322630365EA *)il2cpp_codegen_object_new(GZipStream_tD1892FDA4711C4DDED84FD050A205322630365EA_il2cpp_TypeInfo_var);
			GZipStream__ctor_m9A047CAFCB2A5E5149E9B51AA2476F26A4384A63(L_56, L_55, 1, (bool)0, /*hidden argument*/NULL);
			V_6 = L_56;
		}

IL_01a2:
		try
		{ // begin try (depth: 2)
			{
				// var buffer = new byte[4096];
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_57 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
				V_7 = L_57;
				// using (var output = new MemoryStream())
				MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_58 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
				MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F(L_58, /*hidden argument*/NULL);
				V_8 = L_58;
			}

IL_01b5:
			try
			{ // begin try (depth: 3)
				{
					goto IL_01c3;
				}

IL_01b7:
				{
					// output.Write(buffer, 0, read);
					MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_59 = V_8;
					ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_60 = V_7;
					int32_t L_61 = V_9;
					NullCheck(L_59);
					VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(32 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_59, L_60, 0, L_61);
				}

IL_01c3:
				{
					// while ((read = gZipStream.Read(buffer, 0, buffer.Length)) > 0)
					GZipStream_tD1892FDA4711C4DDED84FD050A205322630365EA * L_62 = V_6;
					ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_63 = V_7;
					ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_64 = V_7;
					NullCheck(L_64);
					NullCheck(L_62);
					int32_t L_65 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(30 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_62, L_63, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_64)->max_length)))));
					int32_t L_66 = L_65;
					V_9 = L_66;
					if ((((int32_t)L_66) > ((int32_t)0)))
					{
						goto IL_01b7;
					}
				}

IL_01d7:
				{
					// output.Seek(0, SeekOrigin.Begin);
					MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_67 = V_8;
					NullCheck(L_67);
					VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(28 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_67, (((int64_t)((int64_t)0))), 0);
					// var streamReader = new StreamReader(output);
					MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_68 = V_8;
					StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_69 = (StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 *)il2cpp_codegen_object_new(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var);
					StreamReader__ctor_m0F256281F982E077C73A4C297F1301026A3C2905(L_69, L_68, /*hidden argument*/NULL);
					// var jsonResponse = streamReader.ReadToEnd();
					NullCheck(L_69);
					String_t* L_70 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.IO.TextReader::ReadToEnd() */, L_69);
					V_10 = L_70;
					// OnResponse(jsonResponse, reqContainer);
					PlayFabUnityHttp_t9BEA925C264DCE78C5ADD55715644170DC16D04A * L_71 = V_1;
					String_t* L_72 = V_10;
					CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D * L_73 = __this->get_reqContainer_2();
					NullCheck(L_71);
					PlayFabUnityHttp_OnResponse_m09AAB133DA0AF7F5C8C6DAF8118F971F4F6E63A8(L_71, L_72, L_73, /*hidden argument*/NULL);
					// }
					IL2CPP_LEAVE(0x20C, FINALLY_0200);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0200;
			}

FINALLY_0200:
			{ // begin finally (depth: 3)
				{
					MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_74 = V_8;
					if (!L_74)
					{
						goto IL_020b;
					}
				}

IL_0204:
				{
					MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_75 = V_8;
					NullCheck(L_75);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_75);
				}

IL_020b:
				{
					IL2CPP_END_FINALLY(512)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(512)
			{
				IL2CPP_JUMP_TBL(0x20C, IL_020c)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			}

IL_020c:
			{
				// }
				IL2CPP_LEAVE(0x228, FINALLY_020e);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_020e;
		}

FINALLY_020e:
		{ // begin finally (depth: 2)
			{
				GZipStream_tD1892FDA4711C4DDED84FD050A205322630365EA * L_76 = V_6;
				if (!L_76)
				{
					goto IL_0219;
				}
			}

IL_0212:
			{
				GZipStream_tD1892FDA4711C4DDED84FD050A205322630365EA * L_77 = V_6;
				NullCheck(L_77);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_77);
			}

IL_0219:
			{
				IL2CPP_END_FINALLY(526)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(526)
		{
			IL2CPP_JUMP_TBL(0x228, IL_0228)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_021a:
		{
			// OnResponse(responseText, reqContainer);
			PlayFabUnityHttp_t9BEA925C264DCE78C5ADD55715644170DC16D04A * L_78 = V_1;
			String_t* L_79 = V_5;
			CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D * L_80 = __this->get_reqContainer_2();
			NullCheck(L_78);
			PlayFabUnityHttp_OnResponse_m09AAB133DA0AF7F5C8C6DAF8118F971F4F6E63A8(L_78, L_79, L_80, /*hidden argument*/NULL);
		}

IL_0228:
		{
			// }
			goto IL_0246;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_022a;
		throw e;
	}

CATCH_022a:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_11 = ((Exception_t *)__exception_local);
		// OnError("Unhandled error in PlayFabUnityHttp: " + e, reqContainer);
		PlayFabUnityHttp_t9BEA925C264DCE78C5ADD55715644170DC16D04A * L_81 = V_1;
		Exception_t * L_82 = V_11;
		String_t* L_83 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteral14382552CFC64B2635A52F221D8B0E364321F9D0, L_82, /*hidden argument*/NULL);
		CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D * L_84 = __this->get_reqContainer_2();
		NullCheck(L_81);
		PlayFabUnityHttp_OnError_mFA3974E23AA1C66CBFC8649AE238264488E39D13(L_81, L_83, L_84, /*hidden argument*/NULL);
		// }
		goto IL_0246;
	} // end catch (depth: 1)

IL_0246:
	{
		// www.Dispose();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_85 = __this->get_U3CwwwU3E5__2_4();
		NullCheck(L_85);
		UnityWebRequest_Dispose_m8032472F6BC2EC4FEE017DE7E4C440078BC4E1C8(L_85, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object PlayFab.Internal.PlayFabUnityHttp_<Post>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPostU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m229DDB3277FE6048690CAB48F8670D8A5D3363D5 (U3CPostU3Ed__12_t44CD9CF8A88433BD2FCF9FE1106161A28F144489 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayFab.Internal.PlayFabUnityHttp_<Post>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostU3Ed__12_System_Collections_IEnumerator_Reset_m02923BB3B7B1E59DC540B90B893C89D7FEA22064 (U3CPostU3Ed__12_t44CD9CF8A88433BD2FCF9FE1106161A28F144489 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CPostU3Ed__12_System_Collections_IEnumerator_Reset_m02923BB3B7B1E59DC540B90B893C89D7FEA22064_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CPostU3Ed__12_System_Collections_IEnumerator_Reset_m02923BB3B7B1E59DC540B90B893C89D7FEA22064_RuntimeMethod_var);
	}
}
// System.Object PlayFab.Internal.PlayFabUnityHttp_<Post>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPostU3Ed__12_System_Collections_IEnumerator_get_Current_mA454C275A0A9B43D1B9E27B7C9DBC75C7D52AF95 (U3CPostU3Ed__12_t44CD9CF8A88433BD2FCF9FE1106161A28F144489 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void PlayFab.Internal.PlayFabUnityHttp_<SimpleCallCoroutine>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSimpleCallCoroutineU3Ed__10__ctor_mCD835D1BAA357103AD7C1727ADDE5FCE188DCA2B (U3CSimpleCallCoroutineU3Ed__10_tE47ACDD22401ED44B679B9B64BADB4B5C51C004A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PlayFab.Internal.PlayFabUnityHttp_<SimpleCallCoroutine>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSimpleCallCoroutineU3Ed__10_System_IDisposable_Dispose_mD6941740F9CCE99DA2B58B8350320B7DBEDA46AE (U3CSimpleCallCoroutineU3Ed__10_tE47ACDD22401ED44B679B9B64BADB4B5C51C004A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CSimpleCallCoroutineU3Ed__10_U3CU3Em__Finally1_mBAFA84DF5905BBFA4EB5FC8478AEE4767862A148(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean PlayFab.Internal.PlayFabUnityHttp_<SimpleCallCoroutine>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSimpleCallCoroutineU3Ed__10_MoveNext_mCAC5A8A42775F8D37F2087C9EE4FF31D7AC82877 (U3CSimpleCallCoroutineU3Ed__10_tE47ACDD22401ED44B679B9B64BADB4B5C51C004A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSimpleCallCoroutineU3Ed__10_MoveNext_mCAC5A8A42775F8D37F2087C9EE4FF31D7AC82877_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			switch (L_1)
			{
				case 0:
				{
					goto IL_0020;
				}
				case 1:
				{
					goto IL_006a;
				}
				case 2:
				{
					goto IL_0161;
				}
			}
		}

IL_0019:
		{
			V_0 = (bool)0;
			goto IL_01c7;
		}

IL_0020:
		{
			__this->set_U3CU3E1__state_0((-1));
			// if (payload == null)
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_payload_2();
			if (L_2)
			{
				goto IL_00c9;
			}
		}

IL_0032:
		{
			// using (UnityWebRequest www = UnityWebRequest.Get(fullUrl))
			String_t* L_3 = __this->get_fullUrl_3();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_4 = UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A(L_3, /*hidden argument*/NULL);
			__this->set_U3CwwwU3E5__2_7(L_4);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return www.SendWebRequest();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_5 = __this->get_U3CwwwU3E5__2_7();
			NullCheck(L_5);
			UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_6 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_5, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_6);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_01c7;
		}

IL_006a:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// if (!string.IsNullOrEmpty(www.error))
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_7 = __this->get_U3CwwwU3E5__2_7();
			NullCheck(L_7);
			String_t* L_8 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_7, /*hidden argument*/NULL);
			bool L_9 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_8, /*hidden argument*/NULL);
			if (L_9)
			{
				goto IL_009c;
			}
		}

IL_0084:
		{
			// errorCallback(www.error);
			Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_10 = __this->get_errorCallback_4();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_11 = __this->get_U3CwwwU3E5__2_7();
			NullCheck(L_11);
			String_t* L_12 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_11, /*hidden argument*/NULL);
			NullCheck(L_10);
			Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_10, L_12, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
			goto IL_00b7;
		}

IL_009c:
		{
			// successCallback(www.downloadHandler.data);
			Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_13 = __this->get_successCallback_5();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_14 = __this->get_U3CwwwU3E5__2_7();
			NullCheck(L_14);
			DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_15 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_14, /*hidden argument*/NULL);
			NullCheck(L_15);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = DownloadHandler_get_data_m3AE551AAE6BF21279435D386E76EA7084CC037D3(L_15, /*hidden argument*/NULL);
			NullCheck(L_13);
			Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30(L_13, L_16, /*hidden argument*/Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30_RuntimeMethod_var);
		}

IL_00b7:
		{
			// };
			U3CSimpleCallCoroutineU3Ed__10_U3CU3Em__Finally1_mBAFA84DF5905BBFA4EB5FC8478AEE4767862A148(__this, /*hidden argument*/NULL);
			__this->set_U3CwwwU3E5__2_7((UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)NULL);
			// }
			goto IL_01bc;
		}

IL_00c9:
		{
			// if (method == "put")
			String_t* L_17 = __this->get_method_6();
			bool L_18 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_17, _stringLiteralE7072161266D4F867CE0A311142D9F3D4A0956CA, /*hidden argument*/NULL);
			if (!L_18)
			{
				goto IL_00f4;
			}
		}

IL_00db:
		{
			// request = UnityWebRequest.Put(fullUrl, payload);
			String_t* L_19 = __this->get_fullUrl_3();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = __this->get_payload_2();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_21 = UnityWebRequest_Put_mA2C337337953404F65F36D8F59747F566E3266A4(L_19, L_20, /*hidden argument*/NULL);
			__this->set_U3CwwwU3E5__2_7(L_21);
			// }
			goto IL_0145;
		}

IL_00f4:
		{
			// request = new UnityWebRequest(fullUrl, "POST");
			String_t* L_22 = __this->get_fullUrl_3();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_23 = (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)il2cpp_codegen_object_new(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
			UnityWebRequest__ctor_mC2ED369A4ACE53AFF2E70A38BE95EB48D68D4975(L_23, L_22, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, /*hidden argument*/NULL);
			__this->set_U3CwwwU3E5__2_7(L_23);
			// request.uploadHandler = (UploadHandler)new UploadHandlerRaw(payload);
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_24 = __this->get_U3CwwwU3E5__2_7();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25 = __this->get_payload_2();
			UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * L_26 = (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 *)il2cpp_codegen_object_new(UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
			UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9(L_26, L_25, /*hidden argument*/NULL);
			NullCheck(L_24);
			UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA(L_24, L_26, /*hidden argument*/NULL);
			// request.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_27 = __this->get_U3CwwwU3E5__2_7();
			DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * L_28 = (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D *)il2cpp_codegen_object_new(DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
			DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774(L_28, /*hidden argument*/NULL);
			NullCheck(L_27);
			UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2(L_27, L_28, /*hidden argument*/NULL);
			// request.SetRequestHeader("Content-Type", "application/json");
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_29 = __this->get_U3CwwwU3E5__2_7();
			NullCheck(L_29);
			UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_29, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, /*hidden argument*/NULL);
		}

IL_0145:
		{
			// yield return request.SendWebRequest();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_30 = __this->get_U3CwwwU3E5__2_7();
			NullCheck(L_30);
			UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_31 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_30, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_31);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_01c7;
		}

IL_0161:
		{
			__this->set_U3CU3E1__state_0((-1));
			// if (request.isNetworkError || request.isHttpError)
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_32 = __this->get_U3CwwwU3E5__2_7();
			NullCheck(L_32);
			bool L_33 = UnityWebRequest_get_isNetworkError_m0126D38DA9B39159CB12F8DE0C3962A4BEEE5C03(L_32, /*hidden argument*/NULL);
			if (L_33)
			{
				goto IL_0182;
			}
		}

IL_0175:
		{
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_34 = __this->get_U3CwwwU3E5__2_7();
			NullCheck(L_34);
			bool L_35 = UnityWebRequest_get_isHttpError_m23ADCBE1CF082A940EF6AA75A15051583228B616(L_34, /*hidden argument*/NULL);
			if (!L_35)
			{
				goto IL_019a;
			}
		}

IL_0182:
		{
			// errorCallback(request.error);
			Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_36 = __this->get_errorCallback_4();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_37 = __this->get_U3CwwwU3E5__2_7();
			NullCheck(L_37);
			String_t* L_38 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_37, /*hidden argument*/NULL);
			NullCheck(L_36);
			Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_36, L_38, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
			// }
			goto IL_01b5;
		}

IL_019a:
		{
			// successCallback(request.downloadHandler.data);
			Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_39 = __this->get_successCallback_5();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_40 = __this->get_U3CwwwU3E5__2_7();
			NullCheck(L_40);
			DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_41 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_40, /*hidden argument*/NULL);
			NullCheck(L_41);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_42 = DownloadHandler_get_data_m3AE551AAE6BF21279435D386E76EA7084CC037D3(L_41, /*hidden argument*/NULL);
			NullCheck(L_39);
			Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30(L_39, L_42, /*hidden argument*/Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30_RuntimeMethod_var);
		}

IL_01b5:
		{
			// }
			__this->set_U3CwwwU3E5__2_7((UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)NULL);
		}

IL_01bc:
		{
			// }
			V_0 = (bool)0;
			goto IL_01c7;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_01c0;
	}

FAULT_01c0:
	{ // begin fault (depth: 1)
		U3CSimpleCallCoroutineU3Ed__10_System_IDisposable_Dispose_mD6941740F9CCE99DA2B58B8350320B7DBEDA46AE(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(448)
	} // end fault
	IL2CPP_CLEANUP(448)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01c7:
	{
		bool L_43 = V_0;
		return L_43;
	}
}
// System.Void PlayFab.Internal.PlayFabUnityHttp_<SimpleCallCoroutine>d__10::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSimpleCallCoroutineU3Ed__10_U3CU3Em__Finally1_mBAFA84DF5905BBFA4EB5FC8478AEE4767862A148 (U3CSimpleCallCoroutineU3Ed__10_tE47ACDD22401ED44B679B9B64BADB4B5C51C004A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSimpleCallCoroutineU3Ed__10_U3CU3Em__Finally1_mBAFA84DF5905BBFA4EB5FC8478AEE4767862A148_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = __this->get_U3CwwwU3E5__2_7();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_1 = __this->get_U3CwwwU3E5__2_7();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object PlayFab.Internal.PlayFabUnityHttp_<SimpleCallCoroutine>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSimpleCallCoroutineU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF380641B1F7BCFEC0066C8A5FBE08A0E11510581 (U3CSimpleCallCoroutineU3Ed__10_tE47ACDD22401ED44B679B9B64BADB4B5C51C004A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayFab.Internal.PlayFabUnityHttp_<SimpleCallCoroutine>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSimpleCallCoroutineU3Ed__10_System_Collections_IEnumerator_Reset_m6E9CEE9ADA201821B9226E50469FABF1F1DE6C84 (U3CSimpleCallCoroutineU3Ed__10_tE47ACDD22401ED44B679B9B64BADB4B5C51C004A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSimpleCallCoroutineU3Ed__10_System_Collections_IEnumerator_Reset_m6E9CEE9ADA201821B9226E50469FABF1F1DE6C84_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CSimpleCallCoroutineU3Ed__10_System_Collections_IEnumerator_Reset_m6E9CEE9ADA201821B9226E50469FABF1F1DE6C84_RuntimeMethod_var);
	}
}
// System.Object PlayFab.Internal.PlayFabUnityHttp_<SimpleCallCoroutine>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSimpleCallCoroutineU3Ed__10_System_Collections_IEnumerator_get_Current_m13EC57660A5D78FFCCCEECBFBBE66E4F796359E2 (U3CSimpleCallCoroutineU3Ed__10_tE47ACDD22401ED44B679B9B64BADB4B5C51C004A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void PlayFab.Internal.PlayFabWebRequest_<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_mEA8B54E3A09F73A31D088915E12E80352A482577 (U3CU3Ec__DisplayClass21_0_t170018259DEFF42402484A5709A5A784DE224A38 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayFab.Internal.PlayFabWebRequest_<>c__DisplayClass21_0::<SimpleGetCall>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0_U3CSimpleGetCallU3Eb__0_m2BDBB7CB1899BD32355EB912D04A83C65050F377 (U3CU3Ec__DisplayClass21_0_t170018259DEFF42402484A5709A5A784DE224A38 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass21_0_U3CSimpleGetCallU3Eb__0_m2BDBB7CB1899BD32355EB912D04A83C65050F377_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var newThread = new Thread(() => SimpleHttpsWorker("GET", fullUrl, null, successCallback, errorCallback));
		PlayFabWebRequest_t8B559043BC6B902CA68E57AF2CF876901CD78C26 * L_0 = __this->get_U3CU3E4__this_0();
		String_t* L_1 = __this->get_fullUrl_1();
		Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_2 = __this->get_successCallback_2();
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_3 = __this->get_errorCallback_3();
		NullCheck(L_0);
		PlayFabWebRequest_SimpleHttpsWorker_m8A09E7ED55C6E8E722B70080C5C45E6B7D08C0A4(L_0, _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6, L_1, (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL, L_2, L_3, /*hidden argument*/NULL);
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
// System.Void PlayFab.Internal.PlayFabWebRequest_<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_mC337F36589143C9A8A6FDC4E95371A610569C119 (U3CU3Ec__DisplayClass22_0_tBC36B06ECC9E8E0DDDFFB4BBA97A914925E780B9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayFab.Internal.PlayFabWebRequest_<>c__DisplayClass22_0::<SimplePutCall>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CSimplePutCallU3Eb__0_m17AD070224913AA56DDDA6BC62F49E8142A2A38F (U3CU3Ec__DisplayClass22_0_tBC36B06ECC9E8E0DDDFFB4BBA97A914925E780B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass22_0_U3CSimplePutCallU3Eb__0_m17AD070224913AA56DDDA6BC62F49E8142A2A38F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var newThread = new Thread(() => SimpleHttpsWorker("PUT", fullUrl, payload, successCallback, errorCallback));
		PlayFabWebRequest_t8B559043BC6B902CA68E57AF2CF876901CD78C26 * L_0 = __this->get_U3CU3E4__this_0();
		String_t* L_1 = __this->get_fullUrl_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_payload_2();
		Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_3 = __this->get_successCallback_3();
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_4 = __this->get_errorCallback_4();
		NullCheck(L_0);
		PlayFabWebRequest_SimpleHttpsWorker_m8A09E7ED55C6E8E722B70080C5C45E6B7D08C0A4(L_0, _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
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
// System.Void PlayFab.Internal.PlayFabWebRequest_<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_m1E5C376A73EB076858D9A1DF3FF2D3B4EA38A92E (U3CU3Ec__DisplayClass23_0_t3722747C51037F78D8A4C73ACDD906037B55E64F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayFab.Internal.PlayFabWebRequest_<>c__DisplayClass23_0::<SimplePostCall>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0_U3CSimplePostCallU3Eb__0_mCC75B2E6E5B0D5B395EE72A0174C1ECB69273FCD (U3CU3Ec__DisplayClass23_0_t3722747C51037F78D8A4C73ACDD906037B55E64F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass23_0_U3CSimplePostCallU3Eb__0_mCC75B2E6E5B0D5B395EE72A0174C1ECB69273FCD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var newThread = new Thread(() => SimpleHttpsWorker("POST", fullUrl, payload, successCallback, errorCallback));
		PlayFabWebRequest_t8B559043BC6B902CA68E57AF2CF876901CD78C26 * L_0 = __this->get_U3CU3E4__this_0();
		String_t* L_1 = __this->get_fullUrl_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_payload_2();
		Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_3 = __this->get_successCallback_3();
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_4 = __this->get_errorCallback_4();
		NullCheck(L_0);
		PlayFabWebRequest_SimpleHttpsWorker_m8A09E7ED55C6E8E722B70080C5C45E6B7D08C0A4(L_0, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
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
// System.Void PlayFab.Internal.PlayFabWebRequest_<>c__DisplayClass30_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_0__ctor_mEB6B1BAABA534ED4ADCCA7AAA9758118AC51E598 (U3CU3Ec__DisplayClass30_0_t16C6742935DDF4A0D83417A4F7DC05DBC2CF95BA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayFab.Internal.PlayFabWebRequest_<>c__DisplayClass30_0::<QueueRequestError>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_0_U3CQueueRequestErrorU3Eb__0_m4B7FFF71F5DBEC46BA92B9C3A6FB6016E318C439 (U3CU3Ec__DisplayClass30_0_t16C6742935DDF4A0D83417A4F7DC05DBC2CF95BA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass30_0_U3CQueueRequestErrorU3Eb__0_m4B7FFF71F5DBEC46BA92B9C3A6FB6016E318C439_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayFabHttp.SendErrorEvent(reqContainer.ApiRequest, reqContainer.Error);
		CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D * L_0 = __this->get_reqContainer_0();
		NullCheck(L_0);
		PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A * L_1 = L_0->get_ApiRequest_6();
		CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D * L_2 = __this->get_reqContainer_0();
		NullCheck(L_2);
		PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 * L_3 = L_2->get_Error_9();
		IL2CPP_RUNTIME_CLASS_INIT(PlayFabHttp_t52EDE594B062E2A18F3BAEC1D2AE6017C0093AC6_il2cpp_TypeInfo_var);
		PlayFabHttp_SendErrorEvent_mD28899182B1CAC9171CF5B140D680EBBA8F74E03(L_1, L_3, /*hidden argument*/NULL);
		// if (reqContainer.ErrorCallback != null)
		CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D * L_4 = __this->get_reqContainer_0();
		NullCheck(L_4);
		Action_1_t783DC837D7772A52296BE8080F3FE74761B96F8F * L_5 = L_4->get_ErrorCallback_12();
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		// reqContainer.ErrorCallback(reqContainer.Error);
		CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D * L_6 = __this->get_reqContainer_0();
		NullCheck(L_6);
		Action_1_t783DC837D7772A52296BE8080F3FE74761B96F8F * L_7 = L_6->get_ErrorCallback_12();
		CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D * L_8 = __this->get_reqContainer_0();
		NullCheck(L_8);
		PlayFabError_t30D17E43C1943090E6D2882BEC4558B458FF3586 * L_9 = L_8->get_Error_9();
		NullCheck(L_7);
		Action_1_Invoke_mD271144E3B9B6C3BF8C6AD6E8E076ED05C54A276(L_7, L_9, /*hidden argument*/Action_1_Invoke_mD271144E3B9B6C3BF8C6AD6E8E076ED05C54A276_RuntimeMethod_var);
	}

IL_0043:
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
// System.Void PlayFab.Internal.PlayFabWebRequest_<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_mFD17CAD92FE099A41AAAD68C96C7E76245191BD2 (U3CU3Ec__DisplayClass31_0_tCB17FC28F80C14092FF929FC37795F8D51700D42 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayFab.Internal.PlayFabWebRequest_<>c__DisplayClass31_0::<ProcessJsonResponse>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0_U3CProcessJsonResponseU3Eb__0_m4CD79A6EB203C3EBB02EABFA11376166729EA917 (U3CU3Ec__DisplayClass31_0_tCB17FC28F80C14092FF929FC37795F8D51700D42 * __this, const RuntimeMethod* method)
{
	{
		// ResultQueueTransferThread.Enqueue(() => { PlayFabDeviceUtil.OnPlayFabLogin(reqContainer.ApiResult, reqContainer.settings, reqContainer.instanceApi); });
		CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D * L_0 = __this->get_reqContainer_0();
		NullCheck(L_0);
		PlayFabResultCommon_t9DD4B71D8199989BBFB06770ED84AD5F666EF7FB * L_1 = L_0->get_ApiResult_8();
		CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D * L_2 = __this->get_reqContainer_0();
		NullCheck(L_2);
		PlayFabApiSettings_t62DC7BEDADD9C5CBEA3E3613AAF5521633496913 * L_3 = L_2->get_settings_14();
		CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D * L_4 = __this->get_reqContainer_0();
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->get_instanceApi_16();
		PlayFabDeviceUtil_OnPlayFabLogin_mF1622A757BBF5D88E6BCB6E48A642F595F3CAC4D(L_1, L_3, L_5, /*hidden argument*/NULL);
		// ResultQueueTransferThread.Enqueue(() => { PlayFabDeviceUtil.OnPlayFabLogin(reqContainer.ApiResult, reqContainer.settings, reqContainer.instanceApi); });
		return;
	}
}
// System.Void PlayFab.Internal.PlayFabWebRequest_<>c__DisplayClass31_0::<ProcessJsonResponse>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0_U3CProcessJsonResponseU3Eb__1_mC947B8B2154A019A0AA672B12B57042FE5ACEA01 (U3CU3Ec__DisplayClass31_0_tCB17FC28F80C14092FF929FC37795F8D51700D42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass31_0_U3CProcessJsonResponseU3Eb__1_mC947B8B2154A019A0AA672B12B57042FE5ACEA01_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		// PlayFabHttp.SendEvent(reqContainer.ApiEndpoint, reqContainer.ApiRequest, reqContainer.ApiResult, ApiProcessingEventType.Post);
		CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D * L_0 = __this->get_reqContainer_0();
		NullCheck(L_0);
		String_t* L_1 = L_0->get_ApiEndpoint_2();
		CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D * L_2 = __this->get_reqContainer_0();
		NullCheck(L_2);
		PlayFabRequestCommon_tD14C54B6B8C72765B5C65AE3E7E23224A6B64F3A * L_3 = L_2->get_ApiRequest_6();
		CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D * L_4 = __this->get_reqContainer_0();
		NullCheck(L_4);
		PlayFabResultCommon_t9DD4B71D8199989BBFB06770ED84AD5F666EF7FB * L_5 = L_4->get_ApiResult_8();
		IL2CPP_RUNTIME_CLASS_INIT(PlayFabHttp_t52EDE594B062E2A18F3BAEC1D2AE6017C0093AC6_il2cpp_TypeInfo_var);
		PlayFabHttp_SendEvent_m12DF426CA1FFDB1D8FCC12A9B04A91FE5E5F91C3(L_1, L_3, L_5, 1, /*hidden argument*/NULL);
		// reqContainer.InvokeSuccessCallback();
		CallRequestContainer_t3AF50E0AEC4B9EB8513CD783D3C950AA7974718D * L_6 = __this->get_reqContainer_0();
		NullCheck(L_6);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = L_6->get_InvokeSuccessCallback_11();
		NullCheck(L_7);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_7, /*hidden argument*/NULL);
		// }
		goto IL_0040;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0039;
		throw e;
	}

CATCH_0039:
	{ // begin catch(System.Exception)
		// Debug.LogException(e); // Log the user's callback exception back to them without halting PlayFabHttp
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)__exception_local), /*hidden argument*/NULL);
		// }
		goto IL_0040;
	} // end catch (depth: 1)

IL_0040:
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
// System.Void PlayFab.Json.ReflectionUtils_<>c__DisplayClass26_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0__ctor_m09EB3E92F37AE055DBB189C1488032036ADD21DE (U3CU3Ec__DisplayClass26_0_t9E9D1D6C457855593F1CF8DFA0D9CE14584BD00F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object PlayFab.Json.ReflectionUtils_<>c__DisplayClass26_0::<GetConstructorByReflection>b__0(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass26_0_U3CGetConstructorByReflectionU3Eb__0_mD79CEC8BC7DD709B5421B8034F9853C3C22D98B3 (U3CU3Ec__DisplayClass26_0_t9E9D1D6C457855593F1CF8DFA0D9CE14584BD00F * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	{
		// var x = constructorInfo;
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_0 = __this->get_constructorInfo_0();
		// return x.Invoke(args);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___args0;
		NullCheck(L_0);
		RuntimeObject * L_2 = ConstructorInfo_Invoke_m8DF5D6F53038C7B6443EEA82D922724F39CD2906(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void PlayFab.Json.ReflectionUtils_<>c__DisplayClass30_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_0__ctor_mE3EEDC2516B81B6F8890C32666E8EA3D615D2918 (U3CU3Ec__DisplayClass30_0_tF615FB78091E446220AF7E5B0829963B60EE35A1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object PlayFab.Json.ReflectionUtils_<>c__DisplayClass30_0::<GetGetMethodByReflection>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass30_0_U3CGetGetMethodByReflectionU3Eb__0_m771143A4E0C62113CA55C7283C79FEB34FE73435 (U3CU3Ec__DisplayClass30_0_tF615FB78091E446220AF7E5B0829963B60EE35A1 * __this, RuntimeObject * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass30_0_U3CGetGetMethodByReflectionU3Eb__0_m771143A4E0C62113CA55C7283C79FEB34FE73435_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return delegate (object source) { return methodInfo.Invoke(source, EmptyObjects); };
		MethodInfo_t * L_0 = __this->get_methodInfo_0();
		RuntimeObject * L_1 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t23DB43160F54AC632646B53561BDAE335838E9D3_il2cpp_TypeInfo_var);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ((ReflectionUtils_t23DB43160F54AC632646B53561BDAE335838E9D3_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtils_t23DB43160F54AC632646B53561BDAE335838E9D3_il2cpp_TypeInfo_var))->get_EmptyObjects_0();
		NullCheck(L_0);
		RuntimeObject * L_3 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_0, L_1, L_2, /*hidden argument*/NULL);
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
// System.Void PlayFab.Json.ReflectionUtils_<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_m41CAD435545A160B665BCB74F8DBB3104CA0A9EA (U3CU3Ec__DisplayClass31_0_t7C2360B9616692CFC4B194EDF6DC933B83D6CDF8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object PlayFab.Json.ReflectionUtils_<>c__DisplayClass31_0::<GetGetMethodByReflection>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass31_0_U3CGetGetMethodByReflectionU3Eb__0_m3E2BF8C9BC83F2152FD6E48313D2CE9BB3E5BF4D (U3CU3Ec__DisplayClass31_0_t7C2360B9616692CFC4B194EDF6DC933B83D6CDF8 * __this, RuntimeObject * ___source0, const RuntimeMethod* method)
{
	{
		// return delegate (object source) { return fieldInfo.GetValue(source); };
		FieldInfo_t * L_0 = __this->get_fieldInfo_0();
		RuntimeObject * L_1 = ___source0;
		NullCheck(L_0);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(19 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_0, L_1);
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
// System.Void PlayFab.Json.ReflectionUtils_<>c__DisplayClass34_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0__ctor_mAAFCAE56D3ABA8C21680242B932095E1FF15BDC0 (U3CU3Ec__DisplayClass34_0_tBDEA6E4377149E351FF0FE76AAEF70C4EFCF7772 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayFab.Json.ReflectionUtils_<>c__DisplayClass34_0::<GetSetMethodByReflection>b__0(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3CGetSetMethodByReflectionU3Eb__0_mFA8DBA295B9CF6536D755212B09CDB9D2812CA40 (U3CU3Ec__DisplayClass34_0_tBDEA6E4377149E351FF0FE76AAEF70C4EFCF7772 * __this, RuntimeObject * ___source0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass34_0_U3CGetSetMethodByReflectionU3Eb__0_mFA8DBA295B9CF6536D755212B09CDB9D2812CA40_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_1ObjArray == null)
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t23DB43160F54AC632646B53561BDAE335838E9D3_il2cpp_TypeInfo_var);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((ReflectionUtils_t23DB43160F54AC632646B53561BDAE335838E9D3_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ReflectionUtils_t23DB43160F54AC632646B53561BDAE335838E9D3_il2cpp_TypeInfo_var))->get__1ObjArray_1();
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// _1ObjArray = new object[1];
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t23DB43160F54AC632646B53561BDAE335838E9D3_il2cpp_TypeInfo_var);
		((ReflectionUtils_t23DB43160F54AC632646B53561BDAE335838E9D3_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ReflectionUtils_t23DB43160F54AC632646B53561BDAE335838E9D3_il2cpp_TypeInfo_var))->set__1ObjArray_1(L_1);
	}

IL_0012:
	{
		// _1ObjArray[0] = value;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t23DB43160F54AC632646B53561BDAE335838E9D3_il2cpp_TypeInfo_var);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ((ReflectionUtils_t23DB43160F54AC632646B53561BDAE335838E9D3_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ReflectionUtils_t23DB43160F54AC632646B53561BDAE335838E9D3_il2cpp_TypeInfo_var))->get__1ObjArray_1();
		RuntimeObject * L_3 = ___value1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		// methodInfo.Invoke(source, _1ObjArray);
		MethodInfo_t * L_4 = __this->get_methodInfo_0();
		RuntimeObject * L_5 = ___source0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = ((ReflectionUtils_t23DB43160F54AC632646B53561BDAE335838E9D3_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ReflectionUtils_t23DB43160F54AC632646B53561BDAE335838E9D3_il2cpp_TypeInfo_var))->get__1ObjArray_1();
		NullCheck(L_4);
		MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_4, L_5, L_6, /*hidden argument*/NULL);
		// };
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
// System.Void PlayFab.Json.ReflectionUtils_<>c__DisplayClass35_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass35_0__ctor_mE87669D9EBD7AF88B75C7981FE81B5B867D25447 (U3CU3Ec__DisplayClass35_0_tDF185DD175EE578E3C3ED8554D1F41CFFAD265BB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayFab.Json.ReflectionUtils_<>c__DisplayClass35_0::<GetSetMethodByReflection>b__0(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass35_0_U3CGetSetMethodByReflectionU3Eb__0_m3DBE8BF6F3D1F4DCA931E793A97B5475812094B3 (U3CU3Ec__DisplayClass35_0_tDF185DD175EE578E3C3ED8554D1F41CFFAD265BB * __this, RuntimeObject * ___source0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		// return delegate (object source, object value) { fieldInfo.SetValue(source, value); };
		FieldInfo_t * L_0 = __this->get_fieldInfo_0();
		RuntimeObject * L_1 = ___source0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C(L_0, L_1, L_2, /*hidden argument*/NULL);
		// return delegate (object source, object value) { fieldInfo.SetValue(source, value); };
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
// System.Void PlayFab.Json.ReflectionUtils_ConstructorDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstructorDelegate__ctor_mEC805A53D9BD794456DCB84E73B86D26C18F7964 (ConstructorDelegate_t4487226C10DA6CCAB43C4059510EFFAD5BBE6B05 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Object PlayFab.Json.ReflectionUtils_ConstructorDelegate::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConstructorDelegate_Invoke_m3BC77D163089641601BE8E76F5BD6C7EA804AE0B (ConstructorDelegate_t4487226C10DA6CCAB43C4059510EFFAD5BBE6B05 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef RuntimeObject * (*FunctionPointerType) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___args0, targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___args0);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___args0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___args0);
					else
						result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___args0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___args0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef RuntimeObject * (*FunctionPointerType) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___args0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(targetMethod, targetThis, ___args0);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(targetMethod, targetThis, ___args0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___args0);
					else
						result = VirtFuncInvoker1< RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___args0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___args0) - 1), targetMethod);
				}
				else
				{
					typedef RuntimeObject * (*FunctionPointerType) (void*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult PlayFab.Json.ReflectionUtils_ConstructorDelegate::BeginInvoke(System.Object[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConstructorDelegate_BeginInvoke_mA865BF5C0011E613153AA1BFCDB7AE3673076023 (ConstructorDelegate_t4487226C10DA6CCAB43C4059510EFFAD5BBE6B05 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___args0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Object PlayFab.Json.ReflectionUtils_ConstructorDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConstructorDelegate_EndInvoke_m740D810DAD5837340C88446B2ED9F160621E8F52 (ConstructorDelegate_t4487226C10DA6CCAB43C4059510EFFAD5BBE6B05 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayFab.Json.ReflectionUtils_GetDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetDelegate__ctor_m23C1DBC9E3306D5C105262DB002D01EB9541CE14 (GetDelegate_t9AB020979295CCB233548FEA1EE7075152F081CC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Object PlayFab.Json.ReflectionUtils_GetDelegate::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GetDelegate_Invoke_m2F5AFAB69D988CDDD54C40C59D63320FEA8C5D10 (GetDelegate_t9AB020979295CCB233548FEA1EE7075152F081CC * __this, RuntimeObject * ___source0, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___source0, targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___source0);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___source0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0);
					else
						result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___source0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___source0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___source0);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___source0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0);
					else
						result = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___source0) - 1), targetMethod);
				}
				else
				{
					typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult PlayFab.Json.ReflectionUtils_GetDelegate::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetDelegate_BeginInvoke_m9E3D9532026B7D6365264E819596AFBCB6356D2E (GetDelegate_t9AB020979295CCB233548FEA1EE7075152F081CC * __this, RuntimeObject * ___source0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___source0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Object PlayFab.Json.ReflectionUtils_GetDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GetDelegate_EndInvoke_m488F028E3033B4D90345EFC3E8F387AB30BAF162 (GetDelegate_t9AB020979295CCB233548FEA1EE7075152F081CC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayFab.Json.ReflectionUtils_SetDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetDelegate__ctor_m756507A9898B8522935B604990092346B7710061 (SetDelegate_t0E36BE7527973AE2CCB3FDB961AD0DCCA33F241F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void PlayFab.Json.ReflectionUtils_SetDelegate::Invoke(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetDelegate_Invoke_m6EC4BF84A3792EDEBA9E6ABCF088867308F9E9D9 (SetDelegate_t0E36BE7527973AE2CCB3FDB961AD0DCCA33F241F * __this, RuntimeObject * ___source0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___value1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___source0, ___value1);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___source0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0, ___value1);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0, ___value1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___value1) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___value1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___value1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___source0, ___value1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___source0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___value1);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___value1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___source0) - 1), ___value1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___value1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult PlayFab.Json.ReflectionUtils_SetDelegate::BeginInvoke(System.Object,System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SetDelegate_BeginInvoke_m679E9F52F2757EDA892210CBDCE95BCDA041E02E (SetDelegate_t0E36BE7527973AE2CCB3FDB961AD0DCCA33F241F * __this, RuntimeObject * ___source0, RuntimeObject * ___value1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___source0;
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void PlayFab.Json.ReflectionUtils_SetDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetDelegate_EndInvoke_mE64A0258D0CD29D87A6110B811FDC31F92F7920F (SetDelegate_t0E36BE7527973AE2CCB3FDB961AD0DCCA33F241F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object PlayFab.Json.SimpleJsonInstance_PlayFabSimpleJsonCuztomization::DeserializeObject(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PlayFabSimpleJsonCuztomization_DeserializeObject_m93D5529A83B24E8DA96C844205FEE3AC3F264645 (PlayFabSimpleJsonCuztomization_t203EDD43BC148076B30573A468084CE2D5CC4EB1 * __this, RuntimeObject * ___value0, Type_t * ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayFabSimpleJsonCuztomization_DeserializeObject_m93D5529A83B24E8DA96C844205FEE3AC3F264645_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Type_t * V_1 = NULL;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_2;
	memset((&V_2), 0, sizeof(V_2));
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  V_3;
	memset((&V_3), 0, sizeof(V_3));
	double V_4 = 0.0;
	{
		// var valueStr = value as string;
		RuntimeObject * L_0 = ___value0;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
		// if (valueStr == null) // For all of our custom conversions, value is a string
		String_t* L_1 = V_0;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return base.DeserializeObject(value, type);
		RuntimeObject * L_2 = ___value0;
		Type_t * L_3 = ___type1;
		RuntimeObject * L_4 = PocoJsonSerializerStrategy_DeserializeObject_m0F57B3981D287E428459873F067DE2C22C6BF013(__this, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0013:
	{
		// var underType = Nullable.GetUnderlyingType(type);
		Type_t * L_5 = ___type1;
		Type_t * L_6 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// if (underType != null)
		Type_t * L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_8 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_7, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002c;
		}
	}
	{
		// return DeserializeObject(value, underType);
		RuntimeObject * L_9 = ___value0;
		Type_t * L_10 = V_1;
		RuntimeObject * L_11 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, Type_t * >::Invoke(12 /* System.Object PlayFab.Json.PocoJsonSerializerStrategy::DeserializeObject(System.Object,System.Type) */, __this, L_9, L_10);
		return L_11;
	}

IL_002c:
	{
		// else if (type.GetTypeInfo().IsEnum)
		Type_t * L_12 = ___type1;
		Type_t * L_13 = WsaReflectionExtensions_GetTypeInfo_m8BD30CCE2EC3FFA2142A83351E9AB2CE540066B5(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		bool L_14 = VirtFuncInvoker0< bool >::Invoke(73 /* System.Boolean System.Type::get_IsEnum() */, L_13);
		if (!L_14)
		{
			goto IL_0047;
		}
	}
	{
		// return Enum.Parse(type, (string)value, true);
		Type_t * L_15 = ___type1;
		RuntimeObject * L_16 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_17 = Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039(L_15, ((String_t*)CastclassSealed((RuntimeObject*)L_16, String_t_il2cpp_TypeInfo_var)), (bool)1, /*hidden argument*/NULL);
		return L_17;
	}

IL_0047:
	{
		// else if (type == typeof(DateTime))
		Type_t * L_18 = ___type1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_19, /*hidden argument*/NULL);
		bool L_21 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_18, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0079;
		}
	}
	{
		// var result = DateTime.TryParseExact(valueStr, PlayFabUtil._defaultDateTimeFormats, CultureInfo.InvariantCulture, PlayFabUtil.DateTimeStyles, out output);
		String_t* L_22 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PlayFabUtil_t6B9409219700C3BD9282B5C4A4D9F169B6870C90_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = ((PlayFabUtil_t6B9409219700C3BD9282B5C4A4D9F169B6870C90_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabUtil_t6B9409219700C3BD9282B5C4A4D9F169B6870C90_il2cpp_TypeInfo_var))->get__defaultDateTimeFormats_1();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_24 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		int32_t L_25 = ((PlayFabUtil_t6B9409219700C3BD9282B5C4A4D9F169B6870C90_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabUtil_t6B9409219700C3BD9282B5C4A4D9F169B6870C90_il2cpp_TypeInfo_var))->get_DateTimeStyles_4();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		bool L_26 = DateTime_TryParseExact_m8A1F0C68B9CF7B5174E4675D11E72DA289833AD6(L_22, L_23, L_24, L_25, (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
		// if (result)
		if (!L_26)
		{
			goto IL_00d4;
		}
	}
	{
		// return output;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_27 = V_2;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_28 = L_27;
		RuntimeObject * L_29 = Box(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var, &L_28);
		return L_29;
	}

IL_0079:
	{
		// else if (type == typeof(DateTimeOffset))
		Type_t * L_30 = ___type1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_31, /*hidden argument*/NULL);
		bool L_33 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_30, L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00ab;
		}
	}
	{
		// var result = DateTimeOffset.TryParseExact(valueStr, PlayFabUtil._defaultDateTimeFormats, CultureInfo.InvariantCulture, PlayFabUtil.DateTimeStyles, out output);
		String_t* L_34 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PlayFabUtil_t6B9409219700C3BD9282B5C4A4D9F169B6870C90_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = ((PlayFabUtil_t6B9409219700C3BD9282B5C4A4D9F169B6870C90_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabUtil_t6B9409219700C3BD9282B5C4A4D9F169B6870C90_il2cpp_TypeInfo_var))->get__defaultDateTimeFormats_1();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_36 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		int32_t L_37 = ((PlayFabUtil_t6B9409219700C3BD9282B5C4A4D9F169B6870C90_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabUtil_t6B9409219700C3BD9282B5C4A4D9F169B6870C90_il2cpp_TypeInfo_var))->get_DateTimeStyles_4();
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var);
		bool L_38 = DateTimeOffset_TryParseExact_m43B7CB3D3414B1C97AF5627A711D00E901A25DAC(L_34, L_35, L_36, L_37, (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 *)(&V_3), /*hidden argument*/NULL);
		// if (result)
		if (!L_38)
		{
			goto IL_00d4;
		}
	}
	{
		// return output;
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_39 = V_3;
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_40 = L_39;
		RuntimeObject * L_41 = Box(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var, &L_40);
		return L_41;
	}

IL_00ab:
	{
		// else if (type == typeof(TimeSpan))
		Type_t * L_42 = ___type1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_43, /*hidden argument*/NULL);
		bool L_45 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_42, L_44, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_00d4;
		}
	}
	{
		// if (double.TryParse(valueStr, out seconds))
		String_t* L_46 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		bool L_47 = Double_TryParse_m9152D976CDFE0B30C7E251DDD04EAD6BBD0800B0(L_46, (double*)(&V_4), /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_00d4;
		}
	}
	{
		// return TimeSpan.FromSeconds(seconds);
		double L_48 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_49 = TimeSpan_FromSeconds_m4644EABECA69BC6C07AD649C5898A8E53F4FE7B0(L_48, /*hidden argument*/NULL);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_50 = L_49;
		RuntimeObject * L_51 = Box(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}

IL_00d4:
	{
		// return base.DeserializeObject(value, type);
		RuntimeObject * L_52 = ___value0;
		Type_t * L_53 = ___type1;
		RuntimeObject * L_54 = PocoJsonSerializerStrategy_DeserializeObject_m0F57B3981D287E428459873F067DE2C22C6BF013(__this, L_52, L_53, /*hidden argument*/NULL);
		return L_54;
	}
}
// System.Boolean PlayFab.Json.SimpleJsonInstance_PlayFabSimpleJsonCuztomization::TrySerializeKnownTypes(System.Object,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayFabSimpleJsonCuztomization_TrySerializeKnownTypes_m98612660DE68E87AF2D108854A552FB424FD2970 (PlayFabSimpleJsonCuztomization_t203EDD43BC148076B30573A468084CE2D5CC4EB1 * __this, RuntimeObject * ___input0, RuntimeObject ** ___output1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayFabSimpleJsonCuztomization_TrySerializeKnownTypes_m98612660DE68E87AF2D108854A552FB424FD2970_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  V_1;
	memset((&V_1), 0, sizeof(V_1));
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (input.GetType().GetTypeInfo().IsEnum)
		RuntimeObject * L_0 = ___input0;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_0, /*hidden argument*/NULL);
		Type_t * L_2 = WsaReflectionExtensions_GetTypeInfo_m8BD30CCE2EC3FFA2142A83351E9AB2CE540066B5(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(73 /* System.Boolean System.Type::get_IsEnum() */, L_2);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// output = input.ToString();
		RuntimeObject ** L_4 = ___output1;
		RuntimeObject * L_5 = ___input0;
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		*((RuntimeObject **)L_4) = (RuntimeObject *)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_4, (void*)(RuntimeObject *)L_6);
		// return true;
		return (bool)1;
	}

IL_001c:
	{
		// else if (input is DateTime)
		RuntimeObject * L_7 = ___input0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_7, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var)))
		{
			goto IL_0042;
		}
	}
	{
		// output = ((DateTime)input).ToString(PlayFabUtil._defaultDateTimeFormats[PlayFabUtil.DEFAULT_UTC_OUTPUT_INDEX], CultureInfo.InvariantCulture);
		RuntimeObject ** L_8 = ___output1;
		RuntimeObject * L_9 = ___input0;
		V_0 = ((*(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)UnBox(L_9, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(PlayFabUtil_t6B9409219700C3BD9282B5C4A4D9F169B6870C90_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = ((PlayFabUtil_t6B9409219700C3BD9282B5C4A4D9F169B6870C90_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabUtil_t6B9409219700C3BD9282B5C4A4D9F169B6870C90_il2cpp_TypeInfo_var))->get__defaultDateTimeFormats_1();
		NullCheck(L_10);
		int32_t L_11 = 2;
		String_t* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_13 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_14 = DateTime_ToString_mE44033D2750D165DED2A17A927381872EF9FC986((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), L_12, L_13, /*hidden argument*/NULL);
		*((RuntimeObject **)L_8) = (RuntimeObject *)L_14;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_8, (void*)(RuntimeObject *)L_14);
		// return true;
		return (bool)1;
	}

IL_0042:
	{
		// else if (input is DateTimeOffset)
		RuntimeObject * L_15 = ___input0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_15, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		// output = ((DateTimeOffset)input).ToString(PlayFabUtil._defaultDateTimeFormats[PlayFabUtil.DEFAULT_UTC_OUTPUT_INDEX], CultureInfo.InvariantCulture);
		RuntimeObject ** L_16 = ___output1;
		RuntimeObject * L_17 = ___input0;
		V_1 = ((*(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 *)((DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 *)UnBox(L_17, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(PlayFabUtil_t6B9409219700C3BD9282B5C4A4D9F169B6870C90_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = ((PlayFabUtil_t6B9409219700C3BD9282B5C4A4D9F169B6870C90_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabUtil_t6B9409219700C3BD9282B5C4A4D9F169B6870C90_il2cpp_TypeInfo_var))->get__defaultDateTimeFormats_1();
		NullCheck(L_18);
		int32_t L_19 = 2;
		String_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_21 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_22 = DateTimeOffset_ToString_m6F59F045A0B1063335C1BC88DBD80C1868B9E6AF((DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 *)(&V_1), L_20, L_21, /*hidden argument*/NULL);
		*((RuntimeObject **)L_16) = (RuntimeObject *)L_22;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_16, (void*)(RuntimeObject *)L_22);
		// return true;
		return (bool)1;
	}

IL_0068:
	{
		// else if (input is TimeSpan)
		RuntimeObject * L_23 = ___input0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_23, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var)))
		{
			goto IL_0087;
		}
	}
	{
		// output = ((TimeSpan)input).TotalSeconds;
		RuntimeObject ** L_24 = ___output1;
		RuntimeObject * L_25 = ___input0;
		V_2 = ((*(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)UnBox(L_25, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var))));
		double L_26 = TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_2), /*hidden argument*/NULL);
		double L_27 = L_26;
		RuntimeObject * L_28 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_27);
		*((RuntimeObject **)L_24) = (RuntimeObject *)L_28;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_24, (void*)(RuntimeObject *)L_28);
		// return true;
		return (bool)1;
	}

IL_0087:
	{
		// return base.TrySerializeKnownTypes(input, out output);
		RuntimeObject * L_29 = ___input0;
		RuntimeObject ** L_30 = ___output1;
		bool L_31 = PocoJsonSerializerStrategy_TrySerializeKnownTypes_m67796921D29C117C58781B02AEA311BC62E2E991(__this, L_29, (RuntimeObject **)L_30, /*hidden argument*/NULL);
		return L_31;
	}
}
// System.Void PlayFab.Json.SimpleJsonInstance_PlayFabSimpleJsonCuztomization::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabSimpleJsonCuztomization__ctor_m22B61E29D913F59FE1BB12C3332C9276671B8F0C (PlayFabSimpleJsonCuztomization_t203EDD43BC148076B30573A468084CE2D5CC4EB1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayFabSimpleJsonCuztomization__ctor_m22B61E29D913F59FE1BB12C3332C9276671B8F0C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_tB152DBDAF927D624432CB706707C696F4E740E5D_il2cpp_TypeInfo_var);
		PocoJsonSerializerStrategy__ctor_m026C1210226CAD9AEE8088DE39B9715DC3A392B3(__this, /*hidden argument*/NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DeflateManager_set_WantRfc1950HeaderBytes_m15A21BFD5BB2F088E85B1B6A73AC3EC7532C3052_inline (DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { _WantRfc1950HeaderBytes = value; }
		bool L_0 = ___value0;
		__this->set__WantRfc1950HeaderBytes_73(L_0);
		// set { _WantRfc1950HeaderBytes = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeflateManager_get_WantRfc1950HeaderBytes_m01D0A60D5950C4E50E1112ECA95441FA52878895_inline (DeflateManager_t13E2F0A864D413D9D7EC5B20A0AEEB75EB0CCE38 * __this, const RuntimeMethod* method)
{
	{
		// get { return _WantRfc1950HeaderBytes; }
		bool L_0 = __this->get__WantRfc1950HeaderBytes_73();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
