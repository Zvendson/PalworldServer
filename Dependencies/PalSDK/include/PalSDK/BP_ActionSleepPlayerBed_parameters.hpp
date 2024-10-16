#pragma once

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.AttachBedCamera
// 0x0030 (0x0030 - 0x0000)
struct BP_ActionSleepPlayerBed_C_AttachBedCamera final
{
public:
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerBedCamera_C*                  CallFunc_FinishSpawningActor_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetViewTarget_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSleepPlayerBed_C_AttachBedCamera) == 0x000008, "Wrong alignment on BP_ActionSleepPlayerBed_C_AttachBedCamera");
static_assert(sizeof(BP_ActionSleepPlayerBed_C_AttachBedCamera) == 0x000030, "Wrong size on BP_ActionSleepPlayerBed_C_AttachBedCamera");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_AttachBedCamera, CallFunc_GetActionCharacter_ReturnValue) == 0x000000, "Member 'BP_ActionSleepPlayerBed_C_AttachBedCamera::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_AttachBedCamera, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000008, "Member 'BP_ActionSleepPlayerBed_C_AttachBedCamera::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_AttachBedCamera, CallFunc_IsLocallyControlled_ReturnValue) == 0x000010, "Member 'BP_ActionSleepPlayerBed_C_AttachBedCamera::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_AttachBedCamera, CallFunc_FinishSpawningActor_ReturnValue) == 0x000018, "Member 'BP_ActionSleepPlayerBed_C_AttachBedCamera::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_AttachBedCamera, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000020, "Member 'BP_ActionSleepPlayerBed_C_AttachBedCamera::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_AttachBedCamera, CallFunc_GetViewTarget_ReturnValue) == 0x000028, "Member 'BP_ActionSleepPlayerBed_C_AttachBedCamera::CallFunc_GetViewTarget_ReturnValue' has a wrong offset!");

// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.Check Sleep Loop
// 0x0030 (0x0030 - 0x0000)
struct BP_ActionSleepPlayerBed_C_Check_Sleep_Loop final
{
public:
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_GetMontage_Montage;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Montage_IsPlaying_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSleepPlayerBed_C_Check_Sleep_Loop) == 0x000008, "Wrong alignment on BP_ActionSleepPlayerBed_C_Check_Sleep_Loop");
static_assert(sizeof(BP_ActionSleepPlayerBed_C_Check_Sleep_Loop) == 0x000030, "Wrong size on BP_ActionSleepPlayerBed_C_Check_Sleep_Loop");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_Check_Sleep_Loop, Temp_bool_Has_Been_Initd_Variable) == 0x000000, "Member 'BP_ActionSleepPlayerBed_C_Check_Sleep_Loop::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_Check_Sleep_Loop, Temp_bool_IsClosed_Variable) == 0x000001, "Member 'BP_ActionSleepPlayerBed_C_Check_Sleep_Loop::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_Check_Sleep_Loop, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable) == 0x000002, "Member 'BP_ActionSleepPlayerBed_C_Check_Sleep_Loop::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_Check_Sleep_Loop, CallFunc_GetMontage_Montage) == 0x000008, "Member 'BP_ActionSleepPlayerBed_C_Check_Sleep_Loop::CallFunc_GetMontage_Montage' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_Check_Sleep_Loop, CallFunc_GetActionCharacter_ReturnValue) == 0x000010, "Member 'BP_ActionSleepPlayerBed_C_Check_Sleep_Loop::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_Check_Sleep_Loop, CallFunc_GetMainMesh_ReturnValue) == 0x000018, "Member 'BP_ActionSleepPlayerBed_C_Check_Sleep_Loop::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_Check_Sleep_Loop, CallFunc_GetAnimInstance_ReturnValue) == 0x000020, "Member 'BP_ActionSleepPlayerBed_C_Check_Sleep_Loop::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_Check_Sleep_Loop, CallFunc_Montage_IsPlaying_ReturnValue) == 0x000028, "Member 'BP_ActionSleepPlayerBed_C_Check_Sleep_Loop::CallFunc_Montage_IsPlaying_ReturnValue' has a wrong offset!");

// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.Detach Bed Camera
// 0x00B0 (0x00B0 - 0x0000)
struct BP_ActionSleepPlayerBed_C_Detach_Bed_Camera final
{
public:
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetRightVector_ReturnValue;               // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_RotatorFromAxisAndAngle_ReturnValue;      // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_RotatorFromAxisAndAngle_ReturnValue_1;    // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue_1;            // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocalControlActor_ReturnValue;          // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSleepPlayerBed_C_Detach_Bed_Camera) == 0x000008, "Wrong alignment on BP_ActionSleepPlayerBed_C_Detach_Bed_Camera");
static_assert(sizeof(BP_ActionSleepPlayerBed_C_Detach_Bed_Camera) == 0x0000B0, "Wrong size on BP_ActionSleepPlayerBed_C_Detach_Bed_Camera");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_Detach_Bed_Camera, CallFunc_GetActionCharacter_ReturnValue) == 0x000000, "Member 'BP_ActionSleepPlayerBed_C_Detach_Bed_Camera::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_Detach_Bed_Camera, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000008, "Member 'BP_ActionSleepPlayerBed_C_Detach_Bed_Camera::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_Detach_Bed_Camera, CallFunc_GetRightVector_ReturnValue) == 0x000020, "Member 'BP_ActionSleepPlayerBed_C_Detach_Bed_Camera::CallFunc_GetRightVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_Detach_Bed_Camera, CallFunc_RotatorFromAxisAndAngle_ReturnValue) == 0x000038, "Member 'BP_ActionSleepPlayerBed_C_Detach_Bed_Camera::CallFunc_RotatorFromAxisAndAngle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_Detach_Bed_Camera, CallFunc_RotatorFromAxisAndAngle_ReturnValue_1) == 0x000050, "Member 'BP_ActionSleepPlayerBed_C_Detach_Bed_Camera::CallFunc_RotatorFromAxisAndAngle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_Detach_Bed_Camera, CallFunc_ComposeRotators_ReturnValue) == 0x000068, "Member 'BP_ActionSleepPlayerBed_C_Detach_Bed_Camera::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_Detach_Bed_Camera, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000080, "Member 'BP_ActionSleepPlayerBed_C_Detach_Bed_Camera::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_Detach_Bed_Camera, CallFunc_ComposeRotators_ReturnValue_1) == 0x000088, "Member 'BP_ActionSleepPlayerBed_C_Detach_Bed_Camera::CallFunc_ComposeRotators_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_Detach_Bed_Camera, CallFunc_GetActionCharacter_ReturnValue_1) == 0x0000A0, "Member 'BP_ActionSleepPlayerBed_C_Detach_Bed_Camera::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_Detach_Bed_Camera, CallFunc_IsLocalControlActor_ReturnValue) == 0x0000A8, "Member 'BP_ActionSleepPlayerBed_C_Detach_Bed_Camera::CallFunc_IsLocalControlActor_ReturnValue' has a wrong offset!");

// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.Disable Movement
// 0x0050 (0x0050 - 0x0000)
struct BP_ActionSleepPlayerBed_C_Disable_Movement final
{
public:
	bool                                          Disable;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerController*                   PalPlayerController;                               // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CharacterMovementComponent;                        // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerController*                   K2Node_DynamicCast_AsPal_Player_Controller;        // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSleepPlayerBed_C_Disable_Movement) == 0x000008, "Wrong alignment on BP_ActionSleepPlayerBed_C_Disable_Movement");
static_assert(sizeof(BP_ActionSleepPlayerBed_C_Disable_Movement) == 0x000050, "Wrong size on BP_ActionSleepPlayerBed_C_Disable_Movement");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_Disable_Movement, Disable) == 0x000000, "Member 'BP_ActionSleepPlayerBed_C_Disable_Movement::Disable' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_Disable_Movement, PalPlayerController) == 0x000008, "Member 'BP_ActionSleepPlayerBed_C_Disable_Movement::PalPlayerController' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_Disable_Movement, CharacterMovementComponent) == 0x000010, "Member 'BP_ActionSleepPlayerBed_C_Disable_Movement::CharacterMovementComponent' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_Disable_Movement, CallFunc_GetActionCharacter_ReturnValue) == 0x000018, "Member 'BP_ActionSleepPlayerBed_C_Disable_Movement::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_Disable_Movement, CallFunc_GetController_ReturnValue) == 0x000020, "Member 'BP_ActionSleepPlayerBed_C_Disable_Movement::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_Disable_Movement, K2Node_DynamicCast_AsPal_Player_Controller) == 0x000028, "Member 'BP_ActionSleepPlayerBed_C_Disable_Movement::K2Node_DynamicCast_AsPal_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_Disable_Movement, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_ActionSleepPlayerBed_C_Disable_Movement::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_Disable_Movement, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000038, "Member 'BP_ActionSleepPlayerBed_C_Disable_Movement::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_Disable_Movement, CallFunc_GetComponentByClass_ReturnValue) == 0x000040, "Member 'BP_ActionSleepPlayerBed_C_Disable_Movement::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_Disable_Movement, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'BP_ActionSleepPlayerBed_C_Disable_Movement::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.DisableInteract
// 0x0020 (0x0020 - 0x0000)
struct BP_ActionSleepPlayerBed_C_DisableInteract final
{
public:
	bool                                          Disable;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalInteractComponent*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSleepPlayerBed_C_DisableInteract) == 0x000008, "Wrong alignment on BP_ActionSleepPlayerBed_C_DisableInteract");
static_assert(sizeof(BP_ActionSleepPlayerBed_C_DisableInteract) == 0x000020, "Wrong size on BP_ActionSleepPlayerBed_C_DisableInteract");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_DisableInteract, Disable) == 0x000000, "Member 'BP_ActionSleepPlayerBed_C_DisableInteract::Disable' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_DisableInteract, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionSleepPlayerBed_C_DisableInteract::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_DisableInteract, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'BP_ActionSleepPlayerBed_C_DisableInteract::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_DisableInteract, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'BP_ActionSleepPlayerBed_C_DisableInteract::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.DisableLocalPlayerInput
// 0x0030 (0x0030 - 0x0000)
struct BP_ActionSleepPlayerBed_C_DisableLocalPlayerInput final
{
public:
	bool                                          Disable;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PalPlayerController_C*              K2Node_DynamicCast_AsBP_Pal_Player_Controller;     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSleepPlayerBed_C_DisableLocalPlayerInput) == 0x000008, "Wrong alignment on BP_ActionSleepPlayerBed_C_DisableLocalPlayerInput");
