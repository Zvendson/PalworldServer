#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function BP_ActionSitChair_Player.BP_ActionSitChair_Player_C.ExecuteUbergraph_BP_ActionSitChair_Player
// 0x0038 (0x0038 - 0x0000)
struct BP_ActionSitChair_Player_C_ExecuteUbergraph_BP_ActionSitChair_Player final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character_1;       // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSitChair_Player_C_ExecuteUbergraph_BP_ActionSitChair_Player) == 0x000008, "Wrong alignment on BP_ActionSitChair_Player_C_ExecuteUbergraph_BP_ActionSitChair_Player");
static_assert(sizeof(BP_ActionSitChair_Player_C_ExecuteUbergraph_BP_ActionSitChair_Player) == 0x000038, "Wrong size on BP_ActionSitChair_Player_C_ExecuteUbergraph_BP_ActionSitChair_Player");
static_assert(offsetof(BP_ActionSitChair_Player_C_ExecuteUbergraph_BP_ActionSitChair_Player, EntryPoint) == 0x000000, "Member 'BP_ActionSitChair_Player_C_ExecuteUbergraph_BP_ActionSitChair_Player::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionSitChair_Player_C_ExecuteUbergraph_BP_ActionSitChair_Player, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionSitChair_Player_C_ExecuteUbergraph_BP_ActionSitChair_Player::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSitChair_Player_C_ExecuteUbergraph_BP_ActionSitChair_Player, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000010, "Member 'BP_ActionSitChair_Player_C_ExecuteUbergraph_BP_ActionSitChair_Player::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSitChair_Player_C_ExecuteUbergraph_BP_ActionSitChair_Player, K2Node_DynamicCast_AsPal_Player_Character) == 0x000018, "Member 'BP_ActionSitChair_Player_C_ExecuteUbergraph_BP_ActionSitChair_Player::K2Node_DynamicCast_AsPal_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_ActionSitChair_Player_C_ExecuteUbergraph_BP_ActionSitChair_Player, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_ActionSitChair_Player_C_ExecuteUbergraph_BP_ActionSitChair_Player::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionSitChair_Player_C_ExecuteUbergraph_BP_ActionSitChair_Player, K2Node_DynamicCast_AsPal_Player_Character_1) == 0x000028, "Member 'BP_ActionSitChair_Player_C_ExecuteUbergraph_BP_ActionSitChair_Player::K2Node_DynamicCast_AsPal_Player_Character_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSitChair_Player_C_ExecuteUbergraph_BP_ActionSitChair_Player, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'BP_ActionSitChair_Player_C_ExecuteUbergraph_BP_ActionSitChair_Player::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

