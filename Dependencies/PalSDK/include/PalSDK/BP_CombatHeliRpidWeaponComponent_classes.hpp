#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_CombatHeliRpidWeaponComponent.BP_CombatHeliRpidWeaponComponent_C
// 0x0048 (0x00E8 - 0x00A0)
class UBP_CombatHeliRpidWeaponComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   GunMesh;                                           // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Const_WeaponDamage;                                // 0x00B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Const_BulletSpeed;                                 // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Const_BulletAngle;                                 // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TimerHandle;                                       // 0x00C8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                        Const_ShootInterval;                               // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Const_BulletClass;                                 // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentShootCount;                                 // 0x00E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          IsShooting;                                        // 0x00E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent(int32 EntryPoint);
	void GetMuzzleTransform(struct FTransform* MzlTF);
	void GunAim(double DeltaTime, class AActor* Target);
	void PullTrigger();
	void ReleaseTrigger();
	void SetGunMesh(class UStaticMeshComponent* GunMesh_0);
	void ShootBullet();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CombatHeliRpidWeaponComponent_C">();
	}
	static class UBP_CombatHeliRpidWeaponComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CombatHeliRpidWeaponComponent_C>();
	}
};
static_assert(alignof(UBP_CombatHeliRpidWeaponComponent_C) == 0x000008, "Wrong alignment on UBP_CombatHeliRpidWeaponComponent_C");
static_assert(sizeof(UBP_CombatHeliRpidWeaponComponent_C) == 0x0000E8, "Wrong size on UBP_CombatHeliRpidWeaponComponent_C");
static_assert(offsetof(UBP_CombatHeliRpidWeaponComponent_C, UberGraphFrame) == 0x0000A0, "Member 'UBP_CombatHeliRpidWeaponComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_CombatHeliRpidWeaponComponent_C, GunMesh) == 0x0000A8, "Member 'UBP_CombatHeliRpidWeaponComponent_C::GunMesh' has a wrong offset!");
static_assert(offsetof(UBP_CombatHeliRpidWeaponComponent_C, Const_WeaponDamage) == 0x0000B0, "Member 'UBP_CombatHeliRpidWeaponComponent_C::Const_WeaponDamage' has a wrong offset!");
static_assert(offsetof(UBP_CombatHeliRpidWeaponComponent_C, Const_BulletSpeed) == 0x0000B8, "Member 'UBP_CombatHeliRpidWeaponComponent_C::Const_BulletSpeed' has a wrong offset!");
static_assert(offsetof(UBP_CombatHeliRpidWeaponComponent_C, Const_BulletAngle) == 0x0000C0, "Member 'UBP_CombatHeliRpidWeaponComponent_C::Const_BulletAngle' has a wrong offset!");
static_assert(offsetof(UBP_CombatHeliRpidWeaponComponent_C, TimerHandle) == 0x0000C8, "Member 'UBP_CombatHeliRpidWeaponComponent_C::TimerHandle' has a wrong offset!");
static_assert(offsetof(UBP_CombatHeliRpidWeaponComponent_C, Const_ShootInterval) == 0x0000D0, "Member 'UBP_CombatHeliRpidWeaponComponent_C::Const_ShootInterval' has a wrong offset!");
static_assert(offsetof(UBP_CombatHeliRpidWeaponComponent_C, Const_BulletClass) == 0x0000D8, "Member 'UBP_CombatHeliRpidWeaponComponent_C::Const_BulletClass' has a wrong offset!");
static_assert(offsetof(UBP_CombatHeliRpidWeaponComponent_C, CurrentShootCount) == 0x0000E0, "Member 'UBP_CombatHeliRpidWeaponComponent_C::CurrentShootCount' has a wrong offset!");
static_assert(offsetof(UBP_CombatHeliRpidWeaponComponent_C, IsShooting) == 0x0000E4, "Member 'UBP_CombatHeliRpidWeaponComponent_C::IsShooting' has a wrong offset!");

}