static_assert(sizeof(BP_ActionSleepPlayerBed_C_DisableLocalPlayerInput) == 0x000030, "Wrong size on BP_ActionSleepPlayerBed_C_DisableLocalPlayerInput");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_DisableLocalPlayerInput, Disable) == 0x000000, "Member 'BP_ActionSleepPlayerBed_C_DisableLocalPlayerInput::Disable' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_DisableLocalPlayerInput, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionSleepPlayerBed_C_DisableLocalPlayerInput::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_DisableLocalPlayerInput, CallFunc_IsLocallyControlled_ReturnValue) == 0x000010, "Member 'BP_ActionSleepPlayerBed_C_DisableLocalPlayerInput::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_DisableLocalPlayerInput, CallFunc_GetController_ReturnValue) == 0x000018, "Member 'BP_ActionSleepPlayerBed_C_DisableLocalPlayerInput::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_DisableLocalPlayerInput, K2Node_DynamicCast_AsBP_Pal_Player_Controller) == 0x000020, "Member 'BP_ActionSleepPlayerBed_C_DisableLocalPlayerInput::K2Node_DynamicCast_AsBP_Pal_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_DisableLocalPlayerInput, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_ActionSleepPlayerBed_C_DisableLocalPlayerInput::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.DisableShooter
// 0x0028 (0x0028 - 0x0000)
struct BP_ActionSleepPlayerBed_C_DisableShooter final
{
public:
	bool                                          Disable;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalShooterFlagContainerPriority              Priority;                                          // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalShooterComponent*                   Shooter;                                           // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSleepPlayerBed_C_DisableShooter) == 0x000008, "Wrong alignment on BP_ActionSleepPlayerBed_C_DisableShooter");
static_assert(sizeof(BP_ActionSleepPlayerBed_C_DisableShooter) == 0x000028, "Wrong size on BP_ActionSleepPlayerBed_C_DisableShooter");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_DisableShooter, Disable) == 0x000000, "Member 'BP_ActionSleepPlayerBed_C_DisableShooter::Disable' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_DisableShooter, Priority) == 0x000001, "Member 'BP_ActionSleepPlayerBed_C_DisableShooter::Priority' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_DisableShooter, Shooter) == 0x000008, "Member 'BP_ActionSleepPlayerBed_C_DisableShooter::Shooter' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_DisableShooter, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_ActionSleepPlayerBed_C_DisableShooter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_DisableShooter, CallFunc_GetActionCharacter_ReturnValue) == 0x000018, "Member 'BP_ActionSleepPlayerBed_C_DisableShooter::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_DisableShooter, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'BP_ActionSleepPlayerBed_C_DisableShooter::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.ExecuteUbergraph_BP_ActionSleepPlayerBed
// 0x0560 (0x0560 - 0x0000)
struct BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0014(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_1;                          // 0x0024(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36[0x2];                                       // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_NotifyName_4;                   // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTime;                            // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0050(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x00C8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue;         // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B1[0x7];                                      // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_3;         // 0x01B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_4;         // 0x01C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_1;        // 0x01D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_GetMontage_Montage;                       // 0x01D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_5;         // 0x01E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_GetMontage_Montage_1;                     // 0x01E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_GetMontage_Montage_2;                     // 0x01F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x0200(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_209[0x7];                                      // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_6;         // 0x0210(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_GetMontage_Montage_3;                     // 0x0218(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_7;         // 0x0220(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_GetMontage_Montage_4;                     // 0x0228(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_GetMontage_Montage_5;                     // 0x0230(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalTimeManager*                        CallFunc_GetTimeManager_ReturnValue;               // 0x0238(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_8;         // 0x0240(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalTimeManager*                        CallFunc_GetTimeManager_ReturnValue_1;             // 0x0248(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character;         // 0x0250(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_259[0x7];                                      // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_9;         // 0x0260(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character_1;       // 0x0268(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_271[0x7];                                      // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x0278(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue_1;              // 0x0280(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameter_FadeWidget*    CallFunc_SpawnObject_ReturnValue;                  // 0x0288(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate;              // 0x0290(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_1;            // 0x02A0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_10;        // 0x02B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue_2;              // 0x02B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_11;        // 0x02C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalTimeManager*                        CallFunc_GetTimeManager_ReturnValue_2;             // 0x02C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x02D0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_12;        // 0x02E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue_1;                // 0x02E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_GetMontage_Montage_6;                     // 0x02F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x02F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Montage_IsPlaying_ReturnValue;            // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_301[0x3];                                      // 0x0301(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_NotifyName_1;                   // 0x0304(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x030C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEvent_ReturnValue_1;                  // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_314[0x4];                                      // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_13;        // 0x0318(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_321[0x7];                                      // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalTimeManager*                        CallFunc_GetTimeManager_ReturnValue_3;             // 0x0328(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0330(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0340(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_14;        // 0x0350(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_1;        // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_359[0x3];                                      // 0x0359(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_5;            // 0x035C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x036C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36D[0x3];                                      // 0x036D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_NotifyName_2;                   // 0x0370(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_15;        // 0x0378(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_2;        // 0x0380(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_381[0x7];                                      // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_16;        // 0x0388(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_3;        // 0x0390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_391[0x7];                                      // 0x0391(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalTimeManager*                        CallFunc_GetTimeManager_ReturnValue_4;             // 0x0398(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x03A0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_17;        // 0x03B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_18;        // 0x03B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x03C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C1[0x7];                                      // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character_2;       // 0x03C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x03D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D1[0x7];                                      // 0x03D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalTimeManager*                        CallFunc_GetTimeManager_ReturnValue_5;             // 0x03D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_7;            // 0x03E0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_19;        // 0x03F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character_3;       // 0x03F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0400(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_401[0x7];                                      // 0x0401(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalTimeManager*                        CallFunc_GetTimeManager_ReturnValue_6;             // 0x0408(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_20;        // 0x0410(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0418(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0430(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0434(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0438(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43C[0x4];                                      // 0x043C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0440(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x0458(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_459[0x7];                                      // 0x0459(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0460(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x0468(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerController*                   K2Node_DynamicCast_AsPal_Player_Controller;        // 0x0478(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0480(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_481[0x7];                                      // 0x0481(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_21;        // 0x0488(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_4;        // 0x0490(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSleepLooping_ReturnValue;               // 0x0491(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0492(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_493[0x1];                                      // 0x0493(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_NotifyName_3;                   // 0x0494(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x049C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49D[0x3];                                      // 0x049D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue_1;   // 0x04A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerController*                   K2Node_DynamicCast_AsPal_Player_Controller_1;      // 0x04A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x04B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B1[0x3];                                      // 0x04B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x04B4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C4[0x4];                                      // 0x04C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x04C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x04D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x04D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D2[0x6];                                      // 0x04D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_1;                   // 0x04D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x04E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E1[0x7];                                      // 0x04E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue_2;   // 0x04E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerController*                   K2Node_DynamicCast_AsPal_Player_Controller_2;      // 0x04F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x04F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F9[0x3];                                      // 0x04F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_10;           // 0x04FC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50C[0x4];                                      // 0x050C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetControllerLeftStickValue_ReturnValue;  // 0x0510(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize2D_ReturnValue;                      // 0x0520(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetKeyboardMoveValue_ReturnValue;         // 0x0528(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize2D_ReturnValue_1;                    // 0x0538(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMax_ReturnValue;                         // 0x0540(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0548(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_549[0x3];                                      // 0x0549(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_VariableSet_FadeInTime_ImplicitCast;        // 0x054C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_FadeOutTime_ImplicitCast;       // 0x0550(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed) == 0x000010, "Wrong alignment on BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed");
static_assert(sizeof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed) == 0x000560, "Wrong size on BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, EntryPoint) == 0x000000, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_CustomEvent_NotifyName) == 0x000004, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, Temp_name_Variable) == 0x00000C, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, Temp_delegate_Variable) == 0x000014, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, Temp_delegate_Variable_1) == 0x000024, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::Temp_delegate_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, Temp_bool_IsClosed_Variable) == 0x000034, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, Temp_bool_Has_Been_Initd_Variable) == 0x000035, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_CustomEvent_NotifyName_4) == 0x000038, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_CustomEvent_NotifyName_4' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, Temp_bool_Has_Been_Initd_Variable_1) == 0x000040, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_Event_DeltaTime) == 0x000044, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetActionCharacter_ReturnValue) == 0x000048, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetTransform_ReturnValue) == 0x000050, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetActionCharacter_ReturnValue_1) == 0x0000B0, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetActionCharacter_ReturnValue_2) == 0x0000B8, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_HasAuthority_ReturnValue) == 0x0000C0, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_K2_SetActorTransform_SweepHitResult) == 0x0000C8, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_K2_SetActorTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_K2_SetActorTransform_ReturnValue) == 0x0001B0, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_K2_SetActorTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetActionCharacter_ReturnValue_3) == 0x0001B8, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetActionCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetActionCharacter_ReturnValue_4) == 0x0001C0, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetActionCharacter_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetComponentByClass_ReturnValue) == 0x0001C8, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetComponentByClass_ReturnValue_1) == 0x0001D0, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetMontage_Montage) == 0x0001D8, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetMontage_Montage' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetActionCharacter_ReturnValue_5) == 0x0001E0, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetActionCharacter_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetMontage_Montage_1) == 0x0001E8, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetMontage_Montage_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetMainMesh_ReturnValue) == 0x0001F0, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetMontage_Montage_2) == 0x0001F8, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetMontage_Montage_2' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_CreateProxyObjectForPlayMontage_ReturnValue) == 0x000200, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_CreateProxyObjectForPlayMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_IsValid_ReturnValue) == 0x000208, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetActionCharacter_ReturnValue_6) == 0x000210, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetActionCharacter_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetMontage_Montage_3) == 0x000218, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetMontage_Montage_3' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetActionCharacter_ReturnValue_7) == 0x000220, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetActionCharacter_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetMontage_Montage_4) == 0x000228, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetMontage_Montage_4' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetMontage_Montage_5) == 0x000230, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetMontage_Montage_5' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetTimeManager_ReturnValue) == 0x000238, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetTimeManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetActionCharacter_ReturnValue_8) == 0x000240, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetActionCharacter_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetTimeManager_ReturnValue_1) == 0x000248, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetTimeManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_DynamicCast_AsPal_Player_Character) == 0x000250, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_DynamicCast_AsPal_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_DynamicCast_bSuccess) == 0x000258, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetActionCharacter_ReturnValue_9) == 0x000260, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetActionCharacter_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_DynamicCast_AsPal_Player_Character_1) == 0x000268, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_DynamicCast_AsPal_Player_Character_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_DynamicCast_bSuccess_1) == 0x000270, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetHUDService_ReturnValue) == 0x000278, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetHUDService_ReturnValue_1) == 0x000280, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetHUDService_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_SpawnObject_ReturnValue) == 0x000288, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_CreateDelegate_OutputDelegate) == 0x000290, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_CreateDelegate_OutputDelegate_1) == 0x0002A0, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetActionCharacter_ReturnValue_10) == 0x0002B0, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetActionCharacter_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetHUDService_ReturnValue_2) == 0x0002B8, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetHUDService_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetActionCharacter_ReturnValue_11) == 0x0002C0, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetActionCharacter_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetTimeManager_ReturnValue_2) == 0x0002C8, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetTimeManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_CreateDelegate_OutputDelegate_2) == 0x0002D0, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetActionCharacter_ReturnValue_12) == 0x0002E0, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetActionCharacter_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetMainMesh_ReturnValue_1) == 0x0002E8, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetMainMesh_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetMontage_Montage_6) == 0x0002F0, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetMontage_Montage_6' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetAnimInstance_ReturnValue) == 0x0002F8, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_Montage_IsPlaying_ReturnValue) == 0x000300, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_Montage_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_CustomEvent_NotifyName_1) == 0x000304, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_CustomEvent_NotifyName_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_PostEvent_ReturnValue) == 0x00030C, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_PostEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_PostEvent_ReturnValue_1) == 0x000310, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_PostEvent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetActionCharacter_ReturnValue_13) == 0x000318, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetActionCharacter_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_IsLocallyControlled_ReturnValue) == 0x000320, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetTimeManager_ReturnValue_3) == 0x000328, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetTimeManager_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_CreateDelegate_OutputDelegate_3) == 0x000330, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_CreateDelegate_OutputDelegate_4) == 0x000340, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetActionCharacter_ReturnValue_14) == 0x000350, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetActionCharacter_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_IsLocallyControlled_ReturnValue_1) == 0x000358, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_IsLocallyControlled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_CreateDelegate_OutputDelegate_5) == 0x00035C, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable) == 0x00036C, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_CustomEvent_NotifyName_2) == 0x000370, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_CustomEvent_NotifyName_2' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetActionCharacter_ReturnValue_15) == 0x000378, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetActionCharacter_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_IsLocallyControlled_ReturnValue_2) == 0x000380, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_IsLocallyControlled_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetActionCharacter_ReturnValue_16) == 0x000388, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetActionCharacter_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_IsLocallyControlled_ReturnValue_3) == 0x000390, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_IsLocallyControlled_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetTimeManager_ReturnValue_4) == 0x000398, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetTimeManager_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_CreateDelegate_OutputDelegate_6) == 0x0003A0, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetActionCharacter_ReturnValue_17) == 0x0003B0, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetActionCharacter_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetActionCharacter_ReturnValue_18) == 0x0003B8, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetActionCharacter_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_HasAuthority_ReturnValue_1) == 0x0003C0, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_DynamicCast_AsPal_Player_Character_2) == 0x0003C8, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_DynamicCast_AsPal_Player_Character_2' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_DynamicCast_bSuccess_2) == 0x0003D0, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetTimeManager_ReturnValue_5) == 0x0003D8, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetTimeManager_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_CreateDelegate_OutputDelegate_7) == 0x0003E0, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetActionCharacter_ReturnValue_19) == 0x0003F0, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetActionCharacter_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_DynamicCast_AsPal_Player_Character_3) == 0x0003F8, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_DynamicCast_AsPal_Player_Character_3' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_DynamicCast_bSuccess_3) == 0x000400, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetTimeManager_ReturnValue_6) == 0x000408, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetTimeManager_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetActionCharacter_ReturnValue_20) == 0x000410, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetActionCharacter_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000418, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_BreakRotator_Roll) == 0x000430, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_BreakRotator_Pitch) == 0x000434, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_BreakRotator_Yaw) == 0x000438, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_MakeRotator_ReturnValue) == 0x000440, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_K2_SetActorRotation_ReturnValue) == 0x000458, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000460, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_CreateDelegate_OutputDelegate_8) == 0x000468, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_DynamicCast_AsPal_Player_Controller) == 0x000478, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_DynamicCast_AsPal_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_DynamicCast_bSuccess_4) == 0x000480, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetActionCharacter_ReturnValue_21) == 0x000488, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetActionCharacter_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_IsLocallyControlled_ReturnValue_4) == 0x000490, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_IsLocallyControlled_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_IsSleepLooping_ReturnValue) == 0x000491, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_IsSleepLooping_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_BooleanAND_ReturnValue) == 0x000492, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_CustomEvent_NotifyName_3) == 0x000494, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_CustomEvent_NotifyName_3' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_BooleanAND_ReturnValue_1) == 0x00049C, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetLocalPlayerController_ReturnValue_1) == 0x0004A0, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetLocalPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_DynamicCast_AsPal_Player_Controller_1) == 0x0004A8, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_DynamicCast_AsPal_Player_Controller_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_DynamicCast_bSuccess_5) == 0x0004B0, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_CreateDelegate_OutputDelegate_9) == 0x0004B4, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetPalmi_ReturnValue) == 0x0004C8, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_IsValid_ReturnValue_1) == 0x0004D0, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, Temp_bool_IsClosed_Variable_1) == 0x0004D1, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetPalmi_ReturnValue_1) == 0x0004D8, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetPalmi_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_IsValid_ReturnValue_2) == 0x0004E0, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetLocalPlayerController_ReturnValue_2) == 0x0004E8, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetLocalPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_DynamicCast_AsPal_Player_Controller_2) == 0x0004F0, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_DynamicCast_AsPal_Player_Controller_2' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_DynamicCast_bSuccess_6) == 0x0004F8, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_CreateDelegate_OutputDelegate_10) == 0x0004FC, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetControllerLeftStickValue_ReturnValue) == 0x000510, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetControllerLeftStickValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_VSize2D_ReturnValue) == 0x000520, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_VSize2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_GetKeyboardMoveValue_ReturnValue) == 0x000528, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_GetKeyboardMoveValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_VSize2D_ReturnValue_1) == 0x000538, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_VSize2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_FMax_ReturnValue) == 0x000540, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000548, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_VariableSet_FadeInTime_ImplicitCast) == 0x00054C, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_VariableSet_FadeInTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed, K2Node_VariableSet_FadeOutTime_ImplicitCast) == 0x000550, "Member 'BP_ActionSleepPlayerBed_C_ExecuteUbergraph_BP_ActionSleepPlayerBed::K2Node_VariableSet_FadeOutTime_ImplicitCast' has a wrong offset!");

// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.FullRecoveryHPAll
// 0x0098 (0x0098 - 0x0000)
struct BP_ActionSleepPlayerBed_C_FullRecoveryHPAll final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerController*                   K2Node_DynamicCast_AsPal_Player_Controller;        // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_OtomoPalHolderComponent_C*          CallFunc_GetComponentByClass_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UPalIndividualCharacterSlot*>    CallFunc_GetSlots_Slots;                           // 0x0050(0x0010)(ReferenceParm)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterSlot*            CallFunc_Array_Get_Item;                           // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetHandle_ReturnValue;                    // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSleepPlayerBed_C_FullRecoveryHPAll) == 0x000008, "Wrong alignment on BP_ActionSleepPlayerBed_C_FullRecoveryHPAll");
static_assert(sizeof(BP_ActionSleepPlayerBed_C_FullRecoveryHPAll) == 0x000098, "Wrong size on BP_ActionSleepPlayerBed_C_FullRecoveryHPAll");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_FullRecoveryHPAll, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_ActionSleepPlayerBed_C_FullRecoveryHPAll::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_FullRecoveryHPAll, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_ActionSleepPlayerBed_C_FullRecoveryHPAll::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_FullRecoveryHPAll, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_ActionSleepPlayerBed_C_FullRecoveryHPAll::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_FullRecoveryHPAll, CallFunc_GetActionCharacter_ReturnValue) == 0x000010, "Member 'BP_ActionSleepPlayerBed_C_FullRecoveryHPAll::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_FullRecoveryHPAll, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000018, "Member 'BP_ActionSleepPlayerBed_C_FullRecoveryHPAll::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_FullRecoveryHPAll, CallFunc_GetController_ReturnValue) == 0x000020, "Member 'BP_ActionSleepPlayerBed_C_FullRecoveryHPAll::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_FullRecoveryHPAll, CallFunc_HasAuthority_ReturnValue) == 0x000028, "Member 'BP_ActionSleepPlayerBed_C_FullRecoveryHPAll::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_FullRecoveryHPAll, K2Node_DynamicCast_AsPal_Player_Controller) == 0x000030, "Member 'BP_ActionSleepPlayerBed_C_FullRecoveryHPAll::K2Node_DynamicCast_AsPal_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_FullRecoveryHPAll, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_ActionSleepPlayerBed_C_FullRecoveryHPAll::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_FullRecoveryHPAll, CallFunc_GetComponentByClass_ReturnValue) == 0x000040, "Member 'BP_ActionSleepPlayerBed_C_FullRecoveryHPAll::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_FullRecoveryHPAll, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000048, "Member 'BP_ActionSleepPlayerBed_C_FullRecoveryHPAll::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_FullRecoveryHPAll, CallFunc_GetSlots_Slots) == 0x000050, "Member 'BP_ActionSleepPlayerBed_C_FullRecoveryHPAll::CallFunc_GetSlots_Slots' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_FullRecoveryHPAll, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000060, "Member 'BP_ActionSleepPlayerBed_C_FullRecoveryHPAll::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_FullRecoveryHPAll, CallFunc_Array_Get_Item) == 0x000068, "Member 'BP_ActionSleepPlayerBed_C_FullRecoveryHPAll::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_FullRecoveryHPAll, CallFunc_GetHandle_ReturnValue) == 0x000070, "Member 'BP_ActionSleepPlayerBed_C_FullRecoveryHPAll::CallFunc_GetHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_FullRecoveryHPAll, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'BP_ActionSleepPlayerBed_C_FullRecoveryHPAll::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_FullRecoveryHPAll, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000080, "Member 'BP_ActionSleepPlayerBed_C_FullRecoveryHPAll::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_FullRecoveryHPAll, CallFunc_IsValid_ReturnValue_1) == 0x000088, "Member 'BP_ActionSleepPlayerBed_C_FullRecoveryHPAll::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_FullRecoveryHPAll, CallFunc_Array_Length_ReturnValue) == 0x00008C, "Member 'BP_ActionSleepPlayerBed_C_FullRecoveryHPAll::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_FullRecoveryHPAll, CallFunc_Less_IntInt_ReturnValue) == 0x000090, "Member 'BP_ActionSleepPlayerBed_C_FullRecoveryHPAll::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.GetMontage
// 0x0030 (0x0030 - 0x0000)
struct BP_ActionSleepPlayerBed_C_GetMontage final
{
public:
	EPalGeneralMontageType                        GeneralMontage;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           Montage;                                           // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_Map_Find_Value;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSleepPlayerBed_C_GetMontage) == 0x000008, "Wrong alignment on BP_ActionSleepPlayerBed_C_GetMontage");
static_assert(sizeof(BP_ActionSleepPlayerBed_C_GetMontage) == 0x000030, "Wrong size on BP_ActionSleepPlayerBed_C_GetMontage");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_GetMontage, GeneralMontage) == 0x000000, "Member 'BP_ActionSleepPlayerBed_C_GetMontage::GeneralMontage' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_GetMontage, Montage) == 0x000008, "Member 'BP_ActionSleepPlayerBed_C_GetMontage::Montage' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_GetMontage, CallFunc_GetActionCharacter_ReturnValue) == 0x000010, "Member 'BP_ActionSleepPlayerBed_C_GetMontage::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_GetMontage, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'BP_ActionSleepPlayerBed_C_GetMontage::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_GetMontage, CallFunc_Map_Find_Value) == 0x000020, "Member 'BP_ActionSleepPlayerBed_C_GetMontage::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_GetMontage, CallFunc_Map_Find_ReturnValue) == 0x000028, "Member 'BP_ActionSleepPlayerBed_C_GetMontage::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.IsPartyFullRecoverd
// 0x0048 (0x0048 - 0x0000)
struct BP_ActionSleepPlayerBed_C_IsPartyFullRecoverd final
{
public:
	bool                                          Completed;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsHPFullRecovered_ReturnValue;            // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsHPFullRecovered_ReturnValue_1;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSleepPlayerBed_C_IsPartyFullRecoverd) == 0x000008, "Wrong alignment on BP_ActionSleepPlayerBed_C_IsPartyFullRecoverd");
static_assert(sizeof(BP_ActionSleepPlayerBed_C_IsPartyFullRecoverd) == 0x000048, "Wrong size on BP_ActionSleepPlayerBed_C_IsPartyFullRecoverd");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_IsPartyFullRecoverd, Completed) == 0x000000, "Member 'BP_ActionSleepPlayerBed_C_IsPartyFullRecoverd::Completed' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_IsPartyFullRecoverd, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_ActionSleepPlayerBed_C_IsPartyFullRecoverd::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_IsPartyFullRecoverd, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_ActionSleepPlayerBed_C_IsPartyFullRecoverd::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_IsPartyFullRecoverd, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_ActionSleepPlayerBed_C_IsPartyFullRecoverd::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_IsPartyFullRecoverd, CallFunc_GetActionCharacter_ReturnValue) == 0x000010, "Member 'BP_ActionSleepPlayerBed_C_IsPartyFullRecoverd::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_IsPartyFullRecoverd, CallFunc_Array_Get_Item) == 0x000018, "Member 'BP_ActionSleepPlayerBed_C_IsPartyFullRecoverd::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_IsPartyFullRecoverd, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'BP_ActionSleepPlayerBed_C_IsPartyFullRecoverd::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_IsPartyFullRecoverd, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_ActionSleepPlayerBed_C_IsPartyFullRecoverd::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_IsPartyFullRecoverd, CallFunc_IsHPFullRecovered_ReturnValue) == 0x000029, "Member 'BP_ActionSleepPlayerBed_C_IsPartyFullRecoverd::CallFunc_IsHPFullRecovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_IsPartyFullRecoverd, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000030, "Member 'BP_ActionSleepPlayerBed_C_IsPartyFullRecoverd::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_IsPartyFullRecoverd, CallFunc_IsHPFullRecovered_ReturnValue_1) == 0x000038, "Member 'BP_ActionSleepPlayerBed_C_IsPartyFullRecoverd::CallFunc_IsHPFullRecovered_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_IsPartyFullRecoverd, CallFunc_Array_Length_ReturnValue) == 0x00003C, "Member 'BP_ActionSleepPlayerBed_C_IsPartyFullRecoverd::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_IsPartyFullRecoverd, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'BP_ActionSleepPlayerBed_C_IsPartyFullRecoverd::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.Movement Set Active
// 0x0020 (0x0020 - 0x0000)
struct BP_ActionSleepPlayerBed_C_Movement_Set_Active final
{
public:
	bool                                          Active;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPawnMovementComponent*                 CallFunc_GetMovementComponent_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSleepPlayerBed_C_Movement_Set_Active) == 0x000008, "Wrong alignment on BP_ActionSleepPlayerBed_C_Movement_Set_Active");
