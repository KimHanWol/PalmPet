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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs>
struct Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25;
// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>
struct Action_1_t5DF84322FFE12A24465E48164961CD724D109521;
// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARPlane>
struct Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>
struct Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C;
// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197;
// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t0D7774CBEE7827744440205CF327276346298BD3;
// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPlane>
struct List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycast>
struct List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D;
// System.Collections.Generic.List`1<UnityEngine.UI.Button>
struct List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster>
struct List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct List_1_t42260E8F78DDBD1A6947677665395B70FA8816C1;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_tAE84735071B78277703DB9996DE2E5C4456317C5;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D;
// UnityEngine.XR.ARFoundation.ARPlane[]
struct ARPlaneU5BU5D_t74FAD1D9FDD72EC970A49954AC72FD3BE79DF898;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.XR.ARFoundation.ARPlaneManager
struct ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DesireFeed
struct DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8;
// DesirePoop
struct DesirePoop_t2305AD9CC25F355951C1C8E0AE6553E1A995F79F;
// UnityEngine.UI.Dropdown
struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96;
// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E;
// FeedCollision
struct FeedCollision_tC4D88A4626F5FBF1E745321043E318F8F61F57B2;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GoogleMapApi
struct GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0;
// UnityEngine.LocationService
struct LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PalmPetMove
struct PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D;
// Assets.Scipts.Pet
struct Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346;
// PlaceOnPlane
struct PlaceOnPlane_t3DF0B6A936DE2BB24AF3A85695A36F2D6048A9C3;
// UnityEngine.UI.RawImage
struct RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UIManager
struct UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WWW
struct WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// DesireFeed/<SpawnLoop>d__21
struct U3CSpawnLoopU3Ed__21_t8666E830ACB28FF5789823EF6C30AF3C7F4C9195;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6;
// GoogleMapApi/<Map>d__22
struct U3CMapU3Ed__22_t776434FFDEFA59932DC8A0D4004D798E02C396BB;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// PalmPetMove/<Move>d__1
struct U3CMoveU3Ed__1_tCC40295A9D20D22457CFDA19D2690EA9908D7203;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t5DF84322FFE12A24465E48164961CD724D109521_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMapU3Ed__22_t776434FFDEFA59932DC8A0D4004D798E02C396BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMoveU3Ed__1_tCC40295A9D20D22457CFDA19D2690EA9908D7203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawnLoopU3Ed__21_t8666E830ACB28FF5789823EF6C30AF3C7F4C9195_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* mapType_tD9FC3CBF342EC9A98935288D99ECB1515FFAB3A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01F1B441381501E7159931B11687EB16BA522F11;
IL2CPP_EXTERN_C String_t* _stringLiteral03195B08D8BBABDF0DCC6093942A15F7E8ABB3D0;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral161FC7C069E1E4E32614AF55F9BD2DBBA392DAB7;
IL2CPP_EXTERN_C String_t* _stringLiteral19E6F54B915CB01A74B7174DFEF8AC62E0C2BB5F;
IL2CPP_EXTERN_C String_t* _stringLiteral22B55D03400550AE5F4F6547AB8ED99CBF02D1FC;
IL2CPP_EXTERN_C String_t* _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
IL2CPP_EXTERN_C String_t* _stringLiteral3AA847F53F97DD8EB22AE78CF97AA59782D18E6E;
IL2CPP_EXTERN_C String_t* _stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B;
IL2CPP_EXTERN_C String_t* _stringLiteral788A220E8C00A2F11359D49CDEE22514550178B9;
IL2CPP_EXTERN_C String_t* _stringLiteralA15CF7E1CEFBD0C475E3A89A80B5393D417F8634;
IL2CPP_EXTERN_C String_t* _stringLiteralA47B4F69555BC9F2243FFF699A3ABC48BFD476A7;
IL2CPP_EXTERN_C String_t* _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539;
IL2CPP_EXTERN_C String_t* _stringLiteralBD4E79D5BF1664C1E246E08132AFC9D0DA294C60;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC53C15EA098684991F8F2C3F89C5829550973A30;
IL2CPP_EXTERN_C String_t* _stringLiteralD0C9C0047E2D991162C10E919BF5DC4944259BEA;
IL2CPP_EXTERN_C String_t* _stringLiteralD642CEBDA3492962B4DB8704C15B45A6A13B548F;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE18DFE45F06EEBEBD21AEF9B569F077A08A8B120;
IL2CPP_EXTERN_C String_t* _stringLiteralEABFCAA024ED8C7E6F27FE0B1F4DDA30E0180FEC;
IL2CPP_EXTERN_C String_t* _stringLiteralF45847AA64882A4409C42BED2156AFFDE975896D;
IL2CPP_EXTERN_C String_t* _stringLiteralF62149395AA5385D3AF63F8CFE972184FEF8FA9D;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m01533F209934FB7AA229CAF420A923C1C4F4FBC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mDBBF3E36A716B95B683306173920925E405BB8A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD9C961426EFA6BBBFDCA42D46BCEA62283586500_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7206FD3121D8BEA7DFCAD913FDAF3CA0F6821691_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m01B1280C927D8D132CE202C3E9F206F467D0346C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisPalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D_mB799CE99F3EF849A8EBF90F9220CE85D1834DA67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D_mFE8D6157DD8FECF9B40E6F83FC33B95326638154_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mE508A129A7CB4DC89530674E7854B7F699BB486F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mBBC2C0EA0F269A56465D057A5C6467489C251CBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA1744A70D10E32296ECF132BFF63A811CB50A795_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m123CF741EFB3898DD599C283DC5D3F8BE586D385_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlaceOnPlane_OnStateChanged_m1B80F132D86123408878897028B66DD52DE64EEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlaceOnPlane_PlaneStart_mFD23C4884802E0C85095CAFC8EAA23F91EA5C89D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMapU3Ed__22_System_Collections_IEnumerator_Reset_m70A745DEAE5F20233E940E5D748E2BBEB2F8DC88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveU3Ed__1_System_Collections_IEnumerator_Reset_mAAE510F4500BE7D85A493534F6E54A2B1B06433C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnLoopU3Ed__21_System_Collections_IEnumerator_Reset_mD6187437270D5A027D64F9D715CFA38A3757B5EA_RuntimeMethod_var;
struct ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPlane>
struct List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ARPlaneU5BU5D_t74FAD1D9FDD72EC970A49954AC72FD3BE79DF898* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276, ____items_1)); }
	inline ARPlaneU5BU5D_t74FAD1D9FDD72EC970A49954AC72FD3BE79DF898* get__items_1() const { return ____items_1; }
	inline ARPlaneU5BU5D_t74FAD1D9FDD72EC970A49954AC72FD3BE79DF898** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ARPlaneU5BU5D_t74FAD1D9FDD72EC970A49954AC72FD3BE79DF898* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ARPlaneU5BU5D_t74FAD1D9FDD72EC970A49954AC72FD3BE79DF898* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276_StaticFields, ____emptyArray_5)); }
	inline ARPlaneU5BU5D_t74FAD1D9FDD72EC970A49954AC72FD3BE79DF898* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ARPlaneU5BU5D_t74FAD1D9FDD72EC970A49954AC72FD3BE79DF898** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ARPlaneU5BU5D_t74FAD1D9FDD72EC970A49954AC72FD3BE79DF898* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D, ____items_1)); }
	inline ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* get__items_1() const { return ____items_1; }
	inline ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_StaticFields, ____emptyArray_5)); }
	inline ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.UI.Button>
struct List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E, ____items_1)); }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* get__items_1() const { return ____items_1; }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E_StaticFields, ____emptyArray_5)); }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// UnityEngine.LocationService
struct LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855  : public RuntimeObject
{
public:

public:
};


// Assets.Scipts.Pet
struct Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346  : public RuntimeObject
{
public:
	// System.String Assets.Scipts.Pet::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Int32 Assets.Scipts.Pet::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_1;
	// System.Int32 Assets.Scipts.Pet::<Hungry>k__BackingField
	int32_t ___U3CHungryU3Ek__BackingField_2;
	// System.Int32 Assets.Scipts.Pet::<Defecation>k__BackingField
	int32_t ___U3CDefecationU3Ek__BackingField_3;
	// System.Int32 Assets.Scipts.Pet::<Walk>k__BackingField
	int32_t ___U3CWalkU3Ek__BackingField_4;
	// System.Int32 Assets.Scipts.Pet::<Love>k__BackingField
	int32_t ___U3CLoveU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346, ___U3CTypeU3Ek__BackingField_1)); }
	inline int32_t get_U3CTypeU3Ek__BackingField_1() const { return ___U3CTypeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CTypeU3Ek__BackingField_1() { return &___U3CTypeU3Ek__BackingField_1; }
	inline void set_U3CTypeU3Ek__BackingField_1(int32_t value)
	{
		___U3CTypeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CHungryU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346, ___U3CHungryU3Ek__BackingField_2)); }
	inline int32_t get_U3CHungryU3Ek__BackingField_2() const { return ___U3CHungryU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CHungryU3Ek__BackingField_2() { return &___U3CHungryU3Ek__BackingField_2; }
	inline void set_U3CHungryU3Ek__BackingField_2(int32_t value)
	{
		___U3CHungryU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CDefecationU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346, ___U3CDefecationU3Ek__BackingField_3)); }
	inline int32_t get_U3CDefecationU3Ek__BackingField_3() const { return ___U3CDefecationU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CDefecationU3Ek__BackingField_3() { return &___U3CDefecationU3Ek__BackingField_3; }
	inline void set_U3CDefecationU3Ek__BackingField_3(int32_t value)
	{
		___U3CDefecationU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CWalkU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346, ___U3CWalkU3Ek__BackingField_4)); }
	inline int32_t get_U3CWalkU3Ek__BackingField_4() const { return ___U3CWalkU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CWalkU3Ek__BackingField_4() { return &___U3CWalkU3Ek__BackingField_4; }
	inline void set_U3CWalkU3Ek__BackingField_4(int32_t value)
	{
		___U3CWalkU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CLoveU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346, ___U3CLoveU3Ek__BackingField_5)); }
	inline int32_t get_U3CLoveU3Ek__BackingField_5() const { return ___U3CLoveU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CLoveU3Ek__BackingField_5() { return &___U3CLoveU3Ek__BackingField_5; }
	inline void set_U3CLoveU3Ek__BackingField_5(int32_t value)
	{
		___U3CLoveU3Ek__BackingField_5 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
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
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
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

// DesireFeed/<SpawnLoop>d__21
struct U3CSpawnLoopU3Ed__21_t8666E830ACB28FF5789823EF6C30AF3C7F4C9195  : public RuntimeObject
{
public:
	// System.Int32 DesireFeed/<SpawnLoop>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DesireFeed/<SpawnLoop>d__21::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// DesireFeed DesireFeed/<SpawnLoop>d__21::<>4__this
	DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSpawnLoopU3Ed__21_t8666E830ACB28FF5789823EF6C30AF3C7F4C9195, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSpawnLoopU3Ed__21_t8666E830ACB28FF5789823EF6C30AF3C7F4C9195, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSpawnLoopU3Ed__21_t8666E830ACB28FF5789823EF6C30AF3C7F4C9195, ___U3CU3E4__this_2)); }
	inline DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// GoogleMapApi/<Map>d__22
struct U3CMapU3Ed__22_t776434FFDEFA59932DC8A0D4004D798E02C396BB  : public RuntimeObject
{
public:
	// System.Int32 GoogleMapApi/<Map>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GoogleMapApi/<Map>d__22::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GoogleMapApi GoogleMapApi/<Map>d__22::<>4__this
	GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5 * ___U3CU3E4__this_2;
	// UnityEngine.WWW GoogleMapApi/<Map>d__22::<www>5__2
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ___U3CwwwU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMapU3Ed__22_t776434FFDEFA59932DC8A0D4004D798E02C396BB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMapU3Ed__22_t776434FFDEFA59932DC8A0D4004D798E02C396BB, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CMapU3Ed__22_t776434FFDEFA59932DC8A0D4004D798E02C396BB, ___U3CU3E4__this_2)); }
	inline GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CMapU3Ed__22_t776434FFDEFA59932DC8A0D4004D798E02C396BB, ___U3CwwwU3E5__2_3)); }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * get_U3CwwwU3E5__2_3() const { return ___U3CwwwU3E5__2_3; }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 ** get_address_of_U3CwwwU3E5__2_3() { return &___U3CwwwU3E5__2_3; }
	inline void set_U3CwwwU3E5__2_3(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * value)
	{
		___U3CwwwU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Button>
struct Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t6D0827411121305C0C750B338E1BFB757246E871, ___list_0)); }
	inline List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * get_list_0() const { return ___list_0; }
	inline List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t6D0827411121305C0C750B338E1BFB757246E871, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t6D0827411121305C0C750B338E1BFB757246E871, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t6D0827411121305C0C750B338E1BFB757246E871, ___current_3)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_current_3() const { return ___current_3; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___list_0)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_list_0() const { return ___list_0; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___current_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_current_3() const { return ___current_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs
struct ARPlanesChangedEventArgs_tBF7407003D3B2F49087DBED7DEEBD8803466E6CF 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPlane> UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs::<added>k__BackingField
	List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * ___U3CaddedU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPlane> UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs::<updated>k__BackingField
	List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * ___U3CupdatedU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPlane> UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs::<removed>k__BackingField
	List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * ___U3CremovedU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CaddedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARPlanesChangedEventArgs_tBF7407003D3B2F49087DBED7DEEBD8803466E6CF, ___U3CaddedU3Ek__BackingField_0)); }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * get_U3CaddedU3Ek__BackingField_0() const { return ___U3CaddedU3Ek__BackingField_0; }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 ** get_address_of_U3CaddedU3Ek__BackingField_0() { return &___U3CaddedU3Ek__BackingField_0; }
	inline void set_U3CaddedU3Ek__BackingField_0(List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * value)
	{
		___U3CaddedU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaddedU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CupdatedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ARPlanesChangedEventArgs_tBF7407003D3B2F49087DBED7DEEBD8803466E6CF, ___U3CupdatedU3Ek__BackingField_1)); }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * get_U3CupdatedU3Ek__BackingField_1() const { return ___U3CupdatedU3Ek__BackingField_1; }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 ** get_address_of_U3CupdatedU3Ek__BackingField_1() { return &___U3CupdatedU3Ek__BackingField_1; }
	inline void set_U3CupdatedU3Ek__BackingField_1(List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * value)
	{
		___U3CupdatedU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CupdatedU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CremovedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ARPlanesChangedEventArgs_tBF7407003D3B2F49087DBED7DEEBD8803466E6CF, ___U3CremovedU3Ek__BackingField_2)); }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * get_U3CremovedU3Ek__BackingField_2() const { return ___U3CremovedU3Ek__BackingField_2; }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 ** get_address_of_U3CremovedU3Ek__BackingField_2() { return &___U3CremovedU3Ek__BackingField_2; }
	inline void set_U3CremovedU3Ek__BackingField_2(List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * value)
	{
		___U3CremovedU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CremovedU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs
struct ARPlanesChangedEventArgs_tBF7407003D3B2F49087DBED7DEEBD8803466E6CF_marshaled_pinvoke
{
	List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * ___U3CaddedU3Ek__BackingField_0;
	List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * ___U3CupdatedU3Ek__BackingField_1;
	List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * ___U3CremovedU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs
struct ARPlanesChangedEventArgs_tBF7407003D3B2F49087DBED7DEEBD8803466E6CF_marshaled_com
{
	List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * ___U3CaddedU3Ek__BackingField_0;
	List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * ___U3CupdatedU3Ek__BackingField_1;
	List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * ___U3CremovedU3Ek__BackingField_2;
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
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
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct IntPtr_t 
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


// UnityEngine.LocationInfo
struct LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769 
{
public:
	// System.Double UnityEngine.LocationInfo::m_Timestamp
	double ___m_Timestamp_0;
	// System.Single UnityEngine.LocationInfo::m_Latitude
	float ___m_Latitude_1;
	// System.Single UnityEngine.LocationInfo::m_Longitude
	float ___m_Longitude_2;
	// System.Single UnityEngine.LocationInfo::m_Altitude
	float ___m_Altitude_3;
	// System.Single UnityEngine.LocationInfo::m_HorizontalAccuracy
	float ___m_HorizontalAccuracy_4;
	// System.Single UnityEngine.LocationInfo::m_VerticalAccuracy
	float ___m_VerticalAccuracy_5;

public:
	inline static int32_t get_offset_of_m_Timestamp_0() { return static_cast<int32_t>(offsetof(LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769, ___m_Timestamp_0)); }
	inline double get_m_Timestamp_0() const { return ___m_Timestamp_0; }
	inline double* get_address_of_m_Timestamp_0() { return &___m_Timestamp_0; }
	inline void set_m_Timestamp_0(double value)
	{
		___m_Timestamp_0 = value;
	}

	inline static int32_t get_offset_of_m_Latitude_1() { return static_cast<int32_t>(offsetof(LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769, ___m_Latitude_1)); }
	inline float get_m_Latitude_1() const { return ___m_Latitude_1; }
	inline float* get_address_of_m_Latitude_1() { return &___m_Latitude_1; }
	inline void set_m_Latitude_1(float value)
	{
		___m_Latitude_1 = value;
	}

	inline static int32_t get_offset_of_m_Longitude_2() { return static_cast<int32_t>(offsetof(LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769, ___m_Longitude_2)); }
	inline float get_m_Longitude_2() const { return ___m_Longitude_2; }
	inline float* get_address_of_m_Longitude_2() { return &___m_Longitude_2; }
	inline void set_m_Longitude_2(float value)
	{
		___m_Longitude_2 = value;
	}

	inline static int32_t get_offset_of_m_Altitude_3() { return static_cast<int32_t>(offsetof(LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769, ___m_Altitude_3)); }
	inline float get_m_Altitude_3() const { return ___m_Altitude_3; }
	inline float* get_address_of_m_Altitude_3() { return &___m_Altitude_3; }
	inline void set_m_Altitude_3(float value)
	{
		___m_Altitude_3 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalAccuracy_4() { return static_cast<int32_t>(offsetof(LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769, ___m_HorizontalAccuracy_4)); }
	inline float get_m_HorizontalAccuracy_4() const { return ___m_HorizontalAccuracy_4; }
	inline float* get_address_of_m_HorizontalAccuracy_4() { return &___m_HorizontalAccuracy_4; }
	inline void set_m_HorizontalAccuracy_4(float value)
	{
		___m_HorizontalAccuracy_4 = value;
	}

	inline static int32_t get_offset_of_m_VerticalAccuracy_5() { return static_cast<int32_t>(offsetof(LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769, ___m_VerticalAccuracy_5)); }
	inline float get_m_VerticalAccuracy_5() const { return ___m_VerticalAccuracy_5; }
	inline float* get_address_of_m_VerticalAccuracy_5() { return &___m_VerticalAccuracy_5; }
	inline void set_m_VerticalAccuracy_5(float value)
	{
		___m_VerticalAccuracy_5 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;

public:
	inline static int32_t get_offset_of_m_SubId1_2() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId1_2)); }
	inline uint64_t get_m_SubId1_2() const { return ___m_SubId1_2; }
	inline uint64_t* get_address_of_m_SubId1_2() { return &___m_SubId1_2; }
	inline void set_m_SubId1_2(uint64_t value)
	{
		___m_SubId1_2 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_3() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId2_3)); }
	inline uint64_t get_m_SubId2_3() const { return ___m_SubId2_3; }
	inline uint64_t* get_address_of_m_SubId2_3() { return &___m_SubId2_3; }
	inline void set_m_SubId2_3(uint64_t value)
	{
		___m_SubId2_3 = value;
	}
};

struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___s_InvalidId_1;

