#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace PalSDK
{

// AnimBlueprintGeneratedClass ALI_NPC_HairCloth.ALI_NPC_HairCloth_C
// 0x0000 (0x0028 - 0x0028)
class IALI_NPC_HairCloth_C final : public IAnimLayerInterface
{
public:
	void NPC_HairClothLayer(const struct FPoseLink& InPose, struct FPoseLink* NPC_HairClothLayer_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ALI_NPC_HairCloth_C">();
	}
	static class IALI_NPC_HairCloth_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IALI_NPC_HairCloth_C>();
	}
};
static_assert(alignof(IALI_NPC_HairCloth_C) == 0x000008, "Wrong alignment on IALI_NPC_HairCloth_C");
static_assert(sizeof(IALI_NPC_HairCloth_C) == 0x000028, "Wrong size on IALI_NPC_HairCloth_C");

}

