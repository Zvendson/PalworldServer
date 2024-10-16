#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace PalSDK
{

// AnimBlueprintGeneratedClass ALI_MonsterPhysics.ALI_MonsterPhysics_C
// 0x0000 (0x0028 - 0x0028)
class IALI_MonsterPhysics_C final : public IAnimLayerInterface
{
public:
	void MonsterPhysics(const struct FPoseLink& InPose, struct FPoseLink* MonsterPhysics_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ALI_MonsterPhysics_C">();
	}
	static class IALI_MonsterPhysics_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IALI_MonsterPhysics_C>();
	}
};
static_assert(alignof(IALI_MonsterPhysics_C) == 0x000008, "Wrong alignment on IALI_MonsterPhysics_C");
static_assert(sizeof(IALI_MonsterPhysics_C) == 0x000028, "Wrong size on IALI_MonsterPhysics_C");

}