public:
	inline static int32_t get_offset_of_s_TrackableIdRegex_0() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_TrackableIdRegex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_s_TrackableIdRegex_0() const { return ___s_TrackableIdRegex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_s_TrackableIdRegex_0() { return &___s_TrackableIdRegex_0; }
	inline void set_s_TrackableIdRegex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___s_TrackableIdRegex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackableIdRegex_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_InvalidId_1() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_InvalidId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_s_InvalidId_1() const { return ___s_InvalidId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_s_InvalidId_1() { return &___s_InvalidId_1; }
	inline void set_s_InvalidId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___s_InvalidId_1 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
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
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// UnityEngine.WWW
struct WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.WWW::_uwr
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ____uwr_0;

public:
	inline static int32_t get_offset_of__uwr_0() { return static_cast<int32_t>(offsetof(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2, ____uwr_0)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get__uwr_0() const { return ____uwr_0; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of__uwr_0() { return &____uwr_0; }
	inline void set__uwr_0(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		____uwr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uwr_0), (void*)value);
	}
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
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

// UnityEngine.XR.ARFoundation.ARSessionState
struct ARSessionState_tC5054273C7CB11C5C40D36745DDD2AF056ED1F25 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.ARSessionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARSessionState_tC5054273C7CB11C5C40D36745DDD2AF056ED1F25, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_LegacyContacts_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_RelativeVelocity_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_7() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ReusedContacts_7)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_ReusedContacts_7() const { return ___m_ReusedContacts_7; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_ReusedContacts_7() { return &___m_ReusedContacts_7; }
	inline void set_m_ReusedContacts_7(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_ReusedContacts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_8() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_LegacyContacts_8)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_LegacyContacts_8() const { return ___m_LegacyContacts_8; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_LegacyContacts_8() { return &___m_LegacyContacts_8; }
	inline void set_m_LegacyContacts_8(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_LegacyContacts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
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

// System.Delegate
struct Delegate_t  : public RuntimeObject
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
struct Exception_t  : public RuntimeObject
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

// UnityEngine.LocationServiceStatus
struct LocationServiceStatus_tD2BEAE4A2A42A9D0D4D859AE1C968D278D5ACF2F 
{
public:
	// System.Int32 UnityEngine.LocationServiceStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LocationServiceStatus_tD2BEAE4A2A42A9D0D4D859AE1C968D278D5ACF2F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// UnityEngine.XR.ARSubsystems.PlaneDetectionMode
struct PlaneDetectionMode_t22DC72CB3F42DDC9A2472A66F8119475357B48CD 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneDetectionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneDetectionMode_t22DC72CB3F42DDC9A2472A66F8119475357B48CD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.TouchPhase
struct TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
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


// UnityEngine.TouchScreenKeyboardType
struct TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
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


// UnityEngine.XR.ARSubsystems.TrackableType
struct TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackableType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GoogleMapApi/mapType
struct mapType_tD9FC3CBF342EC9A98935288D99ECB1515FFAB3A0 
{
public:
	// System.Int32 GoogleMapApi/mapType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(mapType_tD9FC3CBF342EC9A98935288D99ECB1515FFAB3A0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/CharacterValidation
struct CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41 
{
public:
	// System.Int32 UnityEngine.UI.InputField/CharacterValidation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/ContentType
struct ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1 
{
public:
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/InputType
struct InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2 
{
public:
	// System.Int32 UnityEngine.UI.InputField/InputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/LineType
struct LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE 
{
public:
	// System.Int32 UnityEngine.UI.InputField/LineType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PalmPetMove/<Move>d__1
struct U3CMoveU3Ed__1_tCC40295A9D20D22457CFDA19D2690EA9908D7203  : public RuntimeObject
{
public:
	// System.Int32 PalmPetMove/<Move>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PalmPetMove/<Move>d__1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PalmPetMove PalmPetMove/<Move>d__1::<>4__this
	PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D * ___U3CU3E4__this_2;
	// UnityEngine.Vector3 PalmPetMove/<Move>d__1::vec
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vec_3;
	// UnityEngine.Quaternion PalmPetMove/<Move>d__1::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_4;
	// UnityEngine.Vector3 PalmPetMove/<Move>d__1::<vecter3>5__2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3Cvecter3U3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMoveU3Ed__1_tCC40295A9D20D22457CFDA19D2690EA9908D7203, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMoveU3Ed__1_tCC40295A9D20D22457CFDA19D2690EA9908D7203, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CMoveU3Ed__1_tCC40295A9D20D22457CFDA19D2690EA9908D7203, ___U3CU3E4__this_2)); }
	inline PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_vec_3() { return static_cast<int32_t>(offsetof(U3CMoveU3Ed__1_tCC40295A9D20D22457CFDA19D2690EA9908D7203, ___vec_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_vec_3() const { return ___vec_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_vec_3() { return &___vec_3; }
	inline void set_vec_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___vec_3 = value;
	}

	inline static int32_t get_offset_of_rotation_4() { return static_cast<int32_t>(offsetof(U3CMoveU3Ed__1_tCC40295A9D20D22457CFDA19D2690EA9908D7203, ___rotation_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_4() const { return ___rotation_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_4() { return &___rotation_4; }
	inline void set_rotation_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_4 = value;
	}

	inline static int32_t get_offset_of_U3Cvecter3U3E5__2_5() { return static_cast<int32_t>(offsetof(U3CMoveU3Ed__1_tCC40295A9D20D22457CFDA19D2690EA9908D7203, ___U3Cvecter3U3E5__2_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3Cvecter3U3E5__2_5() const { return ___U3Cvecter3U3E5__2_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3Cvecter3U3E5__2_5() { return &___U3Cvecter3U3E5__2_5; }
	inline void set_U3Cvecter3U3E5__2_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3Cvecter3U3E5__2_5 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs
struct ARSessionStateChangedEventArgs_tF14FF2D76D721B74F80297911644222B2DF3FC06 
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs::<state>k__BackingField
	int32_t ___U3CstateU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CstateU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARSessionStateChangedEventArgs_tF14FF2D76D721B74F80297911644222B2DF3FC06, ___U3CstateU3Ek__BackingField_0)); }
	inline int32_t get_U3CstateU3Ek__BackingField_0() const { return ___U3CstateU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CstateU3Ek__BackingField_0() { return &___U3CstateU3Ek__BackingField_0; }
	inline void set_U3CstateU3Ek__BackingField_0(int32_t value)
	{
		___U3CstateU3Ek__BackingField_0 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
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

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Touch
struct Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
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


// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_HitType_4() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_HitType_4)); }
	inline int32_t get_m_HitType_4() const { return ___m_HitType_4; }
	inline int32_t* get_address_of_m_HitType_4() { return &___m_HitType_4; }
	inline void set_m_HitType_4(int32_t value)
	{
		___m_HitType_4 = value;
	}
};

struct XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_StaticFields, ___s_Default_0)); }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  get_s_Default_0() const { return ___s_Default_0; }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  value)
	{
		___s_Default_0 = value;
	}
};


// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs>
struct Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>
struct Action_1_t5DF84322FFE12A24465E48164961CD724D109521  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E 
{
public:
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Transform_3;

public:
	inline static int32_t get_offset_of_U3CdistanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___U3CdistanceU3Ek__BackingField_0)); }
	inline float get_U3CdistanceU3Ek__BackingField_0() const { return ___U3CdistanceU3Ek__BackingField_0; }
	inline float* get_address_of_U3CdistanceU3Ek__BackingField_0() { return &___U3CdistanceU3Ek__BackingField_0; }
	inline void set_U3CdistanceU3Ek__BackingField_0(float value)
	{
		___U3CdistanceU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CtrackableU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___U3CtrackableU3Ek__BackingField_1)); }
	inline ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * get_U3CtrackableU3Ek__BackingField_1() const { return ___U3CtrackableU3Ek__BackingField_1; }
	inline ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 ** get_address_of_U3CtrackableU3Ek__BackingField_1() { return &___U3CtrackableU3Ek__BackingField_1; }
	inline void set_U3CtrackableU3Ek__BackingField_1(ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * value)
	{
		___U3CtrackableU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackableU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hit_2() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___m_Hit_2)); }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  get_m_Hit_2() const { return ___m_Hit_2; }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB * get_address_of_m_Hit_2() { return &___m_Hit_2; }
	inline void set_m_Hit_2(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  value)
	{
		___m_Hit_2 = value;
	}

	inline static int32_t get_offset_of_m_Transform_3() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___m_Transform_3)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_Transform_3() const { return ___m_Transform_3; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_Transform_3() { return &___m_Transform_3; }
	inline void set_m_Transform_3(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_Transform_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Transform_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___m_Hit_2;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___m_Hit_2;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Transform_3;
};

// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct SubsystemLifecycleManager_3_t0E334FAE91D54B85E9314C55C4CDCB207ED1BCC5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0E334FAE91D54B85E9314C55C4CDCB207ED1BCC5, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_t0E334FAE91D54B85E9314C55C4CDCB207ED1BCC5_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t42260E8F78DDBD1A6947677665395B70FA8816C1 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0E334FAE91D54B85E9314C55C4CDCB207ED1BCC5_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0E334FAE91D54B85E9314C55C4CDCB207ED1BCC5_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_t42260E8F78DDBD1A6947677665395B70FA8816C1 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_t42260E8F78DDBD1A6947677665395B70FA8816C1 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_t42260E8F78DDBD1A6947677665395B70FA8816C1 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tAE84735071B78277703DB9996DE2E5C4456317C5 * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_tAE84735071B78277703DB9996DE2E5C4456317C5 * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_tAE84735071B78277703DB9996DE2E5C4456317C5 ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_tAE84735071B78277703DB9996DE2E5C4456317C5 * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// DesireFeed
struct DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Rigidbody2D DesireFeed::rigid
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rigid_4;
	// UnityEngine.BoxCollider2D DesireFeed::collider
	BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * ___collider_5;
	// UnityEngine.UI.Text DesireFeed::lifeValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___lifeValue_6;
	// UnityEngine.UI.Text DesireFeed::timeValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___timeValue_7;
	// UnityEngine.UI.Text DesireFeed::hungryValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___hungryValue_8;
	// UnityEngine.GameObject DesireFeed::gamePanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gamePanel_9;
	// UnityEngine.GameObject DesireFeed::completePanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___completePanel_10;
	// UnityEngine.GameObject DesireFeed::Meat
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Meat_11;
	// UnityEngine.GameObject DesireFeed::Bomb
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Bomb_12;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> DesireFeed::objectList
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___objectList_13;
	// System.Int32 DesireFeed::count
	int32_t ___count_14;
	// System.Single DesireFeed::time
	float ___time_15;
	// UnityEngine.GameObject DesireFeed::cat
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cat_16;
	// System.Single DesireFeed::moveSpeed
	float ___moveSpeed_17;
	// System.Boolean DesireFeed::leftMove
	bool ___leftMove_18;
	// System.Boolean DesireFeed::rightMove
	bool ___rightMove_19;
	// System.Boolean DesireFeed::gameEnd
	bool ___gameEnd_20;

public:
	inline static int32_t get_offset_of_rigid_4() { return static_cast<int32_t>(offsetof(DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8, ___rigid_4)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rigid_4() const { return ___rigid_4; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rigid_4() { return &___rigid_4; }
	inline void set_rigid_4(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rigid_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigid_4), (void*)value);
	}

	inline static int32_t get_offset_of_collider_5() { return static_cast<int32_t>(offsetof(DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8, ___collider_5)); }
	inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * get_collider_5() const { return ___collider_5; }
	inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 ** get_address_of_collider_5() { return &___collider_5; }
	inline void set_collider_5(BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * value)
	{
		___collider_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collider_5), (void*)value);
	}

	inline static int32_t get_offset_of_lifeValue_6() { return static_cast<int32_t>(offsetof(DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8, ___lifeValue_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_lifeValue_6() const { return ___lifeValue_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_lifeValue_6() { return &___lifeValue_6; }
	inline void set_lifeValue_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___lifeValue_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lifeValue_6), (void*)value);
	}

	inline static int32_t get_offset_of_timeValue_7() { return static_cast<int32_t>(offsetof(DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8, ___timeValue_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_timeValue_7() const { return ___timeValue_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_timeValue_7() { return &___timeValue_7; }
	inline void set_timeValue_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___timeValue_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timeValue_7), (void*)value);
	}

	inline static int32_t get_offset_of_hungryValue_8() { return static_cast<int32_t>(offsetof(DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8, ___hungryValue_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_hungryValue_8() const { return ___hungryValue_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_hungryValue_8() { return &___hungryValue_8; }
	inline void set_hungryValue_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___hungryValue_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hungryValue_8), (void*)value);
	}

	inline static int32_t get_offset_of_gamePanel_9() { return static_cast<int32_t>(offsetof(DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8, ___gamePanel_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gamePanel_9() const { return ___gamePanel_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gamePanel_9() { return &___gamePanel_9; }
	inline void set_gamePanel_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gamePanel_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gamePanel_9), (void*)value);
	}

	inline static int32_t get_offset_of_completePanel_10() { return static_cast<int32_t>(offsetof(DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8, ___completePanel_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_completePanel_10() const { return ___completePanel_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_completePanel_10() { return &___completePanel_10; }
	inline void set_completePanel_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___completePanel_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completePanel_10), (void*)value);
	}

	inline static int32_t get_offset_of_Meat_11() { return static_cast<int32_t>(offsetof(DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8, ___Meat_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Meat_11() const { return ___Meat_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Meat_11() { return &___Meat_11; }
	inline void set_Meat_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Meat_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Meat_11), (void*)value);
	}

	inline static int32_t get_offset_of_Bomb_12() { return static_cast<int32_t>(offsetof(DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8, ___Bomb_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Bomb_12() const { return ___Bomb_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Bomb_12() { return &___Bomb_12; }
	inline void set_Bomb_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Bomb_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Bomb_12), (void*)value);
	}

	inline static int32_t get_offset_of_objectList_13() { return static_cast<int32_t>(offsetof(DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8, ___objectList_13)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_objectList_13() const { return ___objectList_13; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_objectList_13() { return &___objectList_13; }
	inline void set_objectList_13(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___objectList_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectList_13), (void*)value);
	}

	inline static int32_t get_offset_of_count_14() { return static_cast<int32_t>(offsetof(DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8, ___count_14)); }
	inline int32_t get_count_14() const { return ___count_14; }
	inline int32_t* get_address_of_count_14() { return &___count_14; }
	inline void set_count_14(int32_t value)
	{
		___count_14 = value;
	}

	inline static int32_t get_offset_of_time_15() { return static_cast<int32_t>(offsetof(DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8, ___time_15)); }
	inline float get_time_15() const { return ___time_15; }
	inline float* get_address_of_time_15() { return &___time_15; }
	inline void set_time_15(float value)
	{
		___time_15 = value;
	}

	inline static int32_t get_offset_of_cat_16() { return static_cast<int32_t>(offsetof(DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8, ___cat_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cat_16() const { return ___cat_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cat_16() { return &___cat_16; }
	inline void set_cat_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cat_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cat_16), (void*)value);
	}

	inline static int32_t get_offset_of_moveSpeed_17() { return static_cast<int32_t>(offsetof(DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8, ___moveSpeed_17)); }
	inline float get_moveSpeed_17() const { return ___moveSpeed_17; }
	inline float* get_address_of_moveSpeed_17() { return &___moveSpeed_17; }
	inline void set_moveSpeed_17(float value)
	{
		___moveSpeed_17 = value;
	}

	inline static int32_t get_offset_of_leftMove_18() { return static_cast<int32_t>(offsetof(DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8, ___leftMove_18)); }
	inline bool get_leftMove_18() const { return ___leftMove_18; }
	inline bool* get_address_of_leftMove_18() { return &___leftMove_18; }
	inline void set_leftMove_18(bool value)
	{
		___leftMove_18 = value;
	}

	inline static int32_t get_offset_of_rightMove_19() { return static_cast<int32_t>(offsetof(DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8, ___rightMove_19)); }
	inline bool get_rightMove_19() const { return ___rightMove_19; }
	inline bool* get_address_of_rightMove_19() { return &___rightMove_19; }
	inline void set_rightMove_19(bool value)
	{
		___rightMove_19 = value;
	}

	inline static int32_t get_offset_of_gameEnd_20() { return static_cast<int32_t>(offsetof(DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8, ___gameEnd_20)); }
	inline bool get_gameEnd_20() const { return ___gameEnd_20; }
	inline bool* get_address_of_gameEnd_20() { return &___gameEnd_20; }
	inline void set_gameEnd_20(bool value)
	{
		___gameEnd_20 = value;
	}
};


// DesirePoop
struct DesirePoop_t2305AD9CC25F355951C1C8E0AE6553E1A995F79F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject DesirePoop::complete
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___complete_4;
	// UnityEngine.UI.Text DesirePoop::poopValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___poopValue_5;

public:
	inline static int32_t get_offset_of_complete_4() { return static_cast<int32_t>(offsetof(DesirePoop_t2305AD9CC25F355951C1C8E0AE6553E1A995F79F, ___complete_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_complete_4() const { return ___complete_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_complete_4() { return &___complete_4; }
	inline void set_complete_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___complete_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___complete_4), (void*)value);
	}

	inline static int32_t get_offset_of_poopValue_5() { return static_cast<int32_t>(offsetof(DesirePoop_t2305AD9CC25F355951C1C8E0AE6553E1A995F79F, ___poopValue_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_poopValue_5() const { return ___poopValue_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_poopValue_5() { return &___poopValue_5; }
	inline void set_poopValue_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___poopValue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___poopValue_5), (void*)value);
	}
};


// FeedCollision
struct FeedCollision_tC4D88A4626F5FBF1E745321043E318F8F61F57B2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// DesireFeed FeedCollision::desireFeed
	DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * ___desireFeed_4;

public:
	inline static int32_t get_offset_of_desireFeed_4() { return static_cast<int32_t>(offsetof(FeedCollision_tC4D88A4626F5FBF1E745321043E318F8F61F57B2, ___desireFeed_4)); }
	inline DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * get_desireFeed_4() const { return ___desireFeed_4; }
	inline DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 ** get_address_of_desireFeed_4() { return &___desireFeed_4; }
	inline void set_desireFeed_4(DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * value)
	{
		___desireFeed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___desireFeed_4), (void*)value);
	}
};


// GoogleMapApi
struct GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject GoogleMapApi::StartPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___StartPanel_4;
	// UnityEngine.UI.Text GoogleMapApi::distanceValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___distanceValue_5;
	// UnityEngine.UI.RawImage GoogleMapApi::MapObject
	RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * ___MapObject_6;
	// UnityEngine.GameObject GoogleMapApi::cat
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cat_7;
	// UnityEngine.Animator GoogleMapApi::palmPetAnimator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___palmPetAnimator_8;
	// System.Boolean GoogleMapApi::isStart
	bool ___isStart_9;
	// System.Double GoogleMapApi::prevLat
	double ___prevLat_10;
	// System.Double GoogleMapApi::prevLon
	double ___prevLon_11;
	// System.Double GoogleMapApi::distance
	double ___distance_12;
	// System.Boolean GoogleMapApi::gpsInit
	bool ___gpsInit_13;
	// System.Double GoogleMapApi::detail
	double ___detail_14;
	// UnityEngine.LocationInfo GoogleMapApi::currentGPSPosition
	LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769  ___currentGPSPosition_15;
	// System.String GoogleMapApi::url
	String_t* ___url_16;
	// System.Double GoogleMapApi::lat
	double ___lat_17;
	// System.Double GoogleMapApi::lon
	double ___lon_18;
	// UnityEngine.LocationInfo GoogleMapApi::li
	LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769  ___li_19;
	// System.Int32 GoogleMapApi::zoom
	int32_t ___zoom_20;
	// System.Int32 GoogleMapApi::mapWidth
	int32_t ___mapWidth_21;
	// System.Int32 GoogleMapApi::mapHeight
	int32_t ___mapHeight_22;
	// GoogleMapApi/mapType GoogleMapApi::mapSelected
	int32_t ___mapSelected_23;
	// System.Int32 GoogleMapApi::scale
	int32_t ___scale_24;

public:
	inline static int32_t get_offset_of_StartPanel_4() { return static_cast<int32_t>(offsetof(GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5, ___StartPanel_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_StartPanel_4() const { return ___StartPanel_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_StartPanel_4() { return &___StartPanel_4; }
	inline void set_StartPanel_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___StartPanel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StartPanel_4), (void*)value);
	}

	inline static int32_t get_offset_of_distanceValue_5() { return static_cast<int32_t>(offsetof(GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5, ___distanceValue_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_distanceValue_5() const { return ___distanceValue_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_distanceValue_5() { return &___distanceValue_5; }
	inline void set_distanceValue_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___distanceValue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___distanceValue_5), (void*)value);
	}

	inline static int32_t get_offset_of_MapObject_6() { return static_cast<int32_t>(offsetof(GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5, ___MapObject_6)); }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * get_MapObject_6() const { return ___MapObject_6; }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A ** get_address_of_MapObject_6() { return &___MapObject_6; }
	inline void set_MapObject_6(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * value)
	{
		___MapObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MapObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_cat_7() { return static_cast<int32_t>(offsetof(GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5, ___cat_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cat_7() const { return ___cat_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cat_7() { return &___cat_7; }
	inline void set_cat_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cat_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cat_7), (void*)value);
	}

	inline static int32_t get_offset_of_palmPetAnimator_8() { return static_cast<int32_t>(offsetof(GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5, ___palmPetAnimator_8)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_palmPetAnimator_8() const { return ___palmPetAnimator_8; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_palmPetAnimator_8() { return &___palmPetAnimator_8; }
	inline void set_palmPetAnimator_8(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___palmPetAnimator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___palmPetAnimator_8), (void*)value);
	}

	inline static int32_t get_offset_of_isStart_9() { return static_cast<int32_t>(offsetof(GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5, ___isStart_9)); }
	inline bool get_isStart_9() const { return ___isStart_9; }
	inline bool* get_address_of_isStart_9() { return &___isStart_9; }
	inline void set_isStart_9(bool value)
	{
		___isStart_9 = value;
	}

	inline static int32_t get_offset_of_prevLat_10() { return static_cast<int32_t>(offsetof(GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5, ___prevLat_10)); }
	inline double get_prevLat_10() const { return ___prevLat_10; }
	inline double* get_address_of_prevLat_10() { return &___prevLat_10; }
	inline void set_prevLat_10(double value)
	{
		___prevLat_10 = value;
	}

	inline static int32_t get_offset_of_prevLon_11() { return static_cast<int32_t>(offsetof(GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5, ___prevLon_11)); }
	inline double get_prevLon_11() const { return ___prevLon_11; }
	inline double* get_address_of_prevLon_11() { return &___prevLon_11; }
	inline void set_prevLon_11(double value)
	{
		___prevLon_11 = value;
	}

	inline static int32_t get_offset_of_distance_12() { return static_cast<int32_t>(offsetof(GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5, ___distance_12)); }
	inline double get_distance_12() const { return ___distance_12; }
	inline double* get_address_of_distance_12() { return &___distance_12; }
	inline void set_distance_12(double value)
	{
		___distance_12 = value;
	}

	inline static int32_t get_offset_of_gpsInit_13() { return static_cast<int32_t>(offsetof(GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5, ___gpsInit_13)); }
	inline bool get_gpsInit_13() const { return ___gpsInit_13; }
	inline bool* get_address_of_gpsInit_13() { return &___gpsInit_13; }
	inline void set_gpsInit_13(bool value)
	{
		___gpsInit_13 = value;
	}

	inline static int32_t get_offset_of_detail_14() { return static_cast<int32_t>(offsetof(GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5, ___detail_14)); }
	inline double get_detail_14() const { return ___detail_14; }
	inline double* get_address_of_detail_14() { return &___detail_14; }
	inline void set_detail_14(double value)
	{
		___detail_14 = value;
	}

	inline static int32_t get_offset_of_currentGPSPosition_15() { return static_cast<int32_t>(offsetof(GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5, ___currentGPSPosition_15)); }
	inline LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769  get_currentGPSPosition_15() const { return ___currentGPSPosition_15; }
	inline LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769 * get_address_of_currentGPSPosition_15() { return &___currentGPSPosition_15; }
	inline void set_currentGPSPosition_15(LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769  value)
	{
		___currentGPSPosition_15 = value;
	}

	inline static int32_t get_offset_of_url_16() { return static_cast<int32_t>(offsetof(GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5, ___url_16)); }
	inline String_t* get_url_16() const { return ___url_16; }
	inline String_t** get_address_of_url_16() { return &___url_16; }
	inline void set_url_16(String_t* value)
	{
		___url_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_16), (void*)value);
	}

	inline static int32_t get_offset_of_lat_17() { return static_cast<int32_t>(offsetof(GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5, ___lat_17)); }
	inline double get_lat_17() const { return ___lat_17; }
	inline double* get_address_of_lat_17() { return &___lat_17; }
	inline void set_lat_17(double value)
	{
		___lat_17 = value;
	}

	inline static int32_t get_offset_of_lon_18() { return static_cast<int32_t>(offsetof(GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5, ___lon_18)); }
	inline double get_lon_18() const { return ___lon_18; }
	inline double* get_address_of_lon_18() { return &___lon_18; }
	inline void set_lon_18(double value)
	{
		___lon_18 = value;
	}

	inline static int32_t get_offset_of_li_19() { return static_cast<int32_t>(offsetof(GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5, ___li_19)); }
	inline LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769  get_li_19() const { return ___li_19; }
	inline LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769 * get_address_of_li_19() { return &___li_19; }
	inline void set_li_19(LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769  value)
	{
		___li_19 = value;
	}

	inline static int32_t get_offset_of_zoom_20() { return static_cast<int32_t>(offsetof(GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5, ___zoom_20)); }
	inline int32_t get_zoom_20() const { return ___zoom_20; }
	inline int32_t* get_address_of_zoom_20() { return &___zoom_20; }
	inline void set_zoom_20(int32_t value)
	{
		___zoom_20 = value;
	}

	inline static int32_t get_offset_of_mapWidth_21() { return static_cast<int32_t>(offsetof(GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5, ___mapWidth_21)); }
	inline int32_t get_mapWidth_21() const { return ___mapWidth_21; }
	inline int32_t* get_address_of_mapWidth_21() { return &___mapWidth_21; }
	inline void set_mapWidth_21(int32_t value)
	{
		___mapWidth_21 = value;
	}

	inline static int32_t get_offset_of_mapHeight_22() { return static_cast<int32_t>(offsetof(GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5, ___mapHeight_22)); }
	inline int32_t get_mapHeight_22() const { return ___mapHeight_22; }
	inline int32_t* get_address_of_mapHeight_22() { return &___mapHeight_22; }
	inline void set_mapHeight_22(int32_t value)
	{
		___mapHeight_22 = value;
	}

	inline static int32_t get_offset_of_mapSelected_23() { return static_cast<int32_t>(offsetof(GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5, ___mapSelected_23)); }
	inline int32_t get_mapSelected_23() const { return ___mapSelected_23; }
	inline int32_t* get_address_of_mapSelected_23() { return &___mapSelected_23; }
	inline void set_mapSelected_23(int32_t value)
	{
		___mapSelected_23 = value;
	}

	inline static int32_t get_offset_of_scale_24() { return static_cast<int32_t>(offsetof(GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5, ___scale_24)); }
	inline int32_t get_scale_24() const { return ___scale_24; }
	inline int32_t* get_address_of_scale_24() { return &___scale_24; }
	inline void set_scale_24(int32_t value)
	{
		___scale_24 = value;
	}
};


// PalmPetMove
struct PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// PlaceOnPlane
struct PlaceOnPlane_t3DF0B6A936DE2BB24AF3A85695A36F2D6048A9C3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.XR.ARFoundation.ARRaycastManager PlaceOnPlane::arRaycastManager
	ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * ___arRaycastManager_4;
	// UnityEngine.XR.ARFoundation.ARPlaneManager PlaceOnPlane::arPlaneManager
	ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * ___arPlaneManager_5;
	// UnityEngine.GameObject PlaceOnPlane::SpawnPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SpawnPrefab_6;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit> PlaceOnPlane::hits
	List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * ___hits_7;
	// UnityEngine.GameObject PlaceOnPlane::palmPet
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___palmPet_8;
	// System.Boolean PlaceOnPlane::isActive
	bool ___isActive_9;
	// UnityEngine.GameObject PlaceOnPlane::ScanGuidePanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ScanGuidePanel_10;
	// UnityEngine.GameObject PlaceOnPlane::TouchGuidePanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TouchGuidePanel_11;
	// UnityEngine.Pose PlaceOnPlane::hitPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___hitPose_12;

public:
	inline static int32_t get_offset_of_arRaycastManager_4() { return static_cast<int32_t>(offsetof(PlaceOnPlane_t3DF0B6A936DE2BB24AF3A85695A36F2D6048A9C3, ___arRaycastManager_4)); }
	inline ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * get_arRaycastManager_4() const { return ___arRaycastManager_4; }
	inline ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F ** get_address_of_arRaycastManager_4() { return &___arRaycastManager_4; }
	inline void set_arRaycastManager_4(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * value)
	{
		___arRaycastManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arRaycastManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_arPlaneManager_5() { return static_cast<int32_t>(offsetof(PlaceOnPlane_t3DF0B6A936DE2BB24AF3A85695A36F2D6048A9C3, ___arPlaneManager_5)); }
	inline ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * get_arPlaneManager_5() const { return ___arPlaneManager_5; }
	inline ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 ** get_address_of_arPlaneManager_5() { return &___arPlaneManager_5; }
	inline void set_arPlaneManager_5(ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * value)
	{
		___arPlaneManager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arPlaneManager_5), (void*)value);
	}

	inline static int32_t get_offset_of_SpawnPrefab_6() { return static_cast<int32_t>(offsetof(PlaceOnPlane_t3DF0B6A936DE2BB24AF3A85695A36F2D6048A9C3, ___SpawnPrefab_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SpawnPrefab_6() const { return ___SpawnPrefab_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SpawnPrefab_6() { return &___SpawnPrefab_6; }
	inline void set_SpawnPrefab_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SpawnPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpawnPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_hits_7() { return static_cast<int32_t>(offsetof(PlaceOnPlane_t3DF0B6A936DE2BB24AF3A85695A36F2D6048A9C3, ___hits_7)); }
	inline List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * get_hits_7() const { return ___hits_7; }
	inline List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D ** get_address_of_hits_7() { return &___hits_7; }
	inline void set_hits_7(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * value)
	{
		___hits_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hits_7), (void*)value);
	}

	inline static int32_t get_offset_of_palmPet_8() { return static_cast<int32_t>(offsetof(PlaceOnPlane_t3DF0B6A936DE2BB24AF3A85695A36F2D6048A9C3, ___palmPet_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_palmPet_8() const { return ___palmPet_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_palmPet_8() { return &___palmPet_8; }
	inline void set_palmPet_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___palmPet_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___palmPet_8), (void*)value);
	}

	inline static int32_t get_offset_of_isActive_9() { return static_cast<int32_t>(offsetof(PlaceOnPlane_t3DF0B6A936DE2BB24AF3A85695A36F2D6048A9C3, ___isActive_9)); }
	inline bool get_isActive_9() const { return ___isActive_9; }
	inline bool* get_address_of_isActive_9() { return &___isActive_9; }
	inline void set_isActive_9(bool value)
	{
		___isActive_9 = value;
	}

	inline static int32_t get_offset_of_ScanGuidePanel_10() { return static_cast<int32_t>(offsetof(PlaceOnPlane_t3DF0B6A936DE2BB24AF3A85695A36F2D6048A9C3, ___ScanGuidePanel_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ScanGuidePanel_10() const { return ___ScanGuidePanel_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ScanGuidePanel_10() { return &___ScanGuidePanel_10; }
	inline void set_ScanGuidePanel_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ScanGuidePanel_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ScanGuidePanel_10), (void*)value);
	}

	inline static int32_t get_offset_of_TouchGuidePanel_11() { return static_cast<int32_t>(offsetof(PlaceOnPlane_t3DF0B6A936DE2BB24AF3A85695A36F2D6048A9C3, ___TouchGuidePanel_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TouchGuidePanel_11() const { return ___TouchGuidePanel_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TouchGuidePanel_11() { return &___TouchGuidePanel_11; }
	inline void set_TouchGuidePanel_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TouchGuidePanel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TouchGuidePanel_11), (void*)value);
	}

	inline static int32_t get_offset_of_hitPose_12() { return static_cast<int32_t>(offsetof(PlaceOnPlane_t3DF0B6A936DE2BB24AF3A85695A36F2D6048A9C3, ___hitPose_12)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_hitPose_12() const { return ___hitPose_12; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_hitPose_12() { return &___hitPose_12; }
	inline void set_hitPose_12(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___hitPose_12 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UIManager
struct UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Assets.Scipts.Pet UIManager::pet
	Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * ___pet_4;
	// UnityEngine.GameObject UIManager::startPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___startPanel_5;
	// UnityEngine.GameObject UIManager::desirePanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___desirePanel_6;
	// UnityEngine.GameObject UIManager::homePanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___homePanel_7;
	// UnityEngine.GameObject UIManager::multiPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___multiPanel_8;
	// UnityEngine.GameObject UIManager::shopPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___shopPanel_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UIManager::centerPanelList
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___centerPanelList_10;
	// UnityEngine.GameObject UIManager::GamePanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GamePanel_11;
	// UnityEngine.GameObject UIManager::feedPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___feedPanel_12;
	// UnityEngine.GameObject UIManager::poopPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___poopPanel_13;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UIManager::gamePanelList
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___gamePanelList_14;
	// UnityEngine.UI.Button UIManager::walkButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___walkButton_15;
	// UnityEngine.UI.Button UIManager::desireButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___desireButton_16;
	// UnityEngine.UI.Button UIManager::homeButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___homeButton_17;
	// UnityEngine.UI.Button UIManager::multiButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___multiButton_18;
	// UnityEngine.UI.Button UIManager::shopButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___shopButton_19;
	// System.Collections.Generic.List`1<UnityEngine.UI.Button> UIManager::buttonList
	List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * ___buttonList_20;
	// UnityEngine.GameObject UIManager::walkingCat
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___walkingCat_21;
	// UnityEngine.UI.InputField UIManager::nameField
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___nameField_22;
	// UnityEngine.UI.Dropdown UIManager::typeField
	Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * ___typeField_23;
	// UnityEngine.UI.Text UIManager::nameText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___nameText_24;
	// UnityEngine.UI.Text UIManager::hungryText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___hungryText_25;
	// UnityEngine.UI.Text UIManager::defecationText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___defecationText_26;
	// UnityEngine.UI.Text UIManager::walkText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___walkText_27;
	// UnityEngine.UI.Text UIManager::loveText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___loveText_28;

public:
	inline static int32_t get_offset_of_pet_4() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___pet_4)); }
	inline Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * get_pet_4() const { return ___pet_4; }
	inline Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 ** get_address_of_pet_4() { return &___pet_4; }
	inline void set_pet_4(Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * value)
	{
		___pet_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pet_4), (void*)value);
	}

	inline static int32_t get_offset_of_startPanel_5() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___startPanel_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_startPanel_5() const { return ___startPanel_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_startPanel_5() { return &___startPanel_5; }
	inline void set_startPanel_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___startPanel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startPanel_5), (void*)value);
	}

	inline static int32_t get_offset_of_desirePanel_6() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___desirePanel_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_desirePanel_6() const { return ___desirePanel_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_desirePanel_6() { return &___desirePanel_6; }
	inline void set_desirePanel_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___desirePanel_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___desirePanel_6), (void*)value);
	}

	inline static int32_t get_offset_of_homePanel_7() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___homePanel_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_homePanel_7() const { return ___homePanel_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_homePanel_7() { return &___homePanel_7; }
	inline void set_homePanel_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___homePanel_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___homePanel_7), (void*)value);
	}

	inline static int32_t get_offset_of_multiPanel_8() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___multiPanel_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_multiPanel_8() const { return ___multiPanel_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_multiPanel_8() { return &___multiPanel_8; }
	inline void set_multiPanel_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___multiPanel_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___multiPanel_8), (void*)value);
	}

	inline static int32_t get_offset_of_shopPanel_9() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___shopPanel_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_shopPanel_9() const { return ___shopPanel_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_shopPanel_9() { return &___shopPanel_9; }
	inline void set_shopPanel_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___shopPanel_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shopPanel_9), (void*)value);
	}

	inline static int32_t get_offset_of_centerPanelList_10() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___centerPanelList_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_centerPanelList_10() const { return ___centerPanelList_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_centerPanelList_10() { return &___centerPanelList_10; }
	inline void set_centerPanelList_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___centerPanelList_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___centerPanelList_10), (void*)value);
	}

	inline static int32_t get_offset_of_GamePanel_11() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___GamePanel_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GamePanel_11() const { return ___GamePanel_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GamePanel_11() { return &___GamePanel_11; }
	inline void set_GamePanel_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GamePanel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GamePanel_11), (void*)value);
	}

	inline static int32_t get_offset_of_feedPanel_12() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___feedPanel_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_feedPanel_12() const { return ___feedPanel_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_feedPanel_12() { return &___feedPanel_12; }
	inline void set_feedPanel_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___feedPanel_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___feedPanel_12), (void*)value);
	}

	inline static int32_t get_offset_of_poopPanel_13() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___poopPanel_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_poopPanel_13() const { return ___poopPanel_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_poopPanel_13() { return &___poopPanel_13; }
	inline void set_poopPanel_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___poopPanel_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___poopPanel_13), (void*)value);
	}

	inline static int32_t get_offset_of_gamePanelList_14() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___gamePanelList_14)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_gamePanelList_14() const { return ___gamePanelList_14; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_gamePanelList_14() { return &___gamePanelList_14; }
	inline void set_gamePanelList_14(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___gamePanelList_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gamePanelList_14), (void*)value);
	}

	inline static int32_t get_offset_of_walkButton_15() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___walkButton_15)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_walkButton_15() const { return ___walkButton_15; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_walkButton_15() { return &___walkButton_15; }
	inline void set_walkButton_15(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___walkButton_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___walkButton_15), (void*)value);
	}

	inline static int32_t get_offset_of_desireButton_16() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___desireButton_16)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_desireButton_16() const { return ___desireButton_16; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_desireButton_16() { return &___desireButton_16; }
	inline void set_desireButton_16(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___desireButton_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___desireButton_16), (void*)value);
	}

	inline static int32_t get_offset_of_homeButton_17() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___homeButton_17)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_homeButton_17() const { return ___homeButton_17; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_homeButton_17() { return &___homeButton_17; }
	inline void set_homeButton_17(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___homeButton_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___homeButton_17), (void*)value);
	}

	inline static int32_t get_offset_of_multiButton_18() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___multiButton_18)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_multiButton_18() const { return ___multiButton_18; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_multiButton_18() { return &___multiButton_18; }
	inline void set_multiButton_18(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___multiButton_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___multiButton_18), (void*)value);
	}

	inline static int32_t get_offset_of_shopButton_19() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___shopButton_19)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_shopButton_19() const { return ___shopButton_19; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_shopButton_19() { return &___shopButton_19; }
	inline void set_shopButton_19(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___shopButton_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shopButton_19), (void*)value);
	}

	inline static int32_t get_offset_of_buttonList_20() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___buttonList_20)); }
	inline List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * get_buttonList_20() const { return ___buttonList_20; }
	inline List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E ** get_address_of_buttonList_20() { return &___buttonList_20; }
	inline void set_buttonList_20(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * value)
	{
		___buttonList_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonList_20), (void*)value);
	}

	inline static int32_t get_offset_of_walkingCat_21() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___walkingCat_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_walkingCat_21() const { return ___walkingCat_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_walkingCat_21() { return &___walkingCat_21; }
	inline void set_walkingCat_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___walkingCat_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___walkingCat_21), (void*)value);
	}

	inline static int32_t get_offset_of_nameField_22() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___nameField_22)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_nameField_22() const { return ___nameField_22; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_nameField_22() { return &___nameField_22; }
	inline void set_nameField_22(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___nameField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameField_22), (void*)value);
	}

	inline static int32_t get_offset_of_typeField_23() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___typeField_23)); }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * get_typeField_23() const { return ___typeField_23; }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 ** get_address_of_typeField_23() { return &___typeField_23; }
	inline void set_typeField_23(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * value)
	{
		___typeField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeField_23), (void*)value);
	}

	inline static int32_t get_offset_of_nameText_24() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___nameText_24)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_nameText_24() const { return ___nameText_24; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_nameText_24() { return &___nameText_24; }
	inline void set_nameText_24(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___nameText_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameText_24), (void*)value);
	}

	inline static int32_t get_offset_of_hungryText_25() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___hungryText_25)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_hungryText_25() const { return ___hungryText_25; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_hungryText_25() { return &___hungryText_25; }
	inline void set_hungryText_25(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___hungryText_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hungryText_25), (void*)value);
	}

	inline static int32_t get_offset_of_defecationText_26() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___defecationText_26)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_defecationText_26() const { return ___defecationText_26; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_defecationText_26() { return &___defecationText_26; }
	inline void set_defecationText_26(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___defecationText_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defecationText_26), (void*)value);
	}

	inline static int32_t get_offset_of_walkText_27() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___walkText_27)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_walkText_27() const { return ___walkText_27; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_walkText_27() { return &___walkText_27; }
	inline void set_walkText_27(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___walkText_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___walkText_27), (void*)value);
	}

	inline static int32_t get_offset_of_loveText_28() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___loveText_28)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_loveText_28() const { return ___loveText_28; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_loveText_28() { return &___loveText_28; }
	inline void set_loveText_28(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___loveText_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loveText_28), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider,UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7  : public SubsystemLifecycleManager_3_t0E334FAE91D54B85E9314C55C4CDCB207ED1BCC5
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * ___m_PendingAdds_10;

public:
	inline static int32_t get_offset_of_U3CsessionOriginU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7, ___U3CsessionOriginU3Ek__BackingField_8)); }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * get_U3CsessionOriginU3Ek__BackingField_8() const { return ___U3CsessionOriginU3Ek__BackingField_8; }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 ** get_address_of_U3CsessionOriginU3Ek__BackingField_8() { return &___U3CsessionOriginU3Ek__BackingField_8; }
	inline void set_U3CsessionOriginU3Ek__BackingField_8(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * value)
	{
		___U3CsessionOriginU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsessionOriginU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Trackables_9() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7, ___m_Trackables_9)); }
	inline Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * get_m_Trackables_9() const { return ___m_Trackables_9; }
	inline Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 ** get_address_of_m_Trackables_9() { return &___m_Trackables_9; }
	inline void set_m_Trackables_9(Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * value)
	{
		___m_Trackables_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_PendingAdds_10() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7, ___m_PendingAdds_10)); }
	inline Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * get_m_PendingAdds_10() const { return ___m_PendingAdds_10; }
	inline Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 ** get_address_of_m_PendingAdds_10() { return &___m_PendingAdds_10; }
	inline void set_m_PendingAdds_10(Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * value)
	{
		___m_PendingAdds_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PendingAdds_10), (void*)value);
	}
};

