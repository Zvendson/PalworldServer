#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_AIController_CombatHeli.BP_AIController_CombatHeli_C
// 0x0008 (0x0530 - 0x0528)
class ABP_AIController_CombatHeli_C final : public APalAIController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0528(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_AIController_CombatHeli(int32 EntryPoint);
	void On_Dead(const struct FPalDeadInfo& DeadInfo);
	void ReceivePossess(class APawn* PossessedPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIController_CombatHeli_C">();
	}
	static class ABP_AIController_CombatHeli_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AIController_CombatHeli_C>();
	}
};
static_assert(alignof(ABP_AIController_CombatHeli_C) == 0x000008, "Wrong alignment on ABP_AIController_CombatHeli_C");
static_assert(sizeof(ABP_AIController_CombatHeli_C) == 0x000530, "Wrong size on ABP_AIController_CombatHeli_C");
static_assert(offsetof(ABP_AIController_CombatHeli_C, UberGraphFrame) == 0x000528, "Member 'ABP_AIController_CombatHeli_C::UberGraphFrame' has a wrong offset!");

}