static_assert(sizeof(BP_ActionSleepPlayerBed_C_Movement_Set_Active) == 0x000020, "Wrong size on BP_ActionSleepPlayerBed_C_Movement_Set_Active");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_Movement_Set_Active, Active) == 0x000000, "Member 'BP_ActionSleepPlayerBed_C_Movement_Set_Active::Active' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_Movement_Set_Active, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionSleepPlayerBed_C_Movement_Set_Active::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_Movement_Set_Active, CallFunc_GetMovementComponent_ReturnValue) == 0x000010, "Member 'BP_ActionSleepPlayerBed_C_Movement_Set_Active::CallFunc_GetMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_Movement_Set_Active, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'BP_ActionSleepPlayerBed_C_Movement_Set_Active::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.OnBlendOut_EE77CE3D437B303B4A7DF5B8A225C124
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionSleepPlayerBed_C_OnBlendOut_EE77CE3D437B303B4A7DF5B8A225C124 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSleepPlayerBed_C_OnBlendOut_EE77CE3D437B303B4A7DF5B8A225C124) == 0x000004, "Wrong alignment on BP_ActionSleepPlayerBed_C_OnBlendOut_EE77CE3D437B303B4A7DF5B8A225C124");
static_assert(sizeof(BP_ActionSleepPlayerBed_C_OnBlendOut_EE77CE3D437B303B4A7DF5B8A225C124) == 0x000008, "Wrong size on BP_ActionSleepPlayerBed_C_OnBlendOut_EE77CE3D437B303B4A7DF5B8A225C124");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_OnBlendOut_EE77CE3D437B303B4A7DF5B8A225C124, NotifyName) == 0x000000, "Member 'BP_ActionSleepPlayerBed_C_OnBlendOut_EE77CE3D437B303B4A7DF5B8A225C124::NotifyName' has a wrong offset!");

// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.OnCompleted_EE77CE3D437B303B4A7DF5B8A225C124
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionSleepPlayerBed_C_OnCompleted_EE77CE3D437B303B4A7DF5B8A225C124 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSleepPlayerBed_C_OnCompleted_EE77CE3D437B303B4A7DF5B8A225C124) == 0x000004, "Wrong alignment on BP_ActionSleepPlayerBed_C_OnCompleted_EE77CE3D437B303B4A7DF5B8A225C124");
static_assert(sizeof(BP_ActionSleepPlayerBed_C_OnCompleted_EE77CE3D437B303B4A7DF5B8A225C124) == 0x000008, "Wrong size on BP_ActionSleepPlayerBed_C_OnCompleted_EE77CE3D437B303B4A7DF5B8A225C124");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_OnCompleted_EE77CE3D437B303B4A7DF5B8A225C124, NotifyName) == 0x000000, "Member 'BP_ActionSleepPlayerBed_C_OnCompleted_EE77CE3D437B303B4A7DF5B8A225C124::NotifyName' has a wrong offset!");

// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.OnInterrupted_EE77CE3D437B303B4A7DF5B8A225C124
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionSleepPlayerBed_C_OnInterrupted_EE77CE3D437B303B4A7DF5B8A225C124 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSleepPlayerBed_C_OnInterrupted_EE77CE3D437B303B4A7DF5B8A225C124) == 0x000004, "Wrong alignment on BP_ActionSleepPlayerBed_C_OnInterrupted_EE77CE3D437B303B4A7DF5B8A225C124");
static_assert(sizeof(BP_ActionSleepPlayerBed_C_OnInterrupted_EE77CE3D437B303B4A7DF5B8A225C124) == 0x000008, "Wrong size on BP_ActionSleepPlayerBed_C_OnInterrupted_EE77CE3D437B303B4A7DF5B8A225C124");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_OnInterrupted_EE77CE3D437B303B4A7DF5B8A225C124, NotifyName) == 0x000000, "Member 'BP_ActionSleepPlayerBed_C_OnInterrupted_EE77CE3D437B303B4A7DF5B8A225C124::NotifyName' has a wrong offset!");

// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.OnNotifyBegin_EE77CE3D437B303B4A7DF5B8A225C124
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionSleepPlayerBed_C_OnNotifyBegin_EE77CE3D437B303B4A7DF5B8A225C124 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSleepPlayerBed_C_OnNotifyBegin_EE77CE3D437B303B4A7DF5B8A225C124) == 0x000004, "Wrong alignment on BP_ActionSleepPlayerBed_C_OnNotifyBegin_EE77CE3D437B303B4A7DF5B8A225C124");
static_assert(sizeof(BP_ActionSleepPlayerBed_C_OnNotifyBegin_EE77CE3D437B303B4A7DF5B8A225C124) == 0x000008, "Wrong size on BP_ActionSleepPlayerBed_C_OnNotifyBegin_EE77CE3D437B303B4A7DF5B8A225C124");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_OnNotifyBegin_EE77CE3D437B303B4A7DF5B8A225C124, NotifyName) == 0x000000, "Member 'BP_ActionSleepPlayerBed_C_OnNotifyBegin_EE77CE3D437B303B4A7DF5B8A225C124::NotifyName' has a wrong offset!");

// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.OnNotifyEnd_EE77CE3D437B303B4A7DF5B8A225C124
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionSleepPlayerBed_C_OnNotifyEnd_EE77CE3D437B303B4A7DF5B8A225C124 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSleepPlayerBed_C_OnNotifyEnd_EE77CE3D437B303B4A7DF5B8A225C124) == 0x000004, "Wrong alignment on BP_ActionSleepPlayerBed_C_OnNotifyEnd_EE77CE3D437B303B4A7DF5B8A225C124");
static_assert(sizeof(BP_ActionSleepPlayerBed_C_OnNotifyEnd_EE77CE3D437B303B4A7DF5B8A225C124) == 0x000008, "Wrong size on BP_ActionSleepPlayerBed_C_OnNotifyEnd_EE77CE3D437B303B4A7DF5B8A225C124");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_OnNotifyEnd_EE77CE3D437B303B4A7DF5B8A225C124, NotifyName) == 0x000000, "Member 'BP_ActionSleepPlayerBed_C_OnNotifyEnd_EE77CE3D437B303B4A7DF5B8A225C124::NotifyName' has a wrong offset!");

// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.SleepEndOtomo
// 0x0028 (0x0028 - 0x0000)
struct BP_ActionSleepPlayerBed_C_SleepEndOtomo final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSleepPlayerBed_C_SleepEndOtomo) == 0x000008, "Wrong alignment on BP_ActionSleepPlayerBed_C_SleepEndOtomo");
static_assert(sizeof(BP_ActionSleepPlayerBed_C_SleepEndOtomo) == 0x000028, "Wrong size on BP_ActionSleepPlayerBed_C_SleepEndOtomo");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_SleepEndOtomo, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_ActionSleepPlayerBed_C_SleepEndOtomo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_SleepEndOtomo, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_ActionSleepPlayerBed_C_SleepEndOtomo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_SleepEndOtomo, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_ActionSleepPlayerBed_C_SleepEndOtomo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_SleepEndOtomo, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'BP_ActionSleepPlayerBed_C_SleepEndOtomo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_SleepEndOtomo, CallFunc_Array_Get_Item) == 0x000010, "Member 'BP_ActionSleepPlayerBed_C_SleepEndOtomo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_SleepEndOtomo, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'BP_ActionSleepPlayerBed_C_SleepEndOtomo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_SleepEndOtomo, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'BP_ActionSleepPlayerBed_C_SleepEndOtomo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_SleepEndOtomo, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000020, "Member 'BP_ActionSleepPlayerBed_C_SleepEndOtomo::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");

// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.SleepStartOtomo
// 0x0088 (0x0088 - 0x0000)
struct BP_ActionSleepPlayerBed_C_SleepStartOtomo final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerController*                   K2Node_DynamicCast_AsPal_Player_Controller;        // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_OtomoPalHolderComponent_C*          CallFunc_GetComponentByClass_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UPalIndividualCharacterSlot*>    CallFunc_GetSlots_Slots;                           // 0x0038(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterSlot*            CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_GetHandle_ReturnValue;                    // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDead_ReturnValue;                       // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0076(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77[0x1];                                       // 0x0077(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSleepPlayerBed_C_SleepStartOtomo) == 0x000008, "Wrong alignment on BP_ActionSleepPlayerBed_C_SleepStartOtomo");
static_assert(sizeof(BP_ActionSleepPlayerBed_C_SleepStartOtomo) == 0x000088, "Wrong size on BP_ActionSleepPlayerBed_C_SleepStartOtomo");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_SleepStartOtomo, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_ActionSleepPlayerBed_C_SleepStartOtomo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_SleepStartOtomo, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_ActionSleepPlayerBed_C_SleepStartOtomo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_SleepStartOtomo, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_ActionSleepPlayerBed_C_SleepStartOtomo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_SleepStartOtomo, CallFunc_GetActionCharacter_ReturnValue) == 0x000010, "Member 'BP_ActionSleepPlayerBed_C_SleepStartOtomo::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_SleepStartOtomo, CallFunc_GetController_ReturnValue) == 0x000018, "Member 'BP_ActionSleepPlayerBed_C_SleepStartOtomo::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_SleepStartOtomo, K2Node_DynamicCast_AsPal_Player_Controller) == 0x000020, "Member 'BP_ActionSleepPlayerBed_C_SleepStartOtomo::K2Node_DynamicCast_AsPal_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_SleepStartOtomo, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_ActionSleepPlayerBed_C_SleepStartOtomo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_SleepStartOtomo, CallFunc_GetComponentByClass_ReturnValue) == 0x000030, "Member 'BP_ActionSleepPlayerBed_C_SleepStartOtomo::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_SleepStartOtomo, CallFunc_GetSlots_Slots) == 0x000038, "Member 'BP_ActionSleepPlayerBed_C_SleepStartOtomo::CallFunc_GetSlots_Slots' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_SleepStartOtomo, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'BP_ActionSleepPlayerBed_C_SleepStartOtomo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_SleepStartOtomo, CallFunc_Array_Get_Item) == 0x000050, "Member 'BP_ActionSleepPlayerBed_C_SleepStartOtomo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_SleepStartOtomo, CallFunc_Less_IntInt_ReturnValue) == 0x000058, "Member 'BP_ActionSleepPlayerBed_C_SleepStartOtomo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_SleepStartOtomo, CallFunc_GetHandle_ReturnValue) == 0x000060, "Member 'BP_ActionSleepPlayerBed_C_SleepStartOtomo::CallFunc_GetHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_SleepStartOtomo, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000068, "Member 'BP_ActionSleepPlayerBed_C_SleepStartOtomo::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_SleepStartOtomo, CallFunc_Array_Add_ReturnValue) == 0x000070, "Member 'BP_ActionSleepPlayerBed_C_SleepStartOtomo::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_SleepStartOtomo, CallFunc_IsValid_ReturnValue) == 0x000074, "Member 'BP_ActionSleepPlayerBed_C_SleepStartOtomo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_SleepStartOtomo, CallFunc_IsDead_ReturnValue) == 0x000075, "Member 'BP_ActionSleepPlayerBed_C_SleepStartOtomo::CallFunc_IsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_SleepStartOtomo, CallFunc_IsValid_ReturnValue_1) == 0x000076, "Member 'BP_ActionSleepPlayerBed_C_SleepStartOtomo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_SleepStartOtomo, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000078, "Member 'BP_ActionSleepPlayerBed_C_SleepStartOtomo::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_SleepStartOtomo, CallFunc_IsValid_ReturnValue_2) == 0x000080, "Member 'BP_ActionSleepPlayerBed_C_SleepStartOtomo::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_ActionSleepPlayerBed_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSleepPlayerBed_C_TickAction) == 0x000004, "Wrong alignment on BP_ActionSleepPlayerBed_C_TickAction");
static_assert(sizeof(BP_ActionSleepPlayerBed_C_TickAction) == 0x000004, "Wrong size on BP_ActionSleepPlayerBed_C_TickAction");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_ActionSleepPlayerBed_C_TickAction::DeltaTime' has a wrong offset!");

// Function BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C.IsSleepLooping
// 0x0003 (0x0003 - 0x0000)
struct BP_ActionSleepPlayerBed_C_IsSleepLooping final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSleepPlayerBed_C_IsSleepLooping) == 0x000001, "Wrong alignment on BP_ActionSleepPlayerBed_C_IsSleepLooping");
static_assert(sizeof(BP_ActionSleepPlayerBed_C_IsSleepLooping) == 0x000003, "Wrong size on BP_ActionSleepPlayerBed_C_IsSleepLooping");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_IsSleepLooping, ReturnValue) == 0x000000, "Member 'BP_ActionSleepPlayerBed_C_IsSleepLooping::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_IsSleepLooping, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'BP_ActionSleepPlayerBed_C_IsSleepLooping::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSleepPlayerBed_C_IsSleepLooping, CallFunc_BooleanAND_ReturnValue) == 0x000002, "Member 'BP_ActionSleepPlayerBed_C_IsSleepLooping::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

