#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function BP_AINPC_CombatGunState_FireMove_Shotgun.BP_AINPC_CombatGunState_FireMove_Shotgun_C.CanMove
// 0x0020 (0x0020 - 0x0000)
struct BP_AINPC_CombatGunState_FireMove_Shotgun_C_CanMove final
{
public:
	bool                                          Param_CanMove_0;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetSelfActor_SelfActor;                   // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetTargetActor_TargetActor;               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNearTwoActorWithRootRadius_ReturnValue; // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AINPC_CombatGunState_FireMove_Shotgun_C_CanMove) == 0x000008, "Wrong alignment on BP_AINPC_CombatGunState_FireMove_Shotgun_C_CanMove");
static_assert(sizeof(BP_AINPC_CombatGunState_FireMove_Shotgun_C_CanMove) == 0x000020, "Wrong size on BP_AINPC_CombatGunState_FireMove_Shotgun_C_CanMove");
static_assert(offsetof(BP_AINPC_CombatGunState_FireMove_Shotgun_C_CanMove, Param_CanMove_0) == 0x000000, "Member 'BP_AINPC_CombatGunState_FireMove_Shotgun_C_CanMove::Param_CanMove_0' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_FireMove_Shotgun_C_CanMove, CallFunc_GetSelfActor_SelfActor) == 0x000008, "Member 'BP_AINPC_CombatGunState_FireMove_Shotgun_C_CanMove::CallFunc_GetSelfActor_SelfActor' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_FireMove_Shotgun_C_CanMove, CallFunc_GetTargetActor_TargetActor) == 0x000010, "Member 'BP_AINPC_CombatGunState_FireMove_Shotgun_C_CanMove::CallFunc_GetTargetActor_TargetActor' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_FireMove_Shotgun_C_CanMove, CallFunc_IsNearTwoActorWithRootRadius_ReturnValue) == 0x000018, "Member 'BP_AINPC_CombatGunState_FireMove_Shotgun_C_CanMove::CallFunc_IsNearTwoActorWithRootRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_FireMove_Shotgun_C_CanMove, CallFunc_Not_PreBool_ReturnValue) == 0x000019, "Member 'BP_AINPC_CombatGunState_FireMove_Shotgun_C_CanMove::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_AINPC_CombatGunState_FireMove_Shotgun.BP_AINPC_CombatGunState_FireMove_Shotgun_C.MoveDIrectionWorldSpace
// 0x0038 (0x0038 - 0x0000)
struct BP_AINPC_CombatGunState_FireMove_Shotgun_C_MoveDIrectionWorldSpace final
{
public:
	struct FVector                                Direction;                                         // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetSelfActor_SelfActor;                   // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AINPC_CombatGunState_FireMove_Shotgun_C_MoveDIrectionWorldSpace) == 0x000008, "Wrong alignment on BP_AINPC_CombatGunState_FireMove_Shotgun_C_MoveDIrectionWorldSpace");
static_assert(sizeof(BP_AINPC_CombatGunState_FireMove_Shotgun_C_MoveDIrectionWorldSpace) == 0x000038, "Wrong size on BP_AINPC_CombatGunState_FireMove_Shotgun_C_MoveDIrectionWorldSpace");
static_assert(offsetof(BP_AINPC_CombatGunState_FireMove_Shotgun_C_MoveDIrectionWorldSpace, Direction) == 0x000000, "Member 'BP_AINPC_CombatGunState_FireMove_Shotgun_C_MoveDIrectionWorldSpace::Direction' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_FireMove_Shotgun_C_MoveDIrectionWorldSpace, CallFunc_GetSelfActor_SelfActor) == 0x000018, "Member 'BP_AINPC_CombatGunState_FireMove_Shotgun_C_MoveDIrectionWorldSpace::CallFunc_GetSelfActor_SelfActor' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_FireMove_Shotgun_C_MoveDIrectionWorldSpace, CallFunc_GetActorForwardVector_ReturnValue) == 0x000020, "Member 'BP_AINPC_CombatGunState_FireMove_Shotgun_C_MoveDIrectionWorldSpace::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");

}

