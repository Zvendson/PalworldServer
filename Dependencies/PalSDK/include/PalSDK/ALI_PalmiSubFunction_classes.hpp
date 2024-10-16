#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace PalSDK
{

// AnimBlueprintGeneratedClass ALI_PalmiSubFunction.ALI_PalmiSubFunction_C
// 0x0000 (0x0028 - 0x0028)
class IALI_PalmiSubFunction_C final : public IAnimLayerInterface
{
public:
	void LeftHandAttach(const struct FPoseLink& InPose, struct FPoseLink* LeftHandAttach_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ALI_PalmiSubFunction_C">();
	}
	static class IALI_PalmiSubFunction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IALI_PalmiSubFunction_C>();
	}
};
static_assert(alignof(IALI_PalmiSubFunction_C) == 0x000008, "Wrong alignment on IALI_PalmiSubFunction_C");
static_assert(sizeof(IALI_PalmiSubFunction_C) == 0x000028, "Wrong size on IALI_PalmiSubFunction_C");

}