struct ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7_StaticFields
{
public:
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7 * ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * ___s_Removed_13;

public:
	inline static int32_t get_offset_of_U3CinstanceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7_StaticFields, ___U3CinstanceU3Ek__BackingField_7)); }
	inline ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7 * get_U3CinstanceU3Ek__BackingField_7() const { return ___U3CinstanceU3Ek__BackingField_7; }
	inline ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7 ** get_address_of_U3CinstanceU3Ek__BackingField_7() { return &___U3CinstanceU3Ek__BackingField_7; }
	inline void set_U3CinstanceU3Ek__BackingField_7(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7 * value)
	{
		___U3CinstanceU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinstanceU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_Added_11() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7_StaticFields, ___s_Added_11)); }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * get_s_Added_11() const { return ___s_Added_11; }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 ** get_address_of_s_Added_11() { return &___s_Added_11; }
	inline void set_s_Added_11(List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * value)
	{
		___s_Added_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Added_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_Updated_12() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7_StaticFields, ___s_Updated_12)); }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * get_s_Updated_12() const { return ___s_Updated_12; }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 ** get_address_of_s_Updated_12() { return &___s_Updated_12; }
	inline void set_s_Updated_12(List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * value)
	{
		___s_Updated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Updated_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_Removed_13() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7_StaticFields, ___s_Removed_13)); }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * get_s_Removed_13() const { return ___s_Removed_13; }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 ** get_address_of_s_Removed_13() { return &___s_Removed_13; }
	inline void set_s_Removed_13(List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * value)
	{
		___s_Removed_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Removed_13), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARFoundation.ARRaycast>
struct ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045  : public SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * ___m_PendingAdds_10;

public:
	inline static int32_t get_offset_of_U3CsessionOriginU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045, ___U3CsessionOriginU3Ek__BackingField_8)); }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * get_U3CsessionOriginU3Ek__BackingField_8() const { return ___U3CsessionOriginU3Ek__BackingField_8; }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 ** get_address_of_U3CsessionOriginU3Ek__BackingField_8() { return &___U3CsessionOriginU3Ek__BackingField_8; }
	inline void set_U3CsessionOriginU3Ek__BackingField_8(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * value)
	{
		___U3CsessionOriginU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsessionOriginU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Trackables_9() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045, ___m_Trackables_9)); }
	inline Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * get_m_Trackables_9() const { return ___m_Trackables_9; }
	inline Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C ** get_address_of_m_Trackables_9() { return &___m_Trackables_9; }
	inline void set_m_Trackables_9(Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * value)
	{
		___m_Trackables_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_PendingAdds_10() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045, ___m_PendingAdds_10)); }
	inline Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * get_m_PendingAdds_10() const { return ___m_PendingAdds_10; }
	inline Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C ** get_address_of_m_PendingAdds_10() { return &___m_PendingAdds_10; }
	inline void set_m_PendingAdds_10(Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * value)
	{
		___m_PendingAdds_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PendingAdds_10), (void*)value);
	}
};

struct ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields
{
public:
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045 * ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * ___s_Removed_13;

public:
	inline static int32_t get_offset_of_U3CinstanceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields, ___U3CinstanceU3Ek__BackingField_7)); }
	inline ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045 * get_U3CinstanceU3Ek__BackingField_7() const { return ___U3CinstanceU3Ek__BackingField_7; }
	inline ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045 ** get_address_of_U3CinstanceU3Ek__BackingField_7() { return &___U3CinstanceU3Ek__BackingField_7; }
	inline void set_U3CinstanceU3Ek__BackingField_7(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045 * value)
	{
		___U3CinstanceU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinstanceU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_Added_11() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields, ___s_Added_11)); }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * get_s_Added_11() const { return ___s_Added_11; }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 ** get_address_of_s_Added_11() { return &___s_Added_11; }
	inline void set_s_Added_11(List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * value)
	{
		___s_Added_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Added_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_Updated_12() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields, ___s_Updated_12)); }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * get_s_Updated_12() const { return ___s_Updated_12; }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 ** get_address_of_s_Updated_12() { return &___s_Updated_12; }
	inline void set_s_Updated_12(List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * value)
	{
		___s_Updated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Updated_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_Removed_13() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields, ___s_Removed_13)); }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * get_s_Removed_13() const { return ___s_Removed_13; }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 ** get_address_of_s_Removed_13() { return &___s_Removed_13; }
	inline void set_s_Removed_13(List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * value)
	{
		___s_Removed_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Removed_13), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
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


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARPlaneManager
struct ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4  : public ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7
{
public:
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARPlaneManager::m_PlanePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PlanePrefab_14;
	// UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARFoundation.ARPlaneManager::m_DetectionMode
	int32_t ___m_DetectionMode_15;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlaneManager::planesChanged
	Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25 * ___planesChanged_16;

public:
	inline static int32_t get_offset_of_m_PlanePrefab_14() { return static_cast<int32_t>(offsetof(ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4, ___m_PlanePrefab_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PlanePrefab_14() const { return ___m_PlanePrefab_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PlanePrefab_14() { return &___m_PlanePrefab_14; }
	inline void set_m_PlanePrefab_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PlanePrefab_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PlanePrefab_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_DetectionMode_15() { return static_cast<int32_t>(offsetof(ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4, ___m_DetectionMode_15)); }
	inline int32_t get_m_DetectionMode_15() const { return ___m_DetectionMode_15; }
	inline int32_t* get_address_of_m_DetectionMode_15() { return &___m_DetectionMode_15; }
	inline void set_m_DetectionMode_15(int32_t value)
	{
		___m_DetectionMode_15 = value;
	}

	inline static int32_t get_offset_of_planesChanged_16() { return static_cast<int32_t>(offsetof(ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4, ___planesChanged_16)); }
	inline Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25 * get_planesChanged_16() const { return ___planesChanged_16; }
	inline Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25 ** get_address_of_planesChanged_16() { return &___planesChanged_16; }
	inline void set_planesChanged_16(Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25 * value)
	{
		___planesChanged_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___planesChanged_16), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F  : public ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045
{
public:
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_RaycastPrefab_14;
	// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastViewportDelegate
	Func_4_t0D7774CBEE7827744440205CF327276346298BD3 * ___m_RaycastViewportDelegate_17;
	// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastRayDelegate
	Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197 * ___m_RaycastRayDelegate_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster> UnityEngine.XR.ARFoundation.ARRaycastManager::m_Raycasters
	List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27 * ___m_Raycasters_19;

public:
	inline static int32_t get_offset_of_m_RaycastPrefab_14() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F, ___m_RaycastPrefab_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_RaycastPrefab_14() const { return ___m_RaycastPrefab_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_RaycastPrefab_14() { return &___m_RaycastPrefab_14; }
	inline void set_m_RaycastPrefab_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_RaycastPrefab_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastPrefab_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_RaycastViewportDelegate_17() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F, ___m_RaycastViewportDelegate_17)); }
	inline Func_4_t0D7774CBEE7827744440205CF327276346298BD3 * get_m_RaycastViewportDelegate_17() const { return ___m_RaycastViewportDelegate_17; }
	inline Func_4_t0D7774CBEE7827744440205CF327276346298BD3 ** get_address_of_m_RaycastViewportDelegate_17() { return &___m_RaycastViewportDelegate_17; }
	inline void set_m_RaycastViewportDelegate_17(Func_4_t0D7774CBEE7827744440205CF327276346298BD3 * value)
	{
		___m_RaycastViewportDelegate_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastViewportDelegate_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_RaycastRayDelegate_18() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F, ___m_RaycastRayDelegate_18)); }
	inline Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197 * get_m_RaycastRayDelegate_18() const { return ___m_RaycastRayDelegate_18; }
	inline Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197 ** get_address_of_m_RaycastRayDelegate_18() { return &___m_RaycastRayDelegate_18; }
	inline void set_m_RaycastRayDelegate_18(Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197 * value)
	{
		___m_RaycastRayDelegate_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastRayDelegate_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_Raycasters_19() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F, ___m_Raycasters_19)); }
	inline List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27 * get_m_Raycasters_19() const { return ___m_Raycasters_19; }
	inline List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27 ** get_address_of_m_Raycasters_19() { return &___m_Raycasters_19; }
	inline void set_m_Raycasters_19(List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27 * value)
	{
		___m_Raycasters_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Raycasters_19), (void*)value);
	}
};

