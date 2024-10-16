#pragma once

#include "Basic.hpp"

#include "BP_NormalBullet_NPC_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_AAMachineGunBullet.BP_AAMachineGunBullet_C
// 0x0000 (0x0380 - 0x0380)
class ABP_AAMachineGunBullet_C final : public ABP_NormalBullet_NPC_C
{
public:
	void OnHitToActor(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& Hit);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AAMachineGunBullet_C">();
	}
	static class ABP_AAMachineGunBullet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AAMachineGunBullet_C>();
	}
};
static_assert(alignof(ABP_AAMachineGunBullet_C) == 0x000008, "Wrong alignment on ABP_AAMachineGunBullet_C");
static_assert(sizeof(ABP_AAMachineGunBullet_C) == 0x000380, "Wrong size on ABP_AAMachineGunBullet_C");

}

