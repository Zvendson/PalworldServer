#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_CombatHeli.BP_CombatHeli_C
// 0x0040 (0x0990 - 0x0950)
class ABP_CombatHeli_C final : public APalNPC
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0950(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   CombatHeli_HeliBody;                               // 0x0958(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CombatHeli_Gun;                                    // 0x0960(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsBoxComponent*              PalBodyPartsBox;                                   // 0x0968(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_CombatHeliRpidWeaponComponent_Bomber_C* BP_CombatHeliRpidWeaponComponent_Bomber;           // 0x0970(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_CombatHeliRpidWeaponComponent_WingMiso_C* BP_CombatHeliRpidWeaponComponent_WingMiso;         // 0x0978(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_CombatHeliRpidWeaponComponent_FrontMG_C* BP_CombatHeliRpidWeaponComponent_FrontMG;          // 0x0980(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x0988(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_CombatHeli(int32 EntryPoint);
	void ReceiveBeginPlay();
	void SetHideAll();
	void ShootMGBullet();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CombatHeli_C">();
	}
	static class ABP_CombatHeli_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CombatHeli_C>();
	}
};
static_assert(alignof(ABP_CombatHeli_C) == 0x000010, "Wrong alignment on ABP_CombatHeli_C");
static_assert(sizeof(ABP_CombatHeli_C) == 0x000990, "Wrong size on ABP_CombatHeli_C");
static_assert(offsetof(ABP_CombatHeli_C, UberGraphFrame) == 0x000950, "Member 'ABP_CombatHeli_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CombatHeli_C, CombatHeli_HeliBody) == 0x000958, "Member 'ABP_CombatHeli_C::CombatHeli_HeliBody' has a wrong offset!");
static_assert(offsetof(ABP_CombatHeli_C, CombatHeli_Gun) == 0x000960, "Member 'ABP_CombatHeli_C::CombatHeli_Gun' has a wrong offset!");
static_assert(offsetof(ABP_CombatHeli_C, PalBodyPartsBox) == 0x000968, "Member 'ABP_CombatHeli_C::PalBodyPartsBox' has a wrong offset!");
static_assert(offsetof(ABP_CombatHeli_C, BP_CombatHeliRpidWeaponComponent_Bomber) == 0x000970, "Member 'ABP_CombatHeli_C::BP_CombatHeliRpidWeaponComponent_Bomber' has a wrong offset!");
static_assert(offsetof(ABP_CombatHeli_C, BP_CombatHeliRpidWeaponComponent_WingMiso) == 0x000978, "Member 'ABP_CombatHeli_C::BP_CombatHeliRpidWeaponComponent_WingMiso' has a wrong offset!");
static_assert(offsetof(ABP_CombatHeli_C, BP_CombatHeliRpidWeaponComponent_FrontMG) == 0x000980, "Member 'ABP_CombatHeli_C::BP_CombatHeliRpidWeaponComponent_FrontMG' has a wrong offset!");
static_assert(offsetof(ABP_CombatHeli_C, TargetActor) == 0x000988, "Member 'ABP_CombatHeli_C::TargetActor' has a wrong offset!");

}