struct ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_StaticFields
{
public:
	// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.ARFoundation.ARRaycastManager::s_RaycastHitComparer
	Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE * ___s_RaycastHitComparer_15;
	// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::s_NativeRaycastHits
	List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469 * ___s_NativeRaycastHits_16;

public:
	inline static int32_t get_offset_of_s_RaycastHitComparer_15() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_StaticFields, ___s_RaycastHitComparer_15)); }
	inline Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE * get_s_RaycastHitComparer_15() const { return ___s_RaycastHitComparer_15; }
	inline Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE ** get_address_of_s_RaycastHitComparer_15() { return &___s_RaycastHitComparer_15; }
	inline void set_s_RaycastHitComparer_15(Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE * value)
	{
		___s_RaycastHitComparer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastHitComparer_15), (void*)value);
	}

	inline static int32_t get_offset_of_s_NativeRaycastHits_16() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_StaticFields, ___s_NativeRaycastHits_16)); }
	inline List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469 * get_s_NativeRaycastHits_16() const { return ___s_NativeRaycastHits_16; }
	inline List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469 ** get_address_of_s_NativeRaycastHits_16() { return &___s_NativeRaycastHits_16; }
	inline void set_s_NativeRaycastHits_16(List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469 * value)
	{
		___s_NativeRaycastHits_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_NativeRaycastHits_16), (void*)value);
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.Dropdown
struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;

public:
	inline static int32_t get_offset_of_m_Template_20() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Template_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_Template_20() const { return ___m_Template_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_Template_20() { return &___m_Template_20; }
	inline void set_m_Template_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_Template_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Template_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaptionText_21() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_CaptionText_21)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_CaptionText_21() const { return ___m_CaptionText_21; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_CaptionText_21() { return &___m_CaptionText_21; }
	inline void set_m_CaptionText_21(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_CaptionText_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CaptionText_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaptionImage_22() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_CaptionImage_22)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_CaptionImage_22() const { return ___m_CaptionImage_22; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_CaptionImage_22() { return &___m_CaptionImage_22; }
	inline void set_m_CaptionImage_22(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_CaptionImage_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CaptionImage_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemText_23() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_ItemText_23)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_ItemText_23() const { return ___m_ItemText_23; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_ItemText_23() { return &___m_ItemText_23; }
	inline void set_m_ItemText_23(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_ItemText_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemText_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemImage_24() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_ItemImage_24)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_ItemImage_24() const { return ___m_ItemImage_24; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_ItemImage_24() { return &___m_ItemImage_24; }
	inline void set_m_ItemImage_24(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_ItemImage_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemImage_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_Value_25() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Value_25)); }
	inline int32_t get_m_Value_25() const { return ___m_Value_25; }
	inline int32_t* get_address_of_m_Value_25() { return &___m_Value_25; }
	inline void set_m_Value_25(int32_t value)
	{
		___m_Value_25 = value;
	}

	inline static int32_t get_offset_of_m_Options_26() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Options_26)); }
	inline OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * get_m_Options_26() const { return ___m_Options_26; }
	inline OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 ** get_address_of_m_Options_26() { return &___m_Options_26; }
	inline void set_m_Options_26(OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * value)
	{
		___m_Options_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Options_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_OnValueChanged_27)); }
	inline DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlphaFadeSpeed_28() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_AlphaFadeSpeed_28)); }
	inline float get_m_AlphaFadeSpeed_28() const { return ___m_AlphaFadeSpeed_28; }
	inline float* get_address_of_m_AlphaFadeSpeed_28() { return &___m_AlphaFadeSpeed_28; }
	inline void set_m_AlphaFadeSpeed_28(float value)
	{
		___m_AlphaFadeSpeed_28 = value;
	}

	inline static int32_t get_offset_of_m_Dropdown_29() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Dropdown_29)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Dropdown_29() const { return ___m_Dropdown_29; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Dropdown_29() { return &___m_Dropdown_29; }
	inline void set_m_Dropdown_29(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Dropdown_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dropdown_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Blocker_30() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Blocker_30)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Blocker_30() const { return ___m_Blocker_30; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Blocker_30() { return &___m_Blocker_30; }
	inline void set_m_Blocker_30(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Blocker_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Blocker_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_Items_31() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Items_31)); }
	inline List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * get_m_Items_31() const { return ___m_Items_31; }
	inline List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 ** get_address_of_m_Items_31() { return &___m_Items_31; }
	inline void set_m_Items_31(List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * value)
	{
		___m_Items_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Items_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlphaTweenRunner_32() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_AlphaTweenRunner_32)); }
	inline TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * get_m_AlphaTweenRunner_32() const { return ___m_AlphaTweenRunner_32; }
	inline TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D ** get_address_of_m_AlphaTweenRunner_32() { return &___m_AlphaTweenRunner_32; }
	inline void set_m_AlphaTweenRunner_32(TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * value)
	{
		___m_AlphaTweenRunner_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AlphaTweenRunner_32), (void*)value);
	}

	inline static int32_t get_offset_of_validTemplate_33() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___validTemplate_33)); }
	inline bool get_validTemplate_33() const { return ___validTemplate_33; }
	inline bool* get_address_of_validTemplate_33() { return &___validTemplate_33; }
	inline void set_validTemplate_33(bool value)
	{
		___validTemplate_33 = value;
	}
};

struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_StaticFields
{
public:
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * ___s_NoOptionData_35;

public:
	inline static int32_t get_offset_of_s_NoOptionData_35() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_StaticFields, ___s_NoOptionData_35)); }
	inline OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * get_s_NoOptionData_35() const { return ___s_NoOptionData_35; }
	inline OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 ** get_address_of_s_NoOptionData_35() { return &___s_NoOptionData_35; }
	inline void set_s_NoOptionData_35(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * value)
	{
		___s_NoOptionData_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_NoOptionData_35), (void*)value);
	}
};


// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_TextComponent_22;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_Placeholder_23;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_24;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_25;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_26;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_27;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_28;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_29;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_30;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_31;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnEndEdit
	SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * ___m_OnEndEdit_32;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * ___m_OnValueChanged_33;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * ___m_OnValidateInput_34;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_CaretColor_35;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_36;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectionColor_37;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_38;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_39;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_40;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_41;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_43;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_44;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___caretRectTrans_45;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_CursorVerts_46;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_InputTextCache_47;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CachedInputRenderer_48;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_49;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_Mesh_50;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_51;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_52;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_53;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_54;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_57;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_BlinkCoroutine_58;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_59;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_60;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_61;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_DragCoroutine_62;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_63;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_64;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_65;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * ___m_WaitForSecondsRealtime_66;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_67;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___m_ProcessingEvent_69;

public:
	inline static int32_t get_offset_of_m_Keyboard_20() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Keyboard_20)); }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * get_m_Keyboard_20() const { return ___m_Keyboard_20; }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E ** get_address_of_m_Keyboard_20() { return &___m_Keyboard_20; }
	inline void set_m_Keyboard_20(TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * value)
	{
		___m_Keyboard_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Keyboard_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponent_22() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TextComponent_22)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_TextComponent_22() const { return ___m_TextComponent_22; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_TextComponent_22() { return &___m_TextComponent_22; }
	inline void set_m_TextComponent_22(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_TextComponent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_Placeholder_23() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Placeholder_23)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_Placeholder_23() const { return ___m_Placeholder_23; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_Placeholder_23() { return &___m_Placeholder_23; }
	inline void set_m_Placeholder_23(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_Placeholder_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Placeholder_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentType_24() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ContentType_24)); }
	inline int32_t get_m_ContentType_24() const { return ___m_ContentType_24; }
	inline int32_t* get_address_of_m_ContentType_24() { return &___m_ContentType_24; }
	inline void set_m_ContentType_24(int32_t value)
	{
		___m_ContentType_24 = value;
	}

	inline static int32_t get_offset_of_m_InputType_25() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputType_25)); }
	inline int32_t get_m_InputType_25() const { return ___m_InputType_25; }
	inline int32_t* get_address_of_m_InputType_25() { return &___m_InputType_25; }
	inline void set_m_InputType_25(int32_t value)
	{
		___m_InputType_25 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_26() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AsteriskChar_26)); }
	inline Il2CppChar get_m_AsteriskChar_26() const { return ___m_AsteriskChar_26; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_26() { return &___m_AsteriskChar_26; }
	inline void set_m_AsteriskChar_26(Il2CppChar value)
	{
		___m_AsteriskChar_26 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_27() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_KeyboardType_27)); }
	inline int32_t get_m_KeyboardType_27() const { return ___m_KeyboardType_27; }
	inline int32_t* get_address_of_m_KeyboardType_27() { return &___m_KeyboardType_27; }
	inline void set_m_KeyboardType_27(int32_t value)
	{
		___m_KeyboardType_27 = value;
	}

	inline static int32_t get_offset_of_m_LineType_28() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_LineType_28)); }
	inline int32_t get_m_LineType_28() const { return ___m_LineType_28; }
	inline int32_t* get_address_of_m_LineType_28() { return &___m_LineType_28; }
	inline void set_m_LineType_28(int32_t value)
	{
		___m_LineType_28 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_29() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HideMobileInput_29)); }
	inline bool get_m_HideMobileInput_29() const { return ___m_HideMobileInput_29; }
	inline bool* get_address_of_m_HideMobileInput_29() { return &___m_HideMobileInput_29; }
	inline void set_m_HideMobileInput_29(bool value)
	{
		___m_HideMobileInput_29 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_30() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterValidation_30)); }
	inline int32_t get_m_CharacterValidation_30() const { return ___m_CharacterValidation_30; }
	inline int32_t* get_address_of_m_CharacterValidation_30() { return &___m_CharacterValidation_30; }
	inline void set_m_CharacterValidation_30(int32_t value)
	{
		___m_CharacterValidation_30 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_31() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterLimit_31)); }
	inline int32_t get_m_CharacterLimit_31() const { return ___m_CharacterLimit_31; }
	inline int32_t* get_address_of_m_CharacterLimit_31() { return &___m_CharacterLimit_31; }
	inline void set_m_CharacterLimit_31(int32_t value)
	{
		___m_CharacterLimit_31 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_32() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnEndEdit_32)); }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * get_m_OnEndEdit_32() const { return ___m_OnEndEdit_32; }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 ** get_address_of_m_OnEndEdit_32() { return &___m_OnEndEdit_32; }
	inline void set_m_OnEndEdit_32(SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * value)
	{
		___m_OnEndEdit_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndEdit_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_33() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValueChanged_33)); }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * get_m_OnValueChanged_33() const { return ___m_OnValueChanged_33; }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 ** get_address_of_m_OnValueChanged_33() { return &___m_OnValueChanged_33; }
	inline void set_m_OnValueChanged_33(OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * value)
	{
		___m_OnValueChanged_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_34() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValidateInput_34)); }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * get_m_OnValidateInput_34() const { return ___m_OnValidateInput_34; }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F ** get_address_of_m_OnValidateInput_34() { return &___m_OnValidateInput_34; }
	inline void set_m_OnValidateInput_34(OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * value)
	{
		___m_OnValidateInput_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValidateInput_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretColor_35() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretColor_35)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_CaretColor_35() const { return ___m_CaretColor_35; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_CaretColor_35() { return &___m_CaretColor_35; }
	inline void set_m_CaretColor_35(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_CaretColor_35 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_36() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CustomCaretColor_36)); }
	inline bool get_m_CustomCaretColor_36() const { return ___m_CustomCaretColor_36; }
	inline bool* get_address_of_m_CustomCaretColor_36() { return &___m_CustomCaretColor_36; }
	inline void set_m_CustomCaretColor_36(bool value)
	{
		___m_CustomCaretColor_36 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_37() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_SelectionColor_37)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectionColor_37() const { return ___m_SelectionColor_37; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectionColor_37() { return &___m_SelectionColor_37; }
	inline void set_m_SelectionColor_37(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectionColor_37 = value;
	}

	inline static int32_t get_offset_of_m_Text_38() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Text_38)); }
	inline String_t* get_m_Text_38() const { return ___m_Text_38; }
	inline String_t** get_address_of_m_Text_38() { return &___m_Text_38; }
	inline void set_m_Text_38(String_t* value)
	{
		___m_Text_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_39() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretBlinkRate_39)); }
	inline float get_m_CaretBlinkRate_39() const { return ___m_CaretBlinkRate_39; }
	inline float* get_address_of_m_CaretBlinkRate_39() { return &___m_CaretBlinkRate_39; }
	inline void set_m_CaretBlinkRate_39(float value)
	{
		___m_CaretBlinkRate_39 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_40() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretWidth_40)); }
	inline int32_t get_m_CaretWidth_40() const { return ___m_CaretWidth_40; }
	inline int32_t* get_address_of_m_CaretWidth_40() { return &___m_CaretWidth_40; }
	inline void set_m_CaretWidth_40(int32_t value)
	{
		___m_CaretWidth_40 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_41() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ReadOnly_41)); }
	inline bool get_m_ReadOnly_41() const { return ___m_ReadOnly_41; }
	inline bool* get_address_of_m_ReadOnly_41() { return &___m_ReadOnly_41; }
	inline void set_m_ReadOnly_41(bool value)
	{
		___m_ReadOnly_41 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateOnSelect_42() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateOnSelect_42)); }
	inline bool get_m_ShouldActivateOnSelect_42() const { return ___m_ShouldActivateOnSelect_42; }
	inline bool* get_address_of_m_ShouldActivateOnSelect_42() { return &___m_ShouldActivateOnSelect_42; }
	inline void set_m_ShouldActivateOnSelect_42(bool value)
	{
		___m_ShouldActivateOnSelect_42 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_43() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretPosition_43)); }
	inline int32_t get_m_CaretPosition_43() const { return ___m_CaretPosition_43; }
	inline int32_t* get_address_of_m_CaretPosition_43() { return &___m_CaretPosition_43; }
	inline void set_m_CaretPosition_43(int32_t value)
	{
		___m_CaretPosition_43 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_44() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretSelectPosition_44)); }
	inline int32_t get_m_CaretSelectPosition_44() const { return ___m_CaretSelectPosition_44; }
	inline int32_t* get_address_of_m_CaretSelectPosition_44() { return &___m_CaretSelectPosition_44; }
	inline void set_m_CaretSelectPosition_44(int32_t value)
	{
		___m_CaretSelectPosition_44 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_45() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___caretRectTrans_45)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_caretRectTrans_45() const { return ___caretRectTrans_45; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_caretRectTrans_45() { return &___caretRectTrans_45; }
	inline void set_caretRectTrans_45(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___caretRectTrans_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caretRectTrans_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_46() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CursorVerts_46)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_CursorVerts_46() const { return ___m_CursorVerts_46; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_CursorVerts_46() { return &___m_CursorVerts_46; }
	inline void set_m_CursorVerts_46(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_CursorVerts_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CursorVerts_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_47() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputTextCache_47)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_InputTextCache_47() const { return ___m_InputTextCache_47; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_InputTextCache_47() { return &___m_InputTextCache_47; }
	inline void set_m_InputTextCache_47(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_InputTextCache_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputTextCache_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_48() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CachedInputRenderer_48)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CachedInputRenderer_48() const { return ___m_CachedInputRenderer_48; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CachedInputRenderer_48() { return &___m_CachedInputRenderer_48; }
	inline void set_m_CachedInputRenderer_48(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CachedInputRenderer_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedInputRenderer_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_49() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_PreventFontCallback_49)); }
	inline bool get_m_PreventFontCallback_49() const { return ___m_PreventFontCallback_49; }
	inline bool* get_address_of_m_PreventFontCallback_49() { return &___m_PreventFontCallback_49; }
	inline void set_m_PreventFontCallback_49(bool value)
	{
		___m_PreventFontCallback_49 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_50() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Mesh_50)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_Mesh_50() const { return ___m_Mesh_50; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_Mesh_50() { return &___m_Mesh_50; }
	inline void set_m_Mesh_50(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_Mesh_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllowInput_51() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AllowInput_51)); }
	inline bool get_m_AllowInput_51() const { return ___m_AllowInput_51; }
	inline bool* get_address_of_m_AllowInput_51() { return &___m_AllowInput_51; }
	inline void set_m_AllowInput_51(bool value)
	{
		___m_AllowInput_51 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_52() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateNextUpdate_52)); }
	inline bool get_m_ShouldActivateNextUpdate_52() const { return ___m_ShouldActivateNextUpdate_52; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_52() { return &___m_ShouldActivateNextUpdate_52; }
	inline void set_m_ShouldActivateNextUpdate_52(bool value)
	{
		___m_ShouldActivateNextUpdate_52 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_53() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_UpdateDrag_53)); }
	inline bool get_m_UpdateDrag_53() const { return ___m_UpdateDrag_53; }
	inline bool* get_address_of_m_UpdateDrag_53() { return &___m_UpdateDrag_53; }
	inline void set_m_UpdateDrag_53(bool value)
	{
		___m_UpdateDrag_53 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_54() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragPositionOutOfBounds_54)); }
	inline bool get_m_DragPositionOutOfBounds_54() const { return ___m_DragPositionOutOfBounds_54; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_54() { return &___m_DragPositionOutOfBounds_54; }
	inline void set_m_DragPositionOutOfBounds_54(bool value)
	{
		___m_DragPositionOutOfBounds_54 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_57() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretVisible_57)); }
	inline bool get_m_CaretVisible_57() const { return ___m_CaretVisible_57; }
	inline bool* get_address_of_m_CaretVisible_57() { return &___m_CaretVisible_57; }
	inline void set_m_CaretVisible_57(bool value)
	{
		___m_CaretVisible_57 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_58() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkCoroutine_58)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_BlinkCoroutine_58() const { return ___m_BlinkCoroutine_58; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_BlinkCoroutine_58() { return &___m_BlinkCoroutine_58; }
	inline void set_m_BlinkCoroutine_58(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_BlinkCoroutine_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlinkCoroutine_58), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_59() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkStartTime_59)); }
	inline float get_m_BlinkStartTime_59() const { return ___m_BlinkStartTime_59; }
	inline float* get_address_of_m_BlinkStartTime_59() { return &___m_BlinkStartTime_59; }
	inline void set_m_BlinkStartTime_59(float value)
	{
		___m_BlinkStartTime_59 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_60() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawStart_60)); }
	inline int32_t get_m_DrawStart_60() const { return ___m_DrawStart_60; }
	inline int32_t* get_address_of_m_DrawStart_60() { return &___m_DrawStart_60; }
	inline void set_m_DrawStart_60(int32_t value)
	{
		___m_DrawStart_60 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_61() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawEnd_61)); }
	inline int32_t get_m_DrawEnd_61() const { return ___m_DrawEnd_61; }
	inline int32_t* get_address_of_m_DrawEnd_61() { return &___m_DrawEnd_61; }
	inline void set_m_DrawEnd_61(int32_t value)
	{
		___m_DrawEnd_61 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_62() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragCoroutine_62)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_DragCoroutine_62() const { return ___m_DragCoroutine_62; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_DragCoroutine_62() { return &___m_DragCoroutine_62; }
	inline void set_m_DragCoroutine_62(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_DragCoroutine_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DragCoroutine_62), (void*)value);
	}

	inline static int32_t get_offset_of_m_OriginalText_63() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OriginalText_63)); }
	inline String_t* get_m_OriginalText_63() const { return ___m_OriginalText_63; }
	inline String_t** get_address_of_m_OriginalText_63() { return &___m_OriginalText_63; }
	inline void set_m_OriginalText_63(String_t* value)
	{
		___m_OriginalText_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalText_63), (void*)value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_64() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WasCanceled_64)); }
	inline bool get_m_WasCanceled_64() const { return ___m_WasCanceled_64; }
	inline bool* get_address_of_m_WasCanceled_64() { return &___m_WasCanceled_64; }
	inline void set_m_WasCanceled_64(bool value)
	{
		___m_WasCanceled_64 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_65() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HasDoneFocusTransition_65)); }
	inline bool get_m_HasDoneFocusTransition_65() const { return ___m_HasDoneFocusTransition_65; }
	inline bool* get_address_of_m_HasDoneFocusTransition_65() { return &___m_HasDoneFocusTransition_65; }
	inline void set_m_HasDoneFocusTransition_65(bool value)
	{
		___m_HasDoneFocusTransition_65 = value;
	}

	inline static int32_t get_offset_of_m_WaitForSecondsRealtime_66() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WaitForSecondsRealtime_66)); }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * get_m_WaitForSecondsRealtime_66() const { return ___m_WaitForSecondsRealtime_66; }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 ** get_address_of_m_WaitForSecondsRealtime_66() { return &___m_WaitForSecondsRealtime_66; }
	inline void set_m_WaitForSecondsRealtime_66(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * value)
	{
		___m_WaitForSecondsRealtime_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitForSecondsRealtime_66), (void*)value);
	}

	inline static int32_t get_offset_of_m_TouchKeyboardAllowsInPlaceEditing_67() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TouchKeyboardAllowsInPlaceEditing_67)); }
	inline bool get_m_TouchKeyboardAllowsInPlaceEditing_67() const { return ___m_TouchKeyboardAllowsInPlaceEditing_67; }
	inline bool* get_address_of_m_TouchKeyboardAllowsInPlaceEditing_67() { return &___m_TouchKeyboardAllowsInPlaceEditing_67; }
	inline void set_m_TouchKeyboardAllowsInPlaceEditing_67(bool value)
	{
		___m_TouchKeyboardAllowsInPlaceEditing_67 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_69() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ProcessingEvent_69)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_m_ProcessingEvent_69() const { return ___m_ProcessingEvent_69; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_m_ProcessingEvent_69() { return &___m_ProcessingEvent_69; }
	inline void set_m_ProcessingEvent_69(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___m_ProcessingEvent_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProcessingEvent_69), (void*)value);
	}
};

struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___kSeparators_21;

