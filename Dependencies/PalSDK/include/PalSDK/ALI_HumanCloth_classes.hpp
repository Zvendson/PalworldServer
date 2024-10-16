#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace PalSDK
{

// AnimBlueprintGeneratedClass ALI_HumanCloth.ALI_HumanCloth_C
// 0x0000 (0x0028 - 0x0028)
class IALI_HumanCloth_C final : public IAnimLayerInterface
{
public:
	void ClothLayer(const struct FPoseLink& InPose, struct FPoseLink* ClothLayer_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ALI_HumanCloth_C">();
	}
	static class IALI_HumanCloth_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IALI_HumanCloth_C>();
	}
};
static_assert(alignof(IALI_HumanCloth_C) == 0x000008, "Wrong alignment on IALI_HumanCloth_C");
static_assert(sizeof(IALI_HumanCloth_C) == 0x000028, "Wrong size on IALI_HumanCloth_C");

}

