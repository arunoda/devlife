#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DevLifeActions
struct DevLifeActions_t3C3FBB98CDD7D83809194927C5857A41520DFB6B;
// DevLifeUtils
struct DevLifeUtils_tBBDC305CCDAEBDF94F71A93C42C281A7B9FEE02C;
// DevWelcome
struct DevWelcome_t6C249F748D72C77C583DCDF729060CA6D8D44834;
// Drop
struct Drop_t3A60C9EB2FA8246026B91799577C0F3D6334B19F;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameConfig
struct GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758;
// GameDev
struct GameDev_tD15784FD785A0E3711AA4EB676F2F125BB5A547B;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Drop/<HandleTwitterHit>d__7
struct U3CHandleTwitterHitU3Ed__7_tC3C6C2AE91F8AC90C183A09818F6A0B5E425043E;
// GameConfig/<GameTimer>d__35
struct U3CGameTimerU3Ed__35_tCEC5E4B710F902D97BE7D236A9A8CD09B3ED97F9;
// GameConfig/<SpawnDrops>d__34
struct U3CSpawnDropsU3Ed__34_t35790C78058A4D45D11F2700A7380AD444989BB3;
// GameConfig/FreezeChangeHandler
struct FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Touch[]
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DropType_tE38074440E14D9CE50AAFB6D32FE194DEFD09CA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGameTimerU3Ed__35_tCEC5E4B710F902D97BE7D236A9A8CD09B3ED97F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CHandleTwitterHitU3Ed__7_tC3C6C2AE91F8AC90C183A09818F6A0B5E425043E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawnDropsU3Ed__34_t35790C78058A4D45D11F2700A7380AD444989BB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306;
IL2CPP_EXTERN_C String_t* _stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5;
IL2CPP_EXTERN_C String_t* _stringLiteral17856F2926B28A7336A4ADFB3FF054CF9415075E;
IL2CPP_EXTERN_C String_t* _stringLiteral3DCEC331F2E84567389725C048CAF57C56C8E981;
IL2CPP_EXTERN_C String_t* _stringLiteral456EC52348771D14722DF7ADDBA77F3D7FB74769;
IL2CPP_EXTERN_C String_t* _stringLiteral7ABDDF2D6F14CC443FD31E83DA7FA113B8772D4C;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral92BF76A1BDB6375D7C7C4790AC928E853FAF35BF;
IL2CPP_EXTERN_C String_t* _stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9;
IL2CPP_EXTERN_C String_t* _stringLiteralC75582552AA20A66DE268C800257B84A99CA4E83;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralE4D7EEB995EC2A00359C161470B8E49D0182FACF;
IL2CPP_EXTERN_C String_t* _stringLiteralE6755BD24FDAC5834512B5A5046584B56F53206A;
IL2CPP_EXTERN_C String_t* _stringLiteralE6CAD9E42463CE8B59ACA6650AF9557050B0182B;
IL2CPP_EXTERN_C String_t* _stringLiteralFBBB24A68D66967B9949C068AD8CE046A54F2DF3;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Drop_Start_m8DEDDC9C2DBFFC746A6426672A3CDB22C971FDE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Drop_WithFreezeChange_mECCD12E58F1D0AA223F48998687630E132C92FFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameConfig_NotifyHit_m611627F26C3942503968D3701EE5E0B389792E1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameDev_WithFreezeChange_m0C16C95BF4B152A25A4BD4355C6DC9062606A00D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGameTimerU3Ed__35_System_Collections_IEnumerator_Reset_mA89929FE83DD2FA4FC03099325EE7687EFFC502E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CHandleTwitterHitU3Ed__7_System_Collections_IEnumerator_Reset_m9A657E540008F96895014E062FF47FC34996AA73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnDropsU3Ed__34_System_Collections_IEnumerator_Reset_mDD6FE4042F75C594B637A3BCB8A1EC36E764AF0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t DevLifeActions_ShowGameScene_m83C37DC29B5BDB2C077A39615FB14E8C674EC7CC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DevLifeUtils_Clone_m1525DD84C9D2FD0EC3E1DD9B7F6BCD7B7690C63A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Drop_HandleTwitterHit_m65D6D36F0B1A13300F50556F71C5E7350F50C480_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Drop_Hide_mEAF7E154C0BE74AC8E95A99748709609F5614225_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Drop_OnDestroy_mA8558784C51AB54E029D503997BC82247387A009_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Drop_OnTriggerEnter2D_m2562D0D14E3267A90CE9B3839C6CBE8CB11384EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Drop_Start_m8DEDDC9C2DBFFC746A6426672A3CDB22C971FDE2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Drop_Update_m89137635660D409F567972B564027E1AC02C9D13_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FreezeChangeHandler_BeginInvoke_m1116272B074BD5D261E1482FD9AC21D1798EECA4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameConfig_GameTimer_m9B8356E986C4D4857C73EFAE5488BEC8A1686872_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameConfig_NotifyHit_m611627F26C3942503968D3701EE5E0B389792E1E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameConfig_OffFreezeChange_mDA01D23743EBE468F7B586725B7EEAF741B97256_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameConfig_OnFreezeChange_m967BFDB27950419B9FF363D5EE78AE4290EE3D88_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameConfig_RenderExplodeDev_mB81D09BCDE6A69C2E37268D108C7D4CB899AE6CC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameConfig_RenderExplodeGround_m8AE066EC0E5B520B89DBCFB68AD7370746E4F499_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameConfig_SpawnDrop_mB6E6DB611E499D4705BBD4EF74F499ADFC4F24C3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameConfig_SpawnDrops_mC51CCBB2925A598C681C5ED374522585C8BD1B0D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameConfig_Start_mCE1920427949D869D085AAFD9F12BCDED406D287_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameConfig_UpdateTasksCompleted_mF9448FAECA4CF13B9E42AF3155BDF24F49AFE4AB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameDev_ChangeAnimation_m093F4CAD2374E54BA0273AB685B5AF1050F73118_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameDev_FixedUpdate_m9307CB4CDCAEBC27C37862D817B22969C96430C9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameDev_GetDirection_mADD0754C4A8DDD7199E34DCE42112E0805DD486D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameDev_OnDestroy_m9B45D4DADC11D4FE531092CF96A4FD6215B4C53B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameDev_Start_m79D067A3E0EE8B2A0087B40C2D2F8A5DA1DE6F18_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameDev_Update_m225909E110E56A66E154E10C1FB2EAA6548BB9E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameDev_WithFreezeChange_m0C16C95BF4B152A25A4BD4355C6DC9062606A00D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGameTimerU3Ed__35_MoveNext_m6A3816E8D4E919CA7BA0AB052E81F4763B12B27B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGameTimerU3Ed__35_System_Collections_IEnumerator_Reset_mA89929FE83DD2FA4FC03099325EE7687EFFC502E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CHandleTwitterHitU3Ed__7_MoveNext_m038ADB05D5B8D9E54F0CC62476637625E5BFBC01_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CHandleTwitterHitU3Ed__7_System_Collections_IEnumerator_Reset_m9A657E540008F96895014E062FF47FC34996AA73_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSpawnDropsU3Ed__34_MoveNext_mB29707CF55CC9760BF07E8698F357A76BD47FBC8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSpawnDropsU3Ed__34_System_Collections_IEnumerator_Reset_mDD6FE4042F75C594B637A3BCB8A1EC36E764AF0D_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// DevLifeUtils
struct  DevLifeUtils_tBBDC305CCDAEBDF94F71A93C42C281A7B9FEE02C  : public RuntimeObject
{
public:

public:
};


// Drop_<HandleTwitterHit>d__7
struct  U3CHandleTwitterHitU3Ed__7_tC3C6C2AE91F8AC90C183A09818F6A0B5E425043E  : public RuntimeObject
{
public:
	// System.Int32 Drop_<HandleTwitterHit>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Drop_<HandleTwitterHit>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Drop Drop_<HandleTwitterHit>d__7::<>4__this
	Drop_t3A60C9EB2FA8246026B91799577C0F3D6334B19F * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CHandleTwitterHitU3Ed__7_tC3C6C2AE91F8AC90C183A09818F6A0B5E425043E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CHandleTwitterHitU3Ed__7_tC3C6C2AE91F8AC90C183A09818F6A0B5E425043E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CHandleTwitterHitU3Ed__7_tC3C6C2AE91F8AC90C183A09818F6A0B5E425043E, ___U3CU3E4__this_2)); }
	inline Drop_t3A60C9EB2FA8246026B91799577C0F3D6334B19F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Drop_t3A60C9EB2FA8246026B91799577C0F3D6334B19F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Drop_t3A60C9EB2FA8246026B91799577C0F3D6334B19F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// GameConfig_<GameTimer>d__35
struct  U3CGameTimerU3Ed__35_tCEC5E4B710F902D97BE7D236A9A8CD09B3ED97F9  : public RuntimeObject
{
public:
	// System.Int32 GameConfig_<GameTimer>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameConfig_<GameTimer>d__35::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameConfig GameConfig_<GameTimer>d__35::<>4__this
	GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * ___U3CU3E4__this_2;
	// System.Int32 GameConfig_<GameTimer>d__35::<lc>5__2
	int32_t ___U3ClcU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGameTimerU3Ed__35_tCEC5E4B710F902D97BE7D236A9A8CD09B3ED97F9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGameTimerU3Ed__35_tCEC5E4B710F902D97BE7D236A9A8CD09B3ED97F9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGameTimerU3Ed__35_tCEC5E4B710F902D97BE7D236A9A8CD09B3ED97F9, ___U3CU3E4__this_2)); }
	inline GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClcU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CGameTimerU3Ed__35_tCEC5E4B710F902D97BE7D236A9A8CD09B3ED97F9, ___U3ClcU3E5__2_3)); }
	inline int32_t get_U3ClcU3E5__2_3() const { return ___U3ClcU3E5__2_3; }
	inline int32_t* get_address_of_U3ClcU3E5__2_3() { return &___U3ClcU3E5__2_3; }
	inline void set_U3ClcU3E5__2_3(int32_t value)
	{
		___U3ClcU3E5__2_3 = value;
	}
};


// GameConfig_<SpawnDrops>d__34
struct  U3CSpawnDropsU3Ed__34_t35790C78058A4D45D11F2700A7380AD444989BB3  : public RuntimeObject
{
public:
	// System.Int32 GameConfig_<SpawnDrops>d__34::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameConfig_<SpawnDrops>d__34::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameConfig GameConfig_<SpawnDrops>d__34::<>4__this
	GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSpawnDropsU3Ed__34_t35790C78058A4D45D11F2700A7380AD444989BB3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSpawnDropsU3Ed__34_t35790C78058A4D45D11F2700A7380AD444989BB3, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSpawnDropsU3Ed__34_t35790C78058A4D45D11F2700A7380AD444989BB3, ___U3CU3E4__this_2)); }
	inline GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
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

