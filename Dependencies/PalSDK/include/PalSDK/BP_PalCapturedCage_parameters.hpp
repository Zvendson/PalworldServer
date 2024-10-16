#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "AkAudio_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_PalCapturedCage.BP_PalCapturedCage_C.CaptureStartFromServerPlayer
// 0x0008 (0x0008 - 0x0000)
struct BP_PalCapturedCage_C_CaptureStartFromServerPlayer final
{
public:
	class APalPlayerCharacter*                    Attacker;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCapturedCage_C_CaptureStartFromServerPlayer) == 0x000008, "Wrong alignment on BP_PalCapturedCage_C_CaptureStartFromServerPlayer");
static_assert(sizeof(BP_PalCapturedCage_C_CaptureStartFromServerPlayer) == 0x000008, "Wrong size on BP_PalCapturedCage_C_CaptureStartFromServerPlayer");
static_assert(offsetof(BP_PalCapturedCage_C_CaptureStartFromServerPlayer, Attacker) == 0x000000, "Member 'BP_PalCapturedCage_C_CaptureStartFromServerPlayer::Attacker' has a wrong offset!");

// Function BP_PalCapturedCage.BP_PalCapturedCage_C.Disable Lock Mesh Outline
// 0x0018 (0x0018 - 0x0000)
struct BP_PalCapturedCage_C_Disable_Lock_Mesh_Outline final
{
public:
	class AActor*                                 Other;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IPalInteractiveObjectComponentInterface> Component;                                         // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCapturedCage_C_Disable_Lock_Mesh_Outline) == 0x000008, "Wrong alignment on BP_PalCapturedCage_C_Disable_Lock_Mesh_Outline");
static_assert(sizeof(BP_PalCapturedCage_C_Disable_Lock_Mesh_Outline) == 0x000018, "Wrong size on BP_PalCapturedCage_C_Disable_Lock_Mesh_Outline");
static_assert(offsetof(BP_PalCapturedCage_C_Disable_Lock_Mesh_Outline, Other) == 0x000000, "Member 'BP_PalCapturedCage_C_Disable_Lock_Mesh_Outline::Other' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_Disable_Lock_Mesh_Outline, Component) == 0x000008, "Member 'BP_PalCapturedCage_C_Disable_Lock_Mesh_Outline::Component' has a wrong offset!");

// Function BP_PalCapturedCage.BP_PalCapturedCage_C.DoorOpenAnimeLoop
// 0x0150 (0x0150 - 0x0000)
struct BP_PalCapturedCage_C_DoorOpenAnimeLoop final
{
public:
	double                                        FinishAngle;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Lerp_ReturnValue;                         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0038(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast;        // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13C[0x4];                                      // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Lerp_Alpha_ImplicitCast;                  // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCapturedCage_C_DoorOpenAnimeLoop) == 0x000008, "Wrong alignment on BP_PalCapturedCage_C_DoorOpenAnimeLoop");
static_assert(sizeof(BP_PalCapturedCage_C_DoorOpenAnimeLoop) == 0x000150, "Wrong size on BP_PalCapturedCage_C_DoorOpenAnimeLoop");
static_assert(offsetof(BP_PalCapturedCage_C_DoorOpenAnimeLoop, FinishAngle) == 0x000000, "Member 'BP_PalCapturedCage_C_DoorOpenAnimeLoop::FinishAngle' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_DoorOpenAnimeLoop, CallFunc_FClamp_ReturnValue) == 0x000008, "Member 'BP_PalCapturedCage_C_DoorOpenAnimeLoop::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_DoorOpenAnimeLoop, CallFunc_GetFloatValue_ReturnValue) == 0x000010, "Member 'BP_PalCapturedCage_C_DoorOpenAnimeLoop::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_DoorOpenAnimeLoop, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000014, "Member 'BP_PalCapturedCage_C_DoorOpenAnimeLoop::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_DoorOpenAnimeLoop, CallFunc_Lerp_ReturnValue) == 0x000018, "Member 'BP_PalCapturedCage_C_DoorOpenAnimeLoop::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_DoorOpenAnimeLoop, CallFunc_MakeRotator_ReturnValue) == 0x000020, "Member 'BP_PalCapturedCage_C_DoorOpenAnimeLoop::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_DoorOpenAnimeLoop, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000038, "Member 'BP_PalCapturedCage_C_DoorOpenAnimeLoop::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_DoorOpenAnimeLoop, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000120, "Member 'BP_PalCapturedCage_C_DoorOpenAnimeLoop::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_DoorOpenAnimeLoop, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000128, "Member 'BP_PalCapturedCage_C_DoorOpenAnimeLoop::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_DoorOpenAnimeLoop, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000130, "Member 'BP_PalCapturedCage_C_DoorOpenAnimeLoop::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_DoorOpenAnimeLoop, CallFunc_GetFloatValue_InTime_ImplicitCast) == 0x000138, "Member 'BP_PalCapturedCage_C_DoorOpenAnimeLoop::CallFunc_GetFloatValue_InTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_DoorOpenAnimeLoop, CallFunc_Lerp_Alpha_ImplicitCast) == 0x000140, "Member 'BP_PalCapturedCage_C_DoorOpenAnimeLoop::CallFunc_Lerp_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_DoorOpenAnimeLoop, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x000148, "Member 'BP_PalCapturedCage_C_DoorOpenAnimeLoop::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");

// Function BP_PalCapturedCage.BP_PalCapturedCage_C.Enable Lock Mesh Outline
// 0x0018 (0x0018 - 0x0000)
struct BP_PalCapturedCage_C_Enable_Lock_Mesh_Outline final
{
public:
	class AActor*                                 Other;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IPalInteractiveObjectComponentInterface> Component;                                         // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCapturedCage_C_Enable_Lock_Mesh_Outline) == 0x000008, "Wrong alignment on BP_PalCapturedCage_C_Enable_Lock_Mesh_Outline");
static_assert(sizeof(BP_PalCapturedCage_C_Enable_Lock_Mesh_Outline) == 0x000018, "Wrong size on BP_PalCapturedCage_C_Enable_Lock_Mesh_Outline");
static_assert(offsetof(BP_PalCapturedCage_C_Enable_Lock_Mesh_Outline, Other) == 0x000000, "Member 'BP_PalCapturedCage_C_Enable_Lock_Mesh_Outline::Other' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_Enable_Lock_Mesh_Outline, Component) == 0x000008, "Member 'BP_PalCapturedCage_C_Enable_Lock_Mesh_Outline::Component' has a wrong offset!");

// Function BP_PalCapturedCage.BP_PalCapturedCage_C.ExecuteUbergraph_BP_PalCapturedCage
// 0x00D0 (0x00D0 - 0x0000)
struct BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IPalInteractiveObjectIndicatorInterface> CallFunc_SetIndicatorInterface_InIndicatorInterface_CastInput; // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetSpawnedPal_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalVisualEffectDynamicParameter       K2Node_MakeStruct_PalVisualEffectDynamicParameter; // 0x0020(0x0010)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalVisualEffectComponent*              CallFunc_GetComponentByClass_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalVisualEffectBase*                   CallFunc_AddVisualEffect_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalVisualEffectDynamicParameter       K2Node_MakeStruct_PalVisualEffectDynamicParameter_1; // 0x0048(0x0010)()
	class APalPlayerCharacter*                    K2Node_CustomEvent_Attacker;                       // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalVisualEffectBase*                   CallFunc_AddVisualEffect_ReturnValue_1;            // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0068(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType)> K2Node_CreateDelegate_OutputDelegate;              // 0x007C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x008C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x009C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* Other, TScriptInterface<class IPalInteractiveObjectComponentInterface> Component)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x00AC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* Other, TScriptInterface<class IPalInteractiveObjectComponentInterface> Component)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x00BC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage) == 0x000008, "Wrong alignment on BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage");
static_assert(sizeof(BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage) == 0x0000D0, "Wrong size on BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage");
static_assert(offsetof(BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage, EntryPoint) == 0x000000, "Member 'BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage, CallFunc_SetIndicatorInterface_InIndicatorInterface_CastInput) == 0x000008, "Member 'BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage::CallFunc_SetIndicatorInterface_InIndicatorInterface_CastInput' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage, CallFunc_GetSpawnedPal_ReturnValue) == 0x000018, "Member 'BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage::CallFunc_GetSpawnedPal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage, K2Node_MakeStruct_PalVisualEffectDynamicParameter) == 0x000020, "Member 'BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage::K2Node_MakeStruct_PalVisualEffectDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage, CallFunc_GetComponentByClass_ReturnValue) == 0x000038, "Member 'BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage, CallFunc_AddVisualEffect_ReturnValue) == 0x000040, "Member 'BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage::CallFunc_AddVisualEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage, K2Node_MakeStruct_PalVisualEffectDynamicParameter_1) == 0x000048, "Member 'BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage::K2Node_MakeStruct_PalVisualEffectDynamicParameter_1' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage, K2Node_CustomEvent_Attacker) == 0x000058, "Member 'BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage::K2Node_CustomEvent_Attacker' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage, CallFunc_AddVisualEffect_ReturnValue_1) == 0x000060, "Member 'BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage::CallFunc_AddVisualEffect_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage, Temp_delegate_Variable) == 0x000068, "Member 'BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage, CallFunc_PostEvent_ReturnValue) == 0x000078, "Member 'BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage::CallFunc_PostEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage, K2Node_CreateDelegate_OutputDelegate) == 0x00007C, "Member 'BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage, K2Node_CreateDelegate_OutputDelegate_1) == 0x00008C, "Member 'BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage, K2Node_CreateDelegate_OutputDelegate_2) == 0x00009C, "Member 'BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000AC, "Member 'BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage, K2Node_CreateDelegate_OutputDelegate_4) == 0x0000BC, "Member 'BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage, Temp_bool_IsClosed_Variable) == 0x0000CC, "Member 'BP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage::Temp_bool_IsClosed_Variable' has a wrong offset!");