public:
	inline static int32_t get_offset_of_kSeparators_21() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields, ___kSeparators_21)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_kSeparators_21() const { return ___kSeparators_21; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_kSeparators_21() { return &___kSeparators_21; }
	inline void set_kSeparators_21(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___kSeparators_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kSeparators_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
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
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
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


// UnityEngine.UI.RawImage
struct RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_36;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_UVRect_37;

public:
	inline static int32_t get_offset_of_m_Texture_36() { return static_cast<int32_t>(offsetof(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A, ___m_Texture_36)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_m_Texture_36() const { return ___m_Texture_36; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_m_Texture_36() { return &___m_Texture_36; }
	inline void set_m_Texture_36(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___m_Texture_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_UVRect_37() { return static_cast<int32_t>(offsetof(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A, ___m_UVRect_37)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_UVRect_37() const { return ___m_UVRect_37; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_UVRect_37() { return &___m_UVRect_37; }
	inline void set_m_UVRect_37(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_UVRect_37 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
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
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  m_Items[1];

public:
	inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CtrackableU3Ek__BackingField_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Transform_3), (void*)NULL);
		#endif
	}
	inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CtrackableU3Ek__BackingField_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Transform_3), (void*)NULL);
		#endif
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m01533F209934FB7AA229CAF420A923C1C4F4FBC4_gshared (Action_1_t5DF84322FFE12A24465E48164961CD724D109521 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mDBBF3E36A716B95B683306173920925E405BB8A0_gshared (Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_gshared_inline (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_gshared (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986 (String_t* ___key0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void DesireFeed::changeHunger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesireFeed_changeHunger_mECD4AF5F66FA71AE1F959B0394235064F922391E (DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator DesireFeed::SpawnLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DesireFeed_SpawnLoop_m990EE206EFE0FB63976E680F14B79987AC8EEED4 (DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void DesireFeed/<SpawnLoop>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnLoopU3Ed__21__ctor_m91E2AA1307CCACDFF80F507D1BC6286BF9E880F5 (U3CSpawnLoopU3Ed__21_t8666E830ACB28FF5789823EF6C30AF3C7F4C9195 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void DesireFeed::Moved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesireFeed_Moved_m40F89380397B8A15C046871BDC111DE04A72C63D (DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void DesirePoop::EndGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesirePoop_EndGame_m42590821B30438479DBB5FDD494879063F7CE3DF (DesirePoop_t2305AD9CC25F355951C1C8E0AE6553E1A995F79F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void DesireFeed::SubCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesireFeed_SubCount_mC02264396BD2A4A10472B9825C89B0DE2C65632E (DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * __this, const RuntimeMethod* method);
// System.Void GoogleMapApi/<Map>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMapU3Ed__22__ctor_m7A719ECC67A2D13AE92B61D397AACC243298551A (U3CMapU3Ed__22_t776434FFDEFA59932DC8A0D4004D798E02C396BB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator GoogleMapApi::Map()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GoogleMapApi_Map_m79927E2A2CA9EDBC25C79BDE2EF8B600CC7AF257 (GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5 * __this, const RuntimeMethod* method);
// UnityEngine.LocationService UnityEngine.Input::get_location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * Input_get_location_m5D0AE1016E410D3D7411904D0706456DE383F4E5 (const RuntimeMethod* method);
// System.Void UnityEngine.LocationService::Start(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationService_Start_m590DB6B761913E7D6A1FCD58CEF93747E43C1E2F (LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * __this, float ___desiredAccuracyInMeters0, const RuntimeMethod* method);
// System.Boolean UnityEngine.LocationService::get_isEnabledByUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationService_get_isEnabledByUser_mD26BB9D35EC9DE4B38F7771B5E910B14EFC2B00A (LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * __this, const RuntimeMethod* method);
// UnityEngine.LocationServiceStatus UnityEngine.LocationService::get_status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocationService_get_status_m1E90C9991825BDF5A3AC066D97F9198568055C54 (LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method);
// UnityEngine.LocationInfo UnityEngine.LocationService::get_lastData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769  LocationService_get_lastData_mD6EAC681E09427969B18EEC9B85DA43633EFEA1F (LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.LocationInfo::get_latitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_latitude_m09F2DFBDB716C46B0ECFD11F6A5DB2B93B06174B (LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.LocationInfo::get_longitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_longitude_mD0F77FFCF02AFB63058C77A4EBAE228528F57A50 (LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D (double* __this, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m3AB89AE7770E06BDB33BF39104BE5C57DF90616B (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m6CFEADAA0266A99176A33B47129392DF954962B4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator PalmPetMove::Move(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PalmPetMove_Move_m0CC292E6944F0A6E51EEA94B9225210B4CCDA87C (PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vec0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method);
// System.Void PalmPetMove/<Move>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveU3Ed__1__ctor_m6FCFEC1F1BB280A3F9CB60C03D7915CD774EF0A1 (U3CMoveU3Ed__1_tCC40295A9D20D22457CFDA19D2690EA9908D7203 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Assets.Scipts.Pet::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pet_set_Name_m0060E5E02AB4A98D04AE581A485401ABBDA2D6C4_inline (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC (const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14 (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method);
// System.Void Assets.Scipts.Pet::set_Type(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pet_set_Type_mE22E558AA4C2DFE71D63802344807EA171BED087_inline (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Assets.Scipts.Pet::set_Hungry(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pet_set_Hungry_mA99F39215A0CAF1CF114DDD410A4E8951EDBDCF8_inline (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Assets.Scipts.Pet::set_Defecation(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pet_set_Defecation_m7FE4AF801669BC1D971D595AFFA864B43226913D_inline (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Assets.Scipts.Pet::set_Walk(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pet_set_Walk_m1C688449B596AED93831FD6DA818C07DD0931592_inline (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Assets.Scipts.Pet::set_Love(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pet_set_Love_m38B32408A6A2658BDC1BD9F4371CCA13F3B25530_inline (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m01533F209934FB7AA229CAF420A923C1C4F4FBC4 (Action_1_t5DF84322FFE12A24465E48164961CD724D109521 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t5DF84322FFE12A24465E48164961CD724D109521 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m01533F209934FB7AA229CAF420A923C1C4F4FBC4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARSession::add_stateChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSession_add_stateChanged_m0B11F34533799F3DB6B188D44AB356574954D3DF (Action_1_t5DF84322FFE12A24465E48164961CD724D109521 * ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mDBBF3E36A716B95B683306173920925E405BB8A0 (Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mDBBF3E36A716B95B683306173920925E405BB8A0_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARPlaneManager::add_planesChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlaneManager_add_planesChanged_m785106C77BC4F503A9AB904E9BEF3EDCCF49FD27 (ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * __this, Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25 * ___value0, const RuntimeMethod* method);
// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs::get_state()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSessionStateChangedEventArgs_get_state_mDFCCADECEFE9356E4246B9BF912157F3EDD88796_inline (ARSessionStateChangedEventArgs_tF14FF2D76D721B74F80297911644222B2DF3FC06 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPlane> UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs::get_added()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * ARPlanesChangedEventArgs_get_added_mD0CA0FB88C9F669580ED4BE0C9A3DA6E1333DA07_inline (ARPlanesChangedEventArgs_tBF7407003D3B2F49087DBED7DEEBD8803466E6CF * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPlane>::get_Count()
inline int32_t List_1_get_Count_m123CF741EFB3898DD599C283DC5D3F8BE586D385_inline (List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6 (const RuntimeMethod* method);
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F (int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARFoundation.ARRaycastManager::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRaycastManager_Raycast_mCC2851DAC2542C59528FCE21242231DFAF024650 (ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPoint0, List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * ___hitResults1, int32_t ___trackableTypes2, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_inline (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  (*) (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D *, int32_t, const RuntimeMethod*))List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ARRaycastHit_get_pose_mB4D8BC45F23D9F2C2C8DCAFA88DB1221D76EF02B (ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// !!0 UnityEngine.GameObject::AddComponent<PalmPetMove>()
inline PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D * GameObject_AddComponent_TisPalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D_mB799CE99F3EF849A8EBF90F9220CE85D1834DA67 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulers0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<PalmPetMove>()
inline PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D * GameObject_GetComponent_TisPalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D_mFE8D6157DD8FECF9B40E6F83FC33B95326638154 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void PalmPetMove::StartMove(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PalmPetMove_StartMove_m6C1C9FBE7A9070A55889803CFB96ED306A4661FC (PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vec0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201 (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D *, const RuntimeMethod*))List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Button>::Add(!0)
inline void List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93 (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * __this, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E *, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92 (String_t* ___key0, const RuntimeMethod* method);
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159 (String_t* ___key0, const RuntimeMethod* method);
// System.Void Assets.Scipts.Pet::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pet__ctor_m80DF46234FDF532462CC49E453A00E165CCED5A2 (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UIManager::SetPetState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_SetPetState_mD738EE844A9D5EE2934DC70666E227DD53FEF39C (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UIManager::ActivePanel(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ActivePanel_m99EC35F073E164ADF7D18C34F9FB727A77D6FD48 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___panel0, const RuntimeMethod* method);
// System.Void UIManager::DisableAllPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_DisableAllPanel_m9084C99AA7467890C810EAD397D27527004FBB3B (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Contains(!0)
inline bool List_1_Contains_mE508A129A7CB4DC89530674E7854B7F699BB486F (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Void UIManager::ButtonDistable(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ButtonDistable_m240951D730ED385D8BE135229321FE775C6824B5 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___button0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.UI.Button>::GetEnumerator()
inline Enumerator_t6D0827411121305C0C750B338E1BFB757246E871  List_1_GetEnumerator_mBBC2C0EA0F269A56465D057A5C6467489C251CBC (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6D0827411121305C0C750B338E1BFB757246E871  (*) (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Button>::get_Current()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * Enumerator_get_Current_m01B1280C927D8D132CE202C3E9F206F467D0346C_inline (Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40 (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Button>::MoveNext()
inline bool Enumerator_MoveNext_m7206FD3121D8BEA7DFCAD913FDAF3CA0F6821691 (Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Button>::Dispose()
inline void Enumerator_Dispose_mD9C961426EFA6BBBFDCA42D46BCEA62283586500 (Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void UIManager::EnableAllButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_EnableAllButton_m158A0A9EF240A93E3CE2CFB5F64A63ABF125D495 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.String Assets.Scipts.Pet::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Pet_get_Name_m6CE1E76076DD5392A118FE224FDF8A358F923734_inline (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, const RuntimeMethod* method);
// System.Int32 Assets.Scipts.Pet::get_Hungry()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Pet_get_Hungry_mB42149A5E6BF8119585321E83301EB74956AFAD2_inline (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, const RuntimeMethod* method);
// System.Int32 Assets.Scipts.Pet::get_Defecation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Pet_get_Defecation_m42CC90F703D02177FD4A0165C853078C77A645B7_inline (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, const RuntimeMethod* method);
// System.Int32 Assets.Scipts.Pet::get_Walk()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Pet_get_Walk_m631AC8BBEB26EACEA0AA015C0C62818B13D8B862_inline (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, const RuntimeMethod* method);
// System.Int32 Assets.Scipts.Pet::get_Love()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Pet_get_Love_m111D071DAA925AEE549B8D40684841D35251679B_inline (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, const RuntimeMethod* method);
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.UI.Text UnityEngine.UI.Dropdown::get_itemText()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Dropdown_get_itemText_m89586E53171746D3BD16F8EBA0C5A814006435C1_inline (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Button>::.ctor()
inline void List_1__ctor_mA1744A70D10E32296ECF132BFF63A811CB50A795 (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void UnityEngine.WWW::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW__ctor_mE77AD6C372CC76F48A893C5E2F91A81193A9F8C5 (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, String_t* ___url0, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.WWW::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * WWW_get_texture_mC23FF88883698F3E6F7BED2733A2DB3B18F788E4 (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99 (RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_m996FADE2327B0A4412FF4A5179B8BABD9EB849BA (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void DesireFeed::SubCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesireFeed_SubCount_mC02264396BD2A4A10472B9825C89B0DE2C65632E (DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * __this, const RuntimeMethod* method)
{
	{
		// count--;
		int32_t L_0 = __this->get_count_14();
		__this->set_count_14(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// lifeValue.text = count.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_lifeValue_6();
		int32_t* L_2 = __this->get_address_of_count_14();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		// }
		return;
	}
}
// System.Void DesireFeed::changeHunger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesireFeed_changeHunger_mECD4AF5F66FA71AE1F959B0394235064F922391E (DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA47B4F69555BC9F2243FFF699A3ABC48BFD476A7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// hungryValue.text = PlayerPrefs.GetInt("Hungry").ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_hungryValue_8();
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralA47B4F69555BC9F2243FFF699A3ABC48BFD476A7, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void DesireFeed::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesireFeed_Awake_mD187EF858C6D0EC944B6067CFBE12823BA9C2F94 (DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rigid = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rigid_4(L_0);
		// collider = GetComponent<BoxCollider2D>();
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_1;
		L_1 = Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		__this->set_collider_5(L_1);
		// }
		return;
	}
}
// System.Void DesireFeed::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesireFeed_StartGame_mEC09E2827761C12A9DC2D51A5F2ABA9A4FDD79BF (DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * __this, const RuntimeMethod* method)
{
	{
		// count = 3;
		__this->set_count_14(3);
		// time = 30f;
		__this->set_time_15((30.0f));
		// leftMove = false;
		__this->set_leftMove_18((bool)0);
		// rightMove = false;
		__this->set_rightMove_19((bool)0);
		// gamePanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gamePanel_9();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// gameEnd = false;
		__this->set_gameEnd_20((bool)0);
		// changeHunger();
		DesireFeed_changeHunger_mECD4AF5F66FA71AE1F959B0394235064F922391E(__this, /*hidden argument*/NULL);
		// StartCoroutine(SpawnLoop());
		RuntimeObject* L_1;
		L_1 = DesireFeed_SpawnLoop_m990EE206EFE0FB63976E680F14B79987AC8EEED4(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator DesireFeed::SpawnLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DesireFeed_SpawnLoop_m990EE206EFE0FB63976E680F14B79987AC8EEED4 (DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawnLoopU3Ed__21_t8666E830ACB28FF5789823EF6C30AF3C7F4C9195_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpawnLoopU3Ed__21_t8666E830ACB28FF5789823EF6C30AF3C7F4C9195 * L_0 = (U3CSpawnLoopU3Ed__21_t8666E830ACB28FF5789823EF6C30AF3C7F4C9195 *)il2cpp_codegen_object_new(U3CSpawnLoopU3Ed__21_t8666E830ACB28FF5789823EF6C30AF3C7F4C9195_il2cpp_TypeInfo_var);
		U3CSpawnLoopU3Ed__21__ctor_m91E2AA1307CCACDFF80F507D1BC6286BF9E880F5(L_0, 0, /*hidden argument*/NULL);
		U3CSpawnLoopU3Ed__21_t8666E830ACB28FF5789823EF6C30AF3C7F4C9195 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void DesireFeed::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesireFeed_Update_m83F0356E12E2A488A4C95A6D414331AC2358EE25 (DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA47B4F69555BC9F2243FFF699A3ABC48BFD476A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timeValue.text = this.time.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_timeValue_7();
		float* L_1 = __this->get_address_of_time_15();
		String_t* L_2;
		L_2 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// this.time -= Time.deltaTime;
		float L_3 = __this->get_time_15();
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_time_15(((float)il2cpp_codegen_subtract((float)L_3, (float)L_4)));
		// if(count <= 0 || PlayerPrefs.GetInt("Hungry") == 100 || time <= 0) {
		int32_t L_5 = __this->get_count_14();
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_6;
		L_6 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralA47B4F69555BC9F2243FFF699A3ABC48BFD476A7, /*hidden argument*/NULL);
		if ((((int32_t)L_6) == ((int32_t)((int32_t)100))))
		{
			goto IL_004c;
		}
	}
	{
		float L_7 = __this->get_time_15();
		if ((!(((float)L_7) <= ((float)(0.0f)))))
		{
			goto IL_006b;
		}
	}

IL_004c:
	{
		// gamePanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_gamePanel_9();
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
		// completePanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_completePanel_10();
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)1, /*hidden argument*/NULL);
		// gameEnd = true;
		__this->set_gameEnd_20((bool)1);
	}

IL_006b:
	{
		// Moved();
		DesireFeed_Moved_m40F89380397B8A15C046871BDC111DE04A72C63D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DesireFeed::Moved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesireFeed_Moved_m40F89380397B8A15C046871BDC111DE04A72C63D (DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (leftMove)
		bool L_0 = __this->get_leftMove_18();
		if (!L_0)
		{
			goto IL_006b;
		}
	}
	{
		// if (cat.transform.localPosition.x >= -300)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_cat_16();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_2();
		if ((!(((float)L_4) >= ((float)(-300.0f)))))
		{
			goto IL_006b;
		}
	}
	{
		// Vector3 moveVelocity = new Vector3(-0.1f, 0, 0);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), (-0.100000001f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// cat.transform.position += moveVelocity * moveSpeed * Time.deltaTime;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_cat_16();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = L_6;
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		float L_10 = __this->get_moveSpeed_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, L_10, /*hidden argument*/NULL);
		float L_12;
		L_12 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_11, L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_8, L_13, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_14, /*hidden argument*/NULL);
	}

IL_006b:
	{
		// if (rightMove)
		bool L_15 = __this->get_rightMove_19();
		if (!L_15)
		{
			goto IL_00d6;
		}
	}
	{
		// if (cat.transform.localPosition.x <= 300)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_cat_16();
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_x_2();
		if ((!(((float)L_19) <= ((float)(300.0f)))))
		{
			goto IL_00d6;
		}
	}
	{
		// Vector3 moveVelocity = new Vector3(0.1f, 0, 0);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), (0.100000001f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// cat.transform.position += moveVelocity * moveSpeed * Time.deltaTime;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_cat_16();
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = L_21;
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_1;
		float L_25 = __this->get_moveSpeed_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_24, L_25, /*hidden argument*/NULL);
		float L_27;
		L_27 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_26, L_27, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_23, L_28, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_22, L_29, /*hidden argument*/NULL);
	}

IL_00d6:
	{
		// }
		return;
	}
}
// System.Void DesireFeed::LeftBtnDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesireFeed_LeftBtnDown_mC91352C319E4CDA8B5DAD62ACD088E5882D9E60E (DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * __this, const RuntimeMethod* method)
{
	{
		// public void LeftBtnDown() { leftMove = true; }
		__this->set_leftMove_18((bool)1);
		// public void LeftBtnDown() { leftMove = true; }
		return;
	}
}
// System.Void DesireFeed::LeftBtnUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesireFeed_LeftBtnUp_m648F0792AA3FF6FF58C11E6608A452F5B00FCF4A (DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * __this, const RuntimeMethod* method)
{
	{
		// public void LeftBtnUp() { leftMove = false; }
		__this->set_leftMove_18((bool)0);
		// public void LeftBtnUp() { leftMove = false; }
		return;
	}
}
// System.Void DesireFeed::RightBtnDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesireFeed_RightBtnDown_mC8FB0E6E5E65B40A479C297CFC52FC7EBA7B746C (DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * __this, const RuntimeMethod* method)
{
	{
		// public void RightBtnDown() { rightMove = true;}
		__this->set_rightMove_19((bool)1);
		// public void RightBtnDown() { rightMove = true;}
		return;
	}
}
// System.Void DesireFeed::RightBtnUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesireFeed_RightBtnUp_m710FE217E81361F25554FA57F09F3BF91055F35C (DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * __this, const RuntimeMethod* method)
{
	{
		// public void RightBtnUp() { rightMove = false;}
		__this->set_rightMove_19((bool)0);
		// public void RightBtnUp() { rightMove = false;}
		return;
	}
}
// System.Void DesireFeed::completeFeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesireFeed_completeFeed_m59A1D3C9B422A561EB11B5B14A27119362B39B7C (DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach(GameObject mObject in objectList)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_objectList_13();
		NullCheck(L_0);
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_1;
		L_1 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_0, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001a;
		}

IL_000e:
		{
			// foreach(GameObject mObject in objectList)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
			L_2 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			// Destroy(mObject);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		}

IL_001a:
		{
			// foreach(GameObject mObject in objectList)
			bool L_3;
			L_3 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_3)
			{
				goto IL_000e;
			}
		}

IL_0023:
		{
			IL2CPP_LEAVE(0x33, FINALLY_0025);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0025;
	}

FINALLY_0025:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(37)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(37)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x33, IL_0033)
	}

IL_0033:
	{
		// objectList.Clear();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_4 = __this->get_objectList_13();
		NullCheck(L_4);
		List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432(L_4, /*hidden argument*/List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var);
		// completePanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_completePanel_10();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DesireFeed::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesireFeed__ctor_m5769E6D2EC81C153C4A3B7D5C85081BA9DFC5445 (DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<GameObject> objectList = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_0, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_objectList_13(L_0);
		// int count = 3;
		__this->set_count_14(3);
		// private float time = 30f;
		__this->set_time_15((30.0f));
		// float moveSpeed = 4500f;
		__this->set_moveSpeed_17((4500.0f));
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
// System.Void DesirePoop::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesirePoop_StartGame_m19B729D3BE576928ABB75944DC48D41FCC735110 (DesirePoop_t2305AD9CC25F355951C1C8E0AE6553E1A995F79F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD642CEBDA3492962B4DB8704C15B45A6A13B548F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int value = PlayerPrefs.GetInt("Defecation");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralD642CEBDA3492962B4DB8704C15B45A6A13B548F, /*hidden argument*/NULL);
		V_0 = L_0;
		// poopValue.text = value.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_poopValue_5();
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		// if (value == 0) EndGame();
		int32_t L_3 = V_0;
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		// if (value == 0) EndGame();
		DesirePoop_EndGame_m42590821B30438479DBB5FDD494879063F7CE3DF(__this, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void DesirePoop::TouchHead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesirePoop_TouchHead_m980147B5EC82937940C31E34C424301A5559A61E (DesirePoop_t2305AD9CC25F355951C1C8E0AE6553E1A995F79F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD642CEBDA3492962B4DB8704C15B45A6A13B548F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int value = PlayerPrefs.GetInt("Defecation");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralD642CEBDA3492962B4DB8704C15B45A6A13B548F, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (value > 10)
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)10))))
		{
			goto IL_0036;
		}
	}
	{
		// PlayerPrefs.SetInt("Defecation", value - 10);
		int32_t L_2 = V_0;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralD642CEBDA3492962B4DB8704C15B45A6A13B548F, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)10))), /*hidden argument*/NULL);
		// poopValue.text = (value - 10).ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_poopValue_5();
		int32_t L_4 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)10)));
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		// }
		return;
	}

IL_0036:
	{
		// EndGame();
		DesirePoop_EndGame_m42590821B30438479DBB5FDD494879063F7CE3DF(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DesirePoop::EndGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesirePoop_EndGame_m42590821B30438479DBB5FDD494879063F7CE3DF (DesirePoop_t2305AD9CC25F355951C1C8E0AE6553E1A995F79F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD642CEBDA3492962B4DB8704C15B45A6A13B548F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Defecation", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralD642CEBDA3492962B4DB8704C15B45A6A13B548F, 0, /*hidden argument*/NULL);
		// poopValue.text = "0";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_poopValue_5();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		// complete.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_complete_4();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DesirePoop::CompleteButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesirePoop_CompleteButtonClick_m0B57851B471A7C2A0F6542DFAAB495047BF9CD36 (DesirePoop_t2305AD9CC25F355951C1C8E0AE6553E1A995F79F * __this, const RuntimeMethod* method)
{
	{
		// complete.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_complete_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DesirePoop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesirePoop__ctor_m0AAB2C70DB094E998094A05B25B57F7F48A20BC6 (DesirePoop_t2305AD9CC25F355951C1C8E0AE6553E1A995F79F * __this, const RuntimeMethod* method)
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
// System.Void FeedCollision::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeedCollision_OnCollisionEnter2D_mE44611E6DC272A87637C7CC8D84C449CB462572A (FeedCollision_tC4D88A4626F5FBF1E745321043E318F8F61F57B2 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03195B08D8BBABDF0DCC6093942A15F7E8ABB3D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA47B4F69555BC9F2243FFF699A3ABC48BFD476A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD4E79D5BF1664C1E246E08132AFC9D0DA294C60);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	String_t* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	String_t* G_B4_1 = NULL;
	{
		// if (collision.gameObject.tag == "Meat")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral03195B08D8BBABDF0DCC6093942A15F7E8ABB3D0, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0058;
		}
	}
	{
		// PlayerPrefs.SetInt("Hungry", PlayerPrefs.GetInt("Hungry") + 6 >= 100 ? 100 : PlayerPrefs.GetInt("Hungry") + 6);
		int32_t L_4;
		L_4 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralA47B4F69555BC9F2243FFF699A3ABC48BFD476A7, /*hidden argument*/NULL);
		G_B2_0 = _stringLiteralA47B4F69555BC9F2243FFF699A3ABC48BFD476A7;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)6))) >= ((int32_t)((int32_t)100))))
		{
			G_B3_0 = _stringLiteralA47B4F69555BC9F2243FFF699A3ABC48BFD476A7;
			goto IL_003a;
		}
	}
	{
		int32_t L_5;
		L_5 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralA47B4F69555BC9F2243FFF699A3ABC48BFD476A7, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)6));
		G_B4_1 = G_B2_0;
		goto IL_003c;
	}

IL_003a:
	{
		G_B4_0 = ((int32_t)100);
		G_B4_1 = G_B3_0;
	}

IL_003c:
	{
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(G_B4_1, G_B4_0, /*hidden argument*/NULL);
		// desireFeed.changeHunger();
		DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * L_6 = __this->get_desireFeed_4();
		NullCheck(L_6);
		DesireFeed_changeHunger_mECD4AF5F66FA71AE1F959B0394235064F922391E(L_6, /*hidden argument*/NULL);
		// Destroy(collision.gameObject);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_7 = ___collision0;
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_8, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0058:
	{
		// else if (collision.gameObject.tag == "Bomb")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_9 = ___collision0;
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, _stringLiteralBD4E79D5BF1664C1E246E08132AFC9D0DA294C60, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_009c;
		}
	}
	{
		// PlayerPrefs.SetInt("Hungry", PlayerPrefs.GetInt("Hungry") - 10);
		int32_t L_13;
		L_13 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralA47B4F69555BC9F2243FFF699A3ABC48BFD476A7, /*hidden argument*/NULL);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralA47B4F69555BC9F2243FFF699A3ABC48BFD476A7, ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)((int32_t)10))), /*hidden argument*/NULL);
		// desireFeed.SubCount();
		DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * L_14 = __this->get_desireFeed_4();
		NullCheck(L_14);
		DesireFeed_SubCount_mC02264396BD2A4A10472B9825C89B0DE2C65632E(L_14, /*hidden argument*/NULL);
		// Destroy(collision.gameObject);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_15 = ___collision0;
		NullCheck(L_15);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_16, /*hidden argument*/NULL);
	}

IL_009c:
	{
		// }
		return;
	}
}
// System.Void FeedCollision::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeedCollision__ctor_m9C6A8645DAE050B5F02BA35774CE52C156559B53 (FeedCollision_tC4D88A4626F5FBF1E745321043E318F8F61F57B2 * __this, const RuntimeMethod* method)
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
// System.Collections.IEnumerator GoogleMapApi::Map()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GoogleMapApi_Map_m79927E2A2CA9EDBC25C79BDE2EF8B600CC7AF257 (GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMapU3Ed__22_t776434FFDEFA59932DC8A0D4004D798E02C396BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMapU3Ed__22_t776434FFDEFA59932DC8A0D4004D798E02C396BB * L_0 = (U3CMapU3Ed__22_t776434FFDEFA59932DC8A0D4004D798E02C396BB *)il2cpp_codegen_object_new(U3CMapU3Ed__22_t776434FFDEFA59932DC8A0D4004D798E02C396BB_il2cpp_TypeInfo_var);
		U3CMapU3Ed__22__ctor_m7A719ECC67A2D13AE92B61D397AACC243298551A(L_0, 0, /*hidden argument*/NULL);
		U3CMapU3Ed__22_t776434FFDEFA59932DC8A0D4004D798E02C396BB * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void GoogleMapApi::StartWalking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleMapApi_StartWalking_mD04342D9C1A5A514015390DDF6F8EE550FD846DD (GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5 * __this, const RuntimeMethod* method)
{
	{
		// StartPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_StartPanel_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// cat.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_cat_7();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GoogleMapApi::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleMapApi_Start_mF5672E450BFD1EA648DDC44A22F421F90650E6F5 (GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(Map());
		RuntimeObject* L_0;
		L_0 = GoogleMapApi_Map_m79927E2A2CA9EDBC25C79BDE2EF8B600CC7AF257(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GoogleMapApi::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleMapApi_Update_m0F075F0C7F832B15395F6EDAF63B216C013DFB72 (GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AA847F53F97DD8EB22AE78CF97AA59782D18E6E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(isStart) {
		bool L_0 = __this->get_isStart_9();
		if (!L_0)
		{
			goto IL_015c;
		}
	}
	{
		// Input.location.Start(0.5f);
		LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * L_1;
		L_1 = Input_get_location_m5D0AE1016E410D3D7411904D0706456DE383F4E5(/*hidden argument*/NULL);
		NullCheck(L_1);
		LocationService_Start_m590DB6B761913E7D6A1FCD58CEF93747E43C1E2F(L_1, (0.5f), /*hidden argument*/NULL);
		// int wait = 1000;
		V_0 = ((int32_t)1000);
		// if (Input.location.isEnabledByUser) {
		LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * L_2;
		L_2 = Input_get_location_m5D0AE1016E410D3D7411904D0706456DE383F4E5(/*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = LocationService_get_isEnabledByUser_mD26BB9D35EC9DE4B38F7771B5E910B14EFC2B00A(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_006c;
		}
	}
	{
		goto IL_0032;
	}

IL_002e:
	{
		// wait--;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
	}

IL_0032:
	{
		// while (Input.location.status == LocationServiceStatus.Initializing && wait > 0)
		LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * L_5;
		L_5 = Input_get_location_m5D0AE1016E410D3D7411904D0706456DE383F4E5(/*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = LocationService_get_status_m1E90C9991825BDF5A3AC066D97F9198568055C54(L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_002e;
		}
	}

IL_0043:
	{
		// if (Input.location.status != LocationServiceStatus.Failed) {
		LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * L_8;
		L_8 = Input_get_location_m5D0AE1016E410D3D7411904D0706456DE383F4E5(/*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = LocationService_get_status_m1E90C9991825BDF5A3AC066D97F9198568055C54(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) == ((int32_t)3)))
		{
			goto IL_006c;
		}
	}
	{
		// gpsInit = true;
		__this->set_gpsInit_13((bool)1);
		// InvokeRepeating("RetrieveGPSData", 0.0001f, 1.0f);
		MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70(__this, _stringLiteral3AA847F53F97DD8EB22AE78CF97AA59782D18E6E, (9.99999975E-05f), (1.0f), /*hidden argument*/NULL);
	}

IL_006c:
	{
		// if (prevLat == 366) {
		double L_10 = __this->get_prevLat_10();
		if ((!(((double)L_10) == ((double)(366.0)))))
		{
			goto IL_0096;
		}
	}
	{
		// prevLat = lat;
		double L_11 = __this->get_lat_17();
		__this->set_prevLat_10(L_11);
		// prevLon = lon;
		double L_12 = __this->get_lon_18();
		__this->set_prevLon_11(L_12);
		// } else if (Math.Sqrt((Math.Abs(lat - prevLat)* Math.Abs(lat - prevLat)) + (Math.Abs(lon - prevLon) * Math.Abs(lon - prevLon))) >= 5) {
		return;
	}

IL_0096:
	{
		// } else if (Math.Sqrt((Math.Abs(lat - prevLat)* Math.Abs(lat - prevLat)) + (Math.Abs(lon - prevLon) * Math.Abs(lon - prevLon))) >= 5) {
		double L_13 = __this->get_lat_17();
		double L_14 = __this->get_prevLat_10();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_15;
		L_15 = fabs(((double)il2cpp_codegen_subtract((double)L_13, (double)L_14)));
		double L_16 = __this->get_lat_17();
		double L_17 = __this->get_prevLat_10();
		double L_18;
		L_18 = fabs(((double)il2cpp_codegen_subtract((double)L_16, (double)L_17)));
		double L_19 = __this->get_lon_18();
		double L_20 = __this->get_prevLon_11();
		double L_21;
		L_21 = fabs(((double)il2cpp_codegen_subtract((double)L_19, (double)L_20)));
		double L_22 = __this->get_lon_18();
		double L_23 = __this->get_prevLon_11();
		double L_24;
		L_24 = fabs(((double)il2cpp_codegen_subtract((double)L_22, (double)L_23)));
		double L_25;
		L_25 = sqrt(((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_15, (double)L_18)), (double)((double)il2cpp_codegen_multiply((double)L_21, (double)L_24)))));
		if ((!(((double)L_25) >= ((double)(5.0)))))
		{
			goto IL_015c;
		}
	}
	{
		// distance += Math.Sqrt((lat - prevLat) * (lat - prevLat) + (lon - prevLon) * (lon - prevLon)) * 111.64;
		double L_26 = __this->get_distance_12();
		double L_27 = __this->get_lat_17();
		double L_28 = __this->get_prevLat_10();
		double L_29 = __this->get_lat_17();
		double L_30 = __this->get_prevLat_10();
		double L_31 = __this->get_lon_18();
		double L_32 = __this->get_prevLon_11();
		double L_33 = __this->get_lon_18();
		double L_34 = __this->get_prevLon_11();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_35;
		L_35 = sqrt(((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_27, (double)L_28)), (double)((double)il2cpp_codegen_subtract((double)L_29, (double)L_30)))), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_31, (double)L_32)), (double)((double)il2cpp_codegen_subtract((double)L_33, (double)L_34)))))));
		__this->set_distance_12(((double)il2cpp_codegen_add((double)L_26, (double)((double)il2cpp_codegen_multiply((double)L_35, (double)(111.64))))));
		// prevLat = lat;
		double L_36 = __this->get_lat_17();
		__this->set_prevLat_10(L_36);
		// prevLon = lon;
		double L_37 = __this->get_lon_18();
		__this->set_prevLon_11(L_37);
	}

