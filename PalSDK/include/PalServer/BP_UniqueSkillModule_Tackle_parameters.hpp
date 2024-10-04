#pragma once

#include "Basic.hpp"

#include "EAction_Unique_Tackle_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.ControllInput
// 0x0080 (0x0080 - 0x0000)
struct BP_UniqueSkillModule_Tackle_C_ControllInput final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Montage_IsPlaying_ReturnValue;            // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x6];                                       // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_ReturnValue;                         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetMaxAccelerationMultiplier_speed_ImplicitCast; // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast; // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UniqueSkillModule_Tackle_C_ControllInput) == 0x000008, "Wrong alignment on BP_UniqueSkillModule_Tackle_C_ControllInput");
static_assert(sizeof(BP_UniqueSkillModule_Tackle_C_ControllInput) == 0x000080, "Wrong size on BP_UniqueSkillModule_Tackle_C_ControllInput");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ControllInput, DeltaTime) == 0x000000, "Member 'BP_UniqueSkillModule_Tackle_C_ControllInput::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ControllInput, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_UniqueSkillModule_Tackle_C_ControllInput::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ControllInput, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000010, "Member 'BP_UniqueSkillModule_Tackle_C_ControllInput::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ControllInput, CallFunc_GetMainMesh_ReturnValue) == 0x000018, "Member 'BP_UniqueSkillModule_Tackle_C_ControllInput::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ControllInput, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'BP_UniqueSkillModule_Tackle_C_ControllInput::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ControllInput, CallFunc_GetAnimInstance_ReturnValue) == 0x000028, "Member 'BP_UniqueSkillModule_Tackle_C_ControllInput::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ControllInput, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_UniqueSkillModule_Tackle_C_ControllInput::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ControllInput, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000038, "Member 'BP_UniqueSkillModule_Tackle_C_ControllInput::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ControllInput, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000040, "Member 'BP_UniqueSkillModule_Tackle_C_ControllInput::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ControllInput, CallFunc_IsValid_ReturnValue_1) == 0x000048, "Member 'BP_UniqueSkillModule_Tackle_C_ControllInput::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ControllInput, CallFunc_Montage_IsPlaying_ReturnValue) == 0x000049, "Member 'BP_UniqueSkillModule_Tackle_C_ControllInput::CallFunc_Montage_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ControllInput, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000050, "Member 'BP_UniqueSkillModule_Tackle_C_ControllInput::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ControllInput, CallFunc_FClamp_ReturnValue) == 0x000058, "Member 'BP_UniqueSkillModule_Tackle_C_ControllInput::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ControllInput, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000060, "Member 'BP_UniqueSkillModule_Tackle_C_ControllInput::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ControllInput, CallFunc_Lerp_ReturnValue) == 0x000068, "Member 'BP_UniqueSkillModule_Tackle_C_ControllInput::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ControllInput, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000070, "Member 'BP_UniqueSkillModule_Tackle_C_ControllInput::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ControllInput, CallFunc_SetMaxAccelerationMultiplier_speed_ImplicitCast) == 0x000074, "Member 'BP_UniqueSkillModule_Tackle_C_ControllInput::CallFunc_SetMaxAccelerationMultiplier_speed_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ControllInput, CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast) == 0x000078, "Member 'BP_UniqueSkillModule_Tackle_C_ControllInput::CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast' has a wrong offset!");

// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.ExecuteUbergraph_BP_UniqueSkillModule_Tackle
// 0x03E0 (0x03E0 - 0x0000)
struct BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_NotifyName_4;                   // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_2;                     // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_1;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_3;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_2;               // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A[0x2];                                       // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTime;                            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_3;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UAnimMontage* Montage, class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           K2Node_CustomEvent_Montage;                        // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A[0x2];                                       // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x006C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0080(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_5;                   // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UAnimMontage* Montage, class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_2;        // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x3];                                       // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_NotifyName_1;                   // 0x00AC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerControlActor_ReturnValue;         // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E2[0x6];                                       // 0x00E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_3;         // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_4;         // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue_1;                // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0100(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAnimInstance*                       K2Node_DynamicCast_AsPal_Anim_Instance;            // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11A[0x6];                                      // 0x011A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_5;         // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue_2;                // 0x0128(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_6;         // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue_1;            // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0140(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalAnimInstance*                       K2Node_DynamicCast_AsPal_Anim_Instance_1;          // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_152[0x6];                                      // 0x0152(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_7;         // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0160(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_8;         // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue_3;        // 0x0180(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FReserveMontage                        K2Node_MakeStruct_ReserveMontage;                  // 0x0188(0x0010)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_199[0x7];                                      // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FReserveMontage                        K2Node_MakeStruct_ReserveMontage_1;                // 0x01A0(0x0010)(NoDestructor)
	TArray<struct FReserveMontage>                K2Node_MakeArray_Array;                            // 0x01B0(0x0010)(ReferenceParm)
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x01C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C9[0x7];                                      // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_9;         // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetFloorHitLocationByActor_ReturnValue;   // 0x01D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x01F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_208[0x8];                                      // 0x0208(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0210(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_271[0x7];                                      // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0278(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffectBase_C*                  CallFunc_FinishSpawningActor_ReturnValue;          // 0x0280(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue_1;               // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_289[0x3];                                      // 0x0289(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_5;            // 0x028C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29C[0x4];                                      // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_10;        // 0x02A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A9[0x7];                                      // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x02B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue_1;        // 0x02C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetFloorHitLocationByActor_ReturnValue_1; // 0x02E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_6;            // 0x02F8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0309(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30A[0x2];                                      // 0x030A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_NotifyName_2;                   // 0x030C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_7;            // 0x0314(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_3;                   // 0x0324(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32C[0x4];                                      // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_SelectVector_ReturnValue;                 // 0x0330(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_348[0x8];                                      // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x0350(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x03B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffectBase_C*                  CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x03B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_ControllInput_DeltaTime_ImplicitCast;     // 0x03C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x03C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetMaxAccelerationMultiplier_speed_ImplicitCast; // 0x03CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast; // 0x03D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetYawRotatorMultiplier_rate_ImplicitCast; // 0x03D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle) == 0x000010, "Wrong alignment on BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle");
static_assert(sizeof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle) == 0x0003E0, "Wrong size on BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, EntryPoint) == 0x000000, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, Temp_bool_IsClosed_Variable) == 0x000004, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, Temp_bool_Has_Been_Initd_Variable) == 0x000005, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, Temp_bool_IsClosed_Variable_1) == 0x000018, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, Temp_bool_Has_Been_Initd_Variable_1) == 0x000019, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, K2Node_CustomEvent_NotifyName_4) == 0x00001C, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::K2Node_CustomEvent_NotifyName_4' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, Temp_bool_IsClosed_Variable_2) == 0x000024, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::Temp_bool_IsClosed_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, K2Node_CreateDelegate_OutputDelegate_1) == 0x000028, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, Temp_bool_IsClosed_Variable_3) == 0x000038, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::Temp_bool_IsClosed_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, Temp_bool_Has_Been_Initd_Variable_2) == 0x000039, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::Temp_bool_Has_Been_Initd_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, K2Node_Event_DeltaTime) == 0x00003C, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, Temp_bool_Has_Been_Initd_Variable_3) == 0x000040, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::Temp_bool_Has_Been_Initd_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, K2Node_CreateDelegate_OutputDelegate_2) == 0x000044, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, K2Node_CustomEvent_Montage) == 0x000058, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::K2Node_CustomEvent_Montage' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, K2Node_CustomEvent_NotifyName) == 0x000060, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000068, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x000069, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, K2Node_CreateDelegate_OutputDelegate_3) == 0x00006C, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000080, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, K2Node_CustomEvent_NotifyName_5) == 0x000088, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::K2Node_CustomEvent_NotifyName_5' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, K2Node_CreateDelegate_OutputDelegate_4) == 0x000090, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, Temp_name_Variable) == 0x0000A0, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_EqualEqual_NameName_ReturnValue_2) == 0x0000A8, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_EqualEqual_NameName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, K2Node_CustomEvent_NotifyName_1) == 0x0000AC, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::K2Node_CustomEvent_NotifyName_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_GetActionCharacter_ReturnValue) == 0x0000B8, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_GetActionCharacter_ReturnValue_1) == 0x0000C0, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_GetMainMesh_ReturnValue) == 0x0000C8, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_GetComponentByClass_ReturnValue) == 0x0000D0, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_GetActionCharacter_ReturnValue_2) == 0x0000D8, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_IsValid_ReturnValue) == 0x0000E0, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_IsPlayerControlActor_ReturnValue) == 0x0000E1, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_IsPlayerControlActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_GetActionCharacter_ReturnValue_3) == 0x0000E8, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_GetActionCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_GetActionCharacter_ReturnValue_4) == 0x0000F0, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_GetActionCharacter_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_GetMainMesh_ReturnValue_1) == 0x0000F8, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_GetMainMesh_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000100, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_GetAnimInstance_ReturnValue) == 0x000108, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, K2Node_DynamicCast_AsPal_Anim_Instance) == 0x000110, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::K2Node_DynamicCast_AsPal_Anim_Instance' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, K2Node_DynamicCast_bSuccess) == 0x000118, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_IsValid_ReturnValue_1) == 0x000119, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_GetActionCharacter_ReturnValue_5) == 0x000120, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_GetActionCharacter_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_GetMainMesh_ReturnValue_2) == 0x000128, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_GetMainMesh_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_GetActionCharacter_ReturnValue_6) == 0x000130, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_GetActionCharacter_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_GetAnimInstance_ReturnValue_1) == 0x000138, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_GetAnimInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000140, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, K2Node_DynamicCast_AsPal_Anim_Instance_1) == 0x000148, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::K2Node_DynamicCast_AsPal_Anim_Instance_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, K2Node_DynamicCast_bSuccess_1) == 0x000150, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_IsValid_ReturnValue_2) == 0x000151, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_GetActionCharacter_ReturnValue_7) == 0x000158, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_GetActionCharacter_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_GetActorForwardVector_ReturnValue) == 0x000160, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_GetActionCharacter_ReturnValue_8) == 0x000178, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_GetActionCharacter_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_GetComponentByClass_ReturnValue_3) == 0x000180, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_GetComponentByClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, K2Node_MakeStruct_ReserveMontage) == 0x000188, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::K2Node_MakeStruct_ReserveMontage' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_IsValid_ReturnValue_3) == 0x000198, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, K2Node_MakeStruct_ReserveMontage_1) == 0x0001A0, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::K2Node_MakeStruct_ReserveMontage_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, K2Node_MakeArray_Array) == 0x0001B0, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_CreateProxyObjectForPlayMontage_ReturnValue) == 0x0001C0, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_CreateProxyObjectForPlayMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_IsValid_ReturnValue_4) == 0x0001C8, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_GetActionCharacter_ReturnValue_9) == 0x0001D0, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_GetActionCharacter_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_GetFloorHitLocationByActor_ReturnValue) == 0x0001D8, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_GetFloorHitLocationByActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_K2_GetActorRotation_ReturnValue) == 0x0001F0, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_MakeTransform_ReturnValue) == 0x000210, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_IsValidClass_ReturnValue) == 0x000270, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000278, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_FinishSpawningActor_ReturnValue) == 0x000280, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_IsValidClass_ReturnValue_1) == 0x000288, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_IsValidClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, K2Node_CreateDelegate_OutputDelegate_5) == 0x00028C, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_GetActionCharacter_ReturnValue_10) == 0x0002A0, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_GetActionCharacter_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0002A8, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0002B0, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_K2_GetActorRotation_ReturnValue_1) == 0x0002C8, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_K2_GetActorRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_GetFloorHitLocationByActor_ReturnValue_1) == 0x0002E0, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_GetFloorHitLocationByActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, K2Node_CreateDelegate_OutputDelegate_6) == 0x0002F8, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_IsValid_ReturnValue_5) == 0x000308, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_IsValid_ReturnValue_6) == 0x000309, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, K2Node_CustomEvent_NotifyName_2) == 0x00030C, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::K2Node_CustomEvent_NotifyName_2' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, K2Node_CreateDelegate_OutputDelegate_7) == 0x000314, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, K2Node_CustomEvent_NotifyName_3) == 0x000324, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::K2Node_CustomEvent_NotifyName_3' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_SelectVector_ReturnValue) == 0x000330, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_SelectVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_MakeTransform_ReturnValue_1) == 0x000350, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1) == 0x0003B0, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_FinishSpawningActor_ReturnValue_1) == 0x0003B8, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_FinishSpawningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_ControllInput_DeltaTime_ImplicitCast) == 0x0003C0, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_ControllInput_DeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x0003C8, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_SetMaxAccelerationMultiplier_speed_ImplicitCast) == 0x0003CC, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_SetMaxAccelerationMultiplier_speed_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast) == 0x0003D0, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle, CallFunc_SetYawRotatorMultiplier_rate_ImplicitCast) == 0x0003D4, "Member 'BP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle::CallFunc_SetYawRotatorMultiplier_rate_ImplicitCast' has a wrong offset!");

// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.GetCurrentState
// 0x0001 (0x0001 - 0x0000)
struct BP_UniqueSkillModule_Tackle_C_GetCurrentState final
{
public:
	EAction_Unique_Tackle                         State_0;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UniqueSkillModule_Tackle_C_GetCurrentState) == 0x000001, "Wrong alignment on BP_UniqueSkillModule_Tackle_C_GetCurrentState");
static_assert(sizeof(BP_UniqueSkillModule_Tackle_C_GetCurrentState) == 0x000001, "Wrong size on BP_UniqueSkillModule_Tackle_C_GetCurrentState");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_GetCurrentState, State_0) == 0x000000, "Member 'BP_UniqueSkillModule_Tackle_C_GetCurrentState::State_0' has a wrong offset!");

// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnBlendOut_26A182C445668EE79190E6AE1D795120
// 0x0008 (0x0008 - 0x0000)
struct BP_UniqueSkillModule_Tackle_C_OnBlendOut_26A182C445668EE79190E6AE1D795120 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UniqueSkillModule_Tackle_C_OnBlendOut_26A182C445668EE79190E6AE1D795120) == 0x000004, "Wrong alignment on BP_UniqueSkillModule_Tackle_C_OnBlendOut_26A182C445668EE79190E6AE1D795120");
static_assert(sizeof(BP_UniqueSkillModule_Tackle_C_OnBlendOut_26A182C445668EE79190E6AE1D795120) == 0x000008, "Wrong size on BP_UniqueSkillModule_Tackle_C_OnBlendOut_26A182C445668EE79190E6AE1D795120");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_OnBlendOut_26A182C445668EE79190E6AE1D795120, NotifyName) == 0x000000, "Member 'BP_UniqueSkillModule_Tackle_C_OnBlendOut_26A182C445668EE79190E6AE1D795120::NotifyName' has a wrong offset!");

// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnCompleted_26A182C445668EE79190E6AE1D795120
// 0x0008 (0x0008 - 0x0000)
struct BP_UniqueSkillModule_Tackle_C_OnCompleted_26A182C445668EE79190E6AE1D795120 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UniqueSkillModule_Tackle_C_OnCompleted_26A182C445668EE79190E6AE1D795120) == 0x000004, "Wrong alignment on BP_UniqueSkillModule_Tackle_C_OnCompleted_26A182C445668EE79190E6AE1D795120");
static_assert(sizeof(BP_UniqueSkillModule_Tackle_C_OnCompleted_26A182C445668EE79190E6AE1D795120) == 0x000008, "Wrong size on BP_UniqueSkillModule_Tackle_C_OnCompleted_26A182C445668EE79190E6AE1D795120");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_OnCompleted_26A182C445668EE79190E6AE1D795120, NotifyName) == 0x000000, "Member 'BP_UniqueSkillModule_Tackle_C_OnCompleted_26A182C445668EE79190E6AE1D795120::NotifyName' has a wrong offset!");

// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnInterrupted_26A182C445668EE79190E6AE1D795120
// 0x0008 (0x0008 - 0x0000)
struct BP_UniqueSkillModule_Tackle_C_OnInterrupted_26A182C445668EE79190E6AE1D795120 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UniqueSkillModule_Tackle_C_OnInterrupted_26A182C445668EE79190E6AE1D795120) == 0x000004, "Wrong alignment on BP_UniqueSkillModule_Tackle_C_OnInterrupted_26A182C445668EE79190E6AE1D795120");
static_assert(sizeof(BP_UniqueSkillModule_Tackle_C_OnInterrupted_26A182C445668EE79190E6AE1D795120) == 0x000008, "Wrong size on BP_UniqueSkillModule_Tackle_C_OnInterrupted_26A182C445668EE79190E6AE1D795120");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_OnInterrupted_26A182C445668EE79190E6AE1D795120, NotifyName) == 0x000000, "Member 'BP_UniqueSkillModule_Tackle_C_OnInterrupted_26A182C445668EE79190E6AE1D795120::NotifyName' has a wrong offset!");

// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnMontageNotifyDelegate__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_UniqueSkillModule_Tackle_C_OnMontageNotifyDelegate__DelegateSignature final
{
public:
	class UAnimMontage*                           Montage;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   NotifyName;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UniqueSkillModule_Tackle_C_OnMontageNotifyDelegate__DelegateSignature) == 0x000008, "Wrong alignment on BP_UniqueSkillModule_Tackle_C_OnMontageNotifyDelegate__DelegateSignature");
static_assert(sizeof(BP_UniqueSkillModule_Tackle_C_OnMontageNotifyDelegate__DelegateSignature) == 0x000010, "Wrong size on BP_UniqueSkillModule_Tackle_C_OnMontageNotifyDelegate__DelegateSignature");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_OnMontageNotifyDelegate__DelegateSignature, Montage) == 0x000000, "Member 'BP_UniqueSkillModule_Tackle_C_OnMontageNotifyDelegate__DelegateSignature::Montage' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_OnMontageNotifyDelegate__DelegateSignature, NotifyName) == 0x000008, "Member 'BP_UniqueSkillModule_Tackle_C_OnMontageNotifyDelegate__DelegateSignature::NotifyName' has a wrong offset!");

// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnMontageNotifyEvent
// 0x0010 (0x0010 - 0x0000)
struct BP_UniqueSkillModule_Tackle_C_OnMontageNotifyEvent final
{
public:
	class UAnimMontage*                           Montage;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   NotifyName;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UniqueSkillModule_Tackle_C_OnMontageNotifyEvent) == 0x000008, "Wrong alignment on BP_UniqueSkillModule_Tackle_C_OnMontageNotifyEvent");
static_assert(sizeof(BP_UniqueSkillModule_Tackle_C_OnMontageNotifyEvent) == 0x000010, "Wrong size on BP_UniqueSkillModule_Tackle_C_OnMontageNotifyEvent");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_OnMontageNotifyEvent, Montage) == 0x000000, "Member 'BP_UniqueSkillModule_Tackle_C_OnMontageNotifyEvent::Montage' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_OnMontageNotifyEvent, NotifyName) == 0x000008, "Member 'BP_UniqueSkillModule_Tackle_C_OnMontageNotifyEvent::NotifyName' has a wrong offset!");

// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnNotifyBegin_26A182C445668EE79190E6AE1D795120
// 0x0008 (0x0008 - 0x0000)
struct BP_UniqueSkillModule_Tackle_C_OnNotifyBegin_26A182C445668EE79190E6AE1D795120 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UniqueSkillModule_Tackle_C_OnNotifyBegin_26A182C445668EE79190E6AE1D795120) == 0x000004, "Wrong alignment on BP_UniqueSkillModule_Tackle_C_OnNotifyBegin_26A182C445668EE79190E6AE1D795120");
static_assert(sizeof(BP_UniqueSkillModule_Tackle_C_OnNotifyBegin_26A182C445668EE79190E6AE1D795120) == 0x000008, "Wrong size on BP_UniqueSkillModule_Tackle_C_OnNotifyBegin_26A182C445668EE79190E6AE1D795120");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_OnNotifyBegin_26A182C445668EE79190E6AE1D795120, NotifyName) == 0x000000, "Member 'BP_UniqueSkillModule_Tackle_C_OnNotifyBegin_26A182C445668EE79190E6AE1D795120::NotifyName' has a wrong offset!");

// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnNotifyEnd_26A182C445668EE79190E6AE1D795120
// 0x0008 (0x0008 - 0x0000)
struct BP_UniqueSkillModule_Tackle_C_OnNotifyEnd_26A182C445668EE79190E6AE1D795120 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UniqueSkillModule_Tackle_C_OnNotifyEnd_26A182C445668EE79190E6AE1D795120) == 0x000004, "Wrong alignment on BP_UniqueSkillModule_Tackle_C_OnNotifyEnd_26A182C445668EE79190E6AE1D795120");
static_assert(sizeof(BP_UniqueSkillModule_Tackle_C_OnNotifyEnd_26A182C445668EE79190E6AE1D795120) == 0x000008, "Wrong size on BP_UniqueSkillModule_Tackle_C_OnNotifyEnd_26A182C445668EE79190E6AE1D795120");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_OnNotifyEnd_26A182C445668EE79190E6AE1D795120, NotifyName) == 0x000000, "Member 'BP_UniqueSkillModule_Tackle_C_OnNotifyEnd_26A182C445668EE79190E6AE1D795120::NotifyName' has a wrong offset!");

// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnSpawnedLoopEffect__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_UniqueSkillModule_Tackle_C_OnSpawnedLoopEffect__DelegateSignature final
{
public:
	class ABP_SkillEffectBase_C*                  LoopEffect;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UniqueSkillModule_Tackle_C_OnSpawnedLoopEffect__DelegateSignature) == 0x000008, "Wrong alignment on BP_UniqueSkillModule_Tackle_C_OnSpawnedLoopEffect__DelegateSignature");
static_assert(sizeof(BP_UniqueSkillModule_Tackle_C_OnSpawnedLoopEffect__DelegateSignature) == 0x000008, "Wrong size on BP_UniqueSkillModule_Tackle_C_OnSpawnedLoopEffect__DelegateSignature");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_OnSpawnedLoopEffect__DelegateSignature, LoopEffect) == 0x000000, "Member 'BP_UniqueSkillModule_Tackle_C_OnSpawnedLoopEffect__DelegateSignature::LoopEffect' has a wrong offset!");

// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.SetFlagName
// 0x0008 (0x0008 - 0x0000)
struct BP_UniqueSkillModule_Tackle_C_SetFlagName final
{
public:
	class FName                                   FlagName_0;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UniqueSkillModule_Tackle_C_SetFlagName) == 0x000004, "Wrong alignment on BP_UniqueSkillModule_Tackle_C_SetFlagName");
static_assert(sizeof(BP_UniqueSkillModule_Tackle_C_SetFlagName) == 0x000008, "Wrong size on BP_UniqueSkillModule_Tackle_C_SetFlagName");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_SetFlagName, FlagName_0) == 0x000000, "Member 'BP_UniqueSkillModule_Tackle_C_SetFlagName::FlagName_0' has a wrong offset!");

// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.TerminateMotion
// 0x0018 (0x0018 - 0x0000)
struct BP_UniqueSkillModule_Tackle_C_TerminateMotion final
{
public:
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UniqueSkillModule_Tackle_C_TerminateMotion) == 0x000008, "Wrong alignment on BP_UniqueSkillModule_Tackle_C_TerminateMotion");
static_assert(sizeof(BP_UniqueSkillModule_Tackle_C_TerminateMotion) == 0x000018, "Wrong size on BP_UniqueSkillModule_Tackle_C_TerminateMotion");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_TerminateMotion, CallFunc_GetActionCharacter_ReturnValue) == 0x000000, "Member 'BP_UniqueSkillModule_Tackle_C_TerminateMotion::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_TerminateMotion, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_UniqueSkillModule_Tackle_C_TerminateMotion::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_TerminateMotion, CallFunc_IsValid_ReturnValue_1) == 0x000009, "Member 'BP_UniqueSkillModule_Tackle_C_TerminateMotion::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_TerminateMotion, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000010, "Member 'BP_UniqueSkillModule_Tackle_C_TerminateMotion::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");

// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.TickModule
// 0x0004 (0x0004 - 0x0000)
struct BP_UniqueSkillModule_Tackle_C_TickModule final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UniqueSkillModule_Tackle_C_TickModule) == 0x000004, "Wrong alignment on BP_UniqueSkillModule_Tackle_C_TickModule");
static_assert(sizeof(BP_UniqueSkillModule_Tackle_C_TickModule) == 0x000004, "Wrong size on BP_UniqueSkillModule_Tackle_C_TickModule");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_TickModule, DeltaTime) == 0x000000, "Member 'BP_UniqueSkillModule_Tackle_C_TickModule::DeltaTime' has a wrong offset!");

// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.UpdateVelocity
// 0x00C0 (0x00C0 - 0x0000)
struct BP_UniqueSkillModule_Tackle_C_UpdateVelocity final
{
public:
	struct FVector                                PreVelocity;                                       // 0x0000(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSizeXY_ReturnValue;                      // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UniqueSkillModule_Tackle_C_UpdateVelocity) == 0x000008, "Wrong alignment on BP_UniqueSkillModule_Tackle_C_UpdateVelocity");
static_assert(sizeof(BP_UniqueSkillModule_Tackle_C_UpdateVelocity) == 0x0000C0, "Wrong size on BP_UniqueSkillModule_Tackle_C_UpdateVelocity");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateVelocity, PreVelocity) == 0x000000, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateVelocity::PreVelocity' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateVelocity, CallFunc_BreakVector_X) == 0x000018, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateVelocity::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateVelocity, CallFunc_BreakVector_Y) == 0x000020, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateVelocity::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateVelocity, CallFunc_BreakVector_Z) == 0x000028, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateVelocity::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateVelocity, CallFunc_VSizeXY_ReturnValue) == 0x000030, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateVelocity::CallFunc_VSizeXY_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateVelocity, CallFunc_GetActionCharacter_ReturnValue) == 0x000038, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateVelocity::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateVelocity, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000040, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateVelocity::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateVelocity, CallFunc_GetActorForwardVector_ReturnValue) == 0x000058, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateVelocity::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateVelocity, CallFunc_GetComponentByClass_ReturnValue) == 0x000070, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateVelocity::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateVelocity, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000078, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateVelocity::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateVelocity, CallFunc_BreakVector_X_1) == 0x000090, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateVelocity::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateVelocity, CallFunc_BreakVector_Y_1) == 0x000098, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateVelocity::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateVelocity, CallFunc_BreakVector_Z_1) == 0x0000A0, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateVelocity::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateVelocity, CallFunc_MakeVector_ReturnValue) == 0x0000A8, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateVelocity::CallFunc_MakeVector_ReturnValue' has a wrong offset!");

// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.UpdateYaw
// 0x0200 (0x0200 - 0x0000)
struct BP_UniqueSkillModule_Tackle_C_UpdateYaw final
{
public:
	struct FRotator                               TargetRotation;                                    // 0x0000(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        DifYaw;                                            // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TargetYaw;                                         // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AbsDifYaw;                                         // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxYaw;                                            // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CurrentRotation;                                   // 0x0038(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_RInterpTo_ReturnValue;                    // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A[0x6];                                       // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue_1;       // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue_1;            // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_3;         // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetAttackTargetLocation_ReturnValue;      // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetAttackTargetLocation_ReturnValue_1;    // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_104[0x4];                                      // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0108(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0120(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0138(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0150(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_174[0x4];                                      // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0178(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x01A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Dot_VectorVector_ReturnValue;             // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C9[0x7];                                      // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_RInterpTo_ReturnValue_1;                  // 0x01D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue_1;        // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E9[0x3];                                      // 0x01E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RInterpTo_InterpSpeed_ImplicitCast;       // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RInterpTo_DeltaTime_ImplicitCast;         // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RInterpTo_InterpSpeed_ImplicitCast_1;     // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RInterpTo_DeltaTime_ImplicitCast_1;       // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UniqueSkillModule_Tackle_C_UpdateYaw) == 0x000008, "Wrong alignment on BP_UniqueSkillModule_Tackle_C_UpdateYaw");
static_assert(sizeof(BP_UniqueSkillModule_Tackle_C_UpdateYaw) == 0x000200, "Wrong size on BP_UniqueSkillModule_Tackle_C_UpdateYaw");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, TargetRotation) == 0x000000, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::TargetRotation' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, DifYaw) == 0x000018, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::DifYaw' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, TargetYaw) == 0x000020, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::TargetYaw' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, AbsDifYaw) == 0x000028, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::AbsDifYaw' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, MaxYaw) == 0x000030, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::MaxYaw' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CurrentRotation) == 0x000038, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CurrentRotation' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000050, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_GetActionCharacter_ReturnValue) == 0x000058, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_RInterpTo_ReturnValue) == 0x000060, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_RInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, K2Node_SwitchEnum_CmpSuccess) == 0x000078, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_K2_SetActorRotation_ReturnValue) == 0x000079, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_GetWorldDeltaSeconds_ReturnValue_1) == 0x000080, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_GetWorldDeltaSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_GetActionTarget_ReturnValue) == 0x000088, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_GetActionTarget_ReturnValue_1) == 0x000090, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_GetActionTarget_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000098, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_GetActionCharacter_ReturnValue_2) == 0x0000A0, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_GetActionCharacter_ReturnValue_3) == 0x0000A8, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_GetActionCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_GetAttackTargetLocation_ReturnValue) == 0x0000B0, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_GetAttackTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_K2_GetActorRotation_ReturnValue) == 0x0000C8, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_GetAttackTargetLocation_ReturnValue_1) == 0x0000E0, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_GetAttackTargetLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_BreakRotator_Roll) == 0x0000F8, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_BreakRotator_Pitch) == 0x0000FC, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_BreakRotator_Yaw) == 0x000100, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000108, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000120, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_FindLookAtRotation_ReturnValue) == 0x000138, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000150, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_BreakRotator_Roll_1) == 0x000168, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_BreakRotator_Pitch_1) == 0x00016C, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_BreakRotator_Yaw_1) == 0x000170, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_Normal_ReturnValue) == 0x000178, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_MakeRotator_ReturnValue) == 0x000190, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_GetActorForwardVector_ReturnValue) == 0x0001A8, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_Dot_VectorVector_ReturnValue) == 0x0001C0, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_Less_DoubleDouble_ReturnValue) == 0x0001C8, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_RInterpTo_ReturnValue_1) == 0x0001D0, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_RInterpTo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_K2_SetActorRotation_ReturnValue_1) == 0x0001E8, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_K2_SetActorRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_RInterpTo_InterpSpeed_ImplicitCast) == 0x0001EC, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_RInterpTo_InterpSpeed_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_RInterpTo_DeltaTime_ImplicitCast) == 0x0001F0, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_RInterpTo_DeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_RInterpTo_InterpSpeed_ImplicitCast_1) == 0x0001F4, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_RInterpTo_InterpSpeed_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueSkillModule_Tackle_C_UpdateYaw, CallFunc_RInterpTo_DeltaTime_ImplicitCast_1) == 0x0001F8, "Member 'BP_UniqueSkillModule_Tackle_C_UpdateYaw::CallFunc_RInterpTo_DeltaTime_ImplicitCast_1' has a wrong offset!");

}

