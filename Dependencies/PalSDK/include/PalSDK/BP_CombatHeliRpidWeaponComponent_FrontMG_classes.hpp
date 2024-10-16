#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_CombatHeliRpidWeaponComponent_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_CombatHeliRpidWeaponComponent_FrontMG.BP_CombatHeliRpidWeaponComponent_FrontMG_C
// 0x0008 (0x00F0 - 0x00E8)
class UBP_CombatHeliRpidWeaponComponent_FrontMG_C final : public UBP_CombatHeliRpidWeaponComponent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_CombatHeliRpidWeaponComponent_FrontMG_C; // 0x00E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent_FrontMG(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CombatHeliRpidWeaponComponent_FrontMG_C">();
	}
	static class UBP_CombatHeliRpidWeaponComponent_FrontMG_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CombatHeliRpidWeaponComponent_FrontMG_C>();
	}
};
static_assert(alignof(UBP_CombatHeliRpidWeaponComponent_FrontMG_C) == 0x000008, "Wrong alignment on UBP_CombatHeliRpidWeaponComponent_FrontMG_C");
static_assert(sizeof(UBP_CombatHeliRpidWeaponComponent_FrontMG_C) == 0x0000F0, "Wrong size on UBP_CombatHeliRpidWeaponComponent_FrontMG_C");
static_assert(offsetof(UBP_CombatHeliRpidWeaponComponent_FrontMG_C, UberGraphFrame_BP_CombatHeliRpidWeaponComponent_FrontMG_C) == 0x0000E8, "Member 'UBP_CombatHeliRpidWeaponComponent_FrontMG_C::UberGraphFrame_BP_CombatHeliRpidWeaponComponent_FrontMG_C' has a wrong offset!");

}