IL_015c:
	{
		// }
		return;
	}
}
// System.Void GoogleMapApi::RetrieveGPSData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleMapApi_RetrieveGPSData_m800903EAEE38D865BA3BEBD61F453C485CA79091 (GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5 * __this, const RuntimeMethod* method)
{
	{
		// currentGPSPosition = Input.location.lastData;
		LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * L_0;
		L_0 = Input_get_location_m5D0AE1016E410D3D7411904D0706456DE383F4E5(/*hidden argument*/NULL);
		NullCheck(L_0);
		LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769  L_1;
		L_1 = LocationService_get_lastData_mD6EAC681E09427969B18EEC9B85DA43633EFEA1F(L_0, /*hidden argument*/NULL);
		__this->set_currentGPSPosition_15(L_1);
		// lat = currentGPSPosition.latitude;
		LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769 * L_2 = __this->get_address_of_currentGPSPosition_15();
		float L_3;
		L_3 = LocationInfo_get_latitude_m09F2DFBDB716C46B0ECFD11F6A5DB2B93B06174B((LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769 *)L_2, /*hidden argument*/NULL);
		__this->set_lat_17(((double)((double)L_3)));
		// lon = currentGPSPosition.longitude;
		LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769 * L_4 = __this->get_address_of_currentGPSPosition_15();
		float L_5;
		L_5 = LocationInfo_get_longitude_mD0F77FFCF02AFB63058C77A4EBAE228528F57A50((LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769 *)L_4, /*hidden argument*/NULL);
		__this->set_lon_18(((double)((double)L_5)));
		// }
		return;
	}
}
// System.Void GoogleMapApi::OnClickYesBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleMapApi_OnClickYesBtn_m23F7E522847F492731EF86D898D09CAF295A63CE (GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC53C15EA098684991F8F2C3F89C5829550973A30);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isStart = true;
		__this->set_isStart_9((bool)1);
		// StartPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_StartPanel_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// palmPetAnimator.SetBool("IsMoving", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = __this->get_palmPetAnimator_8();
		NullCheck(L_1);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_1, _stringLiteralC53C15EA098684991F8F2C3F89C5829550973A30, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GoogleMapApi::OnClilckFinishBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleMapApi_OnClilckFinishBtn_mA622BFAF6884546AFD52FB5F525903596E84174C (GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19E6F54B915CB01A74B7174DFEF8AC62E0C2BB5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC53C15EA098684991F8F2C3F89C5829550973A30);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// isStart = false;
		__this->set_isStart_9((bool)0);
		// if (distance / 10 >= PlayerPrefs.GetInt("Walk"))
		double L_0 = __this->get_distance_12();
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, /*hidden argument*/NULL);
		if ((!(((double)((double)((double)L_0/(double)(10.0)))) >= ((double)((double)((double)L_1))))))
		{
			goto IL_0031;
		}
	}
	{
		// PlayerPrefs.SetInt("Walk", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, 0, /*hidden argument*/NULL);
		goto IL_0068;
	}

IL_0031:
	{
		// PlayerPrefs.SetInt("Walk", PlayerPrefs.GetInt("Walk") - int.Parse(Math.Round(distance / 10).ToString()));
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, /*hidden argument*/NULL);
		double L_3 = __this->get_distance_12();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = bankers_round(((double)((double)L_3/(double)(10.0))));
		V_0 = L_4;
		String_t* L_5;
		L_5 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)(&V_0), /*hidden argument*/NULL);
		int32_t L_6;
		L_6 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_5, /*hidden argument*/NULL);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_6)), /*hidden argument*/NULL);
	}

