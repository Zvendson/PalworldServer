#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace PalSDK
{

// AnimBlueprintGeneratedClass ALI_HumanHair.ALI_HumanHair_C
// 0x0000 (0x0028 - 0x0028)
class IALI_HumanHair_C final : public IAnimLayerInterface
{
public:
	void HairLayer(const struct FPoseLink& InPose, struct FPoseLink* HairLayer_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ALI_HumanHair_C">();
	}
	static class IALI_HumanHair_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IALI_HumanHair_C>();
	}
};
static_assert(alignof(IALI_HumanHair_C) == 0x000008, "Wrong alignment on IALI_HumanHair_C");
static_assert(sizeof(IALI_HumanHair_C) == 0x000028, "Wrong size on IALI_HumanHair_C");

}