// GameConfig_DropType
struct  DropType_tE38074440E14D9CE50AAFB6D32FE194DEFD09CA9 
{
public:
	// System.Int32 GameConfig_DropType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DropType_tE38074440E14D9CE50AAFB6D32FE194DEFD09CA9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
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

// UnityEngine.TouchPhase
struct  TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct  TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Touch
struct  Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// GameConfig_FreezeChangeHandler
struct  FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6  : public MulticastDelegate_t
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


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// UnityEngine.Rigidbody2D
struct  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct  Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// DevLifeActions
struct  DevLifeActions_t3C3FBB98CDD7D83809194927C5857A41520DFB6B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// DevWelcome
struct  DevWelcome_t6C249F748D72C77C583DCDF729060CA6D8D44834  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject DevWelcome::logo
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___logo_4;
	// UnityEngine.GameObject DevWelcome::startNow
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___startNow_5;

public:
	inline static int32_t get_offset_of_logo_4() { return static_cast<int32_t>(offsetof(DevWelcome_t6C249F748D72C77C583DCDF729060CA6D8D44834, ___logo_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_logo_4() const { return ___logo_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_logo_4() { return &___logo_4; }
	inline void set_logo_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___logo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logo_4), (void*)value);
	}

	inline static int32_t get_offset_of_startNow_5() { return static_cast<int32_t>(offsetof(DevWelcome_t6C249F748D72C77C583DCDF729060CA6D8D44834, ___startNow_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_startNow_5() const { return ___startNow_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_startNow_5() { return &___startNow_5; }
	inline void set_startNow_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___startNow_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startNow_5), (void*)value);
	}
};


// Drop
struct  Drop_t3A60C9EB2FA8246026B91799577C0F3D6334B19F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameConfig_DropType Drop::type
	int32_t ___type_4;
	// System.Boolean Drop::causedFreezing
	bool ___causedFreezing_5;

public:
	inline static int32_t get_offset_of_type_4() { return static_cast<int32_t>(offsetof(Drop_t3A60C9EB2FA8246026B91799577C0F3D6334B19F, ___type_4)); }
	inline int32_t get_type_4() const { return ___type_4; }
	inline int32_t* get_address_of_type_4() { return &___type_4; }
	inline void set_type_4(int32_t value)
	{
		___type_4 = value;
	}

	inline static int32_t get_offset_of_causedFreezing_5() { return static_cast<int32_t>(offsetof(Drop_t3A60C9EB2FA8246026B91799577C0F3D6334B19F, ___causedFreezing_5)); }
	inline bool get_causedFreezing_5() const { return ___causedFreezing_5; }
	inline bool* get_address_of_causedFreezing_5() { return &___causedFreezing_5; }
	inline void set_causedFreezing_5(bool value)
	{
		___causedFreezing_5 = value;
	}
};


// GameConfig
struct  GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] GameConfig::drops
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___drops_4;
	// UnityEngine.GameObject GameConfig::wallLeft
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___wallLeft_5;
	// UnityEngine.GameObject GameConfig::wallRight
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___wallRight_6;
	// UnityEngine.GameObject GameConfig::gameDev
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameDev_7;
	// UnityEngine.GameObject GameConfig::explodeDev
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___explodeDev_8;
	// UnityEngine.GameObject GameConfig::explodeGround
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___explodeGround_9;
	// UnityEngine.GameObject GameConfig::twitterStrom
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___twitterStrom_10;
	// UnityEngine.UI.Text GameConfig::labelTasksCompleted
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___labelTasksCompleted_11;
	// UnityEngine.UI.Text GameConfig::labelTimeLeft
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___labelTimeLeft_12;
	// UnityEngine.UI.Text GameConfig::labelTotalTasksCompleted
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___labelTotalTasksCompleted_13;
	// UnityEngine.GameObject GameConfig::gameOverPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameOverPanel_14;
	// System.Int32 GameConfig::gameTime
	int32_t ___gameTime_15;
	// System.Single GameConfig::devSpeed
	float ___devSpeed_16;
	// System.Single GameConfig::dropSpeed
	float ___dropSpeed_17;
	// System.Int32 GameConfig::noOfDropsInScreen
	int32_t ___noOfDropsInScreen_18;
	// System.Int32 GameConfig::twitterHits
	int32_t ___twitterHits_19;
	// System.Int32 GameConfig::stackOverflowHits
	int32_t ___stackOverflowHits_20;
	// System.Int32 GameConfig::youtubeHits
	int32_t ___youtubeHits_21;
	// UnityEngine.Camera GameConfig::mainCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___mainCamera_23;
	// System.Int32 GameConfig::prevScreenWidthPixels
	int32_t ___prevScreenWidthPixels_24;
	// UnityEngine.Coroutine GameConfig::spawnDropsHandler
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___spawnDropsHandler_25;
	// System.Boolean GameConfig::freezed
	bool ___freezed_26;
	// System.Boolean GameConfig::gameOver
	bool ___gameOver_27;
	// GameConfig_FreezeChangeHandler GameConfig::freezeHandlers
	FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 * ___freezeHandlers_28;

