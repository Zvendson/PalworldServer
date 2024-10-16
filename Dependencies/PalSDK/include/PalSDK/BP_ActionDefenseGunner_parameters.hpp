#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function BP_ActionDefenseGunner.BP_ActionDefenseGunner_C.ExecuteUbergraph_BP_ActionDefenseGunner
// 0x0028 (0x0028 - 0x0000)
struct BP_ActionDefenseGunner_C_ExecuteUbergraph_BP_ActionDefenseGunner final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_DecreaseFullStomachRate_Work_ReturnValue; // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionDefenseGunner_C_ExecuteUbergraph_BP_ActionDefenseGunner) == 0x000008, "Wrong alignment on BP_ActionDefenseGunner_C_ExecuteUbergraph_BP_ActionDefenseGunner");
static_assert(sizeof(BP_ActionDefenseGunner_C_ExecuteUbergraph_BP_ActionDefenseGunner) == 0x000028, "Wrong size on BP_ActionDefenseGunner_C_ExecuteUbergraph_BP_ActionDefenseGunner");
static_assert(offsetof(BP_ActionDefenseGunner_C_ExecuteUbergraph_BP_ActionDefenseGunner, EntryPoint) == 0x000000, "Member 'BP_ActionDefenseGunner_C_ExecuteUbergraph_BP_ActionDefenseGunner::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseGunner_C_ExecuteUbergraph_BP_ActionDefenseGunner, CallFunc_DecreaseFullStomachRate_Work_ReturnValue) == 0x000004, "Member 'BP_ActionDefenseGunner_C_ExecuteUbergraph_BP_ActionDefenseGunner::CallFunc_DecreaseFullStomachRate_Work_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseGunner_C_ExecuteUbergraph_BP_ActionDefenseGunner, CallFunc_GetActionCharacter_ReturnValue) == 0x000010, "Member 'BP_ActionDefenseGunner_C_ExecuteUbergraph_BP_ActionDefenseGunner::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseGunner_C_ExecuteUbergraph_BP_ActionDefenseGunner, CallFunc_GetGameSetting_ReturnValue) == 0x000018, "Member 'BP_ActionDefenseGunner_C_ExecuteUbergraph_BP_ActionDefenseGunner::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseGunner_C_ExecuteUbergraph_BP_ActionDefenseGunner, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_ActionDefenseGunner_C_ExecuteUbergraph_BP_ActionDefenseGunner::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseGunner_C_ExecuteUbergraph_BP_ActionDefenseGunner, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'BP_ActionDefenseGunner_C_ExecuteUbergraph_BP_ActionDefenseGunner::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_ActionDefenseGunner.BP_ActionDefenseGunner_C.FindMontage
// 0x0030 (0x0030 - 0x0000)
struct BP_ActionDefenseGunner_C_FindMontage final
{
public:
	class UAnimMontage*                           Montage;                                           // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Exist;                                             // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_FindMontage_Montage;                      // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMontage_Exist;                        // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_FindMontage_Montage_1;                    // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMontage_Exist_1;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionDefenseGunner_C_FindMontage) == 0x000008, "Wrong alignment on BP_ActionDefenseGunner_C_FindMontage");
static_assert(sizeof(BP_ActionDefenseGunner_C_FindMontage) == 0x000030, "Wrong size on BP_ActionDefenseGunner_C_FindMontage");
static_assert(offsetof(BP_ActionDefenseGunner_C_FindMontage, Montage) == 0x000000, "Member 'BP_ActionDefenseGunner_C_FindMontage::Montage' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseGunner_C_FindMontage, Exist) == 0x000008, "Member 'BP_ActionDefenseGunner_C_FindMontage::Exist' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseGunner_C_FindMontage, CallFunc_FindMontage_Montage) == 0x000010, "Member 'BP_ActionDefenseGunner_C_FindMontage::CallFunc_FindMontage_Montage' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseGunner_C_FindMontage, CallFunc_FindMontage_Exist) == 0x000018, "Member 'BP_ActionDefenseGunner_C_FindMontage::CallFunc_FindMontage_Exist' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseGunner_C_FindMontage, CallFunc_FindMontage_Montage_1) == 0x000020, "Member 'BP_ActionDefenseGunner_C_FindMontage::CallFunc_FindMontage_Montage_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDefenseGunner_C_FindMontage, CallFunc_FindMontage_Exist_1) == 0x000028, "Member 'BP_ActionDefenseGunner_C_FindMontage::CallFunc_FindMontage_Exist_1' has a wrong offset!");

}