// Function BP_PalCapturedCage.BP_PalCapturedCage_C.OnFinishRescue
// 0x0038 (0x0038 - 0x0000)
struct BP_PalCapturedCage_C_OnFinishRescue final
{
public:
	class AActor*                                 Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalInteractiveObjectIndicatorType            NewParam;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerController*                   CallFunc_GetPalPlayerController_ReturnValue;       // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PalPlayerController_C*              K2Node_DynamicCast_AsBP_Pal_Player_Controller;     // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCapturedCage_C_OnFinishRescue) == 0x000008, "Wrong alignment on BP_PalCapturedCage_C_OnFinishRescue");
static_assert(sizeof(BP_PalCapturedCage_C_OnFinishRescue) == 0x000038, "Wrong size on BP_PalCapturedCage_C_OnFinishRescue");
static_assert(offsetof(BP_PalCapturedCage_C_OnFinishRescue, Player) == 0x000000, "Member 'BP_PalCapturedCage_C_OnFinishRescue::Player' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_OnFinishRescue, NewParam) == 0x000008, "Member 'BP_PalCapturedCage_C_OnFinishRescue::NewParam' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_OnFinishRescue, K2Node_DynamicCast_AsPal_Player_Character) == 0x000010, "Member 'BP_PalCapturedCage_C_OnFinishRescue::K2Node_DynamicCast_AsPal_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_OnFinishRescue, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_PalCapturedCage_C_OnFinishRescue::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_OnFinishRescue, CallFunc_GetPalPlayerController_ReturnValue) == 0x000020, "Member 'BP_PalCapturedCage_C_OnFinishRescue::CallFunc_GetPalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_OnFinishRescue, K2Node_DynamicCast_AsBP_Pal_Player_Controller) == 0x000028, "Member 'BP_PalCapturedCage_C_OnFinishRescue::K2Node_DynamicCast_AsBP_Pal_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_OnFinishRescue, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'BP_PalCapturedCage_C_OnFinishRescue::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BP_PalCapturedCage.BP_PalCapturedCage_C.PlayDoorOpenAnime
// 0x0030 (0x0030 - 0x0000)
struct BP_PalCapturedCage_C_PlayDoorOpenAnime final
{
public:
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0000(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCapturedCage_C_PlayDoorOpenAnime) == 0x000008, "Wrong alignment on BP_PalCapturedCage_C_PlayDoorOpenAnime");
static_assert(sizeof(BP_PalCapturedCage_C_PlayDoorOpenAnime) == 0x000030, "Wrong size on BP_PalCapturedCage_C_PlayDoorOpenAnime");
static_assert(offsetof(BP_PalCapturedCage_C_PlayDoorOpenAnime, Temp_delegate_Variable) == 0x000000, "Member 'BP_PalCapturedCage_C_PlayDoorOpenAnime::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_PlayDoorOpenAnime, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_PalCapturedCage_C_PlayDoorOpenAnime::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_PlayDoorOpenAnime, CallFunc_PostEvent_ReturnValue) == 0x000020, "Member 'BP_PalCapturedCage_C_PlayDoorOpenAnime::CallFunc_PostEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_PlayDoorOpenAnime, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000028, "Member 'BP_PalCapturedCage_C_PlayDoorOpenAnime::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function BP_PalCapturedCage.BP_PalCapturedCage_C.SetupSpawnPal
// 0x00D0 (0x00D0 - 0x0000)
struct BP_PalCapturedCage_C_SetupSpawnPal final
{
public:
	class FName                                   CampSpawnerName;                                   // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalNPCManager*                         CallFunc_GetNPCManager_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalEnemyCampStatus                    CallFunc_GetEnemyCampStatus_ReturnValue;           // 0x0010(0x0028)(NoDestructor)
	class UPalNPCManager*                         CallFunc_GetNPCManager_ReturnValue_1;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalEnemyCampStatus                    K2Node_SetFieldsInStruct_StructOut;                // 0x0048(0x0028)(NoDestructor)
	class UPalNPCManager*                         CallFunc_GetNPCManager_ReturnValue_2;              // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalEnemyCampStatus                    CallFunc_GetEnemyCampStatus_ReturnValue_1;         // 0x0078(0x0028)(NoDestructor)
	class AActor*                                 CallFunc_GetParentActor_ReturnValue;               // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_NPCCampPresetBase_C*                K2Node_DynamicCast_AsBP_NPCCamp_Preset_Base;       // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x3];                                       // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCampSpawnerName_Key;                   // 0x00BC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetRewardKey_Key;                         // 0x00C4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCapturedCage_C_SetupSpawnPal) == 0x000008, "Wrong alignment on BP_PalCapturedCage_C_SetupSpawnPal");
static_assert(sizeof(BP_PalCapturedCage_C_SetupSpawnPal) == 0x0000D0, "Wrong size on BP_PalCapturedCage_C_SetupSpawnPal");
static_assert(offsetof(BP_PalCapturedCage_C_SetupSpawnPal, CampSpawnerName) == 0x000000, "Member 'BP_PalCapturedCage_C_SetupSpawnPal::CampSpawnerName' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_SetupSpawnPal, CallFunc_GetNPCManager_ReturnValue) == 0x000008, "Member 'BP_PalCapturedCage_C_SetupSpawnPal::CallFunc_GetNPCManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_SetupSpawnPal, CallFunc_GetEnemyCampStatus_ReturnValue) == 0x000010, "Member 'BP_PalCapturedCage_C_SetupSpawnPal::CallFunc_GetEnemyCampStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_SetupSpawnPal, CallFunc_GetNPCManager_ReturnValue_1) == 0x000038, "Member 'BP_PalCapturedCage_C_SetupSpawnPal::CallFunc_GetNPCManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_SetupSpawnPal, CallFunc_HasAuthority_ReturnValue) == 0x000040, "Member 'BP_PalCapturedCage_C_SetupSpawnPal::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_SetupSpawnPal, K2Node_SetFieldsInStruct_StructOut) == 0x000048, "Member 'BP_PalCapturedCage_C_SetupSpawnPal::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_SetupSpawnPal, CallFunc_GetNPCManager_ReturnValue_2) == 0x000070, "Member 'BP_PalCapturedCage_C_SetupSpawnPal::CallFunc_GetNPCManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_SetupSpawnPal, CallFunc_GetEnemyCampStatus_ReturnValue_1) == 0x000078, "Member 'BP_PalCapturedCage_C_SetupSpawnPal::CallFunc_GetEnemyCampStatus_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_SetupSpawnPal, CallFunc_GetParentActor_ReturnValue) == 0x0000A0, "Member 'BP_PalCapturedCage_C_SetupSpawnPal::CallFunc_GetParentActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_SetupSpawnPal, CallFunc_IsValid_ReturnValue) == 0x0000A8, "Member 'BP_PalCapturedCage_C_SetupSpawnPal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_SetupSpawnPal, K2Node_DynamicCast_AsBP_NPCCamp_Preset_Base) == 0x0000B0, "Member 'BP_PalCapturedCage_C_SetupSpawnPal::K2Node_DynamicCast_AsBP_NPCCamp_Preset_Base' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_SetupSpawnPal, K2Node_DynamicCast_bSuccess) == 0x0000B8, "Member 'BP_PalCapturedCage_C_SetupSpawnPal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_SetupSpawnPal, CallFunc_GetCampSpawnerName_Key) == 0x0000BC, "Member 'BP_PalCapturedCage_C_SetupSpawnPal::CallFunc_GetCampSpawnerName_Key' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_SetupSpawnPal, CallFunc_GetRewardKey_Key) == 0x0000C4, "Member 'BP_PalCapturedCage_C_SetupSpawnPal::CallFunc_GetRewardKey_Key' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_SetupSpawnPal, CallFunc_EqualEqual_NameName_ReturnValue) == 0x0000CC, "Member 'BP_PalCapturedCage_C_SetupSpawnPal::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");

