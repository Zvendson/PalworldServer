#pragma once

#include "Basic.hpp"

#include "BP_AINPC_CombatGunState_FireMove_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_AINPC_CombatGunState_FireMove_Shotgun.BP_AINPC_CombatGunState_FireMove_Shotgun_C
// 0x0000 (0x0088 - 0x0088)
class UBP_AINPC_CombatGunState_FireMove_Shotgun_C final : public UBP_AINPC_CombatGunState_FireMove_C
{
public:
	void CanMove(bool* Param_CanMove_0);
	void MoveDIrectionWorldSpace(struct FVector* Direction);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AINPC_CombatGunState_FireMove_Shotgun_C">();
	}
	static class UBP_AINPC_CombatGunState_FireMove_Shotgun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AINPC_CombatGunState_FireMove_Shotgun_C>();
	}
};
static_assert(alignof(UBP_AINPC_CombatGunState_FireMove_Shotgun_C) == 0x000008, "Wrong alignment on UBP_AINPC_CombatGunState_FireMove_Shotgun_C");
static_assert(sizeof(UBP_AINPC_CombatGunState_FireMove_Shotgun_C) == 0x000088, "Wrong size on UBP_AINPC_CombatGunState_FireMove_Shotgun_C");

}

