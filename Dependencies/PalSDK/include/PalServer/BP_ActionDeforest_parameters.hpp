#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function BP_ActionDeforest.BP_ActionDeforest_C.ExecuteUbergraph_BP_ActionDeforest
// 0x02F0 (0x02F0 - 0x0000)
struct BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UAnimMontage* Montage, class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_DecreaseFullStomachRate_Work_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_3;         // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_4;         // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_5;         // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalShooterComponent*                   CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_6;         // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue_1;                // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           K2Node_CustomEvent_Montage;                        // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAnimInstance*                       K2Node_DynamicCast_AsPal_Anim_Instance;            // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x3];                                       // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_ActionNotify_MiningImpactTiming_ReturnValue; // 0x00CC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D5[0x3];                                       // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_ActionNotify_MiningEndTiming_ReturnValue; // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_7;         // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue_2;                // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue_1;            // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAnimInstance*                       K2Node_DynamicCast_AsPal_Anim_Instance_1;          // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_8;         // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_9;         // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      K2Node_DynamicCast_AsPlayer_Controller;            // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue_1;              // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      K2Node_DynamicCast_AsPlayer_Controller_1;          // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_151[0x7];                                      // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_10;        // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_11;        // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue_3;                // 0x0168(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetAllSocketNames_ReturnValue;            // 0x0170(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_2;        // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18A[0x2];                                      // 0x018A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0190(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F1[0x7];                                      // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x01F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_DeforestAxe_C*                      CallFunc_FinishSpawningActor_ReturnValue;          // 0x0200(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_AddActorLocalRotation_SweepHitResult;  // 0x0208(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest) == 0x000010, "Wrong alignment on BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest");
static_assert(sizeof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest) == 0x0002F0, "Wrong size on BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, EntryPoint) == 0x000000, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000030, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_GetGameSetting_ReturnValue) == 0x000038, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_DecreaseFullStomachRate_Work_ReturnValue) == 0x000040, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_DecreaseFullStomachRate_Work_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000048, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_GetActionCharacter_ReturnValue_3) == 0x000050, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_GetActionCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_GetMainMesh_ReturnValue) == 0x000058, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_GetActionCharacter_ReturnValue_4) == 0x000068, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_GetActionCharacter_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_GetComponentByClass_ReturnValue) == 0x000070, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_GetActionCharacter_ReturnValue_5) == 0x000078, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_GetActionCharacter_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_IsValid_ReturnValue_1) == 0x000080, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000088, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_IsValid_ReturnValue_2) == 0x000090, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_GetActionCharacter_ReturnValue_6) == 0x000098, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_GetActionCharacter_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_GetMainMesh_ReturnValue_1) == 0x0000A0, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_GetMainMesh_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, K2Node_CustomEvent_Montage) == 0x0000A8, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::K2Node_CustomEvent_Montage' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, K2Node_CustomEvent_NotifyName) == 0x0000B0, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_GetAnimInstance_ReturnValue) == 0x0000B8, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, K2Node_DynamicCast_AsPal_Anim_Instance) == 0x0000C0, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::K2Node_DynamicCast_AsPal_Anim_Instance' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_ActionNotify_MiningImpactTiming_ReturnValue) == 0x0000CC, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_ActionNotify_MiningImpactTiming_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_EqualEqual_NameName_ReturnValue) == 0x0000D4, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_ActionNotify_MiningEndTiming_ReturnValue) == 0x0000D8, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_ActionNotify_MiningEndTiming_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_GetActionCharacter_ReturnValue_7) == 0x0000E0, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_GetActionCharacter_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x0000E8, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_GetMainMesh_ReturnValue_2) == 0x0000F0, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_GetMainMesh_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_BooleanOR_ReturnValue) == 0x0000F8, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_GetAnimInstance_ReturnValue_1) == 0x000100, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_GetAnimInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, K2Node_DynamicCast_AsPal_Anim_Instance_1) == 0x000108, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::K2Node_DynamicCast_AsPal_Anim_Instance_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, K2Node_DynamicCast_bSuccess_1) == 0x000110, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_GetActionCharacter_ReturnValue_8) == 0x000118, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_GetActionCharacter_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_GetController_ReturnValue) == 0x000120, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_GetActionCharacter_ReturnValue_9) == 0x000128, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_GetActionCharacter_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, K2Node_DynamicCast_AsPlayer_Controller) == 0x000130, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::K2Node_DynamicCast_AsPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, K2Node_DynamicCast_bSuccess_2) == 0x000138, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_GetController_ReturnValue_1) == 0x000140, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, K2Node_DynamicCast_AsPlayer_Controller_1) == 0x000148, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::K2Node_DynamicCast_AsPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, K2Node_DynamicCast_bSuccess_3) == 0x000150, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_GetActionCharacter_ReturnValue_10) == 0x000158, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_GetActionCharacter_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_GetActionCharacter_ReturnValue_11) == 0x000160, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_GetActionCharacter_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_GetMainMesh_ReturnValue_3) == 0x000168, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_GetMainMesh_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_GetAllSocketNames_ReturnValue) == 0x000170, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_GetAllSocketNames_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_Array_Get_Item) == 0x000180, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_NotEqual_NameName_ReturnValue) == 0x000188, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_EqualEqual_NameName_ReturnValue_2) == 0x000189, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_EqualEqual_NameName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_Array_Length_ReturnValue) == 0x00018C, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_MakeTransform_ReturnValue) == 0x000190, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_Less_IntInt_ReturnValue) == 0x0001F0, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0001F8, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_FinishSpawningActor_ReturnValue) == 0x000200, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest, CallFunc_K2_AddActorLocalRotation_SweepHitResult) == 0x000208, "Member 'BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest::CallFunc_K2_AddActorLocalRotation_SweepHitResult' has a wrong offset!");

// Function BP_ActionDeforest.BP_ActionDeforest_C.OnBeginAnimNotify
// 0x0010 (0x0010 - 0x0000)
struct BP_ActionDeforest_C_OnBeginAnimNotify final
{
public:
	class UAnimMontage*                           Montage;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   NotifyName;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionDeforest_C_OnBeginAnimNotify) == 0x000008, "Wrong alignment on BP_ActionDeforest_C_OnBeginAnimNotify");
static_assert(sizeof(BP_ActionDeforest_C_OnBeginAnimNotify) == 0x000010, "Wrong size on BP_ActionDeforest_C_OnBeginAnimNotify");
static_assert(offsetof(BP_ActionDeforest_C_OnBeginAnimNotify, Montage) == 0x000000, "Member 'BP_ActionDeforest_C_OnBeginAnimNotify::Montage' has a wrong offset!");
static_assert(offsetof(BP_ActionDeforest_C_OnBeginAnimNotify, NotifyName) == 0x000008, "Member 'BP_ActionDeforest_C_OnBeginAnimNotify::NotifyName' has a wrong offset!");

}

