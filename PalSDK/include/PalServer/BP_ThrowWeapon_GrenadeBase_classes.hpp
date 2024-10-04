#pragma once

#include "Basic.hpp"

#include "BP_ThrowWeaponBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_ThrowWeapon_GrenadeBase.BP_ThrowWeapon_GrenadeBase_C
// 0x0010 (0x05A8 - 0x0598)
class ABP_ThrowWeapon_GrenadeBase_C final : public ABP_ThrowWeaponBase_C
{
public:
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0598(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                   ItemName;                                          // 0x05A0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ComsumeItem();
	void GetBulletShootRotation(struct FRotator* BulletRotate);
	class FName GetEquipSocketName();
	void GetShootPitch(double* Pitch);
	void GetThrowObjectClass(class UClass** ThrowObject);
	void On_Throw();

	int32 GetRemainBulletCount() const;
	bool IsEnableAutoAim() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ThrowWeapon_GrenadeBase_C">();
	}
	static class ABP_ThrowWeapon_GrenadeBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ThrowWeapon_GrenadeBase_C>();
	}
};
static_assert(alignof(ABP_ThrowWeapon_GrenadeBase_C) == 0x000008, "Wrong alignment on ABP_ThrowWeapon_GrenadeBase_C");
static_assert(sizeof(ABP_ThrowWeapon_GrenadeBase_C) == 0x0005A8, "Wrong size on ABP_ThrowWeapon_GrenadeBase_C");
static_assert(offsetof(ABP_ThrowWeapon_GrenadeBase_C, StaticMesh) == 0x000598, "Member 'ABP_ThrowWeapon_GrenadeBase_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_ThrowWeapon_GrenadeBase_C, ItemName) == 0x0005A0, "Member 'ABP_ThrowWeapon_GrenadeBase_C::ItemName' has a wrong offset!");

}