public:
	inline static int32_t get_offset_of_drops_4() { return static_cast<int32_t>(offsetof(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758, ___drops_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_drops_4() const { return ___drops_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_drops_4() { return &___drops_4; }
	inline void set_drops_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___drops_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___drops_4), (void*)value);
	}

	inline static int32_t get_offset_of_wallLeft_5() { return static_cast<int32_t>(offsetof(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758, ___wallLeft_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_wallLeft_5() const { return ___wallLeft_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_wallLeft_5() { return &___wallLeft_5; }
	inline void set_wallLeft_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___wallLeft_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wallLeft_5), (void*)value);
	}

	inline static int32_t get_offset_of_wallRight_6() { return static_cast<int32_t>(offsetof(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758, ___wallRight_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_wallRight_6() const { return ___wallRight_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_wallRight_6() { return &___wallRight_6; }
	inline void set_wallRight_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___wallRight_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wallRight_6), (void*)value);
	}

	inline static int32_t get_offset_of_gameDev_7() { return static_cast<int32_t>(offsetof(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758, ___gameDev_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameDev_7() const { return ___gameDev_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameDev_7() { return &___gameDev_7; }
	inline void set_gameDev_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameDev_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameDev_7), (void*)value);
	}

	inline static int32_t get_offset_of_explodeDev_8() { return static_cast<int32_t>(offsetof(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758, ___explodeDev_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_explodeDev_8() const { return ___explodeDev_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_explodeDev_8() { return &___explodeDev_8; }
	inline void set_explodeDev_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___explodeDev_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___explodeDev_8), (void*)value);
	}

	inline static int32_t get_offset_of_explodeGround_9() { return static_cast<int32_t>(offsetof(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758, ___explodeGround_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_explodeGround_9() const { return ___explodeGround_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_explodeGround_9() { return &___explodeGround_9; }
	inline void set_explodeGround_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___explodeGround_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___explodeGround_9), (void*)value);
	}

	inline static int32_t get_offset_of_twitterStrom_10() { return static_cast<int32_t>(offsetof(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758, ___twitterStrom_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_twitterStrom_10() const { return ___twitterStrom_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_twitterStrom_10() { return &___twitterStrom_10; }
	inline void set_twitterStrom_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___twitterStrom_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___twitterStrom_10), (void*)value);
	}

	inline static int32_t get_offset_of_labelTasksCompleted_11() { return static_cast<int32_t>(offsetof(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758, ___labelTasksCompleted_11)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_labelTasksCompleted_11() const { return ___labelTasksCompleted_11; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_labelTasksCompleted_11() { return &___labelTasksCompleted_11; }
	inline void set_labelTasksCompleted_11(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___labelTasksCompleted_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___labelTasksCompleted_11), (void*)value);
	}

	inline static int32_t get_offset_of_labelTimeLeft_12() { return static_cast<int32_t>(offsetof(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758, ___labelTimeLeft_12)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_labelTimeLeft_12() const { return ___labelTimeLeft_12; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_labelTimeLeft_12() { return &___labelTimeLeft_12; }
	inline void set_labelTimeLeft_12(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___labelTimeLeft_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___labelTimeLeft_12), (void*)value);
	}

	inline static int32_t get_offset_of_labelTotalTasksCompleted_13() { return static_cast<int32_t>(offsetof(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758, ___labelTotalTasksCompleted_13)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_labelTotalTasksCompleted_13() const { return ___labelTotalTasksCompleted_13; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_labelTotalTasksCompleted_13() { return &___labelTotalTasksCompleted_13; }
	inline void set_labelTotalTasksCompleted_13(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___labelTotalTasksCompleted_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___labelTotalTasksCompleted_13), (void*)value);
	}

	inline static int32_t get_offset_of_gameOverPanel_14() { return static_cast<int32_t>(offsetof(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758, ___gameOverPanel_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameOverPanel_14() const { return ___gameOverPanel_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameOverPanel_14() { return &___gameOverPanel_14; }
	inline void set_gameOverPanel_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameOverPanel_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverPanel_14), (void*)value);
	}

	inline static int32_t get_offset_of_gameTime_15() { return static_cast<int32_t>(offsetof(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758, ___gameTime_15)); }
	inline int32_t get_gameTime_15() const { return ___gameTime_15; }
	inline int32_t* get_address_of_gameTime_15() { return &___gameTime_15; }
	inline void set_gameTime_15(int32_t value)
	{
		___gameTime_15 = value;
	}

	inline static int32_t get_offset_of_devSpeed_16() { return static_cast<int32_t>(offsetof(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758, ___devSpeed_16)); }
	inline float get_devSpeed_16() const { return ___devSpeed_16; }
	inline float* get_address_of_devSpeed_16() { return &___devSpeed_16; }
	inline void set_devSpeed_16(float value)
	{
		___devSpeed_16 = value;
	}

	inline static int32_t get_offset_of_dropSpeed_17() { return static_cast<int32_t>(offsetof(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758, ___dropSpeed_17)); }
	inline float get_dropSpeed_17() const { return ___dropSpeed_17; }
	inline float* get_address_of_dropSpeed_17() { return &___dropSpeed_17; }
	inline void set_dropSpeed_17(float value)
	{
		___dropSpeed_17 = value;
	}

	inline static int32_t get_offset_of_noOfDropsInScreen_18() { return static_cast<int32_t>(offsetof(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758, ___noOfDropsInScreen_18)); }
	inline int32_t get_noOfDropsInScreen_18() const { return ___noOfDropsInScreen_18; }
	inline int32_t* get_address_of_noOfDropsInScreen_18() { return &___noOfDropsInScreen_18; }
	inline void set_noOfDropsInScreen_18(int32_t value)
	{
		___noOfDropsInScreen_18 = value;
	}

	inline static int32_t get_offset_of_twitterHits_19() { return static_cast<int32_t>(offsetof(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758, ___twitterHits_19)); }
	inline int32_t get_twitterHits_19() const { return ___twitterHits_19; }
	inline int32_t* get_address_of_twitterHits_19() { return &___twitterHits_19; }
	inline void set_twitterHits_19(int32_t value)
	{
		___twitterHits_19 = value;
	}

	inline static int32_t get_offset_of_stackOverflowHits_20() { return static_cast<int32_t>(offsetof(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758, ___stackOverflowHits_20)); }
	inline int32_t get_stackOverflowHits_20() const { return ___stackOverflowHits_20; }
	inline int32_t* get_address_of_stackOverflowHits_20() { return &___stackOverflowHits_20; }
	inline void set_stackOverflowHits_20(int32_t value)
	{
		___stackOverflowHits_20 = value;
	}

	inline static int32_t get_offset_of_youtubeHits_21() { return static_cast<int32_t>(offsetof(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758, ___youtubeHits_21)); }
	inline int32_t get_youtubeHits_21() const { return ___youtubeHits_21; }
	inline int32_t* get_address_of_youtubeHits_21() { return &___youtubeHits_21; }
	inline void set_youtubeHits_21(int32_t value)
	{
		___youtubeHits_21 = value;
	}

	inline static int32_t get_offset_of_mainCamera_23() { return static_cast<int32_t>(offsetof(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758, ___mainCamera_23)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_mainCamera_23() const { return ___mainCamera_23; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_mainCamera_23() { return &___mainCamera_23; }
	inline void set_mainCamera_23(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___mainCamera_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainCamera_23), (void*)value);
	}

	inline static int32_t get_offset_of_prevScreenWidthPixels_24() { return static_cast<int32_t>(offsetof(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758, ___prevScreenWidthPixels_24)); }
	inline int32_t get_prevScreenWidthPixels_24() const { return ___prevScreenWidthPixels_24; }
	inline int32_t* get_address_of_prevScreenWidthPixels_24() { return &___prevScreenWidthPixels_24; }
	inline void set_prevScreenWidthPixels_24(int32_t value)
	{
		___prevScreenWidthPixels_24 = value;
	}

	inline static int32_t get_offset_of_spawnDropsHandler_25() { return static_cast<int32_t>(offsetof(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758, ___spawnDropsHandler_25)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_spawnDropsHandler_25() const { return ___spawnDropsHandler_25; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_spawnDropsHandler_25() { return &___spawnDropsHandler_25; }
	inline void set_spawnDropsHandler_25(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___spawnDropsHandler_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnDropsHandler_25), (void*)value);
	}

	inline static int32_t get_offset_of_freezed_26() { return static_cast<int32_t>(offsetof(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758, ___freezed_26)); }
	inline bool get_freezed_26() const { return ___freezed_26; }
	inline bool* get_address_of_freezed_26() { return &___freezed_26; }
	inline void set_freezed_26(bool value)
	{
		___freezed_26 = value;
	}

	inline static int32_t get_offset_of_gameOver_27() { return static_cast<int32_t>(offsetof(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758, ___gameOver_27)); }
	inline bool get_gameOver_27() const { return ___gameOver_27; }
	inline bool* get_address_of_gameOver_27() { return &___gameOver_27; }
	inline void set_gameOver_27(bool value)
	{
		___gameOver_27 = value;
	}

	inline static int32_t get_offset_of_freezeHandlers_28() { return static_cast<int32_t>(offsetof(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758, ___freezeHandlers_28)); }
	inline FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 * get_freezeHandlers_28() const { return ___freezeHandlers_28; }
	inline FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 ** get_address_of_freezeHandlers_28() { return &___freezeHandlers_28; }
	inline void set_freezeHandlers_28(FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 * value)
	{
		___freezeHandlers_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___freezeHandlers_28), (void*)value);
	}
};

struct GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_StaticFields
{
public:
	// GameConfig GameConfig::current
	GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * ___current_22;

public:
	inline static int32_t get_offset_of_current_22() { return static_cast<int32_t>(offsetof(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_StaticFields, ___current_22)); }
	inline GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * get_current_22() const { return ___current_22; }
	inline GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 ** get_address_of_current_22() { return &___current_22; }
	inline void set_current_22(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * value)
	{
		___current_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_22), (void*)value);
	}
};


// GameDev
struct  GameDev_tD15784FD785A0E3711AA4EB676F2F125BB5A547B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single GameDev::directionX
	float ___directionX_4;
	// UnityEngine.Rigidbody2D GameDev::body
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___body_5;
	// UnityEngine.GameObject GameDev::dev
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___dev_6;
	// UnityEngine.Animator GameDev::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_7;
	// UnityEngine.Camera GameDev::mainCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___mainCamera_8;
	// UnityEngine.Vector3 GameDev::prevPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___prevPosition_9;

public:
	inline static int32_t get_offset_of_directionX_4() { return static_cast<int32_t>(offsetof(GameDev_tD15784FD785A0E3711AA4EB676F2F125BB5A547B, ___directionX_4)); }
	inline float get_directionX_4() const { return ___directionX_4; }
	inline float* get_address_of_directionX_4() { return &___directionX_4; }
	inline void set_directionX_4(float value)
	{
		___directionX_4 = value;
	}

	inline static int32_t get_offset_of_body_5() { return static_cast<int32_t>(offsetof(GameDev_tD15784FD785A0E3711AA4EB676F2F125BB5A547B, ___body_5)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_body_5() const { return ___body_5; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_body_5() { return &___body_5; }
	inline void set_body_5(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___body_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___body_5), (void*)value);
	}

	inline static int32_t get_offset_of_dev_6() { return static_cast<int32_t>(offsetof(GameDev_tD15784FD785A0E3711AA4EB676F2F125BB5A547B, ___dev_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_dev_6() const { return ___dev_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_dev_6() { return &___dev_6; }
	inline void set_dev_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___dev_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dev_6), (void*)value);
	}

	inline static int32_t get_offset_of_anim_7() { return static_cast<int32_t>(offsetof(GameDev_tD15784FD785A0E3711AA4EB676F2F125BB5A547B, ___anim_7)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_7() const { return ___anim_7; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_7() { return &___anim_7; }
	inline void set_anim_7(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_7), (void*)value);
	}

	inline static int32_t get_offset_of_mainCamera_8() { return static_cast<int32_t>(offsetof(GameDev_tD15784FD785A0E3711AA4EB676F2F125BB5A547B, ___mainCamera_8)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_mainCamera_8() const { return ___mainCamera_8; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_mainCamera_8() { return &___mainCamera_8; }
	inline void set_mainCamera_8(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___mainCamera_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainCamera_8), (void*)value);
	}

	inline static int32_t get_offset_of_prevPosition_9() { return static_cast<int32_t>(offsetof(GameDev_tD15784FD785A0E3711AA4EB676F2F125BB5A547B, ___prevPosition_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_prevPosition_9() const { return ___prevPosition_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_prevPosition_9() { return &___prevPosition_9; }
	inline void set_prevPosition_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___prevPosition_9 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Touch[]
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  m_Items[1];

public:
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  value)
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


// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void GameConfig/FreezeChangeHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreezeChangeHandler__ctor_mD41F64C7273196EDC3B6A06835A275FE5FCF76A8 (FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GameConfig::OnFreezeChange(GameConfig/FreezeChangeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameConfig_OnFreezeChange_m967BFDB27950419B9FF363D5EE78AE4290EE3D88 (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 * ___e0, const RuntimeMethod* method);
// System.Void GameConfig::OffFreezeChange(GameConfig/FreezeChangeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameConfig_OffFreezeChange_mDA01D23743EBE468F7B586725B7EEAF741B97256 (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 * ___e0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629 (const RuntimeMethod* method);
// System.Single GameConfig::GetDropSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameConfig_GetDropSpeed_m7240B444CF7BC1F4AC0300A87C57EDFDE22928FD_inline (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean GameConfig::IsFreezed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GameConfig_IsFreezed_mD9F4B8DA838C9A7EB316085CFA8324BA0D7A4ABD_inline (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, String_t* ___tag0, const RuntimeMethod* method);
// System.Void GameConfig::RenderExplodeGround(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameConfig_RenderExplodeGround_m8AE066EC0E5B520B89DBCFB68AD7370746E4F499 (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void GameConfig::NotifyHit(GameConfig/DropType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameConfig_NotifyHit_m611627F26C3942503968D3701EE5E0B389792E1E (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, int32_t ___type0, const RuntimeMethod* method);
// System.Void GameConfig::RenderExplodeDev(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameConfig_RenderExplodeDev_mB81D09BCDE6A69C2E37268D108C7D4CB899AE6CC (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Collections.IEnumerator Drop::HandleTwitterHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Drop_HandleTwitterHit_m65D6D36F0B1A13300F50556F71C5E7350F50C480 (Drop_t3A60C9EB2FA8246026B91799577C0F3D6334B19F * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.Vector3 GameConfig::GetScreenSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GameConfig_GetScreenSize_m4F851F469FFDDC8EF75C4D4FA7DCCA975DAEAF88 (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, const RuntimeMethod* method);
// System.Void Drop/<HandleTwitterHit>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleTwitterHitU3Ed__7__ctor_m3D69B152F531EFD2F16B76D62CFCA1844AFE3577 (U3CHandleTwitterHitU3Ed__7_tC3C6C2AE91F8AC90C183A09818F6A0B5E425043E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.Void GameConfig::UnFreeze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameConfig_UnFreeze_mE1256AE18CC1822E8A51B369FFAFE037888A4281 (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, const RuntimeMethod* method);
// System.Void GameConfig::ChangeWallPositionsPerScreenSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameConfig_ChangeWallPositionsPerScreenSize_m030E6DA1DA2718600712E9734CD3D80DBE88C999 (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___min0, float ___max1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___min0, int32_t ___max1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void GameConfig/<SpawnDrops>d__34::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnDropsU3Ed__34__ctor_m9E5D9BEDEEE023053D3C3156119E08D346BCF425 (U3CSpawnDropsU3Ed__34_t35790C78058A4D45D11F2700A7380AD444989BB3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void GameConfig/<GameTimer>d__35::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameTimerU3Ed__35__ctor_mE0B86A3054AA3D13E54D03C4B0CAB38D6098FB68 (U3CGameTimerU3Ed__35_tCEC5E4B710F902D97BE7D236A9A8CD09B3ED97F9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void GameConfig/FreezeChangeHandler::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreezeChangeHandler_Invoke_m7BC8EE0E8CAD462C16BC9B5938543215FA221775 (FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 * __this, bool ___isFreezed0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___routine0, const RuntimeMethod* method);
// System.Collections.IEnumerator GameConfig::SpawnDrops()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameConfig_SpawnDrops_mC51CCBB2925A598C681C5ED374522585C8BD1B0D (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void GameConfig::UpdateTasksCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameConfig_UpdateTasksCompleted_mF9448FAECA4CF13B9E42AF3155BDF24F49AFE4AB (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, const RuntimeMethod* method);
// System.Int32 GameConfig::GetTasksCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameConfig_GetTasksCompleted_m39CB744485113FE681EF894F4AC436E202CF00AE (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector3 DevLifeUtils::Clone(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  DevLifeUtils_Clone_m558C2D6ED0ACE41E833C4DCAAB0A3B2C5DDDEE0F (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p0, const RuntimeMethod* method);
// System.Void GameDev::ChangeDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDev_ChangeDirection_mE116F20EE90BAABC7FF0575B516B8212D052E3B7 (GameDev_tD15784FD785A0E3711AA4EB676F2F125BB5A547B * __this, const RuntimeMethod* method);
// System.Void GameDev::ChangeAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDev_ChangeAnimation_m093F4CAD2374E54BA0273AB685B5AF1050F73118 (GameDev_tD15784FD785A0E3711AA4EB676F2F125BB5A547B * __this, const RuntimeMethod* method);
// System.Single GameDev::GetDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameDev_GetDirection_mADD0754C4A8DDD7199E34DCE42112E0805DD486D (GameDev_tD15784FD785A0E3711AA4EB676F2F125BB5A547B * __this, const RuntimeMethod* method);
// System.Single GameConfig::GetDevSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameConfig_GetDevSpeed_m735BC01934BB1BF79C9D36D7955F345E4744EDA5_inline (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* Input_get_touches_m26E3034CAE32931E59A480327A3CF4BFC2045E8F (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B (String_t* ___axisName0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// UnityEngine.Vector3 DevLifeUtils::ChangeY(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  DevLifeUtils_ChangeY_mCD926F84EBB7FEAB4B7A5D9A114BB1BA9ECAB6A2 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p0, float ___value1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// System.Void Drop::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drop_Hide_mEAF7E154C0BE74AC8E95A99748709609F5614225 (Drop_t3A60C9EB2FA8246026B91799577C0F3D6334B19F * __this, const RuntimeMethod* method);
// System.Void GameConfig::Freeze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameConfig_Freeze_mB2D4972E5D41E5367D76EEA3E12FDF7B688B13DA (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void GameConfig::SpawnDrop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameConfig_SpawnDrop_mB6E6DB611E499D4705BBD4EF74F499ADFC4F24C3 (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, const RuntimeMethod* method);
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
// System.Void DevLifeActions::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DevLifeActions_Start_m5B3B78E3C0AD00D297DEB2A98F9F8666E17D4D9F (DevLifeActions_t3C3FBB98CDD7D83809194927C5857A41520DFB6B * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void DevLifeActions::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DevLifeActions_Update_mCFD8CFD473CA102D11CB94C23B5A024252C155C4 (DevLifeActions_t3C3FBB98CDD7D83809194927C5857A41520DFB6B * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void DevLifeActions::ShowGameScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DevLifeActions_ShowGameScene_m83C37DC29B5BDB2C077A39615FB14E8C674EC7CC (DevLifeActions_t3C3FBB98CDD7D83809194927C5857A41520DFB6B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DevLifeActions_ShowGameScene_m83C37DC29B5BDB2C077A39615FB14E8C674EC7CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print("ShowGameScene please");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteral7ABDDF2D6F14CC443FD31E83DA7FA113B8772D4C, /*hidden argument*/NULL);
		// SceneManager.LoadScene("Game");
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DevLifeActions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DevLifeActions__ctor_m673DDCCC5F49F6DA0FA1C4D3A5AAE09582BE7D5A (DevLifeActions_t3C3FBB98CDD7D83809194927C5857A41520DFB6B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// UnityEngine.Vector3 DevLifeUtils::ChangeX(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  DevLifeUtils_ChangeX_mF3B907E7BF2758F6D3A33CC8CAC58256BE48468D (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p0, float ___value1, const RuntimeMethod* method)
{
	{
		// return new Vector3(value, p.y, p.z);
		float L_0 = ___value1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___p0;
		float L_2 = L_1.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___p0;
		float L_4 = L_3.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), L_0, L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Vector2 DevLifeUtils::ChangeX(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  DevLifeUtils_ChangeX_m0A1F953F0CF7516C48DE6710CFE0C77D0A696ECE (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___p0, float ___value1, const RuntimeMethod* method)
{
	{
		// return new Vector2(value, p.y);
		float L_0 = ___value1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___p0;
		float L_2 = L_1.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_3), L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Vector3 DevLifeUtils::ChangeY(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  DevLifeUtils_ChangeY_mCD926F84EBB7FEAB4B7A5D9A114BB1BA9ECAB6A2 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p0, float ___value1, const RuntimeMethod* method)
{
	{
		// return new Vector3(p.x, value, p.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___p0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___value1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___p0;
		float L_4 = L_3.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), L_1, L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Vector2 DevLifeUtils::ChangeY(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  DevLifeUtils_ChangeY_mC788B8EF032B6456253F23F88F61DA4496158524 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___p0, float ___value1, const RuntimeMethod* method)
{
	{
		// return new Vector2(p.x, value);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___p0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___value1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_3), L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Vector3 DevLifeUtils::Clone(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  DevLifeUtils_Clone_m558C2D6ED0ACE41E833C4DCAAB0A3B2C5DDDEE0F (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p0, const RuntimeMethod* method)
{
	{
		// return new Vector3(p.x, p.y, p.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___p0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___p0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___p0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector2 DevLifeUtils::Clone(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  DevLifeUtils_Clone_m1525DD84C9D2FD0EC3E1DD9B7F6BCD7B7690C63A (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DevLifeUtils_Clone_m1525DD84C9D2FD0EC3E1DD9B7F6BCD7B7690C63A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Vector3(p.x, p.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___p0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___p0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void DevLifeUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DevLifeUtils__ctor_m5141B8F256B124CCDAFD4D27C729E04BD16950E4 (DevLifeUtils_tBBDC305CCDAEBDF94F71A93C42C281A7B9FEE02C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void DevWelcome::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DevWelcome_Start_mE89D0C7960C2E8314E61EC4FFCDA5D27430338E3 (DevWelcome_t6C249F748D72C77C583DCDF729060CA6D8D44834 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void DevWelcome::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DevWelcome_Update_m76D397160DAD885EE036E5E599987782B7B277C9 (DevWelcome_t6C249F748D72C77C583DCDF729060CA6D8D44834 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void DevWelcome::ShowLogoAndButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DevWelcome_ShowLogoAndButton_mE861C0D8F534FE992092017A1344D804D79CAB59 (DevWelcome_t6C249F748D72C77C583DCDF729060CA6D8D44834 * __this, const RuntimeMethod* method)
{
	{
		// logo.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_logo_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// startNow.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_startNow_5();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DevWelcome::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DevWelcome__ctor_m141B214BEFF2362D09226B9C7BBC1ACE3E506211 (DevWelcome_t6C249F748D72C77C583DCDF729060CA6D8D44834 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Drop::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drop_Start_m8DEDDC9C2DBFFC746A6426672A3CDB22C971FDE2 (Drop_t3A60C9EB2FA8246026B91799577C0F3D6334B19F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Drop_Start_m8DEDDC9C2DBFFC746A6426672A3CDB22C971FDE2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameObject.name.Contains("Twitter")) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_1, _stringLiteralE4D7EEB995EC2A00359C161470B8E49D0182FACF, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// type = GameConfig.DropType.TWITTER;
		__this->set_type_4(0);
		// } else if (gameObject.name.Contains("Youtube"))
		goto IL_007b;
	}

IL_0020:
	{
		// } else if (gameObject.name.Contains("Youtube"))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_4, _stringLiteralFBBB24A68D66967B9949C068AD8CE046A54F2DF3, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		// type = GameConfig.DropType.YOUTUBE;
		__this->set_type_4(1);
		// }
		goto IL_007b;
	}

IL_0040:
	{
		// else if (gameObject.name.Contains("Stack"))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_8 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_7, _stringLiteral17856F2926B28A7336A4ADFB3FF054CF9415075E, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0060;
		}
	}
	{
		// type = GameConfig.DropType.STACKOVERFLOW;
		__this->set_type_4(2);
		// } else
		goto IL_007b;
	}

IL_0060:
	{
		// throw new Exception("Unknown drop: " + gameObject.name);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_9, /*hidden argument*/NULL);
		String_t* L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral456EC52348771D14722DF7ADDBA77F3D7FB74769, L_10, /*hidden argument*/NULL);
		Exception_t * L_12 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_12, L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, Drop_Start_m8DEDDC9C2DBFFC746A6426672A3CDB22C971FDE2_RuntimeMethod_var);
	}

IL_007b:
	{
		// GameConfig.current.OnFreezeChange(WithFreezeChange);
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_13 = ((GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_StaticFields*)il2cpp_codegen_static_fields_for(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_il2cpp_TypeInfo_var))->get_current_22();
		FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 * L_14 = (FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 *)il2cpp_codegen_object_new(FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6_il2cpp_TypeInfo_var);
		FreezeChangeHandler__ctor_mD41F64C7273196EDC3B6A06835A275FE5FCF76A8(L_14, __this, (intptr_t)((intptr_t)Drop_WithFreezeChange_mECCD12E58F1D0AA223F48998687630E132C92FFB_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_13);
		GameConfig_OnFreezeChange_m967BFDB27950419B9FF363D5EE78AE4290EE3D88(L_13, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Drop::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drop_OnDestroy_mA8558784C51AB54E029D503997BC82247387A009 (Drop_t3A60C9EB2FA8246026B91799577C0F3D6334B19F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Drop_OnDestroy_mA8558784C51AB54E029D503997BC82247387A009_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameConfig.current.OffFreezeChange(WithFreezeChange);
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_0 = ((GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_StaticFields*)il2cpp_codegen_static_fields_for(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_il2cpp_TypeInfo_var))->get_current_22();
		FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 * L_1 = (FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 *)il2cpp_codegen_object_new(FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6_il2cpp_TypeInfo_var);
		FreezeChangeHandler__ctor_mD41F64C7273196EDC3B6A06835A275FE5FCF76A8(L_1, __this, (intptr_t)((intptr_t)Drop_WithFreezeChange_mECCD12E58F1D0AA223F48998687630E132C92FFB_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		GameConfig_OffFreezeChange_mDA01D23743EBE468F7B586725B7EEAF741B97256(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Drop::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drop_Update_m89137635660D409F567972B564027E1AC02C9D13 (Drop_t3A60C9EB2FA8246026B91799577C0F3D6334B19F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Drop_Update_m89137635660D409F567972B564027E1AC02C9D13_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (causedFreezing)
		bool L_0 = __this->get_causedFreezing_5();
		if (!L_0)
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
		// transform.position += Vector3.down * (GameConfig.current.GetDropSpeed() * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = L_1;
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_5 = ((GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_StaticFields*)il2cpp_codegen_static_fields_for(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_il2cpp_TypeInfo_var))->get_current_22();
		NullCheck(L_5);
		float L_6 = GameConfig_GetDropSpeed_m7240B444CF7BC1F4AC0300A87C57EDFDE22928FD_inline(L_5, /*hidden argument*/NULL);
		float L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_4, ((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_3, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_2, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Drop::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drop_OnTriggerEnter2D_m2562D0D14E3267A90CE9B3839C6CBE8CB11384EE (Drop_t3A60C9EB2FA8246026B91799577C0F3D6334B19F * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Drop_OnTriggerEnter2D_m2562D0D14E3267A90CE9B3839C6CBE8CB11384EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameConfig.current.IsFreezed()) return;
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_0 = ((GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_StaticFields*)il2cpp_codegen_static_fields_for(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_il2cpp_TypeInfo_var))->get_current_22();
		NullCheck(L_0);
		bool L_1 = GameConfig_IsFreezed_mD9F4B8DA838C9A7EB316085CFA8324BA0D7A4ABD_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// if (GameConfig.current.IsFreezed()) return;
		return;
	}

IL_000d:
	{
		// if (other.CompareTag("Floor"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_2 = ___other0;
		NullCheck(L_2);
		bool L_3 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_2, _stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// GameConfig.current.RenderExplodeGround(transform.position);
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_4 = ((GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_StaticFields*)il2cpp_codegen_static_fields_for(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_il2cpp_TypeInfo_var))->get_current_22();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameConfig_RenderExplodeGround_m8AE066EC0E5B520B89DBCFB68AD7370746E4F499(L_4, L_6, /*hidden argument*/NULL);
		// } else if (other.CompareTag("Player"))
		goto IL_0079;
	}

IL_0031:
	{
		// } else if (other.CompareTag("Player"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_7 = ___other0;
		NullCheck(L_7);
		bool L_8 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_7, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0079;
		}
	}
	{
		// GameConfig.current.NotifyHit(type);
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_9 = ((GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_StaticFields*)il2cpp_codegen_static_fields_for(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_il2cpp_TypeInfo_var))->get_current_22();
		int32_t L_10 = __this->get_type_4();
		NullCheck(L_9);
		GameConfig_NotifyHit_m611627F26C3942503968D3701EE5E0B389792E1E(L_9, L_10, /*hidden argument*/NULL);
		// GameConfig.current.RenderExplodeDev(transform.position);
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_11 = ((GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_StaticFields*)il2cpp_codegen_static_fields_for(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_il2cpp_TypeInfo_var))->get_current_22();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		GameConfig_RenderExplodeDev_mB81D09BCDE6A69C2E37268D108C7D4CB899AE6CC(L_11, L_13, /*hidden argument*/NULL);
		// if (type == GameConfig.DropType.TWITTER)
		int32_t L_14 = __this->get_type_4();
		if (L_14)
		{
			goto IL_0079;
		}
	}
	{
		// StartCoroutine(HandleTwitterHit());
		RuntimeObject* L_15 = Drop_HandleTwitterHit_m65D6D36F0B1A13300F50556F71C5E7350F50C480(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_15, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0079:
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Drop::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drop_Hide_mEAF7E154C0BE74AC8E95A99748709609F5614225 (Drop_t3A60C9EB2FA8246026B91799577C0F3D6334B19F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Drop_Hide_mEAF7E154C0BE74AC8E95A99748709609F5614225_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var screenSize = GameConfig.current.GetScreenSize();
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_0 = ((GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_StaticFields*)il2cpp_codegen_static_fields_for(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_il2cpp_TypeInfo_var))->get_current_22();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = GameConfig_GetScreenSize_m4F851F469FFDDC8EF75C4D4FA7DCCA975DAEAF88(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// transform.position = new Vector3(screenSize.x + 10, screenSize.y + 10, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = V_0;
		float L_4 = L_3.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		float L_6 = L_5.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), ((float)il2cpp_codegen_add((float)L_4, (float)(10.0f))), ((float)il2cpp_codegen_add((float)L_6, (float)(10.0f))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_2, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Drop::HandleTwitterHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Drop_HandleTwitterHit_m65D6D36F0B1A13300F50556F71C5E7350F50C480 (Drop_t3A60C9EB2FA8246026B91799577C0F3D6334B19F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Drop_HandleTwitterHit_m65D6D36F0B1A13300F50556F71C5E7350F50C480_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CHandleTwitterHitU3Ed__7_tC3C6C2AE91F8AC90C183A09818F6A0B5E425043E * L_0 = (U3CHandleTwitterHitU3Ed__7_tC3C6C2AE91F8AC90C183A09818F6A0B5E425043E *)il2cpp_codegen_object_new(U3CHandleTwitterHitU3Ed__7_tC3C6C2AE91F8AC90C183A09818F6A0B5E425043E_il2cpp_TypeInfo_var);
		U3CHandleTwitterHitU3Ed__7__ctor_m3D69B152F531EFD2F16B76D62CFCA1844AFE3577(L_0, 0, /*hidden argument*/NULL);
		U3CHandleTwitterHitU3Ed__7_tC3C6C2AE91F8AC90C183A09818F6A0B5E425043E * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Drop::WithFreezeChange(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drop_WithFreezeChange_mECCD12E58F1D0AA223F48998687630E132C92FFB (Drop_t3A60C9EB2FA8246026B91799577C0F3D6334B19F * __this, bool ___isFreezed0, const RuntimeMethod* method)
{
	{
		// if (causedFreezing) return;
		bool L_0 = __this->get_causedFreezing_5();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (causedFreezing) return;
		return;
	}

IL_0009:
	{
		// gameObject.SetActive(!isFreezed);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_2 = ___isFreezed0;
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Drop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drop__ctor_m83520FECD1D409D37733E5A938099E04ACE279C7 (Drop_t3A60C9EB2FA8246026B91799577C0F3D6334B19F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameConfig::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameConfig_Start_mCE1920427949D869D085AAFD9F12BCDED406D287 (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameConfig_Start_mCE1920427949D869D085AAFD9F12BCDED406D287_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mainCamera = Camera.main;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		__this->set_mainCamera_23(L_0);
		// GameConfig.current = this;
		((GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_StaticFields*)il2cpp_codegen_static_fields_for(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_il2cpp_TypeInfo_var))->set_current_22(__this);
		// StartCoroutine(nameof(GameTimer));
		MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E(__this, _stringLiteral3DCEC331F2E84567389725C048CAF57C56C8E981, /*hidden argument*/NULL);
		// UnFreeze();
		GameConfig_UnFreeze_mE1256AE18CC1822E8A51B369FFAFE037888A4281(__this, /*hidden argument*/NULL);
		// gameOverPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_gameOverPanel_14();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameConfig::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameConfig_Update_m10B24E99683F09D4975E726CFDAD0E83DBC03F35 (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, const RuntimeMethod* method)
{
	{
		// ChangeWallPositionsPerScreenSize();
		GameConfig_ChangeWallPositionsPerScreenSize_m030E6DA1DA2718600712E9734CD3D80DBE88C999(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameConfig::SpawnDrop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameConfig_SpawnDrop_mB6E6DB611E499D4705BBD4EF74F499ADFC4F24C3 (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameConfig_SpawnDrop_mB6E6DB611E499D4705BBD4EF74F499ADFC4F24C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// var screenSize = GetScreenSize();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = GameConfig_GetScreenSize_m4F851F469FFDDC8EF75C4D4FA7DCCA975DAEAF88(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// var xPos = Random.Range(-screenSize.x + 0.5f, screenSize.x - 0.5f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = V_0;
		float L_2 = L_1.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = V_0;
		float L_4 = L_3.get_x_2();
		float L_5 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((float)il2cpp_codegen_add((float)((-L_2)), (float)(0.5f))), ((float)il2cpp_codegen_subtract((float)L_4, (float)(0.5f))), /*hidden argument*/NULL);
		V_1 = L_5;
		// var drop = drops[Random.Range(0, drops.Length)];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = __this->get_drops_4();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = __this->get_drops_4();
		NullCheck(L_7);
		int32_t L_8 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, (((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))), /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_9 = L_8;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		// Instantiate(drop, new Vector2(xPos, screenSize.y), Quaternion.identity);
		float L_11 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_0;
		float L_13 = L_12.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_14), L_11, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_10, L_15, L_16, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.Vector3 GameConfig::GetScreenSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GameConfig_GetScreenSize_m4F851F469FFDDC8EF75C4D4FA7DCCA975DAEAF88 (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var screenSizePixels = new Vector3(Screen.width, Screen.height, 0);
		int32_t L_0 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), (((float)((float)L_0))), (((float)((float)L_1))), (0.0f), /*hidden argument*/NULL);
		// return mainCamera.ScreenToWorldPoint(screenSizePixels);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = __this->get_mainCamera_23();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = V_0;
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void GameConfig::ChangeWallPositionsPerScreenSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameConfig_ChangeWallPositionsPerScreenSize_m030E6DA1DA2718600712E9734CD3D80DBE88C999 (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (prevScreenWidthPixels == Screen.width)
		int32_t L_0 = __this->get_prevScreenWidthPixels_24();
		int32_t L_1 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// var screenWidth = GetScreenSize().x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = GameConfig_GetScreenSize_m4F851F469FFDDC8EF75C4D4FA7DCCA975DAEAF88(__this, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		V_0 = L_3;
		// var currentPosition = wallLeft.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_wallLeft_5();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// wallLeft.transform.position = new Vector3(-screenWidth, currentPosition.y, currentPosition.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_wallLeft_5();
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		float L_9 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_1;
		float L_11 = L_10.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_1;
		float L_13 = L_12.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_14), ((-L_9)), L_11, L_13, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_8, L_14, /*hidden argument*/NULL);
		// wallRight.transform.position = new Vector3(screenWidth, currentPosition.y, currentPosition.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_wallRight_6();
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		float L_17 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_1;
		float L_19 = L_18.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_1;
		float L_21 = L_20.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_22), L_17, L_19, L_21, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_16, L_22, /*hidden argument*/NULL);
		// var devPosition = gameDev.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = __this->get_gameDev_7();
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		V_2 = L_25;
		// devPosition = new Vector3(0, devPosition.y, devPosition.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = V_2;
		float L_27 = L_26.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = V_2;
		float L_29 = L_28.get_z_4();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), (0.0f), L_27, L_29, /*hidden argument*/NULL);
		// gameDev.transform.position = devPosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = __this->get_gameDev_7();
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_30, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = V_2;
		NullCheck(L_31);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_31, L_32, /*hidden argument*/NULL);
		// prevScreenWidthPixels = Screen.width;
		int32_t L_33 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		__this->set_prevScreenWidthPixels_24(L_33);
		// }
		return;
	}
}
// System.Void GameConfig::RenderExplodeDev(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameConfig_RenderExplodeDev_mB81D09BCDE6A69C2E37268D108C7D4CB899AE6CC (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameConfig_RenderExplodeDev_mB81D09BCDE6A69C2E37268D108C7D4CB899AE6CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// position.y -= 0.5f;
		float* L_0 = (&___position0)->get_address_of_y_3();
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		*((float*)L_1) = (float)((float)il2cpp_codegen_subtract((float)L_2, (float)(0.5f)));
		// Instantiate(explodeDev, position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_explodeDev_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___position0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_3, L_4, L_5, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GameConfig::RenderExplodeGround(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameConfig_RenderExplodeGround_m8AE066EC0E5B520B89DBCFB68AD7370746E4F499 (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameConfig_RenderExplodeGround_m8AE066EC0E5B520B89DBCFB68AD7370746E4F499_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// position.y -= 0.5f;
		float* L_0 = (&___position0)->get_address_of_y_3();
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		*((float*)L_1) = (float)((float)il2cpp_codegen_subtract((float)L_2, (float)(0.5f)));
		// Instantiate(explodeGround, position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_explodeGround_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___position0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_3, L_4, L_5, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameConfig::SpawnDrops()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameConfig_SpawnDrops_mC51CCBB2925A598C681C5ED374522585C8BD1B0D (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameConfig_SpawnDrops_mC51CCBB2925A598C681C5ED374522585C8BD1B0D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpawnDropsU3Ed__34_t35790C78058A4D45D11F2700A7380AD444989BB3 * L_0 = (U3CSpawnDropsU3Ed__34_t35790C78058A4D45D11F2700A7380AD444989BB3 *)il2cpp_codegen_object_new(U3CSpawnDropsU3Ed__34_t35790C78058A4D45D11F2700A7380AD444989BB3_il2cpp_TypeInfo_var);
		U3CSpawnDropsU3Ed__34__ctor_m9E5D9BEDEEE023053D3C3156119E08D346BCF425(L_0, 0, /*hidden argument*/NULL);
		U3CSpawnDropsU3Ed__34_t35790C78058A4D45D11F2700A7380AD444989BB3 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator GameConfig::GameTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameConfig_GameTimer_m9B8356E986C4D4857C73EFAE5488BEC8A1686872 (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameConfig_GameTimer_m9B8356E986C4D4857C73EFAE5488BEC8A1686872_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGameTimerU3Ed__35_tCEC5E4B710F902D97BE7D236A9A8CD09B3ED97F9 * L_0 = (U3CGameTimerU3Ed__35_tCEC5E4B710F902D97BE7D236A9A8CD09B3ED97F9 *)il2cpp_codegen_object_new(U3CGameTimerU3Ed__35_tCEC5E4B710F902D97BE7D236A9A8CD09B3ED97F9_il2cpp_TypeInfo_var);
		U3CGameTimerU3Ed__35__ctor_mE0B86A3054AA3D13E54D03C4B0CAB38D6098FB68(L_0, 0, /*hidden argument*/NULL);
		U3CGameTimerU3Ed__35_tCEC5E4B710F902D97BE7D236A9A8CD09B3ED97F9 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void GameConfig::Freeze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameConfig_Freeze_mB2D4972E5D41E5367D76EEA3E12FDF7B688B13DA (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 * G_B5_0 = NULL;
	FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 * G_B4_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B8_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B7_0 = NULL;
	float G_B9_0 = 0.0f;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B9_1 = NULL;
	{
		// if (gameOver || freezed)
		bool L_0 = __this->get_gameOver_27();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->get_freezed_26();
		if (!L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// return;
		return;
	}

IL_0011:
	{
		// freezed = true;
		__this->set_freezed_26((bool)1);
		// freezeHandlers?.Invoke(true);
		FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 * L_2 = __this->get_freezeHandlers_28();
		FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 * L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0024;
		}
	}
	{
		goto IL_002a;
	}

IL_0024:
	{
		NullCheck(G_B5_0);
		FreezeChangeHandler_Invoke_m7BC8EE0E8CAD462C16BC9B5938543215FA221775(G_B5_0, (bool)1, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// StopCoroutine(spawnDropsHandler);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4 = __this->get_spawnDropsHandler_25();
		MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413(__this, L_4, /*hidden argument*/NULL);
		// var gameDevPos = gameDev.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_gameDev_7();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// twitterStrom.transform.position = new Vector3(
		//     gameDevPos.x > 0 ? gameDevPos.x -3 : gameDevPos.x + 3,
		//     2,
		//     gameDevPos.z
		//     );
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_twitterStrom_10();
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		float L_11 = L_10.get_x_2();
		G_B7_0 = L_9;
		if ((((float)L_11) > ((float)(0.0f))))
		{
			G_B8_0 = L_9;
			goto IL_006d;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_0;
		float L_13 = L_12.get_x_2();
		G_B9_0 = ((float)il2cpp_codegen_add((float)L_13, (float)(3.0f)));
		G_B9_1 = G_B7_0;
		goto IL_0079;
	}

IL_006d:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_0;
		float L_15 = L_14.get_x_2();
		G_B9_0 = ((float)il2cpp_codegen_subtract((float)L_15, (float)(3.0f)));
		G_B9_1 = G_B8_0;
	}

IL_0079:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_18), G_B9_0, (2.0f), L_17, /*hidden argument*/NULL);
		NullCheck(G_B9_1);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(G_B9_1, L_18, /*hidden argument*/NULL);
		// twitterStrom.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_twitterStrom_10();
		NullCheck(L_19);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_19, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameConfig::UnFreeze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameConfig_UnFreeze_mE1256AE18CC1822E8A51B369FFAFE037888A4281 (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, const RuntimeMethod* method)
{
	FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 * G_B5_0 = NULL;
	FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 * G_B4_0 = NULL;
	{
		// if (gameOver || !freezed)
		bool L_0 = __this->get_gameOver_27();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->get_freezed_26();
		if (L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// return;
		return;
	}

IL_0011:
	{
		// freezed = false;
		__this->set_freezed_26((bool)0);
		// freezeHandlers?.Invoke(false);
		FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 * L_2 = __this->get_freezeHandlers_28();
		FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 * L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0024;
		}
	}
	{
		goto IL_002a;
	}

IL_0024:
	{
		NullCheck(G_B5_0);
		FreezeChangeHandler_Invoke_m7BC8EE0E8CAD462C16BC9B5938543215FA221775(G_B5_0, (bool)0, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// spawnDropsHandler = StartCoroutine(SpawnDrops());
		RuntimeObject* L_4 = GameConfig_SpawnDrops_mC51CCBB2925A598C681C5ED374522585C8BD1B0D(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_4, /*hidden argument*/NULL);
		__this->set_spawnDropsHandler_25(L_5);
		// twitterStrom.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_twitterStrom_10();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean GameConfig::IsFreezed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameConfig_IsFreezed_mD9F4B8DA838C9A7EB316085CFA8324BA0D7A4ABD (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, const RuntimeMethod* method)
{
	{
		// return freezed;
		bool L_0 = __this->get_freezed_26();
		return L_0;
	}
}
// System.Void GameConfig::OnFreezeChange(GameConfig_FreezeChangeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameConfig_OnFreezeChange_m967BFDB27950419B9FF363D5EE78AE4290EE3D88 (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameConfig_OnFreezeChange_m967BFDB27950419B9FF363D5EE78AE4290EE3D88_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// freezeHandlers += e;
		FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 * L_0 = __this->get_freezeHandlers_28();
		FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 * L_1 = ___e0;
		Delegate_t * L_2 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_0, L_1, /*hidden argument*/NULL);
		__this->set_freezeHandlers_28(((FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 *)CastclassSealed((RuntimeObject*)L_2, FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void GameConfig::OffFreezeChange(GameConfig_FreezeChangeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameConfig_OffFreezeChange_mDA01D23743EBE468F7B586725B7EEAF741B97256 (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameConfig_OffFreezeChange_mDA01D23743EBE468F7B586725B7EEAF741B97256_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (freezeHandlers == null) return;
		FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 * L_0 = __this->get_freezeHandlers_28();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (freezeHandlers == null) return;
		return;
	}

IL_0009:
	{
		// freezeHandlers -= e;
		FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 * L_1 = __this->get_freezeHandlers_28();
		FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 * L_2 = ___e0;
		Delegate_t * L_3 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_1, L_2, /*hidden argument*/NULL);
		__this->set_freezeHandlers_28(((FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 *)CastclassSealed((RuntimeObject*)L_3, FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Single GameConfig::GetDropSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameConfig_GetDropSpeed_m7240B444CF7BC1F4AC0300A87C57EDFDE22928FD (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, const RuntimeMethod* method)
{
	{
		// return dropSpeed;
		float L_0 = __this->get_dropSpeed_17();
		return L_0;
	}
}
// System.Single GameConfig::GetDevSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameConfig_GetDevSpeed_m735BC01934BB1BF79C9D36D7955F345E4744EDA5 (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, const RuntimeMethod* method)
{
	{
		// return devSpeed;
		float L_0 = __this->get_devSpeed_16();
		return L_0;
	}
}
// System.Void GameConfig::NotifyHit(GameConfig_DropType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameConfig_NotifyHit_m611627F26C3942503968D3701EE5E0B389792E1E (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, int32_t ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameConfig_NotifyHit_m611627F26C3942503968D3701EE5E0B389792E1E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// switch(type)
		int32_t L_0 = ___type0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0014;
			}
			case 1:
			{
				goto IL_0024;
			}
			case 2:
			{
				goto IL_0034;
			}
		}
	}
	{
		goto IL_0044;
	}

IL_0014:
	{
		// twitterHits += 1;
		int32_t L_1 = __this->get_twitterHits_19();
		__this->set_twitterHits_19(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		// break;
		goto IL_005a;
	}

IL_0024:
	{
		// youtubeHits += 1;
		int32_t L_2 = __this->get_youtubeHits_21();
		__this->set_youtubeHits_21(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		// break;
		goto IL_005a;
	}

IL_0034:
	{
		// stackOverflowHits += 1;
		int32_t L_3 = __this->get_stackOverflowHits_20();
		__this->set_stackOverflowHits_20(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		// break;
		goto IL_005a;
	}

IL_0044:
	{
		// throw new System.Exception("Unsupported Notify Hit: " + type);
		int32_t L_4 = ___type0;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(DropType_tE38074440E14D9CE50AAFB6D32FE194DEFD09CA9_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteralE6755BD24FDAC5834512B5A5046584B56F53206A, L_6, /*hidden argument*/NULL);
		Exception_t * L_8 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, GameConfig_NotifyHit_m611627F26C3942503968D3701EE5E0B389792E1E_RuntimeMethod_var);
	}

IL_005a:
	{
		// UpdateTasksCompleted();
		GameConfig_UpdateTasksCompleted_mF9448FAECA4CF13B9E42AF3155BDF24F49AFE4AB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 GameConfig::GetTasksCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameConfig_GetTasksCompleted_m39CB744485113FE681EF894F4AC436E202CF00AE (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, const RuntimeMethod* method)
{
	{
		// return youtubeHits + stackOverflowHits;
		int32_t L_0 = __this->get_youtubeHits_21();
		int32_t L_1 = __this->get_stackOverflowHits_20();
		return ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
	}
}
// System.Void GameConfig::UpdateTasksCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameConfig_UpdateTasksCompleted_mF9448FAECA4CF13B9E42AF3155BDF24F49AFE4AB (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameConfig_UpdateTasksCompleted_mF9448FAECA4CF13B9E42AF3155BDF24F49AFE4AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// labelTasksCompleted.text = "Tasks: " + GetTasksCompleted();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_labelTasksCompleted_11();
		int32_t L_1 = GameConfig_GetTasksCompleted_m39CB744485113FE681EF894F4AC436E202CF00AE(__this, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteralC75582552AA20A66DE268C800257B84A99CA4E83, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void GameConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameConfig__ctor_m0550F520A2F9EF73B4E3A3B49EF73908BE9D5563 (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, const RuntimeMethod* method)
{
	{
		// private int gameTime = 60;
		__this->set_gameTime_15(((int32_t)60));
		// private float devSpeed = 10;
		__this->set_devSpeed_16((10.0f));
		// private float dropSpeed = 5;
		__this->set_dropSpeed_17((5.0f));
		// private int noOfDropsInScreen = 2;
		__this->set_noOfDropsInScreen_18(2);
		// private bool freezed = true;
		__this->set_freezed_26((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameDev::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDev_Start_m79D067A3E0EE8B2A0087B40C2D2F8A5DA1DE6F18 (GameDev_tD15784FD785A0E3711AA4EB676F2F125BB5A547B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameDev_Start_m79D067A3E0EE8B2A0087B40C2D2F8A5DA1DE6F18_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// body = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_body_5(L_0);
		// anim = dev.GetComponent<Animator>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_dev_6();
		NullCheck(L_1);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_1, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		__this->set_anim_7(L_2);
		// mainCamera  = Camera.main;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		__this->set_mainCamera_8(L_3);
		// prevPosition = DevLifeUtils.Clone(transform.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = DevLifeUtils_Clone_m558C2D6ED0ACE41E833C4DCAAB0A3B2C5DDDEE0F(L_5, /*hidden argument*/NULL);
		__this->set_prevPosition_9(L_6);
		// GameConfig.current.OnFreezeChange(WithFreezeChange);
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_7 = ((GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_StaticFields*)il2cpp_codegen_static_fields_for(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_il2cpp_TypeInfo_var))->get_current_22();
		FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 * L_8 = (FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 *)il2cpp_codegen_object_new(FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6_il2cpp_TypeInfo_var);
		FreezeChangeHandler__ctor_mD41F64C7273196EDC3B6A06835A275FE5FCF76A8(L_8, __this, (intptr_t)((intptr_t)GameDev_WithFreezeChange_m0C16C95BF4B152A25A4BD4355C6DC9062606A00D_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		GameConfig_OnFreezeChange_m967BFDB27950419B9FF363D5EE78AE4290EE3D88(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameDev::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDev_OnDestroy_m9B45D4DADC11D4FE531092CF96A4FD6215B4C53B (GameDev_tD15784FD785A0E3711AA4EB676F2F125BB5A547B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameDev_OnDestroy_m9B45D4DADC11D4FE531092CF96A4FD6215B4C53B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameConfig.current.OffFreezeChange(WithFreezeChange);
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_0 = ((GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_StaticFields*)il2cpp_codegen_static_fields_for(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_il2cpp_TypeInfo_var))->get_current_22();
		FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 * L_1 = (FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 *)il2cpp_codegen_object_new(FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6_il2cpp_TypeInfo_var);
		FreezeChangeHandler__ctor_mD41F64C7273196EDC3B6A06835A275FE5FCF76A8(L_1, __this, (intptr_t)((intptr_t)GameDev_WithFreezeChange_m0C16C95BF4B152A25A4BD4355C6DC9062606A00D_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		GameConfig_OffFreezeChange_mDA01D23743EBE468F7B586725B7EEAF741B97256(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameDev::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDev_Update_m225909E110E56A66E154E10C1FB2EAA6548BB9E8 (GameDev_tD15784FD785A0E3711AA4EB676F2F125BB5A547B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameDev_Update_m225909E110E56A66E154E10C1FB2EAA6548BB9E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameConfig.current.IsFreezed()) return;
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_0 = ((GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_StaticFields*)il2cpp_codegen_static_fields_for(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_il2cpp_TypeInfo_var))->get_current_22();
		NullCheck(L_0);
		bool L_1 = GameConfig_IsFreezed_mD9F4B8DA838C9A7EB316085CFA8324BA0D7A4ABD_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// if (GameConfig.current.IsFreezed()) return;
		return;
	}

IL_000d:
	{
		// this.ChangeDirection();
		GameDev_ChangeDirection_mE116F20EE90BAABC7FF0575B516B8212D052E3B7(__this, /*hidden argument*/NULL);
		// this.ChangeAnimation();
		GameDev_ChangeAnimation_m093F4CAD2374E54BA0273AB685B5AF1050F73118(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameDev::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDev_FixedUpdate_m9307CB4CDCAEBC27C37862D817B22969C96430C9 (GameDev_tD15784FD785A0E3711AA4EB676F2F125BB5A547B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameDev_FixedUpdate_m9307CB4CDCAEBC27C37862D817B22969C96430C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (GameConfig.current.IsFreezed()) return;
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_0 = ((GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_StaticFields*)il2cpp_codegen_static_fields_for(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_il2cpp_TypeInfo_var))->get_current_22();
		NullCheck(L_0);
		bool L_1 = GameConfig_IsFreezed_mD9F4B8DA838C9A7EB316085CFA8324BA0D7A4ABD_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// if (GameConfig.current.IsFreezed()) return;
		return;
	}

IL_000d:
	{
		// directionX = GetDirection();
		float L_2 = GameDev_GetDirection_mADD0754C4A8DDD7199E34DCE42112E0805DD486D(__this, /*hidden argument*/NULL);
		__this->set_directionX_4(L_2);
		// Vector2 movement = new Vector2(directionX * GameConfig.current.GetDevSpeed(), 0);
		float L_3 = __this->get_directionX_4();
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_4 = ((GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_StaticFields*)il2cpp_codegen_static_fields_for(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_il2cpp_TypeInfo_var))->get_current_22();
		NullCheck(L_4);
		float L_5 = GameConfig_GetDevSpeed_m735BC01934BB1BF79C9D36D7955F345E4744EDA5_inline(L_4, /*hidden argument*/NULL);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), ((float)il2cpp_codegen_multiply((float)L_3, (float)L_5)), (0.0f), /*hidden argument*/NULL);
		// body.velocity = movement;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_6 = __this->get_body_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		NullCheck(L_6);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single GameDev::GetDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameDev_GetDirection_mADD0754C4A8DDD7199E34DCE42112E0805DD486D (GameDev_tD15784FD785A0E3711AA4EB676F2F125BB5A547B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameDev_GetDirection_mADD0754C4A8DDD7199E34DCE42112E0805DD486D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t G_B4_0 = 0;
	{
		// if (Input.touches.Length > 0)
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_0 = Input_get_touches_m26E3034CAE32931E59A480327A3CF4BFC2045E8F(/*hidden argument*/NULL);
		NullCheck(L_0);
		if (!(((RuntimeArray*)L_0)->max_length))
		{
			goto IL_003d;
		}
	}
	{
		// var firstTouch = Input.touches[0];
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_1 = Input_get_touches_m26E3034CAE32931E59A480327A3CF4BFC2045E8F(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = 0;
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// var unitPosition = mainCamera.ScreenToWorldPoint(firstTouch.position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4 = __this->get_mainCamera_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_4, L_6, /*hidden argument*/NULL);
		// return unitPosition.x > 0 ? 1 : -1;
		float L_8 = L_7.get_x_2();
		if ((((float)L_8) > ((float)(0.0f))))
		{
			goto IL_003a;
		}
	}
	{
		G_B4_0 = (-1);
		goto IL_003b;
	}

IL_003a:
	{
		G_B4_0 = 1;
	}

IL_003b:
	{
		return (((float)((float)G_B4_0)));
	}

IL_003d:
	{
		// return Input.GetAxisRaw("Horizontal");
		float L_9 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void GameDev::ChangeDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDev_ChangeDirection_mE116F20EE90BAABC7FF0575B516B8212D052E3B7 (GameDev_tD15784FD785A0E3711AA4EB676F2F125BB5A547B * __this, const RuntimeMethod* method)
{
	{
		// if (directionX > 0)
		float L_0 = __this->get_directionX_4();
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_002d;
		}
	}
	{
		// transform.eulerAngles = new Vector3(0, 0, 0 );
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_1, L_2, /*hidden argument*/NULL);
		// } else if (directionX < 0)
		return;
	}

IL_002d:
	{
		// } else if (directionX < 0)
		float L_3 = __this->get_directionX_4();
		if ((!(((float)L_3) < ((float)(0.0f)))))
		{
			goto IL_0059;
		}
	}
	{
		// transform.eulerAngles = new Vector3(0, 180, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), (0.0f), (180.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void GameDev::ChangeAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDev_ChangeAnimation_m093F4CAD2374E54BA0273AB685B5AF1050F73118 (GameDev_tD15784FD785A0E3711AA4EB676F2F125BB5A547B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameDev_ChangeAnimation_m093F4CAD2374E54BA0273AB685B5AF1050F73118_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (directionX != 0)
		float L_0 = __this->get_directionX_4();
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_001f;
		}
	}
	{
		// anim.SetBool("isRunning", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = __this->get_anim_7();
		NullCheck(L_1);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_1, _stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001f:
	{
		// anim.SetBool("isRunning", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = __this->get_anim_7();
		NullCheck(L_2);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_2, _stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameDev::WithFreezeChange(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDev_WithFreezeChange_m0C16C95BF4B152A25A4BD4355C6DC9062606A00D (GameDev_tD15784FD785A0E3711AA4EB676F2F125BB5A547B * __this, bool ___isFreezed0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameDev_WithFreezeChange_m0C16C95BF4B152A25A4BD4355C6DC9062606A00D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t G_B4_0 = 0;
	{
		// if (isFreezed)
		bool L_0 = ___isFreezed0;
		if (!L_0)
		{
			goto IL_0095;
		}
	}
	{
		// prevPosition = DevLifeUtils.Clone(transform.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = DevLifeUtils_Clone_m558C2D6ED0ACE41E833C4DCAAB0A3B2C5DDDEE0F(L_2, /*hidden argument*/NULL);
		__this->set_prevPosition_9(L_3);
		// transform.position = DevLifeUtils.ChangeY(prevPosition, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = __this->get_prevPosition_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = DevLifeUtils_ChangeY_mCD926F84EBB7FEAB4B7A5D9A114BB1BA9ECAB6A2(L_5, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_4, L_6, /*hidden argument*/NULL);
		// body.velocity = Vector2.zero;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_7 = __this->get_body_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		NullCheck(L_7);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_7, L_8, /*hidden argument*/NULL);
		// anim.SetBool("isFreezedWithTwitter", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_9 = __this->get_anim_7();
		NullCheck(L_9);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_9, _stringLiteral92BF76A1BDB6375D7C7C4790AC928E853FAF35BF, (bool)1, /*hidden argument*/NULL);
		// float yRotate = transform.position.x > 0 ? 180 : 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_x_2();
		if ((((float)L_12) > ((float)(0.0f))))
		{
			goto IL_0072;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0077;
	}

IL_0072:
	{
		G_B4_0 = ((int32_t)180);
	}

IL_0077:
	{
		V_0 = (((float)((float)G_B4_0)));
		// transform.eulerAngles = new Vector3(0, yRotate, 0 );
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_14 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), (0.0f), L_14, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_13, L_15, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0095:
	{
		// transform.position = prevPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = __this->get_prevPosition_9();
		NullCheck(L_16);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_16, L_17, /*hidden argument*/NULL);
		// anim.SetBool("isFreezedWithTwitter", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_18 = __this->get_anim_7();
		NullCheck(L_18);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_18, _stringLiteral92BF76A1BDB6375D7C7C4790AC928E853FAF35BF, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameDev::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDev__ctor_mAB2FCD1A16216E2F6F5783110CFA1CAB99C05766 (GameDev_tD15784FD785A0E3711AA4EB676F2F125BB5A547B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Drop_<HandleTwitterHit>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleTwitterHitU3Ed__7__ctor_m3D69B152F531EFD2F16B76D62CFCA1844AFE3577 (U3CHandleTwitterHitU3Ed__7_tC3C6C2AE91F8AC90C183A09818F6A0B5E425043E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Drop_<HandleTwitterHit>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleTwitterHitU3Ed__7_System_IDisposable_Dispose_mF78136BC60FAA5451EA2BB39E3BF40F29535C8BC (U3CHandleTwitterHitU3Ed__7_tC3C6C2AE91F8AC90C183A09818F6A0B5E425043E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Drop_<HandleTwitterHit>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CHandleTwitterHitU3Ed__7_MoveNext_m038ADB05D5B8D9E54F0CC62476637625E5BFBC01 (U3CHandleTwitterHitU3Ed__7_tC3C6C2AE91F8AC90C183A09818F6A0B5E425043E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CHandleTwitterHitU3Ed__7_MoveNext_m038ADB05D5B8D9E54F0CC62476637625E5BFBC01_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Drop_t3A60C9EB2FA8246026B91799577C0F3D6334B19F * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Drop_t3A60C9EB2FA8246026B91799577C0F3D6334B19F * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_004e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// causedFreezing = true;
		Drop_t3A60C9EB2FA8246026B91799577C0F3D6334B19F * L_4 = V_1;
		NullCheck(L_4);
		L_4->set_causedFreezing_5((bool)1);
		// Hide();
		Drop_t3A60C9EB2FA8246026B91799577C0F3D6334B19F * L_5 = V_1;
		NullCheck(L_5);
		Drop_Hide_mEAF7E154C0BE74AC8E95A99748709609F5614225(L_5, /*hidden argument*/NULL);
		// GameConfig.current.Freeze();
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_6 = ((GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_StaticFields*)il2cpp_codegen_static_fields_for(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_il2cpp_TypeInfo_var))->get_current_22();
		NullCheck(L_6);
		GameConfig_Freeze_mB2D4972E5D41E5367D76EEA3E12FDF7B688B13DA(L_6, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(3);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_7 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_7, (3.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// GameConfig.current.UnFreeze();
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_8 = ((GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_StaticFields*)il2cpp_codegen_static_fields_for(GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758_il2cpp_TypeInfo_var))->get_current_22();
		NullCheck(L_8);
		GameConfig_UnFreeze_mE1256AE18CC1822E8A51B369FFAFE037888A4281(L_8, /*hidden argument*/NULL);
		// Destroy(gameObject);
		Drop_t3A60C9EB2FA8246026B91799577C0F3D6334B19F * L_9 = V_1;
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_10, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Drop_<HandleTwitterHit>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CHandleTwitterHitU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m877BB03FE39AD2E7BD78E5F0222DF71AD81E06C7 (U3CHandleTwitterHitU3Ed__7_tC3C6C2AE91F8AC90C183A09818F6A0B5E425043E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Drop_<HandleTwitterHit>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleTwitterHitU3Ed__7_System_Collections_IEnumerator_Reset_m9A657E540008F96895014E062FF47FC34996AA73 (U3CHandleTwitterHitU3Ed__7_tC3C6C2AE91F8AC90C183A09818F6A0B5E425043E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CHandleTwitterHitU3Ed__7_System_Collections_IEnumerator_Reset_m9A657E540008F96895014E062FF47FC34996AA73_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CHandleTwitterHitU3Ed__7_System_Collections_IEnumerator_Reset_m9A657E540008F96895014E062FF47FC34996AA73_RuntimeMethod_var);
	}
}
// System.Object Drop_<HandleTwitterHit>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CHandleTwitterHitU3Ed__7_System_Collections_IEnumerator_get_Current_m48A85C5E99C01CBBB461F5D958F92AB700DBD59C (U3CHandleTwitterHitU3Ed__7_tC3C6C2AE91F8AC90C183A09818F6A0B5E425043E * __this, const RuntimeMethod* method)
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
// System.Void GameConfig_<GameTimer>d__35::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameTimerU3Ed__35__ctor_mE0B86A3054AA3D13E54D03C4B0CAB38D6098FB68 (U3CGameTimerU3Ed__35_tCEC5E4B710F902D97BE7D236A9A8CD09B3ED97F9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameConfig_<GameTimer>d__35::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameTimerU3Ed__35_System_IDisposable_Dispose_mBDC0F4AFDA2B7AD451430688E58EA85A100ABB1A (U3CGameTimerU3Ed__35_tCEC5E4B710F902D97BE7D236A9A8CD09B3ED97F9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameConfig_<GameTimer>d__35::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGameTimerU3Ed__35_MoveNext_m6A3816E8D4E919CA7BA0AB052E81F4763B12B27B (U3CGameTimerU3Ed__35_tCEC5E4B710F902D97BE7D236A9A8CD09B3ED97F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGameTimerU3Ed__35_MoveNext_m6A3816E8D4E919CA7BA0AB052E81F4763B12B27B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0063;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// labelTimeLeft.text = "Time Left: " + gameTime;
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_4 = V_1;
		NullCheck(L_4);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = L_4->get_labelTimeLeft_12();
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_gameTime_15();
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteralE6CAD9E42463CE8B59ACA6650AF9557050B0182B, L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_10);
		// for (int lc=0; lc<=gameTime; lc++)
		__this->set_U3ClcU3E5__2_3(0);
		goto IL_00e9;
	}

IL_004a:
	{
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_11 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_11, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0063:
	{
		__this->set_U3CU3E1__state_0((-1));
		// labelTimeLeft.text = "Time Left: " + (gameTime - lc);
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_12 = V_1;
		NullCheck(L_12);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13 = L_12->get_labelTimeLeft_12();
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = L_14->get_gameTime_15();
		int32_t L_16 = __this->get_U3ClcU3E5__2_3();
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_16));
		RuntimeObject * L_18 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_17);
		String_t* L_19 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteralE6CAD9E42463CE8B59ACA6650AF9557050B0182B, L_18, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_19);
		// if (lc > 0 && lc % 10 == 0)
		int32_t L_20 = __this->get_U3ClcU3E5__2_3();
		if ((((int32_t)L_20) <= ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_21 = __this->get_U3ClcU3E5__2_3();
		if (((int32_t)((int32_t)L_21%(int32_t)((int32_t)10))))
		{
			goto IL_00b7;
		}
	}
	{
		// dropSpeed += 0.5f;
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_22 = V_1;
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_23 = V_1;
		NullCheck(L_23);
		float L_24 = L_23->get_dropSpeed_17();
		NullCheck(L_22);
		L_22->set_dropSpeed_17(((float)il2cpp_codegen_add((float)L_24, (float)(0.5f))));
	}

IL_00b7:
	{
		// if (lc > 0 && lc % 10 == 0)
		int32_t L_25 = __this->get_U3ClcU3E5__2_3();
		if ((((int32_t)L_25) <= ((int32_t)0)))
		{
			goto IL_00d9;
		}
	}
	{
		int32_t L_26 = __this->get_U3ClcU3E5__2_3();
		if (((int32_t)((int32_t)L_26%(int32_t)((int32_t)10))))
		{
			goto IL_00d9;
		}
	}
	{
		// noOfDropsInScreen += 1;
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_27 = V_1;
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29 = L_28->get_noOfDropsInScreen_18();
		NullCheck(L_27);
		L_27->set_noOfDropsInScreen_18(((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1)));
	}

IL_00d9:
	{
		// for (int lc=0; lc<=gameTime; lc++)
		int32_t L_30 = __this->get_U3ClcU3E5__2_3();
		V_2 = L_30;
		int32_t L_31 = V_2;
		__this->set_U3ClcU3E5__2_3(((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1)));
	}

IL_00e9:
	{
		// for (int lc=0; lc<=gameTime; lc++)
		int32_t L_32 = __this->get_U3ClcU3E5__2_3();
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_33 = V_1;
		NullCheck(L_33);
		int32_t L_34 = L_33->get_gameTime_15();
		if ((((int32_t)L_32) <= ((int32_t)L_34)))
		{
			goto IL_004a;
		}
	}
	{
		// gameOver = true;
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_35 = V_1;
		NullCheck(L_35);
		L_35->set_gameOver_27((bool)1);
		// labelTotalTasksCompleted.text = GetTasksCompleted().ToString();
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_36 = V_1;
		NullCheck(L_36);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_37 = L_36->get_labelTotalTasksCompleted_13();
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_38 = V_1;
		NullCheck(L_38);
		int32_t L_39 = GameConfig_GetTasksCompleted_m39CB744485113FE681EF894F4AC436E202CF00AE(L_38, /*hidden argument*/NULL);
		V_2 = L_39;
		String_t* L_40 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_37);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_37, L_40);
		// gameOverPanel.SetActive(true);
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_41 = V_1;
		NullCheck(L_41);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42 = L_41->get_gameOverPanel_14();
		NullCheck(L_42);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_42, (bool)1, /*hidden argument*/NULL);
		// StopCoroutine(spawnDropsHandler);
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_43 = V_1;
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_44 = V_1;
		NullCheck(L_44);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_45 = L_44->get_spawnDropsHandler_25();
		NullCheck(L_43);
		MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413(L_43, L_45, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameConfig_<GameTimer>d__35::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGameTimerU3Ed__35_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF2952D9423CF768174A14F50C2458DB1D05F29CB (U3CGameTimerU3Ed__35_tCEC5E4B710F902D97BE7D236A9A8CD09B3ED97F9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameConfig_<GameTimer>d__35::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameTimerU3Ed__35_System_Collections_IEnumerator_Reset_mA89929FE83DD2FA4FC03099325EE7687EFFC502E (U3CGameTimerU3Ed__35_tCEC5E4B710F902D97BE7D236A9A8CD09B3ED97F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGameTimerU3Ed__35_System_Collections_IEnumerator_Reset_mA89929FE83DD2FA4FC03099325EE7687EFFC502E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CGameTimerU3Ed__35_System_Collections_IEnumerator_Reset_mA89929FE83DD2FA4FC03099325EE7687EFFC502E_RuntimeMethod_var);
	}
}
// System.Object GameConfig_<GameTimer>d__35::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGameTimerU3Ed__35_System_Collections_IEnumerator_get_Current_mDD59492C97FD946EA398F68B6F0650102F6B541D (U3CGameTimerU3Ed__35_tCEC5E4B710F902D97BE7D236A9A8CD09B3ED97F9 * __this, const RuntimeMethod* method)
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
// System.Void GameConfig_<SpawnDrops>d__34::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnDropsU3Ed__34__ctor_m9E5D9BEDEEE023053D3C3156119E08D346BCF425 (U3CSpawnDropsU3Ed__34_t35790C78058A4D45D11F2700A7380AD444989BB3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameConfig_<SpawnDrops>d__34::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnDropsU3Ed__34_System_IDisposable_Dispose_m971AEE31392702F623B20AE48A6ED4B0E4692D08 (U3CSpawnDropsU3Ed__34_t35790C78058A4D45D11F2700A7380AD444989BB3 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameConfig_<SpawnDrops>d__34::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnDropsU3Ed__34_MoveNext_mB29707CF55CC9760BF07E8698F357A76BD47FBC8 (U3CSpawnDropsU3Ed__34_t35790C78058A4D45D11F2700A7380AD444989BB3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSpawnDropsU3Ed__34_MoveNext_mB29707CF55CC9760BF07E8698F357A76BD47FBC8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_005a;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// SpawnDrop();
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_4 = V_1;
		NullCheck(L_4);
		GameConfig_SpawnDrop_mB6E6DB611E499D4705BBD4EF74F499ADFC4F24C3(L_4, /*hidden argument*/NULL);
		// var totalHeight = GetScreenSize().y * 2;
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_5 = V_1;
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = GameConfig_GetScreenSize_m4F851F469FFDDC8EF75C4D4FA7DCCA975DAEAF88(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		// var spawnInterval = totalHeight / GetDropSpeed() / noOfDropsInScreen;
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_8 = V_1;
		NullCheck(L_8);
		float L_9 = GameConfig_GetDropSpeed_m7240B444CF7BC1F4AC0300A87C57EDFDE22928FD_inline(L_8, /*hidden argument*/NULL);
		GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_noOfDropsInScreen_18();
		V_2 = ((float)((float)((float)((float)((float)il2cpp_codegen_multiply((float)L_7, (float)(2.0f)))/(float)L_9))/(float)(((float)((float)L_11)))));
		// yield return new WaitForSeconds(spawnInterval);
		float L_12 = V_2;
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_13 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_13, L_12, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_13);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_001e;
	}
}
// System.Object GameConfig_<SpawnDrops>d__34::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpawnDropsU3Ed__34_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m873B1963297340970C79F4AEF8653870100DAA15 (U3CSpawnDropsU3Ed__34_t35790C78058A4D45D11F2700A7380AD444989BB3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameConfig_<SpawnDrops>d__34::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnDropsU3Ed__34_System_Collections_IEnumerator_Reset_mDD6FE4042F75C594B637A3BCB8A1EC36E764AF0D (U3CSpawnDropsU3Ed__34_t35790C78058A4D45D11F2700A7380AD444989BB3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSpawnDropsU3Ed__34_System_Collections_IEnumerator_Reset_mDD6FE4042F75C594B637A3BCB8A1EC36E764AF0D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CSpawnDropsU3Ed__34_System_Collections_IEnumerator_Reset_mDD6FE4042F75C594B637A3BCB8A1EC36E764AF0D_RuntimeMethod_var);
	}
}
// System.Object GameConfig_<SpawnDrops>d__34::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpawnDropsU3Ed__34_System_Collections_IEnumerator_get_Current_m382556145F7BA8AF8A187A1DB43F7F7B1850BD5C (U3CSpawnDropsU3Ed__34_t35790C78058A4D45D11F2700A7380AD444989BB3 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 (FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 * __this, bool ___isFreezed0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___isFreezed0));

}
// System.Void GameConfig_FreezeChangeHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreezeChangeHandler__ctor_mD41F64C7273196EDC3B6A06835A275FE5FCF76A8 (FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GameConfig_FreezeChangeHandler::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreezeChangeHandler_Invoke_m7BC8EE0E8CAD462C16BC9B5938543215FA221775 (FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 * __this, bool ___isFreezed0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___isFreezed0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___isFreezed0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___isFreezed0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___isFreezed0);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___isFreezed0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___isFreezed0);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___isFreezed0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___isFreezed0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___isFreezed0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult GameConfig_FreezeChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FreezeChangeHandler_BeginInvoke_m1116272B074BD5D261E1482FD9AC21D1798EECA4 (FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 * __this, bool ___isFreezed0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FreezeChangeHandler_BeginInvoke_m1116272B074BD5D261E1482FD9AC21D1798EECA4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___isFreezed0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GameConfig_FreezeChangeHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreezeChangeHandler_EndInvoke_m5899E6B5ABE537A32680624A575A19C7DD31B2B2 (FreezeChangeHandler_t00FDE10FBFB930E2D9677A65EEDB21151AD699D6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		__this->set_z_4((0.0f));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameConfig_GetDropSpeed_m7240B444CF7BC1F4AC0300A87C57EDFDE22928FD_inline (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, const RuntimeMethod* method)
{
	{
		// return dropSpeed;
		float L_0 = __this->get_dropSpeed_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GameConfig_IsFreezed_mD9F4B8DA838C9A7EB316085CFA8324BA0D7A4ABD_inline (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, const RuntimeMethod* method)
{
	{
		// return freezed;
		bool L_0 = __this->get_freezed_26();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameConfig_GetDevSpeed_m735BC01934BB1BF79C9D36D7955F345E4744EDA5_inline (GameConfig_t7FE2D4475055519C66C81428DE3B20747517A758 * __this, const RuntimeMethod* method)
{
	{
		// return devSpeed;
		float L_0 = __this->get_devSpeed_16();
		return L_0;
	}
}
