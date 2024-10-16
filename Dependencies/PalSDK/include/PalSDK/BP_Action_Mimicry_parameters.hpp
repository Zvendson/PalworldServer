#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function BP_Action_Mimicry.BP_Action_Mimicry_C.ExecuteUbergraph_BP_Action_Mimicry
// 0x0048 (0x0048 - 0x0000)
struct BP_Action_Mimicry_C_ExecuteUbergraph_BP_Action_Mimicry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCharacterMovementComponent*            CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_3;         // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_FindMimicMontage_Montage;                 // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlayAnimMontage_ReturnValue;              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Mimicry_C_ExecuteUbergraph_BP_Action_Mimicry) == 0x000008, "Wrong alignment on BP_Action_Mimicry_C_ExecuteUbergraph_BP_Action_Mimicry");
static_assert(sizeof(BP_Action_Mimicry_C_ExecuteUbergraph_BP_Action_Mimicry) == 0x000048, "Wrong size on BP_Action_Mimicry_C_ExecuteUbergraph_BP_Action_Mimicry");
static_assert(offsetof(BP_Action_Mimicry_C_ExecuteUbergraph_BP_Action_Mimicry, EntryPoint) == 0x000000, "Member 'BP_Action_Mimicry_C_ExecuteUbergraph_BP_Action_Mimicry::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_Mimicry_C_ExecuteUbergraph_BP_Action_Mimicry, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_Action_Mimicry_C_ExecuteUbergraph_BP_Action_Mimicry::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Mimicry_C_ExecuteUbergraph_BP_Action_Mimicry, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_Action_Mimicry_C_ExecuteUbergraph_BP_Action_Mimicry::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Mimicry_C_ExecuteUbergraph_BP_Action_Mimicry, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000018, "Member 'BP_Action_Mimicry_C_ExecuteUbergraph_BP_Action_Mimicry::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Mimicry_C_ExecuteUbergraph_BP_Action_Mimicry, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000020, "Member 'BP_Action_Mimicry_C_ExecuteUbergraph_BP_Action_Mimicry::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Mimicry_C_ExecuteUbergraph_BP_Action_Mimicry, CallFunc_GetActionCharacter_ReturnValue_3) == 0x000028, "Member 'BP_Action_Mimicry_C_ExecuteUbergraph_BP_Action_Mimicry::CallFunc_GetActionCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Action_Mimicry_C_ExecuteUbergraph_BP_Action_Mimicry, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000030, "Member 'BP_Action_Mimicry_C_ExecuteUbergraph_BP_Action_Mimicry::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Mimicry_C_ExecuteUbergraph_BP_Action_Mimicry, CallFunc_FindMimicMontage_Montage) == 0x000038, "Member 'BP_Action_Mimicry_C_ExecuteUbergraph_BP_Action_Mimicry::CallFunc_FindMimicMontage_Montage' has a wrong offset!");
static_assert(offsetof(BP_Action_Mimicry_C_ExecuteUbergraph_BP_Action_Mimicry, CallFunc_PlayAnimMontage_ReturnValue) == 0x000040, "Member 'BP_Action_Mimicry_C_ExecuteUbergraph_BP_Action_Mimicry::CallFunc_PlayAnimMontage_ReturnValue' has a wrong offset!");

// Function BP_Action_Mimicry.BP_Action_Mimicry_C.FindMimicMontage
// 0x0030 (0x0030 - 0x0000)
struct BP_Action_Mimicry_C_FindMimicMontage final
{
public:
	class UAnimMontage*                           Montage;                                           // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalActionType                                Temp_byte_Variable;                                // 0x0008(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_Map_Find_Value;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Mimicry_C_FindMimicMontage) == 0x000008, "Wrong alignment on BP_Action_Mimicry_C_FindMimicMontage");
static_assert(sizeof(BP_Action_Mimicry_C_FindMimicMontage) == 0x000030, "Wrong size on BP_Action_Mimicry_C_FindMimicMontage");
static_assert(offsetof(BP_Action_Mimicry_C_FindMimicMontage, Montage) == 0x000000, "Member 'BP_Action_Mimicry_C_FindMimicMontage::Montage' has a wrong offset!");
static_assert(offsetof(BP_Action_Mimicry_C_FindMimicMontage, Temp_byte_Variable) == 0x000008, "Member 'BP_Action_Mimicry_C_FindMimicMontage::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_Mimicry_C_FindMimicMontage, CallFunc_GetActionCharacter_ReturnValue) == 0x000010, "Member 'BP_Action_Mimicry_C_FindMimicMontage::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Mimicry_C_FindMimicMontage, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'BP_Action_Mimicry_C_FindMimicMontage::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Mimicry_C_FindMimicMontage, CallFunc_Map_Find_Value) == 0x000020, "Member 'BP_Action_Mimicry_C_FindMimicMontage::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_Action_Mimicry_C_FindMimicMontage, CallFunc_Map_Find_ReturnValue) == 0x000028, "Member 'BP_Action_Mimicry_C_FindMimicMontage::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

}

