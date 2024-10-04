#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace PalServer
{

// AnimBlueprintGeneratedClass ALI_MonsterBase.ALI_MonsterBase_C
// 0x0000 (0x0028 - 0x0028)
class IALI_MonsterBase_C final : public IAnimLayerInterface
{
public:
	void UpperOverride(const struct FPoseLink& NativePose, const struct FPoseLink& ActionPose, struct FPoseLink* UpperOverride_0);
	void LookAtOverride(const struct FPoseLink& InPose, const struct FVector& LookAtWorldLocation, struct FPoseLink* LookAtOverride_0);
	void AimingOverride(const struct FPoseLink& DefaultPose, const struct FRotator& AimRotator, struct FPoseLink* AimingOverride_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ALI_MonsterBase_C">();
	}
	static class IALI_MonsterBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IALI_MonsterBase_C>();
	}
};
static_assert(alignof(IALI_MonsterBase_C) == 0x000008, "Wrong alignment on IALI_MonsterBase_C");
static_assert(sizeof(IALI_MonsterBase_C) == 0x000028, "Wrong size on IALI_MonsterBase_C");

}

