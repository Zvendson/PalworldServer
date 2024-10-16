#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function BP_NPCAIController_BossBattle.BP_NPCAIController_BossBattle_C.ForceBattleStartToTarget Boss
// 0x0038 (0x0038 - 0x0000)
struct BP_NPCAIController_BossBattle_C_ForceBattleStartToTarget_Boss final
{
public:
	class APalPlayerCharacter*                    Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class APalPlayerCharacter*>            AllPlayer;                                         // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_BossBattle_C_ForceBattleStartToTarget_Boss) == 0x000008, "Wrong alignment on BP_NPCAIController_BossBattle_C_ForceBattleStartToTarget_Boss");
static_assert(sizeof(BP_NPCAIController_BossBattle_C_ForceBattleStartToTarget_Boss) == 0x000038, "Wrong size on BP_NPCAIController_BossBattle_C_ForceBattleStartToTarget_Boss");
static_assert(offsetof(BP_NPCAIController_BossBattle_C_ForceBattleStartToTarget_Boss, Player) == 0x000000, "Member 'BP_NPCAIController_BossBattle_C_ForceBattleStartToTarget_Boss::Player' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_BossBattle_C_ForceBattleStartToTarget_Boss, AllPlayer) == 0x000008, "Member 'BP_NPCAIController_BossBattle_C_ForceBattleStartToTarget_Boss::AllPlayer' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_BossBattle_C_ForceBattleStartToTarget_Boss, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BP_NPCAIController_BossBattle_C_ForceBattleStartToTarget_Boss::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_BossBattle_C_ForceBattleStartToTarget_Boss, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'BP_NPCAIController_BossBattle_C_ForceBattleStartToTarget_Boss::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_BossBattle_C_ForceBattleStartToTarget_Boss, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_NPCAIController_BossBattle_C_ForceBattleStartToTarget_Boss::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_BossBattle_C_ForceBattleStartToTarget_Boss, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'BP_NPCAIController_BossBattle_C_ForceBattleStartToTarget_Boss::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_BossBattle_C_ForceBattleStartToTarget_Boss, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'BP_NPCAIController_BossBattle_C_ForceBattleStartToTarget_Boss::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_BossBattle_C_ForceBattleStartToTarget_Boss, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'BP_NPCAIController_BossBattle_C_ForceBattleStartToTarget_Boss::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}

