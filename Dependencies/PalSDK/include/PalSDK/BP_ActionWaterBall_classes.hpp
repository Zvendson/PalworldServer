#pragma once

#include "Basic.hpp"

#include "BP_Action_ParabolaBallBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_ActionWaterBall.BP_ActionWaterBall_C
// 0x0000 (0x02D0 - 0x02D0)
class UBP_ActionWaterBall_C final : public UBP_Action_ParabolaBallBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionWaterBall_C">();
	}
	static class UBP_ActionWaterBall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionWaterBall_C>();
	}
};
static_assert(alignof(UBP_ActionWaterBall_C) == 0x000010, "Wrong alignment on UBP_ActionWaterBall_C");
static_assert(sizeof(UBP_ActionWaterBall_C) == 0x0002D0, "Wrong size on UBP_ActionWaterBall_C");

}

