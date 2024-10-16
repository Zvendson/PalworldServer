#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BPI_SkillEffect.BPI_SkillEffect_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_SkillEffect_C final : public IInterface
{
public:
	void CancelShoot();
	void ShootBullet(const struct FVector& TargetLocation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_SkillEffect_C">();
	}
	static class IBPI_SkillEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_SkillEffect_C>();
	}
};
static_assert(alignof(IBPI_SkillEffect_C) == 0x000008, "Wrong alignment on IBPI_SkillEffect_C");
static_assert(sizeof(IBPI_SkillEffect_C) == 0x000028, "Wrong size on IBPI_SkillEffect_C");

}

