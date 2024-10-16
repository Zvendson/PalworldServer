#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "BP_ThrowWeaponBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_CapturePrism.BP_CapturePrism_C
// 0x0010 (0x05A8 - 0x0598)
class ABP_CapturePrism_C final : public ABP_ThrowWeaponBase_C
{
public:
	class USkeletalMeshComponent*                 SK_Weapon_PalSphere_001;                           // 0x0598(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	EPalCaptureSphereLevelType                    CaptureSphereType;                                 // 0x05A0(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool DecrementBullet();
	void GetCaptureLevel(int32* Level);
	class FName GetEquipSocketName();
	void GetThrowObjectClass(class UClass** ThrowObject);
	void On_Throw();
	void OnEndShootAnimation(class UAnimMontage* Montage);
	void OnThrowInternal(class AActor* Bullet);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CapturePrism_C">();
	}
	static class ABP_CapturePrism_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CapturePrism_C>();
	}
};
static_assert(alignof(ABP_CapturePrism_C) == 0x000008, "Wrong alignment on ABP_CapturePrism_C");
static_assert(sizeof(ABP_CapturePrism_C) == 0x0005A8, "Wrong size on ABP_CapturePrism_C");
static_assert(offsetof(ABP_CapturePrism_C, SK_Weapon_PalSphere_001) == 0x000598, "Member 'ABP_CapturePrism_C::SK_Weapon_PalSphere_001' has a wrong offset!");
static_assert(offsetof(ABP_CapturePrism_C, CaptureSphereType) == 0x0005A0, "Member 'ABP_CapturePrism_C::CaptureSphereType' has a wrong offset!");

}

