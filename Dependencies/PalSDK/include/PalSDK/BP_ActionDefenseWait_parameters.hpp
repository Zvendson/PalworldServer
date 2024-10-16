#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function BP_ActionDefenseWait.BP_ActionDefenseWait_C.ExecuteUbergraph_BP_ActionDefenseWait
// 0x0060 (0x0060 - 0x0000)
struct BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlayAnimMontage_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTime;                            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Montage_IsPlaying_ReturnValue;            // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_3;         // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlayAnimMontage_ReturnValue_1;            // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait) == 0x000008, "Wrong alignment on BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait");
static_assert(sizeof(BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait) == 0x000060, "Wrong size on BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait");
static_assert(offsetof(BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait, EntryPoint) == 0x000000, "Member 'BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait, CallFunc_PlayAnimMontage_ReturnValue) == 0x000010, "Member 'BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait::CallFunc_PlayAnimMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000018, "Member 'BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait, CallFunc_IsValid_ReturnValue_1) == 0x000020, "Member 'BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait, K2Node_Event_DeltaTime) == 0x000024, "Member 'BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000028, "Member 'BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait, CallFunc_IsValid_ReturnValue_2) == 0x000030, "Member 'BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait, CallFunc_GetMainMesh_ReturnValue) == 0x000038, "Member 'BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait, CallFunc_GetAnimInstance_ReturnValue) == 0x000040, "Member 'BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait, CallFunc_Montage_IsPlaying_ReturnValue) == 0x000048, "Member 'BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait::CallFunc_Montage_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait, CallFunc_GetActionCharacter_ReturnValue_3) == 0x000050, "Member 'BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait::CallFunc_GetActionCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait, CallFunc_PlayAnimMontage_ReturnValue_1) == 0x000058, "Member 'BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait::CallFunc_PlayAnimMontage_ReturnValue_1' has a wrong offset!");

// Function BP_ActionDefenseWait.BP_ActionDefenseWait_C.SetupMontage
// 0x0068 (0x0068 - 0x0000)
struct BP_ActionDefenseWait_C_SetupMontage final
{
public:
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMontange_bExist;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_FindMontange_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_Map_Find_Value;                           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMontange_bExist_1;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_FindMontange_ReturnValue_1;               // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionDefenseWait_C_SetupMontage) == 0x000008, "Wrong alignment on BP_ActionDefenseWait_C_SetupMontage");
static_assert(sizeof(BP_ActionDefenseWait_C_SetupMontage) == 0x000068, "Wrong size on BP_ActionDefenseWait_C_SetupMontage");
static_assert(offsetof(BP_ActionDefenseWait_C_SetupMontage, CallFunc_GetActionCharacter_ReturnValue) == 0x000000, "Member 'BP_ActionDefenseWait_C_SetupMontage::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseWait_C_SetupMontage, CallFunc_GetComponentByClass_ReturnValue) == 0x000008, "Member 'BP_ActionDefenseWait_C_SetupMontage::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseWait_C_SetupMontage, CallFunc_FindMontange_bExist) == 0x000010, "Member 'BP_ActionDefenseWait_C_SetupMontage::CallFunc_FindMontange_bExist' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseWait_C_SetupMontage, CallFunc_FindMontange_ReturnValue) == 0x000018, "Member 'BP_ActionDefenseWait_C_SetupMontage::CallFunc_FindMontange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseWait_C_SetupMontage, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000020, "Member 'BP_ActionDefenseWait_C_SetupMontage::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseWait_C_SetupMontage, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000028, "Member 'BP_ActionDefenseWait_C_SetupMontage::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseWait_C_SetupMontage, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000030, "Member 'BP_ActionDefenseWait_C_SetupMontage::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseWait_C_SetupMontage, CallFunc_Map_Find_Value) == 0x000038, "Member 'BP_ActionDefenseWait_C_SetupMontage::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseWait_C_SetupMontage, CallFunc_Map_Find_ReturnValue) == 0x000040, "Member 'BP_ActionDefenseWait_C_SetupMontage::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseWait_C_SetupMontage, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000048, "Member 'BP_ActionDefenseWait_C_SetupMontage::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseWait_C_SetupMontage, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000050, "Member 'BP_ActionDefenseWait_C_SetupMontage::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseWait_C_SetupMontage, CallFunc_FindMontange_bExist_1) == 0x000058, "Member 'BP_ActionDefenseWait_C_SetupMontage::CallFunc_FindMontange_bExist_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseWait_C_SetupMontage, CallFunc_FindMontange_ReturnValue_1) == 0x000060, "Member 'BP_ActionDefenseWait_C_SetupMontage::CallFunc_FindMontange_ReturnValue_1' has a wrong offset!");

// Function BP_ActionDefenseWait.BP_ActionDefenseWait_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_ActionDefenseWait_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionDefenseWait_C_TickAction) == 0x000004, "Wrong alignment on BP_ActionDefenseWait_C_TickAction");
static_assert(sizeof(BP_ActionDefenseWait_C_TickAction) == 0x000004, "Wrong size on BP_ActionDefenseWait_C_TickAction");
static_assert(offsetof(BP_ActionDefenseWait_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_ActionDefenseWait_C_TickAction::DeltaTime' has a wrong offset!");

}

