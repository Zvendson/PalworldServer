#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function BP_HomingMissile_MissileLauncher_NPC.BP_HomingMissile_MissileLauncher_NPC_C.Find Target Actor
// 0x0048 (0x0048 - 0x0000)
struct BP_HomingMissile_MissileLauncher_NPC_C_Find_Target_Actor final
{
public:
	class APalCharacter*                          PalCharacter;                                      // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetNearestEnemyByLocation_OutMinRange;    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetNearestEnemyByLocation_ReturnValue;    // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_VectorToString_ReturnValue;          // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HomingMissile_MissileLauncher_NPC_C_Find_Target_Actor) == 0x000008, "Wrong alignment on BP_HomingMissile_MissileLauncher_NPC_C_Find_Target_Actor");
static_assert(sizeof(BP_HomingMissile_MissileLauncher_NPC_C_Find_Target_Actor) == 0x000048, "Wrong size on BP_HomingMissile_MissileLauncher_NPC_C_Find_Target_Actor");
static_assert(offsetof(BP_HomingMissile_MissileLauncher_NPC_C_Find_Target_Actor, PalCharacter) == 0x000000, "Member 'BP_HomingMissile_MissileLauncher_NPC_C_Find_Target_Actor::PalCharacter' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_MissileLauncher_NPC_C_Find_Target_Actor, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000008, "Member 'BP_HomingMissile_MissileLauncher_NPC_C_Find_Target_Actor::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_MissileLauncher_NPC_C_Find_Target_Actor, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_HomingMissile_MissileLauncher_NPC_C_Find_Target_Actor::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_MissileLauncher_NPC_C_Find_Target_Actor, CallFunc_GetNearestEnemyByLocation_OutMinRange) == 0x000018, "Member 'BP_HomingMissile_MissileLauncher_NPC_C_Find_Target_Actor::CallFunc_GetNearestEnemyByLocation_OutMinRange' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_MissileLauncher_NPC_C_Find_Target_Actor, CallFunc_GetNearestEnemyByLocation_ReturnValue) == 0x000020, "Member 'BP_HomingMissile_MissileLauncher_NPC_C_Find_Target_Actor::CallFunc_GetNearestEnemyByLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_MissileLauncher_NPC_C_Find_Target_Actor, CallFunc_Conv_VectorToString_ReturnValue) == 0x000028, "Member 'BP_HomingMissile_MissileLauncher_NPC_C_Find_Target_Actor::CallFunc_Conv_VectorToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_MissileLauncher_NPC_C_Find_Target_Actor, CallFunc_GetDisplayName_ReturnValue) == 0x000038, "Member 'BP_HomingMissile_MissileLauncher_NPC_C_Find_Target_Actor::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");

}