IL_0068:
	{
		// distance = 0;
		__this->set_distance_12((0.0));
		// lat = 366;
		__this->set_lat_17((366.0));
		// lon = 366;
		__this->set_lon_18((366.0));
		// StopCoroutine(Map());
		RuntimeObject* L_7;
		L_7 = GoogleMapApi_Map_m79927E2A2CA9EDBC25C79BDE2EF8B600CC7AF257(__this, /*hidden argument*/NULL);
		MonoBehaviour_StopCoroutine_m3AB89AE7770E06BDB33BF39104BE5C57DF90616B(__this, L_7, /*hidden argument*/NULL);
		// StartPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_StartPanel_4();
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)1, /*hidden argument*/NULL);
		// cat.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_cat_7();
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)0, /*hidden argument*/NULL);
		// palmPetAnimator.SetBool("IsMoving", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_10 = __this->get_palmPetAnimator_8();
		NullCheck(L_10);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_10, _stringLiteralC53C15EA098684991F8F2C3F89C5829550973A30, (bool)0, /*hidden argument*/NULL);
		// SceneManager.LoadScene("Home");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral19E6F54B915CB01A74B7174DFEF8AC62E0C2BB5F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GoogleMapApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleMapApi__ctor_m009073F9DC424D8F4C540D8AC2927FB098B488F4 (GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5 * __this, const RuntimeMethod* method)
{
	{
		// double prevLat = 366;
		__this->set_prevLat_10((366.0));
		// double prevLon = 366;
		__this->set_prevLon_11((366.0));
		// double detail = 1.0;
		__this->set_detail_14((1.0));
		// public int zoom = 14;
		__this->set_zoom_20(((int32_t)14));
		// public int mapWidth = 200;
		__this->set_mapWidth_21(((int32_t)200));
		// public int mapHeight = 200;
		__this->set_mapHeight_22(((int32_t)200));
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
// System.Void PalmPetMove::StartMove(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PalmPetMove_StartMove_m6C1C9FBE7A9070A55889803CFB96ED306A4661FC (PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vec0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method)
{
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m6CFEADAA0266A99176A33B47129392DF954962B4(__this, /*hidden argument*/NULL);
		// StartCoroutine(Move(vec, rotation));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___vec0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = ___rotation1;
		RuntimeObject* L_2;
		L_2 = PalmPetMove_Move_m0CC292E6944F0A6E51EEA94B9225210B4CCDA87C(__this, L_0, L_1, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator PalmPetMove::Move(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PalmPetMove_Move_m0CC292E6944F0A6E51EEA94B9225210B4CCDA87C (PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vec0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMoveU3Ed__1_tCC40295A9D20D22457CFDA19D2690EA9908D7203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMoveU3Ed__1_tCC40295A9D20D22457CFDA19D2690EA9908D7203 * L_0 = (U3CMoveU3Ed__1_tCC40295A9D20D22457CFDA19D2690EA9908D7203 *)il2cpp_codegen_object_new(U3CMoveU3Ed__1_tCC40295A9D20D22457CFDA19D2690EA9908D7203_il2cpp_TypeInfo_var);
		U3CMoveU3Ed__1__ctor_m6FCFEC1F1BB280A3F9CB60C03D7915CD774EF0A1(L_0, 0, /*hidden argument*/NULL);
		U3CMoveU3Ed__1_tCC40295A9D20D22457CFDA19D2690EA9908D7203 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CMoveU3Ed__1_tCC40295A9D20D22457CFDA19D2690EA9908D7203 * L_2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___vec0;
		NullCheck(L_2);
		L_2->set_vec_3(L_3);
		U3CMoveU3Ed__1_tCC40295A9D20D22457CFDA19D2690EA9908D7203 * L_4 = L_2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5 = ___rotation1;
		NullCheck(L_4);
		L_4->set_rotation_4(L_5);
		return L_4;
	}
}
// System.Void PalmPetMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PalmPetMove__ctor_m347B55314CAC3286664BFE0DA6B601852EF94599 (PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D * __this, const RuntimeMethod* method)
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
// System.String Assets.Scipts.Pet::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Pet_get_Name_m6CE1E76076DD5392A118FE224FDF8A358F923734 (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Assets.Scipts.Pet::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pet_set_Name_m0060E5E02AB4A98D04AE581A485401ABBDA2D6C4 (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 Assets.Scipts.Pet::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pet_get_Type_m7B10498F8099AB1C6A44B56853D92944E54ADB8D (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, const RuntimeMethod* method)
{
	{
		// public int Type { get; set; }
		int32_t L_0 = __this->get_U3CTypeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Assets.Scipts.Pet::set_Type(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pet_set_Type_mE22E558AA4C2DFE71D63802344807EA171BED087 (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Type { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 Assets.Scipts.Pet::get_Hungry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pet_get_Hungry_mB42149A5E6BF8119585321E83301EB74956AFAD2 (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, const RuntimeMethod* method)
{
	{
		// public int Hungry { get; set; }
		int32_t L_0 = __this->get_U3CHungryU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Assets.Scipts.Pet::set_Hungry(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pet_set_Hungry_mA99F39215A0CAF1CF114DDD410A4E8951EDBDCF8 (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Hungry { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CHungryU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Int32 Assets.Scipts.Pet::get_Defecation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pet_get_Defecation_m42CC90F703D02177FD4A0165C853078C77A645B7 (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, const RuntimeMethod* method)
{
	{
		// public int Defecation { get; set; }
		int32_t L_0 = __this->get_U3CDefecationU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Assets.Scipts.Pet::set_Defecation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pet_set_Defecation_m7FE4AF801669BC1D971D595AFFA864B43226913D (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Defecation { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CDefecationU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 Assets.Scipts.Pet::get_Walk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pet_get_Walk_m631AC8BBEB26EACEA0AA015C0C62818B13D8B862 (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, const RuntimeMethod* method)
{
	{
		// public int Walk { get; set; }
		int32_t L_0 = __this->get_U3CWalkU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Assets.Scipts.Pet::set_Walk(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pet_set_Walk_m1C688449B596AED93831FD6DA818C07DD0931592 (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Walk { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CWalkU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 Assets.Scipts.Pet::get_Love()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pet_get_Love_m111D071DAA925AEE549B8D40684841D35251679B (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, const RuntimeMethod* method)
{
	{
		// public int Love { get; set; }
		int32_t L_0 = __this->get_U3CLoveU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Assets.Scipts.Pet::set_Love(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pet_set_Love_m38B32408A6A2658BDC1BD9F4371CCA13F3B25530 (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Love { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CLoveU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void Assets.Scipts.Pet::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pet__ctor_m80DF46234FDF532462CC49E453A00E165CCED5A2 (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22B55D03400550AE5F4F6547AB8ED99CBF02D1FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15CF7E1CEFBD0C475E3A89A80B5393D417F8634);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA47B4F69555BC9F2243FFF699A3ABC48BFD476A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD642CEBDA3492962B4DB8704C15B45A6A13B548F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Pet(string name) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.Name = name;
		String_t* L_0 = ___name0;
		Pet_set_Name_m0060E5E02AB4A98D04AE581A485401ABBDA2D6C4_inline(__this, L_0, /*hidden argument*/NULL);
		// PlayerPrefs.SetString("Name", name);
		String_t* L_1 = ___name0;
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B, L_1, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("Type", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralA15CF7E1CEFBD0C475E3A89A80B5393D417F8634, 1, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("Hungry", 50);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralA47B4F69555BC9F2243FFF699A3ABC48BFD476A7, ((int32_t)50), /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("Defecation", 50);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralD642CEBDA3492962B4DB8704C15B45A6A13B548F, ((int32_t)50), /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("Walk", 50);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, ((int32_t)50), /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("Love", 50);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral22B55D03400550AE5F4F6547AB8ED99CBF02D1FC, ((int32_t)50), /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// Type = PlayerPrefs.GetInt("Type", 1);
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteralA15CF7E1CEFBD0C475E3A89A80B5393D417F8634, 1, /*hidden argument*/NULL);
		Pet_set_Type_mE22E558AA4C2DFE71D63802344807EA171BED087_inline(__this, L_2, /*hidden argument*/NULL);
		// Hungry = PlayerPrefs.GetInt("Hungry", 50);
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteralA47B4F69555BC9F2243FFF699A3ABC48BFD476A7, ((int32_t)50), /*hidden argument*/NULL);
		Pet_set_Hungry_mA99F39215A0CAF1CF114DDD410A4E8951EDBDCF8_inline(__this, L_3, /*hidden argument*/NULL);
		// Defecation = PlayerPrefs.GetInt("Defecation", 50);
		int32_t L_4;
		L_4 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteralD642CEBDA3492962B4DB8704C15B45A6A13B548F, ((int32_t)50), /*hidden argument*/NULL);
		Pet_set_Defecation_m7FE4AF801669BC1D971D595AFFA864B43226913D_inline(__this, L_4, /*hidden argument*/NULL);
		// Walk = PlayerPrefs.GetInt("Walk", 50);
		int32_t L_5;
		L_5 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, ((int32_t)50), /*hidden argument*/NULL);
		Pet_set_Walk_m1C688449B596AED93831FD6DA818C07DD0931592_inline(__this, L_5, /*hidden argument*/NULL);
		// Love = PlayerPrefs.GetInt("Love", 50);
		int32_t L_6;
		L_6 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral22B55D03400550AE5F4F6547AB8ED99CBF02D1FC, ((int32_t)50), /*hidden argument*/NULL);
		Pet_set_Love_m38B32408A6A2658BDC1BD9F4371CCA13F3B25530_inline(__this, L_6, /*hidden argument*/NULL);
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
// System.Void PlaceOnPlane::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane_Awake_m07F667A8D11C4C52B0D6E80EC6BFBD3A6DCC9F4C (PlaceOnPlane_t3DF0B6A936DE2BB24AF3A85695A36F2D6048A9C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m01533F209934FB7AA229CAF420A923C1C4F4FBC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mDBBF3E36A716B95B683306173920925E405BB8A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t5DF84322FFE12A24465E48164961CD724D109521_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaceOnPlane_OnStateChanged_m1B80F132D86123408878897028B66DD52DE64EEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaceOnPlane_PlaneStart_mFD23C4884802E0C85095CAFC8EAA23F91EA5C89D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ARSession.stateChanged += OnStateChanged;
		Action_1_t5DF84322FFE12A24465E48164961CD724D109521 * L_0 = (Action_1_t5DF84322FFE12A24465E48164961CD724D109521 *)il2cpp_codegen_object_new(Action_1_t5DF84322FFE12A24465E48164961CD724D109521_il2cpp_TypeInfo_var);
		Action_1__ctor_m01533F209934FB7AA229CAF420A923C1C4F4FBC4(L_0, __this, (intptr_t)((intptr_t)PlaceOnPlane_OnStateChanged_m1B80F132D86123408878897028B66DD52DE64EEE_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m01533F209934FB7AA229CAF420A923C1C4F4FBC4_RuntimeMethod_var);
		ARSession_add_stateChanged_m0B11F34533799F3DB6B188D44AB356574954D3DF(L_0, /*hidden argument*/NULL);
		// arPlaneManager.planesChanged += PlaneStart;
		ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * L_1 = __this->get_arPlaneManager_5();
		Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25 * L_2 = (Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25 *)il2cpp_codegen_object_new(Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25_il2cpp_TypeInfo_var);
		Action_1__ctor_mDBBF3E36A716B95B683306173920925E405BB8A0(L_2, __this, (intptr_t)((intptr_t)PlaceOnPlane_PlaneStart_mFD23C4884802E0C85095CAFC8EAA23F91EA5C89D_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mDBBF3E36A716B95B683306173920925E405BB8A0_RuntimeMethod_var);
		NullCheck(L_1);
		ARPlaneManager_add_planesChanged_m785106C77BC4F503A9AB904E9BEF3EDCCF49FD27(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlaceOnPlane::OnStateChanged(UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane_OnStateChanged_m1B80F132D86123408878897028B66DD52DE64EEE (PlaceOnPlane_t3DF0B6A936DE2BB24AF3A85695A36F2D6048A9C3 * __this, ARSessionStateChangedEventArgs_tF14FF2D76D721B74F80297911644222B2DF3FC06  ___args0, const RuntimeMethod* method)
{
	{
		// if (args.state == ARSessionState.Unsupported)
		int32_t L_0;
		L_0 = ARSessionStateChangedEventArgs_get_state_mDFCCADECEFE9356E4246B9BF912157F3EDD88796_inline((ARSessionStateChangedEventArgs_tF14FF2D76D721B74F80297911644222B2DF3FC06 *)(&___args0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0010;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// return;
		return;
	}

IL_0010:
	{
		// if (args.state == ARSessionState.Ready | args.state == ARSessionState.SessionTracking) isActive = true;
		int32_t L_1;
		L_1 = ARSessionStateChangedEventArgs_get_state_mDFCCADECEFE9356E4246B9BF912157F3EDD88796_inline((ARSessionStateChangedEventArgs_tF14FF2D76D721B74F80297911644222B2DF3FC06 *)(&___args0), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = ARSessionStateChangedEventArgs_get_state_mDFCCADECEFE9356E4246B9BF912157F3EDD88796_inline((ARSessionStateChangedEventArgs_tF14FF2D76D721B74F80297911644222B2DF3FC06 *)(&___args0), /*hidden argument*/NULL);
		if (!((int32_t)((int32_t)((((int32_t)L_1) == ((int32_t)5))? 1 : 0)|(int32_t)((((int32_t)L_2) == ((int32_t)7))? 1 : 0))))
		{
			goto IL_002f;
		}
	}
	{
		// if (args.state == ARSessionState.Ready | args.state == ARSessionState.SessionTracking) isActive = true;
		__this->set_isActive_9((bool)1);
		return;
	}

IL_002f:
	{
		// else isActive = false;
		__this->set_isActive_9((bool)0);
		// }
		return;
	}
}
// System.Void PlaceOnPlane::PlaneStart(UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane_PlaneStart_mFD23C4884802E0C85095CAFC8EAA23F91EA5C89D (PlaceOnPlane_t3DF0B6A936DE2BB24AF3A85695A36F2D6048A9C3 * __this, ARPlanesChangedEventArgs_tBF7407003D3B2F49087DBED7DEEBD8803466E6CF  ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m123CF741EFB3898DD599C283DC5D3F8BE586D385_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!ScanGuidePanel.activeInHierarchy) return;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_ScanGuidePanel_10();
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (!ScanGuidePanel.activeInHierarchy) return;
		return;
	}

IL_000e:
	{
		// List<ARPlane> addedPlanes = args.added;
		List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * L_2;
		L_2 = ARPlanesChangedEventArgs_get_added_mD0CA0FB88C9F669580ED4BE0C9A3DA6E1333DA07_inline((ARPlanesChangedEventArgs_tBF7407003D3B2F49087DBED7DEEBD8803466E6CF *)(&___args0), /*hidden argument*/NULL);
		// if (addedPlanes.Count > 0)
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m123CF741EFB3898DD599C283DC5D3F8BE586D385_inline(L_2, /*hidden argument*/List_1_get_Count_m123CF741EFB3898DD599C283DC5D3F8BE586D385_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		// ScanGuidePanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_ScanGuidePanel_10();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// TouchGuidePanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_TouchGuidePanel_11();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void PlaceOnPlane::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane_Update_mB0B5CF33955B4E0C22674FEC89BDFAFF9031D878 (PlaceOnPlane_t3DF0B6A936DE2BB24AF3A85695A36F2D6048A9C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisPalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D_mB799CE99F3EF849A8EBF90F9220CE85D1834DA67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D_mFE8D6157DD8FECF9B40E6F83FC33B95326638154_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!isActive) return;
		bool L_0 = __this->get_isActive_9();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!isActive) return;
		return;
	}

IL_0009:
	{
		// if (Input.touchCount == 0) return;
		int32_t L_1;
		L_1 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		// if (Input.touchCount == 0) return;
		return;
	}

IL_0011:
	{
		// Touch touch = Input.GetTouch(0);
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_2;
		L_2 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (touch.phase != TouchPhase.Began) return;
		int32_t L_3;
		L_3 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// if (touch.phase != TouchPhase.Began) return;
		return;
	}

IL_0022:
	{
		// if (arRaycastManager.Raycast(touch.position, hits, TrackableType.PlaneEstimated | TrackableType.PlaneWithinPolygon))
		ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * L_4 = __this->get_arRaycastManager_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_6 = __this->get_hits_7();
		NullCheck(L_4);
		bool L_7;
		L_7 = ARRaycastManager_Raycast_mCC2851DAC2542C59528FCE21242231DFAF024650(L_4, L_5, L_6, ((int32_t)9), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00f3;
		}
	}
	{
		// hitPose = hits[0].pose;
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_8 = __this->get_hits_7();
		NullCheck(L_8);
		ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  L_9;
		L_9 = List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_inline(L_8, 0, /*hidden argument*/List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_RuntimeMethod_var);
		V_1 = L_9;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_10;
		L_10 = ARRaycastHit_get_pose_mB4D8BC45F23D9F2C2C8DCAFA88DB1221D76EF02B((ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E *)(&V_1), /*hidden argument*/NULL);
		__this->set_hitPose_12(L_10);
		// if (palmPet == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_palmPet_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00cd;
		}
	}
	{
		// TouchGuidePanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_TouchGuidePanel_11();
		NullCheck(L_13);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_13, (bool)0, /*hidden argument*/NULL);
		// palmPet = Instantiate(SpawnPrefab, hitPose.position, hitPose.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_SpawnPrefab_6();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_15 = __this->get_address_of_hitPose_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = L_15->get_position_0();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_17 = __this->get_address_of_hitPose_12();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18 = L_17->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_14, L_16, L_18, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_palmPet_8(L_19);
		// palmPet.AddComponent<PalmPetMove>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_palmPet_8();
		NullCheck(L_20);
		PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D * L_21;
		L_21 = GameObject_AddComponent_TisPalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D_mB799CE99F3EF849A8EBF90F9220CE85D1834DA67(L_20, /*hidden argument*/GameObject_AddComponent_TisPalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D_mB799CE99F3EF849A8EBF90F9220CE85D1834DA67_RuntimeMethod_var);
		// palmPet.transform.Rotate(new Vector3(0, -180, 0));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_palmPet_8();
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_22, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_24), (0.0f), (-180.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_23, L_24, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00cd:
	{
		// palmPet.GetComponent<PalmPetMove>().StartMove(hitPose.position, hitPose.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = __this->get_palmPet_8();
		NullCheck(L_25);
		PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D * L_26;
		L_26 = GameObject_GetComponent_TisPalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D_mFE8D6157DD8FECF9B40E6F83FC33B95326638154(L_25, /*hidden argument*/GameObject_GetComponent_TisPalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D_mFE8D6157DD8FECF9B40E6F83FC33B95326638154_RuntimeMethod_var);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_27 = __this->get_address_of_hitPose_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = L_27->get_position_0();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_29 = __this->get_address_of_hitPose_12();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_30 = L_29->get_rotation_1();
		NullCheck(L_26);
		PalmPetMove_StartMove_m6C1C9FBE7A9070A55889803CFB96ED306A4661FC(L_26, L_28, L_30, /*hidden argument*/NULL);
	}

IL_00f3:
	{
		// }
		return;
	}
}
// System.Void PlaceOnPlane::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane__ctor_m6A163443FEBA846E4B12847076EC8482911BDAFC (PlaceOnPlane_t3DF0B6A936DE2BB24AF3A85695A36F2D6048A9C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<ARRaycastHit> hits = new List<ARRaycastHit>();
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_0 = (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D *)il2cpp_codegen_object_new(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_il2cpp_TypeInfo_var);
		List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201(L_0, /*hidden argument*/List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_RuntimeMethod_var);
		__this->set_hits_7(L_0);
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
// System.Void UIManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Start_mAA4B371DC406146E84A9D8803B9C861939B2E04E (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// centerPanelList.Add(desirePanel);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_centerPanelList_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_desirePanel_6();
		NullCheck(L_0);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_0, L_1, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// centerPanelList.Add(homePanel);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_2 = __this->get_centerPanelList_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_homePanel_7();
		NullCheck(L_2);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_2, L_3, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// centerPanelList.Add(multiPanel);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_4 = __this->get_centerPanelList_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_multiPanel_8();
		NullCheck(L_4);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_4, L_5, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// centerPanelList.Add(shopPanel);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_6 = __this->get_centerPanelList_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_shopPanel_9();
		NullCheck(L_6);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_6, L_7, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// gamePanelList.Add(GamePanel);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_8 = __this->get_gamePanelList_14();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_GamePanel_11();
		NullCheck(L_8);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_8, L_9, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// gamePanelList.Add(feedPanel);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_10 = __this->get_gamePanelList_14();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_feedPanel_12();
		NullCheck(L_10);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_10, L_11, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// gamePanelList.Add(poopPanel);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_12 = __this->get_gamePanelList_14();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_poopPanel_13();
		NullCheck(L_12);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_12, L_13, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// buttonList.Add(walkButton);
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_14 = __this->get_buttonList_20();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_15 = __this->get_walkButton_15();
		NullCheck(L_14);
		List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93(L_14, L_15, /*hidden argument*/List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93_RuntimeMethod_var);
		// buttonList.Add(desireButton);
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_16 = __this->get_buttonList_20();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_17 = __this->get_desireButton_16();
		NullCheck(L_16);
		List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93(L_16, L_17, /*hidden argument*/List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93_RuntimeMethod_var);
		// buttonList.Add(homeButton);
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_18 = __this->get_buttonList_20();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_19 = __this->get_homeButton_17();
		NullCheck(L_18);
		List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93(L_18, L_19, /*hidden argument*/List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93_RuntimeMethod_var);
		// buttonList.Add(multiButton);
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_20 = __this->get_buttonList_20();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_21 = __this->get_multiButton_18();
		NullCheck(L_20);
		List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93(L_20, L_21, /*hidden argument*/List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93_RuntimeMethod_var);
		// buttonList.Add(shopButton);
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_22 = __this->get_buttonList_20();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_23 = __this->get_shopButton_19();
		NullCheck(L_22);
		List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93(L_22, L_23, /*hidden argument*/List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93_RuntimeMethod_var);
		// if (PlayerPrefs.HasKey("Name")) {
		bool L_24;
		L_24 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00f5;
		}
	}
	{
		// pet = new Pet(PlayerPrefs.GetString("Name"));
		String_t* L_25;
		L_25 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B, /*hidden argument*/NULL);
		Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * L_26 = (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 *)il2cpp_codegen_object_new(Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346_il2cpp_TypeInfo_var);
		Pet__ctor_m80DF46234FDF532462CC49E453A00E165CCED5A2(L_26, L_25, /*hidden argument*/NULL);
		__this->set_pet_4(L_26);
		// SetPetState();
		UIManager_SetPetState_mD738EE844A9D5EE2934DC70666E227DD53FEF39C(__this, /*hidden argument*/NULL);
		// }
		goto IL_0101;
	}

IL_00f5:
	{
		// else startPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_startPanel_5();
		NullCheck(L_27);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_27, (bool)1, /*hidden argument*/NULL);
	}

IL_0101:
	{
		// Debug.Log("start");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD, /*hidden argument*/NULL);
		// ActivePanel(homePanel);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = __this->get_homePanel_7();
		UIManager_ActivePanel_m99EC35F073E164ADF7D18C34F9FB727A77D6FD48(__this, L_28, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::DisableAllPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_DisableAllPanel_m9084C99AA7467890C810EAD397D27527004FBB3B (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach(GameObject panel in gamePanelList) {
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_gamePanelList_14();
		NullCheck(L_0);
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_1;
		L_1 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_0, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001b;
		}

IL_000e:
		{
			// foreach(GameObject panel in gamePanelList) {
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
			L_2 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			// panel.SetActive(false);
			NullCheck(L_2);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		}

IL_001b:
		{
			// foreach(GameObject panel in gamePanelList) {
			bool L_3;
			L_3 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_3)
			{
				goto IL_000e;
			}
		}

IL_0024:
		{
			IL2CPP_LEAVE(0x34, FINALLY_0026);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x34, IL_0034)
	}

IL_0034:
	{
		// foreach (GameObject panel in centerPanelList)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_4 = __this->get_centerPanelList_10();
		NullCheck(L_4);
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_5;
		L_5 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_4, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_0 = L_5;
	}

IL_0040:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004f;
		}

IL_0042:
		{
			// foreach (GameObject panel in centerPanelList)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
			L_6 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			// panel.SetActive(false);
			NullCheck(L_6);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		}

IL_004f:
		{
			// foreach (GameObject panel in centerPanelList)
			bool L_7;
			L_7 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0042;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005a;
	}

FINALLY_005a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(90)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(90)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x68, IL_0068)
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void UIManager::ActivePanel(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ActivePanel_m99EC35F073E164ADF7D18C34F9FB727A77D6FD48 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___panel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mE508A129A7CB4DC89530674E7854B7F699BB486F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(panel);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___panel0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_0, /*hidden argument*/NULL);
		// DisableAllPanel();
		UIManager_DisableAllPanel_m9084C99AA7467890C810EAD397D27527004FBB3B(__this, /*hidden argument*/NULL);
		// if(gamePanelList.Contains(panel)) GamePanel.SetActive(true);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_1 = __this->get_gamePanelList_14();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ___panel0;
		NullCheck(L_1);
		bool L_3;
		L_3 = List_1_Contains_mE508A129A7CB4DC89530674E7854B7F699BB486F(L_1, L_2, /*hidden argument*/List_1_Contains_mE508A129A7CB4DC89530674E7854B7F699BB486F_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// if(gamePanelList.Contains(panel)) GamePanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_GamePanel_11();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// if (panel == homePanel)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = ___panel0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_homePanel_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		// ButtonDistable(homeButton);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_8 = __this->get_homeButton_17();
		UIManager_ButtonDistable_m240951D730ED385D8BE135229321FE775C6824B5(__this, L_8, /*hidden argument*/NULL);
	}

IL_0040:
	{
		// panel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = ___panel0;
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::ActiveWalkPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ActiveWalkPanel_mAB54F2538A9F2CF019A6302F3BA81C580CDD8AF7 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Walk");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::EnableAllButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_EnableAllButton_m158A0A9EF240A93E3CE2CFB5F64A63ABF125D495 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD9C961426EFA6BBBFDCA42D46BCEA62283586500_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7206FD3121D8BEA7DFCAD913FDAF3CA0F6821691_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m01B1280C927D8D132CE202C3E9F206F467D0346C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mBBC2C0EA0F269A56465D057A5C6467489C251CBC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t6D0827411121305C0C750B338E1BFB757246E871  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (Button button in buttonList)
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_0 = __this->get_buttonList_20();
		NullCheck(L_0);
		Enumerator_t6D0827411121305C0C750B338E1BFB757246E871  L_1;
		L_1 = List_1_GetEnumerator_mBBC2C0EA0F269A56465D057A5C6467489C251CBC(L_0, /*hidden argument*/List_1_GetEnumerator_mBBC2C0EA0F269A56465D057A5C6467489C251CBC_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001b;
		}

IL_000e:
		{
			// foreach (Button button in buttonList)
			Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_2;
			L_2 = Enumerator_get_Current_m01B1280C927D8D132CE202C3E9F206F467D0346C_inline((Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m01B1280C927D8D132CE202C3E9F206F467D0346C_RuntimeMethod_var);
			// button.interactable = true;
			NullCheck(L_2);
			Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_2, (bool)1, /*hidden argument*/NULL);
		}

IL_001b:
		{
			// foreach (Button button in buttonList)
			bool L_3;
			L_3 = Enumerator_MoveNext_m7206FD3121D8BEA7DFCAD913FDAF3CA0F6821691((Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m7206FD3121D8BEA7DFCAD913FDAF3CA0F6821691_RuntimeMethod_var);
			if (L_3)
			{
				goto IL_000e;
			}
		}

IL_0024:
		{
			IL2CPP_LEAVE(0x34, FINALLY_0026);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD9C961426EFA6BBBFDCA42D46BCEA62283586500((Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mD9C961426EFA6BBBFDCA42D46BCEA62283586500_RuntimeMethod_var);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x34, IL_0034)
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void UIManager::ButtonDistable(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ButtonDistable_m240951D730ED385D8BE135229321FE775C6824B5 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___button0, const RuntimeMethod* method)
{
	{
		// EnableAllButton();
		UIManager_EnableAllButton_m158A0A9EF240A93E3CE2CFB5F64A63ABF125D495(__this, /*hidden argument*/NULL);
		// button.interactable = false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = ___button0;
		NullCheck(L_0);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::SetPetState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_SetPetState_mD738EE844A9D5EE2934DC70666E227DD53FEF39C (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// nameText.text = pet.Name.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_nameText_24();
		Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * L_1 = __this->get_pet_4();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Pet_get_Name_m6CE1E76076DD5392A118FE224FDF8A358F923734_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// hungryText.text = pet.Hungry.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_hungryText_25();
		Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * L_5 = __this->get_pet_4();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Pet_get_Hungry_mB42149A5E6BF8119585321E83301EB74956AFAD2_inline(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// defecationText.text = pet.Defecation.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = __this->get_defecationText_26();
		Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * L_9 = __this->get_pet_4();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Pet_get_Defecation_m42CC90F703D02177FD4A0165C853078C77A645B7_inline(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_11);
		// walkText.text = pet.Walk.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_12 = __this->get_walkText_27();
		Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * L_13 = __this->get_pet_4();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Pet_get_Walk_m631AC8BBEB26EACEA0AA015C0C62818B13D8B862_inline(L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		String_t* L_15;
		L_15 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_15);
		// loveText.text = pet.Love.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_16 = __this->get_loveText_28();
		Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * L_17 = __this->get_pet_4();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = Pet_get_Love_m111D071DAA925AEE549B8D40684841D35251679B_inline(L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		String_t* L_19;
		L_19 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_19);
		// }
		return;
	}
}
// System.Void UIManager::MakePet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_MakePet_mA3F2DB2B25CB2F5991CE6756A4FCFFC66B888445 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF45847AA64882A4409C42BED2156AFFDE975896D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (nameField.text != "" && typeField.itemText.text == "고양이") {
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_0 = __this->get_nameField_22();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0067;
		}
	}
	{
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_3 = __this->get_typeField_23();
		NullCheck(L_3);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4;
		L_4 = Dropdown_get_itemText_m89586E53171746D3BD16F8EBA0C5A814006435C1_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_4);
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteralF45847AA64882A4409C42BED2156AFFDE975896D, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0067;
		}
	}
	{
		// pet = new Pet(nameField.text);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_7 = __this->get_nameField_22();
		NullCheck(L_7);
		String_t* L_8;
		L_8 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_7, /*hidden argument*/NULL);
		Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * L_9 = (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 *)il2cpp_codegen_object_new(Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346_il2cpp_TypeInfo_var);
		Pet__ctor_m80DF46234FDF532462CC49E453A00E165CCED5A2(L_9, L_8, /*hidden argument*/NULL);
		__this->set_pet_4(L_9);
		// startPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_startPanel_5();
		NullCheck(L_10);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)0, /*hidden argument*/NULL);
		// ActivePanel(homePanel);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_homePanel_7();
		UIManager_ActivePanel_m99EC35F073E164ADF7D18C34F9FB727A77D6FD48(__this, L_11, /*hidden argument*/NULL);
		// SetPetState();
		UIManager_SetPetState_mD738EE844A9D5EE2934DC70666E227DD53FEF39C(__this, /*hidden argument*/NULL);
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Void UIManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager__ctor_mDADE1D724D40AF63AE78D51FC1CF1FE4784B4D4B (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA1744A70D10E32296ECF132BFF63A811CB50A795_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] private List<GameObject> centerPanelList = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_0, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_centerPanelList_10(L_0);
		// private List<GameObject> gamePanelList = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_1 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_1, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_gamePanelList_14(L_1);
		// private List<Button> buttonList = new List<Button>();
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_2 = (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E *)il2cpp_codegen_object_new(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E_il2cpp_TypeInfo_var);
		List_1__ctor_mA1744A70D10E32296ECF132BFF63A811CB50A795(L_2, /*hidden argument*/List_1__ctor_mA1744A70D10E32296ECF132BFF63A811CB50A795_RuntimeMethod_var);
		__this->set_buttonList_20(L_2);
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
// System.Void DesireFeed/<SpawnLoop>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnLoopU3Ed__21__ctor_m91E2AA1307CCACDFF80F507D1BC6286BF9E880F5 (U3CSpawnLoopU3Ed__21_t8666E830ACB28FF5789823EF6C30AF3C7F4C9195 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DesireFeed/<SpawnLoop>d__21::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnLoopU3Ed__21_System_IDisposable_Dispose_m2BF17523831AA8D48F0F49AF025B5C442AA6A09B (U3CSpawnLoopU3Ed__21_t8666E830ACB28FF5789823EF6C30AF3C7F4C9195 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DesireFeed/<SpawnLoop>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnLoopU3Ed__21_MoveNext_m9A47A4BF46A7D4CAC8CCF1E7423E97DD26301B6F (U3CSpawnLoopU3Ed__21_t8666E830ACB28FF5789823EF6C30AF3C7F4C9195 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * V_1 = NULL;
	float V_2 = 0.0f;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_4 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0137;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_013e;
	}

IL_0026:
	{
		// float what = Random.Range(0, 2f);
		float L_4;
		L_4 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.0f), (2.0f), /*hidden argument*/NULL);
		// if (what < 1.1f)
		if ((!(((float)L_4) < ((float)(1.10000002f)))))
		{
			goto IL_00ae;
		}
	}
	{
		// GameObject newMeat = Instantiate(Meat, new Vector2(Random.Range(-Screen.width/2, Screen.width), Screen.height), Meat.transform.rotation);
		DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * L_5 = V_1;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = L_5->get_Meat_11();
		int32_t L_7;
		L_7 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_8;
		L_8 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_9;
		L_9 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)((int32_t)((-L_7))/(int32_t)2)), L_8, /*hidden argument*/NULL);
		int32_t L_10;
		L_10 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_11), ((float)((float)L_9)), ((float)((float)L_10)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_11, /*hidden argument*/NULL);
		DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * L_13 = V_1;
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = L_13->get_Meat_11();
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_6, L_12, L_16, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		V_3 = L_17;
		// Debug.Log(Screen.width);
		int32_t L_18;
		L_18 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_19);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_20, /*hidden argument*/NULL);
		// newMeat.transform.parent = gamePanel.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = V_3;
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * L_23 = V_1;
		NullCheck(L_23);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = L_23->get_gamePanel_9();
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_22, L_25, /*hidden argument*/NULL);
		// objectList.Add(newMeat);
		DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * L_26 = V_1;
		NullCheck(L_26);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_27 = L_26->get_objectList_13();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = V_3;
		NullCheck(L_27);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_27, L_28, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// }
		goto IL_0112;
	}

IL_00ae:
	{
		// GameObject newBomb = Instantiate(Bomb, new Vector2(Random.Range(-Screen.width / 2, Screen.width), Screen.height), Meat.transform.rotation);
		DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * L_29 = V_1;
		NullCheck(L_29);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = L_29->get_Bomb_12();
		int32_t L_31;
		L_31 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_32;
		L_32 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_33;
		L_33 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)((int32_t)((-L_31))/(int32_t)2)), L_32, /*hidden argument*/NULL);
		int32_t L_34;
		L_34 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_35), ((float)((float)L_33)), ((float)((float)L_34)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_35, /*hidden argument*/NULL);
		DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * L_37 = V_1;
		NullCheck(L_37);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = L_37->get_Meat_11();
		NullCheck(L_38);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_38, /*hidden argument*/NULL);
		NullCheck(L_39);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_40;
		L_40 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_39, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41;
		L_41 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_30, L_36, L_40, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		V_4 = L_41;
		// newBomb.transform.parent = gamePanel.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42 = V_4;
		NullCheck(L_42);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
		L_43 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_42, /*hidden argument*/NULL);
		DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * L_44 = V_1;
		NullCheck(L_44);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45 = L_44->get_gamePanel_9();
		NullCheck(L_45);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46;
		L_46 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_45, /*hidden argument*/NULL);
		NullCheck(L_43);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_43, L_46, /*hidden argument*/NULL);
		// objectList.Add(newBomb);
		DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * L_47 = V_1;
		NullCheck(L_47);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_48 = L_47->get_objectList_13();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49 = V_4;
		NullCheck(L_48);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_48, L_49, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
	}

IL_0112:
	{
		// float time = Random.Range(1.0f, 2.2f);
		float L_50;
		L_50 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((1.0f), (2.20000005f), /*hidden argument*/NULL);
		V_2 = L_50;
		// yield return new WaitForSeconds(time);
		float L_51 = V_2;
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_52 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_52, L_51, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_52);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0137:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_013e:
	{
		// while (!gameEnd)
		DesireFeed_tE2A09DBD4F980BE915A5105D4E3810AE16E349F8 * L_53 = V_1;
		NullCheck(L_53);
		bool L_54 = L_53->get_gameEnd_20();
		if (!L_54)
		{
			goto IL_0026;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object DesireFeed/<SpawnLoop>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpawnLoopU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m59C3A5E5754A48923875EA6820CCAA54E7D097FB (U3CSpawnLoopU3Ed__21_t8666E830ACB28FF5789823EF6C30AF3C7F4C9195 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DesireFeed/<SpawnLoop>d__21::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnLoopU3Ed__21_System_Collections_IEnumerator_Reset_mD6187437270D5A027D64F9D715CFA38A3757B5EA (U3CSpawnLoopU3Ed__21_t8666E830ACB28FF5789823EF6C30AF3C7F4C9195 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawnLoopU3Ed__21_System_Collections_IEnumerator_Reset_mD6187437270D5A027D64F9D715CFA38A3757B5EA_RuntimeMethod_var)));
	}
}
// System.Object DesireFeed/<SpawnLoop>d__21::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpawnLoopU3Ed__21_System_Collections_IEnumerator_get_Current_mD86C8EC3838B05C0D18F296438E7A79F38B5CE70 (U3CSpawnLoopU3Ed__21_t8666E830ACB28FF5789823EF6C30AF3C7F4C9195 * __this, const RuntimeMethod* method)
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
// System.Void GoogleMapApi/<Map>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMapU3Ed__22__ctor_m7A719ECC67A2D13AE92B61D397AACC243298551A (U3CMapU3Ed__22_t776434FFDEFA59932DC8A0D4004D798E02C396BB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GoogleMapApi/<Map>d__22::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMapU3Ed__22_System_IDisposable_Dispose_m79FF803FB52E968539D959A3241B709B4DAE61CB (U3CMapU3Ed__22_t776434FFDEFA59932DC8A0D4004D798E02C396BB * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GoogleMapApi/<Map>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMapU3Ed__22_MoveNext_m5D59BD98FB16A9A1A527F6784A4CE9F692FA9B35 (U3CMapU3Ed__22_t776434FFDEFA59932DC8A0D4004D798E02C396BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01F1B441381501E7159931B11687EB16BA522F11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral161FC7C069E1E4E32614AF55F9BD2DBBA392DAB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral788A220E8C00A2F11359D49CDEE22514550178B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0C9C0047E2D991162C10E919BF5DC4944259BEA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE18DFE45F06EEBEBD21AEF9B569F077A08A8B120);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEABFCAA024ED8C7E6F27FE0B1F4DDA30E0180FEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF62149395AA5385D3AF63F8CFE972184FEF8FA9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&mapType_tD9FC3CBF342EC9A98935288D99ECB1515FFAB3A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0137;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// url = "https://maps.googleapis.com/maps/api/staticmap?center=" + lat + "," + lon +
		//     "&zoom=" + zoom + "&size=" + mapWidth + "x" + mapHeight + "&scale=" + scale
		//     + "&maptype=" + mapSelected +
		//     "&markers=color:markers=color:red%7C" + lat + ","+ lon + "&key=AIzaSyBfAY9s8VukL8ehfnUmu6V-rwg_wPjknps";
		GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5 * L_4 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral161FC7C069E1E4E32614AF55F9BD2DBBA392DAB7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral161FC7C069E1E4E32614AF55F9BD2DBBA392DAB7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5 * L_8 = V_1;
		NullCheck(L_8);
		double* L_9 = L_8->get_address_of_lat_17();
		String_t* L_10;
		L_10 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_10);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_7;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5 * L_13 = V_1;
		NullCheck(L_13);
		double* L_14 = L_13->get_address_of_lon_18();
		String_t* L_15;
		L_15 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_15);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_12;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral01F1B441381501E7159931B11687EB16BA522F11);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral01F1B441381501E7159931B11687EB16BA522F11);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_16;
		GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5 * L_18 = V_1;
		NullCheck(L_18);
		int32_t* L_19 = L_18->get_address_of_zoom_20();
		String_t* L_20;
		L_20 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_20);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = L_17;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral788A220E8C00A2F11359D49CDEE22514550178B9);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral788A220E8C00A2F11359D49CDEE22514550178B9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = L_21;
		GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5 * L_23 = V_1;
		NullCheck(L_23);
		int32_t* L_24 = L_23->get_address_of_mapWidth_21();
		String_t* L_25;
		L_25 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_25);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = L_22;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = L_26;
		GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5 * L_28 = V_1;
		NullCheck(L_28);
		int32_t* L_29 = L_28->get_address_of_mapHeight_22();
		String_t* L_30;
		L_30 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_29, /*hidden argument*/NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_30);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31 = L_27;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteralE18DFE45F06EEBEBD21AEF9B569F077A08A8B120);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralE18DFE45F06EEBEBD21AEF9B569F077A08A8B120);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = L_31;
		GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5 * L_33 = V_1;
		NullCheck(L_33);
		int32_t* L_34 = L_33->get_address_of_scale_24();
		String_t* L_35;
		L_35 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_34, /*hidden argument*/NULL);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_35);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)L_35);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = L_32;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteralD0C9C0047E2D991162C10E919BF5DC4944259BEA);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteralD0C9C0047E2D991162C10E919BF5DC4944259BEA);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_37 = L_36;
		GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5 * L_38 = V_1;
		NullCheck(L_38);
		int32_t* L_39 = L_38->get_address_of_mapSelected_23();
		RuntimeObject * L_40 = Box(mapType_tD9FC3CBF342EC9A98935288D99ECB1515FFAB3A0_il2cpp_TypeInfo_var, L_39);
		NullCheck(L_40);
		String_t* L_41;
		L_41 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_40);
		*L_39 = *(int32_t*)UnBox(L_40);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_41);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)L_41);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_42 = L_37;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, _stringLiteralEABFCAA024ED8C7E6F27FE0B1F4DDA30E0180FEC);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteralEABFCAA024ED8C7E6F27FE0B1F4DDA30E0180FEC);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_43 = L_42;
		GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5 * L_44 = V_1;
		NullCheck(L_44);
		double* L_45 = L_44->get_address_of_lat_17();
		String_t* L_46;
		L_46 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)L_45, /*hidden argument*/NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_46);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)L_46);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_47 = L_43;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_48 = L_47;
		GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5 * L_49 = V_1;
		NullCheck(L_49);
		double* L_50 = L_49->get_address_of_lon_18();
		String_t* L_51;
		L_51 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)L_50, /*hidden argument*/NULL);
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_51);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)L_51);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_52 = L_48;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, _stringLiteralF62149395AA5385D3AF63F8CFE972184FEF8FA9D);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (String_t*)_stringLiteralF62149395AA5385D3AF63F8CFE972184FEF8FA9D);
		String_t* L_53;
		L_53 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_52, /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_url_16(L_53);
		// WWW www = new WWW(url);
		GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5 * L_54 = V_1;
		NullCheck(L_54);
		String_t* L_55 = L_54->get_url_16();
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_56 = (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 *)il2cpp_codegen_object_new(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		WWW__ctor_mE77AD6C372CC76F48A893C5E2F91A81193A9F8C5(L_56, L_55, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__2_3(L_56);
		// yield return www;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_57 = __this->get_U3CwwwU3E5__2_3();
		__this->set_U3CU3E2__current_1(L_57);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0137:
	{
		__this->set_U3CU3E1__state_0((-1));
		// MapObject.texture = www.texture;
		GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5 * L_58 = V_1;
		NullCheck(L_58);
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_59 = L_58->get_MapObject_6();
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_60 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_60);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_61;
		L_61 = WWW_get_texture_mC23FF88883698F3E6F7BED2733A2DB3B18F788E4(L_60, /*hidden argument*/NULL);
		NullCheck(L_59);
		RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99(L_59, L_61, /*hidden argument*/NULL);
		// MapObject.SetNativeSize();
		GoogleMapApi_tD5C43D8128F9ADC8CD28C1D7C9319D3CBD469FC5 * L_62 = V_1;
		NullCheck(L_62);
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_63 = L_62->get_MapObject_6();
		NullCheck(L_63);
		VirtActionInvoker0::Invoke(45 /* System.Void UnityEngine.UI.Graphic::SetNativeSize() */, L_63);
		// }
		return (bool)0;
	}
}
// System.Object GoogleMapApi/<Map>d__22::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMapU3Ed__22_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFBA6446F12790D67DEECDB1C3CAA82C9D19B293A (U3CMapU3Ed__22_t776434FFDEFA59932DC8A0D4004D798E02C396BB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GoogleMapApi/<Map>d__22::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMapU3Ed__22_System_Collections_IEnumerator_Reset_m70A745DEAE5F20233E940E5D748E2BBEB2F8DC88 (U3CMapU3Ed__22_t776434FFDEFA59932DC8A0D4004D798E02C396BB * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMapU3Ed__22_System_Collections_IEnumerator_Reset_m70A745DEAE5F20233E940E5D748E2BBEB2F8DC88_RuntimeMethod_var)));
	}
}
// System.Object GoogleMapApi/<Map>d__22::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMapU3Ed__22_System_Collections_IEnumerator_get_Current_m2F4D700D07892043FC7A6F958AB1F1554295A10C (U3CMapU3Ed__22_t776434FFDEFA59932DC8A0D4004D798E02C396BB * __this, const RuntimeMethod* method)
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
// System.Void PalmPetMove/<Move>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveU3Ed__1__ctor_m6FCFEC1F1BB280A3F9CB60C03D7915CD774EF0A1 (U3CMoveU3Ed__1_tCC40295A9D20D22457CFDA19D2690EA9908D7203 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PalmPetMove/<Move>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveU3Ed__1_System_IDisposable_Dispose_mD50930D9B1A1BE4D172DE0C6DD1890FB8D410742 (U3CMoveU3Ed__1_tCC40295A9D20D22457CFDA19D2690EA9908D7203 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PalmPetMove/<Move>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveU3Ed__1_MoveNext_m1329E501059FBFAA8CFE42EB1171A8B439756061 (U3CMoveU3Ed__1_tCC40295A9D20D22457CFDA19D2690EA9908D7203 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC53C15EA098684991F8F2C3F89C5829550973A30);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00f9;
			}
			case 2:
			{
				goto IL_01c5;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// GetComponent<Animator>().SetBool("IsMoving", true);
		PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D * L_3 = V_1;
		NullCheck(L_3);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4;
		L_4 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(L_3, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		NullCheck(L_4);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_4, _stringLiteralC53C15EA098684991F8F2C3F89C5829550973A30, (bool)1, /*hidden argument*/NULL);
		// transform.LookAt(new Vector3(vec.x, transform.position.y, vec.z));
		PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D * L_5 = V_1;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_7 = __this->get_address_of_vec_3();
		float L_8 = L_7->get_x_2();
		PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D * L_9 = V_1;
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_13 = __this->get_address_of_vec_3();
		float L_14 = L_13->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), L_8, L_12, L_14, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_LookAt_m996FADE2327B0A4412FF4A5179B8BABD9EB849BA(L_6, L_15, /*hidden argument*/NULL);
		// Vector3 vecter3 = new Vector3(vec.x - transform.position.x, 0, vec.z - transform.position.z) / 100;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_16 = __this->get_address_of_vec_3();
		float L_17 = L_16->get_x_2();
		PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D * L_18 = V_1;
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_22 = __this->get_address_of_vec_3();
		float L_23 = L_22->get_z_4();
		PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D * L_24 = V_1;
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		float L_27 = L_26.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_28), ((float)il2cpp_codegen_subtract((float)L_17, (float)L_21)), (0.0f), ((float)il2cpp_codegen_subtract((float)L_23, (float)L_27)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_28, (100.0f), /*hidden argument*/NULL);
		__this->set_U3Cvecter3U3E5__2_5(L_29);
		goto IL_0100;
	}