// Function BP_PalCapturedCage.BP_PalCapturedCage_C.StartPlayerAnime
// 0x0120 (0x0120 - 0x0000)
struct BP_PalCapturedCage_C_StartPlayerAnime final
{
public:
	class AActor*                                 Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalInteractiveObjectIndicatorType            NewParam;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActionDynamicParameter                K2Node_MakeStruct_ActionDynamicParameter;          // 0x0030(0x00E0)()
	class UPalActionBase*                         CallFunc_PlayActionByTypeParameter_ReturnValue;    // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCapturedCage_C_StartPlayerAnime) == 0x000010, "Wrong alignment on BP_PalCapturedCage_C_StartPlayerAnime");
static_assert(sizeof(BP_PalCapturedCage_C_StartPlayerAnime) == 0x000120, "Wrong size on BP_PalCapturedCage_C_StartPlayerAnime");
static_assert(offsetof(BP_PalCapturedCage_C_StartPlayerAnime, Player) == 0x000000, "Member 'BP_PalCapturedCage_C_StartPlayerAnime::Player' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_StartPlayerAnime, NewParam) == 0x000008, "Member 'BP_PalCapturedCage_C_StartPlayerAnime::NewParam' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_StartPlayerAnime, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_PalCapturedCage_C_StartPlayerAnime::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_StartPlayerAnime, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000018, "Member 'BP_PalCapturedCage_C_StartPlayerAnime::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_StartPlayerAnime, K2Node_MakeStruct_ActionDynamicParameter) == 0x000030, "Member 'BP_PalCapturedCage_C_StartPlayerAnime::K2Node_MakeStruct_ActionDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_StartPlayerAnime, CallFunc_PlayActionByTypeParameter_ReturnValue) == 0x000110, "Member 'BP_PalCapturedCage_C_StartPlayerAnime::CallFunc_PlayActionByTypeParameter_ReturnValue' has a wrong offset!");

// Function BP_PalCapturedCage.BP_PalCapturedCage_C.StopPlayerAnime
// 0x0018 (0x0018 - 0x0000)
struct BP_PalCapturedCage_C_StopPlayerAnime final
{
public:
	class AActor*                                 Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalInteractiveObjectIndicatorType            NewParam;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCapturedCage_C_StopPlayerAnime) == 0x000008, "Wrong alignment on BP_PalCapturedCage_C_StopPlayerAnime");
static_assert(sizeof(BP_PalCapturedCage_C_StopPlayerAnime) == 0x000018, "Wrong size on BP_PalCapturedCage_C_StopPlayerAnime");
static_assert(offsetof(BP_PalCapturedCage_C_StopPlayerAnime, Player) == 0x000000, "Member 'BP_PalCapturedCage_C_StopPlayerAnime::Player' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_StopPlayerAnime, NewParam) == 0x000008, "Member 'BP_PalCapturedCage_C_StopPlayerAnime::NewParam' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_StopPlayerAnime, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_PalCapturedCage_C_StopPlayerAnime::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function BP_PalCapturedCage.BP_PalCapturedCage_C.GetCampSpawnerName
// 0x0028 (0x0028 - 0x0000)
struct BP_PalCapturedCage_C_GetCampSpawnerName final
{
public:
	class FName                                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetParentActor_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_NPCCampPresetBase_C*                K2Node_DynamicCast_AsBP_NPCCamp_Preset_Base;       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCampSpawnerName_Key;                   // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCapturedCage_C_GetCampSpawnerName) == 0x000008, "Wrong alignment on BP_PalCapturedCage_C_GetCampSpawnerName");
static_assert(sizeof(BP_PalCapturedCage_C_GetCampSpawnerName) == 0x000028, "Wrong size on BP_PalCapturedCage_C_GetCampSpawnerName");
static_assert(offsetof(BP_PalCapturedCage_C_GetCampSpawnerName, ReturnValue) == 0x000000, "Member 'BP_PalCapturedCage_C_GetCampSpawnerName::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_GetCampSpawnerName, CallFunc_GetParentActor_ReturnValue) == 0x000008, "Member 'BP_PalCapturedCage_C_GetCampSpawnerName::CallFunc_GetParentActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_GetCampSpawnerName, K2Node_DynamicCast_AsBP_NPCCamp_Preset_Base) == 0x000010, "Member 'BP_PalCapturedCage_C_GetCampSpawnerName::K2Node_DynamicCast_AsBP_NPCCamp_Preset_Base' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_GetCampSpawnerName, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_PalCapturedCage_C_GetCampSpawnerName::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalCapturedCage_C_GetCampSpawnerName, CallFunc_GetCampSpawnerName_Key) == 0x00001C, "Member 'BP_PalCapturedCage_C_GetCampSpawnerName::CallFunc_GetCampSpawnerName_Key' has a wrong offset!");

// Function BP_PalCapturedCage.BP_PalCapturedCage_C.GetIndicatorType
// 0x0001 (0x0001 - 0x0000)
struct BP_PalCapturedCage_C_GetIndicatorType final
{
public:
	EPalInteractiveObjectIndicatorType            ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCapturedCage_C_GetIndicatorType) == 0x000001, "Wrong alignment on BP_PalCapturedCage_C_GetIndicatorType");
static_assert(sizeof(BP_PalCapturedCage_C_GetIndicatorType) == 0x000001, "Wrong size on BP_PalCapturedCage_C_GetIndicatorType");
static_assert(offsetof(BP_PalCapturedCage_C_GetIndicatorType, ReturnValue) == 0x000000, "Member 'BP_PalCapturedCage_C_GetIndicatorType::ReturnValue' has a wrong offset!");

}

