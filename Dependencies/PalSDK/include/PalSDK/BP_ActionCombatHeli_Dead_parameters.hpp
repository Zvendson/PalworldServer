#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_ActionCombatHeli_Dead.BP_ActionCombatHeli_Dead_C.ExecuteUbergraph_BP_ActionCombatHeli_Dead
// 0x0060 (0x0060 - 0x0000)
struct BP_ActionCombatHeli_Dead_C_ExecuteUbergraph_BP_ActionCombatHeli_Dead final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABP_CombatHeli_C*                       K2Node_DynamicCast_AsBP_Combat_Heli;               // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionCombatHeli_Dead_C_ExecuteUbergraph_BP_ActionCombatHeli_Dead) == 0x000008, "Wrong alignment on BP_ActionCombatHeli_Dead_C_ExecuteUbergraph_BP_ActionCombatHeli_Dead");
static_assert(sizeof(BP_ActionCombatHeli_Dead_C_ExecuteUbergraph_BP_ActionCombatHeli_Dead) == 0x000060, "Wrong size on BP_ActionCombatHeli_Dead_C_ExecuteUbergraph_BP_ActionCombatHeli_Dead");
static_assert(offsetof(BP_ActionCombatHeli_Dead_C_ExecuteUbergraph_BP_ActionCombatHeli_Dead, EntryPoint) == 0x000000, "Member 'BP_ActionCombatHeli_Dead_C_ExecuteUbergraph_BP_ActionCombatHeli_Dead::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionCombatHeli_Dead_C_ExecuteUbergraph_BP_ActionCombatHeli_Dead, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionCombatHeli_Dead_C_ExecuteUbergraph_BP_ActionCombatHeli_Dead::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCombatHeli_Dead_C_ExecuteUbergraph_BP_ActionCombatHeli_Dead, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000010, "Member 'BP_ActionCombatHeli_Dead_C_ExecuteUbergraph_BP_ActionCombatHeli_Dead::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionCombatHeli_Dead_C_ExecuteUbergraph_BP_ActionCombatHeli_Dead, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000018, "Member 'BP_ActionCombatHeli_Dead_C_ExecuteUbergraph_BP_ActionCombatHeli_Dead::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCombatHeli_Dead_C_ExecuteUbergraph_BP_ActionCombatHeli_Dead, K2Node_DynamicCast_AsBP_Combat_Heli) == 0x000030, "Member 'BP_ActionCombatHeli_Dead_C_ExecuteUbergraph_BP_ActionCombatHeli_Dead::K2Node_DynamicCast_AsBP_Combat_Heli' has a wrong offset!");
static_assert(offsetof(BP_ActionCombatHeli_Dead_C_ExecuteUbergraph_BP_ActionCombatHeli_Dead, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_ActionCombatHeli_Dead_C_ExecuteUbergraph_BP_ActionCombatHeli_Dead::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionCombatHeli_Dead_C_ExecuteUbergraph_BP_ActionCombatHeli_Dead, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000040, "Member 'BP_ActionCombatHeli_Dead_C_ExecuteUbergraph_BP_ActionCombatHeli_Dead::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCombatHeli_Dead_C_ExecuteUbergraph_BP_ActionCombatHeli_Dead, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000058, "Member 'BP_ActionCombatHeli_Dead_C_ExecuteUbergraph_BP_ActionCombatHeli_Dead::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");

}

