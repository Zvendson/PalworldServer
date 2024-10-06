#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_AIActionCombatHeli_Dead.BP_AIActionCombatHeli_Dead_C
// 0x0008 (0x0138 - 0x0130)
class UBP_AIActionCombatHeli_Dead_C final : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0130(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ActionStart(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIActionCombatHeli_Dead(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIActionCombatHeli_Dead_C">();
	}
	static class UBP_AIActionCombatHeli_Dead_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIActionCombatHeli_Dead_C>();
	}
};
static_assert(alignof(UBP_AIActionCombatHeli_Dead_C) == 0x000008, "Wrong alignment on UBP_AIActionCombatHeli_Dead_C");
static_assert(sizeof(UBP_AIActionCombatHeli_Dead_C) == 0x000138, "Wrong size on UBP_AIActionCombatHeli_Dead_C");
static_assert(offsetof(UBP_AIActionCombatHeli_Dead_C, UberGraphFrame) == 0x000130, "Member 'UBP_AIActionCombatHeli_Dead_C::UberGraphFrame' has a wrong offset!");

}