IL_00c4:
	{
		// transform.position += vecter3;
		PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D * L_30 = V_1;
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_30, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32 = L_31;
		NullCheck(L_32);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_32, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = __this->get_U3Cvecter3U3E5__2_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_33, L_34, /*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_32, L_35, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.01f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_36 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_36, (0.00999999978f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_36);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00f9:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0100:
	{
		// while (Mathf.Abs(transform.position.x - vec.x) > 0.1f && Mathf.Abs(transform.position.z - vec.z) > 0.1f)
		PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D * L_37 = V_1;
		NullCheck(L_37);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_37, /*hidden argument*/NULL);
		NullCheck(L_38);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_38, /*hidden argument*/NULL);
		float L_40 = L_39.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_41 = __this->get_address_of_vec_3();
		float L_42 = L_41->get_x_2();
		float L_43;
		L_43 = fabsf(((float)il2cpp_codegen_subtract((float)L_40, (float)L_42)));
		if ((!(((float)L_43) > ((float)(0.100000001f)))))
		{
			goto IL_0153;
		}
	}
	{
		PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D * L_44 = V_1;
		NullCheck(L_44);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
		L_45 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_44, /*hidden argument*/NULL);
		NullCheck(L_45);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_45, /*hidden argument*/NULL);
		float L_47 = L_46.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_48 = __this->get_address_of_vec_3();
		float L_49 = L_48->get_z_4();
		float L_50;
		L_50 = fabsf(((float)il2cpp_codegen_subtract((float)L_47, (float)L_49)));
		if ((((float)L_50) > ((float)(0.100000001f))))
		{
			goto IL_00c4;
		}
	}

IL_0153:
	{
		// vecter3 = new Vector3(0,vec.y - transform.position.y, 0) / 100;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_51 = __this->get_address_of_vec_3();
		float L_52 = L_51->get_y_3();
		PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D * L_53 = V_1;
		NullCheck(L_53);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_54;
		L_54 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_53, /*hidden argument*/NULL);
		NullCheck(L_54);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_54, /*hidden argument*/NULL);
		float L_56 = L_55.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_57), (0.0f), ((float)il2cpp_codegen_subtract((float)L_52, (float)L_56)), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
		L_58 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_57, (100.0f), /*hidden argument*/NULL);
		__this->set_U3Cvecter3U3E5__2_5(L_58);
		goto IL_01cc;
	}

IL_0190:
	{
		// transform.position += vecter3;
		PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D * L_59 = V_1;
		NullCheck(L_59);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60;
		L_60 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_59, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_61 = L_60;
		NullCheck(L_61);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
		L_62 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_61, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63 = __this->get_U3Cvecter3U3E5__2_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64;
		L_64 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_62, L_63, /*hidden argument*/NULL);
		NullCheck(L_61);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_61, L_64, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.01f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_65 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_65, (0.00999999978f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_65);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_01c5:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_01cc:
	{
		// while(transform.position.y - vec.y > 0.1f)
		PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D * L_66 = V_1;
		NullCheck(L_66);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_67;
		L_67 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_66, /*hidden argument*/NULL);
		NullCheck(L_67);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68;
		L_68 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_67, /*hidden argument*/NULL);
		float L_69 = L_68.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_70 = __this->get_address_of_vec_3();
		float L_71 = L_70->get_y_3();
		if ((((float)((float)il2cpp_codegen_subtract((float)L_69, (float)L_71))) > ((float)(0.100000001f))))
		{
			goto IL_0190;
		}
	}
	{
		// transform.position = vec;
		PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D * L_72 = V_1;
		NullCheck(L_72);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_73;
		L_73 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_72, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74 = __this->get_vec_3();
		NullCheck(L_73);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_73, L_74, /*hidden argument*/NULL);
		// transform.rotation = rotation;
		PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D * L_75 = V_1;
		NullCheck(L_75);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_76;
		L_76 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_75, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_77 = __this->get_rotation_4();
		NullCheck(L_76);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_76, L_77, /*hidden argument*/NULL);
		// transform.Rotate(new Vector3(0, -180, 0));
		PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D * L_78 = V_1;
		NullCheck(L_78);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_79;
		L_79 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_78, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_80;
		memset((&L_80), 0, sizeof(L_80));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_80), (0.0f), (-180.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_79);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_79, L_80, /*hidden argument*/NULL);
		// GetComponent<Animator>().SetBool("IsMoving", false);
		PalmPetMove_tDB5BA98354A047CDB895A451F8703B518F3CF97D * L_81 = V_1;
		NullCheck(L_81);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_82;
		L_82 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(L_81, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		NullCheck(L_82);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_82, _stringLiteralC53C15EA098684991F8F2C3F89C5829550973A30, (bool)0, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object PalmPetMove/<Move>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMoveU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDE216550A40F14FB465CDD736A1263EDE72738E7 (U3CMoveU3Ed__1_tCC40295A9D20D22457CFDA19D2690EA9908D7203 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PalmPetMove/<Move>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveU3Ed__1_System_Collections_IEnumerator_Reset_mAAE510F4500BE7D85A493534F6E54A2B1B06433C (U3CMoveU3Ed__1_tCC40295A9D20D22457CFDA19D2690EA9908D7203 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoveU3Ed__1_System_Collections_IEnumerator_Reset_mAAE510F4500BE7D85A493534F6E54A2B1B06433C_RuntimeMethod_var)));
	}
}
// System.Object PalmPetMove/<Move>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMoveU3Ed__1_System_Collections_IEnumerator_get_Current_m346ACFE739A26BEAC82CB667D720F755E33E26B1 (U3CMoveU3Ed__1_tCC40295A9D20D22457CFDA19D2690EA9908D7203 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pet_set_Name_m0060E5E02AB4A98D04AE581A485401ABBDA2D6C4_inline (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pet_set_Type_mE22E558AA4C2DFE71D63802344807EA171BED087_inline (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Type { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pet_set_Hungry_mA99F39215A0CAF1CF114DDD410A4E8951EDBDCF8_inline (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Hungry { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CHungryU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pet_set_Defecation_m7FE4AF801669BC1D971D595AFFA864B43226913D_inline (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Defecation { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CDefecationU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pet_set_Walk_m1C688449B596AED93831FD6DA818C07DD0931592_inline (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Walk { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CWalkU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pet_set_Love_m38B32408A6A2658BDC1BD9F4371CCA13F3B25530_inline (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Love { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CLoveU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSessionStateChangedEventArgs_get_state_mDFCCADECEFE9356E4246B9BF912157F3EDD88796_inline (ARSessionStateChangedEventArgs_tF14FF2D76D721B74F80297911644222B2DF3FC06 * __this, const RuntimeMethod* method)
{
	{
		// public ARSessionState state { get; private set; }
		int32_t L_0 = __this->get_U3CstateU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * ARPlanesChangedEventArgs_get_added_mD0CA0FB88C9F669580ED4BE0C9A3DA6E1333DA07_inline (ARPlanesChangedEventArgs_tBF7407003D3B2F49087DBED7DEEBD8803466E6CF * __this, const RuntimeMethod* method)
{
	{
		// public List<ARPlane> added { get; private set; }
		List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * L_0 = __this->get_U3CaddedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Pet_get_Name_m6CE1E76076DD5392A118FE224FDF8A358F923734_inline (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Pet_get_Hungry_mB42149A5E6BF8119585321E83301EB74956AFAD2_inline (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, const RuntimeMethod* method)
{
	{
		// public int Hungry { get; set; }
		int32_t L_0 = __this->get_U3CHungryU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Pet_get_Defecation_m42CC90F703D02177FD4A0165C853078C77A645B7_inline (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, const RuntimeMethod* method)
{
	{
		// public int Defecation { get; set; }
		int32_t L_0 = __this->get_U3CDefecationU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Pet_get_Walk_m631AC8BBEB26EACEA0AA015C0C62818B13D8B862_inline (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, const RuntimeMethod* method)
{
	{
		// public int Walk { get; set; }
		int32_t L_0 = __this->get_U3CWalkU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Pet_get_Love_m111D071DAA925AEE549B8D40684841D35251679B_inline (Pet_t39327B0366AE2C03902F2732D5EE1E5558BB2346 * __this, const RuntimeMethod* method)
{
	{
		// public int Love { get; set; }
		int32_t L_0 = __this->get_U3CLoveU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method)
{
	{
		// return m_Text;
		String_t* L_0 = __this->get_m_Text_38();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Dropdown_get_itemText_m89586E53171746D3BD16F8EBA0C5A814006435C1_inline (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, const RuntimeMethod* method)
{
	{
		// public Text itemText { get { return m_ItemText; } set { m_ItemText = value; RefreshShownValue(); } }
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_m_ItemText_23();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
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
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_gshared_inline (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* L_2 = (ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA*)__this->get__items_1();
		int32_t L_3 = ___index0;
		ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA*)L_2, (int32_t)L_3);
		return (ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E )L_4;
	}
}
