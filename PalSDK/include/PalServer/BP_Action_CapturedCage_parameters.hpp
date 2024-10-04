#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function BP_Action_CapturedCage.BP_Action_CapturedCage_C.ExecuteUbergraph_BP_Action_CapturedCage
// 0x0030 (0x0030 - 0x0000)
struct BP_Action_CapturedCage_C_ExecuteUbergraph_BP_Action_CapturedCage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalFacialComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_CapturedCage_C_ExecuteUbergraph_BP_Action_CapturedCage) == 0x000008, "Wrong alignment on BP_Action_CapturedCage_C_ExecuteUbergraph_BP_Action_CapturedCage");
static_assert(sizeof(BP_Action_CapturedCage_C_ExecuteUbergraph_BP_Action_CapturedCage) == 0x000030, "Wrong size on BP_Action_CapturedCage_C_ExecuteUbergraph_BP_Action_CapturedCage");
static_assert(offsetof(BP_Action_CapturedCage_C_ExecuteUbergraph_BP_Action_CapturedCage, EntryPoint) == 0x000000, "Member 'BP_Action_CapturedCage_C_ExecuteUbergraph_BP_Action_CapturedCage::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_CapturedCage_C_ExecuteUbergraph_BP_Action_CapturedCage, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_Action_CapturedCage_C_ExecuteUbergraph_BP_Action_CapturedCage::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_CapturedCage_C_ExecuteUbergraph_BP_Action_CapturedCage, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_Action_CapturedCage_C_ExecuteUbergraph_BP_Action_CapturedCage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_CapturedCage_C_ExecuteUbergraph_BP_Action_CapturedCage, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000018, "Member 'BP_Action_CapturedCage_C_ExecuteUbergraph_BP_Action_CapturedCage::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_CapturedCage_C_ExecuteUbergraph_BP_Action_CapturedCage, CallFunc_IsValid_ReturnValue_1) == 0x000020, "Member 'BP_Action_CapturedCage_C_ExecuteUbergraph_BP_Action_CapturedCage::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_CapturedCage_C_ExecuteUbergraph_BP_Action_CapturedCage, CallFunc_GetComponentByClass_ReturnValue) == 0x000028, "Member 'BP_Action_CapturedCage_C_ExecuteUbergraph_BP_Action_CapturedCage::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

}

