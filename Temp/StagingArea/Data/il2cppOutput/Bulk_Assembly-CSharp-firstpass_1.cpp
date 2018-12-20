#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
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

// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Transform>
struct IEnumerable_1_t2580218810;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t1812449865;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t777473367;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Exception
struct Exception_t;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.Animation
struct Animation_t3648466861;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366;
// UnityEngine.Animator
struct Animator_t434523843;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Collider
struct Collider_t1773347010;
// UnityEngine.Collider2D
struct Collider2D_t2806799626;
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t1693969295;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.GUIText
struct GUIText_t402233326;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.Joint
struct Joint_t1358886274;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t1068524471;
// UnityEngine.Light
struct Light_t3756812086;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t3972987605;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_t2007329276;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.ParticleSystem
struct ParticleSystem_t1800779281;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t3089334924;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.RenderTexture
struct RenderTexture_t2108887433;
// UnityEngine.Rigidbody
struct Rigidbody_t3916780224;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t939494601;
// UnityEngine.Shader
struct Shader_t4151988712;
// UnityEngine.SpringJoint
struct SpringJoint_t1912369980;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.Texture
struct Texture_t3661962703;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Transform[]
struct TransformU5BU5D_t807237628;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t1314943911;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t1634918743;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;
// UnityStandardAssets.ImageEffects.ImageEffectBase
struct ImageEffectBase_t2026006575;
// UnityStandardAssets.ImageEffects.PostEffectsBase
struct PostEffectsBase_t2404315739;
// UnityStandardAssets.ImageEffects.Triangles
struct Triangles_t2090031681;
// UnityStandardAssets.ImageEffects.Twirl
struct Twirl_t2760508880;
// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration
struct VignetteAndChromaticAberration_t3308099924;
// UnityStandardAssets.ImageEffects.Vortex
struct Vortex_t3420399868;
// UnityStandardAssets.Utility.ActivateTrigger
struct ActivateTrigger_t3349759092;
// UnityStandardAssets.Utility.AutoMobileShaderSwitch
struct AutoMobileShaderSwitch_t568447889;
// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition
struct ReplacementDefinition_t2693741842;
// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition[]
struct ReplacementDefinitionU5BU5D_t2596446823;
// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementList
struct ReplacementList_t1887104210;
// UnityStandardAssets.Utility.AutoMoveAndRotate
struct AutoMoveAndRotate_t2437913015;
// UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace
struct Vector3andSpace_t219844479;
// UnityStandardAssets.Utility.CameraRefocus
struct CameraRefocus_t4263235746;
// UnityStandardAssets.Utility.CurveControlledBob
struct CurveControlledBob_t2679313829;
// UnityStandardAssets.Utility.DragRigidbody
struct DragRigidbody_t1600652016;
// UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0
struct U3CDragObjectU3Ec__Iterator0_t4151609119;
// UnityStandardAssets.Utility.DynamicShadowSettings
struct DynamicShadowSettings_t59119858;
// UnityStandardAssets.Utility.FOVKick
struct FOVKick_t120370150;
// UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator1
struct U3CFOVKickDownU3Ec__Iterator1_t1440840980;
// UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator0
struct U3CFOVKickUpU3Ec__Iterator0_t3738408313;
// UnityStandardAssets.Utility.FPSCounter
struct FPSCounter_t2351221284;
// UnityStandardAssets.Utility.FollowTarget
struct FollowTarget_t166153614;
// UnityStandardAssets.Utility.LerpControlledBob
struct LerpControlledBob_t1895875871;
// UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator0
struct U3CDoBobCycleU3Ec__Iterator0_t1149538828;
// UnityStandardAssets.Utility.ObjectResetter
struct ObjectResetter_t639177103;
// UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator0
struct U3CResetCoroutineU3Ec__Iterator0_t3232105836;
// UnityStandardAssets.Utility.ParticleSystemDestroyer
struct ParticleSystemDestroyer_t558680695;
// UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator0
struct U3CStartU3Ec__Iterator0_t980021917;
// UnityStandardAssets.Utility.PlatformSpecificContent
struct PlatformSpecificContent_t1404549723;
// UnityStandardAssets.Utility.SimpleActivatorMenu
struct SimpleActivatorMenu_t1387811551;
// UnityStandardAssets.Utility.SimpleMouseRotator
struct SimpleMouseRotator_t2364742953;
// UnityStandardAssets.Utility.SmoothFollow
struct SmoothFollow_t4204731361;
// UnityStandardAssets.Utility.TimedObjectActivator
struct TimedObjectActivator_t1846709985;
// UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator0
struct U3CActivateU3Ec__Iterator0_t2664723090;
// UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator1
struct U3CDeactivateU3Ec__Iterator1_t730025274;
// UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator2
struct U3CReloadLevelU3Ec__Iterator2_t2784493974;
// UnityStandardAssets.Utility.TimedObjectActivator/Entries
struct Entries_t3168066469;
// UnityStandardAssets.Utility.TimedObjectActivator/Entry
struct Entry_t2725803170;
// UnityStandardAssets.Utility.TimedObjectActivator/Entry[]
struct EntryU5BU5D_t3574483607;
// UnityStandardAssets.Utility.TimedObjectDestructor
struct TimedObjectDestructor_t3438860414;
// UnityStandardAssets.Utility.WaypointCircuit
struct WaypointCircuit_t445075330;
// UnityStandardAssets.Utility.WaypointCircuit/WaypointList
struct WaypointList_t2584574554;
// UnityStandardAssets.Utility.WaypointProgressTracker
struct WaypointProgressTracker_t1841386251;
// UnityStandardAssets.Vehicles.Ball.Ball
struct Ball_t2378314638;
// UnityStandardAssets.Vehicles.Ball.BallUserControl
struct BallUserControl_t2574698008;
// UnityStandardAssets._2D.Camera2DFollow
struct Camera2DFollow_t3335230098;
// UnityStandardAssets._2D.CameraFollow
struct CameraFollow_t1399352937;
// UnityStandardAssets._2D.Platformer2DUserControl
struct Platformer2DUserControl_t4130129562;
// UnityStandardAssets._2D.PlatformerCharacter2D
struct PlatformerCharacter2D_t675295753;
// UnityStandardAssets._2D.Restarter
struct Restarter_t269523250;

extern RuntimeClass* AnimationCurve_t3046754366_il2cpp_TypeInfo_var;
extern RuntimeClass* Behaviour_t1437897464_il2cpp_TypeInfo_var;
extern RuntimeClass* CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Entries_t3168066469_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObjectU5BU5D_t3328599146_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern RuntimeClass* Graphics_t783367614_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyframeU5BU5D_t1068524471_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t777473367_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* MeshU5BU5D_t3972987605_il2cpp_TypeInfo_var;
extern RuntimeClass* Mesh_t3648964284_il2cpp_TypeInfo_var;
extern RuntimeClass* MonoBehaviourU5BU5D_t2007329276_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Physics2D_t1528932956_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern RuntimeClass* ReplacementDefinitionU5BU5D_t2596446823_il2cpp_TypeInfo_var;
extern RuntimeClass* SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* TransformU5BU5D_t807237628_il2cpp_TypeInfo_var;
extern RuntimeClass* Transform_t3600365921_il2cpp_TypeInfo_var;
extern RuntimeClass* Triangles_t2090031681_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CActivateU3Ec__Iterator0_t2664723090_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CDeactivateU3Ec__Iterator1_t730025274_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CDoBobCycleU3Ec__Iterator0_t1149538828_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CDragObjectU3Ec__Iterator0_t4151609119_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CFOVKickDownU3Ec__Iterator1_t1440840980_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CFOVKickUpU3Ec__Iterator0_t3738408313_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CReloadLevelU3Ec__Iterator2_t2784493974_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CResetCoroutineU3Ec__Iterator0_t3232105836_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CStartU3Ec__Iterator0_t980021917_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector4_t3319028937_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForFixedUpdate_t1634918743_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForSeconds_t1699091251_il2cpp_TypeInfo_var;
extern RuntimeClass* WaypointList_t2584574554_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1183259238;
extern String_t* _stringLiteral1396832867;
extern String_t* _stringLiteral1596491694;
extern String_t* _stringLiteral1624685711;
extern String_t* _stringLiteral1636126115;
extern String_t* _stringLiteral1648826855;
extern String_t* _stringLiteral1767284560;
extern String_t* _stringLiteral1772571274;
extern String_t* _stringLiteral1828639942;
extern String_t* _stringLiteral1930566815;
extern String_t* _stringLiteral2140779047;
extern String_t* _stringLiteral2154097237;
extern String_t* _stringLiteral2261822918;
extern String_t* _stringLiteral2374246869;
extern String_t* _stringLiteral2383749048;
extern String_t* _stringLiteral2859884931;
extern String_t* _stringLiteral2984908384;
extern String_t* _stringLiteral3020016099;
extern String_t* _stringLiteral3076344093;
extern String_t* _stringLiteral3128541729;
extern String_t* _stringLiteral3128803744;
extern String_t* _stringLiteral3326640515;
extern String_t* _stringLiteral3403559637;
extern String_t* _stringLiteral3483455937;
extern String_t* _stringLiteral3489794435;
extern String_t* _stringLiteral3556802456;
extern String_t* _stringLiteral3560662707;
extern String_t* _stringLiteral3952415593;
extern String_t* _stringLiteral4033327350;
extern String_t* _stringLiteral4223137674;
extern String_t* _stringLiteral674676282;
extern String_t* _stringLiteral865230867;
extern const RuntimeMethod* Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisBall_t2378314638_m1039029406_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisCamera_t4157153871_m1557787507_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisPlatformerCharacter2D_t675295753_m828033776_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody2D_t939494601_m2731142064_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody_t3916780224_m4049400462_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisText_t1901882714_m1618486294_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisParticleSystem_t1800779281_m2343960447_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisTransform_t3600365921_m438280950_RuntimeMethod_var;
extern const RuntimeMethod* FOVKick_CheckStatus_m1684880090_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisRigidbody_t3916780224_m3538654758_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisSpringJoint_t1912369980_m3688791583_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisAnimation_t3648466861_m4035734369_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_m11885848_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3073653982_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m2517112845_RuntimeMethod_var;
extern const RuntimeMethod* U3CActivateU3Ec__Iterator0_Reset_m3442277957_RuntimeMethod_var;
extern const RuntimeMethod* U3CDeactivateU3Ec__Iterator1_Reset_m2891711865_RuntimeMethod_var;
extern const RuntimeMethod* U3CDoBobCycleU3Ec__Iterator0_Reset_m2840471097_RuntimeMethod_var;
extern const RuntimeMethod* U3CDragObjectU3Ec__Iterator0_Reset_m2748003906_RuntimeMethod_var;
extern const RuntimeMethod* U3CFOVKickDownU3Ec__Iterator1_Reset_m3592463043_RuntimeMethod_var;
extern const RuntimeMethod* U3CFOVKickUpU3Ec__Iterator0_Reset_m1175024232_RuntimeMethod_var;
extern const RuntimeMethod* U3CReloadLevelU3Ec__Iterator2_Reset_m3942390806_RuntimeMethod_var;
extern const RuntimeMethod* U3CResetCoroutineU3Ec__Iterator0_Reset_m417813674_RuntimeMethod_var;
extern const RuntimeMethod* U3CStartU3Ec__Iterator0_Reset_m2462481942_RuntimeMethod_var;
extern const uint32_t ActivateTrigger_DoActivateTrigger_m3469673119_MetadataUsageId;
extern const uint32_t AutoMoveAndRotate_Update_m1577675347_MetadataUsageId;
extern const uint32_t BallUserControl_Awake_m1140098280_MetadataUsageId;
extern const uint32_t BallUserControl_Update_m945229538_MetadataUsageId;
extern const uint32_t Ball_Move_m1246368361_MetadataUsageId;
extern const uint32_t Ball_Start_m3416639561_MetadataUsageId;
extern const uint32_t Camera2DFollow_Start_m622883919_MetadataUsageId;
extern const uint32_t Camera2DFollow_Update_m1162929075_MetadataUsageId;
extern const uint32_t CameraFollow_Awake_m651079590_MetadataUsageId;
extern const uint32_t CameraFollow_CheckXMargin_m1181846024_MetadataUsageId;
extern const uint32_t CameraFollow_CheckYMargin_m1181844937_MetadataUsageId;
extern const uint32_t CameraFollow_TrackPlayer_m3573657769_MetadataUsageId;
extern const uint32_t CameraRefocus_GetFocusPoint_m3791730473_MetadataUsageId;
extern const uint32_t CurveControlledBob__ctor_m3636495103_MetadataUsageId;
extern const uint32_t DragRigidbody_DragObject_m3291736428_MetadataUsageId;
extern const uint32_t DragRigidbody_FindCamera_m148666113_MetadataUsageId;
extern const uint32_t DragRigidbody_Update_m1871936335_MetadataUsageId;
extern const uint32_t DynamicShadowSettings_Update_m382736418_MetadataUsageId;
extern const uint32_t FOVKick_CheckStatus_m1684880090_MetadataUsageId;
extern const uint32_t FOVKick_FOVKickDown_m1264536566_MetadataUsageId;
extern const uint32_t FOVKick_FOVKickUp_m3024089749_MetadataUsageId;
extern const uint32_t FPSCounter_Start_m2838910111_MetadataUsageId;
extern const uint32_t FPSCounter_Update_m2497525555_MetadataUsageId;
extern const uint32_t FollowTarget_LateUpdate_m1906411353_MetadataUsageId;
extern const uint32_t LerpControlledBob_DoBobCycle_m1177640891_MetadataUsageId;
extern const uint32_t ObjectResetter_ResetCoroutine_m3995850687_MetadataUsageId;
extern const uint32_t ObjectResetter_Start_m1255826771_MetadataUsageId;
extern const uint32_t ParticleSystemDestroyer_Start_m2922139650_MetadataUsageId;
extern const uint32_t PlatformSpecificContent_EnableContent_m808853508_MetadataUsageId;
extern const uint32_t PlatformSpecificContent__ctor_m412689550_MetadataUsageId;
extern const uint32_t Platformer2DUserControl_Awake_m1116790156_MetadataUsageId;
extern const uint32_t Platformer2DUserControl_FixedUpdate_m3289450078_MetadataUsageId;
extern const uint32_t Platformer2DUserControl_Update_m3606614023_MetadataUsageId;
extern const uint32_t PlatformerCharacter2D_Awake_m4126597186_MetadataUsageId;
extern const uint32_t PlatformerCharacter2D_FixedUpdate_m1070239257_MetadataUsageId;
extern const uint32_t PlatformerCharacter2D_Move_m755954514_MetadataUsageId;
extern const uint32_t ReplacementList__ctor_m786158475_MetadataUsageId;
extern const uint32_t Restarter_OnTriggerEnter2D_m388320205_MetadataUsageId;
extern const uint32_t SimpleMouseRotator_Update_m843728997_MetadataUsageId;
extern const uint32_t SimpleMouseRotator__ctor_m2857185311_MetadataUsageId;
extern const uint32_t SmoothFollow_LateUpdate_m1319302199_MetadataUsageId;
extern const uint32_t TimedObjectActivator_Activate_m3597596254_MetadataUsageId;
extern const uint32_t TimedObjectActivator_Awake_m1757876145_MetadataUsageId;
extern const uint32_t TimedObjectActivator_Deactivate_m98048501_MetadataUsageId;
extern const uint32_t TimedObjectActivator_ReloadLevel_m3297458802_MetadataUsageId;
extern const uint32_t TimedObjectActivator__ctor_m928140018_MetadataUsageId;
extern const uint32_t TimedObjectDestructor_Awake_m3496015425_MetadataUsageId;
extern const uint32_t TimedObjectDestructor_DestroyNow_m4118445488_MetadataUsageId;
extern const uint32_t Triangles_Cleanup_m1309207721_MetadataUsageId;
extern const uint32_t Triangles_GetMesh_m1896089306_MetadataUsageId;
extern const uint32_t Triangles_GetMeshes_m3491158630_MetadataUsageId;
extern const uint32_t Triangles_HasMeshes_m1063919596_MetadataUsageId;
extern const uint32_t U3CActivateU3Ec__Iterator0_MoveNext_m3298973706_MetadataUsageId;
extern const uint32_t U3CActivateU3Ec__Iterator0_Reset_m3442277957_MetadataUsageId;
extern const uint32_t U3CDeactivateU3Ec__Iterator1_MoveNext_m4231082803_MetadataUsageId;
extern const uint32_t U3CDeactivateU3Ec__Iterator1_Reset_m2891711865_MetadataUsageId;
extern const uint32_t U3CDoBobCycleU3Ec__Iterator0_MoveNext_m4171840518_MetadataUsageId;
extern const uint32_t U3CDoBobCycleU3Ec__Iterator0_Reset_m2840471097_MetadataUsageId;
extern const uint32_t U3CDragObjectU3Ec__Iterator0_MoveNext_m825755750_MetadataUsageId;
extern const uint32_t U3CDragObjectU3Ec__Iterator0_Reset_m2748003906_MetadataUsageId;
extern const uint32_t U3CFOVKickDownU3Ec__Iterator1_MoveNext_m1069908683_MetadataUsageId;
extern const uint32_t U3CFOVKickDownU3Ec__Iterator1_Reset_m3592463043_MetadataUsageId;
extern const uint32_t U3CFOVKickUpU3Ec__Iterator0_MoveNext_m3370649433_MetadataUsageId;
extern const uint32_t U3CFOVKickUpU3Ec__Iterator0_Reset_m1175024232_MetadataUsageId;
extern const uint32_t U3CReloadLevelU3Ec__Iterator2_MoveNext_m4159166444_MetadataUsageId;
extern const uint32_t U3CReloadLevelU3Ec__Iterator2_Reset_m3942390806_MetadataUsageId;
extern const uint32_t U3CResetCoroutineU3Ec__Iterator0_MoveNext_m2597113671_MetadataUsageId;
extern const uint32_t U3CResetCoroutineU3Ec__Iterator0_Reset_m417813674_MetadataUsageId;
extern const uint32_t U3CStartU3Ec__Iterator0_MoveNext_m73866544_MetadataUsageId;
extern const uint32_t U3CStartU3Ec__Iterator0_Reset_m2462481942_MetadataUsageId;
extern const uint32_t VignetteAndChromaticAberration_OnRenderImage_m4061427208_MetadataUsageId;
extern const uint32_t WaypointCircuit_CachePositionsAndDistances_m983282490_MetadataUsageId;
extern const uint32_t WaypointCircuit_CatmullRom_m2378689349_MetadataUsageId;
extern const uint32_t WaypointCircuit_GetRoutePoint_m785398240_MetadataUsageId;
extern const uint32_t WaypointCircuit_GetRoutePosition_m1956640709_MetadataUsageId;
extern const uint32_t WaypointCircuit__ctor_m239928079_MetadataUsageId;
extern const uint32_t WaypointList__ctor_m2673417506_MetadataUsageId;
extern const uint32_t WaypointProgressTracker_OnDrawGizmos_m2504516940_MetadataUsageId;
extern const uint32_t WaypointProgressTracker_Start_m1081584341_MetadataUsageId;
extern const uint32_t WaypointProgressTracker_Update_m572671677_MetadataUsageId;
struct AnimationCurve_t3046754366_marshaled_com;

struct Int32U5BU5D_t385246372;
struct SingleU5BU5D_t1444911251;
struct Collider2DU5BU5D_t1693969295;
struct GameObjectU5BU5D_t3328599146;
struct KeyframeU5BU5D_t1068524471;
struct MeshU5BU5D_t3972987605;
struct MonoBehaviourU5BU5D_t2007329276;
struct ParticleSystemU5BU5D_t3089334924;
struct TransformU5BU5D_t807237628;
struct Vector2U5BU5D_t1457185986;
struct Vector3U5BU5D_t1718750761;
struct ReplacementDefinitionU5BU5D_t2596446823;
struct EntryU5BU5D_t3574483607;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T777473367_H
#define LIST_1_T777473367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct  List_1_t777473367  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t807237628* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____items_1)); }
	inline TransformU5BU5D_t807237628* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t807237628** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t807237628* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t777473367_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	TransformU5BU5D_t807237628* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t777473367_StaticFields, ___EmptyArray_4)); }
	inline TransformU5BU5D_t807237628* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline TransformU5BU5D_t807237628** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(TransformU5BU5D_t807237628* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T777473367_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef TRIANGLES_T2090031681_H
#define TRIANGLES_T2090031681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Triangles
struct  Triangles_t2090031681  : public RuntimeObject
{
public:

public:
};

struct Triangles_t2090031681_StaticFields
{
public:
	// UnityEngine.Mesh[] UnityStandardAssets.ImageEffects.Triangles::meshes
	MeshU5BU5D_t3972987605* ___meshes_0;
	// System.Int32 UnityStandardAssets.ImageEffects.Triangles::currentTris
	int32_t ___currentTris_1;

public:
	inline static int32_t get_offset_of_meshes_0() { return static_cast<int32_t>(offsetof(Triangles_t2090031681_StaticFields, ___meshes_0)); }
	inline MeshU5BU5D_t3972987605* get_meshes_0() const { return ___meshes_0; }
	inline MeshU5BU5D_t3972987605** get_address_of_meshes_0() { return &___meshes_0; }
	inline void set_meshes_0(MeshU5BU5D_t3972987605* value)
	{
		___meshes_0 = value;
		Il2CppCodeGenWriteBarrier((&___meshes_0), value);
	}

	inline static int32_t get_offset_of_currentTris_1() { return static_cast<int32_t>(offsetof(Triangles_t2090031681_StaticFields, ___currentTris_1)); }
	inline int32_t get_currentTris_1() const { return ___currentTris_1; }
	inline int32_t* get_address_of_currentTris_1() { return &___currentTris_1; }
	inline void set_currentTris_1(int32_t value)
	{
		___currentTris_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIANGLES_T2090031681_H
#ifndef REPLACEMENTDEFINITION_T2693741842_H
#define REPLACEMENTDEFINITION_T2693741842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition
struct  ReplacementDefinition_t2693741842  : public RuntimeObject
{
public:
	// UnityEngine.Shader UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition::original
	Shader_t4151988712 * ___original_0;
	// UnityEngine.Shader UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition::replacement
	Shader_t4151988712 * ___replacement_1;

public:
	inline static int32_t get_offset_of_original_0() { return static_cast<int32_t>(offsetof(ReplacementDefinition_t2693741842, ___original_0)); }
	inline Shader_t4151988712 * get_original_0() const { return ___original_0; }
	inline Shader_t4151988712 ** get_address_of_original_0() { return &___original_0; }
	inline void set_original_0(Shader_t4151988712 * value)
	{
		___original_0 = value;
		Il2CppCodeGenWriteBarrier((&___original_0), value);
	}

	inline static int32_t get_offset_of_replacement_1() { return static_cast<int32_t>(offsetof(ReplacementDefinition_t2693741842, ___replacement_1)); }
	inline Shader_t4151988712 * get_replacement_1() const { return ___replacement_1; }
	inline Shader_t4151988712 ** get_address_of_replacement_1() { return &___replacement_1; }
	inline void set_replacement_1(Shader_t4151988712 * value)
	{
		___replacement_1 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REPLACEMENTDEFINITION_T2693741842_H
#ifndef REPLACEMENTLIST_T1887104210_H
#define REPLACEMENTLIST_T1887104210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementList
struct  ReplacementList_t1887104210  : public RuntimeObject
{
public:
	// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition[] UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementList::items
	ReplacementDefinitionU5BU5D_t2596446823* ___items_0;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(ReplacementList_t1887104210, ___items_0)); }
	inline ReplacementDefinitionU5BU5D_t2596446823* get_items_0() const { return ___items_0; }
	inline ReplacementDefinitionU5BU5D_t2596446823** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(ReplacementDefinitionU5BU5D_t2596446823* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((&___items_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REPLACEMENTLIST_T1887104210_H
#ifndef FOVKICK_T120370150_H
#define FOVKICK_T120370150_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.FOVKick
struct  FOVKick_t120370150  : public RuntimeObject
{
public:
	// UnityEngine.Camera UnityStandardAssets.Utility.FOVKick::Camera
	Camera_t4157153871 * ___Camera_0;
	// System.Single UnityStandardAssets.Utility.FOVKick::originalFov
	float ___originalFov_1;
	// System.Single UnityStandardAssets.Utility.FOVKick::FOVIncrease
	float ___FOVIncrease_2;
	// System.Single UnityStandardAssets.Utility.FOVKick::TimeToIncrease
	float ___TimeToIncrease_3;
	// System.Single UnityStandardAssets.Utility.FOVKick::TimeToDecrease
	float ___TimeToDecrease_4;
	// UnityEngine.AnimationCurve UnityStandardAssets.Utility.FOVKick::IncreaseCurve
	AnimationCurve_t3046754366 * ___IncreaseCurve_5;

public:
	inline static int32_t get_offset_of_Camera_0() { return static_cast<int32_t>(offsetof(FOVKick_t120370150, ___Camera_0)); }
	inline Camera_t4157153871 * get_Camera_0() const { return ___Camera_0; }
	inline Camera_t4157153871 ** get_address_of_Camera_0() { return &___Camera_0; }
	inline void set_Camera_0(Camera_t4157153871 * value)
	{
		___Camera_0 = value;
		Il2CppCodeGenWriteBarrier((&___Camera_0), value);
	}

	inline static int32_t get_offset_of_originalFov_1() { return static_cast<int32_t>(offsetof(FOVKick_t120370150, ___originalFov_1)); }
	inline float get_originalFov_1() const { return ___originalFov_1; }
	inline float* get_address_of_originalFov_1() { return &___originalFov_1; }
	inline void set_originalFov_1(float value)
	{
		___originalFov_1 = value;
	}

	inline static int32_t get_offset_of_FOVIncrease_2() { return static_cast<int32_t>(offsetof(FOVKick_t120370150, ___FOVIncrease_2)); }
	inline float get_FOVIncrease_2() const { return ___FOVIncrease_2; }
	inline float* get_address_of_FOVIncrease_2() { return &___FOVIncrease_2; }
	inline void set_FOVIncrease_2(float value)
	{
		___FOVIncrease_2 = value;
	}

	inline static int32_t get_offset_of_TimeToIncrease_3() { return static_cast<int32_t>(offsetof(FOVKick_t120370150, ___TimeToIncrease_3)); }
	inline float get_TimeToIncrease_3() const { return ___TimeToIncrease_3; }
	inline float* get_address_of_TimeToIncrease_3() { return &___TimeToIncrease_3; }
	inline void set_TimeToIncrease_3(float value)
	{
		___TimeToIncrease_3 = value;
	}

	inline static int32_t get_offset_of_TimeToDecrease_4() { return static_cast<int32_t>(offsetof(FOVKick_t120370150, ___TimeToDecrease_4)); }
	inline float get_TimeToDecrease_4() const { return ___TimeToDecrease_4; }
	inline float* get_address_of_TimeToDecrease_4() { return &___TimeToDecrease_4; }
	inline void set_TimeToDecrease_4(float value)
	{
		___TimeToDecrease_4 = value;
	}

	inline static int32_t get_offset_of_IncreaseCurve_5() { return static_cast<int32_t>(offsetof(FOVKick_t120370150, ___IncreaseCurve_5)); }
	inline AnimationCurve_t3046754366 * get_IncreaseCurve_5() const { return ___IncreaseCurve_5; }
	inline AnimationCurve_t3046754366 ** get_address_of_IncreaseCurve_5() { return &___IncreaseCurve_5; }
	inline void set_IncreaseCurve_5(AnimationCurve_t3046754366 * value)
	{
		___IncreaseCurve_5 = value;
		Il2CppCodeGenWriteBarrier((&___IncreaseCurve_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOVKICK_T120370150_H
#ifndef U3CFOVKICKDOWNU3EC__ITERATOR1_T1440840980_H
#define U3CFOVKICKDOWNU3EC__ITERATOR1_T1440840980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator1
struct  U3CFOVKickDownU3Ec__Iterator1_t1440840980  : public RuntimeObject
{
public:
	// System.Single UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator1::<t>__0
	float ___U3CtU3E__0_0;
	// UnityStandardAssets.Utility.FOVKick UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator1::$this
	FOVKick_t120370150 * ___U24this_1;
	// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator1::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator1::$disposing
	bool ___U24disposing_3;
	// System.Int32 UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator1::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CtU3E__0_0() { return static_cast<int32_t>(offsetof(U3CFOVKickDownU3Ec__Iterator1_t1440840980, ___U3CtU3E__0_0)); }
	inline float get_U3CtU3E__0_0() const { return ___U3CtU3E__0_0; }
	inline float* get_address_of_U3CtU3E__0_0() { return &___U3CtU3E__0_0; }
	inline void set_U3CtU3E__0_0(float value)
	{
		___U3CtU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CFOVKickDownU3Ec__Iterator1_t1440840980, ___U24this_1)); }
	inline FOVKick_t120370150 * get_U24this_1() const { return ___U24this_1; }
	inline FOVKick_t120370150 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(FOVKick_t120370150 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CFOVKickDownU3Ec__Iterator1_t1440840980, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CFOVKickDownU3Ec__Iterator1_t1440840980, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CFOVKickDownU3Ec__Iterator1_t1440840980, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFOVKICKDOWNU3EC__ITERATOR1_T1440840980_H
#ifndef U3CFOVKICKUPU3EC__ITERATOR0_T3738408313_H
#define U3CFOVKICKUPU3EC__ITERATOR0_T3738408313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator0
struct  U3CFOVKickUpU3Ec__Iterator0_t3738408313  : public RuntimeObject
{
public:
	// System.Single UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator0::<t>__0
	float ___U3CtU3E__0_0;
	// UnityStandardAssets.Utility.FOVKick UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator0::$this
	FOVKick_t120370150 * ___U24this_1;
	// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CtU3E__0_0() { return static_cast<int32_t>(offsetof(U3CFOVKickUpU3Ec__Iterator0_t3738408313, ___U3CtU3E__0_0)); }
	inline float get_U3CtU3E__0_0() const { return ___U3CtU3E__0_0; }
	inline float* get_address_of_U3CtU3E__0_0() { return &___U3CtU3E__0_0; }
	inline void set_U3CtU3E__0_0(float value)
	{
		___U3CtU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CFOVKickUpU3Ec__Iterator0_t3738408313, ___U24this_1)); }
	inline FOVKick_t120370150 * get_U24this_1() const { return ___U24this_1; }
	inline FOVKick_t120370150 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(FOVKick_t120370150 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CFOVKickUpU3Ec__Iterator0_t3738408313, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CFOVKickUpU3Ec__Iterator0_t3738408313, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CFOVKickUpU3Ec__Iterator0_t3738408313, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFOVKICKUPU3EC__ITERATOR0_T3738408313_H
#ifndef LERPCONTROLLEDBOB_T1895875871_H
#define LERPCONTROLLEDBOB_T1895875871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.LerpControlledBob
struct  LerpControlledBob_t1895875871  : public RuntimeObject
{
public:
	// System.Single UnityStandardAssets.Utility.LerpControlledBob::BobDuration
	float ___BobDuration_0;
	// System.Single UnityStandardAssets.Utility.LerpControlledBob::BobAmount
	float ___BobAmount_1;
	// System.Single UnityStandardAssets.Utility.LerpControlledBob::m_Offset
	float ___m_Offset_2;

public:
	inline static int32_t get_offset_of_BobDuration_0() { return static_cast<int32_t>(offsetof(LerpControlledBob_t1895875871, ___BobDuration_0)); }
	inline float get_BobDuration_0() const { return ___BobDuration_0; }
	inline float* get_address_of_BobDuration_0() { return &___BobDuration_0; }
	inline void set_BobDuration_0(float value)
	{
		___BobDuration_0 = value;
	}

	inline static int32_t get_offset_of_BobAmount_1() { return static_cast<int32_t>(offsetof(LerpControlledBob_t1895875871, ___BobAmount_1)); }
	inline float get_BobAmount_1() const { return ___BobAmount_1; }
	inline float* get_address_of_BobAmount_1() { return &___BobAmount_1; }
	inline void set_BobAmount_1(float value)
	{
		___BobAmount_1 = value;
	}

	inline static int32_t get_offset_of_m_Offset_2() { return static_cast<int32_t>(offsetof(LerpControlledBob_t1895875871, ___m_Offset_2)); }
	inline float get_m_Offset_2() const { return ___m_Offset_2; }
	inline float* get_address_of_m_Offset_2() { return &___m_Offset_2; }
	inline void set_m_Offset_2(float value)
	{
		___m_Offset_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LERPCONTROLLEDBOB_T1895875871_H
#ifndef U3CDOBOBCYCLEU3EC__ITERATOR0_T1149538828_H
#define U3CDOBOBCYCLEU3EC__ITERATOR0_T1149538828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator0
struct  U3CDoBobCycleU3Ec__Iterator0_t1149538828  : public RuntimeObject
{
public:
	// System.Single UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator0::<t>__0
	float ___U3CtU3E__0_0;
	// UnityStandardAssets.Utility.LerpControlledBob UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator0::$this
	LerpControlledBob_t1895875871 * ___U24this_1;
	// System.Object UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CtU3E__0_0() { return static_cast<int32_t>(offsetof(U3CDoBobCycleU3Ec__Iterator0_t1149538828, ___U3CtU3E__0_0)); }
	inline float get_U3CtU3E__0_0() const { return ___U3CtU3E__0_0; }
	inline float* get_address_of_U3CtU3E__0_0() { return &___U3CtU3E__0_0; }
	inline void set_U3CtU3E__0_0(float value)
	{
		___U3CtU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CDoBobCycleU3Ec__Iterator0_t1149538828, ___U24this_1)); }
	inline LerpControlledBob_t1895875871 * get_U24this_1() const { return ___U24this_1; }
	inline LerpControlledBob_t1895875871 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(LerpControlledBob_t1895875871 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CDoBobCycleU3Ec__Iterator0_t1149538828, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CDoBobCycleU3Ec__Iterator0_t1149538828, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CDoBobCycleU3Ec__Iterator0_t1149538828, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDOBOBCYCLEU3EC__ITERATOR0_T1149538828_H
#ifndef U3CRESETCOROUTINEU3EC__ITERATOR0_T3232105836_H
#define U3CRESETCOROUTINEU3EC__ITERATOR0_T3232105836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator0
struct  U3CResetCoroutineU3Ec__Iterator0_t3232105836  : public RuntimeObject
{
public:
	// System.Single UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator0::delay
	float ___delay_0;
	// UnityEngine.Transform[] UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator0::$locvar0
	TransformU5BU5D_t807237628* ___U24locvar0_1;
	// System.Int32 UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator0::$locvar1
	int32_t ___U24locvar1_2;
	// UnityStandardAssets.Utility.ObjectResetter UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator0::$this
	ObjectResetter_t639177103 * ___U24this_3;
	// System.Object UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator0::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator0::$disposing
	bool ___U24disposing_5;
	// System.Int32 UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator0::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_delay_0() { return static_cast<int32_t>(offsetof(U3CResetCoroutineU3Ec__Iterator0_t3232105836, ___delay_0)); }
	inline float get_delay_0() const { return ___delay_0; }
	inline float* get_address_of_delay_0() { return &___delay_0; }
	inline void set_delay_0(float value)
	{
		___delay_0 = value;
	}

	inline static int32_t get_offset_of_U24locvar0_1() { return static_cast<int32_t>(offsetof(U3CResetCoroutineU3Ec__Iterator0_t3232105836, ___U24locvar0_1)); }
	inline TransformU5BU5D_t807237628* get_U24locvar0_1() const { return ___U24locvar0_1; }
	inline TransformU5BU5D_t807237628** get_address_of_U24locvar0_1() { return &___U24locvar0_1; }
	inline void set_U24locvar0_1(TransformU5BU5D_t807237628* value)
	{
		___U24locvar0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_1), value);
	}

	inline static int32_t get_offset_of_U24locvar1_2() { return static_cast<int32_t>(offsetof(U3CResetCoroutineU3Ec__Iterator0_t3232105836, ___U24locvar1_2)); }
	inline int32_t get_U24locvar1_2() const { return ___U24locvar1_2; }
	inline int32_t* get_address_of_U24locvar1_2() { return &___U24locvar1_2; }
	inline void set_U24locvar1_2(int32_t value)
	{
		___U24locvar1_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CResetCoroutineU3Ec__Iterator0_t3232105836, ___U24this_3)); }
	inline ObjectResetter_t639177103 * get_U24this_3() const { return ___U24this_3; }
	inline ObjectResetter_t639177103 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(ObjectResetter_t639177103 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CResetCoroutineU3Ec__Iterator0_t3232105836, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CResetCoroutineU3Ec__Iterator0_t3232105836, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CResetCoroutineU3Ec__Iterator0_t3232105836, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CRESETCOROUTINEU3EC__ITERATOR0_T3232105836_H
#ifndef U3CSTARTU3EC__ITERATOR0_T980021917_H
#define U3CSTARTU3EC__ITERATOR0_T980021917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator0
struct  U3CStartU3Ec__Iterator0_t980021917  : public RuntimeObject
{
public:
	// UnityEngine.ParticleSystem[] UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator0::<systems>__0
	ParticleSystemU5BU5D_t3089334924* ___U3CsystemsU3E__0_0;
	// UnityEngine.ParticleSystem[] UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator0::$locvar0
	ParticleSystemU5BU5D_t3089334924* ___U24locvar0_1;
	// System.Int32 UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator0::$locvar1
	int32_t ___U24locvar1_2;
	// System.Single UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator0::<stopTime>__0
	float ___U3CstopTimeU3E__0_3;
	// UnityEngine.ParticleSystem[] UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator0::$locvar2
	ParticleSystemU5BU5D_t3089334924* ___U24locvar2_4;
	// System.Int32 UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator0::$locvar3
	int32_t ___U24locvar3_5;
	// UnityStandardAssets.Utility.ParticleSystemDestroyer UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator0::$this
	ParticleSystemDestroyer_t558680695 * ___U24this_6;
	// System.Object UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator0::$current
	RuntimeObject * ___U24current_7;
	// System.Boolean UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator0::$disposing
	bool ___U24disposing_8;
	// System.Int32 UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator0::$PC
	int32_t ___U24PC_9;

public:
	inline static int32_t get_offset_of_U3CsystemsU3E__0_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t980021917, ___U3CsystemsU3E__0_0)); }
	inline ParticleSystemU5BU5D_t3089334924* get_U3CsystemsU3E__0_0() const { return ___U3CsystemsU3E__0_0; }
	inline ParticleSystemU5BU5D_t3089334924** get_address_of_U3CsystemsU3E__0_0() { return &___U3CsystemsU3E__0_0; }
	inline void set_U3CsystemsU3E__0_0(ParticleSystemU5BU5D_t3089334924* value)
	{
		___U3CsystemsU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsystemsU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U24locvar0_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t980021917, ___U24locvar0_1)); }
	inline ParticleSystemU5BU5D_t3089334924* get_U24locvar0_1() const { return ___U24locvar0_1; }
	inline ParticleSystemU5BU5D_t3089334924** get_address_of_U24locvar0_1() { return &___U24locvar0_1; }
	inline void set_U24locvar0_1(ParticleSystemU5BU5D_t3089334924* value)
	{
		___U24locvar0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_1), value);
	}

	inline static int32_t get_offset_of_U24locvar1_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t980021917, ___U24locvar1_2)); }
	inline int32_t get_U24locvar1_2() const { return ___U24locvar1_2; }
	inline int32_t* get_address_of_U24locvar1_2() { return &___U24locvar1_2; }
	inline void set_U24locvar1_2(int32_t value)
	{
		___U24locvar1_2 = value;
	}

	inline static int32_t get_offset_of_U3CstopTimeU3E__0_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t980021917, ___U3CstopTimeU3E__0_3)); }
	inline float get_U3CstopTimeU3E__0_3() const { return ___U3CstopTimeU3E__0_3; }
	inline float* get_address_of_U3CstopTimeU3E__0_3() { return &___U3CstopTimeU3E__0_3; }
	inline void set_U3CstopTimeU3E__0_3(float value)
	{
		___U3CstopTimeU3E__0_3 = value;
	}

	inline static int32_t get_offset_of_U24locvar2_4() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t980021917, ___U24locvar2_4)); }
	inline ParticleSystemU5BU5D_t3089334924* get_U24locvar2_4() const { return ___U24locvar2_4; }
	inline ParticleSystemU5BU5D_t3089334924** get_address_of_U24locvar2_4() { return &___U24locvar2_4; }
	inline void set_U24locvar2_4(ParticleSystemU5BU5D_t3089334924* value)
	{
		___U24locvar2_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar2_4), value);
	}

	inline static int32_t get_offset_of_U24locvar3_5() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t980021917, ___U24locvar3_5)); }
	inline int32_t get_U24locvar3_5() const { return ___U24locvar3_5; }
	inline int32_t* get_address_of_U24locvar3_5() { return &___U24locvar3_5; }
	inline void set_U24locvar3_5(int32_t value)
	{
		___U24locvar3_5 = value;
	}

	inline static int32_t get_offset_of_U24this_6() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t980021917, ___U24this_6)); }
	inline ParticleSystemDestroyer_t558680695 * get_U24this_6() const { return ___U24this_6; }
	inline ParticleSystemDestroyer_t558680695 ** get_address_of_U24this_6() { return &___U24this_6; }
	inline void set_U24this_6(ParticleSystemDestroyer_t558680695 * value)
	{
		___U24this_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_6), value);
	}

	inline static int32_t get_offset_of_U24current_7() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t980021917, ___U24current_7)); }
	inline RuntimeObject * get_U24current_7() const { return ___U24current_7; }
	inline RuntimeObject ** get_address_of_U24current_7() { return &___U24current_7; }
	inline void set_U24current_7(RuntimeObject * value)
	{
		___U24current_7 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_7), value);
	}

	inline static int32_t get_offset_of_U24disposing_8() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t980021917, ___U24disposing_8)); }
	inline bool get_U24disposing_8() const { return ___U24disposing_8; }
	inline bool* get_address_of_U24disposing_8() { return &___U24disposing_8; }
	inline void set_U24disposing_8(bool value)
	{
		___U24disposing_8 = value;
	}

	inline static int32_t get_offset_of_U24PC_9() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t980021917, ___U24PC_9)); }
	inline int32_t get_U24PC_9() const { return ___U24PC_9; }
	inline int32_t* get_address_of_U24PC_9() { return &___U24PC_9; }
	inline void set_U24PC_9(int32_t value)
	{
		___U24PC_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTU3EC__ITERATOR0_T980021917_H
#ifndef U3CACTIVATEU3EC__ITERATOR0_T2664723090_H
#define U3CACTIVATEU3EC__ITERATOR0_T2664723090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator0
struct  U3CActivateU3Ec__Iterator0_t2664723090  : public RuntimeObject
{
public:
	// UnityStandardAssets.Utility.TimedObjectActivator/Entry UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator0::entry
	Entry_t2725803170 * ___entry_0;
	// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_entry_0() { return static_cast<int32_t>(offsetof(U3CActivateU3Ec__Iterator0_t2664723090, ___entry_0)); }
	inline Entry_t2725803170 * get_entry_0() const { return ___entry_0; }
	inline Entry_t2725803170 ** get_address_of_entry_0() { return &___entry_0; }
	inline void set_entry_0(Entry_t2725803170 * value)
	{
		___entry_0 = value;
		Il2CppCodeGenWriteBarrier((&___entry_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CActivateU3Ec__Iterator0_t2664723090, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CActivateU3Ec__Iterator0_t2664723090, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CActivateU3Ec__Iterator0_t2664723090, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CACTIVATEU3EC__ITERATOR0_T2664723090_H
#ifndef U3CDEACTIVATEU3EC__ITERATOR1_T730025274_H
#define U3CDEACTIVATEU3EC__ITERATOR1_T730025274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator1
struct  U3CDeactivateU3Ec__Iterator1_t730025274  : public RuntimeObject
{
public:
	// UnityStandardAssets.Utility.TimedObjectActivator/Entry UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator1::entry
	Entry_t2725803170 * ___entry_0;
	// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator1::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator1::$disposing
	bool ___U24disposing_2;
	// System.Int32 UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator1::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_entry_0() { return static_cast<int32_t>(offsetof(U3CDeactivateU3Ec__Iterator1_t730025274, ___entry_0)); }
	inline Entry_t2725803170 * get_entry_0() const { return ___entry_0; }
	inline Entry_t2725803170 ** get_address_of_entry_0() { return &___entry_0; }
	inline void set_entry_0(Entry_t2725803170 * value)
	{
		___entry_0 = value;
		Il2CppCodeGenWriteBarrier((&___entry_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CDeactivateU3Ec__Iterator1_t730025274, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CDeactivateU3Ec__Iterator1_t730025274, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CDeactivateU3Ec__Iterator1_t730025274, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDEACTIVATEU3EC__ITERATOR1_T730025274_H
#ifndef U3CRELOADLEVELU3EC__ITERATOR2_T2784493974_H
#define U3CRELOADLEVELU3EC__ITERATOR2_T2784493974_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator2
struct  U3CReloadLevelU3Ec__Iterator2_t2784493974  : public RuntimeObject
{
public:
	// UnityStandardAssets.Utility.TimedObjectActivator/Entry UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator2::entry
	Entry_t2725803170 * ___entry_0;
	// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator2::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator2::$disposing
	bool ___U24disposing_2;
	// System.Int32 UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator2::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_entry_0() { return static_cast<int32_t>(offsetof(U3CReloadLevelU3Ec__Iterator2_t2784493974, ___entry_0)); }
	inline Entry_t2725803170 * get_entry_0() const { return ___entry_0; }
	inline Entry_t2725803170 ** get_address_of_entry_0() { return &___entry_0; }
	inline void set_entry_0(Entry_t2725803170 * value)
	{
		___entry_0 = value;
		Il2CppCodeGenWriteBarrier((&___entry_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CReloadLevelU3Ec__Iterator2_t2784493974, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CReloadLevelU3Ec__Iterator2_t2784493974, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CReloadLevelU3Ec__Iterator2_t2784493974, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CRELOADLEVELU3EC__ITERATOR2_T2784493974_H
#ifndef ENTRIES_T3168066469_H
#define ENTRIES_T3168066469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.TimedObjectActivator/Entries
struct  Entries_t3168066469  : public RuntimeObject
{
public:
	// UnityStandardAssets.Utility.TimedObjectActivator/Entry[] UnityStandardAssets.Utility.TimedObjectActivator/Entries::entries
	EntryU5BU5D_t3574483607* ___entries_0;

public:
	inline static int32_t get_offset_of_entries_0() { return static_cast<int32_t>(offsetof(Entries_t3168066469, ___entries_0)); }
	inline EntryU5BU5D_t3574483607* get_entries_0() const { return ___entries_0; }
	inline EntryU5BU5D_t3574483607** get_address_of_entries_0() { return &___entries_0; }
	inline void set_entries_0(EntryU5BU5D_t3574483607* value)
	{
		___entries_0 = value;
		Il2CppCodeGenWriteBarrier((&___entries_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTRIES_T3168066469_H
#ifndef WAYPOINTLIST_T2584574554_H
#define WAYPOINTLIST_T2584574554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointCircuit/WaypointList
struct  WaypointList_t2584574554  : public RuntimeObject
{
public:
	// UnityStandardAssets.Utility.WaypointCircuit UnityStandardAssets.Utility.WaypointCircuit/WaypointList::circuit
	WaypointCircuit_t445075330 * ___circuit_0;
	// UnityEngine.Transform[] UnityStandardAssets.Utility.WaypointCircuit/WaypointList::items
	TransformU5BU5D_t807237628* ___items_1;

public:
	inline static int32_t get_offset_of_circuit_0() { return static_cast<int32_t>(offsetof(WaypointList_t2584574554, ___circuit_0)); }
	inline WaypointCircuit_t445075330 * get_circuit_0() const { return ___circuit_0; }
	inline WaypointCircuit_t445075330 ** get_address_of_circuit_0() { return &___circuit_0; }
	inline void set_circuit_0(WaypointCircuit_t445075330 * value)
	{
		___circuit_0 = value;
		Il2CppCodeGenWriteBarrier((&___circuit_0), value);
	}

	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(WaypointList_t2584574554, ___items_1)); }
	inline TransformU5BU5D_t807237628* get_items_1() const { return ___items_1; }
	inline TransformU5BU5D_t807237628** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(TransformU5BU5D_t807237628* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAYPOINTLIST_T2584574554_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef KEYFRAME_T4206410242_H
#define KEYFRAME_T4206410242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Keyframe
struct  Keyframe_t4206410242 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}

	inline static int32_t get_offset_of_m_WeightedMode_4() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_WeightedMode_4)); }
	inline int32_t get_m_WeightedMode_4() const { return ___m_WeightedMode_4; }
	inline int32_t* get_address_of_m_WeightedMode_4() { return &___m_WeightedMode_4; }
	inline void set_m_WeightedMode_4(int32_t value)
	{
		___m_WeightedMode_4 = value;
	}

	inline static int32_t get_offset_of_m_InWeight_5() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_InWeight_5)); }
	inline float get_m_InWeight_5() const { return ___m_InWeight_5; }
	inline float* get_address_of_m_InWeight_5() { return &___m_InWeight_5; }
	inline void set_m_InWeight_5(float value)
	{
		___m_InWeight_5 = value;
	}

	inline static int32_t get_offset_of_m_OutWeight_6() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_OutWeight_6)); }
	inline float get_m_OutWeight_6() const { return ___m_OutWeight_6; }
	inline float* get_address_of_m_OutWeight_6() { return &___m_OutWeight_6; }
	inline void set_m_OutWeight_6(float value)
	{
		___m_OutWeight_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYFRAME_T4206410242_H
#ifndef LAYERMASK_T3493934918_H
#define LAYERMASK_T3493934918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_t3493934918 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t3493934918, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_T3493934918_H
#ifndef MATHF_T3464937446_H
#define MATHF_T3464937446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mathf
struct  Mathf_t3464937446 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Mathf_t3464937446__padding[1];
	};

public:
};

struct Mathf_t3464937446_StaticFields
{
public:
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;

public:
	inline static int32_t get_offset_of_Epsilon_0() { return static_cast<int32_t>(offsetof(Mathf_t3464937446_StaticFields, ___Epsilon_0)); }
	inline float get_Epsilon_0() const { return ___Epsilon_0; }
	inline float* get_address_of_Epsilon_0() { return &___Epsilon_0; }
	inline void set_Epsilon_0(float value)
	{
		___Epsilon_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHF_T3464937446_H
#ifndef EMISSIONMODULE_T311448003_H
#define EMISSIONMODULE_T311448003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/EmissionModule
struct  EmissionModule_t311448003 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/EmissionModule::m_ParticleSystem
	ParticleSystem_t1800779281 * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(EmissionModule_t311448003, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t1800779281 * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t1800779281 ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t1800779281 * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParticleSystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t311448003_marshaled_pinvoke
{
	ParticleSystem_t1800779281 * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t311448003_marshaled_com
{
	ParticleSystem_t1800779281 * ___m_ParticleSystem_0;
};
#endif // EMISSIONMODULE_T311448003_H
#ifndef MAINMODULE_T2320046318_H
#define MAINMODULE_T2320046318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/MainModule
struct  MainModule_t2320046318 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_t1800779281 * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(MainModule_t2320046318, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t1800779281 * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t1800779281 ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t1800779281 * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParticleSystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_t2320046318_marshaled_pinvoke
{
	ParticleSystem_t1800779281 * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_t2320046318_marshaled_com
{
	ParticleSystem_t1800779281 * ___m_ParticleSystem_0;
};
#endif // MAINMODULE_T2320046318_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef SCENE_T2348375561_H
#define SCENE_T2348375561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t2348375561 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t2348375561, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T2348375561_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef WAITFORENDOFFRAME_T1314943911_H
#define WAITFORENDOFFRAME_T1314943911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t1314943911  : public YieldInstruction_t403091072
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORENDOFFRAME_T1314943911_H
#ifndef WAITFORFIXEDUPDATE_T1634918743_H
#define WAITFORFIXEDUPDATE_T1634918743_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForFixedUpdate
struct  WaitForFixedUpdate_t1634918743  : public YieldInstruction_t403091072
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORFIXEDUPDATE_T1634918743_H
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef ANIMATIONCURVE_T3046754366_H
#define ANIMATIONCURVE_T3046754366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationCurve
struct  AnimationCurve_t3046754366  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t3046754366, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ANIMATIONCURVE_T3046754366_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef FORCEMODE_T3656391766_H
#define FORCEMODE_T3656391766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ForceMode
struct  ForceMode_t3656391766 
{
public:
	// System.Int32 UnityEngine.ForceMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ForceMode_t3656391766, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORCEMODE_T3656391766_H
#ifndef HIDEFLAGS_T4250555765_H
#define HIDEFLAGS_T4250555765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideFlags
struct  HideFlags_t4250555765 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HideFlags_t4250555765, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIDEFLAGS_T4250555765_H
#ifndef KEYCODE_T2599294277_H
#define KEYCODE_T2599294277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2599294277 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t2599294277, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODE_T2599294277_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef PARTICLESYSTEMCURVEMODE_T3859704052_H
#define PARTICLESYSTEMCURVEMODE_T3859704052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystemCurveMode
struct  ParticleSystemCurveMode_t3859704052 
{
public:
	// System.Int32 UnityEngine.ParticleSystemCurveMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParticleSystemCurveMode_t3859704052, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEMCURVEMODE_T3859704052_H
#ifndef RAY_T3785851493_H
#define RAY_T3785851493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t3785851493 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t3722313464  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t3722313464  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Origin_0)); }
	inline Vector3_t3722313464  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t3722313464 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t3722313464  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Direction_1)); }
	inline Vector3_t3722313464  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t3722313464 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t3722313464  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T3785851493_H
#ifndef RAYCASTHIT_T1056001966_H
#define RAYCASTHIT_T1056001966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t1056001966 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t3722313464  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t3722313464  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t2156229523  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Point_0)); }
	inline Vector3_t3722313464  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t3722313464 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t3722313464  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Normal_1)); }
	inline Vector3_t3722313464  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t3722313464  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_UV_4)); }
	inline Vector2_t2156229523  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t2156229523 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t2156229523  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYCASTHIT_T1056001966_H
#ifndef RENDERTEXTUREFORMAT_T962350765_H
#define RENDERTEXTUREFORMAT_T962350765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureFormat
struct  RenderTextureFormat_t962350765 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t962350765, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTUREFORMAT_T962350765_H
#ifndef SENDMESSAGEOPTIONS_T3580193095_H
#define SENDMESSAGEOPTIONS_T3580193095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMessageOptions
struct  SendMessageOptions_t3580193095 
{
public:
	// System.Int32 UnityEngine.SendMessageOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SendMessageOptions_t3580193095, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMESSAGEOPTIONS_T3580193095_H
#ifndef SPACE_T654135784_H
#define SPACE_T654135784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Space
struct  Space_t654135784 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Space_t654135784, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPACE_T654135784_H
#ifndef TEXTUREWRAPMODE_T584250749_H
#define TEXTUREWRAPMODE_T584250749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureWrapMode
struct  TextureWrapMode_t584250749 
{
public:
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureWrapMode_t584250749, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREWRAPMODE_T584250749_H
#ifndef ADAPTIVETEXSIZE_T1062941056_H
#define ADAPTIVETEXSIZE_T1062941056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Tonemapping/AdaptiveTexSize
struct  AdaptiveTexSize_t1062941056 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.Tonemapping/AdaptiveTexSize::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AdaptiveTexSize_t1062941056, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADAPTIVETEXSIZE_T1062941056_H
#ifndef TONEMAPPERTYPE_T52991894_H
#define TONEMAPPERTYPE_T52991894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Tonemapping/TonemapperType
struct  TonemapperType_t52991894 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.Tonemapping/TonemapperType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TonemapperType_t52991894, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TONEMAPPERTYPE_T52991894_H
#ifndef TWEAKMODE34_T984135990_H
#define TWEAKMODE34_T984135990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.TweakMode34
struct  TweakMode34_t984135990 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.TweakMode34::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TweakMode34_t984135990, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWEAKMODE34_T984135990_H
#ifndef ABERRATIONMODE_T218549536_H
#define ABERRATIONMODE_T218549536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration/AberrationMode
struct  AberrationMode_t218549536 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration/AberrationMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AberrationMode_t218549536, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABERRATIONMODE_T218549536_H
#ifndef MODE_T3024470803_H
#define MODE_T3024470803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.ActivateTrigger/Mode
struct  Mode_t3024470803 
{
public:
	// System.Int32 UnityStandardAssets.Utility.ActivateTrigger/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t3024470803, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T3024470803_H
#ifndef CAMERAREFOCUS_T4263235746_H
#define CAMERAREFOCUS_T4263235746_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.CameraRefocus
struct  CameraRefocus_t4263235746  : public RuntimeObject
{
public:
	// UnityEngine.Camera UnityStandardAssets.Utility.CameraRefocus::Camera
	Camera_t4157153871 * ___Camera_0;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.CameraRefocus::Lookatpoint
	Vector3_t3722313464  ___Lookatpoint_1;
	// UnityEngine.Transform UnityStandardAssets.Utility.CameraRefocus::Parent
	Transform_t3600365921 * ___Parent_2;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.CameraRefocus::m_OrigCameraPos
	Vector3_t3722313464  ___m_OrigCameraPos_3;
	// System.Boolean UnityStandardAssets.Utility.CameraRefocus::m_Refocus
	bool ___m_Refocus_4;

public:
	inline static int32_t get_offset_of_Camera_0() { return static_cast<int32_t>(offsetof(CameraRefocus_t4263235746, ___Camera_0)); }
	inline Camera_t4157153871 * get_Camera_0() const { return ___Camera_0; }
	inline Camera_t4157153871 ** get_address_of_Camera_0() { return &___Camera_0; }
	inline void set_Camera_0(Camera_t4157153871 * value)
	{
		___Camera_0 = value;
		Il2CppCodeGenWriteBarrier((&___Camera_0), value);
	}

	inline static int32_t get_offset_of_Lookatpoint_1() { return static_cast<int32_t>(offsetof(CameraRefocus_t4263235746, ___Lookatpoint_1)); }
	inline Vector3_t3722313464  get_Lookatpoint_1() const { return ___Lookatpoint_1; }
	inline Vector3_t3722313464 * get_address_of_Lookatpoint_1() { return &___Lookatpoint_1; }
	inline void set_Lookatpoint_1(Vector3_t3722313464  value)
	{
		___Lookatpoint_1 = value;
	}

	inline static int32_t get_offset_of_Parent_2() { return static_cast<int32_t>(offsetof(CameraRefocus_t4263235746, ___Parent_2)); }
	inline Transform_t3600365921 * get_Parent_2() const { return ___Parent_2; }
	inline Transform_t3600365921 ** get_address_of_Parent_2() { return &___Parent_2; }
	inline void set_Parent_2(Transform_t3600365921 * value)
	{
		___Parent_2 = value;
		Il2CppCodeGenWriteBarrier((&___Parent_2), value);
	}

	inline static int32_t get_offset_of_m_OrigCameraPos_3() { return static_cast<int32_t>(offsetof(CameraRefocus_t4263235746, ___m_OrigCameraPos_3)); }
	inline Vector3_t3722313464  get_m_OrigCameraPos_3() const { return ___m_OrigCameraPos_3; }
	inline Vector3_t3722313464 * get_address_of_m_OrigCameraPos_3() { return &___m_OrigCameraPos_3; }
	inline void set_m_OrigCameraPos_3(Vector3_t3722313464  value)
	{
		___m_OrigCameraPos_3 = value;
	}

	inline static int32_t get_offset_of_m_Refocus_4() { return static_cast<int32_t>(offsetof(CameraRefocus_t4263235746, ___m_Refocus_4)); }
	inline bool get_m_Refocus_4() const { return ___m_Refocus_4; }
	inline bool* get_address_of_m_Refocus_4() { return &___m_Refocus_4; }
	inline void set_m_Refocus_4(bool value)
	{
		___m_Refocus_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAREFOCUS_T4263235746_H
#ifndef CURVECONTROLLEDBOB_T2679313829_H
#define CURVECONTROLLEDBOB_T2679313829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.CurveControlledBob
struct  CurveControlledBob_t2679313829  : public RuntimeObject
{
public:
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::HorizontalBobRange
	float ___HorizontalBobRange_0;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::VerticalBobRange
	float ___VerticalBobRange_1;
	// UnityEngine.AnimationCurve UnityStandardAssets.Utility.CurveControlledBob::Bobcurve
	AnimationCurve_t3046754366 * ___Bobcurve_2;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::VerticaltoHorizontalRatio
	float ___VerticaltoHorizontalRatio_3;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::m_CyclePositionX
	float ___m_CyclePositionX_4;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::m_CyclePositionY
	float ___m_CyclePositionY_5;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::m_BobBaseInterval
	float ___m_BobBaseInterval_6;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.CurveControlledBob::m_OriginalCameraPosition
	Vector3_t3722313464  ___m_OriginalCameraPosition_7;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::m_Time
	float ___m_Time_8;

public:
	inline static int32_t get_offset_of_HorizontalBobRange_0() { return static_cast<int32_t>(offsetof(CurveControlledBob_t2679313829, ___HorizontalBobRange_0)); }
	inline float get_HorizontalBobRange_0() const { return ___HorizontalBobRange_0; }
	inline float* get_address_of_HorizontalBobRange_0() { return &___HorizontalBobRange_0; }
	inline void set_HorizontalBobRange_0(float value)
	{
		___HorizontalBobRange_0 = value;
	}

	inline static int32_t get_offset_of_VerticalBobRange_1() { return static_cast<int32_t>(offsetof(CurveControlledBob_t2679313829, ___VerticalBobRange_1)); }
	inline float get_VerticalBobRange_1() const { return ___VerticalBobRange_1; }
	inline float* get_address_of_VerticalBobRange_1() { return &___VerticalBobRange_1; }
	inline void set_VerticalBobRange_1(float value)
	{
		___VerticalBobRange_1 = value;
	}

	inline static int32_t get_offset_of_Bobcurve_2() { return static_cast<int32_t>(offsetof(CurveControlledBob_t2679313829, ___Bobcurve_2)); }
	inline AnimationCurve_t3046754366 * get_Bobcurve_2() const { return ___Bobcurve_2; }
	inline AnimationCurve_t3046754366 ** get_address_of_Bobcurve_2() { return &___Bobcurve_2; }
	inline void set_Bobcurve_2(AnimationCurve_t3046754366 * value)
	{
		___Bobcurve_2 = value;
		Il2CppCodeGenWriteBarrier((&___Bobcurve_2), value);
	}

	inline static int32_t get_offset_of_VerticaltoHorizontalRatio_3() { return static_cast<int32_t>(offsetof(CurveControlledBob_t2679313829, ___VerticaltoHorizontalRatio_3)); }
	inline float get_VerticaltoHorizontalRatio_3() const { return ___VerticaltoHorizontalRatio_3; }
	inline float* get_address_of_VerticaltoHorizontalRatio_3() { return &___VerticaltoHorizontalRatio_3; }
	inline void set_VerticaltoHorizontalRatio_3(float value)
	{
		___VerticaltoHorizontalRatio_3 = value;
	}

	inline static int32_t get_offset_of_m_CyclePositionX_4() { return static_cast<int32_t>(offsetof(CurveControlledBob_t2679313829, ___m_CyclePositionX_4)); }
	inline float get_m_CyclePositionX_4() const { return ___m_CyclePositionX_4; }
	inline float* get_address_of_m_CyclePositionX_4() { return &___m_CyclePositionX_4; }
	inline void set_m_CyclePositionX_4(float value)
	{
		___m_CyclePositionX_4 = value;
	}

	inline static int32_t get_offset_of_m_CyclePositionY_5() { return static_cast<int32_t>(offsetof(CurveControlledBob_t2679313829, ___m_CyclePositionY_5)); }
	inline float get_m_CyclePositionY_5() const { return ___m_CyclePositionY_5; }
	inline float* get_address_of_m_CyclePositionY_5() { return &___m_CyclePositionY_5; }
	inline void set_m_CyclePositionY_5(float value)
	{
		___m_CyclePositionY_5 = value;
	}

	inline static int32_t get_offset_of_m_BobBaseInterval_6() { return static_cast<int32_t>(offsetof(CurveControlledBob_t2679313829, ___m_BobBaseInterval_6)); }
	inline float get_m_BobBaseInterval_6() const { return ___m_BobBaseInterval_6; }
	inline float* get_address_of_m_BobBaseInterval_6() { return &___m_BobBaseInterval_6; }
	inline void set_m_BobBaseInterval_6(float value)
	{
		___m_BobBaseInterval_6 = value;
	}

	inline static int32_t get_offset_of_m_OriginalCameraPosition_7() { return static_cast<int32_t>(offsetof(CurveControlledBob_t2679313829, ___m_OriginalCameraPosition_7)); }
	inline Vector3_t3722313464  get_m_OriginalCameraPosition_7() const { return ___m_OriginalCameraPosition_7; }
	inline Vector3_t3722313464 * get_address_of_m_OriginalCameraPosition_7() { return &___m_OriginalCameraPosition_7; }
	inline void set_m_OriginalCameraPosition_7(Vector3_t3722313464  value)
	{
		___m_OriginalCameraPosition_7 = value;
	}

	inline static int32_t get_offset_of_m_Time_8() { return static_cast<int32_t>(offsetof(CurveControlledBob_t2679313829, ___m_Time_8)); }
	inline float get_m_Time_8() const { return ___m_Time_8; }
	inline float* get_address_of_m_Time_8() { return &___m_Time_8; }
	inline void set_m_Time_8(float value)
	{
		___m_Time_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURVECONTROLLEDBOB_T2679313829_H
#ifndef BUILDTARGETGROUP_T72322187_H
#define BUILDTARGETGROUP_T72322187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.PlatformSpecificContent/BuildTargetGroup
struct  BuildTargetGroup_t72322187 
{
public:
	// System.Int32 UnityStandardAssets.Utility.PlatformSpecificContent/BuildTargetGroup::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BuildTargetGroup_t72322187, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUILDTARGETGROUP_T72322187_H
#ifndef ACTION_T837364808_H
#define ACTION_T837364808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.TimedObjectActivator/Action
struct  Action_t837364808 
{
public:
	// System.Int32 UnityStandardAssets.Utility.TimedObjectActivator/Action::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Action_t837364808, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T837364808_H
#ifndef ROUTEPOINT_T3880028948_H
#define ROUTEPOINT_T3880028948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint
struct  RoutePoint_t3880028948 
{
public:
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit/RoutePoint::position
	Vector3_t3722313464  ___position_0;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit/RoutePoint::direction
	Vector3_t3722313464  ___direction_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(RoutePoint_t3880028948, ___position_0)); }
	inline Vector3_t3722313464  get_position_0() const { return ___position_0; }
	inline Vector3_t3722313464 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t3722313464  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_direction_1() { return static_cast<int32_t>(offsetof(RoutePoint_t3880028948, ___direction_1)); }
	inline Vector3_t3722313464  get_direction_1() const { return ___direction_1; }
	inline Vector3_t3722313464 * get_address_of_direction_1() { return &___direction_1; }
	inline void set_direction_1(Vector3_t3722313464  value)
	{
		___direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROUTEPOINT_T3880028948_H
#ifndef PROGRESSSTYLE_T3254572979_H
#define PROGRESSSTYLE_T3254572979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle
struct  ProgressStyle_t3254572979 
{
public:
	// System.Int32 UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProgressStyle_t3254572979, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROGRESSSTYLE_T3254572979_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef MESH_T3648964284_H
#define MESH_T3648964284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t3648964284  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T3648964284_H
#ifndef MINMAXCURVE_T1067599125_H
#define MINMAXCURVE_T1067599125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/MinMaxCurve
struct  MinMaxCurve_t1067599125 
{
public:
	// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::m_Mode
	int32_t ___m_Mode_0;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMultiplier
	float ___m_CurveMultiplier_1;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMin
	AnimationCurve_t3046754366 * ___m_CurveMin_2;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMax
	AnimationCurve_t3046754366 * ___m_CurveMax_3;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMin
	float ___m_ConstantMin_4;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMax
	float ___m_ConstantMax_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(MinMaxCurve_t1067599125, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_CurveMultiplier_1() { return static_cast<int32_t>(offsetof(MinMaxCurve_t1067599125, ___m_CurveMultiplier_1)); }
	inline float get_m_CurveMultiplier_1() const { return ___m_CurveMultiplier_1; }
	inline float* get_address_of_m_CurveMultiplier_1() { return &___m_CurveMultiplier_1; }
	inline void set_m_CurveMultiplier_1(float value)
	{
		___m_CurveMultiplier_1 = value;
	}

	inline static int32_t get_offset_of_m_CurveMin_2() { return static_cast<int32_t>(offsetof(MinMaxCurve_t1067599125, ___m_CurveMin_2)); }
	inline AnimationCurve_t3046754366 * get_m_CurveMin_2() const { return ___m_CurveMin_2; }
	inline AnimationCurve_t3046754366 ** get_address_of_m_CurveMin_2() { return &___m_CurveMin_2; }
	inline void set_m_CurveMin_2(AnimationCurve_t3046754366 * value)
	{
		___m_CurveMin_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurveMin_2), value);
	}

	inline static int32_t get_offset_of_m_CurveMax_3() { return static_cast<int32_t>(offsetof(MinMaxCurve_t1067599125, ___m_CurveMax_3)); }
	inline AnimationCurve_t3046754366 * get_m_CurveMax_3() const { return ___m_CurveMax_3; }
	inline AnimationCurve_t3046754366 ** get_address_of_m_CurveMax_3() { return &___m_CurveMax_3; }
	inline void set_m_CurveMax_3(AnimationCurve_t3046754366 * value)
	{
		___m_CurveMax_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurveMax_3), value);
	}

	inline static int32_t get_offset_of_m_ConstantMin_4() { return static_cast<int32_t>(offsetof(MinMaxCurve_t1067599125, ___m_ConstantMin_4)); }
	inline float get_m_ConstantMin_4() const { return ___m_ConstantMin_4; }
	inline float* get_address_of_m_ConstantMin_4() { return &___m_ConstantMin_4; }
	inline void set_m_ConstantMin_4(float value)
	{
		___m_ConstantMin_4 = value;
	}

	inline static int32_t get_offset_of_m_ConstantMax_5() { return static_cast<int32_t>(offsetof(MinMaxCurve_t1067599125, ___m_ConstantMax_5)); }
	inline float get_m_ConstantMax_5() const { return ___m_ConstantMax_5; }
	inline float* get_address_of_m_ConstantMax_5() { return &___m_ConstantMax_5; }
	inline void set_m_ConstantMax_5(float value)
	{
		___m_ConstantMax_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MinMaxCurve
struct MinMaxCurve_t1067599125_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	float ___m_CurveMultiplier_1;
	AnimationCurve_t3046754366_marshaled_pinvoke ___m_CurveMin_2;
	AnimationCurve_t3046754366_marshaled_pinvoke ___m_CurveMax_3;
	float ___m_ConstantMin_4;
	float ___m_ConstantMax_5;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MinMaxCurve
struct MinMaxCurve_t1067599125_marshaled_com
{
	int32_t ___m_Mode_0;
	float ___m_CurveMultiplier_1;
	AnimationCurve_t3046754366_marshaled_com* ___m_CurveMin_2;
	AnimationCurve_t3046754366_marshaled_com* ___m_CurveMax_3;
	float ___m_ConstantMin_4;
	float ___m_ConstantMax_5;
};
#endif // MINMAXCURVE_T1067599125_H
#ifndef SHADER_T4151988712_H
#define SHADER_T4151988712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Shader
struct  Shader_t4151988712  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADER_T4151988712_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef VECTOR3ANDSPACE_T219844479_H
#define VECTOR3ANDSPACE_T219844479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace
struct  Vector3andSpace_t219844479  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace::value
	Vector3_t3722313464  ___value_0;
	// UnityEngine.Space UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace::space
	int32_t ___space_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Vector3andSpace_t219844479, ___value_0)); }
	inline Vector3_t3722313464  get_value_0() const { return ___value_0; }
	inline Vector3_t3722313464 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_t3722313464  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_space_1() { return static_cast<int32_t>(offsetof(Vector3andSpace_t219844479, ___space_1)); }
	inline int32_t get_space_1() const { return ___space_1; }
	inline int32_t* get_address_of_space_1() { return &___space_1; }
	inline void set_space_1(int32_t value)
	{
		___space_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3ANDSPACE_T219844479_H
#ifndef U3CDRAGOBJECTU3EC__ITERATOR0_T4151609119_H
#define U3CDRAGOBJECTU3EC__ITERATOR0_T4151609119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0
struct  U3CDragObjectU3Ec__Iterator0_t4151609119  : public RuntimeObject
{
public:
	// System.Single UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::<oldDrag>__0
	float ___U3ColdDragU3E__0_0;
	// System.Single UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::<oldAngularDrag>__0
	float ___U3ColdAngularDragU3E__0_1;
	// UnityEngine.Camera UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::<mainCamera>__0
	Camera_t4157153871 * ___U3CmainCameraU3E__0_2;
	// UnityEngine.Ray UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::<ray>__1
	Ray_t3785851493  ___U3CrayU3E__1_3;
	// System.Single UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::distance
	float ___distance_4;
	// UnityStandardAssets.Utility.DragRigidbody UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::$this
	DragRigidbody_t1600652016 * ___U24this_5;
	// System.Object UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::$current
	RuntimeObject * ___U24current_6;
	// System.Boolean UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::$disposing
	bool ___U24disposing_7;
	// System.Int32 UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::$PC
	int32_t ___U24PC_8;

public:
	inline static int32_t get_offset_of_U3ColdDragU3E__0_0() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ec__Iterator0_t4151609119, ___U3ColdDragU3E__0_0)); }
	inline float get_U3ColdDragU3E__0_0() const { return ___U3ColdDragU3E__0_0; }
	inline float* get_address_of_U3ColdDragU3E__0_0() { return &___U3ColdDragU3E__0_0; }
	inline void set_U3ColdDragU3E__0_0(float value)
	{
		___U3ColdDragU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3ColdAngularDragU3E__0_1() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ec__Iterator0_t4151609119, ___U3ColdAngularDragU3E__0_1)); }
	inline float get_U3ColdAngularDragU3E__0_1() const { return ___U3ColdAngularDragU3E__0_1; }
	inline float* get_address_of_U3ColdAngularDragU3E__0_1() { return &___U3ColdAngularDragU3E__0_1; }
	inline void set_U3ColdAngularDragU3E__0_1(float value)
	{
		___U3ColdAngularDragU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CmainCameraU3E__0_2() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ec__Iterator0_t4151609119, ___U3CmainCameraU3E__0_2)); }
	inline Camera_t4157153871 * get_U3CmainCameraU3E__0_2() const { return ___U3CmainCameraU3E__0_2; }
	inline Camera_t4157153871 ** get_address_of_U3CmainCameraU3E__0_2() { return &___U3CmainCameraU3E__0_2; }
	inline void set_U3CmainCameraU3E__0_2(Camera_t4157153871 * value)
	{
		___U3CmainCameraU3E__0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmainCameraU3E__0_2), value);
	}

	inline static int32_t get_offset_of_U3CrayU3E__1_3() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ec__Iterator0_t4151609119, ___U3CrayU3E__1_3)); }
	inline Ray_t3785851493  get_U3CrayU3E__1_3() const { return ___U3CrayU3E__1_3; }
	inline Ray_t3785851493 * get_address_of_U3CrayU3E__1_3() { return &___U3CrayU3E__1_3; }
	inline void set_U3CrayU3E__1_3(Ray_t3785851493  value)
	{
		___U3CrayU3E__1_3 = value;
	}

	inline static int32_t get_offset_of_distance_4() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ec__Iterator0_t4151609119, ___distance_4)); }
	inline float get_distance_4() const { return ___distance_4; }
	inline float* get_address_of_distance_4() { return &___distance_4; }
	inline void set_distance_4(float value)
	{
		___distance_4 = value;
	}

	inline static int32_t get_offset_of_U24this_5() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ec__Iterator0_t4151609119, ___U24this_5)); }
	inline DragRigidbody_t1600652016 * get_U24this_5() const { return ___U24this_5; }
	inline DragRigidbody_t1600652016 ** get_address_of_U24this_5() { return &___U24this_5; }
	inline void set_U24this_5(DragRigidbody_t1600652016 * value)
	{
		___U24this_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_5), value);
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ec__Iterator0_t4151609119, ___U24current_6)); }
	inline RuntimeObject * get_U24current_6() const { return ___U24current_6; }
	inline RuntimeObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(RuntimeObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_6), value);
	}

	inline static int32_t get_offset_of_U24disposing_7() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ec__Iterator0_t4151609119, ___U24disposing_7)); }
	inline bool get_U24disposing_7() const { return ___U24disposing_7; }
	inline bool* get_address_of_U24disposing_7() { return &___U24disposing_7; }
	inline void set_U24disposing_7(bool value)
	{
		___U24disposing_7 = value;
	}

	inline static int32_t get_offset_of_U24PC_8() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ec__Iterator0_t4151609119, ___U24PC_8)); }
	inline int32_t get_U24PC_8() const { return ___U24PC_8; }
	inline int32_t* get_address_of_U24PC_8() { return &___U24PC_8; }
	inline void set_U24PC_8(int32_t value)
	{
		___U24PC_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDRAGOBJECTU3EC__ITERATOR0_T4151609119_H
#ifndef ENTRY_T2725803170_H
#define ENTRY_T2725803170_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.TimedObjectActivator/Entry
struct  Entry_t2725803170  : public RuntimeObject
{
public:
	// UnityEngine.GameObject UnityStandardAssets.Utility.TimedObjectActivator/Entry::target
	GameObject_t1113636619 * ___target_0;
	// UnityStandardAssets.Utility.TimedObjectActivator/Action UnityStandardAssets.Utility.TimedObjectActivator/Entry::action
	int32_t ___action_1;
	// System.Single UnityStandardAssets.Utility.TimedObjectActivator/Entry::delay
	float ___delay_2;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(Entry_t2725803170, ___target_0)); }
	inline GameObject_t1113636619 * get_target_0() const { return ___target_0; }
	inline GameObject_t1113636619 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t1113636619 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(Entry_t2725803170, ___action_1)); }
	inline int32_t get_action_1() const { return ___action_1; }
	inline int32_t* get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(int32_t value)
	{
		___action_1 = value;
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(Entry_t2725803170, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTRY_T2725803170_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef JOINT_T1358886274_H
#define JOINT_T1358886274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Joint
struct  Joint_t1358886274  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JOINT_T1358886274_H
#ifndef PARTICLESYSTEM_T1800779281_H
#define PARTICLESYSTEM_T1800779281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem
struct  ParticleSystem_t1800779281  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEM_T1800779281_H
#ifndef RENDERTEXTURE_T2108887433_H
#define RENDERTEXTURE_T2108887433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_t2108887433  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_T2108887433_H
#ifndef RIGIDBODY_T3916780224_H
#define RIGIDBODY_T3916780224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_t3916780224  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_T3916780224_H
#ifndef RIGIDBODY2D_T939494601_H
#define RIGIDBODY2D_T939494601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody2D
struct  Rigidbody2D_t939494601  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY2D_T939494601_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef ANIMATION_T3648466861_H
#define ANIMATION_T3648466861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animation
struct  Animation_t3648466861  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATION_T3648466861_H
#ifndef ANIMATOR_T434523843_H
#define ANIMATOR_T434523843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t434523843  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T434523843_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t190067161 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t190067161 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t190067161 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t190067161 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t190067161 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t190067161 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef COLLIDER2D_T2806799626_H
#define COLLIDER2D_T2806799626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t2806799626  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T2806799626_H
#ifndef GUIELEMENT_T3567083079_H
#define GUIELEMENT_T3567083079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIElement
struct  GUIElement_t3567083079  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIELEMENT_T3567083079_H
#ifndef LIGHT_T3756812086_H
#define LIGHT_T3756812086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Light
struct  Light_t3756812086  : public Behaviour_t1437897464
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;

public:
	inline static int32_t get_offset_of_m_BakedIndex_4() { return static_cast<int32_t>(offsetof(Light_t3756812086, ___m_BakedIndex_4)); }
	inline int32_t get_m_BakedIndex_4() const { return ___m_BakedIndex_4; }
	inline int32_t* get_address_of_m_BakedIndex_4() { return &___m_BakedIndex_4; }
	inline void set_m_BakedIndex_4(int32_t value)
	{
		___m_BakedIndex_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIGHT_T3756812086_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef SPRINGJOINT_T1912369980_H
#define SPRINGJOINT_T1912369980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpringJoint
struct  SpringJoint_t1912369980  : public Joint_t1358886274
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRINGJOINT_T1912369980_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef GUITEXT_T402233326_H
#define GUITEXT_T402233326_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIText
struct  GUIText_t402233326  : public GUIElement_t3567083079
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUITEXT_T402233326_H
#ifndef IMAGEEFFECTBASE_T2026006575_H
#define IMAGEEFFECTBASE_T2026006575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.ImageEffectBase
struct  ImageEffectBase_t2026006575  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ImageEffectBase::shader
	Shader_t4151988712 * ___shader_4;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ImageEffectBase::m_Material
	Material_t340375123 * ___m_Material_5;

public:
	inline static int32_t get_offset_of_shader_4() { return static_cast<int32_t>(offsetof(ImageEffectBase_t2026006575, ___shader_4)); }
	inline Shader_t4151988712 * get_shader_4() const { return ___shader_4; }
	inline Shader_t4151988712 ** get_address_of_shader_4() { return &___shader_4; }
	inline void set_shader_4(Shader_t4151988712 * value)
	{
		___shader_4 = value;
		Il2CppCodeGenWriteBarrier((&___shader_4), value);
	}

	inline static int32_t get_offset_of_m_Material_5() { return static_cast<int32_t>(offsetof(ImageEffectBase_t2026006575, ___m_Material_5)); }
	inline Material_t340375123 * get_m_Material_5() const { return ___m_Material_5; }
	inline Material_t340375123 ** get_address_of_m_Material_5() { return &___m_Material_5; }
	inline void set_m_Material_5(Material_t340375123 * value)
	{
		___m_Material_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGEEFFECTBASE_T2026006575_H
#ifndef POSTEFFECTSBASE_T2404315739_H
#define POSTEFFECTSBASE_T2404315739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.PostEffectsBase
struct  PostEffectsBase_t2404315739  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::supportHDRTextures
	bool ___supportHDRTextures_4;
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::supportDX11
	bool ___supportDX11_5;
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::isSupported
	bool ___isSupported_6;
	// System.Collections.Generic.List`1<UnityEngine.Material> UnityStandardAssets.ImageEffects.PostEffectsBase::createdMaterials
	List_1_t1812449865 * ___createdMaterials_7;

public:
	inline static int32_t get_offset_of_supportHDRTextures_4() { return static_cast<int32_t>(offsetof(PostEffectsBase_t2404315739, ___supportHDRTextures_4)); }
	inline bool get_supportHDRTextures_4() const { return ___supportHDRTextures_4; }
	inline bool* get_address_of_supportHDRTextures_4() { return &___supportHDRTextures_4; }
	inline void set_supportHDRTextures_4(bool value)
	{
		___supportHDRTextures_4 = value;
	}

	inline static int32_t get_offset_of_supportDX11_5() { return static_cast<int32_t>(offsetof(PostEffectsBase_t2404315739, ___supportDX11_5)); }
	inline bool get_supportDX11_5() const { return ___supportDX11_5; }
	inline bool* get_address_of_supportDX11_5() { return &___supportDX11_5; }
	inline void set_supportDX11_5(bool value)
	{
		___supportDX11_5 = value;
	}

	inline static int32_t get_offset_of_isSupported_6() { return static_cast<int32_t>(offsetof(PostEffectsBase_t2404315739, ___isSupported_6)); }
	inline bool get_isSupported_6() const { return ___isSupported_6; }
	inline bool* get_address_of_isSupported_6() { return &___isSupported_6; }
	inline void set_isSupported_6(bool value)
	{
		___isSupported_6 = value;
	}

	inline static int32_t get_offset_of_createdMaterials_7() { return static_cast<int32_t>(offsetof(PostEffectsBase_t2404315739, ___createdMaterials_7)); }
	inline List_1_t1812449865 * get_createdMaterials_7() const { return ___createdMaterials_7; }
	inline List_1_t1812449865 ** get_address_of_createdMaterials_7() { return &___createdMaterials_7; }
	inline void set_createdMaterials_7(List_1_t1812449865 * value)
	{
		___createdMaterials_7 = value;
		Il2CppCodeGenWriteBarrier((&___createdMaterials_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTEFFECTSBASE_T2404315739_H
#ifndef ACTIVATETRIGGER_T3349759092_H
#define ACTIVATETRIGGER_T3349759092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.ActivateTrigger
struct  ActivateTrigger_t3349759092  : public MonoBehaviour_t3962482529
{
public:
	// UnityStandardAssets.Utility.ActivateTrigger/Mode UnityStandardAssets.Utility.ActivateTrigger::action
	int32_t ___action_4;
	// UnityEngine.Object UnityStandardAssets.Utility.ActivateTrigger::target
	Object_t631007953 * ___target_5;
	// UnityEngine.GameObject UnityStandardAssets.Utility.ActivateTrigger::source
	GameObject_t1113636619 * ___source_6;
	// System.Int32 UnityStandardAssets.Utility.ActivateTrigger::triggerCount
	int32_t ___triggerCount_7;
	// System.Boolean UnityStandardAssets.Utility.ActivateTrigger::repeatTrigger
	bool ___repeatTrigger_8;

public:
	inline static int32_t get_offset_of_action_4() { return static_cast<int32_t>(offsetof(ActivateTrigger_t3349759092, ___action_4)); }
	inline int32_t get_action_4() const { return ___action_4; }
	inline int32_t* get_address_of_action_4() { return &___action_4; }
	inline void set_action_4(int32_t value)
	{
		___action_4 = value;
	}

	inline static int32_t get_offset_of_target_5() { return static_cast<int32_t>(offsetof(ActivateTrigger_t3349759092, ___target_5)); }
	inline Object_t631007953 * get_target_5() const { return ___target_5; }
	inline Object_t631007953 ** get_address_of_target_5() { return &___target_5; }
	inline void set_target_5(Object_t631007953 * value)
	{
		___target_5 = value;
		Il2CppCodeGenWriteBarrier((&___target_5), value);
	}

	inline static int32_t get_offset_of_source_6() { return static_cast<int32_t>(offsetof(ActivateTrigger_t3349759092, ___source_6)); }
	inline GameObject_t1113636619 * get_source_6() const { return ___source_6; }
	inline GameObject_t1113636619 ** get_address_of_source_6() { return &___source_6; }
	inline void set_source_6(GameObject_t1113636619 * value)
	{
		___source_6 = value;
		Il2CppCodeGenWriteBarrier((&___source_6), value);
	}

	inline static int32_t get_offset_of_triggerCount_7() { return static_cast<int32_t>(offsetof(ActivateTrigger_t3349759092, ___triggerCount_7)); }
	inline int32_t get_triggerCount_7() const { return ___triggerCount_7; }
	inline int32_t* get_address_of_triggerCount_7() { return &___triggerCount_7; }
	inline void set_triggerCount_7(int32_t value)
	{
		___triggerCount_7 = value;
	}

	inline static int32_t get_offset_of_repeatTrigger_8() { return static_cast<int32_t>(offsetof(ActivateTrigger_t3349759092, ___repeatTrigger_8)); }
	inline bool get_repeatTrigger_8() const { return ___repeatTrigger_8; }
	inline bool* get_address_of_repeatTrigger_8() { return &___repeatTrigger_8; }
	inline void set_repeatTrigger_8(bool value)
	{
		___repeatTrigger_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATETRIGGER_T3349759092_H
#ifndef AUTOMOBILESHADERSWITCH_T568447889_H
#define AUTOMOBILESHADERSWITCH_T568447889_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.AutoMobileShaderSwitch
struct  AutoMobileShaderSwitch_t568447889  : public MonoBehaviour_t3962482529
{
public:
	// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementList UnityStandardAssets.Utility.AutoMobileShaderSwitch::m_ReplacementList
	ReplacementList_t1887104210 * ___m_ReplacementList_4;

public:
	inline static int32_t get_offset_of_m_ReplacementList_4() { return static_cast<int32_t>(offsetof(AutoMobileShaderSwitch_t568447889, ___m_ReplacementList_4)); }
	inline ReplacementList_t1887104210 * get_m_ReplacementList_4() const { return ___m_ReplacementList_4; }
	inline ReplacementList_t1887104210 ** get_address_of_m_ReplacementList_4() { return &___m_ReplacementList_4; }
	inline void set_m_ReplacementList_4(ReplacementList_t1887104210 * value)
	{
		___m_ReplacementList_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_ReplacementList_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTOMOBILESHADERSWITCH_T568447889_H
#ifndef AUTOMOVEANDROTATE_T2437913015_H
#define AUTOMOVEANDROTATE_T2437913015_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.AutoMoveAndRotate
struct  AutoMoveAndRotate_t2437913015  : public MonoBehaviour_t3962482529
{
public:
	// UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace UnityStandardAssets.Utility.AutoMoveAndRotate::moveUnitsPerSecond
	Vector3andSpace_t219844479 * ___moveUnitsPerSecond_4;
	// UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace UnityStandardAssets.Utility.AutoMoveAndRotate::rotateDegreesPerSecond
	Vector3andSpace_t219844479 * ___rotateDegreesPerSecond_5;
	// System.Boolean UnityStandardAssets.Utility.AutoMoveAndRotate::ignoreTimescale
	bool ___ignoreTimescale_6;
	// System.Single UnityStandardAssets.Utility.AutoMoveAndRotate::m_LastRealTime
	float ___m_LastRealTime_7;

public:
	inline static int32_t get_offset_of_moveUnitsPerSecond_4() { return static_cast<int32_t>(offsetof(AutoMoveAndRotate_t2437913015, ___moveUnitsPerSecond_4)); }
	inline Vector3andSpace_t219844479 * get_moveUnitsPerSecond_4() const { return ___moveUnitsPerSecond_4; }
	inline Vector3andSpace_t219844479 ** get_address_of_moveUnitsPerSecond_4() { return &___moveUnitsPerSecond_4; }
	inline void set_moveUnitsPerSecond_4(Vector3andSpace_t219844479 * value)
	{
		___moveUnitsPerSecond_4 = value;
		Il2CppCodeGenWriteBarrier((&___moveUnitsPerSecond_4), value);
	}

	inline static int32_t get_offset_of_rotateDegreesPerSecond_5() { return static_cast<int32_t>(offsetof(AutoMoveAndRotate_t2437913015, ___rotateDegreesPerSecond_5)); }
	inline Vector3andSpace_t219844479 * get_rotateDegreesPerSecond_5() const { return ___rotateDegreesPerSecond_5; }
	inline Vector3andSpace_t219844479 ** get_address_of_rotateDegreesPerSecond_5() { return &___rotateDegreesPerSecond_5; }
	inline void set_rotateDegreesPerSecond_5(Vector3andSpace_t219844479 * value)
	{
		___rotateDegreesPerSecond_5 = value;
		Il2CppCodeGenWriteBarrier((&___rotateDegreesPerSecond_5), value);
	}

	inline static int32_t get_offset_of_ignoreTimescale_6() { return static_cast<int32_t>(offsetof(AutoMoveAndRotate_t2437913015, ___ignoreTimescale_6)); }
	inline bool get_ignoreTimescale_6() const { return ___ignoreTimescale_6; }
	inline bool* get_address_of_ignoreTimescale_6() { return &___ignoreTimescale_6; }
	inline void set_ignoreTimescale_6(bool value)
	{
		___ignoreTimescale_6 = value;
	}

	inline static int32_t get_offset_of_m_LastRealTime_7() { return static_cast<int32_t>(offsetof(AutoMoveAndRotate_t2437913015, ___m_LastRealTime_7)); }
	inline float get_m_LastRealTime_7() const { return ___m_LastRealTime_7; }
	inline float* get_address_of_m_LastRealTime_7() { return &___m_LastRealTime_7; }
	inline void set_m_LastRealTime_7(float value)
	{
		___m_LastRealTime_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTOMOVEANDROTATE_T2437913015_H
#ifndef DRAGRIGIDBODY_T1600652016_H
#define DRAGRIGIDBODY_T1600652016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.DragRigidbody
struct  DragRigidbody_t1600652016  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.SpringJoint UnityStandardAssets.Utility.DragRigidbody::m_SpringJoint
	SpringJoint_t1912369980 * ___m_SpringJoint_10;

public:
	inline static int32_t get_offset_of_m_SpringJoint_10() { return static_cast<int32_t>(offsetof(DragRigidbody_t1600652016, ___m_SpringJoint_10)); }
	inline SpringJoint_t1912369980 * get_m_SpringJoint_10() const { return ___m_SpringJoint_10; }
	inline SpringJoint_t1912369980 ** get_address_of_m_SpringJoint_10() { return &___m_SpringJoint_10; }
	inline void set_m_SpringJoint_10(SpringJoint_t1912369980 * value)
	{
		___m_SpringJoint_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_SpringJoint_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRAGRIGIDBODY_T1600652016_H
#ifndef DYNAMICSHADOWSETTINGS_T59119858_H
#define DYNAMICSHADOWSETTINGS_T59119858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.DynamicShadowSettings
struct  DynamicShadowSettings_t59119858  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Light UnityStandardAssets.Utility.DynamicShadowSettings::sunLight
	Light_t3756812086 * ___sunLight_4;
	// System.Single UnityStandardAssets.Utility.DynamicShadowSettings::minHeight
	float ___minHeight_5;
	// System.Single UnityStandardAssets.Utility.DynamicShadowSettings::minShadowDistance
	float ___minShadowDistance_6;
	// System.Single UnityStandardAssets.Utility.DynamicShadowSettings::minShadowBias
	float ___minShadowBias_7;
	// System.Single UnityStandardAssets.Utility.DynamicShadowSettings::maxHeight
	float ___maxHeight_8;
	// System.Single UnityStandardAssets.Utility.DynamicShadowSettings::maxShadowDistance
	float ___maxShadowDistance_9;
	// System.Single UnityStandardAssets.Utility.DynamicShadowSettings::maxShadowBias
	float ___maxShadowBias_10;
	// System.Single UnityStandardAssets.Utility.DynamicShadowSettings::adaptTime
	float ___adaptTime_11;
	// System.Single UnityStandardAssets.Utility.DynamicShadowSettings::m_SmoothHeight
	float ___m_SmoothHeight_12;
	// System.Single UnityStandardAssets.Utility.DynamicShadowSettings::m_ChangeSpeed
	float ___m_ChangeSpeed_13;
	// System.Single UnityStandardAssets.Utility.DynamicShadowSettings::m_OriginalStrength
	float ___m_OriginalStrength_14;

public:
	inline static int32_t get_offset_of_sunLight_4() { return static_cast<int32_t>(offsetof(DynamicShadowSettings_t59119858, ___sunLight_4)); }
	inline Light_t3756812086 * get_sunLight_4() const { return ___sunLight_4; }
	inline Light_t3756812086 ** get_address_of_sunLight_4() { return &___sunLight_4; }
	inline void set_sunLight_4(Light_t3756812086 * value)
	{
		___sunLight_4 = value;
		Il2CppCodeGenWriteBarrier((&___sunLight_4), value);
	}

	inline static int32_t get_offset_of_minHeight_5() { return static_cast<int32_t>(offsetof(DynamicShadowSettings_t59119858, ___minHeight_5)); }
	inline float get_minHeight_5() const { return ___minHeight_5; }
	inline float* get_address_of_minHeight_5() { return &___minHeight_5; }
	inline void set_minHeight_5(float value)
	{
		___minHeight_5 = value;
	}

	inline static int32_t get_offset_of_minShadowDistance_6() { return static_cast<int32_t>(offsetof(DynamicShadowSettings_t59119858, ___minShadowDistance_6)); }
	inline float get_minShadowDistance_6() const { return ___minShadowDistance_6; }
	inline float* get_address_of_minShadowDistance_6() { return &___minShadowDistance_6; }
	inline void set_minShadowDistance_6(float value)
	{
		___minShadowDistance_6 = value;
	}

	inline static int32_t get_offset_of_minShadowBias_7() { return static_cast<int32_t>(offsetof(DynamicShadowSettings_t59119858, ___minShadowBias_7)); }
	inline float get_minShadowBias_7() const { return ___minShadowBias_7; }
	inline float* get_address_of_minShadowBias_7() { return &___minShadowBias_7; }
	inline void set_minShadowBias_7(float value)
	{
		___minShadowBias_7 = value;
	}

	inline static int32_t get_offset_of_maxHeight_8() { return static_cast<int32_t>(offsetof(DynamicShadowSettings_t59119858, ___maxHeight_8)); }
	inline float get_maxHeight_8() const { return ___maxHeight_8; }
	inline float* get_address_of_maxHeight_8() { return &___maxHeight_8; }
	inline void set_maxHeight_8(float value)
	{
		___maxHeight_8 = value;
	}

	inline static int32_t get_offset_of_maxShadowDistance_9() { return static_cast<int32_t>(offsetof(DynamicShadowSettings_t59119858, ___maxShadowDistance_9)); }
	inline float get_maxShadowDistance_9() const { return ___maxShadowDistance_9; }
	inline float* get_address_of_maxShadowDistance_9() { return &___maxShadowDistance_9; }
	inline void set_maxShadowDistance_9(float value)
	{
		___maxShadowDistance_9 = value;
	}

	inline static int32_t get_offset_of_maxShadowBias_10() { return static_cast<int32_t>(offsetof(DynamicShadowSettings_t59119858, ___maxShadowBias_10)); }
	inline float get_maxShadowBias_10() const { return ___maxShadowBias_10; }
	inline float* get_address_of_maxShadowBias_10() { return &___maxShadowBias_10; }
	inline void set_maxShadowBias_10(float value)
	{
		___maxShadowBias_10 = value;
	}

	inline static int32_t get_offset_of_adaptTime_11() { return static_cast<int32_t>(offsetof(DynamicShadowSettings_t59119858, ___adaptTime_11)); }
	inline float get_adaptTime_11() const { return ___adaptTime_11; }
	inline float* get_address_of_adaptTime_11() { return &___adaptTime_11; }
	inline void set_adaptTime_11(float value)
	{
		___adaptTime_11 = value;
	}

	inline static int32_t get_offset_of_m_SmoothHeight_12() { return static_cast<int32_t>(offsetof(DynamicShadowSettings_t59119858, ___m_SmoothHeight_12)); }
	inline float get_m_SmoothHeight_12() const { return ___m_SmoothHeight_12; }
	inline float* get_address_of_m_SmoothHeight_12() { return &___m_SmoothHeight_12; }
	inline void set_m_SmoothHeight_12(float value)
	{
		___m_SmoothHeight_12 = value;
	}

	inline static int32_t get_offset_of_m_ChangeSpeed_13() { return static_cast<int32_t>(offsetof(DynamicShadowSettings_t59119858, ___m_ChangeSpeed_13)); }
	inline float get_m_ChangeSpeed_13() const { return ___m_ChangeSpeed_13; }
	inline float* get_address_of_m_ChangeSpeed_13() { return &___m_ChangeSpeed_13; }
	inline void set_m_ChangeSpeed_13(float value)
	{
		___m_ChangeSpeed_13 = value;
	}

	inline static int32_t get_offset_of_m_OriginalStrength_14() { return static_cast<int32_t>(offsetof(DynamicShadowSettings_t59119858, ___m_OriginalStrength_14)); }
	inline float get_m_OriginalStrength_14() const { return ___m_OriginalStrength_14; }
	inline float* get_address_of_m_OriginalStrength_14() { return &___m_OriginalStrength_14; }
	inline void set_m_OriginalStrength_14(float value)
	{
		___m_OriginalStrength_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICSHADOWSETTINGS_T59119858_H
#ifndef FPSCOUNTER_T2351221284_H
#define FPSCOUNTER_T2351221284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.FPSCounter
struct  FPSCounter_t2351221284  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 UnityStandardAssets.Utility.FPSCounter::m_FpsAccumulator
	int32_t ___m_FpsAccumulator_5;
	// System.Single UnityStandardAssets.Utility.FPSCounter::m_FpsNextPeriod
	float ___m_FpsNextPeriod_6;
	// System.Int32 UnityStandardAssets.Utility.FPSCounter::m_CurrentFps
	int32_t ___m_CurrentFps_7;
	// UnityEngine.UI.Text UnityStandardAssets.Utility.FPSCounter::m_Text
	Text_t1901882714 * ___m_Text_9;

public:
	inline static int32_t get_offset_of_m_FpsAccumulator_5() { return static_cast<int32_t>(offsetof(FPSCounter_t2351221284, ___m_FpsAccumulator_5)); }
	inline int32_t get_m_FpsAccumulator_5() const { return ___m_FpsAccumulator_5; }
	inline int32_t* get_address_of_m_FpsAccumulator_5() { return &___m_FpsAccumulator_5; }
	inline void set_m_FpsAccumulator_5(int32_t value)
	{
		___m_FpsAccumulator_5 = value;
	}

	inline static int32_t get_offset_of_m_FpsNextPeriod_6() { return static_cast<int32_t>(offsetof(FPSCounter_t2351221284, ___m_FpsNextPeriod_6)); }
	inline float get_m_FpsNextPeriod_6() const { return ___m_FpsNextPeriod_6; }
	inline float* get_address_of_m_FpsNextPeriod_6() { return &___m_FpsNextPeriod_6; }
	inline void set_m_FpsNextPeriod_6(float value)
	{
		___m_FpsNextPeriod_6 = value;
	}

	inline static int32_t get_offset_of_m_CurrentFps_7() { return static_cast<int32_t>(offsetof(FPSCounter_t2351221284, ___m_CurrentFps_7)); }
	inline int32_t get_m_CurrentFps_7() const { return ___m_CurrentFps_7; }
	inline int32_t* get_address_of_m_CurrentFps_7() { return &___m_CurrentFps_7; }
	inline void set_m_CurrentFps_7(int32_t value)
	{
		___m_CurrentFps_7 = value;
	}

	inline static int32_t get_offset_of_m_Text_9() { return static_cast<int32_t>(offsetof(FPSCounter_t2351221284, ___m_Text_9)); }
	inline Text_t1901882714 * get_m_Text_9() const { return ___m_Text_9; }
	inline Text_t1901882714 ** get_address_of_m_Text_9() { return &___m_Text_9; }
	inline void set_m_Text_9(Text_t1901882714 * value)
	{
		___m_Text_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FPSCOUNTER_T2351221284_H
#ifndef FOLLOWTARGET_T166153614_H
#define FOLLOWTARGET_T166153614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.FollowTarget
struct  FollowTarget_t166153614  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform UnityStandardAssets.Utility.FollowTarget::target
	Transform_t3600365921 * ___target_4;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.FollowTarget::offset
	Vector3_t3722313464  ___offset_5;

public:
	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(FollowTarget_t166153614, ___target_4)); }
	inline Transform_t3600365921 * get_target_4() const { return ___target_4; }
	inline Transform_t3600365921 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(Transform_t3600365921 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier((&___target_4), value);
	}

	inline static int32_t get_offset_of_offset_5() { return static_cast<int32_t>(offsetof(FollowTarget_t166153614, ___offset_5)); }
	inline Vector3_t3722313464  get_offset_5() const { return ___offset_5; }
	inline Vector3_t3722313464 * get_address_of_offset_5() { return &___offset_5; }
	inline void set_offset_5(Vector3_t3722313464  value)
	{
		___offset_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOLLOWTARGET_T166153614_H
#ifndef OBJECTRESETTER_T639177103_H
#define OBJECTRESETTER_T639177103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.ObjectResetter
struct  ObjectResetter_t639177103  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector3 UnityStandardAssets.Utility.ObjectResetter::originalPosition
	Vector3_t3722313464  ___originalPosition_4;
	// UnityEngine.Quaternion UnityStandardAssets.Utility.ObjectResetter::originalRotation
	Quaternion_t2301928331  ___originalRotation_5;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityStandardAssets.Utility.ObjectResetter::originalStructure
	List_1_t777473367 * ___originalStructure_6;
	// UnityEngine.Rigidbody UnityStandardAssets.Utility.ObjectResetter::Rigidbody
	Rigidbody_t3916780224 * ___Rigidbody_7;

public:
	inline static int32_t get_offset_of_originalPosition_4() { return static_cast<int32_t>(offsetof(ObjectResetter_t639177103, ___originalPosition_4)); }
	inline Vector3_t3722313464  get_originalPosition_4() const { return ___originalPosition_4; }
	inline Vector3_t3722313464 * get_address_of_originalPosition_4() { return &___originalPosition_4; }
	inline void set_originalPosition_4(Vector3_t3722313464  value)
	{
		___originalPosition_4 = value;
	}

	inline static int32_t get_offset_of_originalRotation_5() { return static_cast<int32_t>(offsetof(ObjectResetter_t639177103, ___originalRotation_5)); }
	inline Quaternion_t2301928331  get_originalRotation_5() const { return ___originalRotation_5; }
	inline Quaternion_t2301928331 * get_address_of_originalRotation_5() { return &___originalRotation_5; }
	inline void set_originalRotation_5(Quaternion_t2301928331  value)
	{
		___originalRotation_5 = value;
	}

	inline static int32_t get_offset_of_originalStructure_6() { return static_cast<int32_t>(offsetof(ObjectResetter_t639177103, ___originalStructure_6)); }
	inline List_1_t777473367 * get_originalStructure_6() const { return ___originalStructure_6; }
	inline List_1_t777473367 ** get_address_of_originalStructure_6() { return &___originalStructure_6; }
	inline void set_originalStructure_6(List_1_t777473367 * value)
	{
		___originalStructure_6 = value;
		Il2CppCodeGenWriteBarrier((&___originalStructure_6), value);
	}

	inline static int32_t get_offset_of_Rigidbody_7() { return static_cast<int32_t>(offsetof(ObjectResetter_t639177103, ___Rigidbody_7)); }
	inline Rigidbody_t3916780224 * get_Rigidbody_7() const { return ___Rigidbody_7; }
	inline Rigidbody_t3916780224 ** get_address_of_Rigidbody_7() { return &___Rigidbody_7; }
	inline void set_Rigidbody_7(Rigidbody_t3916780224 * value)
	{
		___Rigidbody_7 = value;
		Il2CppCodeGenWriteBarrier((&___Rigidbody_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTRESETTER_T639177103_H
#ifndef PARTICLESYSTEMDESTROYER_T558680695_H
#define PARTICLESYSTEMDESTROYER_T558680695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.ParticleSystemDestroyer
struct  ParticleSystemDestroyer_t558680695  : public MonoBehaviour_t3962482529
{
public:
	// System.Single UnityStandardAssets.Utility.ParticleSystemDestroyer::minDuration
	float ___minDuration_4;
	// System.Single UnityStandardAssets.Utility.ParticleSystemDestroyer::maxDuration
	float ___maxDuration_5;
	// System.Single UnityStandardAssets.Utility.ParticleSystemDestroyer::m_MaxLifetime
	float ___m_MaxLifetime_6;
	// System.Boolean UnityStandardAssets.Utility.ParticleSystemDestroyer::m_EarlyStop
	bool ___m_EarlyStop_7;

public:
	inline static int32_t get_offset_of_minDuration_4() { return static_cast<int32_t>(offsetof(ParticleSystemDestroyer_t558680695, ___minDuration_4)); }
	inline float get_minDuration_4() const { return ___minDuration_4; }
	inline float* get_address_of_minDuration_4() { return &___minDuration_4; }
	inline void set_minDuration_4(float value)
	{
		___minDuration_4 = value;
	}

	inline static int32_t get_offset_of_maxDuration_5() { return static_cast<int32_t>(offsetof(ParticleSystemDestroyer_t558680695, ___maxDuration_5)); }
	inline float get_maxDuration_5() const { return ___maxDuration_5; }
	inline float* get_address_of_maxDuration_5() { return &___maxDuration_5; }
	inline void set_maxDuration_5(float value)
	{
		___maxDuration_5 = value;
	}

	inline static int32_t get_offset_of_m_MaxLifetime_6() { return static_cast<int32_t>(offsetof(ParticleSystemDestroyer_t558680695, ___m_MaxLifetime_6)); }
	inline float get_m_MaxLifetime_6() const { return ___m_MaxLifetime_6; }
	inline float* get_address_of_m_MaxLifetime_6() { return &___m_MaxLifetime_6; }
	inline void set_m_MaxLifetime_6(float value)
	{
		___m_MaxLifetime_6 = value;
	}

	inline static int32_t get_offset_of_m_EarlyStop_7() { return static_cast<int32_t>(offsetof(ParticleSystemDestroyer_t558680695, ___m_EarlyStop_7)); }
	inline bool get_m_EarlyStop_7() const { return ___m_EarlyStop_7; }
	inline bool* get_address_of_m_EarlyStop_7() { return &___m_EarlyStop_7; }
	inline void set_m_EarlyStop_7(bool value)
	{
		___m_EarlyStop_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEMDESTROYER_T558680695_H
#ifndef PLATFORMSPECIFICCONTENT_T1404549723_H
#define PLATFORMSPECIFICCONTENT_T1404549723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.PlatformSpecificContent
struct  PlatformSpecificContent_t1404549723  : public MonoBehaviour_t3962482529
{
public:
	// UnityStandardAssets.Utility.PlatformSpecificContent/BuildTargetGroup UnityStandardAssets.Utility.PlatformSpecificContent::m_BuildTargetGroup
	int32_t ___m_BuildTargetGroup_4;
	// UnityEngine.GameObject[] UnityStandardAssets.Utility.PlatformSpecificContent::m_Content
	GameObjectU5BU5D_t3328599146* ___m_Content_5;
	// UnityEngine.MonoBehaviour[] UnityStandardAssets.Utility.PlatformSpecificContent::m_MonoBehaviours
	MonoBehaviourU5BU5D_t2007329276* ___m_MonoBehaviours_6;
	// System.Boolean UnityStandardAssets.Utility.PlatformSpecificContent::m_ChildrenOfThisObject
	bool ___m_ChildrenOfThisObject_7;

public:
	inline static int32_t get_offset_of_m_BuildTargetGroup_4() { return static_cast<int32_t>(offsetof(PlatformSpecificContent_t1404549723, ___m_BuildTargetGroup_4)); }
	inline int32_t get_m_BuildTargetGroup_4() const { return ___m_BuildTargetGroup_4; }
	inline int32_t* get_address_of_m_BuildTargetGroup_4() { return &___m_BuildTargetGroup_4; }
	inline void set_m_BuildTargetGroup_4(int32_t value)
	{
		___m_BuildTargetGroup_4 = value;
	}

	inline static int32_t get_offset_of_m_Content_5() { return static_cast<int32_t>(offsetof(PlatformSpecificContent_t1404549723, ___m_Content_5)); }
	inline GameObjectU5BU5D_t3328599146* get_m_Content_5() const { return ___m_Content_5; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_m_Content_5() { return &___m_Content_5; }
	inline void set_m_Content_5(GameObjectU5BU5D_t3328599146* value)
	{
		___m_Content_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Content_5), value);
	}

	inline static int32_t get_offset_of_m_MonoBehaviours_6() { return static_cast<int32_t>(offsetof(PlatformSpecificContent_t1404549723, ___m_MonoBehaviours_6)); }
	inline MonoBehaviourU5BU5D_t2007329276* get_m_MonoBehaviours_6() const { return ___m_MonoBehaviours_6; }
	inline MonoBehaviourU5BU5D_t2007329276** get_address_of_m_MonoBehaviours_6() { return &___m_MonoBehaviours_6; }
	inline void set_m_MonoBehaviours_6(MonoBehaviourU5BU5D_t2007329276* value)
	{
		___m_MonoBehaviours_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_MonoBehaviours_6), value);
	}

	inline static int32_t get_offset_of_m_ChildrenOfThisObject_7() { return static_cast<int32_t>(offsetof(PlatformSpecificContent_t1404549723, ___m_ChildrenOfThisObject_7)); }
	inline bool get_m_ChildrenOfThisObject_7() const { return ___m_ChildrenOfThisObject_7; }
	inline bool* get_address_of_m_ChildrenOfThisObject_7() { return &___m_ChildrenOfThisObject_7; }
	inline void set_m_ChildrenOfThisObject_7(bool value)
	{
		___m_ChildrenOfThisObject_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORMSPECIFICCONTENT_T1404549723_H
#ifndef SIMPLEACTIVATORMENU_T1387811551_H
#define SIMPLEACTIVATORMENU_T1387811551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.SimpleActivatorMenu
struct  SimpleActivatorMenu_t1387811551  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GUIText UnityStandardAssets.Utility.SimpleActivatorMenu::camSwitchButton
	GUIText_t402233326 * ___camSwitchButton_4;
	// UnityEngine.GameObject[] UnityStandardAssets.Utility.SimpleActivatorMenu::objects
	GameObjectU5BU5D_t3328599146* ___objects_5;
	// System.Int32 UnityStandardAssets.Utility.SimpleActivatorMenu::m_CurrentActiveObject
	int32_t ___m_CurrentActiveObject_6;

public:
	inline static int32_t get_offset_of_camSwitchButton_4() { return static_cast<int32_t>(offsetof(SimpleActivatorMenu_t1387811551, ___camSwitchButton_4)); }
	inline GUIText_t402233326 * get_camSwitchButton_4() const { return ___camSwitchButton_4; }
	inline GUIText_t402233326 ** get_address_of_camSwitchButton_4() { return &___camSwitchButton_4; }
	inline void set_camSwitchButton_4(GUIText_t402233326 * value)
	{
		___camSwitchButton_4 = value;
		Il2CppCodeGenWriteBarrier((&___camSwitchButton_4), value);
	}

	inline static int32_t get_offset_of_objects_5() { return static_cast<int32_t>(offsetof(SimpleActivatorMenu_t1387811551, ___objects_5)); }
	inline GameObjectU5BU5D_t3328599146* get_objects_5() const { return ___objects_5; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_objects_5() { return &___objects_5; }
	inline void set_objects_5(GameObjectU5BU5D_t3328599146* value)
	{
		___objects_5 = value;
		Il2CppCodeGenWriteBarrier((&___objects_5), value);
	}

	inline static int32_t get_offset_of_m_CurrentActiveObject_6() { return static_cast<int32_t>(offsetof(SimpleActivatorMenu_t1387811551, ___m_CurrentActiveObject_6)); }
	inline int32_t get_m_CurrentActiveObject_6() const { return ___m_CurrentActiveObject_6; }
	inline int32_t* get_address_of_m_CurrentActiveObject_6() { return &___m_CurrentActiveObject_6; }
	inline void set_m_CurrentActiveObject_6(int32_t value)
	{
		___m_CurrentActiveObject_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEACTIVATORMENU_T1387811551_H
#ifndef SIMPLEMOUSEROTATOR_T2364742953_H
#define SIMPLEMOUSEROTATOR_T2364742953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.SimpleMouseRotator
struct  SimpleMouseRotator_t2364742953  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector2 UnityStandardAssets.Utility.SimpleMouseRotator::rotationRange
	Vector2_t2156229523  ___rotationRange_4;
	// System.Single UnityStandardAssets.Utility.SimpleMouseRotator::rotationSpeed
	float ___rotationSpeed_5;
	// System.Single UnityStandardAssets.Utility.SimpleMouseRotator::dampingTime
	float ___dampingTime_6;
	// System.Boolean UnityStandardAssets.Utility.SimpleMouseRotator::autoZeroVerticalOnMobile
	bool ___autoZeroVerticalOnMobile_7;
	// System.Boolean UnityStandardAssets.Utility.SimpleMouseRotator::autoZeroHorizontalOnMobile
	bool ___autoZeroHorizontalOnMobile_8;
	// System.Boolean UnityStandardAssets.Utility.SimpleMouseRotator::relative
	bool ___relative_9;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.SimpleMouseRotator::m_TargetAngles
	Vector3_t3722313464  ___m_TargetAngles_10;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.SimpleMouseRotator::m_FollowAngles
	Vector3_t3722313464  ___m_FollowAngles_11;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.SimpleMouseRotator::m_FollowVelocity
	Vector3_t3722313464  ___m_FollowVelocity_12;
	// UnityEngine.Quaternion UnityStandardAssets.Utility.SimpleMouseRotator::m_OriginalRotation
	Quaternion_t2301928331  ___m_OriginalRotation_13;

public:
	inline static int32_t get_offset_of_rotationRange_4() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t2364742953, ___rotationRange_4)); }
	inline Vector2_t2156229523  get_rotationRange_4() const { return ___rotationRange_4; }
	inline Vector2_t2156229523 * get_address_of_rotationRange_4() { return &___rotationRange_4; }
	inline void set_rotationRange_4(Vector2_t2156229523  value)
	{
		___rotationRange_4 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_5() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t2364742953, ___rotationSpeed_5)); }
	inline float get_rotationSpeed_5() const { return ___rotationSpeed_5; }
	inline float* get_address_of_rotationSpeed_5() { return &___rotationSpeed_5; }
	inline void set_rotationSpeed_5(float value)
	{
		___rotationSpeed_5 = value;
	}

	inline static int32_t get_offset_of_dampingTime_6() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t2364742953, ___dampingTime_6)); }
	inline float get_dampingTime_6() const { return ___dampingTime_6; }
	inline float* get_address_of_dampingTime_6() { return &___dampingTime_6; }
	inline void set_dampingTime_6(float value)
	{
		___dampingTime_6 = value;
	}

	inline static int32_t get_offset_of_autoZeroVerticalOnMobile_7() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t2364742953, ___autoZeroVerticalOnMobile_7)); }
	inline bool get_autoZeroVerticalOnMobile_7() const { return ___autoZeroVerticalOnMobile_7; }
	inline bool* get_address_of_autoZeroVerticalOnMobile_7() { return &___autoZeroVerticalOnMobile_7; }
	inline void set_autoZeroVerticalOnMobile_7(bool value)
	{
		___autoZeroVerticalOnMobile_7 = value;
	}

	inline static int32_t get_offset_of_autoZeroHorizontalOnMobile_8() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t2364742953, ___autoZeroHorizontalOnMobile_8)); }
	inline bool get_autoZeroHorizontalOnMobile_8() const { return ___autoZeroHorizontalOnMobile_8; }
	inline bool* get_address_of_autoZeroHorizontalOnMobile_8() { return &___autoZeroHorizontalOnMobile_8; }
	inline void set_autoZeroHorizontalOnMobile_8(bool value)
	{
		___autoZeroHorizontalOnMobile_8 = value;
	}

	inline static int32_t get_offset_of_relative_9() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t2364742953, ___relative_9)); }
	inline bool get_relative_9() const { return ___relative_9; }
	inline bool* get_address_of_relative_9() { return &___relative_9; }
	inline void set_relative_9(bool value)
	{
		___relative_9 = value;
	}

	inline static int32_t get_offset_of_m_TargetAngles_10() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t2364742953, ___m_TargetAngles_10)); }
	inline Vector3_t3722313464  get_m_TargetAngles_10() const { return ___m_TargetAngles_10; }
	inline Vector3_t3722313464 * get_address_of_m_TargetAngles_10() { return &___m_TargetAngles_10; }
	inline void set_m_TargetAngles_10(Vector3_t3722313464  value)
	{
		___m_TargetAngles_10 = value;
	}

	inline static int32_t get_offset_of_m_FollowAngles_11() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t2364742953, ___m_FollowAngles_11)); }
	inline Vector3_t3722313464  get_m_FollowAngles_11() const { return ___m_FollowAngles_11; }
	inline Vector3_t3722313464 * get_address_of_m_FollowAngles_11() { return &___m_FollowAngles_11; }
	inline void set_m_FollowAngles_11(Vector3_t3722313464  value)
	{
		___m_FollowAngles_11 = value;
	}

	inline static int32_t get_offset_of_m_FollowVelocity_12() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t2364742953, ___m_FollowVelocity_12)); }
	inline Vector3_t3722313464  get_m_FollowVelocity_12() const { return ___m_FollowVelocity_12; }
	inline Vector3_t3722313464 * get_address_of_m_FollowVelocity_12() { return &___m_FollowVelocity_12; }
	inline void set_m_FollowVelocity_12(Vector3_t3722313464  value)
	{
		___m_FollowVelocity_12 = value;
	}

	inline static int32_t get_offset_of_m_OriginalRotation_13() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t2364742953, ___m_OriginalRotation_13)); }
	inline Quaternion_t2301928331  get_m_OriginalRotation_13() const { return ___m_OriginalRotation_13; }
	inline Quaternion_t2301928331 * get_address_of_m_OriginalRotation_13() { return &___m_OriginalRotation_13; }
	inline void set_m_OriginalRotation_13(Quaternion_t2301928331  value)
	{
		___m_OriginalRotation_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEMOUSEROTATOR_T2364742953_H
#ifndef SMOOTHFOLLOW_T4204731361_H
#define SMOOTHFOLLOW_T4204731361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.SmoothFollow
struct  SmoothFollow_t4204731361  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform UnityStandardAssets.Utility.SmoothFollow::target
	Transform_t3600365921 * ___target_4;
	// System.Single UnityStandardAssets.Utility.SmoothFollow::distance
	float ___distance_5;
	// System.Single UnityStandardAssets.Utility.SmoothFollow::height
	float ___height_6;
	// System.Single UnityStandardAssets.Utility.SmoothFollow::rotationDamping
	float ___rotationDamping_7;
	// System.Single UnityStandardAssets.Utility.SmoothFollow::heightDamping
	float ___heightDamping_8;

public:
	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(SmoothFollow_t4204731361, ___target_4)); }
	inline Transform_t3600365921 * get_target_4() const { return ___target_4; }
	inline Transform_t3600365921 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(Transform_t3600365921 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier((&___target_4), value);
	}

	inline static int32_t get_offset_of_distance_5() { return static_cast<int32_t>(offsetof(SmoothFollow_t4204731361, ___distance_5)); }
	inline float get_distance_5() const { return ___distance_5; }
	inline float* get_address_of_distance_5() { return &___distance_5; }
	inline void set_distance_5(float value)
	{
		___distance_5 = value;
	}

	inline static int32_t get_offset_of_height_6() { return static_cast<int32_t>(offsetof(SmoothFollow_t4204731361, ___height_6)); }
	inline float get_height_6() const { return ___height_6; }
	inline float* get_address_of_height_6() { return &___height_6; }
	inline void set_height_6(float value)
	{
		___height_6 = value;
	}

	inline static int32_t get_offset_of_rotationDamping_7() { return static_cast<int32_t>(offsetof(SmoothFollow_t4204731361, ___rotationDamping_7)); }
	inline float get_rotationDamping_7() const { return ___rotationDamping_7; }
	inline float* get_address_of_rotationDamping_7() { return &___rotationDamping_7; }
	inline void set_rotationDamping_7(float value)
	{
		___rotationDamping_7 = value;
	}

	inline static int32_t get_offset_of_heightDamping_8() { return static_cast<int32_t>(offsetof(SmoothFollow_t4204731361, ___heightDamping_8)); }
	inline float get_heightDamping_8() const { return ___heightDamping_8; }
	inline float* get_address_of_heightDamping_8() { return &___heightDamping_8; }
	inline void set_heightDamping_8(float value)
	{
		___heightDamping_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SMOOTHFOLLOW_T4204731361_H
#ifndef TIMEDOBJECTACTIVATOR_T1846709985_H
#define TIMEDOBJECTACTIVATOR_T1846709985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.TimedObjectActivator
struct  TimedObjectActivator_t1846709985  : public MonoBehaviour_t3962482529
{
public:
	// UnityStandardAssets.Utility.TimedObjectActivator/Entries UnityStandardAssets.Utility.TimedObjectActivator::entries
	Entries_t3168066469 * ___entries_4;

public:
	inline static int32_t get_offset_of_entries_4() { return static_cast<int32_t>(offsetof(TimedObjectActivator_t1846709985, ___entries_4)); }
	inline Entries_t3168066469 * get_entries_4() const { return ___entries_4; }
	inline Entries_t3168066469 ** get_address_of_entries_4() { return &___entries_4; }
	inline void set_entries_4(Entries_t3168066469 * value)
	{
		___entries_4 = value;
		Il2CppCodeGenWriteBarrier((&___entries_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEDOBJECTACTIVATOR_T1846709985_H
#ifndef TIMEDOBJECTDESTRUCTOR_T3438860414_H
#define TIMEDOBJECTDESTRUCTOR_T3438860414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.TimedObjectDestructor
struct  TimedObjectDestructor_t3438860414  : public MonoBehaviour_t3962482529
{
public:
	// System.Single UnityStandardAssets.Utility.TimedObjectDestructor::m_TimeOut
	float ___m_TimeOut_4;
	// System.Boolean UnityStandardAssets.Utility.TimedObjectDestructor::m_DetachChildren
	bool ___m_DetachChildren_5;

public:
	inline static int32_t get_offset_of_m_TimeOut_4() { return static_cast<int32_t>(offsetof(TimedObjectDestructor_t3438860414, ___m_TimeOut_4)); }
	inline float get_m_TimeOut_4() const { return ___m_TimeOut_4; }
	inline float* get_address_of_m_TimeOut_4() { return &___m_TimeOut_4; }
	inline void set_m_TimeOut_4(float value)
	{
		___m_TimeOut_4 = value;
	}

	inline static int32_t get_offset_of_m_DetachChildren_5() { return static_cast<int32_t>(offsetof(TimedObjectDestructor_t3438860414, ___m_DetachChildren_5)); }
	inline bool get_m_DetachChildren_5() const { return ___m_DetachChildren_5; }
	inline bool* get_address_of_m_DetachChildren_5() { return &___m_DetachChildren_5; }
	inline void set_m_DetachChildren_5(bool value)
	{
		___m_DetachChildren_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEDOBJECTDESTRUCTOR_T3438860414_H
#ifndef WAYPOINTCIRCUIT_T445075330_H
#define WAYPOINTCIRCUIT_T445075330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointCircuit
struct  WaypointCircuit_t445075330  : public MonoBehaviour_t3962482529
{
public:
	// UnityStandardAssets.Utility.WaypointCircuit/WaypointList UnityStandardAssets.Utility.WaypointCircuit::waypointList
	WaypointList_t2584574554 * ___waypointList_4;
	// System.Boolean UnityStandardAssets.Utility.WaypointCircuit::smoothRoute
	bool ___smoothRoute_5;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::numPoints
	int32_t ___numPoints_6;
	// UnityEngine.Vector3[] UnityStandardAssets.Utility.WaypointCircuit::points
	Vector3U5BU5D_t1718750761* ___points_7;
	// System.Single[] UnityStandardAssets.Utility.WaypointCircuit::distances
	SingleU5BU5D_t1444911251* ___distances_8;
	// System.Single UnityStandardAssets.Utility.WaypointCircuit::editorVisualisationSubsteps
	float ___editorVisualisationSubsteps_9;
	// System.Single UnityStandardAssets.Utility.WaypointCircuit::<Length>k__BackingField
	float ___U3CLengthU3Ek__BackingField_10;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::p0n
	int32_t ___p0n_11;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::p1n
	int32_t ___p1n_12;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::p2n
	int32_t ___p2n_13;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::p3n
	int32_t ___p3n_14;
	// System.Single UnityStandardAssets.Utility.WaypointCircuit::i
	float ___i_15;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::P0
	Vector3_t3722313464  ___P0_16;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::P1
	Vector3_t3722313464  ___P1_17;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::P2
	Vector3_t3722313464  ___P2_18;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::P3
	Vector3_t3722313464  ___P3_19;

public:
	inline static int32_t get_offset_of_waypointList_4() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___waypointList_4)); }
	inline WaypointList_t2584574554 * get_waypointList_4() const { return ___waypointList_4; }
	inline WaypointList_t2584574554 ** get_address_of_waypointList_4() { return &___waypointList_4; }
	inline void set_waypointList_4(WaypointList_t2584574554 * value)
	{
		___waypointList_4 = value;
		Il2CppCodeGenWriteBarrier((&___waypointList_4), value);
	}

	inline static int32_t get_offset_of_smoothRoute_5() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___smoothRoute_5)); }
	inline bool get_smoothRoute_5() const { return ___smoothRoute_5; }
	inline bool* get_address_of_smoothRoute_5() { return &___smoothRoute_5; }
	inline void set_smoothRoute_5(bool value)
	{
		___smoothRoute_5 = value;
	}

	inline static int32_t get_offset_of_numPoints_6() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___numPoints_6)); }
	inline int32_t get_numPoints_6() const { return ___numPoints_6; }
	inline int32_t* get_address_of_numPoints_6() { return &___numPoints_6; }
	inline void set_numPoints_6(int32_t value)
	{
		___numPoints_6 = value;
	}

	inline static int32_t get_offset_of_points_7() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___points_7)); }
	inline Vector3U5BU5D_t1718750761* get_points_7() const { return ___points_7; }
	inline Vector3U5BU5D_t1718750761** get_address_of_points_7() { return &___points_7; }
	inline void set_points_7(Vector3U5BU5D_t1718750761* value)
	{
		___points_7 = value;
		Il2CppCodeGenWriteBarrier((&___points_7), value);
	}

	inline static int32_t get_offset_of_distances_8() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___distances_8)); }
	inline SingleU5BU5D_t1444911251* get_distances_8() const { return ___distances_8; }
	inline SingleU5BU5D_t1444911251** get_address_of_distances_8() { return &___distances_8; }
	inline void set_distances_8(SingleU5BU5D_t1444911251* value)
	{
		___distances_8 = value;
		Il2CppCodeGenWriteBarrier((&___distances_8), value);
	}

	inline static int32_t get_offset_of_editorVisualisationSubsteps_9() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___editorVisualisationSubsteps_9)); }
	inline float get_editorVisualisationSubsteps_9() const { return ___editorVisualisationSubsteps_9; }
	inline float* get_address_of_editorVisualisationSubsteps_9() { return &___editorVisualisationSubsteps_9; }
	inline void set_editorVisualisationSubsteps_9(float value)
	{
		___editorVisualisationSubsteps_9 = value;
	}

	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___U3CLengthU3Ek__BackingField_10)); }
	inline float get_U3CLengthU3Ek__BackingField_10() const { return ___U3CLengthU3Ek__BackingField_10; }
	inline float* get_address_of_U3CLengthU3Ek__BackingField_10() { return &___U3CLengthU3Ek__BackingField_10; }
	inline void set_U3CLengthU3Ek__BackingField_10(float value)
	{
		___U3CLengthU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_p0n_11() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___p0n_11)); }
	inline int32_t get_p0n_11() const { return ___p0n_11; }
	inline int32_t* get_address_of_p0n_11() { return &___p0n_11; }
	inline void set_p0n_11(int32_t value)
	{
		___p0n_11 = value;
	}

	inline static int32_t get_offset_of_p1n_12() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___p1n_12)); }
	inline int32_t get_p1n_12() const { return ___p1n_12; }
	inline int32_t* get_address_of_p1n_12() { return &___p1n_12; }
	inline void set_p1n_12(int32_t value)
	{
		___p1n_12 = value;
	}

	inline static int32_t get_offset_of_p2n_13() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___p2n_13)); }
	inline int32_t get_p2n_13() const { return ___p2n_13; }
	inline int32_t* get_address_of_p2n_13() { return &___p2n_13; }
	inline void set_p2n_13(int32_t value)
	{
		___p2n_13 = value;
	}

	inline static int32_t get_offset_of_p3n_14() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___p3n_14)); }
	inline int32_t get_p3n_14() const { return ___p3n_14; }
	inline int32_t* get_address_of_p3n_14() { return &___p3n_14; }
	inline void set_p3n_14(int32_t value)
	{
		___p3n_14 = value;
	}

	inline static int32_t get_offset_of_i_15() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___i_15)); }
	inline float get_i_15() const { return ___i_15; }
	inline float* get_address_of_i_15() { return &___i_15; }
	inline void set_i_15(float value)
	{
		___i_15 = value;
	}

	inline static int32_t get_offset_of_P0_16() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___P0_16)); }
	inline Vector3_t3722313464  get_P0_16() const { return ___P0_16; }
	inline Vector3_t3722313464 * get_address_of_P0_16() { return &___P0_16; }
	inline void set_P0_16(Vector3_t3722313464  value)
	{
		___P0_16 = value;
	}

	inline static int32_t get_offset_of_P1_17() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___P1_17)); }
	inline Vector3_t3722313464  get_P1_17() const { return ___P1_17; }
	inline Vector3_t3722313464 * get_address_of_P1_17() { return &___P1_17; }
	inline void set_P1_17(Vector3_t3722313464  value)
	{
		___P1_17 = value;
	}

	inline static int32_t get_offset_of_P2_18() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___P2_18)); }
	inline Vector3_t3722313464  get_P2_18() const { return ___P2_18; }
	inline Vector3_t3722313464 * get_address_of_P2_18() { return &___P2_18; }
	inline void set_P2_18(Vector3_t3722313464  value)
	{
		___P2_18 = value;
	}

	inline static int32_t get_offset_of_P3_19() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___P3_19)); }
	inline Vector3_t3722313464  get_P3_19() const { return ___P3_19; }
	inline Vector3_t3722313464 * get_address_of_P3_19() { return &___P3_19; }
	inline void set_P3_19(Vector3_t3722313464  value)
	{
		___P3_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAYPOINTCIRCUIT_T445075330_H
#ifndef WAYPOINTPROGRESSTRACKER_T1841386251_H
#define WAYPOINTPROGRESSTRACKER_T1841386251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointProgressTracker
struct  WaypointProgressTracker_t1841386251  : public MonoBehaviour_t3962482529
{
public:
	// UnityStandardAssets.Utility.WaypointCircuit UnityStandardAssets.Utility.WaypointProgressTracker::circuit
	WaypointCircuit_t445075330 * ___circuit_4;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForTargetOffset
	float ___lookAheadForTargetOffset_5;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForTargetFactor
	float ___lookAheadForTargetFactor_6;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForSpeedOffset
	float ___lookAheadForSpeedOffset_7;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForSpeedFactor
	float ___lookAheadForSpeedFactor_8;
	// UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle UnityStandardAssets.Utility.WaypointProgressTracker::progressStyle
	int32_t ___progressStyle_9;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::pointToPointThreshold
	float ___pointToPointThreshold_10;
	// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::<targetPoint>k__BackingField
	RoutePoint_t3880028948  ___U3CtargetPointU3Ek__BackingField_11;
	// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::<speedPoint>k__BackingField
	RoutePoint_t3880028948  ___U3CspeedPointU3Ek__BackingField_12;
	// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::<progressPoint>k__BackingField
	RoutePoint_t3880028948  ___U3CprogressPointU3Ek__BackingField_13;
	// UnityEngine.Transform UnityStandardAssets.Utility.WaypointProgressTracker::target
	Transform_t3600365921 * ___target_14;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::progressDistance
	float ___progressDistance_15;
	// System.Int32 UnityStandardAssets.Utility.WaypointProgressTracker::progressNum
	int32_t ___progressNum_16;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointProgressTracker::lastPosition
	Vector3_t3722313464  ___lastPosition_17;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::speed
	float ___speed_18;

public:
	inline static int32_t get_offset_of_circuit_4() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___circuit_4)); }
	inline WaypointCircuit_t445075330 * get_circuit_4() const { return ___circuit_4; }
	inline WaypointCircuit_t445075330 ** get_address_of_circuit_4() { return &___circuit_4; }
	inline void set_circuit_4(WaypointCircuit_t445075330 * value)
	{
		___circuit_4 = value;
		Il2CppCodeGenWriteBarrier((&___circuit_4), value);
	}

	inline static int32_t get_offset_of_lookAheadForTargetOffset_5() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___lookAheadForTargetOffset_5)); }
	inline float get_lookAheadForTargetOffset_5() const { return ___lookAheadForTargetOffset_5; }
	inline float* get_address_of_lookAheadForTargetOffset_5() { return &___lookAheadForTargetOffset_5; }
	inline void set_lookAheadForTargetOffset_5(float value)
	{
		___lookAheadForTargetOffset_5 = value;
	}

	inline static int32_t get_offset_of_lookAheadForTargetFactor_6() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___lookAheadForTargetFactor_6)); }
	inline float get_lookAheadForTargetFactor_6() const { return ___lookAheadForTargetFactor_6; }
	inline float* get_address_of_lookAheadForTargetFactor_6() { return &___lookAheadForTargetFactor_6; }
	inline void set_lookAheadForTargetFactor_6(float value)
	{
		___lookAheadForTargetFactor_6 = value;
	}

	inline static int32_t get_offset_of_lookAheadForSpeedOffset_7() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___lookAheadForSpeedOffset_7)); }
	inline float get_lookAheadForSpeedOffset_7() const { return ___lookAheadForSpeedOffset_7; }
	inline float* get_address_of_lookAheadForSpeedOffset_7() { return &___lookAheadForSpeedOffset_7; }
	inline void set_lookAheadForSpeedOffset_7(float value)
	{
		___lookAheadForSpeedOffset_7 = value;
	}

	inline static int32_t get_offset_of_lookAheadForSpeedFactor_8() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___lookAheadForSpeedFactor_8)); }
	inline float get_lookAheadForSpeedFactor_8() const { return ___lookAheadForSpeedFactor_8; }
	inline float* get_address_of_lookAheadForSpeedFactor_8() { return &___lookAheadForSpeedFactor_8; }
	inline void set_lookAheadForSpeedFactor_8(float value)
	{
		___lookAheadForSpeedFactor_8 = value;
	}

	inline static int32_t get_offset_of_progressStyle_9() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___progressStyle_9)); }
	inline int32_t get_progressStyle_9() const { return ___progressStyle_9; }
	inline int32_t* get_address_of_progressStyle_9() { return &___progressStyle_9; }
	inline void set_progressStyle_9(int32_t value)
	{
		___progressStyle_9 = value;
	}

	inline static int32_t get_offset_of_pointToPointThreshold_10() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___pointToPointThreshold_10)); }
	inline float get_pointToPointThreshold_10() const { return ___pointToPointThreshold_10; }
	inline float* get_address_of_pointToPointThreshold_10() { return &___pointToPointThreshold_10; }
	inline void set_pointToPointThreshold_10(float value)
	{
		___pointToPointThreshold_10 = value;
	}

	inline static int32_t get_offset_of_U3CtargetPointU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___U3CtargetPointU3Ek__BackingField_11)); }
	inline RoutePoint_t3880028948  get_U3CtargetPointU3Ek__BackingField_11() const { return ___U3CtargetPointU3Ek__BackingField_11; }
	inline RoutePoint_t3880028948 * get_address_of_U3CtargetPointU3Ek__BackingField_11() { return &___U3CtargetPointU3Ek__BackingField_11; }
	inline void set_U3CtargetPointU3Ek__BackingField_11(RoutePoint_t3880028948  value)
	{
		___U3CtargetPointU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CspeedPointU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___U3CspeedPointU3Ek__BackingField_12)); }
	inline RoutePoint_t3880028948  get_U3CspeedPointU3Ek__BackingField_12() const { return ___U3CspeedPointU3Ek__BackingField_12; }
	inline RoutePoint_t3880028948 * get_address_of_U3CspeedPointU3Ek__BackingField_12() { return &___U3CspeedPointU3Ek__BackingField_12; }
	inline void set_U3CspeedPointU3Ek__BackingField_12(RoutePoint_t3880028948  value)
	{
		___U3CspeedPointU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CprogressPointU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___U3CprogressPointU3Ek__BackingField_13)); }
	inline RoutePoint_t3880028948  get_U3CprogressPointU3Ek__BackingField_13() const { return ___U3CprogressPointU3Ek__BackingField_13; }
	inline RoutePoint_t3880028948 * get_address_of_U3CprogressPointU3Ek__BackingField_13() { return &___U3CprogressPointU3Ek__BackingField_13; }
	inline void set_U3CprogressPointU3Ek__BackingField_13(RoutePoint_t3880028948  value)
	{
		___U3CprogressPointU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_target_14() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___target_14)); }
	inline Transform_t3600365921 * get_target_14() const { return ___target_14; }
	inline Transform_t3600365921 ** get_address_of_target_14() { return &___target_14; }
	inline void set_target_14(Transform_t3600365921 * value)
	{
		___target_14 = value;
		Il2CppCodeGenWriteBarrier((&___target_14), value);
	}

	inline static int32_t get_offset_of_progressDistance_15() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___progressDistance_15)); }
	inline float get_progressDistance_15() const { return ___progressDistance_15; }
	inline float* get_address_of_progressDistance_15() { return &___progressDistance_15; }
	inline void set_progressDistance_15(float value)
	{
		___progressDistance_15 = value;
	}

	inline static int32_t get_offset_of_progressNum_16() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___progressNum_16)); }
	inline int32_t get_progressNum_16() const { return ___progressNum_16; }
	inline int32_t* get_address_of_progressNum_16() { return &___progressNum_16; }
	inline void set_progressNum_16(int32_t value)
	{
		___progressNum_16 = value;
	}

	inline static int32_t get_offset_of_lastPosition_17() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___lastPosition_17)); }
	inline Vector3_t3722313464  get_lastPosition_17() const { return ___lastPosition_17; }
	inline Vector3_t3722313464 * get_address_of_lastPosition_17() { return &___lastPosition_17; }
	inline void set_lastPosition_17(Vector3_t3722313464  value)
	{
		___lastPosition_17 = value;
	}

	inline static int32_t get_offset_of_speed_18() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___speed_18)); }
	inline float get_speed_18() const { return ___speed_18; }
	inline float* get_address_of_speed_18() { return &___speed_18; }
	inline void set_speed_18(float value)
	{
		___speed_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAYPOINTPROGRESSTRACKER_T1841386251_H
#ifndef BALL_T2378314638_H
#define BALL_T2378314638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Ball.Ball
struct  Ball_t2378314638  : public MonoBehaviour_t3962482529
{
public:
	// System.Single UnityStandardAssets.Vehicles.Ball.Ball::m_MovePower
	float ___m_MovePower_4;
	// System.Boolean UnityStandardAssets.Vehicles.Ball.Ball::m_UseTorque
	bool ___m_UseTorque_5;
	// System.Single UnityStandardAssets.Vehicles.Ball.Ball::m_MaxAngularVelocity
	float ___m_MaxAngularVelocity_6;
	// System.Single UnityStandardAssets.Vehicles.Ball.Ball::m_JumpPower
	float ___m_JumpPower_7;
	// UnityEngine.Rigidbody UnityStandardAssets.Vehicles.Ball.Ball::m_Rigidbody
	Rigidbody_t3916780224 * ___m_Rigidbody_9;

public:
	inline static int32_t get_offset_of_m_MovePower_4() { return static_cast<int32_t>(offsetof(Ball_t2378314638, ___m_MovePower_4)); }
	inline float get_m_MovePower_4() const { return ___m_MovePower_4; }
	inline float* get_address_of_m_MovePower_4() { return &___m_MovePower_4; }
	inline void set_m_MovePower_4(float value)
	{
		___m_MovePower_4 = value;
	}

	inline static int32_t get_offset_of_m_UseTorque_5() { return static_cast<int32_t>(offsetof(Ball_t2378314638, ___m_UseTorque_5)); }
	inline bool get_m_UseTorque_5() const { return ___m_UseTorque_5; }
	inline bool* get_address_of_m_UseTorque_5() { return &___m_UseTorque_5; }
	inline void set_m_UseTorque_5(bool value)
	{
		___m_UseTorque_5 = value;
	}

	inline static int32_t get_offset_of_m_MaxAngularVelocity_6() { return static_cast<int32_t>(offsetof(Ball_t2378314638, ___m_MaxAngularVelocity_6)); }
	inline float get_m_MaxAngularVelocity_6() const { return ___m_MaxAngularVelocity_6; }
	inline float* get_address_of_m_MaxAngularVelocity_6() { return &___m_MaxAngularVelocity_6; }
	inline void set_m_MaxAngularVelocity_6(float value)
	{
		___m_MaxAngularVelocity_6 = value;
	}

	inline static int32_t get_offset_of_m_JumpPower_7() { return static_cast<int32_t>(offsetof(Ball_t2378314638, ___m_JumpPower_7)); }
	inline float get_m_JumpPower_7() const { return ___m_JumpPower_7; }
	inline float* get_address_of_m_JumpPower_7() { return &___m_JumpPower_7; }
	inline void set_m_JumpPower_7(float value)
	{
		___m_JumpPower_7 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_9() { return static_cast<int32_t>(offsetof(Ball_t2378314638, ___m_Rigidbody_9)); }
	inline Rigidbody_t3916780224 * get_m_Rigidbody_9() const { return ___m_Rigidbody_9; }
	inline Rigidbody_t3916780224 ** get_address_of_m_Rigidbody_9() { return &___m_Rigidbody_9; }
	inline void set_m_Rigidbody_9(Rigidbody_t3916780224 * value)
	{
		___m_Rigidbody_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rigidbody_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BALL_T2378314638_H
#ifndef BALLUSERCONTROL_T2574698008_H
#define BALLUSERCONTROL_T2574698008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Ball.BallUserControl
struct  BallUserControl_t2574698008  : public MonoBehaviour_t3962482529
{
public:
	// UnityStandardAssets.Vehicles.Ball.Ball UnityStandardAssets.Vehicles.Ball.BallUserControl::ball
	Ball_t2378314638 * ___ball_4;
	// UnityEngine.Vector3 UnityStandardAssets.Vehicles.Ball.BallUserControl::move
	Vector3_t3722313464  ___move_5;
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Ball.BallUserControl::cam
	Transform_t3600365921 * ___cam_6;
	// UnityEngine.Vector3 UnityStandardAssets.Vehicles.Ball.BallUserControl::camForward
	Vector3_t3722313464  ___camForward_7;
	// System.Boolean UnityStandardAssets.Vehicles.Ball.BallUserControl::jump
	bool ___jump_8;

public:
	inline static int32_t get_offset_of_ball_4() { return static_cast<int32_t>(offsetof(BallUserControl_t2574698008, ___ball_4)); }
	inline Ball_t2378314638 * get_ball_4() const { return ___ball_4; }
	inline Ball_t2378314638 ** get_address_of_ball_4() { return &___ball_4; }
	inline void set_ball_4(Ball_t2378314638 * value)
	{
		___ball_4 = value;
		Il2CppCodeGenWriteBarrier((&___ball_4), value);
	}

	inline static int32_t get_offset_of_move_5() { return static_cast<int32_t>(offsetof(BallUserControl_t2574698008, ___move_5)); }
	inline Vector3_t3722313464  get_move_5() const { return ___move_5; }
	inline Vector3_t3722313464 * get_address_of_move_5() { return &___move_5; }
	inline void set_move_5(Vector3_t3722313464  value)
	{
		___move_5 = value;
	}

	inline static int32_t get_offset_of_cam_6() { return static_cast<int32_t>(offsetof(BallUserControl_t2574698008, ___cam_6)); }
	inline Transform_t3600365921 * get_cam_6() const { return ___cam_6; }
	inline Transform_t3600365921 ** get_address_of_cam_6() { return &___cam_6; }
	inline void set_cam_6(Transform_t3600365921 * value)
	{
		___cam_6 = value;
		Il2CppCodeGenWriteBarrier((&___cam_6), value);
	}

	inline static int32_t get_offset_of_camForward_7() { return static_cast<int32_t>(offsetof(BallUserControl_t2574698008, ___camForward_7)); }
	inline Vector3_t3722313464  get_camForward_7() const { return ___camForward_7; }
	inline Vector3_t3722313464 * get_address_of_camForward_7() { return &___camForward_7; }
	inline void set_camForward_7(Vector3_t3722313464  value)
	{
		___camForward_7 = value;
	}

	inline static int32_t get_offset_of_jump_8() { return static_cast<int32_t>(offsetof(BallUserControl_t2574698008, ___jump_8)); }
	inline bool get_jump_8() const { return ___jump_8; }
	inline bool* get_address_of_jump_8() { return &___jump_8; }
	inline void set_jump_8(bool value)
	{
		___jump_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BALLUSERCONTROL_T2574698008_H
#ifndef CAMERA2DFOLLOW_T3335230098_H
#define CAMERA2DFOLLOW_T3335230098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets._2D.Camera2DFollow
struct  Camera2DFollow_t3335230098  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform UnityStandardAssets._2D.Camera2DFollow::target
	Transform_t3600365921 * ___target_4;
	// System.Single UnityStandardAssets._2D.Camera2DFollow::damping
	float ___damping_5;
	// System.Single UnityStandardAssets._2D.Camera2DFollow::lookAheadFactor
	float ___lookAheadFactor_6;
	// System.Single UnityStandardAssets._2D.Camera2DFollow::lookAheadReturnSpeed
	float ___lookAheadReturnSpeed_7;
	// System.Single UnityStandardAssets._2D.Camera2DFollow::lookAheadMoveThreshold
	float ___lookAheadMoveThreshold_8;
	// System.Single UnityStandardAssets._2D.Camera2DFollow::m_OffsetZ
	float ___m_OffsetZ_9;
	// UnityEngine.Vector3 UnityStandardAssets._2D.Camera2DFollow::m_LastTargetPosition
	Vector3_t3722313464  ___m_LastTargetPosition_10;
	// UnityEngine.Vector3 UnityStandardAssets._2D.Camera2DFollow::m_CurrentVelocity
	Vector3_t3722313464  ___m_CurrentVelocity_11;
	// UnityEngine.Vector3 UnityStandardAssets._2D.Camera2DFollow::m_LookAheadPos
	Vector3_t3722313464  ___m_LookAheadPos_12;

public:
	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(Camera2DFollow_t3335230098, ___target_4)); }
	inline Transform_t3600365921 * get_target_4() const { return ___target_4; }
	inline Transform_t3600365921 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(Transform_t3600365921 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier((&___target_4), value);
	}

	inline static int32_t get_offset_of_damping_5() { return static_cast<int32_t>(offsetof(Camera2DFollow_t3335230098, ___damping_5)); }
	inline float get_damping_5() const { return ___damping_5; }
	inline float* get_address_of_damping_5() { return &___damping_5; }
	inline void set_damping_5(float value)
	{
		___damping_5 = value;
	}

	inline static int32_t get_offset_of_lookAheadFactor_6() { return static_cast<int32_t>(offsetof(Camera2DFollow_t3335230098, ___lookAheadFactor_6)); }
	inline float get_lookAheadFactor_6() const { return ___lookAheadFactor_6; }
	inline float* get_address_of_lookAheadFactor_6() { return &___lookAheadFactor_6; }
	inline void set_lookAheadFactor_6(float value)
	{
		___lookAheadFactor_6 = value;
	}

	inline static int32_t get_offset_of_lookAheadReturnSpeed_7() { return static_cast<int32_t>(offsetof(Camera2DFollow_t3335230098, ___lookAheadReturnSpeed_7)); }
	inline float get_lookAheadReturnSpeed_7() const { return ___lookAheadReturnSpeed_7; }
	inline float* get_address_of_lookAheadReturnSpeed_7() { return &___lookAheadReturnSpeed_7; }
	inline void set_lookAheadReturnSpeed_7(float value)
	{
		___lookAheadReturnSpeed_7 = value;
	}

	inline static int32_t get_offset_of_lookAheadMoveThreshold_8() { return static_cast<int32_t>(offsetof(Camera2DFollow_t3335230098, ___lookAheadMoveThreshold_8)); }
	inline float get_lookAheadMoveThreshold_8() const { return ___lookAheadMoveThreshold_8; }
	inline float* get_address_of_lookAheadMoveThreshold_8() { return &___lookAheadMoveThreshold_8; }
	inline void set_lookAheadMoveThreshold_8(float value)
	{
		___lookAheadMoveThreshold_8 = value;
	}

	inline static int32_t get_offset_of_m_OffsetZ_9() { return static_cast<int32_t>(offsetof(Camera2DFollow_t3335230098, ___m_OffsetZ_9)); }
	inline float get_m_OffsetZ_9() const { return ___m_OffsetZ_9; }
	inline float* get_address_of_m_OffsetZ_9() { return &___m_OffsetZ_9; }
	inline void set_m_OffsetZ_9(float value)
	{
		___m_OffsetZ_9 = value;
	}

	inline static int32_t get_offset_of_m_LastTargetPosition_10() { return static_cast<int32_t>(offsetof(Camera2DFollow_t3335230098, ___m_LastTargetPosition_10)); }
	inline Vector3_t3722313464  get_m_LastTargetPosition_10() const { return ___m_LastTargetPosition_10; }
	inline Vector3_t3722313464 * get_address_of_m_LastTargetPosition_10() { return &___m_LastTargetPosition_10; }
	inline void set_m_LastTargetPosition_10(Vector3_t3722313464  value)
	{
		___m_LastTargetPosition_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentVelocity_11() { return static_cast<int32_t>(offsetof(Camera2DFollow_t3335230098, ___m_CurrentVelocity_11)); }
	inline Vector3_t3722313464  get_m_CurrentVelocity_11() const { return ___m_CurrentVelocity_11; }
	inline Vector3_t3722313464 * get_address_of_m_CurrentVelocity_11() { return &___m_CurrentVelocity_11; }
	inline void set_m_CurrentVelocity_11(Vector3_t3722313464  value)
	{
		___m_CurrentVelocity_11 = value;
	}

	inline static int32_t get_offset_of_m_LookAheadPos_12() { return static_cast<int32_t>(offsetof(Camera2DFollow_t3335230098, ___m_LookAheadPos_12)); }
	inline Vector3_t3722313464  get_m_LookAheadPos_12() const { return ___m_LookAheadPos_12; }
	inline Vector3_t3722313464 * get_address_of_m_LookAheadPos_12() { return &___m_LookAheadPos_12; }
	inline void set_m_LookAheadPos_12(Vector3_t3722313464  value)
	{
		___m_LookAheadPos_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA2DFOLLOW_T3335230098_H
#ifndef CAMERAFOLLOW_T1399352937_H
#define CAMERAFOLLOW_T1399352937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets._2D.CameraFollow
struct  CameraFollow_t1399352937  : public MonoBehaviour_t3962482529
{
public:
	// System.Single UnityStandardAssets._2D.CameraFollow::xMargin
	float ___xMargin_4;
	// System.Single UnityStandardAssets._2D.CameraFollow::yMargin
	float ___yMargin_5;
	// System.Single UnityStandardAssets._2D.CameraFollow::xSmooth
	float ___xSmooth_6;
	// System.Single UnityStandardAssets._2D.CameraFollow::ySmooth
	float ___ySmooth_7;
	// UnityEngine.Vector2 UnityStandardAssets._2D.CameraFollow::maxXAndY
	Vector2_t2156229523  ___maxXAndY_8;
	// UnityEngine.Vector2 UnityStandardAssets._2D.CameraFollow::minXAndY
	Vector2_t2156229523  ___minXAndY_9;
	// UnityEngine.Transform UnityStandardAssets._2D.CameraFollow::m_Player
	Transform_t3600365921 * ___m_Player_10;

public:
	inline static int32_t get_offset_of_xMargin_4() { return static_cast<int32_t>(offsetof(CameraFollow_t1399352937, ___xMargin_4)); }
	inline float get_xMargin_4() const { return ___xMargin_4; }
	inline float* get_address_of_xMargin_4() { return &___xMargin_4; }
	inline void set_xMargin_4(float value)
	{
		___xMargin_4 = value;
	}

	inline static int32_t get_offset_of_yMargin_5() { return static_cast<int32_t>(offsetof(CameraFollow_t1399352937, ___yMargin_5)); }
	inline float get_yMargin_5() const { return ___yMargin_5; }
	inline float* get_address_of_yMargin_5() { return &___yMargin_5; }
	inline void set_yMargin_5(float value)
	{
		___yMargin_5 = value;
	}

	inline static int32_t get_offset_of_xSmooth_6() { return static_cast<int32_t>(offsetof(CameraFollow_t1399352937, ___xSmooth_6)); }
	inline float get_xSmooth_6() const { return ___xSmooth_6; }
	inline float* get_address_of_xSmooth_6() { return &___xSmooth_6; }
	inline void set_xSmooth_6(float value)
	{
		___xSmooth_6 = value;
	}

	inline static int32_t get_offset_of_ySmooth_7() { return static_cast<int32_t>(offsetof(CameraFollow_t1399352937, ___ySmooth_7)); }
	inline float get_ySmooth_7() const { return ___ySmooth_7; }
	inline float* get_address_of_ySmooth_7() { return &___ySmooth_7; }
	inline void set_ySmooth_7(float value)
	{
		___ySmooth_7 = value;
	}

	inline static int32_t get_offset_of_maxXAndY_8() { return static_cast<int32_t>(offsetof(CameraFollow_t1399352937, ___maxXAndY_8)); }
	inline Vector2_t2156229523  get_maxXAndY_8() const { return ___maxXAndY_8; }
	inline Vector2_t2156229523 * get_address_of_maxXAndY_8() { return &___maxXAndY_8; }
	inline void set_maxXAndY_8(Vector2_t2156229523  value)
	{
		___maxXAndY_8 = value;
	}

	inline static int32_t get_offset_of_minXAndY_9() { return static_cast<int32_t>(offsetof(CameraFollow_t1399352937, ___minXAndY_9)); }
	inline Vector2_t2156229523  get_minXAndY_9() const { return ___minXAndY_9; }
	inline Vector2_t2156229523 * get_address_of_minXAndY_9() { return &___minXAndY_9; }
	inline void set_minXAndY_9(Vector2_t2156229523  value)
	{
		___minXAndY_9 = value;
	}

	inline static int32_t get_offset_of_m_Player_10() { return static_cast<int32_t>(offsetof(CameraFollow_t1399352937, ___m_Player_10)); }
	inline Transform_t3600365921 * get_m_Player_10() const { return ___m_Player_10; }
	inline Transform_t3600365921 ** get_address_of_m_Player_10() { return &___m_Player_10; }
	inline void set_m_Player_10(Transform_t3600365921 * value)
	{
		___m_Player_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Player_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAFOLLOW_T1399352937_H
#ifndef PLATFORMER2DUSERCONTROL_T4130129562_H
#define PLATFORMER2DUSERCONTROL_T4130129562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets._2D.Platformer2DUserControl
struct  Platformer2DUserControl_t4130129562  : public MonoBehaviour_t3962482529
{
public:
	// UnityStandardAssets._2D.PlatformerCharacter2D UnityStandardAssets._2D.Platformer2DUserControl::m_Character
	PlatformerCharacter2D_t675295753 * ___m_Character_4;
	// System.Boolean UnityStandardAssets._2D.Platformer2DUserControl::m_Jump
	bool ___m_Jump_5;

public:
	inline static int32_t get_offset_of_m_Character_4() { return static_cast<int32_t>(offsetof(Platformer2DUserControl_t4130129562, ___m_Character_4)); }
	inline PlatformerCharacter2D_t675295753 * get_m_Character_4() const { return ___m_Character_4; }
	inline PlatformerCharacter2D_t675295753 ** get_address_of_m_Character_4() { return &___m_Character_4; }
	inline void set_m_Character_4(PlatformerCharacter2D_t675295753 * value)
	{
		___m_Character_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Character_4), value);
	}

	inline static int32_t get_offset_of_m_Jump_5() { return static_cast<int32_t>(offsetof(Platformer2DUserControl_t4130129562, ___m_Jump_5)); }
	inline bool get_m_Jump_5() const { return ___m_Jump_5; }
	inline bool* get_address_of_m_Jump_5() { return &___m_Jump_5; }
	inline void set_m_Jump_5(bool value)
	{
		___m_Jump_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORMER2DUSERCONTROL_T4130129562_H
#ifndef PLATFORMERCHARACTER2D_T675295753_H
#define PLATFORMERCHARACTER2D_T675295753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets._2D.PlatformerCharacter2D
struct  PlatformerCharacter2D_t675295753  : public MonoBehaviour_t3962482529
{
public:
	// System.Single UnityStandardAssets._2D.PlatformerCharacter2D::m_MaxSpeed
	float ___m_MaxSpeed_4;
	// System.Single UnityStandardAssets._2D.PlatformerCharacter2D::m_JumpForce
	float ___m_JumpForce_5;
	// System.Single UnityStandardAssets._2D.PlatformerCharacter2D::m_CrouchSpeed
	float ___m_CrouchSpeed_6;
	// System.Boolean UnityStandardAssets._2D.PlatformerCharacter2D::m_AirControl
	bool ___m_AirControl_7;
	// UnityEngine.LayerMask UnityStandardAssets._2D.PlatformerCharacter2D::m_WhatIsGround
	LayerMask_t3493934918  ___m_WhatIsGround_8;
	// UnityEngine.Transform UnityStandardAssets._2D.PlatformerCharacter2D::m_GroundCheck
	Transform_t3600365921 * ___m_GroundCheck_9;
	// System.Boolean UnityStandardAssets._2D.PlatformerCharacter2D::m_Grounded
	bool ___m_Grounded_11;
	// UnityEngine.Transform UnityStandardAssets._2D.PlatformerCharacter2D::m_CeilingCheck
	Transform_t3600365921 * ___m_CeilingCheck_12;
	// UnityEngine.Animator UnityStandardAssets._2D.PlatformerCharacter2D::m_Anim
	Animator_t434523843 * ___m_Anim_14;
	// UnityEngine.Rigidbody2D UnityStandardAssets._2D.PlatformerCharacter2D::m_Rigidbody2D
	Rigidbody2D_t939494601 * ___m_Rigidbody2D_15;
	// System.Boolean UnityStandardAssets._2D.PlatformerCharacter2D::m_FacingRight
	bool ___m_FacingRight_16;

public:
	inline static int32_t get_offset_of_m_MaxSpeed_4() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t675295753, ___m_MaxSpeed_4)); }
	inline float get_m_MaxSpeed_4() const { return ___m_MaxSpeed_4; }
	inline float* get_address_of_m_MaxSpeed_4() { return &___m_MaxSpeed_4; }
	inline void set_m_MaxSpeed_4(float value)
	{
		___m_MaxSpeed_4 = value;
	}

	inline static int32_t get_offset_of_m_JumpForce_5() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t675295753, ___m_JumpForce_5)); }
	inline float get_m_JumpForce_5() const { return ___m_JumpForce_5; }
	inline float* get_address_of_m_JumpForce_5() { return &___m_JumpForce_5; }
	inline void set_m_JumpForce_5(float value)
	{
		___m_JumpForce_5 = value;
	}

	inline static int32_t get_offset_of_m_CrouchSpeed_6() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t675295753, ___m_CrouchSpeed_6)); }
	inline float get_m_CrouchSpeed_6() const { return ___m_CrouchSpeed_6; }
	inline float* get_address_of_m_CrouchSpeed_6() { return &___m_CrouchSpeed_6; }
	inline void set_m_CrouchSpeed_6(float value)
	{
		___m_CrouchSpeed_6 = value;
	}

	inline static int32_t get_offset_of_m_AirControl_7() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t675295753, ___m_AirControl_7)); }
	inline bool get_m_AirControl_7() const { return ___m_AirControl_7; }
	inline bool* get_address_of_m_AirControl_7() { return &___m_AirControl_7; }
	inline void set_m_AirControl_7(bool value)
	{
		___m_AirControl_7 = value;
	}

	inline static int32_t get_offset_of_m_WhatIsGround_8() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t675295753, ___m_WhatIsGround_8)); }
	inline LayerMask_t3493934918  get_m_WhatIsGround_8() const { return ___m_WhatIsGround_8; }
	inline LayerMask_t3493934918 * get_address_of_m_WhatIsGround_8() { return &___m_WhatIsGround_8; }
	inline void set_m_WhatIsGround_8(LayerMask_t3493934918  value)
	{
		___m_WhatIsGround_8 = value;
	}

	inline static int32_t get_offset_of_m_GroundCheck_9() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t675295753, ___m_GroundCheck_9)); }
	inline Transform_t3600365921 * get_m_GroundCheck_9() const { return ___m_GroundCheck_9; }
	inline Transform_t3600365921 ** get_address_of_m_GroundCheck_9() { return &___m_GroundCheck_9; }
	inline void set_m_GroundCheck_9(Transform_t3600365921 * value)
	{
		___m_GroundCheck_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_GroundCheck_9), value);
	}

	inline static int32_t get_offset_of_m_Grounded_11() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t675295753, ___m_Grounded_11)); }
	inline bool get_m_Grounded_11() const { return ___m_Grounded_11; }
	inline bool* get_address_of_m_Grounded_11() { return &___m_Grounded_11; }
	inline void set_m_Grounded_11(bool value)
	{
		___m_Grounded_11 = value;
	}

	inline static int32_t get_offset_of_m_CeilingCheck_12() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t675295753, ___m_CeilingCheck_12)); }
	inline Transform_t3600365921 * get_m_CeilingCheck_12() const { return ___m_CeilingCheck_12; }
	inline Transform_t3600365921 ** get_address_of_m_CeilingCheck_12() { return &___m_CeilingCheck_12; }
	inline void set_m_CeilingCheck_12(Transform_t3600365921 * value)
	{
		___m_CeilingCheck_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_CeilingCheck_12), value);
	}

	inline static int32_t get_offset_of_m_Anim_14() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t675295753, ___m_Anim_14)); }
	inline Animator_t434523843 * get_m_Anim_14() const { return ___m_Anim_14; }
	inline Animator_t434523843 ** get_address_of_m_Anim_14() { return &___m_Anim_14; }
	inline void set_m_Anim_14(Animator_t434523843 * value)
	{
		___m_Anim_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_Anim_14), value);
	}

	inline static int32_t get_offset_of_m_Rigidbody2D_15() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t675295753, ___m_Rigidbody2D_15)); }
	inline Rigidbody2D_t939494601 * get_m_Rigidbody2D_15() const { return ___m_Rigidbody2D_15; }
	inline Rigidbody2D_t939494601 ** get_address_of_m_Rigidbody2D_15() { return &___m_Rigidbody2D_15; }
	inline void set_m_Rigidbody2D_15(Rigidbody2D_t939494601 * value)
	{
		___m_Rigidbody2D_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rigidbody2D_15), value);
	}

	inline static int32_t get_offset_of_m_FacingRight_16() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t675295753, ___m_FacingRight_16)); }
	inline bool get_m_FacingRight_16() const { return ___m_FacingRight_16; }
	inline bool* get_address_of_m_FacingRight_16() { return &___m_FacingRight_16; }
	inline void set_m_FacingRight_16(bool value)
	{
		___m_FacingRight_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORMERCHARACTER2D_T675295753_H
#ifndef RESTARTER_T269523250_H
#define RESTARTER_T269523250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets._2D.Restarter
struct  Restarter_t269523250  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESTARTER_T269523250_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_8;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_9;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_t2598313366 * ___m_CanvasRenderer_10;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_11;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_12;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_14;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_16;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_19;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_6)); }
	inline Material_t340375123 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t340375123 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t340375123 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_6), value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_7)); }
	inline Color_t2555686324  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t2555686324 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t2555686324  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_8)); }
	inline bool get_m_RaycastTarget_8() const { return ___m_RaycastTarget_8; }
	inline bool* get_address_of_m_RaycastTarget_8() { return &___m_RaycastTarget_8; }
	inline void set_m_RaycastTarget_8(bool value)
	{
		___m_RaycastTarget_8 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_9)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_9() const { return ___m_RectTransform_9; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_9() { return &___m_RectTransform_9; }
	inline void set_m_RectTransform_9(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_9), value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRenderer_10)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRenderer_10() const { return ___m_CanvasRenderer_10; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRenderer_10() { return &___m_CanvasRenderer_10; }
	inline void set_m_CanvasRenderer_10(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRenderer_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_10), value);
	}

	inline static int32_t get_offset_of_m_Canvas_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_11)); }
	inline Canvas_t3310196443 * get_m_Canvas_11() const { return ___m_Canvas_11; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_11() { return &___m_Canvas_11; }
	inline void set_m_Canvas_11(Canvas_t3310196443 * value)
	{
		___m_Canvas_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_11), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_12)); }
	inline bool get_m_VertsDirty_12() const { return ___m_VertsDirty_12; }
	inline bool* get_address_of_m_VertsDirty_12() { return &___m_VertsDirty_12; }
	inline void set_m_VertsDirty_12(bool value)
	{
		___m_VertsDirty_12 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_13)); }
	inline bool get_m_MaterialDirty_13() const { return ___m_MaterialDirty_13; }
	inline bool* get_address_of_m_MaterialDirty_13() { return &___m_MaterialDirty_13; }
	inline void set_m_MaterialDirty_13(bool value)
	{
		___m_MaterialDirty_13 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_14() const { return ___m_OnDirtyLayoutCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_14() { return &___m_OnDirtyLayoutCallback_14; }
	inline void set_m_OnDirtyLayoutCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_14), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_15)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_15() const { return ___m_OnDirtyVertsCallback_15; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_15() { return &___m_OnDirtyVertsCallback_15; }
	inline void set_m_OnDirtyVertsCallback_15(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_15), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_16)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_16() const { return ___m_OnDirtyMaterialCallback_16; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_16() { return &___m_OnDirtyMaterialCallback_16; }
	inline void set_m_OnDirtyMaterialCallback_16(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_16), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_19() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_19)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_19() const { return ___m_ColorTweenRunner_19; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_19() { return &___m_ColorTweenRunner_19; }
	inline void set_m_ColorTweenRunner_19(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_19), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_20(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_20 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_17;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_18;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t340375123 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t340375123 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_4), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_5), value);
	}

	inline static int32_t get_offset_of_s_Mesh_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_17)); }
	inline Mesh_t3648964284 * get_s_Mesh_17() const { return ___s_Mesh_17; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_17() { return &___s_Mesh_17; }
	inline void set_s_Mesh_17(Mesh_t3648964284 * value)
	{
		___s_Mesh_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_17), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_18)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_18() const { return ___s_VertexHelper_18; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_18() { return &___s_VertexHelper_18; }
	inline void set_s_VertexHelper_18(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef TWIRL_T2760508880_H
#define TWIRL_T2760508880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Twirl
struct  Twirl_t2760508880  : public ImageEffectBase_t2026006575
{
public:
	// UnityEngine.Vector2 UnityStandardAssets.ImageEffects.Twirl::radius
	Vector2_t2156229523  ___radius_6;
	// System.Single UnityStandardAssets.ImageEffects.Twirl::angle
	float ___angle_7;
	// UnityEngine.Vector2 UnityStandardAssets.ImageEffects.Twirl::center
	Vector2_t2156229523  ___center_8;

public:
	inline static int32_t get_offset_of_radius_6() { return static_cast<int32_t>(offsetof(Twirl_t2760508880, ___radius_6)); }
	inline Vector2_t2156229523  get_radius_6() const { return ___radius_6; }
	inline Vector2_t2156229523 * get_address_of_radius_6() { return &___radius_6; }
	inline void set_radius_6(Vector2_t2156229523  value)
	{
		___radius_6 = value;
	}

	inline static int32_t get_offset_of_angle_7() { return static_cast<int32_t>(offsetof(Twirl_t2760508880, ___angle_7)); }
	inline float get_angle_7() const { return ___angle_7; }
	inline float* get_address_of_angle_7() { return &___angle_7; }
	inline void set_angle_7(float value)
	{
		___angle_7 = value;
	}

	inline static int32_t get_offset_of_center_8() { return static_cast<int32_t>(offsetof(Twirl_t2760508880, ___center_8)); }
	inline Vector2_t2156229523  get_center_8() const { return ___center_8; }
	inline Vector2_t2156229523 * get_address_of_center_8() { return &___center_8; }
	inline void set_center_8(Vector2_t2156229523  value)
	{
		___center_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWIRL_T2760508880_H
#ifndef VIGNETTEANDCHROMATICABERRATION_T3308099924_H
#define VIGNETTEANDCHROMATICABERRATION_T3308099924_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration
struct  VignetteAndChromaticAberration_t3308099924  : public PostEffectsBase_t2404315739
{
public:
	// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration/AberrationMode UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::mode
	int32_t ___mode_8;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::intensity
	float ___intensity_9;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::chromaticAberration
	float ___chromaticAberration_10;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::axialAberration
	float ___axialAberration_11;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::blur
	float ___blur_12;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::blurSpread
	float ___blurSpread_13;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::luminanceDependency
	float ___luminanceDependency_14;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::blurDistance
	float ___blurDistance_15;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::vignetteShader
	Shader_t4151988712 * ___vignetteShader_16;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::separableBlurShader
	Shader_t4151988712 * ___separableBlurShader_17;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::chromAberrationShader
	Shader_t4151988712 * ___chromAberrationShader_18;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::m_VignetteMaterial
	Material_t340375123 * ___m_VignetteMaterial_19;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::m_SeparableBlurMaterial
	Material_t340375123 * ___m_SeparableBlurMaterial_20;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::m_ChromAberrationMaterial
	Material_t340375123 * ___m_ChromAberrationMaterial_21;

public:
	inline static int32_t get_offset_of_mode_8() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___mode_8)); }
	inline int32_t get_mode_8() const { return ___mode_8; }
	inline int32_t* get_address_of_mode_8() { return &___mode_8; }
	inline void set_mode_8(int32_t value)
	{
		___mode_8 = value;
	}

	inline static int32_t get_offset_of_intensity_9() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___intensity_9)); }
	inline float get_intensity_9() const { return ___intensity_9; }
	inline float* get_address_of_intensity_9() { return &___intensity_9; }
	inline void set_intensity_9(float value)
	{
		___intensity_9 = value;
	}

	inline static int32_t get_offset_of_chromaticAberration_10() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___chromaticAberration_10)); }
	inline float get_chromaticAberration_10() const { return ___chromaticAberration_10; }
	inline float* get_address_of_chromaticAberration_10() { return &___chromaticAberration_10; }
	inline void set_chromaticAberration_10(float value)
	{
		___chromaticAberration_10 = value;
	}

	inline static int32_t get_offset_of_axialAberration_11() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___axialAberration_11)); }
	inline float get_axialAberration_11() const { return ___axialAberration_11; }
	inline float* get_address_of_axialAberration_11() { return &___axialAberration_11; }
	inline void set_axialAberration_11(float value)
	{
		___axialAberration_11 = value;
	}

	inline static int32_t get_offset_of_blur_12() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___blur_12)); }
	inline float get_blur_12() const { return ___blur_12; }
	inline float* get_address_of_blur_12() { return &___blur_12; }
	inline void set_blur_12(float value)
	{
		___blur_12 = value;
	}

	inline static int32_t get_offset_of_blurSpread_13() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___blurSpread_13)); }
	inline float get_blurSpread_13() const { return ___blurSpread_13; }
	inline float* get_address_of_blurSpread_13() { return &___blurSpread_13; }
	inline void set_blurSpread_13(float value)
	{
		___blurSpread_13 = value;
	}

	inline static int32_t get_offset_of_luminanceDependency_14() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___luminanceDependency_14)); }
	inline float get_luminanceDependency_14() const { return ___luminanceDependency_14; }
	inline float* get_address_of_luminanceDependency_14() { return &___luminanceDependency_14; }
	inline void set_luminanceDependency_14(float value)
	{
		___luminanceDependency_14 = value;
	}

	inline static int32_t get_offset_of_blurDistance_15() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___blurDistance_15)); }
	inline float get_blurDistance_15() const { return ___blurDistance_15; }
	inline float* get_address_of_blurDistance_15() { return &___blurDistance_15; }
	inline void set_blurDistance_15(float value)
	{
		___blurDistance_15 = value;
	}

	inline static int32_t get_offset_of_vignetteShader_16() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___vignetteShader_16)); }
	inline Shader_t4151988712 * get_vignetteShader_16() const { return ___vignetteShader_16; }
	inline Shader_t4151988712 ** get_address_of_vignetteShader_16() { return &___vignetteShader_16; }
	inline void set_vignetteShader_16(Shader_t4151988712 * value)
	{
		___vignetteShader_16 = value;
		Il2CppCodeGenWriteBarrier((&___vignetteShader_16), value);
	}

	inline static int32_t get_offset_of_separableBlurShader_17() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___separableBlurShader_17)); }
	inline Shader_t4151988712 * get_separableBlurShader_17() const { return ___separableBlurShader_17; }
	inline Shader_t4151988712 ** get_address_of_separableBlurShader_17() { return &___separableBlurShader_17; }
	inline void set_separableBlurShader_17(Shader_t4151988712 * value)
	{
		___separableBlurShader_17 = value;
		Il2CppCodeGenWriteBarrier((&___separableBlurShader_17), value);
	}

	inline static int32_t get_offset_of_chromAberrationShader_18() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___chromAberrationShader_18)); }
	inline Shader_t4151988712 * get_chromAberrationShader_18() const { return ___chromAberrationShader_18; }
	inline Shader_t4151988712 ** get_address_of_chromAberrationShader_18() { return &___chromAberrationShader_18; }
	inline void set_chromAberrationShader_18(Shader_t4151988712 * value)
	{
		___chromAberrationShader_18 = value;
		Il2CppCodeGenWriteBarrier((&___chromAberrationShader_18), value);
	}

	inline static int32_t get_offset_of_m_VignetteMaterial_19() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___m_VignetteMaterial_19)); }
	inline Material_t340375123 * get_m_VignetteMaterial_19() const { return ___m_VignetteMaterial_19; }
	inline Material_t340375123 ** get_address_of_m_VignetteMaterial_19() { return &___m_VignetteMaterial_19; }
	inline void set_m_VignetteMaterial_19(Material_t340375123 * value)
	{
		___m_VignetteMaterial_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_VignetteMaterial_19), value);
	}

	inline static int32_t get_offset_of_m_SeparableBlurMaterial_20() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___m_SeparableBlurMaterial_20)); }
	inline Material_t340375123 * get_m_SeparableBlurMaterial_20() const { return ___m_SeparableBlurMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_SeparableBlurMaterial_20() { return &___m_SeparableBlurMaterial_20; }
	inline void set_m_SeparableBlurMaterial_20(Material_t340375123 * value)
	{
		___m_SeparableBlurMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_SeparableBlurMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ChromAberrationMaterial_21() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___m_ChromAberrationMaterial_21)); }
	inline Material_t340375123 * get_m_ChromAberrationMaterial_21() const { return ___m_ChromAberrationMaterial_21; }
	inline Material_t340375123 ** get_address_of_m_ChromAberrationMaterial_21() { return &___m_ChromAberrationMaterial_21; }
	inline void set_m_ChromAberrationMaterial_21(Material_t340375123 * value)
	{
		___m_ChromAberrationMaterial_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChromAberrationMaterial_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIGNETTEANDCHROMATICABERRATION_T3308099924_H
#ifndef VORTEX_T3420399868_H
#define VORTEX_T3420399868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Vortex
struct  Vortex_t3420399868  : public ImageEffectBase_t2026006575
{
public:
	// UnityEngine.Vector2 UnityStandardAssets.ImageEffects.Vortex::radius
	Vector2_t2156229523  ___radius_6;
	// System.Single UnityStandardAssets.ImageEffects.Vortex::angle
	float ___angle_7;
	// UnityEngine.Vector2 UnityStandardAssets.ImageEffects.Vortex::center
	Vector2_t2156229523  ___center_8;

public:
	inline static int32_t get_offset_of_radius_6() { return static_cast<int32_t>(offsetof(Vortex_t3420399868, ___radius_6)); }
	inline Vector2_t2156229523  get_radius_6() const { return ___radius_6; }
	inline Vector2_t2156229523 * get_address_of_radius_6() { return &___radius_6; }
	inline void set_radius_6(Vector2_t2156229523  value)
	{
		___radius_6 = value;
	}

	inline static int32_t get_offset_of_angle_7() { return static_cast<int32_t>(offsetof(Vortex_t3420399868, ___angle_7)); }
	inline float get_angle_7() const { return ___angle_7; }
	inline float* get_address_of_angle_7() { return &___angle_7; }
	inline void set_angle_7(float value)
	{
		___angle_7 = value;
	}

	inline static int32_t get_offset_of_center_8() { return static_cast<int32_t>(offsetof(Vortex_t3420399868, ___center_8)); }
	inline Vector2_t2156229523  get_center_8() const { return ___center_8; }
	inline Vector2_t2156229523 * get_address_of_center_8() { return &___center_8; }
	inline void set_center_8(Vector2_t2156229523  value)
	{
		___center_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VORTEX_T3420399868_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_21;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_22;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_23;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_25;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_26;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_27;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_28;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_29;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_21)); }
	inline bool get_m_ShouldRecalculateStencil_21() const { return ___m_ShouldRecalculateStencil_21; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_21() { return &___m_ShouldRecalculateStencil_21; }
	inline void set_m_ShouldRecalculateStencil_21(bool value)
	{
		___m_ShouldRecalculateStencil_21 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_22)); }
	inline Material_t340375123 * get_m_MaskMaterial_22() const { return ___m_MaskMaterial_22; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_22() { return &___m_MaskMaterial_22; }
	inline void set_m_MaskMaterial_22(Material_t340375123 * value)
	{
		___m_MaskMaterial_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_22), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_23)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_23() const { return ___m_ParentMask_23; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_23() { return &___m_ParentMask_23; }
	inline void set_m_ParentMask_23(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_23), value);
	}

	inline static int32_t get_offset_of_m_Maskable_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_24)); }
	inline bool get_m_Maskable_24() const { return ___m_Maskable_24; }
	inline bool* get_address_of_m_Maskable_24() { return &___m_Maskable_24; }
	inline void set_m_Maskable_24(bool value)
	{
		___m_Maskable_24 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_25)); }
	inline bool get_m_IncludeForMasking_25() const { return ___m_IncludeForMasking_25; }
	inline bool* get_address_of_m_IncludeForMasking_25() { return &___m_IncludeForMasking_25; }
	inline void set_m_IncludeForMasking_25(bool value)
	{
		___m_IncludeForMasking_25 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_26)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_26() const { return ___m_OnCullStateChanged_26; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_26() { return &___m_OnCullStateChanged_26; }
	inline void set_m_OnCullStateChanged_26(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_26), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_27)); }
	inline bool get_m_ShouldRecalculate_27() const { return ___m_ShouldRecalculate_27; }
	inline bool* get_address_of_m_ShouldRecalculate_27() { return &___m_ShouldRecalculate_27; }
	inline void set_m_ShouldRecalculate_27(bool value)
	{
		___m_ShouldRecalculate_27 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_28)); }
	inline int32_t get_m_StencilValue_28() const { return ___m_StencilValue_28; }
	inline int32_t* get_address_of_m_StencilValue_28() { return &___m_StencilValue_28; }
	inline void set_m_StencilValue_28(int32_t value)
	{
		___m_StencilValue_28 = value;
	}

	inline static int32_t get_offset_of_m_Corners_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_29)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_29() const { return ___m_Corners_29; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_29() { return &___m_Corners_29; }
	inline void set_m_Corners_29(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_30;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_31;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_32;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_33;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_35;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_36;

public:
	inline static int32_t get_offset_of_m_FontData_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_30)); }
	inline FontData_t746620069 * get_m_FontData_30() const { return ___m_FontData_30; }
	inline FontData_t746620069 ** get_address_of_m_FontData_30() { return &___m_FontData_30; }
	inline void set_m_FontData_30(FontData_t746620069 * value)
	{
		___m_FontData_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_30), value);
	}

	inline static int32_t get_offset_of_m_Text_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_31)); }
	inline String_t* get_m_Text_31() const { return ___m_Text_31; }
	inline String_t** get_address_of_m_Text_31() { return &___m_Text_31; }
	inline void set_m_Text_31(String_t* value)
	{
		___m_Text_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_31), value);
	}

	inline static int32_t get_offset_of_m_TextCache_32() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_32)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_32() const { return ___m_TextCache_32; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_32() { return &___m_TextCache_32; }
	inline void set_m_TextCache_32(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_32), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_33)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_33() const { return ___m_TextCacheForLayout_33; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_33() { return &___m_TextCacheForLayout_33; }
	inline void set_m_TextCacheForLayout_33(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_33), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_35() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_35)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_35() const { return ___m_DisableFontTextureRebuiltCallback_35; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_35() { return &___m_DisableFontTextureRebuiltCallback_35; }
	inline void set_m_DisableFontTextureRebuiltCallback_35(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_35 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_36() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_36)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_36() const { return ___m_TempVerts_36; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_36() { return &___m_TempVerts_36; }
	inline void set_m_TempVerts_36(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_36), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_34;

public:
	inline static int32_t get_offset_of_s_DefaultText_34() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_34)); }
	inline Material_t340375123 * get_s_DefaultText_34() const { return ___s_DefaultText_34; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_34() { return &___s_DefaultText_34; }
	inline void set_s_DefaultText_34(Material_t340375123 * value)
	{
		___s_DefaultText_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_34), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// UnityEngine.Mesh[]
struct MeshU5BU5D_t3972987605  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Mesh_t3648964284 * m_Items[1];

public:
	inline Mesh_t3648964284 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Mesh_t3648964284 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Mesh_t3648964284 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Mesh_t3648964284 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Mesh_t3648964284 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Mesh_t3648964284 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3722313464  m_Items[1];

public:
	inline Vector3_t3722313464  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3722313464  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_t2156229523  m_Items[1];

public:
	inline Vector2_t2156229523  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t2156229523 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t2156229523  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t2156229523  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t2156229523 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t2156229523  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition[]
struct ReplacementDefinitionU5BU5D_t2596446823  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ReplacementDefinition_t2693741842 * m_Items[1];

public:
	inline ReplacementDefinition_t2693741842 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ReplacementDefinition_t2693741842 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ReplacementDefinition_t2693741842 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ReplacementDefinition_t2693741842 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ReplacementDefinition_t2693741842 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ReplacementDefinition_t2693741842 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t1068524471  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Keyframe_t4206410242  m_Items[1];

public:
	inline Keyframe_t4206410242  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_t4206410242 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_t4206410242  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_t4206410242  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_t4206410242 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_t4206410242  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_t807237628  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_t3600365921 * m_Items[1];

public:
	inline Transform_t3600365921 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_t3600365921 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_t3600365921 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Transform_t3600365921 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_t3600365921 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_t3600365921 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t3089334924  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParticleSystem_t1800779281 * m_Items[1];

public:
	inline ParticleSystem_t1800779281 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParticleSystem_t1800779281 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParticleSystem_t1800779281 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ParticleSystem_t1800779281 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParticleSystem_t1800779281 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParticleSystem_t1800779281 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_t1113636619 * m_Items[1];

public:
	inline GameObject_t1113636619 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1113636619 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_t2007329276  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MonoBehaviour_t3962482529 * m_Items[1];

public:
	inline MonoBehaviour_t3962482529 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MonoBehaviour_t3962482529 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MonoBehaviour_t3962482529 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MonoBehaviour_t3962482529 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MonoBehaviour_t3962482529 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MonoBehaviour_t3962482529 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityStandardAssets.Utility.TimedObjectActivator/Entry[]
struct EntryU5BU5D_t3574483607  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Entry_t2725803170 * m_Items[1];

public:
	inline Entry_t2725803170 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t2725803170 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t2725803170 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Entry_t2725803170 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t2725803170 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t2725803170 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Single[]
struct SingleU5BU5D_t1444911251  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
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
};
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t1693969295  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider2D_t2806799626 * m_Items[1];

public:
	inline Collider2D_t2806799626 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider2D_t2806799626 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider2D_t2806799626 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Collider2D_t2806799626 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider2D_t2806799626 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider2D_t2806799626 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m3141366230_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Component_GetComponentsInChildren_TisRuntimeObject_m2385061347_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m1328752868_gshared (List_1_t257213610 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Contains_m2654125393_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m3193525861 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.ImageEffects.Triangles::HasMeshes()
extern "C" IL2CPP_METHOD_ATTR bool Triangles_HasMeshes_m1063919596 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m432108984 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m2756574208 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m1870542928 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// UnityEngine.Mesh UnityStandardAssets.ImageEffects.Triangles::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Mesh_t3648964284 * Triangles_GetMesh_m1896089306 (RuntimeObject * __this /* static, unused */, int32_t ___triCount0, int32_t ___triOffset1, int32_t ___totalWidth2, int32_t ___totalHeight3, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Mesh__ctor_m2533762929 (Mesh_t3648964284 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C" IL2CPP_METHOD_ATTR void Object_set_hideFlags_m1648752846 (Object_t631007953 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C" IL2CPP_METHOD_ATTR void Mesh_set_vertices_m2084450642 (Mesh_t3648964284 * __this, Vector3U5BU5D_t1718750761* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C" IL2CPP_METHOD_ATTR void Mesh_set_triangles_m255556250 (Mesh_t3648964284 * __this, Int32U5BU5D_t385246372* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C" IL2CPP_METHOD_ATTR void Mesh_set_uv_m1258646872 (Mesh_t3648964284 * __this, Vector2U5BU5D_t1457185986* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_uv2(UnityEngine.Vector2[])
extern "C" IL2CPP_METHOD_ATTR void Mesh_set_uv2_m2840654016 (Mesh_t3648964284 * __this, Vector2U5BU5D_t1457185986* p0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.ImageEffects.ImageEffectBase::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ImageEffectBase__ctor_m3682424896 (ImageEffectBase_t2026006575 * __this, const RuntimeMethod* method);
// UnityEngine.Material UnityStandardAssets.ImageEffects.ImageEffectBase::get_material()
extern "C" IL2CPP_METHOD_ATTR Material_t340375123 * ImageEffectBase_get_material_m3574076220 (ImageEffectBase_t2026006575 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::RenderDistortion(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Single,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void ImageEffects_RenderDistortion_m2367323920 (RuntimeObject * __this /* static, unused */, Material_t340375123 * ___material0, RenderTexture_t2108887433 * ___source1, RenderTexture_t2108887433 * ___destination2, float ___angle3, Vector2_t2156229523  ___center4, Vector2_t2156229523  ___radius5, const RuntimeMethod* method);
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PostEffectsBase__ctor_m3249494038 (PostEffectsBase_t2404315739 * __this, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckSupport_m2449300828 (PostEffectsBase_t2404315739 * __this, bool ___needDepth0, const RuntimeMethod* method);
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShaderAndCreateMaterial(UnityEngine.Shader,UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR Material_t340375123 * PostEffectsBase_CheckShaderAndCreateMaterial_m242186546 (PostEffectsBase_t2404315739 * __this, Shader_t4151988712 * ___s0, Material_t340375123 * ___m2Create1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::ReportAutoDisable()
extern "C" IL2CPP_METHOD_ATTR void PostEffectsBase_ReportAutoDisable_m412809422 (PostEffectsBase_t2404315739 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void Graphics_Blit_m1336850842 (RuntimeObject * __this /* static, unused */, Texture_t3661962703 * p0, RenderTexture_t2108887433 * p1, const RuntimeMethod* method);
// UnityEngine.RenderTextureFormat UnityEngine.RenderTexture::get_format()
extern "C" IL2CPP_METHOD_ATTR int32_t RenderTexture_get_format_m3846871418 (RenderTexture_t2108887433 * __this, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
extern "C" IL2CPP_METHOD_ATTR RenderTexture_t2108887433 * RenderTexture_GetTemporary_m3378328322 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Graphics_Blit_m4126770912 (RuntimeObject * __this /* static, unused */, Texture_t3661962703 * p0, RenderTexture_t2108887433 * p1, Material_t340375123 * p2, int32_t p3, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector4__ctor_m2498754347 (Vector4_t3319028937 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR void Material_SetVector_m4214217286 (Material_t340375123 * __this, String_t* p0, Vector4_t3319028937  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Graphics_Blit_m890955694 (RuntimeObject * __this /* static, unused */, Texture_t3661962703 * p0, RenderTexture_t2108887433 * p1, Material_t340375123 * p2, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_m2400081536 (RuntimeObject * __this /* static, unused */, RenderTexture_t2108887433 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Material_SetFloat_m3226510453 (Material_t340375123 * __this, String_t* p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
extern "C" IL2CPP_METHOD_ATTR void Material_SetTexture_m1829349465 (Material_t340375123 * __this, String_t* p0, Texture_t3661962703 * p1, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  Vector4_op_Implicit_m237151757 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Max_m3146388979 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
extern "C" IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m587872754 (Texture_t3661962703 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::BroadcastMessage(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameObject_BroadcastMessage_m217296818 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t1113636619 * Object_Instantiate_TisGameObject_t1113636619_m2517112845 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method)
{
	return ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Vector3_t3722313464 , Quaternion_t2301928331 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m3141366230_gshared)(__this /* static, unused */, p0, p1, p2, method);
}
// System.Void UnityEngine.Object::DestroyObject(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_DestroyObject_m1406874517 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animation>()
inline Animation_t3648466861 * GameObject_GetComponent_TisAnimation_t3648466861_m4035734369 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  Animation_t3648466861 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// System.Boolean UnityEngine.Animation::Play()
extern "C" IL2CPP_METHOD_ATTR bool Animation_Play_m2798573761 (Animation_t3648466861 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Utility.ActivateTrigger::DoActivateTrigger()
extern "C" IL2CPP_METHOD_ATTR void ActivateTrigger_DoActivateTrigger_m3469673119 (ActivateTrigger_t3349759092 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
extern "C" IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m3141794964 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
extern "C" IL2CPP_METHOD_ATTR void Transform_Translate_m1990195114 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
extern "C" IL2CPP_METHOD_ATTR void Transform_Rotate_m1886816857 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, int32_t p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_forward_m747522392 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m261647105 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, RaycastHit_t1056001966 * p2, float p3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  RaycastHit_get_point_m2236647085 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_LookAt_m3649447396 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Keyframe__ctor_m391431887 (Keyframe_t4206410242 * __this, float p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" IL2CPP_METHOD_ATTR void AnimationCurve__ctor_m1565662948 (AnimationCurve_t3046754366 * __this, KeyframeU5BU5D_t1068524471* p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_localPosition_m4234289348 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimationCurve::get_length()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_length_m1548433259 (AnimationCurve_t3046754366 * __this, const RuntimeMethod* method);
// UnityEngine.Keyframe UnityEngine.AnimationCurve::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Keyframe_t4206410242  AnimationCurve_get_Item_m4209227769 (AnimationCurve_t3046754366 * __this, int32_t p0, const RuntimeMethod* method);
// System.Single UnityEngine.Keyframe::get_time()
extern "C" IL2CPP_METHOD_ATTR float Keyframe_get_time_m803196188 (Keyframe_t4206410242 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
extern "C" IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m2125563588 (AnimationCurve_t3046754366 * __this, float p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m2081676745 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// UnityEngine.Camera UnityStandardAssets.Utility.DragRigidbody::FindCamera()
extern "C" IL2CPP_METHOD_ATTR Camera_t4157153871 * DragRigidbody_FindCamera_m148666113 (DragRigidbody_t1600652016 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Input_get_mousePosition_m1616496925 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Ray_t3785851493  Camera_ScreenPointToRay_m3764635188 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Ray_get_origin_m2819290985 (Ray_t3785851493 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Ray_get_direction_m761601601 (Ray_t3785851493 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m4145022031 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, RaycastHit_t1056001966 * p2, float p3, int32_t p4, const RuntimeMethod* method);
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
extern "C" IL2CPP_METHOD_ATTR Rigidbody_t3916780224 * RaycastHit_get_rigidbody_m2320267866 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rigidbody::get_isKinematic()
extern "C" IL2CPP_METHOD_ATTR bool Rigidbody_get_isKinematic_m403342600 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t3916780224 * GameObject_AddComponent_TisRigidbody_t3916780224_m3538654758 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t3916780224 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.SpringJoint>()
inline SpringJoint_t1912369980 * GameObject_AddComponent_TisSpringJoint_t1912369980_m3688791583 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  SpringJoint_t1912369980 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m1802205683 (Rigidbody_t3916780224 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Joint::set_anchor(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Joint_set_anchor_m3102426751 (Joint_t1358886274 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.SpringJoint::set_spring(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SpringJoint_set_spring_m3317999832 (SpringJoint_t1912369980 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.SpringJoint::set_damper(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SpringJoint_set_damper_m2395439607 (SpringJoint_t1912369980 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.SpringJoint::set_maxDistance(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SpringJoint_set_maxDistance_m3312008700 (SpringJoint_t1912369980 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Joint::set_connectedBody(UnityEngine.Rigidbody)
extern "C" IL2CPP_METHOD_ATTR void Joint_set_connectedBody_m3457616993 (Joint_t1358886274 * __this, Rigidbody_t3916780224 * p0, const RuntimeMethod* method);
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m3727327466 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m1654577315 (MonoBehaviour_t3962482529 * __this, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CDragObjectU3Ec__Iterator0__ctor_m2961442063 (U3CDragObjectU3Ec__Iterator0_t4151609119 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_t4157153871 * Component_GetComponent_TisCamera_t4157153871_m1557787507 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Camera_t4157153871 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C" IL2CPP_METHOD_ATTR Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Rigidbody UnityEngine.Joint::get_connectedBody()
extern "C" IL2CPP_METHOD_ATTR Rigidbody_t3916780224 * Joint_get_connectedBody_m826805471 (Joint_t1358886274 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rigidbody::get_drag()
extern "C" IL2CPP_METHOD_ATTR float Rigidbody_get_drag_m3991710090 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rigidbody::get_angularDrag()
extern "C" IL2CPP_METHOD_ATTR float Rigidbody_get_angularDrag_m1943636787 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_drag(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_drag_m2933262323 (Rigidbody_t3916780224 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_angularDrag(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_angularDrag_m3497419500 (Rigidbody_t3916780224 * __this, float p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Ray_GetPoint_m1852405345 (Ray_t3785851493 * __this, float p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m513753021 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Light::get_shadowStrength()
extern "C" IL2CPP_METHOD_ATTR float Light_get_shadowStrength_m3202554781 (Light_t3756812086 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_up_m3584168373 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_UnaryNegation_m1951478815 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Ray__ctor_m168149494 (Ray_t3785851493 * __this, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m447436869 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  p0, RaycastHit_t1056001966 * p1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_m3171073017 (RuntimeObject * __this /* static, unused */, float p0, float p1, float* p2, float p3, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_InverseLerp_m4155825980 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Lerp_m1004423579 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.QualitySettings::set_shadowDistance(System.Single)
extern "C" IL2CPP_METHOD_ATTR void QualitySettings_set_shadowDistance_m3878605578 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Light::set_shadowBias(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Light_set_shadowBias_m689078510 (Light_t3756812086 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Light::set_shadowStrength(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Light_set_shadowStrength_m881750843 (Light_t3756812086 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Utility.FOVKick::CheckStatus(UnityEngine.Camera)
extern "C" IL2CPP_METHOD_ATTR void FOVKick_CheckStatus_m1684880090 (FOVKick_t120370150 * __this, Camera_t4157153871 * ___camera0, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_fieldOfView()
extern "C" IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m1018585504 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CFOVKickUpU3Ec__Iterator0__ctor_m3315578780 (U3CFOVKickUpU3Ec__Iterator0_t3738408313 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CFOVKickDownU3Ec__Iterator1__ctor_m146117331 (U3CFOVKickDownU3Ec__Iterator1_t1440840980 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m1438246590 (Camera_t4157153871 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m1381314187 (WaitForEndOfFrame_t1314943911 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t1901882714 * Component_GetComponent_TisText_t1901882714_m1618486294 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Text_t1901882714 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CDoBobCycleU3Ec__Iterator0__ctor_m2079578774 (U3CDoBobCycleU3Ec__Iterator0_t1149538828 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForFixedUpdate::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WaitForFixedUpdate__ctor_m590323305 (WaitForFixedUpdate_t1634918743 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Transform>()
inline TransformU5BU5D_t807237628* Component_GetComponentsInChildren_TisTransform_t3600365921_m438280950 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  TransformU5BU5D_t807237628* (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m2385061347_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m3073653982 (List_1_t777473367 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t777473367 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1328752868_gshared)(__this, p0, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t3916780224 * Component_GetComponent_TisRigidbody_t3916780224_m4049400462 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t3916780224 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.ObjectResetter::ResetCoroutine(System.Single)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ObjectResetter_ResetCoroutine_m3995850687 (ObjectResetter_t639177103 * __this, float ___delay0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CResetCoroutineU3Ec__Iterator0__ctor_m3896624994 (U3CResetCoroutineU3Ec__Iterator0_t3232105836 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Transform>::Contains(!0)
inline bool List_1_Contains_m11885848 (List_1_t777473367 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t777473367 *, Transform_t3600365921 *, const RuntimeMethod*))List_1_Contains_m2654125393_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_parent_m786917804 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m2899403247 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_m4254006699 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Component::SendMessage(System.String)
extern "C" IL2CPP_METHOD_ATTR void Component_SendMessage_m3172125788 (Component_t1923634451 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0__ctor_m3994160098 (U3CStartU3Ec__Iterator0_t980021917 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.ParticleSystem>()
inline ParticleSystemU5BU5D_t3089334924* Component_GetComponentsInChildren_TisParticleSystem_t1800779281_m2343960447 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  ParticleSystemU5BU5D_t3089334924* (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m2385061347_gshared)(__this, method);
}
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
extern "C" IL2CPP_METHOD_ATTR MainModule_t2320046318  ParticleSystem_get_main_m3006917117 (ParticleSystem_t1800779281 * __this, const RuntimeMethod* method);
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MainModule::get_startLifetime()
extern "C" IL2CPP_METHOD_ATTR MinMaxCurve_t1067599125  MainModule_get_startLifetime_m2343501481 (MainModule_t2320046318 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.ParticleSystem/MinMaxCurve::get_constant()
extern "C" IL2CPP_METHOD_ATTR float MinMaxCurve_get_constant_m2963124720 (MinMaxCurve_t1067599125 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
extern "C" IL2CPP_METHOD_ATTR float Time_get_time_m2907476221 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Random_Range_m2202990745 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// UnityEngine.ParticleSystem/EmissionModule UnityEngine.ParticleSystem::get_emission()
extern "C" IL2CPP_METHOD_ATTR EmissionModule_t311448003  ParticleSystem_get_emission_m1034302947 (ParticleSystem_t1800779281 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void EmissionModule_set_enabled_m353945573 (EmissionModule_t311448003 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Component::BroadcastMessage(System.String,UnityEngine.SendMessageOptions)
extern "C" IL2CPP_METHOD_ATTR void Component_BroadcastMessage_m2662892479 (Component_t1923634451 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Utility.PlatformSpecificContent::CheckEnableContent()
extern "C" IL2CPP_METHOD_ATTR void PlatformSpecificContent_CheckEnableContent_m3496228314 (PlatformSpecificContent_t1404549723 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Utility.PlatformSpecificContent::EnableContent(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void PlatformSpecificContent_EnableContent_m808853508 (PlatformSpecificContent_t1404549723 * __this, bool ___enabled0, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_m2717073726 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIText::set_text(System.String)
extern "C" IL2CPP_METHOD_ATTR void GUIText_set_text_m2265981083 (GUIText_t402233326 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m1719387948 (Vector3_t3722313464 * __this, float p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Transform_get_localRotation_m3487911431 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localRotation_m19445462 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method);
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String)
extern "C" IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxis_m693277759 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Clamp_m3350697880 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_SmoothDamp_m1123559802 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, Vector3_t3722313464 * p2, float p3, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_Euler_m3049309462 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_op_Multiply_m1294064023 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Quaternion_t2301928331  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_eulerAngles_m2743581774 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::LerpAngle(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_LerpAngle_m295352085 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_forward_m3100859705 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Quaternion_op_Multiply_m2607404835 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_LookAt_m3968184312 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/Entries::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Entries__ctor_m1063022036 (Entries_t3168066469 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::Activate(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TimedObjectActivator_Activate_m3597596254 (TimedObjectActivator_t1846709985 * __this, Entry_t2725803170 * ___entry0, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::Deactivate(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TimedObjectActivator_Deactivate_m98048501 (TimedObjectActivator_t1846709985 * __this, Entry_t2725803170 * ___entry0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m3118546832 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, float p1, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::ReloadLevel(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TimedObjectActivator_ReloadLevel_m3297458802 (TimedObjectActivator_t1846709985 * __this, Entry_t2725803170 * ___entry0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CActivateU3Ec__Iterator0__ctor_m3279076013 (U3CActivateU3Ec__Iterator0_t2664723090 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CDeactivateU3Ec__Iterator1__ctor_m244127093 (U3CDeactivateU3Ec__Iterator1_t730025274 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CReloadLevelU3Ec__Iterator2__ctor_m356851989 (U3CReloadLevelU3Ec__Iterator2_t2784493974 * __this, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetSceneAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Scene_t2348375561  SceneManager_GetSceneAt_m866025496 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Scene_get_name_m622963475 (Scene_t2348375561 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C" IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m1758133949 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4227543964 (MonoBehaviour_t3962482529 * __this, String_t* p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::DetachChildren()
extern "C" IL2CPP_METHOD_ATTR void Transform_DetachChildren_m3266231651 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Utility.WaypointCircuit/WaypointList::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WaypointList__ctor_m2673417506 (WaypointList_t2584574554 * __this, const RuntimeMethod* method);
// UnityEngine.Transform[] UnityStandardAssets.Utility.WaypointCircuit::get_Waypoints()
extern "C" IL2CPP_METHOD_ATTR TransformU5BU5D_t807237628* WaypointCircuit_get_Waypoints_m731492792 (WaypointCircuit_t445075330 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Utility.WaypointCircuit::CachePositionsAndDistances()
extern "C" IL2CPP_METHOD_ATTR void WaypointCircuit_CachePositionsAndDistances_m983282490 (WaypointCircuit_t445075330 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::GetRoutePosition(System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  WaypointCircuit_GetRoutePosition_m1956640709 (WaypointCircuit_t445075330 * __this, float ___dist0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_normalized_m2454957984 (Vector3_t3722313464 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Utility.WaypointCircuit/RoutePoint::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void RoutePoint__ctor_m1568691214 (RoutePoint_t3880028948 * __this, Vector3_t3722313464  ___position0, Vector3_t3722313464  ___direction1, const RuntimeMethod* method);
// System.Single UnityStandardAssets.Utility.WaypointCircuit::get_Length()
extern "C" IL2CPP_METHOD_ATTR float WaypointCircuit_get_Length_m250831631 (WaypointCircuit_t445075330 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Utility.WaypointCircuit::set_Length(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WaypointCircuit_set_Length_m4079220002 (WaypointCircuit_t445075330 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Repeat_m1502810009 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::CatmullRom(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  WaypointCircuit_CatmullRom_m2378689349 (WaypointCircuit_t445075330 * __this, Vector3_t3722313464  ___p00, Vector3_t3722313464  ___p11, Vector3_t3722313464  ___p22, Vector3_t3722313464  ___p33, float ___i4, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_Lerp_m407887542 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Multiply_m2104357790 (RuntimeObject * __this /* static, unused */, float p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m27958459 (Vector3_t3722313464 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Utility.WaypointCircuit::DrawGizmos(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void WaypointCircuit_DrawGizmos_m620488138 (WaypointCircuit_t445075330 * __this, bool ___selected0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_yellow_m1287957903 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Color__ctor_m2943235014 (Color_t2555686324 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Gizmos_set_color_m3399737545 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Gizmos_DrawLine_m3273476787 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::Reset()
extern "C" IL2CPP_METHOD_ATTR void WaypointProgressTracker_Reset_m1659377711 (WaypointProgressTracker_t1841386251 * __this, const RuntimeMethod* method);
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointCircuit::GetRoutePoint(System.Single)
extern "C" IL2CPP_METHOD_ATTR RoutePoint_t3880028948  WaypointCircuit_GetRoutePoint_m785398240 (WaypointCircuit_t445075330 * __this, float ___dist0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_LookRotation_m4040767668 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::set_progressPoint(UnityStandardAssets.Utility.WaypointCircuit/RoutePoint)
extern "C" IL2CPP_METHOD_ATTR void WaypointProgressTracker_set_progressPoint_m4281131402 (WaypointProgressTracker_t1841386251 * __this, RoutePoint_t3880028948  ___value0, const RuntimeMethod* method);
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::get_progressPoint()
extern "C" IL2CPP_METHOD_ATTR RoutePoint_t3880028948  WaypointProgressTracker_get_progressPoint_m1022457255 (WaypointProgressTracker_t1841386251 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_Dot_m606404487 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m100394690 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_green_m490390750 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Gizmos_DrawWireSphere_m132265467 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_maxAngularVelocity(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_maxAngularVelocity_m3527950699 (Rigidbody_t3916780224 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddTorque_m3171849690 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m3395934484 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m1896872038 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m1059068722 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  p0, int32_t p1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityStandardAssets.Vehicles.Ball.Ball>()
inline Ball_t2378314638 * Component_GetComponent_TisBall_t2378314638_m1039029406 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Ball_t2378314638 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButton(System.String)
extern "C" IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_GetButton_m241794690 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_Scale_m4006687392 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_right_m2535262102 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_right_m1913784872 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Vehicles.Ball.Ball::Move(UnityEngine.Vector3,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Ball_Move_m1246368361 (Ball_t2378314638 * __this, Vector3_t3722313464  ___moveDirection0, bool ___jump1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Sign(System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Sign_m3457838305 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_MoveTowards_m2786395547 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * GameObject_FindGameObjectWithTag_m2129039296 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void UnityStandardAssets._2D.CameraFollow::TrackPlayer()
extern "C" IL2CPP_METHOD_ATTR void CameraFollow_TrackPlayer_m3573657769 (CameraFollow_t1399352937 * __this, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets._2D.CameraFollow::CheckXMargin()
extern "C" IL2CPP_METHOD_ATTR bool CameraFollow_CheckXMargin_m1181846024 (CameraFollow_t1399352937 * __this, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets._2D.CameraFollow::CheckYMargin()
extern "C" IL2CPP_METHOD_ATTR bool CameraFollow_CheckYMargin_m1181844937 (CameraFollow_t1399352937 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityStandardAssets._2D.PlatformerCharacter2D>()
inline PlatformerCharacter2D_t675295753 * Component_GetComponent_TisPlatformerCharacter2D_t675295753_m828033776 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  PlatformerCharacter2D_t675295753 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonDown(System.String)
extern "C" IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_GetButtonDown_m1689635996 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetKey_m3736388334 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void UnityStandardAssets._2D.PlatformerCharacter2D::Move(System.Single,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void PlatformerCharacter2D_Move_m755954514 (PlatformerCharacter2D_t675295753 * __this, float ___move0, bool ___crouch1, bool ___jump2, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_Find_m1729760951 (Transform_t3600365921 * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t434523843 * Component_GetComponent_TisAnimator_t434523843_m2351447238 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t434523843 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_t939494601 * Component_GetComponent_TisRigidbody2D_t939494601_m2731142064 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_t939494601 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
extern "C" IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m3296792737 (RuntimeObject * __this /* static, unused */, LayerMask_t3493934918  p0, const RuntimeMethod* method);
// UnityEngine.Collider2D[] UnityEngine.Physics2D::OverlapCircleAll(UnityEngine.Vector2,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Collider2DU5BU5D_t1693969295* Physics2D_OverlapCircleAll_m638049410 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, int32_t p2, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetBool_m234840832 (Animator_t434523843 * __this, String_t* p0, bool p1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Rigidbody2D_get_velocity_m366589732 (Rigidbody2D_t939494601 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetFloat_m1701463607 (Animator_t434523843 * __this, String_t* p0, float p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animator::GetBool(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Animator_GetBool_m2865822416 (Animator_t434523843 * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapCircle(UnityEngine.Vector2,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Collider2D_t2806799626 * Physics2D_OverlapCircle_m2858772865 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, int32_t p2, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m2898400508 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Void UnityStandardAssets._2D.PlatformerCharacter2D::Flip()
extern "C" IL2CPP_METHOD_ATTR void PlatformerCharacter2D_Flip_m2859437419 (PlatformerCharacter2D_t675295753 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_m1113499586 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_localScale_m129152068 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
extern "C" IL2CPP_METHOD_ATTR String_t* Component_get_tag_m2716693327 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
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
// System.Void UnityStandardAssets.ImageEffects.Triangles::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Triangles__ctor_m3521099058 (Triangles_t2090031681 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.Triangles::HasMeshes()
extern "C" IL2CPP_METHOD_ATTR bool Triangles_HasMeshes_m1063919596 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Triangles_HasMeshes_m1063919596_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		MeshU5BU5D_t3972987605* L_0 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		V_0 = 0;
		goto IL_002b;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		MeshU5BU5D_t3972987605* L_1 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		Mesh_t3648964284 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		return (bool)0;
	}

IL_0027:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_002b:
	{
		int32_t L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		MeshU5BU5D_t3972987605* L_8 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_0013;
		}
	}
	{
		return (bool)1;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Triangles::Cleanup()
extern "C" IL2CPP_METHOD_ATTR void Triangles_Cleanup_m1309207721 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Triangles_Cleanup_m1309207721_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		MeshU5BU5D_t3972987605* L_0 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		V_0 = 0;
		goto IL_003c;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		MeshU5BU5D_t3972987605* L_1 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		Mesh_t3648964284 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		MeshU5BU5D_t3972987605* L_6 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		Mesh_t3648964284 * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m3193525861(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		MeshU5BU5D_t3972987605* L_10 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		int32_t L_11 = V_0;
		ArrayElementTypeCheck (L_10, NULL);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11), (Mesh_t3648964284 *)NULL);
	}

IL_0038:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_003c:
	{
		int32_t L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		MeshU5BU5D_t3972987605* L_14 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->set_meshes_0((MeshU5BU5D_t3972987605*)NULL);
		return;
	}
}
// UnityEngine.Mesh[] UnityStandardAssets.ImageEffects.Triangles::GetMeshes(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR MeshU5BU5D_t3972987605* Triangles_GetMeshes_m3491158630 (RuntimeObject * __this /* static, unused */, int32_t ___totalWidth0, int32_t ___totalHeight1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Triangles_GetMeshes_m3491158630_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		bool L_0 = Triangles_HasMeshes_m1063919596(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_currentTris_1();
		int32_t L_2 = ___totalWidth0;
		int32_t L_3 = ___totalHeight1;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_3))))))
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		MeshU5BU5D_t3972987605* L_4 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		return L_4;
	}

IL_001d:
	{
		V_0 = ((int32_t)21666);
		int32_t L_5 = ___totalWidth0;
		int32_t L_6 = ___totalHeight1;
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)L_6));
		int32_t L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->set_currentTris_1(L_7);
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_10 = Mathf_CeilToInt_m432108984(NULL /*static, unused*/, ((float)((float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)(((float)((float)L_8)))))/(float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)(((float)((float)L_9))))))), /*hidden argument*/NULL);
		V_2 = L_10;
		int32_t L_11 = V_2;
		MeshU5BU5D_t3972987605* L_12 = (MeshU5BU5D_t3972987605*)SZArrayNew(MeshU5BU5D_t3972987605_il2cpp_TypeInfo_var, (uint32_t)L_11);
		((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->set_meshes_0(L_12);
		V_3 = 0;
		V_4 = 0;
		V_3 = 0;
		goto IL_0089;
	}

IL_005b:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_3;
		int32_t L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_16 = Mathf_Clamp_m2756574208(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)L_14)), 0, L_15, /*hidden argument*/NULL);
		int32_t L_17 = Mathf_FloorToInt_m1870542928(NULL /*static, unused*/, (((float)((float)L_16))), /*hidden argument*/NULL);
		V_5 = L_17;
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		MeshU5BU5D_t3972987605* L_18 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		int32_t L_19 = V_4;
		int32_t L_20 = V_5;
		int32_t L_21 = V_3;
		int32_t L_22 = ___totalWidth0;
		int32_t L_23 = ___totalHeight1;
		Mesh_t3648964284 * L_24 = Triangles_GetMesh_m1896089306(NULL /*static, unused*/, L_20, L_21, L_22, L_23, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_18, L_24);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19), (Mesh_t3648964284 *)L_24);
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		int32_t L_26 = V_3;
		int32_t L_27 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)L_27));
	}

IL_0089:
	{
		int32_t L_28 = V_3;
		int32_t L_29 = V_1;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_005b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		MeshU5BU5D_t3972987605* L_30 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		return L_30;
	}
}
// UnityEngine.Mesh UnityStandardAssets.ImageEffects.Triangles::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Mesh_t3648964284 * Triangles_GetMesh_m1896089306 (RuntimeObject * __this /* static, unused */, int32_t ___triCount0, int32_t ___triOffset1, int32_t ___totalWidth2, int32_t ___totalHeight3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Triangles_GetMesh_m1896089306_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t3648964284 * V_0 = NULL;
	Vector3U5BU5D_t1718750761* V_1 = NULL;
	Vector2U5BU5D_t1457185986* V_2 = NULL;
	Vector2U5BU5D_t1457185986* V_3 = NULL;
	Int32U5BU5D_t385246372* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Vector3_t3722313464  V_10;
	memset(&V_10, 0, sizeof(V_10));
	{
		Mesh_t3648964284 * L_0 = (Mesh_t3648964284 *)il2cpp_codegen_object_new(Mesh_t3648964284_il2cpp_TypeInfo_var);
		Mesh__ctor_m2533762929(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Mesh_t3648964284 * L_1 = V_0;
		Object_set_hideFlags_m1648752846(L_1, ((int32_t)52), /*hidden argument*/NULL);
		int32_t L_2 = ___triCount0;
		Vector3U5BU5D_t1718750761* L_3 = (Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)3)));
		V_1 = L_3;
		int32_t L_4 = ___triCount0;
		Vector2U5BU5D_t1457185986* L_5 = (Vector2U5BU5D_t1457185986*)SZArrayNew(Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)3)));
		V_2 = L_5;
		int32_t L_6 = ___triCount0;
		Vector2U5BU5D_t1457185986* L_7 = (Vector2U5BU5D_t1457185986*)SZArrayNew(Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)3)));
		V_3 = L_7;
		int32_t L_8 = ___triCount0;
		Int32U5BU5D_t385246372* L_9 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)3)));
		V_4 = L_9;
		V_5 = 0;
		goto IL_017f;
	}

IL_003b:
	{
		int32_t L_10 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)3));
		int32_t L_11 = ___triOffset1;
		int32_t L_12 = V_5;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_12));
		int32_t L_13 = V_7;
		int32_t L_14 = ___totalWidth2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_15 = floorf((((float)((float)((int32_t)((int32_t)L_13%(int32_t)L_14))))));
		int32_t L_16 = ___totalWidth2;
		V_8 = ((float)((float)L_15/(float)(((float)((float)L_16)))));
		int32_t L_17 = V_7;
		int32_t L_18 = ___totalWidth2;
		float L_19 = floorf((((float)((float)((int32_t)((int32_t)L_17/(int32_t)L_18))))));
		int32_t L_20 = ___totalHeight3;
		V_9 = ((float)((float)L_19/(float)(((float)((float)L_20)))));
		float L_21 = V_8;
		float L_22 = V_9;
		Vector3__ctor_m3353183577((Vector3_t3722313464 *)(&V_10), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_21, (float)(2.0f))), (float)(1.0f))), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_22, (float)(2.0f))), (float)(1.0f))), (1.0f), /*hidden argument*/NULL);
		Vector3U5BU5D_t1718750761* L_23 = V_1;
		int32_t L_24 = V_6;
		Vector3_t3722313464  L_25 = V_10;
		*(Vector3_t3722313464 *)((L_23)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_24))) = L_25;
		Vector3U5BU5D_t1718750761* L_26 = V_1;
		int32_t L_27 = V_6;
		Vector3_t3722313464  L_28 = V_10;
		*(Vector3_t3722313464 *)((L_26)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1))))) = L_28;
		Vector3U5BU5D_t1718750761* L_29 = V_1;
		int32_t L_30 = V_6;
		Vector3_t3722313464  L_31 = V_10;
		*(Vector3_t3722313464 *)((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)2))))) = L_31;
		Vector2U5BU5D_t1457185986* L_32 = V_2;
		int32_t L_33 = V_6;
		Vector2_t2156229523  L_34;
		memset(&L_34, 0, sizeof(L_34));
		Vector2__ctor_m3970636864((&L_34), (0.0f), (0.0f), /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_32)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_33))) = L_34;
		Vector2U5BU5D_t1457185986* L_35 = V_2;
		int32_t L_36 = V_6;
		Vector2_t2156229523  L_37;
		memset(&L_37, 0, sizeof(L_37));
		Vector2__ctor_m3970636864((&L_37), (1.0f), (0.0f), /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_35)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1))))) = L_37;
		Vector2U5BU5D_t1457185986* L_38 = V_2;
		int32_t L_39 = V_6;
		Vector2_t2156229523  L_40;
		memset(&L_40, 0, sizeof(L_40));
		Vector2__ctor_m3970636864((&L_40), (0.0f), (1.0f), /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)2))))) = L_40;
		Vector2U5BU5D_t1457185986* L_41 = V_3;
		int32_t L_42 = V_6;
		float L_43 = V_8;
		float L_44 = V_9;
		Vector2_t2156229523  L_45;
		memset(&L_45, 0, sizeof(L_45));
		Vector2__ctor_m3970636864((&L_45), L_43, L_44, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42))) = L_45;
		Vector2U5BU5D_t1457185986* L_46 = V_3;
		int32_t L_47 = V_6;
		float L_48 = V_8;
		float L_49 = V_9;
		Vector2_t2156229523  L_50;
		memset(&L_50, 0, sizeof(L_50));
		Vector2__ctor_m3970636864((&L_50), L_48, L_49, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1))))) = L_50;
		Vector2U5BU5D_t1457185986* L_51 = V_3;
		int32_t L_52 = V_6;
		float L_53 = V_8;
		float L_54 = V_9;
		Vector2_t2156229523  L_55;
		memset(&L_55, 0, sizeof(L_55));
		Vector2__ctor_m3970636864((&L_55), L_53, L_54, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)2))))) = L_55;
		Int32U5BU5D_t385246372* L_56 = V_4;
		int32_t L_57 = V_6;
		int32_t L_58 = V_6;
		(L_56)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_57), (int32_t)L_58);
		Int32U5BU5D_t385246372* L_59 = V_4;
		int32_t L_60 = V_6;
		int32_t L_61 = V_6;
		(L_59)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1)));
		Int32U5BU5D_t385246372* L_62 = V_4;
		int32_t L_63 = V_6;
		int32_t L_64 = V_6;
		(L_62)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)2))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)2)));
		int32_t L_65 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1));
	}

IL_017f:
	{
		int32_t L_66 = V_5;
		int32_t L_67 = ___triCount0;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_003b;
		}
	}
	{
		Mesh_t3648964284 * L_68 = V_0;
		Vector3U5BU5D_t1718750761* L_69 = V_1;
		Mesh_set_vertices_m2084450642(L_68, L_69, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_70 = V_0;
		Int32U5BU5D_t385246372* L_71 = V_4;
		Mesh_set_triangles_m255556250(L_70, L_71, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_72 = V_0;
		Vector2U5BU5D_t1457185986* L_73 = V_2;
		Mesh_set_uv_m1258646872(L_72, L_73, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_74 = V_0;
		Vector2U5BU5D_t1457185986* L_75 = V_3;
		Mesh_set_uv2_m2840654016(L_74, L_75, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_76 = V_0;
		return L_76;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Triangles::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Triangles__cctor_m11028289 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.ImageEffects.Twirl::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Twirl__ctor_m790112101 (Twirl_t2760508880 * __this, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector2__ctor_m3970636864((&L_0), (0.3f), (0.3f), /*hidden argument*/NULL);
		__this->set_radius_6(L_0);
		__this->set_angle_7((50.0f));
		Vector2_t2156229523  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector2__ctor_m3970636864((&L_1), (0.5f), (0.5f), /*hidden argument*/NULL);
		__this->set_center_8(L_1);
		ImageEffectBase__ctor_m3682424896(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Twirl::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void Twirl_OnRenderImage_m3285159984 (Twirl_t2760508880 * __this, RenderTexture_t2108887433 * ___source0, RenderTexture_t2108887433 * ___destination1, const RuntimeMethod* method)
{
	{
		Material_t340375123 * L_0 = ImageEffectBase_get_material_m3574076220(__this, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_1 = ___source0;
		RenderTexture_t2108887433 * L_2 = ___destination1;
		float L_3 = __this->get_angle_7();
		Vector2_t2156229523  L_4 = __this->get_center_8();
		Vector2_t2156229523  L_5 = __this->get_radius_6();
		ImageEffects_RenderDistortion_m2367323920(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VignetteAndChromaticAberration__ctor_m1547855563 (VignetteAndChromaticAberration_t3308099924 * __this, const RuntimeMethod* method)
{
	{
		__this->set_intensity_9((0.036f));
		__this->set_chromaticAberration_10((0.2f));
		__this->set_axialAberration_11((0.5f));
		__this->set_blurSpread_13((0.75f));
		__this->set_luminanceDependency_14((0.25f));
		__this->set_blurDistance_15((2.5f));
		PostEffectsBase__ctor_m3249494038(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::CheckResources()
extern "C" IL2CPP_METHOD_ATTR bool VignetteAndChromaticAberration_CheckResources_m328480231 (VignetteAndChromaticAberration_t3308099924 * __this, const RuntimeMethod* method)
{
	{
		PostEffectsBase_CheckSupport_m2449300828(__this, (bool)0, /*hidden argument*/NULL);
		Shader_t4151988712 * L_0 = __this->get_vignetteShader_16();
		Material_t340375123 * L_1 = __this->get_m_VignetteMaterial_19();
		Material_t340375123 * L_2 = PostEffectsBase_CheckShaderAndCreateMaterial_m242186546(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->set_m_VignetteMaterial_19(L_2);
		Shader_t4151988712 * L_3 = __this->get_separableBlurShader_17();
		Material_t340375123 * L_4 = __this->get_m_SeparableBlurMaterial_20();
		Material_t340375123 * L_5 = PostEffectsBase_CheckShaderAndCreateMaterial_m242186546(__this, L_3, L_4, /*hidden argument*/NULL);
		__this->set_m_SeparableBlurMaterial_20(L_5);
		Shader_t4151988712 * L_6 = __this->get_chromAberrationShader_18();
		Material_t340375123 * L_7 = __this->get_m_ChromAberrationMaterial_21();
		Material_t340375123 * L_8 = PostEffectsBase_CheckShaderAndCreateMaterial_m242186546(__this, L_6, L_7, /*hidden argument*/NULL);
		__this->set_m_ChromAberrationMaterial_21(L_8);
		bool L_9 = ((PostEffectsBase_t2404315739 *)__this)->get_isSupported_6();
		if (L_9)
		{
			goto IL_0061;
		}
	}
	{
		PostEffectsBase_ReportAutoDisable_m412809422(__this, /*hidden argument*/NULL);
	}

IL_0061:
	{
		bool L_10 = ((PostEffectsBase_t2404315739 *)__this)->get_isSupported_6();
		return L_10;
	}
}
// System.Void UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void VignetteAndChromaticAberration_OnRenderImage_m4061427208 (VignetteAndChromaticAberration_t3308099924 * __this, RenderTexture_t2108887433 * ___source0, RenderTexture_t2108887433 * ___destination1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VignetteAndChromaticAberration_OnRenderImage_m4061427208_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	float V_3 = 0.0f;
	RenderTexture_t2108887433 * V_4 = NULL;
	RenderTexture_t2108887433 * V_5 = NULL;
	int32_t V_6 = 0;
	RenderTexture_t2108887433 * V_7 = NULL;
	int32_t G_B5_0 = 0;
	RenderTexture_t2108887433 * G_B17_0 = NULL;
	Material_t340375123 * G_B19_0 = NULL;
	RenderTexture_t2108887433 * G_B19_1 = NULL;
	RenderTexture_t2108887433 * G_B19_2 = NULL;
	Material_t340375123 * G_B18_0 = NULL;
	RenderTexture_t2108887433 * G_B18_1 = NULL;
	RenderTexture_t2108887433 * G_B18_2 = NULL;
	int32_t G_B20_0 = 0;
	Material_t340375123 * G_B20_1 = NULL;
	RenderTexture_t2108887433 * G_B20_2 = NULL;
	RenderTexture_t2108887433 * G_B20_3 = NULL;
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		RenderTexture_t2108887433 * L_1 = ___source0;
		RenderTexture_t2108887433 * L_2 = ___destination1;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m1336850842(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		RenderTexture_t2108887433 * L_3 = ___source0;
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		V_0 = L_4;
		RenderTexture_t2108887433 * L_5 = ___source0;
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_5);
		V_1 = L_6;
		float L_7 = __this->get_blur_12();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_8 = fabsf(L_7);
		if ((((float)L_8) > ((float)(0.0f))))
		{
			goto IL_004a;
		}
	}
	{
		float L_9 = __this->get_intensity_9();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_10 = fabsf(L_9);
		G_B5_0 = ((((float)L_10) > ((float)(0.0f)))? 1 : 0);
		goto IL_004b;
	}

IL_004a:
	{
		G_B5_0 = 1;
	}

IL_004b:
	{
		V_2 = (bool)G_B5_0;
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		V_3 = ((float)((float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)(((float)((float)L_11)))))/(float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)(((float)((float)L_12)))))));
		V_4 = (RenderTexture_t2108887433 *)NULL;
		V_5 = (RenderTexture_t2108887433 *)NULL;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_01ef;
		}
	}
	{
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		RenderTexture_t2108887433 * L_16 = ___source0;
		int32_t L_17 = RenderTexture_get_format_m3846871418(L_16, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_18 = RenderTexture_GetTemporary_m3378328322(NULL /*static, unused*/, L_14, L_15, 0, L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		float L_19 = __this->get_blur_12();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_20 = fabsf(L_19);
		if ((!(((float)L_20) > ((float)(0.0f)))))
		{
			goto IL_017e;
		}
	}
	{
		int32_t L_21 = V_0;
		int32_t L_22 = V_1;
		RenderTexture_t2108887433 * L_23 = ___source0;
		int32_t L_24 = RenderTexture_get_format_m3846871418(L_23, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_25 = RenderTexture_GetTemporary_m3378328322(NULL /*static, unused*/, ((int32_t)((int32_t)L_21/(int32_t)2)), ((int32_t)((int32_t)L_22/(int32_t)2)), 0, L_24, /*hidden argument*/NULL);
		V_5 = L_25;
		RenderTexture_t2108887433 * L_26 = ___source0;
		RenderTexture_t2108887433 * L_27 = V_5;
		Material_t340375123 * L_28 = __this->get_m_ChromAberrationMaterial_21();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m4126770912(NULL /*static, unused*/, L_26, L_27, L_28, 0, /*hidden argument*/NULL);
		V_6 = 0;
		goto IL_0176;
	}

IL_00ba:
	{
		Material_t340375123 * L_29 = __this->get_m_SeparableBlurMaterial_20();
		float L_30 = __this->get_blurSpread_13();
		Vector4_t3319028937  L_31;
		memset(&L_31, 0, sizeof(L_31));
		Vector4__ctor_m2498754347((&L_31), (0.0f), ((float)il2cpp_codegen_multiply((float)L_30, (float)(0.001953125f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		Material_SetVector_m4214217286(L_29, _stringLiteral1624685711, L_31, /*hidden argument*/NULL);
		int32_t L_32 = V_0;
		int32_t L_33 = V_1;
		RenderTexture_t2108887433 * L_34 = ___source0;
		int32_t L_35 = RenderTexture_get_format_m3846871418(L_34, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_36 = RenderTexture_GetTemporary_m3378328322(NULL /*static, unused*/, ((int32_t)((int32_t)L_32/(int32_t)2)), ((int32_t)((int32_t)L_33/(int32_t)2)), 0, L_35, /*hidden argument*/NULL);
		V_7 = L_36;
		RenderTexture_t2108887433 * L_37 = V_5;
		RenderTexture_t2108887433 * L_38 = V_7;
		Material_t340375123 * L_39 = __this->get_m_SeparableBlurMaterial_20();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m890955694(NULL /*static, unused*/, L_37, L_38, L_39, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_40 = V_5;
		RenderTexture_ReleaseTemporary_m2400081536(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		Material_t340375123 * L_41 = __this->get_m_SeparableBlurMaterial_20();
		float L_42 = __this->get_blurSpread_13();
		float L_43 = V_3;
		Vector4_t3319028937  L_44;
		memset(&L_44, 0, sizeof(L_44));
		Vector4__ctor_m2498754347((&L_44), ((float)((float)((float)il2cpp_codegen_multiply((float)L_42, (float)(0.001953125f)))/(float)L_43)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Material_SetVector_m4214217286(L_41, _stringLiteral1624685711, L_44, /*hidden argument*/NULL);
		int32_t L_45 = V_0;
		int32_t L_46 = V_1;
		RenderTexture_t2108887433 * L_47 = ___source0;
		int32_t L_48 = RenderTexture_get_format_m3846871418(L_47, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_49 = RenderTexture_GetTemporary_m3378328322(NULL /*static, unused*/, ((int32_t)((int32_t)L_45/(int32_t)2)), ((int32_t)((int32_t)L_46/(int32_t)2)), 0, L_48, /*hidden argument*/NULL);
		V_5 = L_49;
		RenderTexture_t2108887433 * L_50 = V_7;
		RenderTexture_t2108887433 * L_51 = V_5;
		Material_t340375123 * L_52 = __this->get_m_SeparableBlurMaterial_20();
		Graphics_Blit_m890955694(NULL /*static, unused*/, L_50, L_51, L_52, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_53 = V_7;
		RenderTexture_ReleaseTemporary_m2400081536(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		int32_t L_54 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
	}

IL_0176:
	{
		int32_t L_55 = V_6;
		if ((((int32_t)L_55) < ((int32_t)2)))
		{
			goto IL_00ba;
		}
	}

IL_017e:
	{
		Material_t340375123 * L_56 = __this->get_m_VignetteMaterial_19();
		float L_57 = __this->get_intensity_9();
		Material_SetFloat_m3226510453(L_56, _stringLiteral3952415593, ((float)il2cpp_codegen_subtract((float)((float)((float)(1.0f)/(float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_57)))), (float)(1.0f))), /*hidden argument*/NULL);
		Material_t340375123 * L_58 = __this->get_m_VignetteMaterial_19();
		float L_59 = __this->get_blur_12();
		Material_SetFloat_m3226510453(L_58, _stringLiteral3560662707, ((float)il2cpp_codegen_subtract((float)((float)((float)(1.0f)/(float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_59)))), (float)(1.0f))), /*hidden argument*/NULL);
		Material_t340375123 * L_60 = __this->get_m_VignetteMaterial_19();
		RenderTexture_t2108887433 * L_61 = V_5;
		Material_SetTexture_m1829349465(L_60, _stringLiteral3020016099, L_61, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_62 = ___source0;
		RenderTexture_t2108887433 * L_63 = V_4;
		Material_t340375123 * L_64 = __this->get_m_VignetteMaterial_19();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m4126770912(NULL /*static, unused*/, L_62, L_63, L_64, 0, /*hidden argument*/NULL);
	}

IL_01ef:
	{
		Material_t340375123 * L_65 = __this->get_m_ChromAberrationMaterial_21();
		float L_66 = __this->get_chromaticAberration_10();
		Material_SetFloat_m3226510453(L_65, _stringLiteral1596491694, L_66, /*hidden argument*/NULL);
		Material_t340375123 * L_67 = __this->get_m_ChromAberrationMaterial_21();
		float L_68 = __this->get_axialAberration_11();
		Material_SetFloat_m3226510453(L_67, _stringLiteral1767284560, L_68, /*hidden argument*/NULL);
		Material_t340375123 * L_69 = __this->get_m_ChromAberrationMaterial_21();
		float L_70 = __this->get_blurDistance_15();
		float L_71 = __this->get_blurDistance_15();
		Vector2_t2156229523  L_72;
		memset(&L_72, 0, sizeof(L_72));
		Vector2__ctor_m3970636864((&L_72), ((-L_70)), L_71, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_73 = Vector4_op_Implicit_m237151757(NULL /*static, unused*/, L_72, /*hidden argument*/NULL);
		Material_SetVector_m4214217286(L_69, _stringLiteral1772571274, L_73, /*hidden argument*/NULL);
		Material_t340375123 * L_74 = __this->get_m_ChromAberrationMaterial_21();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_75 = ((Mathf_t3464937446_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_t3464937446_il2cpp_TypeInfo_var))->get_Epsilon_0();
		float L_76 = __this->get_luminanceDependency_14();
		float L_77 = Mathf_Max_m3146388979(NULL /*static, unused*/, L_75, L_76, /*hidden argument*/NULL);
		Material_SetFloat_m3226510453(L_74, _stringLiteral2859884931, ((float)((float)(1.0f)/(float)L_77)), /*hidden argument*/NULL);
		bool L_78 = V_2;
		if (!L_78)
		{
			goto IL_027b;
		}
	}
	{
		RenderTexture_t2108887433 * L_79 = V_4;
		Texture_set_wrapMode_m587872754(L_79, 1, /*hidden argument*/NULL);
		goto IL_0282;
	}

IL_027b:
	{
		RenderTexture_t2108887433 * L_80 = ___source0;
		Texture_set_wrapMode_m587872754(L_80, 1, /*hidden argument*/NULL);
	}

IL_0282:
	{
		bool L_81 = V_2;
		if (!L_81)
		{
			goto IL_028f;
		}
	}
	{
		RenderTexture_t2108887433 * L_82 = V_4;
		G_B17_0 = L_82;
		goto IL_0290;
	}

IL_028f:
	{
		RenderTexture_t2108887433 * L_83 = ___source0;
		G_B17_0 = L_83;
	}

IL_0290:
	{
		RenderTexture_t2108887433 * L_84 = ___destination1;
		Material_t340375123 * L_85 = __this->get_m_ChromAberrationMaterial_21();
		int32_t L_86 = __this->get_mode_8();
		G_B18_0 = L_85;
		G_B18_1 = L_84;
		G_B18_2 = G_B17_0;
		if ((!(((uint32_t)L_86) == ((uint32_t)1))))
		{
			G_B19_0 = L_85;
			G_B19_1 = L_84;
			G_B19_2 = G_B17_0;
			goto IL_02a9;
		}
	}
	{
		G_B20_0 = 2;
		G_B20_1 = G_B18_0;
		G_B20_2 = G_B18_1;
		G_B20_3 = G_B18_2;
		goto IL_02aa;
	}

IL_02a9:
	{
		G_B20_0 = 1;
		G_B20_1 = G_B19_0;
		G_B20_2 = G_B19_1;
		G_B20_3 = G_B19_2;
	}

IL_02aa:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m4126770912(NULL /*static, unused*/, G_B20_3, G_B20_2, G_B20_1, G_B20_0, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_87 = V_4;
		RenderTexture_ReleaseTemporary_m2400081536(NULL /*static, unused*/, L_87, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_88 = V_5;
		RenderTexture_ReleaseTemporary_m2400081536(NULL /*static, unused*/, L_88, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.ImageEffects.Vortex::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Vortex__ctor_m4031313303 (Vortex_t3420399868 * __this, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector2__ctor_m3970636864((&L_0), (0.4f), (0.4f), /*hidden argument*/NULL);
		__this->set_radius_6(L_0);
		__this->set_angle_7((50.0f));
		Vector2_t2156229523  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector2__ctor_m3970636864((&L_1), (0.5f), (0.5f), /*hidden argument*/NULL);
		__this->set_center_8(L_1);
		ImageEffectBase__ctor_m3682424896(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Vortex::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void Vortex_OnRenderImage_m3910833119 (Vortex_t3420399868 * __this, RenderTexture_t2108887433 * ___source0, RenderTexture_t2108887433 * ___destination1, const RuntimeMethod* method)
{
	{
		Material_t340375123 * L_0 = ImageEffectBase_get_material_m3574076220(__this, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_1 = ___source0;
		RenderTexture_t2108887433 * L_2 = ___destination1;
		float L_3 = __this->get_angle_7();
		Vector2_t2156229523  L_4 = __this->get_center_8();
		Vector2_t2156229523  L_5 = __this->get_radius_6();
		ImageEffects_RenderDistortion_m2367323920(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.Utility.ActivateTrigger::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ActivateTrigger__ctor_m436930199 (ActivateTrigger_t3349759092 * __this, const RuntimeMethod* method)
{
	{
		__this->set_action_4(2);
		__this->set_triggerCount_7(1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.ActivateTrigger::DoActivateTrigger()
extern "C" IL2CPP_METHOD_ATTR void ActivateTrigger_DoActivateTrigger_m3469673119 (ActivateTrigger_t3349759092 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ActivateTrigger_DoActivateTrigger_m3469673119_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Object_t631007953 * V_0 = NULL;
	Behaviour_t1437897464 * V_1 = NULL;
	GameObject_t1113636619 * V_2 = NULL;
	int32_t V_3 = 0;
	Object_t631007953 * G_B4_0 = NULL;
	Object_t631007953 * G_B3_0 = NULL;
	{
		int32_t L_0 = __this->get_triggerCount_7();
		__this->set_triggerCount_7(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		int32_t L_1 = __this->get_triggerCount_7();
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		bool L_2 = __this->get_repeatTrigger_8();
		if (!L_2)
		{
			goto IL_014e;
		}
	}

IL_0024:
	{
		Object_t631007953 * L_3 = __this->get_target_5();
		Object_t631007953 * L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0037;
		}
	}
	{
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		G_B4_0 = ((Object_t631007953 *)(L_5));
	}

IL_0037:
	{
		V_0 = G_B4_0;
		Object_t631007953 * L_6 = V_0;
		V_1 = ((Behaviour_t1437897464 *)IsInstClass((RuntimeObject*)L_6, Behaviour_t1437897464_il2cpp_TypeInfo_var));
		Object_t631007953 * L_7 = V_0;
		V_2 = ((GameObject_t1113636619 *)IsInstSealed((RuntimeObject*)L_7, GameObject_t1113636619_il2cpp_TypeInfo_var));
		Behaviour_t1437897464 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0059;
		}
	}
	{
		Behaviour_t1437897464 * L_10 = V_1;
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
	}

IL_0059:
	{
		int32_t L_12 = __this->get_action_4();
		V_3 = L_12;
		int32_t L_13 = V_3;
		switch (L_13)
		{
			case 0:
			{
				goto IL_0083;
			}
			case 1:
			{
				goto IL_009f;
			}
			case 2:
			{
				goto IL_00e9;
			}
			case 3:
			{
				goto IL_0101;
			}
			case 4:
			{
				goto IL_0119;
			}
			case 5:
			{
				goto IL_0136;
			}
		}
	}
	{
		goto IL_014e;
	}

IL_0083:
	{
		GameObject_t1113636619 * L_14 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_14, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_009a;
		}
	}
	{
		GameObject_t1113636619 * L_16 = V_2;
		GameObject_BroadcastMessage_m217296818(L_16, _stringLiteral865230867, /*hidden argument*/NULL);
	}

IL_009a:
	{
		goto IL_014e;
	}

IL_009f:
	{
		GameObject_t1113636619 * L_17 = __this->get_source_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_17, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00e4;
		}
	}
	{
		GameObject_t1113636619 * L_19 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_20 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_19, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00e4;
		}
	}
	{
		GameObject_t1113636619 * L_21 = __this->get_source_6();
		GameObject_t1113636619 * L_22 = V_2;
		Transform_t3600365921 * L_23 = GameObject_get_transform_m1369836730(L_22, /*hidden argument*/NULL);
		Vector3_t3722313464  L_24 = Transform_get_position_m36019626(L_23, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_25 = V_2;
		Transform_t3600365921 * L_26 = GameObject_get_transform_m1369836730(L_25, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_27 = Transform_get_rotation_m3502953881(L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m2517112845(NULL /*static, unused*/, L_21, L_24, L_27, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m2517112845_RuntimeMethod_var);
		GameObject_t1113636619 * L_28 = V_2;
		Object_DestroyObject_m1406874517(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
	}

IL_00e4:
	{
		goto IL_014e;
	}

IL_00e9:
	{
		GameObject_t1113636619 * L_29 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_30 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_29, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00fc;
		}
	}
	{
		GameObject_t1113636619 * L_31 = V_2;
		GameObject_SetActive_m796801857(L_31, (bool)1, /*hidden argument*/NULL);
	}

IL_00fc:
	{
		goto IL_014e;
	}

IL_0101:
	{
		Behaviour_t1437897464 * L_32 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_33 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_32, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0114;
		}
	}
	{
		Behaviour_t1437897464 * L_34 = V_1;
		Behaviour_set_enabled_m20417929(L_34, (bool)1, /*hidden argument*/NULL);
	}

IL_0114:
	{
		goto IL_014e;
	}

IL_0119:
	{
		GameObject_t1113636619 * L_35 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_36 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_35, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0131;
		}
	}
	{
		GameObject_t1113636619 * L_37 = V_2;
		Animation_t3648466861 * L_38 = GameObject_GetComponent_TisAnimation_t3648466861_m4035734369(L_37, /*hidden argument*/GameObject_GetComponent_TisAnimation_t3648466861_m4035734369_RuntimeMethod_var);
		Animation_Play_m2798573761(L_38, /*hidden argument*/NULL);
	}

IL_0131:
	{
		goto IL_014e;
	}

IL_0136:
	{
		GameObject_t1113636619 * L_39 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_40 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_39, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0149;
		}
	}
	{
		GameObject_t1113636619 * L_41 = V_2;
		GameObject_SetActive_m796801857(L_41, (bool)0, /*hidden argument*/NULL);
	}

IL_0149:
	{
		goto IL_014e;
	}

IL_014e:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.ActivateTrigger::OnTriggerEnter(UnityEngine.Collider)
extern "C" IL2CPP_METHOD_ATTR void ActivateTrigger_OnTriggerEnter_m1872248888 (ActivateTrigger_t3349759092 * __this, Collider_t1773347010 * ___other0, const RuntimeMethod* method)
{
	{
		ActivateTrigger_DoActivateTrigger_m3469673119(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.Utility.AutoMobileShaderSwitch::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AutoMobileShaderSwitch__ctor_m460806966 (AutoMobileShaderSwitch_t568447889 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.AutoMobileShaderSwitch::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void AutoMobileShaderSwitch_OnEnable_m1387008820 (AutoMobileShaderSwitch_t568447889 * __this, const RuntimeMethod* method)
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
// System.Void UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ReplacementDefinition__ctor_m2545486549 (ReplacementDefinition_t2693741842 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementList::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ReplacementList__ctor_m786158475 (ReplacementList_t1887104210 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReplacementList__ctor_m786158475_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReplacementDefinitionU5BU5D_t2596446823* L_0 = (ReplacementDefinitionU5BU5D_t2596446823*)SZArrayNew(ReplacementDefinitionU5BU5D_t2596446823_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_items_0(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AutoMoveAndRotate__ctor_m2626729908 (AutoMoveAndRotate_t2437913015 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate::Start()
extern "C" IL2CPP_METHOD_ATTR void AutoMoveAndRotate_Start_m235804072 (AutoMoveAndRotate_t2437913015 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = Time_get_realtimeSinceStartup_m3141794964(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_LastRealTime_7(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate::Update()
extern "C" IL2CPP_METHOD_ATTR void AutoMoveAndRotate_Update_m1577675347 (AutoMoveAndRotate_t2437913015 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AutoMoveAndRotate_Update_m1577675347_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = __this->get_ignoreTimescale_6();
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		float L_2 = Time_get_realtimeSinceStartup_m3141794964(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = __this->get_m_LastRealTime_7();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_2, (float)L_3));
		float L_4 = Time_get_realtimeSinceStartup_m3141794964(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_LastRealTime_7(L_4);
	}

IL_0029:
	{
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3andSpace_t219844479 * L_6 = __this->get_moveUnitsPerSecond_4();
		Vector3_t3722313464  L_7 = L_6->get_value_0();
		float L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_9 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		Vector3andSpace_t219844479 * L_10 = __this->get_moveUnitsPerSecond_4();
		int32_t L_11 = L_10->get_space_1();
		Transform_Translate_m1990195114(L_5, L_9, L_11, /*hidden argument*/NULL);
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3andSpace_t219844479 * L_13 = __this->get_rotateDegreesPerSecond_5();
		Vector3_t3722313464  L_14 = L_13->get_value_0();
		float L_15 = V_0;
		Vector3_t3722313464  L_16 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		Vector3andSpace_t219844479 * L_17 = __this->get_moveUnitsPerSecond_4();
		int32_t L_18 = L_17->get_space_1();
		Transform_Rotate_m1886816857(L_12, L_16, L_18, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Vector3andSpace__ctor_m894178649 (Vector3andSpace_t219844479 * __this, const RuntimeMethod* method)
{
	{
		__this->set_space_1(1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.Utility.CameraRefocus::.ctor(UnityEngine.Camera,UnityEngine.Transform,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void CameraRefocus__ctor_m2622592662 (CameraRefocus_t4263235746 * __this, Camera_t4157153871 * ___camera0, Transform_t3600365921 * ___parent1, Vector3_t3722313464  ___origCameraPos2, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = ___origCameraPos2;
		__this->set_m_OrigCameraPos_3(L_0);
		Camera_t4157153871 * L_1 = ___camera0;
		__this->set_Camera_0(L_1);
		Transform_t3600365921 * L_2 = ___parent1;
		__this->set_Parent_2(L_2);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.CameraRefocus::ChangeCamera(UnityEngine.Camera)
extern "C" IL2CPP_METHOD_ATTR void CameraRefocus_ChangeCamera_m250979560 (CameraRefocus_t4263235746 * __this, Camera_t4157153871 * ___camera0, const RuntimeMethod* method)
{
	{
		Camera_t4157153871 * L_0 = ___camera0;
		__this->set_Camera_0(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.CameraRefocus::ChangeParent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void CameraRefocus_ChangeParent_m720210042 (CameraRefocus_t4263235746 * __this, Transform_t3600365921 * ___parent0, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = ___parent0;
		__this->set_Parent_2(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.CameraRefocus::GetFocusPoint()
extern "C" IL2CPP_METHOD_ATTR void CameraRefocus_GetFocusPoint_m3791730473 (CameraRefocus_t4263235746 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraRefocus_GetFocusPoint_m3791730473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t1056001966  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t3600365921 * L_0 = __this->get_Parent_2();
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(L_0, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = __this->get_m_OrigCameraPos_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Transform_t3600365921 * L_5 = __this->get_Parent_2();
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(L_5, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = Transform_get_forward_m747522392(L_6, /*hidden argument*/NULL);
		bool L_8 = Physics_Raycast_m261647105(NULL /*static, unused*/, L_4, L_7, (RaycastHit_t1056001966 *)(&V_0), (100.0f), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		Vector3_t3722313464  L_9 = RaycastHit_get_point_m2236647085((RaycastHit_t1056001966 *)(&V_0), /*hidden argument*/NULL);
		__this->set_Lookatpoint_1(L_9);
		__this->set_m_Refocus_4((bool)1);
		return;
	}

IL_0051:
	{
		__this->set_m_Refocus_4((bool)0);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.CameraRefocus::SetFocusPoint()
extern "C" IL2CPP_METHOD_ATTR void CameraRefocus_SetFocusPoint_m2276275782 (CameraRefocus_t4263235746 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_Refocus_4();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Camera_t4157153871 * L_1 = __this->get_Camera_0();
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(L_1, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = __this->get_Lookatpoint_1();
		Transform_LookAt_m3649447396(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0021:
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
// System.Void UnityStandardAssets.Utility.CurveControlledBob::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CurveControlledBob__ctor_m3636495103 (CurveControlledBob_t2679313829 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CurveControlledBob__ctor_m3636495103_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_HorizontalBobRange_0((0.33f));
		__this->set_VerticalBobRange_1((0.33f));
		KeyframeU5BU5D_t1068524471* L_0 = (KeyframeU5BU5D_t1068524471*)SZArrayNew(KeyframeU5BU5D_t1068524471_il2cpp_TypeInfo_var, (uint32_t)5);
		KeyframeU5BU5D_t1068524471* L_1 = L_0;
		Keyframe_t4206410242  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Keyframe__ctor_m391431887((&L_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		*(Keyframe_t4206410242 *)((L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))) = L_2;
		KeyframeU5BU5D_t1068524471* L_3 = L_1;
		Keyframe_t4206410242  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Keyframe__ctor_m391431887((&L_4), (0.5f), (1.0f), /*hidden argument*/NULL);
		*(Keyframe_t4206410242 *)((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1))) = L_4;
		KeyframeU5BU5D_t1068524471* L_5 = L_3;
		Keyframe_t4206410242  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Keyframe__ctor_m391431887((&L_6), (1.0f), (0.0f), /*hidden argument*/NULL);
		*(Keyframe_t4206410242 *)((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2))) = L_6;
		KeyframeU5BU5D_t1068524471* L_7 = L_5;
		Keyframe_t4206410242  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Keyframe__ctor_m391431887((&L_8), (1.5f), (-1.0f), /*hidden argument*/NULL);
		*(Keyframe_t4206410242 *)((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(3))) = L_8;
		KeyframeU5BU5D_t1068524471* L_9 = L_7;
		Keyframe_t4206410242  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Keyframe__ctor_m391431887((&L_10), (2.0f), (0.0f), /*hidden argument*/NULL);
		*(Keyframe_t4206410242 *)((L_9)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(4))) = L_10;
		AnimationCurve_t3046754366 * L_11 = (AnimationCurve_t3046754366 *)il2cpp_codegen_object_new(AnimationCurve_t3046754366_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m1565662948(L_11, L_9, /*hidden argument*/NULL);
		__this->set_Bobcurve_2(L_11);
		__this->set_VerticaltoHorizontalRatio_3((1.0f));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.CurveControlledBob::Setup(UnityEngine.Camera,System.Single)
extern "C" IL2CPP_METHOD_ATTR void CurveControlledBob_Setup_m2390664037 (CurveControlledBob_t2679313829 * __this, Camera_t4157153871 * ___camera0, float ___bobBaseInterval1, const RuntimeMethod* method)
{
	Keyframe_t4206410242  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = ___bobBaseInterval1;
		__this->set_m_BobBaseInterval_6(L_0);
		Camera_t4157153871 * L_1 = ___camera0;
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(L_1, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Transform_get_localPosition_m4234289348(L_2, /*hidden argument*/NULL);
		__this->set_m_OriginalCameraPosition_7(L_3);
		AnimationCurve_t3046754366 * L_4 = __this->get_Bobcurve_2();
		AnimationCurve_t3046754366 * L_5 = __this->get_Bobcurve_2();
		int32_t L_6 = AnimationCurve_get_length_m1548433259(L_5, /*hidden argument*/NULL);
		Keyframe_t4206410242  L_7 = AnimationCurve_get_Item_m4209227769(L_4, ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_7;
		float L_8 = Keyframe_get_time_m803196188((Keyframe_t4206410242 *)(&V_0), /*hidden argument*/NULL);
		__this->set_m_Time_8(L_8);
		return;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.Utility.CurveControlledBob::DoHeadBob(System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  CurveControlledBob_DoHeadBob_m3330807895 (CurveControlledBob_t2679313829 * __this, float ___speed0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Vector3_t3722313464 * L_0 = __this->get_address_of_m_OriginalCameraPosition_7();
		float L_1 = L_0->get_x_2();
		AnimationCurve_t3046754366 * L_2 = __this->get_Bobcurve_2();
		float L_3 = __this->get_m_CyclePositionX_4();
		float L_4 = AnimationCurve_Evaluate_m2125563588(L_2, L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_HorizontalBobRange_0();
		V_0 = ((float)il2cpp_codegen_add((float)L_1, (float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5))));
		Vector3_t3722313464 * L_6 = __this->get_address_of_m_OriginalCameraPosition_7();
		float L_7 = L_6->get_y_3();
		AnimationCurve_t3046754366 * L_8 = __this->get_Bobcurve_2();
		float L_9 = __this->get_m_CyclePositionY_5();
		float L_10 = AnimationCurve_Evaluate_m2125563588(L_8, L_9, /*hidden argument*/NULL);
		float L_11 = __this->get_VerticalBobRange_1();
		V_1 = ((float)il2cpp_codegen_add((float)L_7, (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11))));
		float L_12 = __this->get_m_CyclePositionX_4();
		float L_13 = ___speed0;
		float L_14 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_15 = __this->get_m_BobBaseInterval_6();
		__this->set_m_CyclePositionX_4(((float)il2cpp_codegen_add((float)L_12, (float)((float)((float)((float)il2cpp_codegen_multiply((float)L_13, (float)L_14))/(float)L_15)))));
		float L_16 = __this->get_m_CyclePositionY_5();
		float L_17 = ___speed0;
		float L_18 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_19 = __this->get_m_BobBaseInterval_6();
		float L_20 = __this->get_VerticaltoHorizontalRatio_3();
		__this->set_m_CyclePositionY_5(((float)il2cpp_codegen_add((float)L_16, (float)((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_multiply((float)L_17, (float)L_18))/(float)L_19)), (float)L_20)))));
		float L_21 = __this->get_m_CyclePositionX_4();
		float L_22 = __this->get_m_Time_8();
		if ((!(((float)L_21) > ((float)L_22))))
		{
			goto IL_00ab;
		}
	}
	{
		float L_23 = __this->get_m_CyclePositionX_4();
		float L_24 = __this->get_m_Time_8();
		__this->set_m_CyclePositionX_4(((float)il2cpp_codegen_subtract((float)L_23, (float)L_24)));
	}

IL_00ab:
	{
		float L_25 = __this->get_m_CyclePositionY_5();
		float L_26 = __this->get_m_Time_8();
		if ((!(((float)L_25) > ((float)L_26))))
		{
			goto IL_00cf;
		}
	}
	{
		float L_27 = __this->get_m_CyclePositionY_5();
		float L_28 = __this->get_m_Time_8();
		__this->set_m_CyclePositionY_5(((float)il2cpp_codegen_subtract((float)L_27, (float)L_28)));
	}

IL_00cf:
	{
		float L_29 = V_0;
		float L_30 = V_1;
		Vector3_t3722313464  L_31;
		memset(&L_31, 0, sizeof(L_31));
		Vector3__ctor_m3353183577((&L_31), L_29, L_30, (0.0f), /*hidden argument*/NULL);
		return L_31;
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
// System.Void UnityStandardAssets.Utility.DragRigidbody::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DragRigidbody__ctor_m4010289046 (DragRigidbody_t1600652016 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.DragRigidbody::Update()
extern "C" IL2CPP_METHOD_ATTR void DragRigidbody_Update_m1871936335 (DragRigidbody_t1600652016 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DragRigidbody_Update_m1871936335_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Camera_t4157153871 * V_0 = NULL;
	RaycastHit_t1056001966  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Ray_t3785851493  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Ray_t3785851493  V_3;
	memset(&V_3, 0, sizeof(V_3));
	GameObject_t1113636619 * V_4 = NULL;
	Rigidbody_t3916780224 * V_5 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m2081676745(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		Camera_t4157153871 * L_1 = DragRigidbody_FindCamera_m148666113(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		il2cpp_codegen_initobj((&V_1), sizeof(RaycastHit_t1056001966 ));
		Camera_t4157153871 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		Ray_t3785851493  L_4 = Camera_ScreenPointToRay_m3764635188(L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		Vector3_t3722313464  L_5 = Ray_get_origin_m2819290985((Ray_t3785851493 *)(&V_2), /*hidden argument*/NULL);
		Camera_t4157153871 * L_6 = V_0;
		Vector3_t3722313464  L_7 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		Ray_t3785851493  L_8 = Camera_ScreenPointToRay_m3764635188(L_6, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		Vector3_t3722313464  L_9 = Ray_get_direction_m761601601((Ray_t3785851493 *)(&V_3), /*hidden argument*/NULL);
		bool L_10 = Physics_Raycast_m4145022031(NULL /*static, unused*/, L_5, L_9, (RaycastHit_t1056001966 *)(&V_1), (100.0f), ((int32_t)-5), /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0055;
		}
	}
	{
		return;
	}

IL_0055:
	{
		Rigidbody_t3916780224 * L_11 = RaycastHit_get_rigidbody_m2320267866((RaycastHit_t1056001966 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0077;
		}
	}
	{
		Rigidbody_t3916780224 * L_13 = RaycastHit_get_rigidbody_m2320267866((RaycastHit_t1056001966 *)(&V_1), /*hidden argument*/NULL);
		bool L_14 = Rigidbody_get_isKinematic_m403342600(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0078;
		}
	}

IL_0077:
	{
		return;
	}

IL_0078:
	{
		SpringJoint_t1912369980 * L_15 = __this->get_m_SpringJoint_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_00b2;
		}
	}
	{
		GameObject_t1113636619 * L_17 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_17, _stringLiteral3076344093, /*hidden argument*/NULL);
		V_4 = L_17;
		GameObject_t1113636619 * L_18 = V_4;
		Rigidbody_t3916780224 * L_19 = GameObject_AddComponent_TisRigidbody_t3916780224_m3538654758(L_18, /*hidden argument*/GameObject_AddComponent_TisRigidbody_t3916780224_m3538654758_RuntimeMethod_var);
		V_5 = L_19;
		GameObject_t1113636619 * L_20 = V_4;
		SpringJoint_t1912369980 * L_21 = GameObject_AddComponent_TisSpringJoint_t1912369980_m3688791583(L_20, /*hidden argument*/GameObject_AddComponent_TisSpringJoint_t1912369980_m3688791583_RuntimeMethod_var);
		__this->set_m_SpringJoint_10(L_21);
		Rigidbody_t3916780224 * L_22 = V_5;
		Rigidbody_set_isKinematic_m1802205683(L_22, (bool)1, /*hidden argument*/NULL);
	}

IL_00b2:
	{
		SpringJoint_t1912369980 * L_23 = __this->get_m_SpringJoint_10();
		Transform_t3600365921 * L_24 = Component_get_transform_m3162698980(L_23, /*hidden argument*/NULL);
		Vector3_t3722313464  L_25 = RaycastHit_get_point_m2236647085((RaycastHit_t1056001966 *)(&V_1), /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_24, L_25, /*hidden argument*/NULL);
		SpringJoint_t1912369980 * L_26 = __this->get_m_SpringJoint_10();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_27 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		Joint_set_anchor_m3102426751(L_26, L_27, /*hidden argument*/NULL);
		SpringJoint_t1912369980 * L_28 = __this->get_m_SpringJoint_10();
		SpringJoint_set_spring_m3317999832(L_28, (50.0f), /*hidden argument*/NULL);
		SpringJoint_t1912369980 * L_29 = __this->get_m_SpringJoint_10();
		SpringJoint_set_damper_m2395439607(L_29, (5.0f), /*hidden argument*/NULL);
		SpringJoint_t1912369980 * L_30 = __this->get_m_SpringJoint_10();
		SpringJoint_set_maxDistance_m3312008700(L_30, (0.2f), /*hidden argument*/NULL);
		SpringJoint_t1912369980 * L_31 = __this->get_m_SpringJoint_10();
		Rigidbody_t3916780224 * L_32 = RaycastHit_get_rigidbody_m2320267866((RaycastHit_t1056001966 *)(&V_1), /*hidden argument*/NULL);
		Joint_set_connectedBody_m3457616993(L_31, L_32, /*hidden argument*/NULL);
		float L_33 = RaycastHit_get_distance_m3727327466((RaycastHit_t1056001966 *)(&V_1), /*hidden argument*/NULL);
		float L_34 = L_33;
		RuntimeObject * L_35 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_34);
		MonoBehaviour_StartCoroutine_m1654577315(__this, _stringLiteral2374246869, L_35, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.DragRigidbody::DragObject(System.Single)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* DragRigidbody_DragObject_m3291736428 (DragRigidbody_t1600652016 * __this, float ___distance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DragRigidbody_DragObject_m3291736428_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CDragObjectU3Ec__Iterator0_t4151609119 * V_0 = NULL;
	{
		U3CDragObjectU3Ec__Iterator0_t4151609119 * L_0 = (U3CDragObjectU3Ec__Iterator0_t4151609119 *)il2cpp_codegen_object_new(U3CDragObjectU3Ec__Iterator0_t4151609119_il2cpp_TypeInfo_var);
		U3CDragObjectU3Ec__Iterator0__ctor_m2961442063(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDragObjectU3Ec__Iterator0_t4151609119 * L_1 = V_0;
		float L_2 = ___distance0;
		L_1->set_distance_4(L_2);
		U3CDragObjectU3Ec__Iterator0_t4151609119 * L_3 = V_0;
		L_3->set_U24this_5(__this);
		U3CDragObjectU3Ec__Iterator0_t4151609119 * L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Camera UnityStandardAssets.Utility.DragRigidbody::FindCamera()
extern "C" IL2CPP_METHOD_ATTR Camera_t4157153871 * DragRigidbody_FindCamera_m148666113 (DragRigidbody_t1600652016 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DragRigidbody_FindCamera_m148666113_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_t4157153871 * L_0 = Component_GetComponent_TisCamera_t4157153871_m1557787507(__this, /*hidden argument*/Component_GetComponent_TisCamera_t4157153871_m1557787507_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		Camera_t4157153871 * L_2 = Component_GetComponent_TisCamera_t4157153871_m1557787507(__this, /*hidden argument*/Component_GetComponent_TisCamera_t4157153871_m1557787507_RuntimeMethod_var);
		return L_2;
	}

IL_0017:
	{
		Camera_t4157153871 * L_3 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CDragObjectU3Ec__Iterator0__ctor_m2961442063 (U3CDragObjectU3Ec__Iterator0_t4151609119 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CDragObjectU3Ec__Iterator0_MoveNext_m825755750 (U3CDragObjectU3Ec__Iterator0_t4151609119 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDragObjectU3Ec__Iterator0_MoveNext_m825755750_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_8();
		V_0 = L_0;
		__this->set_U24PC_8((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00f8;
			}
		}
	}
	{
		goto IL_016b;
	}

IL_0021:
	{
		DragRigidbody_t1600652016 * L_2 = __this->get_U24this_5();
		SpringJoint_t1912369980 * L_3 = L_2->get_m_SpringJoint_10();
		Rigidbody_t3916780224 * L_4 = Joint_get_connectedBody_m826805471(L_3, /*hidden argument*/NULL);
		float L_5 = Rigidbody_get_drag_m3991710090(L_4, /*hidden argument*/NULL);
		__this->set_U3ColdDragU3E__0_0(L_5);
		DragRigidbody_t1600652016 * L_6 = __this->get_U24this_5();
		SpringJoint_t1912369980 * L_7 = L_6->get_m_SpringJoint_10();
		Rigidbody_t3916780224 * L_8 = Joint_get_connectedBody_m826805471(L_7, /*hidden argument*/NULL);
		float L_9 = Rigidbody_get_angularDrag_m1943636787(L_8, /*hidden argument*/NULL);
		__this->set_U3ColdAngularDragU3E__0_1(L_9);
		DragRigidbody_t1600652016 * L_10 = __this->get_U24this_5();
		SpringJoint_t1912369980 * L_11 = L_10->get_m_SpringJoint_10();
		Rigidbody_t3916780224 * L_12 = Joint_get_connectedBody_m826805471(L_11, /*hidden argument*/NULL);
		Rigidbody_set_drag_m2933262323(L_12, (10.0f), /*hidden argument*/NULL);
		DragRigidbody_t1600652016 * L_13 = __this->get_U24this_5();
		SpringJoint_t1912369980 * L_14 = L_13->get_m_SpringJoint_10();
		Rigidbody_t3916780224 * L_15 = Joint_get_connectedBody_m826805471(L_14, /*hidden argument*/NULL);
		Rigidbody_set_angularDrag_m3497419500(L_15, (5.0f), /*hidden argument*/NULL);
		DragRigidbody_t1600652016 * L_16 = __this->get_U24this_5();
		Camera_t4157153871 * L_17 = DragRigidbody_FindCamera_m148666113(L_16, /*hidden argument*/NULL);
		__this->set_U3CmainCameraU3E__0_2(L_17);
		goto IL_00f8;
	}

IL_00a1:
	{
		Camera_t4157153871 * L_18 = __this->get_U3CmainCameraU3E__0_2();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_19 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		Ray_t3785851493  L_20 = Camera_ScreenPointToRay_m3764635188(L_18, L_19, /*hidden argument*/NULL);
		__this->set_U3CrayU3E__1_3(L_20);
		DragRigidbody_t1600652016 * L_21 = __this->get_U24this_5();
		SpringJoint_t1912369980 * L_22 = L_21->get_m_SpringJoint_10();
		Transform_t3600365921 * L_23 = Component_get_transform_m3162698980(L_22, /*hidden argument*/NULL);
		Ray_t3785851493 * L_24 = __this->get_address_of_U3CrayU3E__1_3();
		float L_25 = __this->get_distance_4();
		Vector3_t3722313464  L_26 = Ray_GetPoint_m1852405345((Ray_t3785851493 *)L_24, L_25, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_23, L_26, /*hidden argument*/NULL);
		__this->set_U24current_6(NULL);
		bool L_27 = __this->get_U24disposing_7();
		if (L_27)
		{
			goto IL_00f3;
		}
	}
	{
		__this->set_U24PC_8(1);
	}

IL_00f3:
	{
		goto IL_016d;
	}

IL_00f8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_28 = Input_GetMouseButton_m513753021(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_00a1;
		}
	}
	{
		DragRigidbody_t1600652016 * L_29 = __this->get_U24this_5();
		SpringJoint_t1912369980 * L_30 = L_29->get_m_SpringJoint_10();
		Rigidbody_t3916780224 * L_31 = Joint_get_connectedBody_m826805471(L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_32 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_0164;
		}
	}
	{
		DragRigidbody_t1600652016 * L_33 = __this->get_U24this_5();
		SpringJoint_t1912369980 * L_34 = L_33->get_m_SpringJoint_10();
		Rigidbody_t3916780224 * L_35 = Joint_get_connectedBody_m826805471(L_34, /*hidden argument*/NULL);
		float L_36 = __this->get_U3ColdDragU3E__0_0();
		Rigidbody_set_drag_m2933262323(L_35, L_36, /*hidden argument*/NULL);
		DragRigidbody_t1600652016 * L_37 = __this->get_U24this_5();
		SpringJoint_t1912369980 * L_38 = L_37->get_m_SpringJoint_10();
		Rigidbody_t3916780224 * L_39 = Joint_get_connectedBody_m826805471(L_38, /*hidden argument*/NULL);
		float L_40 = __this->get_U3ColdAngularDragU3E__0_1();
		Rigidbody_set_angularDrag_m3497419500(L_39, L_40, /*hidden argument*/NULL);
		DragRigidbody_t1600652016 * L_41 = __this->get_U24this_5();
		SpringJoint_t1912369980 * L_42 = L_41->get_m_SpringJoint_10();
		Joint_set_connectedBody_m3457616993(L_42, (Rigidbody_t3916780224 *)NULL, /*hidden argument*/NULL);
	}

IL_0164:
	{
		__this->set_U24PC_8((-1));
	}

IL_016b:
	{
		return (bool)0;
	}

IL_016d:
	{
		return (bool)1;
	}
}
// System.Object UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CDragObjectU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2738914041 (U3CDragObjectU3Ec__Iterator0_t4151609119 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_6();
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CDragObjectU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1420573842 (U3CDragObjectU3Ec__Iterator0_t4151609119 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_6();
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CDragObjectU3Ec__Iterator0_Dispose_m2327255446 (U3CDragObjectU3Ec__Iterator0_t4151609119 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_7((bool)1);
		__this->set_U24PC_8((-1));
		return;
	}
}
// System.Void UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CDragObjectU3Ec__Iterator0_Reset_m2748003906 (U3CDragObjectU3Ec__Iterator0_t4151609119 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDragObjectU3Ec__Iterator0_Reset_m2748003906_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CDragObjectU3Ec__Iterator0_Reset_m2748003906_RuntimeMethod_var);
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
// System.Void UnityStandardAssets.Utility.DynamicShadowSettings::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DynamicShadowSettings__ctor_m3785881620 (DynamicShadowSettings_t59119858 * __this, const RuntimeMethod* method)
{
	{
		__this->set_minHeight_5((10.0f));
		__this->set_minShadowDistance_6((80.0f));
		__this->set_minShadowBias_7((1.0f));
		__this->set_maxHeight_8((1000.0f));
		__this->set_maxShadowDistance_9((10000.0f));
		__this->set_maxShadowBias_10((0.1f));
		__this->set_adaptTime_11((1.0f));
		__this->set_m_OriginalStrength_14((1.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.DynamicShadowSettings::Start()
extern "C" IL2CPP_METHOD_ATTR void DynamicShadowSettings_Start_m2086057754 (DynamicShadowSettings_t59119858 * __this, const RuntimeMethod* method)
{
	{
		Light_t3756812086 * L_0 = __this->get_sunLight_4();
		float L_1 = Light_get_shadowStrength_m3202554781(L_0, /*hidden argument*/NULL);
		__this->set_m_OriginalStrength_14(L_1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.DynamicShadowSettings::Update()
extern "C" IL2CPP_METHOD_ATTR void DynamicShadowSettings_Update_m382736418 (DynamicShadowSettings_t59119858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DynamicShadowSettings_Update_m382736418_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Ray_t3785851493  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RaycastHit_t1056001966  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	float V_4 = 0.0f;
	{
		Camera_t4157153871 * L_0 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(L_0, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = Vector3_op_UnaryNegation_m1951478815(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		Ray__ctor_m168149494((Ray_t3785851493 *)(&V_0), L_2, L_4, /*hidden argument*/NULL);
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		float L_7 = (&V_3)->get_y_3();
		V_2 = L_7;
		Ray_t3785851493  L_8 = V_0;
		bool L_9 = Physics_Raycast_m447436869(NULL /*static, unused*/, L_8, (RaycastHit_t1056001966 *)(&V_1), /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0049;
		}
	}
	{
		float L_10 = RaycastHit_get_distance_m3727327466((RaycastHit_t1056001966 *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_10;
	}

IL_0049:
	{
		float L_11 = V_2;
		float L_12 = __this->get_m_SmoothHeight_12();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_13 = fabsf(((float)il2cpp_codegen_subtract((float)L_11, (float)L_12)));
		if ((!(((float)L_13) > ((float)(1.0f)))))
		{
			goto IL_007e;
		}
	}
	{
		float L_14 = __this->get_m_SmoothHeight_12();
		float L_15 = V_2;
		float* L_16 = __this->get_address_of_m_ChangeSpeed_13();
		float L_17 = __this->get_adaptTime_11();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_18 = Mathf_SmoothDamp_m3171073017(NULL /*static, unused*/, L_14, L_15, (float*)L_16, L_17, /*hidden argument*/NULL);
		__this->set_m_SmoothHeight_12(L_18);
	}

IL_007e:
	{
		float L_19 = __this->get_minHeight_5();
		float L_20 = __this->get_maxHeight_8();
		float L_21 = __this->get_m_SmoothHeight_12();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_22 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, L_19, L_20, L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		float L_23 = __this->get_minShadowDistance_6();
		float L_24 = __this->get_maxShadowDistance_9();
		float L_25 = V_4;
		float L_26 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_23, L_24, L_25, /*hidden argument*/NULL);
		QualitySettings_set_shadowDistance_m3878605578(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		Light_t3756812086 * L_27 = __this->get_sunLight_4();
		float L_28 = __this->get_minShadowBias_7();
		float L_29 = __this->get_maxShadowBias_10();
		float L_30 = V_4;
		float L_31 = V_4;
		float L_32 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_28, L_29, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_30)), (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_31)))))), /*hidden argument*/NULL);
		Light_set_shadowBias_m689078510(L_27, L_32, /*hidden argument*/NULL);
		Light_t3756812086 * L_33 = __this->get_sunLight_4();
		float L_34 = __this->get_m_OriginalStrength_14();
		float L_35 = V_4;
		float L_36 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_34, (0.0f), L_35, /*hidden argument*/NULL);
		Light_set_shadowStrength_m881750843(L_33, L_36, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.Utility.FOVKick::.ctor()
extern "C" IL2CPP_METHOD_ATTR void FOVKick__ctor_m1039456836 (FOVKick_t120370150 * __this, const RuntimeMethod* method)
{
	{
		__this->set_FOVIncrease_2((3.0f));
		__this->set_TimeToIncrease_3((1.0f));
		__this->set_TimeToDecrease_4((1.0f));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick::Setup(UnityEngine.Camera)
extern "C" IL2CPP_METHOD_ATTR void FOVKick_Setup_m3224918714 (FOVKick_t120370150 * __this, Camera_t4157153871 * ___camera0, const RuntimeMethod* method)
{
	{
		Camera_t4157153871 * L_0 = ___camera0;
		FOVKick_CheckStatus_m1684880090(__this, L_0, /*hidden argument*/NULL);
		Camera_t4157153871 * L_1 = ___camera0;
		__this->set_Camera_0(L_1);
		Camera_t4157153871 * L_2 = ___camera0;
		float L_3 = Camera_get_fieldOfView_m1018585504(L_2, /*hidden argument*/NULL);
		__this->set_originalFov_1(L_3);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick::CheckStatus(UnityEngine.Camera)
extern "C" IL2CPP_METHOD_ATTR void FOVKick_CheckStatus_m1684880090 (FOVKick_t120370150 * __this, Camera_t4157153871 * ___camera0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FOVKick_CheckStatus_m1684880090_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_t4157153871 * L_0 = ___camera0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_2, _stringLiteral2140779047, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, FOVKick_CheckStatus_m1684880090_RuntimeMethod_var);
	}

IL_0017:
	{
		AnimationCurve_t3046754366 * L_3 = __this->get_IncreaseCurve_5();
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		Exception_t * L_4 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_4, _stringLiteral3483455937, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, FOVKick_CheckStatus_m1684880090_RuntimeMethod_var);
	}

IL_002d:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick::ChangeCamera(UnityEngine.Camera)
extern "C" IL2CPP_METHOD_ATTR void FOVKick_ChangeCamera_m3165714309 (FOVKick_t120370150 * __this, Camera_t4157153871 * ___camera0, const RuntimeMethod* method)
{
	{
		Camera_t4157153871 * L_0 = ___camera0;
		__this->set_Camera_0(L_0);
		return;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.FOVKick::FOVKickUp()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* FOVKick_FOVKickUp_m3024089749 (FOVKick_t120370150 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FOVKick_FOVKickUp_m3024089749_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CFOVKickUpU3Ec__Iterator0_t3738408313 * V_0 = NULL;
	{
		U3CFOVKickUpU3Ec__Iterator0_t3738408313 * L_0 = (U3CFOVKickUpU3Ec__Iterator0_t3738408313 *)il2cpp_codegen_object_new(U3CFOVKickUpU3Ec__Iterator0_t3738408313_il2cpp_TypeInfo_var);
		U3CFOVKickUpU3Ec__Iterator0__ctor_m3315578780(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFOVKickUpU3Ec__Iterator0_t3738408313 * L_1 = V_0;
		L_1->set_U24this_1(__this);
		U3CFOVKickUpU3Ec__Iterator0_t3738408313 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.FOVKick::FOVKickDown()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* FOVKick_FOVKickDown_m1264536566 (FOVKick_t120370150 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FOVKick_FOVKickDown_m1264536566_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CFOVKickDownU3Ec__Iterator1_t1440840980 * V_0 = NULL;
	{
		U3CFOVKickDownU3Ec__Iterator1_t1440840980 * L_0 = (U3CFOVKickDownU3Ec__Iterator1_t1440840980 *)il2cpp_codegen_object_new(U3CFOVKickDownU3Ec__Iterator1_t1440840980_il2cpp_TypeInfo_var);
		U3CFOVKickDownU3Ec__Iterator1__ctor_m146117331(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFOVKickDownU3Ec__Iterator1_t1440840980 * L_1 = V_0;
		L_1->set_U24this_1(__this);
		U3CFOVKickDownU3Ec__Iterator1_t1440840980 * L_2 = V_0;
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
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CFOVKickDownU3Ec__Iterator1__ctor_m146117331 (U3CFOVKickDownU3Ec__Iterator1_t1440840980 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator1::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CFOVKickDownU3Ec__Iterator1_MoveNext_m1069908683 (U3CFOVKickDownU3Ec__Iterator1_t1440840980 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFOVKickDownU3Ec__Iterator1_MoveNext_m1069908683_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00d4;
			}
		}
	}
	{
		goto IL_0106;
	}

IL_0021:
	{
		FOVKick_t120370150 * L_2 = __this->get_U24this_1();
		Camera_t4157153871 * L_3 = L_2->get_Camera_0();
		float L_4 = Camera_get_fieldOfView_m1018585504(L_3, /*hidden argument*/NULL);
		FOVKick_t120370150 * L_5 = __this->get_U24this_1();
		float L_6 = L_5->get_originalFov_1();
		FOVKick_t120370150 * L_7 = __this->get_U24this_1();
		float L_8 = L_7->get_FOVIncrease_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_9 = fabsf(((float)((float)((float)il2cpp_codegen_subtract((float)L_4, (float)L_6))/(float)L_8)));
		__this->set_U3CtU3E__0_0(L_9);
		goto IL_00d4;
	}

IL_0059:
	{
		FOVKick_t120370150 * L_10 = __this->get_U24this_1();
		Camera_t4157153871 * L_11 = L_10->get_Camera_0();
		FOVKick_t120370150 * L_12 = __this->get_U24this_1();
		float L_13 = L_12->get_originalFov_1();
		FOVKick_t120370150 * L_14 = __this->get_U24this_1();
		AnimationCurve_t3046754366 * L_15 = L_14->get_IncreaseCurve_5();
		float L_16 = __this->get_U3CtU3E__0_0();
		FOVKick_t120370150 * L_17 = __this->get_U24this_1();
		float L_18 = L_17->get_TimeToDecrease_4();
		float L_19 = AnimationCurve_Evaluate_m2125563588(L_15, ((float)((float)L_16/(float)L_18)), /*hidden argument*/NULL);
		FOVKick_t120370150 * L_20 = __this->get_U24this_1();
		float L_21 = L_20->get_FOVIncrease_2();
		Camera_set_fieldOfView_m1438246590(L_11, ((float)il2cpp_codegen_add((float)L_13, (float)((float)il2cpp_codegen_multiply((float)L_19, (float)L_21)))), /*hidden argument*/NULL);
		float L_22 = __this->get_U3CtU3E__0_0();
		float L_23 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_U3CtU3E__0_0(((float)il2cpp_codegen_subtract((float)L_22, (float)L_23)));
		WaitForEndOfFrame_t1314943911 * L_24 = (WaitForEndOfFrame_t1314943911 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m1381314187(L_24, /*hidden argument*/NULL);
		__this->set_U24current_2(L_24);
		bool L_25 = __this->get_U24disposing_3();
		if (L_25)
		{
			goto IL_00cf;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_00cf:
	{
		goto IL_0108;
	}

IL_00d4:
	{
		float L_26 = __this->get_U3CtU3E__0_0();
		if ((((float)L_26) > ((float)(0.0f))))
		{
			goto IL_0059;
		}
	}
	{
		FOVKick_t120370150 * L_27 = __this->get_U24this_1();
		Camera_t4157153871 * L_28 = L_27->get_Camera_0();
		FOVKick_t120370150 * L_29 = __this->get_U24this_1();
		float L_30 = L_29->get_originalFov_1();
		Camera_set_fieldOfView_m1438246590(L_28, L_30, /*hidden argument*/NULL);
		__this->set_U24PC_4((-1));
	}

IL_0106:
	{
		return (bool)0;
	}

IL_0108:
	{
		return (bool)1;
	}
}
// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CFOVKickDownU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1167065118 (U3CFOVKickDownU3Ec__Iterator1_t1440840980 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CFOVKickDownU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m1177957662 (U3CFOVKickDownU3Ec__Iterator1_t1440840980 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator1::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CFOVKickDownU3Ec__Iterator1_Dispose_m1908039222 (U3CFOVKickDownU3Ec__Iterator1_t1440840980 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator1::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CFOVKickDownU3Ec__Iterator1_Reset_m3592463043 (U3CFOVKickDownU3Ec__Iterator1_t1440840980 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFOVKickDownU3Ec__Iterator1_Reset_m3592463043_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CFOVKickDownU3Ec__Iterator1_Reset_m3592463043_RuntimeMethod_var);
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
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CFOVKickUpU3Ec__Iterator0__ctor_m3315578780 (U3CFOVKickUpU3Ec__Iterator0_t3738408313 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CFOVKickUpU3Ec__Iterator0_MoveNext_m3370649433 (U3CFOVKickUpU3Ec__Iterator0_t3738408313 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFOVKickUpU3Ec__Iterator0_MoveNext_m3370649433_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00d4;
			}
		}
	}
	{
		goto IL_00f1;
	}

IL_0021:
	{
		FOVKick_t120370150 * L_2 = __this->get_U24this_1();
		Camera_t4157153871 * L_3 = L_2->get_Camera_0();
		float L_4 = Camera_get_fieldOfView_m1018585504(L_3, /*hidden argument*/NULL);
		FOVKick_t120370150 * L_5 = __this->get_U24this_1();
		float L_6 = L_5->get_originalFov_1();
		FOVKick_t120370150 * L_7 = __this->get_U24this_1();
		float L_8 = L_7->get_FOVIncrease_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_9 = fabsf(((float)((float)((float)il2cpp_codegen_subtract((float)L_4, (float)L_6))/(float)L_8)));
		__this->set_U3CtU3E__0_0(L_9);
		goto IL_00d4;
	}

IL_0059:
	{
		FOVKick_t120370150 * L_10 = __this->get_U24this_1();
		Camera_t4157153871 * L_11 = L_10->get_Camera_0();
		FOVKick_t120370150 * L_12 = __this->get_U24this_1();
		float L_13 = L_12->get_originalFov_1();
		FOVKick_t120370150 * L_14 = __this->get_U24this_1();
		AnimationCurve_t3046754366 * L_15 = L_14->get_IncreaseCurve_5();
		float L_16 = __this->get_U3CtU3E__0_0();
		FOVKick_t120370150 * L_17 = __this->get_U24this_1();
		float L_18 = L_17->get_TimeToIncrease_3();
		float L_19 = AnimationCurve_Evaluate_m2125563588(L_15, ((float)((float)L_16/(float)L_18)), /*hidden argument*/NULL);
		FOVKick_t120370150 * L_20 = __this->get_U24this_1();
		float L_21 = L_20->get_FOVIncrease_2();
		Camera_set_fieldOfView_m1438246590(L_11, ((float)il2cpp_codegen_add((float)L_13, (float)((float)il2cpp_codegen_multiply((float)L_19, (float)L_21)))), /*hidden argument*/NULL);
		float L_22 = __this->get_U3CtU3E__0_0();
		float L_23 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_U3CtU3E__0_0(((float)il2cpp_codegen_add((float)L_22, (float)L_23)));
		WaitForEndOfFrame_t1314943911 * L_24 = (WaitForEndOfFrame_t1314943911 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m1381314187(L_24, /*hidden argument*/NULL);
		__this->set_U24current_2(L_24);
		bool L_25 = __this->get_U24disposing_3();
		if (L_25)
		{
			goto IL_00cf;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_00cf:
	{
		goto IL_00f3;
	}

IL_00d4:
	{
		float L_26 = __this->get_U3CtU3E__0_0();
		FOVKick_t120370150 * L_27 = __this->get_U24this_1();
		float L_28 = L_27->get_TimeToIncrease_3();
		if ((((float)L_26) < ((float)L_28)))
		{
			goto IL_0059;
		}
	}
	{
		__this->set_U24PC_4((-1));
	}

IL_00f1:
	{
		return (bool)0;
	}

IL_00f3:
	{
		return (bool)1;
	}
}
// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CFOVKickUpU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m697673488 (U3CFOVKickUpU3Ec__Iterator0_t3738408313 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CFOVKickUpU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m869699199 (U3CFOVKickUpU3Ec__Iterator0_t3738408313 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CFOVKickUpU3Ec__Iterator0_Dispose_m1777576063 (U3CFOVKickUpU3Ec__Iterator0_t3738408313 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CFOVKickUpU3Ec__Iterator0_Reset_m1175024232 (U3CFOVKickUpU3Ec__Iterator0_t3738408313 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFOVKickUpU3Ec__Iterator0_Reset_m1175024232_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CFOVKickUpU3Ec__Iterator0_Reset_m1175024232_RuntimeMethod_var);
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
// System.Void UnityStandardAssets.Utility.FPSCounter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void FPSCounter__ctor_m2918769015 (FPSCounter_t2351221284 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FPSCounter::Start()
extern "C" IL2CPP_METHOD_ATTR void FPSCounter_Start_m2838910111 (FPSCounter_t2351221284 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FPSCounter_Start_m2838910111_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = Time_get_realtimeSinceStartup_m3141794964(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_FpsNextPeriod_6(((float)il2cpp_codegen_add((float)L_0, (float)(0.5f))));
		Text_t1901882714 * L_1 = Component_GetComponent_TisText_t1901882714_m1618486294(__this, /*hidden argument*/Component_GetComponent_TisText_t1901882714_m1618486294_RuntimeMethod_var);
		__this->set_m_Text_9(L_1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FPSCounter::Update()
extern "C" IL2CPP_METHOD_ATTR void FPSCounter_Update_m2497525555 (FPSCounter_t2351221284 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FPSCounter_Update_m2497525555_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_m_FpsAccumulator_5();
		__this->set_m_FpsAccumulator_5(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		float L_1 = Time_get_realtimeSinceStartup_m3141794964(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = __this->get_m_FpsNextPeriod_6();
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_3 = __this->get_m_FpsAccumulator_5();
		__this->set_m_CurrentFps_7((((int32_t)((int32_t)((float)((float)(((float)((float)L_3)))/(float)(0.5f)))))));
		__this->set_m_FpsAccumulator_5(0);
		float L_4 = __this->get_m_FpsNextPeriod_6();
		__this->set_m_FpsNextPeriod_6(((float)il2cpp_codegen_add((float)L_4, (float)(0.5f))));
		Text_t1901882714 * L_5 = __this->get_m_Text_9();
		int32_t L_6 = __this->get_m_CurrentFps_7();
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3326640515, L_8, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_9);
	}

IL_006b:
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
// System.Void UnityStandardAssets.Utility.FollowTarget::.ctor()
extern "C" IL2CPP_METHOD_ATTR void FollowTarget__ctor_m4259600915 (FollowTarget_t166153614 * __this, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector3__ctor_m3353183577((&L_0), (0.0f), (7.5f), (0.0f), /*hidden argument*/NULL);
		__this->set_offset_5(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FollowTarget::LateUpdate()
extern "C" IL2CPP_METHOD_ATTR void FollowTarget_LateUpdate_m1906411353 (FollowTarget_t166153614 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FollowTarget_LateUpdate_m1906411353_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_1 = __this->get_target_4();
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = __this->get_offset_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_0, L_4, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.Utility.LerpControlledBob::.ctor()
extern "C" IL2CPP_METHOD_ATTR void LerpControlledBob__ctor_m1954212773 (LerpControlledBob_t1895875871 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityStandardAssets.Utility.LerpControlledBob::Offset()
extern "C" IL2CPP_METHOD_ATTR float LerpControlledBob_Offset_m891771316 (LerpControlledBob_t1895875871 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_Offset_2();
		return L_0;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.LerpControlledBob::DoBobCycle()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* LerpControlledBob_DoBobCycle_m1177640891 (LerpControlledBob_t1895875871 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LerpControlledBob_DoBobCycle_m1177640891_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CDoBobCycleU3Ec__Iterator0_t1149538828 * V_0 = NULL;
	{
		U3CDoBobCycleU3Ec__Iterator0_t1149538828 * L_0 = (U3CDoBobCycleU3Ec__Iterator0_t1149538828 *)il2cpp_codegen_object_new(U3CDoBobCycleU3Ec__Iterator0_t1149538828_il2cpp_TypeInfo_var);
		U3CDoBobCycleU3Ec__Iterator0__ctor_m2079578774(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDoBobCycleU3Ec__Iterator0_t1149538828 * L_1 = V_0;
		L_1->set_U24this_1(__this);
		U3CDoBobCycleU3Ec__Iterator0_t1149538828 * L_2 = V_0;
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
// System.Void UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CDoBobCycleU3Ec__Iterator0__ctor_m2079578774 (U3CDoBobCycleU3Ec__Iterator0_t1149538828 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CDoBobCycleU3Ec__Iterator0_MoveNext_m4171840518 (U3CDoBobCycleU3Ec__Iterator0_t1149538828 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDoBobCycleU3Ec__Iterator0_MoveNext_m4171840518_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_0098;
			}
			case 2:
			{
				goto IL_0121;
			}
		}
	}
	{
		goto IL_014e;
	}

IL_0025:
	{
		__this->set_U3CtU3E__0_0((0.0f));
		goto IL_0098;
	}

IL_0035:
	{
		LerpControlledBob_t1895875871 * L_2 = __this->get_U24this_1();
		LerpControlledBob_t1895875871 * L_3 = __this->get_U24this_1();
		float L_4 = L_3->get_BobAmount_1();
		float L_5 = __this->get_U3CtU3E__0_0();
		LerpControlledBob_t1895875871 * L_6 = __this->get_U24this_1();
		float L_7 = L_6->get_BobDuration_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_8 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, (0.0f), L_4, ((float)((float)L_5/(float)L_7)), /*hidden argument*/NULL);
		L_2->set_m_Offset_2(L_8);
		float L_9 = __this->get_U3CtU3E__0_0();
		float L_10 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_U3CtU3E__0_0(((float)il2cpp_codegen_add((float)L_9, (float)L_10)));
		WaitForFixedUpdate_t1634918743 * L_11 = (WaitForFixedUpdate_t1634918743 *)il2cpp_codegen_object_new(WaitForFixedUpdate_t1634918743_il2cpp_TypeInfo_var);
		WaitForFixedUpdate__ctor_m590323305(L_11, /*hidden argument*/NULL);
		__this->set_U24current_2(L_11);
		bool L_12 = __this->get_U24disposing_3();
		if (L_12)
		{
			goto IL_0093;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_0093:
	{
		goto IL_0150;
	}

IL_0098:
	{
		float L_13 = __this->get_U3CtU3E__0_0();
		LerpControlledBob_t1895875871 * L_14 = __this->get_U24this_1();
		float L_15 = L_14->get_BobDuration_0();
		if ((((float)L_13) < ((float)L_15)))
		{
			goto IL_0035;
		}
	}
	{
		__this->set_U3CtU3E__0_0((0.0f));
		goto IL_0121;
	}

IL_00be:
	{
		LerpControlledBob_t1895875871 * L_16 = __this->get_U24this_1();
		LerpControlledBob_t1895875871 * L_17 = __this->get_U24this_1();
		float L_18 = L_17->get_BobAmount_1();
		float L_19 = __this->get_U3CtU3E__0_0();
		LerpControlledBob_t1895875871 * L_20 = __this->get_U24this_1();
		float L_21 = L_20->get_BobDuration_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_22 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_18, (0.0f), ((float)((float)L_19/(float)L_21)), /*hidden argument*/NULL);
		L_16->set_m_Offset_2(L_22);
		float L_23 = __this->get_U3CtU3E__0_0();
		float L_24 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_U3CtU3E__0_0(((float)il2cpp_codegen_add((float)L_23, (float)L_24)));
		WaitForFixedUpdate_t1634918743 * L_25 = (WaitForFixedUpdate_t1634918743 *)il2cpp_codegen_object_new(WaitForFixedUpdate_t1634918743_il2cpp_TypeInfo_var);
		WaitForFixedUpdate__ctor_m590323305(L_25, /*hidden argument*/NULL);
		__this->set_U24current_2(L_25);
		bool L_26 = __this->get_U24disposing_3();
		if (L_26)
		{
			goto IL_011c;
		}
	}
	{
		__this->set_U24PC_4(2);
	}

IL_011c:
	{
		goto IL_0150;
	}

IL_0121:
	{
		float L_27 = __this->get_U3CtU3E__0_0();
		LerpControlledBob_t1895875871 * L_28 = __this->get_U24this_1();
		float L_29 = L_28->get_BobDuration_0();
		if ((((float)L_27) < ((float)L_29)))
		{
			goto IL_00be;
		}
	}
	{
		LerpControlledBob_t1895875871 * L_30 = __this->get_U24this_1();
		L_30->set_m_Offset_2((0.0f));
		__this->set_U24PC_4((-1));
	}

IL_014e:
	{
		return (bool)0;
	}

IL_0150:
	{
		return (bool)1;
	}
}
// System.Object UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CDoBobCycleU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1850011454 (U3CDoBobCycleU3Ec__Iterator0_t1149538828 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CDoBobCycleU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m842935970 (U3CDoBobCycleU3Ec__Iterator0_t1149538828 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CDoBobCycleU3Ec__Iterator0_Dispose_m477925634 (U3CDoBobCycleU3Ec__Iterator0_t1149538828 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CDoBobCycleU3Ec__Iterator0_Reset_m2840471097 (U3CDoBobCycleU3Ec__Iterator0_t1149538828 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDoBobCycleU3Ec__Iterator0_Reset_m2840471097_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CDoBobCycleU3Ec__Iterator0_Reset_m2840471097_RuntimeMethod_var);
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
// System.Void UnityStandardAssets.Utility.ObjectResetter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ObjectResetter__ctor_m1594926249 (ObjectResetter_t639177103 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.ObjectResetter::Start()
extern "C" IL2CPP_METHOD_ATTR void ObjectResetter_Start_m1255826771 (ObjectResetter_t639177103 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectResetter_Start_m1255826771_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransformU5BU5D_t807237628* L_0 = Component_GetComponentsInChildren_TisTransform_t3600365921_m438280950(__this, /*hidden argument*/Component_GetComponentsInChildren_TisTransform_t3600365921_m438280950_RuntimeMethod_var);
		List_1_t777473367 * L_1 = (List_1_t777473367 *)il2cpp_codegen_object_new(List_1_t777473367_il2cpp_TypeInfo_var);
		List_1__ctor_m3073653982(L_1, (RuntimeObject*)(RuntimeObject*)L_0, /*hidden argument*/List_1__ctor_m3073653982_RuntimeMethod_var);
		__this->set_originalStructure_6(L_1);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		__this->set_originalPosition_4(L_3);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_5 = Transform_get_rotation_m3502953881(L_4, /*hidden argument*/NULL);
		__this->set_originalRotation_5(L_5);
		Rigidbody_t3916780224 * L_6 = Component_GetComponent_TisRigidbody_t3916780224_m4049400462(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3916780224_m4049400462_RuntimeMethod_var);
		__this->set_Rigidbody_7(L_6);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.ObjectResetter::DelayedReset(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ObjectResetter_DelayedReset_m2641326427 (ObjectResetter_t639177103 * __this, float ___delay0, const RuntimeMethod* method)
{
	{
		float L_0 = ___delay0;
		RuntimeObject* L_1 = ObjectResetter_ResetCoroutine_m3995850687(__this, L_0, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.ObjectResetter::ResetCoroutine(System.Single)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ObjectResetter_ResetCoroutine_m3995850687 (ObjectResetter_t639177103 * __this, float ___delay0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectResetter_ResetCoroutine_m3995850687_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CResetCoroutineU3Ec__Iterator0_t3232105836 * V_0 = NULL;
	{
		U3CResetCoroutineU3Ec__Iterator0_t3232105836 * L_0 = (U3CResetCoroutineU3Ec__Iterator0_t3232105836 *)il2cpp_codegen_object_new(U3CResetCoroutineU3Ec__Iterator0_t3232105836_il2cpp_TypeInfo_var);
		U3CResetCoroutineU3Ec__Iterator0__ctor_m3896624994(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CResetCoroutineU3Ec__Iterator0_t3232105836 * L_1 = V_0;
		float L_2 = ___delay0;
		L_1->set_delay_0(L_2);
		U3CResetCoroutineU3Ec__Iterator0_t3232105836 * L_3 = V_0;
		L_3->set_U24this_3(__this);
		U3CResetCoroutineU3Ec__Iterator0_t3232105836 * L_4 = V_0;
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
// System.Void UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CResetCoroutineU3Ec__Iterator0__ctor_m3896624994 (U3CResetCoroutineU3Ec__Iterator0_t3232105836 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CResetCoroutineU3Ec__Iterator0_MoveNext_m2597113671 (U3CResetCoroutineU3Ec__Iterator0_t3232105836 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CResetCoroutineU3Ec__Iterator0_MoveNext_m2597113671_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Transform_t3600365921 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U24PC_6();
		V_0 = L_0;
		__this->set_U24PC_6((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0046;
			}
		}
	}
	{
		goto IL_013b;
	}

IL_0021:
	{
		float L_2 = __this->get_delay_0();
		WaitForSeconds_t1699091251 * L_3 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_3, L_2, /*hidden argument*/NULL);
		__this->set_U24current_4(L_3);
		bool L_4 = __this->get_U24disposing_5();
		if (L_4)
		{
			goto IL_0041;
		}
	}
	{
		__this->set_U24PC_6(1);
	}

IL_0041:
	{
		goto IL_013d;
	}

IL_0046:
	{
		ObjectResetter_t639177103 * L_5 = __this->get_U24this_3();
		TransformU5BU5D_t807237628* L_6 = Component_GetComponentsInChildren_TisTransform_t3600365921_m438280950(L_5, /*hidden argument*/Component_GetComponentsInChildren_TisTransform_t3600365921_m438280950_RuntimeMethod_var);
		__this->set_U24locvar0_1(L_6);
		__this->set_U24locvar1_2(0);
		goto IL_009c;
	}

IL_0063:
	{
		TransformU5BU5D_t807237628* L_7 = __this->get_U24locvar0_1();
		int32_t L_8 = __this->get_U24locvar1_2();
		int32_t L_9 = L_8;
		Transform_t3600365921 * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = L_10;
		ObjectResetter_t639177103 * L_11 = __this->get_U24this_3();
		List_1_t777473367 * L_12 = L_11->get_originalStructure_6();
		Transform_t3600365921 * L_13 = V_1;
		bool L_14 = List_1_Contains_m11885848(L_12, L_13, /*hidden argument*/List_1_Contains_m11885848_RuntimeMethod_var);
		if (L_14)
		{
			goto IL_008e;
		}
	}
	{
		Transform_t3600365921 * L_15 = V_1;
		Transform_set_parent_m786917804(L_15, (Transform_t3600365921 *)NULL, /*hidden argument*/NULL);
	}

IL_008e:
	{
		int32_t L_16 = __this->get_U24locvar1_2();
		__this->set_U24locvar1_2(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)));
	}

IL_009c:
	{
		int32_t L_17 = __this->get_U24locvar1_2();
		TransformU5BU5D_t807237628* L_18 = __this->get_U24locvar0_1();
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_18)->max_length)))))))
		{
			goto IL_0063;
		}
	}
	{
		ObjectResetter_t639177103 * L_19 = __this->get_U24this_3();
		Transform_t3600365921 * L_20 = Component_get_transform_m3162698980(L_19, /*hidden argument*/NULL);
		ObjectResetter_t639177103 * L_21 = __this->get_U24this_3();
		Vector3_t3722313464  L_22 = L_21->get_originalPosition_4();
		Transform_set_position_m3387557959(L_20, L_22, /*hidden argument*/NULL);
		ObjectResetter_t639177103 * L_23 = __this->get_U24this_3();
		Transform_t3600365921 * L_24 = Component_get_transform_m3162698980(L_23, /*hidden argument*/NULL);
		ObjectResetter_t639177103 * L_25 = __this->get_U24this_3();
		Quaternion_t2301928331  L_26 = L_25->get_originalRotation_5();
		Transform_set_rotation_m3524318132(L_24, L_26, /*hidden argument*/NULL);
		ObjectResetter_t639177103 * L_27 = __this->get_U24this_3();
		Rigidbody_t3916780224 * L_28 = L_27->get_Rigidbody_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_29 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_0124;
		}
	}
	{
		ObjectResetter_t639177103 * L_30 = __this->get_U24this_3();
		Rigidbody_t3916780224 * L_31 = L_30->get_Rigidbody_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_32 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rigidbody_set_velocity_m2899403247(L_31, L_32, /*hidden argument*/NULL);
		ObjectResetter_t639177103 * L_33 = __this->get_U24this_3();
		Rigidbody_t3916780224 * L_34 = L_33->get_Rigidbody_7();
		Vector3_t3722313464  L_35 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rigidbody_set_angularVelocity_m4254006699(L_34, L_35, /*hidden argument*/NULL);
	}

IL_0124:
	{
		ObjectResetter_t639177103 * L_36 = __this->get_U24this_3();
		Component_SendMessage_m3172125788(L_36, _stringLiteral1636126115, /*hidden argument*/NULL);
		__this->set_U24PC_6((-1));
	}

IL_013b:
	{
		return (bool)0;
	}

IL_013d:
	{
		return (bool)1;
	}
}
// System.Object UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CResetCoroutineU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m4171778103 (U3CResetCoroutineU3Ec__Iterator0_t3232105836 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CResetCoroutineU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3746080012 (U3CResetCoroutineU3Ec__Iterator0_t3232105836 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CResetCoroutineU3Ec__Iterator0_Dispose_m2836894187 (U3CResetCoroutineU3Ec__Iterator0_t3232105836 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_5((bool)1);
		__this->set_U24PC_6((-1));
		return;
	}
}
// System.Void UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CResetCoroutineU3Ec__Iterator0_Reset_m417813674 (U3CResetCoroutineU3Ec__Iterator0_t3232105836 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CResetCoroutineU3Ec__Iterator0_Reset_m417813674_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CResetCoroutineU3Ec__Iterator0_Reset_m417813674_RuntimeMethod_var);
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
// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParticleSystemDestroyer__ctor_m3034700839 (ParticleSystemDestroyer_t558680695 * __this, const RuntimeMethod* method)
{
	{
		__this->set_minDuration_4((8.0f));
		__this->set_maxDuration_5((10.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.ParticleSystemDestroyer::Start()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ParticleSystemDestroyer_Start_m2922139650 (ParticleSystemDestroyer_t558680695 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParticleSystemDestroyer_Start_m2922139650_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ec__Iterator0_t980021917 * V_0 = NULL;
	{
		U3CStartU3Ec__Iterator0_t980021917 * L_0 = (U3CStartU3Ec__Iterator0_t980021917 *)il2cpp_codegen_object_new(U3CStartU3Ec__Iterator0_t980021917_il2cpp_TypeInfo_var);
		U3CStartU3Ec__Iterator0__ctor_m3994160098(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStartU3Ec__Iterator0_t980021917 * L_1 = V_0;
		L_1->set_U24this_6(__this);
		U3CStartU3Ec__Iterator0_t980021917 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer::Stop()
extern "C" IL2CPP_METHOD_ATTR void ParticleSystemDestroyer_Stop_m890451802 (ParticleSystemDestroyer_t558680695 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_EarlyStop_7((bool)1);
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
// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0__ctor_m3994160098 (U3CStartU3Ec__Iterator0_t980021917 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CStartU3Ec__Iterator0_MoveNext_m73866544 (U3CStartU3Ec__Iterator0_t980021917 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_MoveNext_m73866544_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	ParticleSystem_t1800779281 * V_1 = NULL;
	MainModule_t2320046318  V_2;
	memset(&V_2, 0, sizeof(V_2));
	MinMaxCurve_t1067599125  V_3;
	memset(&V_3, 0, sizeof(V_3));
	ParticleSystem_t1800779281 * V_4 = NULL;
	EmissionModule_t311448003  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		int32_t L_0 = __this->get_U24PC_9();
		V_0 = L_0;
		__this->set_U24PC_9((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_00f5;
			}
			case 2:
			{
				goto IL_01c3;
			}
		}
	}
	{
		goto IL_01da;
	}

IL_0025:
	{
		ParticleSystemDestroyer_t558680695 * L_2 = __this->get_U24this_6();
		ParticleSystemU5BU5D_t3089334924* L_3 = Component_GetComponentsInChildren_TisParticleSystem_t1800779281_m2343960447(L_2, /*hidden argument*/Component_GetComponentsInChildren_TisParticleSystem_t1800779281_m2343960447_RuntimeMethod_var);
		__this->set_U3CsystemsU3E__0_0(L_3);
		ParticleSystemU5BU5D_t3089334924* L_4 = __this->get_U3CsystemsU3E__0_0();
		__this->set_U24locvar0_1(L_4);
		__this->set_U24locvar1_2(0);
		goto IL_009b;
	}

IL_004e:
	{
		ParticleSystemU5BU5D_t3089334924* L_5 = __this->get_U24locvar0_1();
		int32_t L_6 = __this->get_U24locvar1_2();
		int32_t L_7 = L_6;
		ParticleSystem_t1800779281 * L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		ParticleSystemDestroyer_t558680695 * L_9 = __this->get_U24this_6();
		ParticleSystem_t1800779281 * L_10 = V_1;
		MainModule_t2320046318  L_11 = ParticleSystem_get_main_m3006917117(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		MinMaxCurve_t1067599125  L_12 = MainModule_get_startLifetime_m2343501481((MainModule_t2320046318 *)(&V_2), /*hidden argument*/NULL);
		V_3 = L_12;
		float L_13 = MinMaxCurve_get_constant_m2963124720((MinMaxCurve_t1067599125 *)(&V_3), /*hidden argument*/NULL);
		ParticleSystemDestroyer_t558680695 * L_14 = __this->get_U24this_6();
		float L_15 = L_14->get_m_MaxLifetime_6();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_16 = Mathf_Max_m3146388979(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
		L_9->set_m_MaxLifetime_6(L_16);
		int32_t L_17 = __this->get_U24locvar1_2();
		__this->set_U24locvar1_2(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)));
	}

IL_009b:
	{
		int32_t L_18 = __this->get_U24locvar1_2();
		ParticleSystemU5BU5D_t3089334924* L_19 = __this->get_U24locvar0_1();
		if ((((int32_t)L_18) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length)))))))
		{
			goto IL_004e;
		}
	}
	{
		float L_20 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		ParticleSystemDestroyer_t558680695 * L_21 = __this->get_U24this_6();
		float L_22 = L_21->get_minDuration_4();
		ParticleSystemDestroyer_t558680695 * L_23 = __this->get_U24this_6();
		float L_24 = L_23->get_maxDuration_5();
		float L_25 = Random_Range_m2202990745(NULL /*static, unused*/, L_22, L_24, /*hidden argument*/NULL);
		__this->set_U3CstopTimeU3E__0_3(((float)il2cpp_codegen_add((float)L_20, (float)L_25)));
		goto IL_00f5;
	}

IL_00da:
	{
		__this->set_U24current_7(NULL);
		bool L_26 = __this->get_U24disposing_8();
		if (L_26)
		{
			goto IL_00f0;
		}
	}
	{
		__this->set_U24PC_9(1);
	}

IL_00f0:
	{
		goto IL_01dc;
	}

IL_00f5:
	{
		float L_27 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_28 = __this->get_U3CstopTimeU3E__0_3();
		if ((((float)L_27) < ((float)L_28)))
		{
			goto IL_00da;
		}
	}
	{
		ParticleSystemDestroyer_t558680695 * L_29 = __this->get_U24this_6();
		bool L_30 = L_29->get_m_EarlyStop_7();
		if (L_30)
		{
			goto IL_00da;
		}
	}
	{
		ParticleSystemDestroyer_t558680695 * L_31 = __this->get_U24this_6();
		String_t* L_32 = Object_get_name_m4211327027(L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_33 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2383749048, L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		ParticleSystemU5BU5D_t3089334924* L_34 = __this->get_U3CsystemsU3E__0_0();
		__this->set_U24locvar2_4(L_34);
		__this->set_U24locvar3_5(0);
		goto IL_0175;
	}

IL_0147:
	{
		ParticleSystemU5BU5D_t3089334924* L_35 = __this->get_U24locvar2_4();
		int32_t L_36 = __this->get_U24locvar3_5();
		int32_t L_37 = L_36;
		ParticleSystem_t1800779281 * L_38 = (L_35)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_4 = L_38;
		ParticleSystem_t1800779281 * L_39 = V_4;
		EmissionModule_t311448003  L_40 = ParticleSystem_get_emission_m1034302947(L_39, /*hidden argument*/NULL);
		V_5 = L_40;
		EmissionModule_set_enabled_m353945573((EmissionModule_t311448003 *)(&V_5), (bool)0, /*hidden argument*/NULL);
		int32_t L_41 = __this->get_U24locvar3_5();
		__this->set_U24locvar3_5(((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1)));
	}

IL_0175:
	{
		int32_t L_42 = __this->get_U24locvar3_5();
		ParticleSystemU5BU5D_t3089334924* L_43 = __this->get_U24locvar2_4();
		if ((((int32_t)L_42) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_43)->max_length)))))))
		{
			goto IL_0147;
		}
	}
	{
		ParticleSystemDestroyer_t558680695 * L_44 = __this->get_U24this_6();
		Component_BroadcastMessage_m2662892479(L_44, _stringLiteral3489794435, 1, /*hidden argument*/NULL);
		ParticleSystemDestroyer_t558680695 * L_45 = __this->get_U24this_6();
		float L_46 = L_45->get_m_MaxLifetime_6();
		WaitForSeconds_t1699091251 * L_47 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_47, L_46, /*hidden argument*/NULL);
		__this->set_U24current_7(L_47);
		bool L_48 = __this->get_U24disposing_8();
		if (L_48)
		{
			goto IL_01be;
		}
	}
	{
		__this->set_U24PC_9(2);
	}

IL_01be:
	{
		goto IL_01dc;
	}

IL_01c3:
	{
		ParticleSystemDestroyer_t558680695 * L_49 = __this->get_U24this_6();
		GameObject_t1113636619 * L_50 = Component_get_gameObject_m442555142(L_49, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_50, /*hidden argument*/NULL);
		__this->set_U24PC_9((-1));
	}

IL_01da:
	{
		return (bool)0;
	}

IL_01dc:
	{
		return (bool)1;
	}
}
// System.Object UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1186985803 (U3CStartU3Ec__Iterator0_t980021917 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_7();
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m2524879001 (U3CStartU3Ec__Iterator0_t980021917 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_7();
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Dispose_m2016758789 (U3CStartU3Ec__Iterator0_t980021917 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_8((bool)1);
		__this->set_U24PC_9((-1));
		return;
	}
}
// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Reset_m2462481942 (U3CStartU3Ec__Iterator0_t980021917 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_Reset_m2462481942_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CStartU3Ec__Iterator0_Reset_m2462481942_RuntimeMethod_var);
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
// System.Void UnityStandardAssets.Utility.PlatformSpecificContent::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PlatformSpecificContent__ctor_m412689550 (PlatformSpecificContent_t1404549723 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlatformSpecificContent__ctor_m412689550_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObjectU5BU5D_t3328599146* L_0 = (GameObjectU5BU5D_t3328599146*)SZArrayNew(GameObjectU5BU5D_t3328599146_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_m_Content_5(L_0);
		MonoBehaviourU5BU5D_t2007329276* L_1 = (MonoBehaviourU5BU5D_t2007329276*)SZArrayNew(MonoBehaviourU5BU5D_t2007329276_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_m_MonoBehaviours_6(L_1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.PlatformSpecificContent::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void PlatformSpecificContent_OnEnable_m3140833784 (PlatformSpecificContent_t1404549723 * __this, const RuntimeMethod* method)
{
	{
		PlatformSpecificContent_CheckEnableContent_m3496228314(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.PlatformSpecificContent::CheckEnableContent()
extern "C" IL2CPP_METHOD_ATTR void PlatformSpecificContent_CheckEnableContent_m3496228314 (PlatformSpecificContent_t1404549723 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_BuildTargetGroup_4();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}
	{
		PlatformSpecificContent_EnableContent_m808853508(__this, (bool)0, /*hidden argument*/NULL);
		goto IL_001f;
	}

IL_0018:
	{
		PlatformSpecificContent_EnableContent_m808853508(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.PlatformSpecificContent::EnableContent(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void PlatformSpecificContent_EnableContent_m808853508 (PlatformSpecificContent_t1404549723 * __this, bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlatformSpecificContent_EnableContent_m808853508_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	GameObjectU5BU5D_t3328599146* V_1 = NULL;
	int32_t V_2 = 0;
	Transform_t3600365921 * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	MonoBehaviour_t3962482529 * V_6 = NULL;
	MonoBehaviourU5BU5D_t2007329276* V_7 = NULL;
	int32_t V_8 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		GameObjectU5BU5D_t3328599146* L_0 = __this->get_m_Content_5();
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		GameObjectU5BU5D_t3328599146* L_1 = __this->get_m_Content_5();
		V_1 = L_1;
		V_2 = 0;
		goto IL_0037;
	}

IL_001c:
	{
		GameObjectU5BU5D_t3328599146* L_2 = V_1;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		GameObject_t1113636619 * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		GameObject_t1113636619 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		GameObject_t1113636619 * L_8 = V_0;
		bool L_9 = ___enabled0;
		GameObject_SetActive_m796801857(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0033:
	{
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0037:
	{
		int32_t L_11 = V_2;
		GameObjectU5BU5D_t3328599146* L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_001c;
		}
	}

IL_0040:
	{
		bool L_13 = __this->get_m_ChildrenOfThisObject_7();
		if (!L_13)
		{
			goto IL_009e;
		}
	}
	{
		Transform_t3600365921 * L_14 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		RuntimeObject* L_15 = Transform_GetEnumerator_m2717073726(L_14, /*hidden argument*/NULL);
		V_4 = L_15;
	}

IL_0058:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0076;
		}

IL_005d:
		{
			RuntimeObject* L_16 = V_4;
			RuntimeObject * L_17 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_16);
			V_3 = ((Transform_t3600365921 *)CastclassClass((RuntimeObject*)L_17, Transform_t3600365921_il2cpp_TypeInfo_var));
			Transform_t3600365921 * L_18 = V_3;
			GameObject_t1113636619 * L_19 = Component_get_gameObject_m442555142(L_18, /*hidden argument*/NULL);
			bool L_20 = ___enabled0;
			GameObject_SetActive_m796801857(L_19, L_20, /*hidden argument*/NULL);
		}

IL_0076:
		{
			RuntimeObject* L_21 = V_4;
			bool L_22 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_21);
			if (L_22)
			{
				goto IL_005d;
			}
		}

IL_0082:
		{
			IL2CPP_LEAVE(0x9E, FINALLY_0087);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0087;
	}

FINALLY_0087:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_23 = V_4;
			RuntimeObject* L_24 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_5 = L_24;
			if (!L_24)
			{
				goto IL_009d;
			}
		}

IL_0096:
		{
			RuntimeObject* L_25 = V_5;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_25);
		}

IL_009d:
		{
			IL2CPP_END_FINALLY(135)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(135)
	{
		IL2CPP_JUMP_TBL(0x9E, IL_009e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_009e:
	{
		MonoBehaviourU5BU5D_t2007329276* L_26 = __this->get_m_MonoBehaviours_6();
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		MonoBehaviourU5BU5D_t2007329276* L_27 = __this->get_m_MonoBehaviours_6();
		V_7 = L_27;
		V_8 = 0;
		goto IL_00d1;
	}

IL_00bc:
	{
		MonoBehaviourU5BU5D_t2007329276* L_28 = V_7;
		int32_t L_29 = V_8;
		int32_t L_30 = L_29;
		MonoBehaviour_t3962482529 * L_31 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		V_6 = L_31;
		MonoBehaviour_t3962482529 * L_32 = V_6;
		bool L_33 = ___enabled0;
		Behaviour_set_enabled_m20417929(L_32, L_33, /*hidden argument*/NULL);
		int32_t L_34 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00d1:
	{
		int32_t L_35 = V_8;
		MonoBehaviourU5BU5D_t2007329276* L_36 = V_7;
		if ((((int32_t)L_35) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_36)->max_length)))))))
		{
			goto IL_00bc;
		}
	}

IL_00dc:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.Utility.SimpleActivatorMenu::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SimpleActivatorMenu__ctor_m1389654852 (SimpleActivatorMenu_t1387811551 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.SimpleActivatorMenu::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void SimpleActivatorMenu_OnEnable_m599490508 (SimpleActivatorMenu_t1387811551 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_CurrentActiveObject_6(0);
		GUIText_t402233326 * L_0 = __this->get_camSwitchButton_4();
		GameObjectU5BU5D_t3328599146* L_1 = __this->get_objects_5();
		int32_t L_2 = __this->get_m_CurrentActiveObject_6();
		int32_t L_3 = L_2;
		GameObject_t1113636619 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		String_t* L_5 = Object_get_name_m4211327027(L_4, /*hidden argument*/NULL);
		GUIText_set_text_m2265981083(L_0, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.SimpleActivatorMenu::NextCamera()
extern "C" IL2CPP_METHOD_ATTR void SimpleActivatorMenu_NextCamera_m1732907826 (SimpleActivatorMenu_t1387811551 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->get_m_CurrentActiveObject_6();
		GameObjectU5BU5D_t3328599146* L_1 = __this->get_objects_5();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1))) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))))))
		{
			goto IL_001b;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0023;
	}

IL_001b:
	{
		int32_t L_2 = __this->get_m_CurrentActiveObject_6();
		G_B3_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_0023:
	{
		V_0 = G_B3_0;
		V_1 = 0;
		goto IL_0040;
	}

IL_002b:
	{
		GameObjectU5BU5D_t3328599146* L_3 = __this->get_objects_5();
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		GameObject_t1113636619 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		int32_t L_7 = V_1;
		int32_t L_8 = V_0;
		GameObject_SetActive_m796801857(L_6, (bool)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0040:
	{
		int32_t L_10 = V_1;
		GameObjectU5BU5D_t3328599146* L_11 = __this->get_objects_5();
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_12 = V_0;
		__this->set_m_CurrentActiveObject_6(L_12);
		GUIText_t402233326 * L_13 = __this->get_camSwitchButton_4();
		GameObjectU5BU5D_t3328599146* L_14 = __this->get_objects_5();
		int32_t L_15 = __this->get_m_CurrentActiveObject_6();
		int32_t L_16 = L_15;
		GameObject_t1113636619 * L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		String_t* L_18 = Object_get_name_m4211327027(L_17, /*hidden argument*/NULL);
		GUIText_set_text_m2265981083(L_13, L_18, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.Utility.SimpleMouseRotator::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SimpleMouseRotator__ctor_m2857185311 (SimpleMouseRotator_t2364742953 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleMouseRotator__ctor_m2857185311_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t3722313464  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector3__ctor_m1719387948((&L_0), (70.0f), (70.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_1 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_rotationRange_4(L_1);
		__this->set_rotationSpeed_5((10.0f));
		__this->set_dampingTime_6((0.2f));
		__this->set_autoZeroVerticalOnMobile_7((bool)1);
		__this->set_relative_9((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.SimpleMouseRotator::Start()
extern "C" IL2CPP_METHOD_ATTR void SimpleMouseRotator_Start_m1384983153 (SimpleMouseRotator_t2364742953 * __this, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_1 = Transform_get_localRotation_m3487911431(L_0, /*hidden argument*/NULL);
		__this->set_m_OriginalRotation_13(L_1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.SimpleMouseRotator::Update()
extern "C" IL2CPP_METHOD_ATTR void SimpleMouseRotator_Update_m843728997 (SimpleMouseRotator_t2364742953 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleMouseRotator_Update_m843728997_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_1 = __this->get_m_OriginalRotation_13();
		Transform_set_localRotation_m19445462(L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = __this->get_relative_9();
		if (!L_2)
		{
			goto IL_01f3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		float L_3 = CrossPlatformInputManager_GetAxis_m693277759(NULL /*static, unused*/, _stringLiteral3403559637, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = CrossPlatformInputManager_GetAxis_m693277759(NULL /*static, unused*/, _stringLiteral674676282, /*hidden argument*/NULL);
		V_1 = L_4;
		Vector3_t3722313464 * L_5 = __this->get_address_of_m_TargetAngles_10();
		float L_6 = L_5->get_y_3();
		if ((!(((float)L_6) > ((float)(180.0f)))))
		{
			goto IL_0075;
		}
	}
	{
		Vector3_t3722313464 * L_7 = __this->get_address_of_m_TargetAngles_10();
		Vector3_t3722313464 * L_8 = L_7;
		float L_9 = L_8->get_y_3();
		L_8->set_y_3(((float)il2cpp_codegen_subtract((float)L_9, (float)(360.0f))));
		Vector3_t3722313464 * L_10 = __this->get_address_of_m_FollowAngles_11();
		Vector3_t3722313464 * L_11 = L_10;
		float L_12 = L_11->get_y_3();
		L_11->set_y_3(((float)il2cpp_codegen_subtract((float)L_12, (float)(360.0f))));
	}

IL_0075:
	{
		Vector3_t3722313464 * L_13 = __this->get_address_of_m_TargetAngles_10();
		float L_14 = L_13->get_x_2();
		if ((!(((float)L_14) > ((float)(180.0f)))))
		{
			goto IL_00b8;
		}
	}
	{
		Vector3_t3722313464 * L_15 = __this->get_address_of_m_TargetAngles_10();
		Vector3_t3722313464 * L_16 = L_15;
		float L_17 = L_16->get_x_2();
		L_16->set_x_2(((float)il2cpp_codegen_subtract((float)L_17, (float)(360.0f))));
		Vector3_t3722313464 * L_18 = __this->get_address_of_m_FollowAngles_11();
		Vector3_t3722313464 * L_19 = L_18;
		float L_20 = L_19->get_x_2();
		L_19->set_x_2(((float)il2cpp_codegen_subtract((float)L_20, (float)(360.0f))));
	}

IL_00b8:
	{
		Vector3_t3722313464 * L_21 = __this->get_address_of_m_TargetAngles_10();
		float L_22 = L_21->get_y_3();
		if ((!(((float)L_22) < ((float)(-180.0f)))))
		{
			goto IL_00fb;
		}
	}
	{
		Vector3_t3722313464 * L_23 = __this->get_address_of_m_TargetAngles_10();
		Vector3_t3722313464 * L_24 = L_23;
		float L_25 = L_24->get_y_3();
		L_24->set_y_3(((float)il2cpp_codegen_add((float)L_25, (float)(360.0f))));
		Vector3_t3722313464 * L_26 = __this->get_address_of_m_FollowAngles_11();
		Vector3_t3722313464 * L_27 = L_26;
		float L_28 = L_27->get_y_3();
		L_27->set_y_3(((float)il2cpp_codegen_add((float)L_28, (float)(360.0f))));
	}

IL_00fb:
	{
		Vector3_t3722313464 * L_29 = __this->get_address_of_m_TargetAngles_10();
		float L_30 = L_29->get_x_2();
		if ((!(((float)L_30) < ((float)(-180.0f)))))
		{
			goto IL_013e;
		}
	}
	{
		Vector3_t3722313464 * L_31 = __this->get_address_of_m_TargetAngles_10();
		Vector3_t3722313464 * L_32 = L_31;
		float L_33 = L_32->get_x_2();
		L_32->set_x_2(((float)il2cpp_codegen_add((float)L_33, (float)(360.0f))));
		Vector3_t3722313464 * L_34 = __this->get_address_of_m_FollowAngles_11();
		Vector3_t3722313464 * L_35 = L_34;
		float L_36 = L_35->get_x_2();
		L_35->set_x_2(((float)il2cpp_codegen_add((float)L_36, (float)(360.0f))));
	}

IL_013e:
	{
		Vector3_t3722313464 * L_37 = __this->get_address_of_m_TargetAngles_10();
		Vector3_t3722313464 * L_38 = L_37;
		float L_39 = L_38->get_y_3();
		float L_40 = V_0;
		float L_41 = __this->get_rotationSpeed_5();
		L_38->set_y_3(((float)il2cpp_codegen_add((float)L_39, (float)((float)il2cpp_codegen_multiply((float)L_40, (float)L_41)))));
		Vector3_t3722313464 * L_42 = __this->get_address_of_m_TargetAngles_10();
		Vector3_t3722313464 * L_43 = L_42;
		float L_44 = L_43->get_x_2();
		float L_45 = V_1;
		float L_46 = __this->get_rotationSpeed_5();
		L_43->set_x_2(((float)il2cpp_codegen_add((float)L_44, (float)((float)il2cpp_codegen_multiply((float)L_45, (float)L_46)))));
		Vector3_t3722313464 * L_47 = __this->get_address_of_m_TargetAngles_10();
		Vector3_t3722313464 * L_48 = __this->get_address_of_m_TargetAngles_10();
		float L_49 = L_48->get_y_3();
		Vector2_t2156229523 * L_50 = __this->get_address_of_rotationRange_4();
		float L_51 = L_50->get_y_1();
		Vector2_t2156229523 * L_52 = __this->get_address_of_rotationRange_4();
		float L_53 = L_52->get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_54 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_49, ((float)il2cpp_codegen_multiply((float)((-L_51)), (float)(0.5f))), ((float)il2cpp_codegen_multiply((float)L_53, (float)(0.5f))), /*hidden argument*/NULL);
		L_47->set_y_3(L_54);
		Vector3_t3722313464 * L_55 = __this->get_address_of_m_TargetAngles_10();
		Vector3_t3722313464 * L_56 = __this->get_address_of_m_TargetAngles_10();
		float L_57 = L_56->get_x_2();
		Vector2_t2156229523 * L_58 = __this->get_address_of_rotationRange_4();
		float L_59 = L_58->get_x_0();
		Vector2_t2156229523 * L_60 = __this->get_address_of_rotationRange_4();
		float L_61 = L_60->get_x_0();
		float L_62 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_57, ((float)il2cpp_codegen_multiply((float)((-L_59)), (float)(0.5f))), ((float)il2cpp_codegen_multiply((float)L_61, (float)(0.5f))), /*hidden argument*/NULL);
		L_55->set_x_2(L_62);
		goto IL_0285;
	}

IL_01f3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_63 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_63;
		float L_64 = (&V_2)->get_x_2();
		V_0 = L_64;
		Vector3_t3722313464  L_65 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_65;
		float L_66 = (&V_3)->get_y_3();
		V_1 = L_66;
		Vector3_t3722313464 * L_67 = __this->get_address_of_m_TargetAngles_10();
		Vector2_t2156229523 * L_68 = __this->get_address_of_rotationRange_4();
		float L_69 = L_68->get_y_1();
		Vector2_t2156229523 * L_70 = __this->get_address_of_rotationRange_4();
		float L_71 = L_70->get_y_1();
		float L_72 = V_0;
		int32_t L_73 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_74 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)((-L_69)), (float)(0.5f))), ((float)il2cpp_codegen_multiply((float)L_71, (float)(0.5f))), ((float)((float)L_72/(float)(((float)((float)L_73))))), /*hidden argument*/NULL);
		L_67->set_y_3(L_74);
		Vector3_t3722313464 * L_75 = __this->get_address_of_m_TargetAngles_10();
		Vector2_t2156229523 * L_76 = __this->get_address_of_rotationRange_4();
		float L_77 = L_76->get_x_0();
		Vector2_t2156229523 * L_78 = __this->get_address_of_rotationRange_4();
		float L_79 = L_78->get_x_0();
		float L_80 = V_1;
		int32_t L_81 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_82 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)((-L_77)), (float)(0.5f))), ((float)il2cpp_codegen_multiply((float)L_79, (float)(0.5f))), ((float)((float)L_80/(float)(((float)((float)L_81))))), /*hidden argument*/NULL);
		L_75->set_x_2(L_82);
	}

IL_0285:
	{
		Vector3_t3722313464  L_83 = __this->get_m_FollowAngles_11();
		Vector3_t3722313464  L_84 = __this->get_m_TargetAngles_10();
		Vector3_t3722313464 * L_85 = __this->get_address_of_m_FollowVelocity_12();
		float L_86 = __this->get_dampingTime_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_87 = Vector3_SmoothDamp_m1123559802(NULL /*static, unused*/, L_83, L_84, (Vector3_t3722313464 *)L_85, L_86, /*hidden argument*/NULL);
		__this->set_m_FollowAngles_11(L_87);
		Transform_t3600365921 * L_88 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_89 = __this->get_m_OriginalRotation_13();
		Vector3_t3722313464 * L_90 = __this->get_address_of_m_FollowAngles_11();
		float L_91 = L_90->get_x_2();
		Vector3_t3722313464 * L_92 = __this->get_address_of_m_FollowAngles_11();
		float L_93 = L_92->get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_94 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, ((-L_91)), L_93, (0.0f), /*hidden argument*/NULL);
		Quaternion_t2301928331  L_95 = Quaternion_op_Multiply_m1294064023(NULL /*static, unused*/, L_89, L_94, /*hidden argument*/NULL);
		Transform_set_localRotation_m19445462(L_88, L_95, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.Utility.SmoothFollow::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SmoothFollow__ctor_m2120827444 (SmoothFollow_t4204731361 * __this, const RuntimeMethod* method)
{
	{
		__this->set_distance_5((10.0f));
		__this->set_height_6((5.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.SmoothFollow::Start()
extern "C" IL2CPP_METHOD_ATTR void SmoothFollow_Start_m2065684762 (SmoothFollow_t4204731361 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.SmoothFollow::LateUpdate()
extern "C" IL2CPP_METHOD_ATTR void SmoothFollow_LateUpdate_m1319302199 (SmoothFollow_t4204731361 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SmoothFollow_LateUpdate_m1319302199_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	float V_4 = 0.0f;
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	float V_6 = 0.0f;
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Quaternion_t2301928331  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector3_t3722313464  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Vector3_t3722313464  V_10;
	memset(&V_10, 0, sizeof(V_10));
	{
		Transform_t3600365921 * L_0 = __this->get_target_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		Transform_t3600365921 * L_2 = __this->get_target_4();
		Vector3_t3722313464  L_3 = Transform_get_eulerAngles_m2743581774(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = (&V_1)->get_y_3();
		V_0 = L_4;
		Transform_t3600365921 * L_5 = __this->get_target_4();
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		float L_7 = (&V_3)->get_y_3();
		float L_8 = __this->get_height_6();
		V_2 = ((float)il2cpp_codegen_add((float)L_7, (float)L_8));
		Transform_t3600365921 * L_9 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_10 = Transform_get_eulerAngles_m2743581774(L_9, /*hidden argument*/NULL);
		V_5 = L_10;
		float L_11 = (&V_5)->get_y_3();
		V_4 = L_11;
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_13 = Transform_get_position_m36019626(L_12, /*hidden argument*/NULL);
		V_7 = L_13;
		float L_14 = (&V_7)->get_y_3();
		V_6 = L_14;
		float L_15 = V_4;
		float L_16 = V_0;
		float L_17 = __this->get_rotationDamping_7();
		float L_18 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_19 = Mathf_LerpAngle_m295352085(NULL /*static, unused*/, L_15, L_16, ((float)il2cpp_codegen_multiply((float)L_17, (float)L_18)), /*hidden argument*/NULL);
		V_4 = L_19;
		float L_20 = V_6;
		float L_21 = V_2;
		float L_22 = __this->get_heightDamping_8();
		float L_23 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_24 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_20, L_21, ((float)il2cpp_codegen_multiply((float)L_22, (float)L_23)), /*hidden argument*/NULL);
		V_6 = L_24;
		float L_25 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_26 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, (0.0f), L_25, (0.0f), /*hidden argument*/NULL);
		V_8 = L_26;
		Transform_t3600365921 * L_27 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_28 = __this->get_target_4();
		Vector3_t3722313464  L_29 = Transform_get_position_m36019626(L_28, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_27, L_29, /*hidden argument*/NULL);
		Transform_t3600365921 * L_30 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_31 = L_30;
		Vector3_t3722313464  L_32 = Transform_get_position_m36019626(L_31, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_33 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_34 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_35 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/NULL);
		float L_36 = __this->get_distance_5();
		Vector3_t3722313464  L_37 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		Vector3_t3722313464  L_38 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_32, L_37, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_31, L_38, /*hidden argument*/NULL);
		Transform_t3600365921 * L_39 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_40 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_41 = Transform_get_position_m36019626(L_40, /*hidden argument*/NULL);
		V_9 = L_41;
		float L_42 = (&V_9)->get_x_2();
		float L_43 = V_6;
		Transform_t3600365921 * L_44 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_45 = Transform_get_position_m36019626(L_44, /*hidden argument*/NULL);
		V_10 = L_45;
		float L_46 = (&V_10)->get_z_4();
		Vector3_t3722313464  L_47;
		memset(&L_47, 0, sizeof(L_47));
		Vector3__ctor_m3353183577((&L_47), L_42, L_43, L_46, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_39, L_47, /*hidden argument*/NULL);
		Transform_t3600365921 * L_48 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_49 = __this->get_target_4();
		Transform_LookAt_m3968184312(L_48, L_49, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.Utility.TimedObjectActivator::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TimedObjectActivator__ctor_m928140018 (TimedObjectActivator_t1846709985 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimedObjectActivator__ctor_m928140018_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Entries_t3168066469 * L_0 = (Entries_t3168066469 *)il2cpp_codegen_object_new(Entries_t3168066469_il2cpp_TypeInfo_var);
		Entries__ctor_m1063022036(L_0, /*hidden argument*/NULL);
		__this->set_entries_4(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator::Awake()
extern "C" IL2CPP_METHOD_ATTR void TimedObjectActivator_Awake_m1757876145 (TimedObjectActivator_t1846709985 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimedObjectActivator_Awake_m1757876145_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Entry_t2725803170 * V_0 = NULL;
	EntryU5BU5D_t3574483607* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Entries_t3168066469 * L_0 = __this->get_entries_4();
		EntryU5BU5D_t3574483607* L_1 = L_0->get_entries_0();
		V_1 = L_1;
		V_2 = 0;
		goto IL_008c;
	}

IL_0013:
	{
		EntryU5BU5D_t3574483607* L_2 = V_1;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		Entry_t2725803170 * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		Entry_t2725803170 * L_6 = V_0;
		int32_t L_7 = L_6->get_action_1();
		V_3 = L_7;
		int32_t L_8 = V_3;
		switch (L_8)
		{
			case 0:
			{
				goto IL_0039;
			}
			case 1:
			{
				goto IL_004c;
			}
			case 2:
			{
				goto IL_005f;
			}
			case 3:
			{
				goto IL_0075;
			}
		}
	}
	{
		goto IL_0088;
	}

IL_0039:
	{
		Entry_t2725803170 * L_9 = V_0;
		RuntimeObject* L_10 = TimedObjectActivator_Activate_m3597596254(__this, L_9, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_10, /*hidden argument*/NULL);
		goto IL_0088;
	}

IL_004c:
	{
		Entry_t2725803170 * L_11 = V_0;
		RuntimeObject* L_12 = TimedObjectActivator_Deactivate_m98048501(__this, L_11, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_12, /*hidden argument*/NULL);
		goto IL_0088;
	}

IL_005f:
	{
		Entry_t2725803170 * L_13 = V_0;
		GameObject_t1113636619 * L_14 = L_13->get_target_0();
		Entry_t2725803170 * L_15 = V_0;
		float L_16 = L_15->get_delay_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m3118546832(NULL /*static, unused*/, L_14, L_16, /*hidden argument*/NULL);
		goto IL_0088;
	}

IL_0075:
	{
		Entry_t2725803170 * L_17 = V_0;
		RuntimeObject* L_18 = TimedObjectActivator_ReloadLevel_m3297458802(__this, L_17, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_18, /*hidden argument*/NULL);
		goto IL_0088;
	}

IL_0088:
	{
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_008c:
	{
		int32_t L_20 = V_2;
		EntryU5BU5D_t3574483607* L_21 = V_1;
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_21)->max_length)))))))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::Activate(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TimedObjectActivator_Activate_m3597596254 (TimedObjectActivator_t1846709985 * __this, Entry_t2725803170 * ___entry0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimedObjectActivator_Activate_m3597596254_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CActivateU3Ec__Iterator0_t2664723090 * V_0 = NULL;
	{
		U3CActivateU3Ec__Iterator0_t2664723090 * L_0 = (U3CActivateU3Ec__Iterator0_t2664723090 *)il2cpp_codegen_object_new(U3CActivateU3Ec__Iterator0_t2664723090_il2cpp_TypeInfo_var);
		U3CActivateU3Ec__Iterator0__ctor_m3279076013(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CActivateU3Ec__Iterator0_t2664723090 * L_1 = V_0;
		Entry_t2725803170 * L_2 = ___entry0;
		L_1->set_entry_0(L_2);
		U3CActivateU3Ec__Iterator0_t2664723090 * L_3 = V_0;
		return L_3;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::Deactivate(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TimedObjectActivator_Deactivate_m98048501 (TimedObjectActivator_t1846709985 * __this, Entry_t2725803170 * ___entry0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimedObjectActivator_Deactivate_m98048501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CDeactivateU3Ec__Iterator1_t730025274 * V_0 = NULL;
	{
		U3CDeactivateU3Ec__Iterator1_t730025274 * L_0 = (U3CDeactivateU3Ec__Iterator1_t730025274 *)il2cpp_codegen_object_new(U3CDeactivateU3Ec__Iterator1_t730025274_il2cpp_TypeInfo_var);
		U3CDeactivateU3Ec__Iterator1__ctor_m244127093(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDeactivateU3Ec__Iterator1_t730025274 * L_1 = V_0;
		Entry_t2725803170 * L_2 = ___entry0;
		L_1->set_entry_0(L_2);
		U3CDeactivateU3Ec__Iterator1_t730025274 * L_3 = V_0;
		return L_3;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::ReloadLevel(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TimedObjectActivator_ReloadLevel_m3297458802 (TimedObjectActivator_t1846709985 * __this, Entry_t2725803170 * ___entry0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimedObjectActivator_ReloadLevel_m3297458802_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CReloadLevelU3Ec__Iterator2_t2784493974 * V_0 = NULL;
	{
		U3CReloadLevelU3Ec__Iterator2_t2784493974 * L_0 = (U3CReloadLevelU3Ec__Iterator2_t2784493974 *)il2cpp_codegen_object_new(U3CReloadLevelU3Ec__Iterator2_t2784493974_il2cpp_TypeInfo_var);
		U3CReloadLevelU3Ec__Iterator2__ctor_m356851989(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CReloadLevelU3Ec__Iterator2_t2784493974 * L_1 = V_0;
		Entry_t2725803170 * L_2 = ___entry0;
		L_1->set_entry_0(L_2);
		U3CReloadLevelU3Ec__Iterator2_t2784493974 * L_3 = V_0;
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
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CActivateU3Ec__Iterator0__ctor_m3279076013 (U3CActivateU3Ec__Iterator0_t2664723090 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CActivateU3Ec__Iterator0_MoveNext_m3298973706 (U3CActivateU3Ec__Iterator0_t2664723090 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CActivateU3Ec__Iterator0_MoveNext_m3298973706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_004b;
			}
		}
	}
	{
		goto IL_0063;
	}

IL_0021:
	{
		Entry_t2725803170 * L_2 = __this->get_entry_0();
		float L_3 = L_2->get_delay_2();
		WaitForSeconds_t1699091251 * L_4 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U24current_1(L_4);
		bool L_5 = __this->get_U24disposing_2();
		if (L_5)
		{
			goto IL_0046;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0046:
	{
		goto IL_0065;
	}

IL_004b:
	{
		Entry_t2725803170 * L_6 = __this->get_entry_0();
		GameObject_t1113636619 * L_7 = L_6->get_target_0();
		GameObject_SetActive_m796801857(L_7, (bool)1, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_0063:
	{
		return (bool)0;
	}

IL_0065:
	{
		return (bool)1;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CActivateU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m4169452351 (U3CActivateU3Ec__Iterator0_t2664723090 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CActivateU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m4197420461 (U3CActivateU3Ec__Iterator0_t2664723090 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CActivateU3Ec__Iterator0_Dispose_m3577238171 (U3CActivateU3Ec__Iterator0_t2664723090 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CActivateU3Ec__Iterator0_Reset_m3442277957 (U3CActivateU3Ec__Iterator0_t2664723090 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CActivateU3Ec__Iterator0_Reset_m3442277957_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CActivateU3Ec__Iterator0_Reset_m3442277957_RuntimeMethod_var);
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
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CDeactivateU3Ec__Iterator1__ctor_m244127093 (U3CDeactivateU3Ec__Iterator1_t730025274 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator1::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CDeactivateU3Ec__Iterator1_MoveNext_m4231082803 (U3CDeactivateU3Ec__Iterator1_t730025274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDeactivateU3Ec__Iterator1_MoveNext_m4231082803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_004b;
			}
		}
	}
	{
		goto IL_0063;
	}

IL_0021:
	{
		Entry_t2725803170 * L_2 = __this->get_entry_0();
		float L_3 = L_2->get_delay_2();
		WaitForSeconds_t1699091251 * L_4 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U24current_1(L_4);
		bool L_5 = __this->get_U24disposing_2();
		if (L_5)
		{
			goto IL_0046;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0046:
	{
		goto IL_0065;
	}

IL_004b:
	{
		Entry_t2725803170 * L_6 = __this->get_entry_0();
		GameObject_t1113636619 * L_7 = L_6->get_target_0();
		GameObject_SetActive_m796801857(L_7, (bool)0, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_0063:
	{
		return (bool)0;
	}

IL_0065:
	{
		return (bool)1;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CDeactivateU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1665026886 (U3CDeactivateU3Ec__Iterator1_t730025274 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CDeactivateU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m4003709767 (U3CDeactivateU3Ec__Iterator1_t730025274 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator1::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CDeactivateU3Ec__Iterator1_Dispose_m2641903853 (U3CDeactivateU3Ec__Iterator1_t730025274 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator1::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CDeactivateU3Ec__Iterator1_Reset_m2891711865 (U3CDeactivateU3Ec__Iterator1_t730025274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDeactivateU3Ec__Iterator1_Reset_m2891711865_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CDeactivateU3Ec__Iterator1_Reset_m2891711865_RuntimeMethod_var);
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
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CReloadLevelU3Ec__Iterator2__ctor_m356851989 (U3CReloadLevelU3Ec__Iterator2_t2784493974 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator2::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CReloadLevelU3Ec__Iterator2_MoveNext_m4159166444 (U3CReloadLevelU3Ec__Iterator2_t2784493974 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CReloadLevelU3Ec__Iterator2_MoveNext_m4159166444_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Scene_t2348375561  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_004b;
			}
		}
	}
	{
		goto IL_0065;
	}

IL_0021:
	{
		Entry_t2725803170 * L_2 = __this->get_entry_0();
		float L_3 = L_2->get_delay_2();
		WaitForSeconds_t1699091251 * L_4 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U24current_1(L_4);
		bool L_5 = __this->get_U24disposing_2();
		if (L_5)
		{
			goto IL_0046;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0046:
	{
		goto IL_0067;
	}

IL_004b:
	{
		Scene_t2348375561  L_6 = SceneManager_GetSceneAt_m866025496(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_6;
		String_t* L_7 = Scene_get_name_m622963475((Scene_t2348375561 *)(&V_1), /*hidden argument*/NULL);
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_0065:
	{
		return (bool)0;
	}

IL_0067:
	{
		return (bool)1;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CReloadLevelU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2835106219 (U3CReloadLevelU3Ec__Iterator2_t2784493974 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CReloadLevelU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m3348385271 (U3CReloadLevelU3Ec__Iterator2_t2784493974 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator2::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CReloadLevelU3Ec__Iterator2_Dispose_m1698582681 (U3CReloadLevelU3Ec__Iterator2_t2784493974 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator2::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CReloadLevelU3Ec__Iterator2_Reset_m3942390806 (U3CReloadLevelU3Ec__Iterator2_t2784493974 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CReloadLevelU3Ec__Iterator2_Reset_m3942390806_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CReloadLevelU3Ec__Iterator2_Reset_m3942390806_RuntimeMethod_var);
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
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/Entries::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Entries__ctor_m1063022036 (Entries_t3168066469 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/Entry::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Entry__ctor_m2327773548 (Entry_t2725803170 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.Utility.TimedObjectDestructor::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TimedObjectDestructor__ctor_m1771779001 (TimedObjectDestructor_t3438860414 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_TimeOut_4((1.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectDestructor::Awake()
extern "C" IL2CPP_METHOD_ATTR void TimedObjectDestructor_Awake_m3496015425 (TimedObjectDestructor_t3438860414 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimedObjectDestructor_Awake_m3496015425_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_m_TimeOut_4();
		MonoBehaviour_Invoke_m4227543964(__this, _stringLiteral4033327350, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectDestructor::DestroyNow()
extern "C" IL2CPP_METHOD_ATTR void TimedObjectDestructor_DestroyNow_m4118445488 (TimedObjectDestructor_t3438860414 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimedObjectDestructor_DestroyNow_m4118445488_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_m_DetachChildren_5();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_DetachChildren_m3266231651(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DestroyObject_m1406874517(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.Utility.WaypointCircuit::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WaypointCircuit__ctor_m239928079 (WaypointCircuit_t445075330 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaypointCircuit__ctor_m239928079_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WaypointList_t2584574554 * L_0 = (WaypointList_t2584574554 *)il2cpp_codegen_object_new(WaypointList_t2584574554_il2cpp_TypeInfo_var);
		WaypointList__ctor_m2673417506(L_0, /*hidden argument*/NULL);
		__this->set_waypointList_4(L_0);
		__this->set_smoothRoute_5((bool)1);
		__this->set_editorVisualisationSubsteps_9((100.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityStandardAssets.Utility.WaypointCircuit::get_Length()
extern "C" IL2CPP_METHOD_ATTR float WaypointCircuit_get_Length_m250831631 (WaypointCircuit_t445075330 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CLengthU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::set_Length(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WaypointCircuit_set_Length_m4079220002 (WaypointCircuit_t445075330 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CLengthU3Ek__BackingField_10(L_0);
		return;
	}
}
// UnityEngine.Transform[] UnityStandardAssets.Utility.WaypointCircuit::get_Waypoints()
extern "C" IL2CPP_METHOD_ATTR TransformU5BU5D_t807237628* WaypointCircuit_get_Waypoints_m731492792 (WaypointCircuit_t445075330 * __this, const RuntimeMethod* method)
{
	{
		WaypointList_t2584574554 * L_0 = __this->get_waypointList_4();
		TransformU5BU5D_t807237628* L_1 = L_0->get_items_1();
		return L_1;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::Awake()
extern "C" IL2CPP_METHOD_ATTR void WaypointCircuit_Awake_m1181078183 (WaypointCircuit_t445075330 * __this, const RuntimeMethod* method)
{
	{
		TransformU5BU5D_t807237628* L_0 = WaypointCircuit_get_Waypoints_m731492792(__this, /*hidden argument*/NULL);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		WaypointCircuit_CachePositionsAndDistances_m983282490(__this, /*hidden argument*/NULL);
	}

IL_0014:
	{
		TransformU5BU5D_t807237628* L_1 = WaypointCircuit_get_Waypoints_m731492792(__this, /*hidden argument*/NULL);
		__this->set_numPoints_6((((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))));
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointCircuit::GetRoutePoint(System.Single)
extern "C" IL2CPP_METHOD_ATTR RoutePoint_t3880028948  WaypointCircuit_GetRoutePoint_m785398240 (WaypointCircuit_t445075330 * __this, float ___dist0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaypointCircuit_GetRoutePoint_m785398240_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		float L_0 = ___dist0;
		Vector3_t3722313464  L_1 = WaypointCircuit_GetRoutePosition_m1956640709(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = ___dist0;
		Vector3_t3722313464  L_3 = WaypointCircuit_GetRoutePosition_m1956640709(__this, ((float)il2cpp_codegen_add((float)L_2, (float)(0.1f))), /*hidden argument*/NULL);
		V_1 = L_3;
		Vector3_t3722313464  L_4 = V_1;
		Vector3_t3722313464  L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		Vector3_t3722313464  L_7 = V_0;
		Vector3_t3722313464  L_8 = Vector3_get_normalized_m2454957984((Vector3_t3722313464 *)(&V_2), /*hidden argument*/NULL);
		RoutePoint_t3880028948  L_9;
		memset(&L_9, 0, sizeof(L_9));
		RoutePoint__ctor_m1568691214((&L_9), L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::GetRoutePosition(System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  WaypointCircuit_GetRoutePosition_m1956640709 (WaypointCircuit_t445075330 * __this, float ___dist0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaypointCircuit_GetRoutePosition_m1956640709_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		float L_0 = WaypointCircuit_get_Length_m250831631(__this, /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0029;
		}
	}
	{
		SingleU5BU5D_t1444911251* L_1 = __this->get_distances_8();
		SingleU5BU5D_t1444911251* L_2 = __this->get_distances_8();
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))), (int32_t)1));
		float L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		WaypointCircuit_set_Length_m4079220002(__this, L_4, /*hidden argument*/NULL);
	}

IL_0029:
	{
		float L_5 = ___dist0;
		float L_6 = WaypointCircuit_get_Length_m250831631(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_7 = Mathf_Repeat_m1502810009(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		___dist0 = L_7;
		goto IL_0040;
	}

IL_003c:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0040:
	{
		SingleU5BU5D_t1444911251* L_9 = __this->get_distances_8();
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		float L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		float L_13 = ___dist0;
		if ((((float)L_12) < ((float)L_13)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_14 = V_0;
		int32_t L_15 = __this->get_numPoints_6();
		int32_t L_16 = __this->get_numPoints_6();
		__this->set_p1n_12(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1)), (int32_t)L_15))%(int32_t)L_16)));
		int32_t L_17 = V_0;
		__this->set_p2n_13(L_17);
		SingleU5BU5D_t1444911251* L_18 = __this->get_distances_8();
		int32_t L_19 = __this->get_p1n_12();
		int32_t L_20 = L_19;
		float L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		SingleU5BU5D_t1444911251* L_22 = __this->get_distances_8();
		int32_t L_23 = __this->get_p2n_13();
		int32_t L_24 = L_23;
		float L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		float L_26 = ___dist0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_27 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, L_21, L_25, L_26, /*hidden argument*/NULL);
		__this->set_i_15(L_27);
		bool L_28 = __this->get_smoothRoute_5();
		if (!L_28)
		{
			goto IL_016c;
		}
	}
	{
		int32_t L_29 = V_0;
		int32_t L_30 = __this->get_numPoints_6();
		int32_t L_31 = __this->get_numPoints_6();
		__this->set_p0n_11(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)2)), (int32_t)L_30))%(int32_t)L_31)));
		int32_t L_32 = V_0;
		int32_t L_33 = __this->get_numPoints_6();
		__this->set_p3n_14(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1))%(int32_t)L_33)));
		int32_t L_34 = __this->get_p2n_13();
		int32_t L_35 = __this->get_numPoints_6();
		__this->set_p2n_13(((int32_t)((int32_t)L_34%(int32_t)L_35)));
		Vector3U5BU5D_t1718750761* L_36 = __this->get_points_7();
		int32_t L_37 = __this->get_p0n_11();
		__this->set_P0_16((*(Vector3_t3722313464 *)((L_36)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_37)))));
		Vector3U5BU5D_t1718750761* L_38 = __this->get_points_7();
		int32_t L_39 = __this->get_p1n_12();
		__this->set_P1_17((*(Vector3_t3722313464 *)((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))));
		Vector3U5BU5D_t1718750761* L_40 = __this->get_points_7();
		int32_t L_41 = __this->get_p2n_13();
		__this->set_P2_18((*(Vector3_t3722313464 *)((L_40)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_41)))));
		Vector3U5BU5D_t1718750761* L_42 = __this->get_points_7();
		int32_t L_43 = __this->get_p3n_14();
		__this->set_P3_19((*(Vector3_t3722313464 *)((L_42)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_43)))));
		Vector3_t3722313464  L_44 = __this->get_P0_16();
		Vector3_t3722313464  L_45 = __this->get_P1_17();
		Vector3_t3722313464  L_46 = __this->get_P2_18();
		Vector3_t3722313464  L_47 = __this->get_P3_19();
		float L_48 = __this->get_i_15();
		Vector3_t3722313464  L_49 = WaypointCircuit_CatmullRom_m2378689349(__this, L_44, L_45, L_46, L_47, L_48, /*hidden argument*/NULL);
		return L_49;
	}

IL_016c:
	{
		int32_t L_50 = V_0;
		int32_t L_51 = __this->get_numPoints_6();
		int32_t L_52 = __this->get_numPoints_6();
		__this->set_p1n_12(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_50, (int32_t)1)), (int32_t)L_51))%(int32_t)L_52)));
		int32_t L_53 = V_0;
		__this->set_p2n_13(L_53);
		Vector3U5BU5D_t1718750761* L_54 = __this->get_points_7();
		int32_t L_55 = __this->get_p1n_12();
		Vector3U5BU5D_t1718750761* L_56 = __this->get_points_7();
		int32_t L_57 = __this->get_p2n_13();
		float L_58 = __this->get_i_15();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_59 = Vector3_Lerp_m407887542(NULL /*static, unused*/, (*(Vector3_t3722313464 *)((L_54)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_55)))), (*(Vector3_t3722313464 *)((L_56)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_57)))), L_58, /*hidden argument*/NULL);
		return L_59;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::CatmullRom(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  WaypointCircuit_CatmullRom_m2378689349 (WaypointCircuit_t445075330 * __this, Vector3_t3722313464  ___p00, Vector3_t3722313464  ___p11, Vector3_t3722313464  ___p22, Vector3_t3722313464  ___p33, float ___i4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaypointCircuit_CatmullRom_m2378689349_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t3722313464  L_0 = ___p11;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, (2.0f), L_0, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = ___p00;
		Vector3_t3722313464  L_3 = Vector3_op_UnaryNegation_m1951478815(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = ___p22;
		Vector3_t3722313464  L_5 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		float L_6 = ___i4;
		Vector3_t3722313464  L_7 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_1, L_7, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9 = ___p00;
		Vector3_t3722313464  L_10 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, (2.0f), L_9, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = ___p11;
		Vector3_t3722313464  L_12 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, (5.0f), L_11, /*hidden argument*/NULL);
		Vector3_t3722313464  L_13 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_10, L_12, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = ___p22;
		Vector3_t3722313464  L_15 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, (4.0f), L_14, /*hidden argument*/NULL);
		Vector3_t3722313464  L_16 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
		Vector3_t3722313464  L_17 = ___p33;
		Vector3_t3722313464  L_18 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		float L_19 = ___i4;
		Vector3_t3722313464  L_20 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		float L_21 = ___i4;
		Vector3_t3722313464  L_22 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		Vector3_t3722313464  L_23 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_8, L_22, /*hidden argument*/NULL);
		Vector3_t3722313464  L_24 = ___p00;
		Vector3_t3722313464  L_25 = Vector3_op_UnaryNegation_m1951478815(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		Vector3_t3722313464  L_26 = ___p11;
		Vector3_t3722313464  L_27 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, (3.0f), L_26, /*hidden argument*/NULL);
		Vector3_t3722313464  L_28 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_25, L_27, /*hidden argument*/NULL);
		Vector3_t3722313464  L_29 = ___p22;
		Vector3_t3722313464  L_30 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, (3.0f), L_29, /*hidden argument*/NULL);
		Vector3_t3722313464  L_31 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_28, L_30, /*hidden argument*/NULL);
		Vector3_t3722313464  L_32 = ___p33;
		Vector3_t3722313464  L_33 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		float L_34 = ___i4;
		Vector3_t3722313464  L_35 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/NULL);
		float L_36 = ___i4;
		Vector3_t3722313464  L_37 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		float L_38 = ___i4;
		Vector3_t3722313464  L_39 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_37, L_38, /*hidden argument*/NULL);
		Vector3_t3722313464  L_40 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_23, L_39, /*hidden argument*/NULL);
		Vector3_t3722313464  L_41 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, (0.5f), L_40, /*hidden argument*/NULL);
		return L_41;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::CachePositionsAndDistances()
extern "C" IL2CPP_METHOD_ATTR void WaypointCircuit_CachePositionsAndDistances_m983282490 (WaypointCircuit_t445075330 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaypointCircuit_CachePositionsAndDistances_m983282490_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	Transform_t3600365921 * V_2 = NULL;
	Transform_t3600365921 * V_3 = NULL;
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	{
		TransformU5BU5D_t807237628* L_0 = WaypointCircuit_get_Waypoints_m731492792(__this, /*hidden argument*/NULL);
		Vector3U5BU5D_t1718750761* L_1 = (Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), (int32_t)1)));
		__this->set_points_7(L_1);
		TransformU5BU5D_t807237628* L_2 = WaypointCircuit_get_Waypoints_m731492792(__this, /*hidden argument*/NULL);
		SingleU5BU5D_t1444911251* L_3 = (SingleU5BU5D_t1444911251*)SZArrayNew(SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))), (int32_t)1)));
		__this->set_distances_8(L_3);
		V_0 = (0.0f);
		V_1 = 0;
		goto IL_00ce;
	}

IL_0037:
	{
		TransformU5BU5D_t807237628* L_4 = WaypointCircuit_get_Waypoints_m731492792(__this, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		TransformU5BU5D_t807237628* L_6 = WaypointCircuit_get_Waypoints_m731492792(__this, /*hidden argument*/NULL);
		int32_t L_7 = ((int32_t)((int32_t)L_5%(int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length))))));
		Transform_t3600365921 * L_8 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		TransformU5BU5D_t807237628* L_9 = WaypointCircuit_get_Waypoints_m731492792(__this, /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		TransformU5BU5D_t807237628* L_11 = WaypointCircuit_get_Waypoints_m731492792(__this, /*hidden argument*/NULL);
		int32_t L_12 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1))%(int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length))))));
		Transform_t3600365921 * L_13 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		Transform_t3600365921 * L_14 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_14, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00ca;
		}
	}
	{
		Transform_t3600365921 * L_16 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_17 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_16, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00ca;
		}
	}
	{
		Transform_t3600365921 * L_18 = V_2;
		Vector3_t3722313464  L_19 = Transform_get_position_m36019626(L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		Transform_t3600365921 * L_20 = V_3;
		Vector3_t3722313464  L_21 = Transform_get_position_m36019626(L_20, /*hidden argument*/NULL);
		V_5 = L_21;
		Vector3U5BU5D_t1718750761* L_22 = __this->get_points_7();
		int32_t L_23 = V_1;
		TransformU5BU5D_t807237628* L_24 = WaypointCircuit_get_Waypoints_m731492792(__this, /*hidden argument*/NULL);
		int32_t L_25 = V_1;
		TransformU5BU5D_t807237628* L_26 = WaypointCircuit_get_Waypoints_m731492792(__this, /*hidden argument*/NULL);
		int32_t L_27 = ((int32_t)((int32_t)L_25%(int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length))))));
		Transform_t3600365921 * L_28 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		Vector3_t3722313464  L_29 = Transform_get_position_m36019626(L_28, /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))) = L_29;
		SingleU5BU5D_t1444911251* L_30 = __this->get_distances_8();
		int32_t L_31 = V_1;
		float L_32 = V_0;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (float)L_32);
		float L_33 = V_0;
		Vector3_t3722313464  L_34 = V_4;
		Vector3_t3722313464  L_35 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_36 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_34, L_35, /*hidden argument*/NULL);
		V_6 = L_36;
		float L_37 = Vector3_get_magnitude_m27958459((Vector3_t3722313464 *)(&V_6), /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_add((float)L_33, (float)L_37));
	}

IL_00ca:
	{
		int32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00ce:
	{
		int32_t L_39 = V_1;
		Vector3U5BU5D_t1718750761* L_40 = __this->get_points_7();
		if ((((int32_t)L_39) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_40)->max_length)))))))
		{
			goto IL_0037;
		}
	}
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::OnDrawGizmos()
extern "C" IL2CPP_METHOD_ATTR void WaypointCircuit_OnDrawGizmos_m546350951 (WaypointCircuit_t445075330 * __this, const RuntimeMethod* method)
{
	{
		WaypointCircuit_DrawGizmos_m620488138(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::OnDrawGizmosSelected()
extern "C" IL2CPP_METHOD_ATTR void WaypointCircuit_OnDrawGizmosSelected_m3694810816 (WaypointCircuit_t445075330 * __this, const RuntimeMethod* method)
{
	{
		WaypointCircuit_DrawGizmos_m620488138(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::DrawGizmos(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void WaypointCircuit_DrawGizmos_m620488138 (WaypointCircuit_t445075330 * __this, bool ___selected0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Color_t2555686324  G_B4_0;
	memset(&G_B4_0, 0, sizeof(G_B4_0));
	{
		WaypointList_t2584574554 * L_0 = __this->get_waypointList_4();
		L_0->set_circuit_0(__this);
		TransformU5BU5D_t807237628* L_1 = WaypointCircuit_get_Waypoints_m731492792(__this, /*hidden argument*/NULL);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))) <= ((int32_t)1)))
		{
			goto IL_0120;
		}
	}
	{
		TransformU5BU5D_t807237628* L_2 = WaypointCircuit_get_Waypoints_m731492792(__this, /*hidden argument*/NULL);
		__this->set_numPoints_6((((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))));
		WaypointCircuit_CachePositionsAndDistances_m983282490(__this, /*hidden argument*/NULL);
		SingleU5BU5D_t1444911251* L_3 = __this->get_distances_8();
		SingleU5BU5D_t1444911251* L_4 = __this->get_distances_8();
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))), (int32_t)1));
		float L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		WaypointCircuit_set_Length_m4079220002(__this, L_6, /*hidden argument*/NULL);
		bool L_7 = ___selected0;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		Color_t2555686324  L_8 = Color_get_yellow_m1287957903(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B4_0 = L_8;
		goto IL_006e;
	}

IL_0055:
	{
		Color_t2555686324  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Color__ctor_m2943235014((&L_9), (1.0f), (1.0f), (0.0f), (0.5f), /*hidden argument*/NULL);
		G_B4_0 = L_9;
	}

IL_006e:
	{
		Gizmos_set_color_m3399737545(NULL /*static, unused*/, G_B4_0, /*hidden argument*/NULL);
		TransformU5BU5D_t807237628* L_10 = WaypointCircuit_get_Waypoints_m731492792(__this, /*hidden argument*/NULL);
		int32_t L_11 = 0;
		Transform_t3600365921 * L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		Vector3_t3722313464  L_13 = Transform_get_position_m36019626(L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		bool L_14 = __this->get_smoothRoute_5();
		if (!L_14)
		{
			goto IL_00e2;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_00be;
	}

IL_0097:
	{
		float L_15 = V_1;
		Vector3_t3722313464  L_16 = WaypointCircuit_GetRoutePosition_m1956640709(__this, ((float)il2cpp_codegen_add((float)L_15, (float)(1.0f))), /*hidden argument*/NULL);
		V_2 = L_16;
		Vector3_t3722313464  L_17 = V_0;
		Vector3_t3722313464  L_18 = V_2;
		Gizmos_DrawLine_m3273476787(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		Vector3_t3722313464  L_19 = V_2;
		V_0 = L_19;
		float L_20 = V_1;
		float L_21 = WaypointCircuit_get_Length_m250831631(__this, /*hidden argument*/NULL);
		float L_22 = __this->get_editorVisualisationSubsteps_9();
		V_1 = ((float)il2cpp_codegen_add((float)L_20, (float)((float)((float)L_21/(float)L_22))));
	}

IL_00be:
	{
		float L_23 = V_1;
		float L_24 = WaypointCircuit_get_Length_m250831631(__this, /*hidden argument*/NULL);
		if ((((float)L_23) < ((float)L_24)))
		{
			goto IL_0097;
		}
	}
	{
		Vector3_t3722313464  L_25 = V_0;
		TransformU5BU5D_t807237628* L_26 = WaypointCircuit_get_Waypoints_m731492792(__this, /*hidden argument*/NULL);
		int32_t L_27 = 0;
		Transform_t3600365921 * L_28 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		Vector3_t3722313464  L_29 = Transform_get_position_m36019626(L_28, /*hidden argument*/NULL);
		Gizmos_DrawLine_m3273476787(NULL /*static, unused*/, L_25, L_29, /*hidden argument*/NULL);
		goto IL_0120;
	}

IL_00e2:
	{
		V_3 = 0;
		goto IL_0112;
	}

IL_00e9:
	{
		TransformU5BU5D_t807237628* L_30 = WaypointCircuit_get_Waypoints_m731492792(__this, /*hidden argument*/NULL);
		int32_t L_31 = V_3;
		TransformU5BU5D_t807237628* L_32 = WaypointCircuit_get_Waypoints_m731492792(__this, /*hidden argument*/NULL);
		int32_t L_33 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1))%(int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_32)->max_length))))));
		Transform_t3600365921 * L_34 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		Vector3_t3722313464  L_35 = Transform_get_position_m36019626(L_34, /*hidden argument*/NULL);
		V_4 = L_35;
		Vector3_t3722313464  L_36 = V_0;
		Vector3_t3722313464  L_37 = V_4;
		Gizmos_DrawLine_m3273476787(NULL /*static, unused*/, L_36, L_37, /*hidden argument*/NULL);
		Vector3_t3722313464  L_38 = V_4;
		V_0 = L_38;
		int32_t L_39 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_0112:
	{
		int32_t L_40 = V_3;
		TransformU5BU5D_t807237628* L_41 = WaypointCircuit_get_Waypoints_m731492792(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_40) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_41)->max_length)))))))
		{
			goto IL_00e9;
		}
	}

IL_0120:
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
// System.Void UnityStandardAssets.Utility.WaypointCircuit/RoutePoint::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void RoutePoint__ctor_m1568691214 (RoutePoint_t3880028948 * __this, Vector3_t3722313464  ___position0, Vector3_t3722313464  ___direction1, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = ___position0;
		__this->set_position_0(L_0);
		Vector3_t3722313464  L_1 = ___direction1;
		__this->set_direction_1(L_1);
		return;
	}
}
extern "C"  void RoutePoint__ctor_m1568691214_AdjustorThunk (RuntimeObject * __this, Vector3_t3722313464  ___position0, Vector3_t3722313464  ___direction1, const RuntimeMethod* method)
{
	RoutePoint_t3880028948 * _thisAdjusted = reinterpret_cast<RoutePoint_t3880028948 *>(__this + 1);
	RoutePoint__ctor_m1568691214(_thisAdjusted, ___position0, ___direction1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.Utility.WaypointCircuit/WaypointList::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WaypointList__ctor_m2673417506 (WaypointList_t2584574554 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaypointList__ctor_m2673417506_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransformU5BU5D_t807237628* L_0 = (TransformU5BU5D_t807237628*)SZArrayNew(TransformU5BU5D_t807237628_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_items_1(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WaypointProgressTracker__ctor_m2127537643 (WaypointProgressTracker_t1841386251 * __this, const RuntimeMethod* method)
{
	{
		__this->set_lookAheadForTargetOffset_5((5.0f));
		__this->set_lookAheadForTargetFactor_6((0.1f));
		__this->set_lookAheadForSpeedOffset_7((10.0f));
		__this->set_lookAheadForSpeedFactor_8((0.2f));
		__this->set_pointToPointThreshold_10((4.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::get_targetPoint()
extern "C" IL2CPP_METHOD_ATTR RoutePoint_t3880028948  WaypointProgressTracker_get_targetPoint_m81221885 (WaypointProgressTracker_t1841386251 * __this, const RuntimeMethod* method)
{
	{
		RoutePoint_t3880028948  L_0 = __this->get_U3CtargetPointU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::set_targetPoint(UnityStandardAssets.Utility.WaypointCircuit/RoutePoint)
extern "C" IL2CPP_METHOD_ATTR void WaypointProgressTracker_set_targetPoint_m2941277933 (WaypointProgressTracker_t1841386251 * __this, RoutePoint_t3880028948  ___value0, const RuntimeMethod* method)
{
	{
		RoutePoint_t3880028948  L_0 = ___value0;
		__this->set_U3CtargetPointU3Ek__BackingField_11(L_0);
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::get_speedPoint()
extern "C" IL2CPP_METHOD_ATTR RoutePoint_t3880028948  WaypointProgressTracker_get_speedPoint_m3235234571 (WaypointProgressTracker_t1841386251 * __this, const RuntimeMethod* method)
{
	{
		RoutePoint_t3880028948  L_0 = __this->get_U3CspeedPointU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::set_speedPoint(UnityStandardAssets.Utility.WaypointCircuit/RoutePoint)
extern "C" IL2CPP_METHOD_ATTR void WaypointProgressTracker_set_speedPoint_m2314338932 (WaypointProgressTracker_t1841386251 * __this, RoutePoint_t3880028948  ___value0, const RuntimeMethod* method)
{
	{
		RoutePoint_t3880028948  L_0 = ___value0;
		__this->set_U3CspeedPointU3Ek__BackingField_12(L_0);
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::get_progressPoint()
extern "C" IL2CPP_METHOD_ATTR RoutePoint_t3880028948  WaypointProgressTracker_get_progressPoint_m1022457255 (WaypointProgressTracker_t1841386251 * __this, const RuntimeMethod* method)
{
	{
		RoutePoint_t3880028948  L_0 = __this->get_U3CprogressPointU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::set_progressPoint(UnityStandardAssets.Utility.WaypointCircuit/RoutePoint)
extern "C" IL2CPP_METHOD_ATTR void WaypointProgressTracker_set_progressPoint_m4281131402 (WaypointProgressTracker_t1841386251 * __this, RoutePoint_t3880028948  ___value0, const RuntimeMethod* method)
{
	{
		RoutePoint_t3880028948  L_0 = ___value0;
		__this->set_U3CprogressPointU3Ek__BackingField_13(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::Start()
extern "C" IL2CPP_METHOD_ATTR void WaypointProgressTracker_Start_m1081584341 (WaypointProgressTracker_t1841386251 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaypointProgressTracker_Start_m1081584341_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = __this->get_target_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_2 = Object_get_name_m4211327027(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, L_2, _stringLiteral4223137674, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_4, L_3, /*hidden argument*/NULL);
		Transform_t3600365921 * L_5 = GameObject_get_transform_m1369836730(L_4, /*hidden argument*/NULL);
		__this->set_target_14(L_5);
	}

IL_0031:
	{
		WaypointProgressTracker_Reset_m1659377711(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::Reset()
extern "C" IL2CPP_METHOD_ATTR void WaypointProgressTracker_Reset_m1659377711 (WaypointProgressTracker_t1841386251 * __this, const RuntimeMethod* method)
{
	{
		__this->set_progressDistance_15((0.0f));
		__this->set_progressNum_16(0);
		int32_t L_0 = __this->get_progressStyle_9();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0062;
		}
	}
	{
		Transform_t3600365921 * L_1 = __this->get_target_14();
		WaypointCircuit_t445075330 * L_2 = __this->get_circuit_4();
		TransformU5BU5D_t807237628* L_3 = WaypointCircuit_get_Waypoints_m731492792(L_2, /*hidden argument*/NULL);
		int32_t L_4 = __this->get_progressNum_16();
		int32_t L_5 = L_4;
		Transform_t3600365921 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_1, L_7, /*hidden argument*/NULL);
		Transform_t3600365921 * L_8 = __this->get_target_14();
		WaypointCircuit_t445075330 * L_9 = __this->get_circuit_4();
		TransformU5BU5D_t807237628* L_10 = WaypointCircuit_get_Waypoints_m731492792(L_9, /*hidden argument*/NULL);
		int32_t L_11 = __this->get_progressNum_16();
		int32_t L_12 = L_11;
		Transform_t3600365921 * L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		Quaternion_t2301928331  L_14 = Transform_get_rotation_m3502953881(L_13, /*hidden argument*/NULL);
		Transform_set_rotation_m3524318132(L_8, L_14, /*hidden argument*/NULL);
	}

IL_0062:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::Update()
extern "C" IL2CPP_METHOD_ATTR void WaypointProgressTracker_Update_m572671677 (WaypointProgressTracker_t1841386251 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaypointProgressTracker_Update_m572671677_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RoutePoint_t3880028948  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RoutePoint_t3880028948  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	RoutePoint_t3880028948  V_4;
	memset(&V_4, 0, sizeof(V_4));
	RoutePoint_t3880028948  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	RoutePoint_t3880028948  V_8;
	memset(&V_8, 0, sizeof(V_8));
	RoutePoint_t3880028948  V_9;
	memset(&V_9, 0, sizeof(V_9));
	{
		int32_t L_0 = __this->get_progressStyle_9();
		if (L_0)
		{
			goto IL_0151;
		}
	}
	{
		float L_1 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		float L_2 = __this->get_speed_18();
		Vector3_t3722313464  L_3 = __this->get_lastPosition_17();
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		float L_7 = Vector3_get_magnitude_m27958459((Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		float L_8 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_10 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_2, ((float)((float)L_7/(float)L_8)), L_9, /*hidden argument*/NULL);
		__this->set_speed_18(L_10);
	}

IL_0054:
	{
		Transform_t3600365921 * L_11 = __this->get_target_14();
		WaypointCircuit_t445075330 * L_12 = __this->get_circuit_4();
		float L_13 = __this->get_progressDistance_15();
		float L_14 = __this->get_lookAheadForTargetOffset_5();
		float L_15 = __this->get_lookAheadForTargetFactor_6();
		float L_16 = __this->get_speed_18();
		RoutePoint_t3880028948  L_17 = WaypointCircuit_GetRoutePoint_m785398240(L_12, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_13, (float)L_14)), (float)((float)il2cpp_codegen_multiply((float)L_15, (float)L_16)))), /*hidden argument*/NULL);
		V_1 = L_17;
		Vector3_t3722313464  L_18 = (&V_1)->get_position_0();
		Transform_set_position_m3387557959(L_11, L_18, /*hidden argument*/NULL);
		Transform_t3600365921 * L_19 = __this->get_target_14();
		WaypointCircuit_t445075330 * L_20 = __this->get_circuit_4();
		float L_21 = __this->get_progressDistance_15();
		float L_22 = __this->get_lookAheadForSpeedOffset_7();
		float L_23 = __this->get_lookAheadForSpeedFactor_8();
		float L_24 = __this->get_speed_18();
		RoutePoint_t3880028948  L_25 = WaypointCircuit_GetRoutePoint_m785398240(L_20, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_21, (float)L_22)), (float)((float)il2cpp_codegen_multiply((float)L_23, (float)L_24)))), /*hidden argument*/NULL);
		V_2 = L_25;
		Vector3_t3722313464  L_26 = (&V_2)->get_direction_1();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_27 = Quaternion_LookRotation_m4040767668(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		Transform_set_rotation_m3524318132(L_19, L_27, /*hidden argument*/NULL);
		WaypointCircuit_t445075330 * L_28 = __this->get_circuit_4();
		float L_29 = __this->get_progressDistance_15();
		RoutePoint_t3880028948  L_30 = WaypointCircuit_GetRoutePoint_m785398240(L_28, L_29, /*hidden argument*/NULL);
		WaypointProgressTracker_set_progressPoint_m4281131402(__this, L_30, /*hidden argument*/NULL);
		RoutePoint_t3880028948  L_31 = WaypointProgressTracker_get_progressPoint_m1022457255(__this, /*hidden argument*/NULL);
		V_4 = L_31;
		Vector3_t3722313464  L_32 = (&V_4)->get_position_0();
		Transform_t3600365921 * L_33 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_34 = Transform_get_position_m36019626(L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_35 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_32, L_34, /*hidden argument*/NULL);
		V_3 = L_35;
		Vector3_t3722313464  L_36 = V_3;
		RoutePoint_t3880028948  L_37 = WaypointProgressTracker_get_progressPoint_m1022457255(__this, /*hidden argument*/NULL);
		V_5 = L_37;
		Vector3_t3722313464  L_38 = (&V_5)->get_direction_1();
		float L_39 = Vector3_Dot_m606404487(NULL /*static, unused*/, L_36, L_38, /*hidden argument*/NULL);
		if ((!(((float)L_39) < ((float)(0.0f)))))
		{
			goto IL_013b;
		}
	}
	{
		float L_40 = __this->get_progressDistance_15();
		float L_41 = Vector3_get_magnitude_m27958459((Vector3_t3722313464 *)(&V_3), /*hidden argument*/NULL);
		__this->set_progressDistance_15(((float)il2cpp_codegen_add((float)L_40, (float)((float)il2cpp_codegen_multiply((float)L_41, (float)(0.5f))))));
	}

IL_013b:
	{
		Transform_t3600365921 * L_42 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_43 = Transform_get_position_m36019626(L_42, /*hidden argument*/NULL);
		__this->set_lastPosition_17(L_43);
		goto IL_025d;
	}

IL_0151:
	{
		Transform_t3600365921 * L_44 = __this->get_target_14();
		Vector3_t3722313464  L_45 = Transform_get_position_m36019626(L_44, /*hidden argument*/NULL);
		Transform_t3600365921 * L_46 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_47 = Transform_get_position_m36019626(L_46, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_48 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_45, L_47, /*hidden argument*/NULL);
		V_6 = L_48;
		float L_49 = Vector3_get_magnitude_m27958459((Vector3_t3722313464 *)(&V_6), /*hidden argument*/NULL);
		float L_50 = __this->get_pointToPointThreshold_10();
		if ((!(((float)L_49) < ((float)L_50))))
		{
			goto IL_019c;
		}
	}
	{
		int32_t L_51 = __this->get_progressNum_16();
		WaypointCircuit_t445075330 * L_52 = __this->get_circuit_4();
		TransformU5BU5D_t807237628* L_53 = WaypointCircuit_get_Waypoints_m731492792(L_52, /*hidden argument*/NULL);
		__this->set_progressNum_16(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1))%(int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_53)->max_length)))))));
	}

IL_019c:
	{
		Transform_t3600365921 * L_54 = __this->get_target_14();
		WaypointCircuit_t445075330 * L_55 = __this->get_circuit_4();
		TransformU5BU5D_t807237628* L_56 = WaypointCircuit_get_Waypoints_m731492792(L_55, /*hidden argument*/NULL);
		int32_t L_57 = __this->get_progressNum_16();
		int32_t L_58 = L_57;
		Transform_t3600365921 * L_59 = (L_56)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58));
		Vector3_t3722313464  L_60 = Transform_get_position_m36019626(L_59, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_54, L_60, /*hidden argument*/NULL);
		Transform_t3600365921 * L_61 = __this->get_target_14();
		WaypointCircuit_t445075330 * L_62 = __this->get_circuit_4();
		TransformU5BU5D_t807237628* L_63 = WaypointCircuit_get_Waypoints_m731492792(L_62, /*hidden argument*/NULL);
		int32_t L_64 = __this->get_progressNum_16();
		int32_t L_65 = L_64;
		Transform_t3600365921 * L_66 = (L_63)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_65));
		Quaternion_t2301928331  L_67 = Transform_get_rotation_m3502953881(L_66, /*hidden argument*/NULL);
		Transform_set_rotation_m3524318132(L_61, L_67, /*hidden argument*/NULL);
		WaypointCircuit_t445075330 * L_68 = __this->get_circuit_4();
		float L_69 = __this->get_progressDistance_15();
		RoutePoint_t3880028948  L_70 = WaypointCircuit_GetRoutePoint_m785398240(L_68, L_69, /*hidden argument*/NULL);
		WaypointProgressTracker_set_progressPoint_m4281131402(__this, L_70, /*hidden argument*/NULL);
		RoutePoint_t3880028948  L_71 = WaypointProgressTracker_get_progressPoint_m1022457255(__this, /*hidden argument*/NULL);
		V_8 = L_71;
		Vector3_t3722313464  L_72 = (&V_8)->get_position_0();
		Transform_t3600365921 * L_73 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_74 = Transform_get_position_m36019626(L_73, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_75 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_72, L_74, /*hidden argument*/NULL);
		V_7 = L_75;
		Vector3_t3722313464  L_76 = V_7;
		RoutePoint_t3880028948  L_77 = WaypointProgressTracker_get_progressPoint_m1022457255(__this, /*hidden argument*/NULL);
		V_9 = L_77;
		Vector3_t3722313464  L_78 = (&V_9)->get_direction_1();
		float L_79 = Vector3_Dot_m606404487(NULL /*static, unused*/, L_76, L_78, /*hidden argument*/NULL);
		if ((!(((float)L_79) < ((float)(0.0f)))))
		{
			goto IL_024c;
		}
	}
	{
		float L_80 = __this->get_progressDistance_15();
		float L_81 = Vector3_get_magnitude_m27958459((Vector3_t3722313464 *)(&V_7), /*hidden argument*/NULL);
		__this->set_progressDistance_15(((float)il2cpp_codegen_add((float)L_80, (float)L_81)));
	}

IL_024c:
	{
		Transform_t3600365921 * L_82 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_83 = Transform_get_position_m36019626(L_82, /*hidden argument*/NULL);
		__this->set_lastPosition_17(L_83);
	}

IL_025d:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::OnDrawGizmos()
extern "C" IL2CPP_METHOD_ATTR void WaypointProgressTracker_OnDrawGizmos_m2504516940 (WaypointProgressTracker_t1841386251 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaypointProgressTracker_OnDrawGizmos_m2504516940_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Application_get_isPlaying_m100394690(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_007f;
		}
	}
	{
		Color_t2555686324  L_1 = Color_get_green_m490390750(NULL /*static, unused*/, /*hidden argument*/NULL);
		Gizmos_set_color_m3399737545(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		Transform_t3600365921 * L_4 = __this->get_target_14();
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		Gizmos_DrawLine_m3273476787(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		WaypointCircuit_t445075330 * L_6 = __this->get_circuit_4();
		float L_7 = __this->get_progressDistance_15();
		Vector3_t3722313464  L_8 = WaypointCircuit_GetRoutePosition_m1956640709(L_6, L_7, /*hidden argument*/NULL);
		Gizmos_DrawWireSphere_m132265467(NULL /*static, unused*/, L_8, (1.0f), /*hidden argument*/NULL);
		Color_t2555686324  L_9 = Color_get_yellow_m1287957903(NULL /*static, unused*/, /*hidden argument*/NULL);
		Gizmos_set_color_m3399737545(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		Transform_t3600365921 * L_10 = __this->get_target_14();
		Vector3_t3722313464  L_11 = Transform_get_position_m36019626(L_10, /*hidden argument*/NULL);
		Transform_t3600365921 * L_12 = __this->get_target_14();
		Vector3_t3722313464  L_13 = Transform_get_position_m36019626(L_12, /*hidden argument*/NULL);
		Transform_t3600365921 * L_14 = __this->get_target_14();
		Vector3_t3722313464  L_15 = Transform_get_forward_m747522392(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_16 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
		Gizmos_DrawLine_m3273476787(NULL /*static, unused*/, L_11, L_16, /*hidden argument*/NULL);
	}

IL_007f:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.Vehicles.Ball.Ball::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Ball__ctor_m3634588897 (Ball_t2378314638 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_MovePower_4((5.0f));
		__this->set_m_UseTorque_5((bool)1);
		__this->set_m_MaxAngularVelocity_6((25.0f));
		__this->set_m_JumpPower_7((2.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.Ball::Start()
extern "C" IL2CPP_METHOD_ATTR void Ball_Start_m3416639561 (Ball_t2378314638 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Ball_Start_m3416639561_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t3916780224 * L_0 = Component_GetComponent_TisRigidbody_t3916780224_m4049400462(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3916780224_m4049400462_RuntimeMethod_var);
		__this->set_m_Rigidbody_9(L_0);
		Rigidbody_t3916780224 * L_1 = Component_GetComponent_TisRigidbody_t3916780224_m4049400462(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3916780224_m4049400462_RuntimeMethod_var);
		float L_2 = __this->get_m_MaxAngularVelocity_6();
		Rigidbody_set_maxAngularVelocity_m3527950699(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.Ball::Move(UnityEngine.Vector3,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Ball_Move_m1246368361 (Ball_t2378314638 * __this, Vector3_t3722313464  ___moveDirection0, bool ___jump1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Ball_Move_m1246368361_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_m_UseTorque_5();
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		Rigidbody_t3916780224 * L_1 = __this->get_m_Rigidbody_9();
		float L_2 = (&___moveDirection0)->get_z_4();
		float L_3 = (&___moveDirection0)->get_x_2();
		Vector3_t3722313464  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector3__ctor_m3353183577((&L_4), L_2, (0.0f), ((-L_3)), /*hidden argument*/NULL);
		float L_5 = __this->get_m_MovePower_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		Rigidbody_AddTorque_m3171849690(L_1, L_6, /*hidden argument*/NULL);
		goto IL_0056;
	}

IL_003f:
	{
		Rigidbody_t3916780224 * L_7 = __this->get_m_Rigidbody_9();
		Vector3_t3722313464  L_8 = ___moveDirection0;
		float L_9 = __this->get_m_MovePower_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_10 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		Rigidbody_AddForce_m3395934484(L_7, L_10, /*hidden argument*/NULL);
	}

IL_0056:
	{
		Transform_t3600365921 * L_11 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_12 = Transform_get_position_m36019626(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_13 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = Vector3_op_UnaryNegation_m1951478815(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		bool L_15 = Physics_Raycast_m1896872038(NULL /*static, unused*/, L_12, L_14, (1.0f), /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_009c;
		}
	}
	{
		bool L_16 = ___jump1;
		if (!L_16)
		{
			goto IL_009c;
		}
	}
	{
		Rigidbody_t3916780224 * L_17 = __this->get_m_Rigidbody_9();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_18 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_19 = __this->get_m_JumpPower_7();
		Vector3_t3722313464  L_20 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		Rigidbody_AddForce_m1059068722(L_17, L_20, 1, /*hidden argument*/NULL);
	}

IL_009c:
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
// System.Void UnityStandardAssets.Vehicles.Ball.BallUserControl::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BallUserControl__ctor_m1792652312 (BallUserControl_t2574698008 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.BallUserControl::Awake()
extern "C" IL2CPP_METHOD_ATTR void BallUserControl_Awake_m1140098280 (BallUserControl_t2574698008 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallUserControl_Awake_m1140098280_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Ball_t2378314638 * L_0 = Component_GetComponent_TisBall_t2378314638_m1039029406(__this, /*hidden argument*/Component_GetComponent_TisBall_t2378314638_m1039029406_RuntimeMethod_var);
		__this->set_ball_4(L_0);
		Camera_t4157153871 * L_1 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		Camera_t4157153871 * L_3 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(L_3, /*hidden argument*/NULL);
		__this->set_cam_6(L_4);
		goto IL_003b;
	}

IL_0031:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral1183259238, /*hidden argument*/NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.BallUserControl::Update()
extern "C" IL2CPP_METHOD_ATTR void BallUserControl_Update_m945229538 (BallUserControl_t2574698008 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallUserControl_Update_m945229538_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		float L_0 = CrossPlatformInputManager_GetAxis_m693277759(NULL /*static, unused*/, _stringLiteral1828639942, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = CrossPlatformInputManager_GetAxis_m693277759(NULL /*static, unused*/, _stringLiteral2984908384, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = CrossPlatformInputManager_GetButton_m241794690(NULL /*static, unused*/, _stringLiteral1930566815, /*hidden argument*/NULL);
		__this->set_jump_8(L_2);
		Transform_t3600365921 * L_3 = __this->get_cam_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_009e;
		}
	}
	{
		Transform_t3600365921 * L_5 = __this->get_cam_6();
		Vector3_t3722313464  L_6 = Transform_get_forward_m747522392(L_5, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m3353183577((&L_7), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Vector3_Scale_m4006687392(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		Vector3_t3722313464  L_9 = Vector3_get_normalized_m2454957984((Vector3_t3722313464 *)(&V_2), /*hidden argument*/NULL);
		__this->set_camForward_7(L_9);
		float L_10 = V_1;
		Vector3_t3722313464  L_11 = __this->get_camForward_7();
		Vector3_t3722313464  L_12 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		float L_13 = V_0;
		Transform_t3600365921 * L_14 = __this->get_cam_6();
		Vector3_t3722313464  L_15 = Transform_get_right_m2535262102(L_14, /*hidden argument*/NULL);
		Vector3_t3722313464  L_16 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
		Vector3_t3722313464  L_17 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_12, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		Vector3_t3722313464  L_18 = Vector3_get_normalized_m2454957984((Vector3_t3722313464 *)(&V_3), /*hidden argument*/NULL);
		__this->set_move_5(L_18);
		goto IL_00c8;
	}

IL_009e:
	{
		float L_19 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_20 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_21 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		float L_22 = V_0;
		Vector3_t3722313464  L_23 = Vector3_get_right_m1913784872(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_24 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		Vector3_t3722313464  L_25 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_21, L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		Vector3_t3722313464  L_26 = Vector3_get_normalized_m2454957984((Vector3_t3722313464 *)(&V_4), /*hidden argument*/NULL);
		__this->set_move_5(L_26);
	}

IL_00c8:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.BallUserControl::FixedUpdate()
extern "C" IL2CPP_METHOD_ATTR void BallUserControl_FixedUpdate_m171323896 (BallUserControl_t2574698008 * __this, const RuntimeMethod* method)
{
	{
		Ball_t2378314638 * L_0 = __this->get_ball_4();
		Vector3_t3722313464  L_1 = __this->get_move_5();
		bool L_2 = __this->get_jump_8();
		Ball_Move_m1246368361(L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->set_jump_8((bool)0);
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
// System.Void UnityStandardAssets._2D.Camera2DFollow::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Camera2DFollow__ctor_m1109142833 (Camera2DFollow_t3335230098 * __this, const RuntimeMethod* method)
{
	{
		__this->set_damping_5((1.0f));
		__this->set_lookAheadFactor_6((3.0f));
		__this->set_lookAheadReturnSpeed_7((0.5f));
		__this->set_lookAheadMoveThreshold_8((0.1f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets._2D.Camera2DFollow::Start()
extern "C" IL2CPP_METHOD_ATTR void Camera2DFollow_Start_m622883919 (Camera2DFollow_t3335230098 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Camera2DFollow_Start_m622883919_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t3600365921 * L_0 = __this->get_target_4();
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		__this->set_m_LastTargetPosition_10(L_1);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		Transform_t3600365921 * L_4 = __this->get_target_4();
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		float L_7 = (&V_0)->get_z_4();
		__this->set_m_OffsetZ_9(L_7);
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_set_parent_m786917804(L_8, (Transform_t3600365921 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets._2D.Camera2DFollow::Update()
extern "C" IL2CPP_METHOD_ATTR void Camera2DFollow_Update_m1162929075 (Camera2DFollow_t3335230098 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Camera2DFollow_Update_m1162929075_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		Transform_t3600365921 * L_0 = __this->get_target_4();
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = __this->get_m_LastTargetPosition_10();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = (&V_1)->get_x_2();
		V_0 = L_4;
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_6 = fabsf(L_5);
		float L_7 = __this->get_lookAheadMoveThreshold_8();
		V_2 = (bool)((((float)L_6) > ((float)L_7))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_005a;
		}
	}
	{
		float L_9 = __this->get_lookAheadFactor_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_10 = Vector3_get_right_m1913784872(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		float L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_13 = Mathf_Sign_m3457838305(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
		__this->set_m_LookAheadPos_12(L_14);
		goto IL_007c;
	}

IL_005a:
	{
		Vector3_t3722313464  L_15 = __this->get_m_LookAheadPos_12();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_16 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_17 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_18 = __this->get_lookAheadReturnSpeed_7();
		Vector3_t3722313464  L_19 = Vector3_MoveTowards_m2786395547(NULL /*static, unused*/, L_15, L_16, ((float)il2cpp_codegen_multiply((float)L_17, (float)L_18)), /*hidden argument*/NULL);
		__this->set_m_LookAheadPos_12(L_19);
	}

IL_007c:
	{
		Transform_t3600365921 * L_20 = __this->get_target_4();
		Vector3_t3722313464  L_21 = Transform_get_position_m36019626(L_20, /*hidden argument*/NULL);
		Vector3_t3722313464  L_22 = __this->get_m_LookAheadPos_12();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_23 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		Vector3_t3722313464  L_24 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_25 = __this->get_m_OffsetZ_9();
		Vector3_t3722313464  L_26 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		Vector3_t3722313464  L_27 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_23, L_26, /*hidden argument*/NULL);
		V_3 = L_27;
		Transform_t3600365921 * L_28 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_29 = Transform_get_position_m36019626(L_28, /*hidden argument*/NULL);
		Vector3_t3722313464  L_30 = V_3;
		Vector3_t3722313464 * L_31 = __this->get_address_of_m_CurrentVelocity_11();
		float L_32 = __this->get_damping_5();
		Vector3_t3722313464  L_33 = Vector3_SmoothDamp_m1123559802(NULL /*static, unused*/, L_29, L_30, (Vector3_t3722313464 *)L_31, L_32, /*hidden argument*/NULL);
		V_4 = L_33;
		Transform_t3600365921 * L_34 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_35 = V_4;
		Transform_set_position_m3387557959(L_34, L_35, /*hidden argument*/NULL);
		Transform_t3600365921 * L_36 = __this->get_target_4();
		Vector3_t3722313464  L_37 = Transform_get_position_m36019626(L_36, /*hidden argument*/NULL);
		__this->set_m_LastTargetPosition_10(L_37);
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
// System.Void UnityStandardAssets._2D.CameraFollow::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CameraFollow__ctor_m944103703 (CameraFollow_t1399352937 * __this, const RuntimeMethod* method)
{
	{
		__this->set_xMargin_4((1.0f));
		__this->set_yMargin_5((1.0f));
		__this->set_xSmooth_6((8.0f));
		__this->set_ySmooth_7((8.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets._2D.CameraFollow::Awake()
extern "C" IL2CPP_METHOD_ATTR void CameraFollow_Awake_m651079590 (CameraFollow_t1399352937 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraFollow_Awake_m651079590_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = GameObject_FindGameObjectWithTag_m2129039296(NULL /*static, unused*/, _stringLiteral2261822918, /*hidden argument*/NULL);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		__this->set_m_Player_10(L_1);
		return;
	}
}
// System.Boolean UnityStandardAssets._2D.CameraFollow::CheckXMargin()
extern "C" IL2CPP_METHOD_ATTR bool CameraFollow_CheckXMargin_m1181846024 (CameraFollow_t1399352937 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraFollow_CheckXMargin_m1181846024_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_x_2();
		Transform_t3600365921 * L_3 = __this->get_m_Player_10();
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = (&V_1)->get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_6 = fabsf(((float)il2cpp_codegen_subtract((float)L_2, (float)L_5)));
		float L_7 = __this->get_xMargin_4();
		return (bool)((((float)L_6) > ((float)L_7))? 1 : 0);
	}
}
// System.Boolean UnityStandardAssets._2D.CameraFollow::CheckYMargin()
extern "C" IL2CPP_METHOD_ATTR bool CameraFollow_CheckYMargin_m1181844937 (CameraFollow_t1399352937 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraFollow_CheckYMargin_m1181844937_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_y_3();
		Transform_t3600365921 * L_3 = __this->get_m_Player_10();
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = (&V_1)->get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_6 = fabsf(((float)il2cpp_codegen_subtract((float)L_2, (float)L_5)));
		float L_7 = __this->get_yMargin_5();
		return (bool)((((float)L_6) > ((float)L_7))? 1 : 0);
	}
}
// System.Void UnityStandardAssets._2D.CameraFollow::Update()
extern "C" IL2CPP_METHOD_ATTR void CameraFollow_Update_m357150767 (CameraFollow_t1399352937 * __this, const RuntimeMethod* method)
{
	{
		CameraFollow_TrackPlayer_m3573657769(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets._2D.CameraFollow::TrackPlayer()
extern "C" IL2CPP_METHOD_ATTR void CameraFollow_TrackPlayer_m3573657769 (CameraFollow_t1399352937 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraFollow_TrackPlayer_m3573657769_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_t3722313464  V_8;
	memset(&V_8, 0, sizeof(V_8));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = (&V_1)->get_x_2();
		V_0 = L_2;
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		float L_5 = (&V_3)->get_y_3();
		V_2 = L_5;
		bool L_6 = CameraFollow_CheckXMargin_m1181846024(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_006d;
		}
	}
	{
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = Transform_get_position_m36019626(L_7, /*hidden argument*/NULL);
		V_4 = L_8;
		float L_9 = (&V_4)->get_x_2();
		Transform_t3600365921 * L_10 = __this->get_m_Player_10();
		Vector3_t3722313464  L_11 = Transform_get_position_m36019626(L_10, /*hidden argument*/NULL);
		V_5 = L_11;
		float L_12 = (&V_5)->get_x_2();
		float L_13 = __this->get_xSmooth_6();
		float L_14 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_15 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_9, L_12, ((float)il2cpp_codegen_multiply((float)L_13, (float)L_14)), /*hidden argument*/NULL);
		V_0 = L_15;
	}

IL_006d:
	{
		bool L_16 = CameraFollow_CheckYMargin_m1181844937(__this, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00b2;
		}
	}
	{
		Transform_t3600365921 * L_17 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_18 = Transform_get_position_m36019626(L_17, /*hidden argument*/NULL);
		V_6 = L_18;
		float L_19 = (&V_6)->get_y_3();
		Transform_t3600365921 * L_20 = __this->get_m_Player_10();
		Vector3_t3722313464  L_21 = Transform_get_position_m36019626(L_20, /*hidden argument*/NULL);
		V_7 = L_21;
		float L_22 = (&V_7)->get_y_3();
		float L_23 = __this->get_ySmooth_7();
		float L_24 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_25 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_19, L_22, ((float)il2cpp_codegen_multiply((float)L_23, (float)L_24)), /*hidden argument*/NULL);
		V_2 = L_25;
	}

IL_00b2:
	{
		float L_26 = V_0;
		Vector2_t2156229523 * L_27 = __this->get_address_of_minXAndY_9();
		float L_28 = L_27->get_x_0();
		Vector2_t2156229523 * L_29 = __this->get_address_of_maxXAndY_8();
		float L_30 = L_29->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_31 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_26, L_28, L_30, /*hidden argument*/NULL);
		V_0 = L_31;
		float L_32 = V_2;
		Vector2_t2156229523 * L_33 = __this->get_address_of_minXAndY_9();
		float L_34 = L_33->get_y_1();
		Vector2_t2156229523 * L_35 = __this->get_address_of_maxXAndY_8();
		float L_36 = L_35->get_y_1();
		float L_37 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_32, L_34, L_36, /*hidden argument*/NULL);
		V_2 = L_37;
		Transform_t3600365921 * L_38 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_39 = V_0;
		float L_40 = V_2;
		Transform_t3600365921 * L_41 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_42 = Transform_get_position_m36019626(L_41, /*hidden argument*/NULL);
		V_8 = L_42;
		float L_43 = (&V_8)->get_z_4();
		Vector3_t3722313464  L_44;
		memset(&L_44, 0, sizeof(L_44));
		Vector3__ctor_m3353183577((&L_44), L_39, L_40, L_43, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_38, L_44, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets._2D.Platformer2DUserControl::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Platformer2DUserControl__ctor_m3038382236 (Platformer2DUserControl_t4130129562 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets._2D.Platformer2DUserControl::Awake()
extern "C" IL2CPP_METHOD_ATTR void Platformer2DUserControl_Awake_m1116790156 (Platformer2DUserControl_t4130129562 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platformer2DUserControl_Awake_m1116790156_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlatformerCharacter2D_t675295753 * L_0 = Component_GetComponent_TisPlatformerCharacter2D_t675295753_m828033776(__this, /*hidden argument*/Component_GetComponent_TisPlatformerCharacter2D_t675295753_m828033776_RuntimeMethod_var);
		__this->set_m_Character_4(L_0);
		return;
	}
}
// System.Void UnityStandardAssets._2D.Platformer2DUserControl::Update()
extern "C" IL2CPP_METHOD_ATTR void Platformer2DUserControl_Update_m3606614023 (Platformer2DUserControl_t4130129562 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platformer2DUserControl_Update_m3606614023_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_m_Jump_5();
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		bool L_1 = CrossPlatformInputManager_GetButtonDown_m1689635996(NULL /*static, unused*/, _stringLiteral1930566815, /*hidden argument*/NULL);
		__this->set_m_Jump_5(L_1);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityStandardAssets._2D.Platformer2DUserControl::FixedUpdate()
extern "C" IL2CPP_METHOD_ATTR void Platformer2DUserControl_FixedUpdate_m3289450078 (Platformer2DUserControl_t4130129562 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platformer2DUserControl_FixedUpdate_m3289450078_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m3736388334(NULL /*static, unused*/, ((int32_t)306), /*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		float L_1 = CrossPlatformInputManager_GetAxis_m693277759(NULL /*static, unused*/, _stringLiteral1828639942, /*hidden argument*/NULL);
		V_1 = L_1;
		PlatformerCharacter2D_t675295753 * L_2 = __this->get_m_Character_4();
		float L_3 = V_1;
		bool L_4 = V_0;
		bool L_5 = __this->get_m_Jump_5();
		PlatformerCharacter2D_Move_m755954514(L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		__this->set_m_Jump_5((bool)0);
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
// System.Void UnityStandardAssets._2D.PlatformerCharacter2D::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PlatformerCharacter2D__ctor_m2976303666 (PlatformerCharacter2D_t675295753 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_MaxSpeed_4((10.0f));
		__this->set_m_JumpForce_5((400.0f));
		__this->set_m_CrouchSpeed_6((0.36f));
		__this->set_m_FacingRight_16((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets._2D.PlatformerCharacter2D::Awake()
extern "C" IL2CPP_METHOD_ATTR void PlatformerCharacter2D_Awake_m4126597186 (PlatformerCharacter2D_t675295753 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlatformerCharacter2D_Awake_m4126597186_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_1 = Transform_Find_m1729760951(L_0, _stringLiteral1396832867, /*hidden argument*/NULL);
		__this->set_m_GroundCheck_9(L_1);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_3 = Transform_Find_m1729760951(L_2, _stringLiteral1648826855, /*hidden argument*/NULL);
		__this->set_m_CeilingCheck_12(L_3);
		Animator_t434523843 * L_4 = Component_GetComponent_TisAnimator_t434523843_m2351447238(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var);
		__this->set_m_Anim_14(L_4);
		Rigidbody2D_t939494601 * L_5 = Component_GetComponent_TisRigidbody2D_t939494601_m2731142064(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t939494601_m2731142064_RuntimeMethod_var);
		__this->set_m_Rigidbody2D_15(L_5);
		return;
	}
}
// System.Void UnityStandardAssets._2D.PlatformerCharacter2D::FixedUpdate()
extern "C" IL2CPP_METHOD_ATTR void PlatformerCharacter2D_FixedUpdate_m1070239257 (PlatformerCharacter2D_t675295753 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlatformerCharacter2D_FixedUpdate_m1070239257_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Collider2DU5BU5D_t1693969295* V_0 = NULL;
	int32_t V_1 = 0;
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		__this->set_m_Grounded_11((bool)0);
		Transform_t3600365921 * L_0 = __this->get_m_GroundCheck_9();
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_2 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		LayerMask_t3493934918  L_3 = __this->get_m_WhatIsGround_8();
		int32_t L_4 = LayerMask_op_Implicit_m3296792737(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1528932956_il2cpp_TypeInfo_var);
		Collider2DU5BU5D_t1693969295* L_5 = Physics2D_OverlapCircleAll_m638049410(NULL /*static, unused*/, L_2, (0.2f), L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		V_1 = 0;
		goto IL_0057;
	}

IL_0034:
	{
		Collider2DU5BU5D_t1693969295* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		Collider2D_t2806799626 * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		GameObject_t1113636619 * L_10 = Component_get_gameObject_m442555142(L_9, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		__this->set_m_Grounded_11((bool)1);
	}

IL_0053:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0057:
	{
		int32_t L_14 = V_1;
		Collider2DU5BU5D_t1693969295* L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_0034;
		}
	}
	{
		Animator_t434523843 * L_16 = __this->get_m_Anim_14();
		bool L_17 = __this->get_m_Grounded_11();
		Animator_SetBool_m234840832(L_16, _stringLiteral3128803744, L_17, /*hidden argument*/NULL);
		Animator_t434523843 * L_18 = __this->get_m_Anim_14();
		Rigidbody2D_t939494601 * L_19 = __this->get_m_Rigidbody2D_15();
		Vector2_t2156229523  L_20 = Rigidbody2D_get_velocity_m366589732(L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		float L_21 = (&V_2)->get_y_1();
		Animator_SetFloat_m1701463607(L_18, _stringLiteral2154097237, L_21, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets._2D.PlatformerCharacter2D::Move(System.Single,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void PlatformerCharacter2D_Move_m755954514 (PlatformerCharacter2D_t675295753 * __this, float ___move0, bool ___crouch1, bool ___jump2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlatformerCharacter2D_Move_m755954514_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float G_B9_0 = 0.0f;
	{
		bool L_0 = ___crouch1;
		if (L_0)
		{
			goto IL_004d;
		}
	}
	{
		Animator_t434523843 * L_1 = __this->get_m_Anim_14();
		bool L_2 = Animator_GetBool_m2865822416(L_1, _stringLiteral3128541729, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		Transform_t3600365921 * L_3 = __this->get_m_CeilingCheck_12();
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_5 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		LayerMask_t3493934918  L_6 = __this->get_m_WhatIsGround_8();
		int32_t L_7 = LayerMask_op_Implicit_m3296792737(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1528932956_il2cpp_TypeInfo_var);
		Collider2D_t2806799626 * L_8 = Physics2D_OverlapCircle_m2858772865(NULL /*static, unused*/, L_5, (0.01f), L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		___crouch1 = (bool)1;
	}

IL_004d:
	{
		Animator_t434523843 * L_10 = __this->get_m_Anim_14();
		bool L_11 = ___crouch1;
		Animator_SetBool_m234840832(L_10, _stringLiteral3128541729, L_11, /*hidden argument*/NULL);
		bool L_12 = __this->get_m_Grounded_11();
		if (L_12)
		{
			goto IL_0074;
		}
	}
	{
		bool L_13 = __this->get_m_AirControl_7();
		if (!L_13)
		{
			goto IL_0108;
		}
	}

IL_0074:
	{
		bool L_14 = ___crouch1;
		if (!L_14)
		{
			goto IL_0087;
		}
	}
	{
		float L_15 = ___move0;
		float L_16 = __this->get_m_CrouchSpeed_6();
		G_B9_0 = ((float)il2cpp_codegen_multiply((float)L_15, (float)L_16));
		goto IL_0088;
	}

IL_0087:
	{
		float L_17 = ___move0;
		G_B9_0 = L_17;
	}

IL_0088:
	{
		___move0 = G_B9_0;
		Animator_t434523843 * L_18 = __this->get_m_Anim_14();
		float L_19 = ___move0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_20 = fabsf(L_19);
		Animator_SetFloat_m1701463607(L_18, _stringLiteral3556802456, L_20, /*hidden argument*/NULL);
		Rigidbody2D_t939494601 * L_21 = __this->get_m_Rigidbody2D_15();
		float L_22 = ___move0;
		float L_23 = __this->get_m_MaxSpeed_4();
		Rigidbody2D_t939494601 * L_24 = __this->get_m_Rigidbody2D_15();
		Vector2_t2156229523  L_25 = Rigidbody2D_get_velocity_m366589732(L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		float L_26 = (&V_0)->get_y_1();
		Vector2_t2156229523  L_27;
		memset(&L_27, 0, sizeof(L_27));
		Vector2__ctor_m3970636864((&L_27), ((float)il2cpp_codegen_multiply((float)L_22, (float)L_23)), L_26, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m2898400508(L_21, L_27, /*hidden argument*/NULL);
		float L_28 = ___move0;
		if ((!(((float)L_28) > ((float)(0.0f)))))
		{
			goto IL_00ec;
		}
	}
	{
		bool L_29 = __this->get_m_FacingRight_16();
		if (L_29)
		{
			goto IL_00ec;
		}
	}
	{
		PlatformerCharacter2D_Flip_m2859437419(__this, /*hidden argument*/NULL);
		goto IL_0108;
	}

IL_00ec:
	{
		float L_30 = ___move0;
		if ((!(((float)L_30) < ((float)(0.0f)))))
		{
			goto IL_0108;
		}
	}
	{
		bool L_31 = __this->get_m_FacingRight_16();
		if (!L_31)
		{
			goto IL_0108;
		}
	}
	{
		PlatformerCharacter2D_Flip_m2859437419(__this, /*hidden argument*/NULL);
	}

IL_0108:
	{
		bool L_32 = __this->get_m_Grounded_11();
		if (!L_32)
		{
			goto IL_0161;
		}
	}
	{
		bool L_33 = ___jump2;
		if (!L_33)
		{
			goto IL_0161;
		}
	}
	{
		Animator_t434523843 * L_34 = __this->get_m_Anim_14();
		bool L_35 = Animator_GetBool_m2865822416(L_34, _stringLiteral3128803744, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_0161;
		}
	}
	{
		__this->set_m_Grounded_11((bool)0);
		Animator_t434523843 * L_36 = __this->get_m_Anim_14();
		Animator_SetBool_m234840832(L_36, _stringLiteral3128803744, (bool)0, /*hidden argument*/NULL);
		Rigidbody2D_t939494601 * L_37 = __this->get_m_Rigidbody2D_15();
		float L_38 = __this->get_m_JumpForce_5();
		Vector2_t2156229523  L_39;
		memset(&L_39, 0, sizeof(L_39));
		Vector2__ctor_m3970636864((&L_39), (0.0f), L_38, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m1113499586(L_37, L_39, /*hidden argument*/NULL);
	}

IL_0161:
	{
		return;
	}
}
// System.Void UnityStandardAssets._2D.PlatformerCharacter2D::Flip()
extern "C" IL2CPP_METHOD_ATTR void PlatformerCharacter2D_Flip_m2859437419 (PlatformerCharacter2D_t675295753 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		bool L_0 = __this->get_m_FacingRight_16();
		__this->set_m_FacingRight_16((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Transform_get_localScale_m129152068(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t3722313464 * L_3 = (&V_0);
		float L_4 = L_3->get_x_2();
		L_3->set_x_2(((float)il2cpp_codegen_multiply((float)L_4, (float)(-1.0f))));
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = V_0;
		Transform_set_localScale_m3053443106(L_5, L_6, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets._2D.Restarter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Restarter__ctor_m464080376 (Restarter_t269523250 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets._2D.Restarter::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" IL2CPP_METHOD_ATTR void Restarter_OnTriggerEnter2D_m388320205 (Restarter_t269523250 * __this, Collider2D_t2806799626 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Restarter_OnTriggerEnter2D_m388320205_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t2348375561  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Collider2D_t2806799626 * L_0 = ___other0;
		String_t* L_1 = Component_get_tag_m2716693327(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, _stringLiteral2261822918, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Scene_t2348375561  L_3 = SceneManager_GetSceneAt_m866025496(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = Scene_get_name_m622963475((Scene_t2348375561 *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
