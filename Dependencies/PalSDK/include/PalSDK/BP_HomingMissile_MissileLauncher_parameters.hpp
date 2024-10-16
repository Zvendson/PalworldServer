#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_HomingMissile_MissileLauncher.BP_HomingMissile_MissileLauncher_C.ExecuteUbergraph_BP_HomingMissile_MissileLauncher
// 0x0028 (0x0028 - 0x0000)
struct BP_HomingMissile_MissileLauncher_C_ExecuteUbergraph_BP_HomingMissile_MissileLauncher final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_Find_Target_Actor_PalCharacter;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HomingMissile_MissileLauncher_C_ExecuteUbergraph_BP_HomingMissile_MissileLauncher) == 0x000008, "Wrong alignment on BP_HomingMissile_MissileLauncher_C_ExecuteUbergraph_BP_HomingMissile_MissileLauncher");
static_assert(sizeof(BP_HomingMissile_MissileLauncher_C_ExecuteUbergraph_BP_HomingMissile_MissileLauncher) == 0x000028, "Wrong size on BP_HomingMissile_MissileLauncher_C_ExecuteUbergraph_BP_HomingMissile_MissileLauncher");
static_assert(offsetof(BP_HomingMissile_MissileLauncher_C_ExecuteUbergraph_BP_HomingMissile_MissileLauncher, EntryPoint) == 0x000000, "Member 'BP_HomingMissile_MissileLauncher_C_ExecuteUbergraph_BP_HomingMissile_MissileLauncher::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_MissileLauncher_C_ExecuteUbergraph_BP_HomingMissile_MissileLauncher, CallFunc_Find_Target_Actor_PalCharacter) == 0x000008, "Member 'BP_HomingMissile_MissileLauncher_C_ExecuteUbergraph_BP_HomingMissile_MissileLauncher::CallFunc_Find_Target_Actor_PalCharacter' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_MissileLauncher_C_ExecuteUbergraph_BP_HomingMissile_MissileLauncher, CallFunc_MakeVector_ReturnValue) == 0x000010, "Member 'BP_HomingMissile_MissileLauncher_C_ExecuteUbergraph_BP_HomingMissile_MissileLauncher::CallFunc_MakeVector_ReturnValue' has a wrong offset!");

// Function BP_HomingMissile_MissileLauncher.BP_HomingMissile_MissileLauncher_C.Find Target Actor
// 0x0040 (0x0040 - 0x0000)
struct BP_HomingMissile_MissileLauncher_C_Find_Target_Actor final
{
public:
	class APalCharacter*                          PalCharacter;                                      // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetAttackTargetLocation_ReturnValue;      // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetNearestEnemyByLocation_OutMinRange;    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetNearestEnemyByLocation_ReturnValue;    // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HomingMissile_MissileLauncher_C_Find_Target_Actor) == 0x000008, "Wrong alignment on BP_HomingMissile_MissileLauncher_C_Find_Target_Actor");
static_assert(sizeof(BP_HomingMissile_MissileLauncher_C_Find_Target_Actor) == 0x000040, "Wrong size on BP_HomingMissile_MissileLauncher_C_Find_Target_Actor");
static_assert(offsetof(BP_HomingMissile_MissileLauncher_C_Find_Target_Actor, PalCharacter) == 0x000000, "Member 'BP_HomingMissile_MissileLauncher_C_Find_Target_Actor::PalCharacter' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_MissileLauncher_C_Find_Target_Actor, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_HomingMissile_MissileLauncher_C_Find_Target_Actor::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_MissileLauncher_C_Find_Target_Actor, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000010, "Member 'BP_HomingMissile_MissileLauncher_C_Find_Target_Actor::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_MissileLauncher_C_Find_Target_Actor, CallFunc_GetAttackTargetLocation_ReturnValue) == 0x000018, "Member 'BP_HomingMissile_MissileLauncher_C_Find_Target_Actor::CallFunc_GetAttackTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_MissileLauncher_C_Find_Target_Actor, CallFunc_GetNearestEnemyByLocation_OutMinRange) == 0x000030, "Member 'BP_HomingMissile_MissileLauncher_C_Find_Target_Actor::CallFunc_GetNearestEnemyByLocation_OutMinRange' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_MissileLauncher_C_Find_Target_Actor, CallFunc_GetNearestEnemyByLocation_ReturnValue) == 0x000038, "Member 'BP_HomingMissile_MissileLauncher_C_Find_Target_Actor::CallFunc_GetNearestEnemyByLocation_ReturnValue' has a wrong offset!");

}

