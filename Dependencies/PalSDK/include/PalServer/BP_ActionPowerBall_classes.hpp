#pragma once

#include "Basic.hpp"

#include "BP_Action_ParabolaBallBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_ActionPowerBall.BP_ActionPowerBall_C
// 0x0000 (0x02D0 - 0x02D0)
class UBP_ActionPowerBall_C final : public UBP_Action_ParabolaBallBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionPowerBall_C">();
	}
	static class UBP_ActionPowerBall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionPowerBall_C>();
	}
};
static_assert(alignof(UBP_ActionPowerBall_C) == 0x000010, "Wrong alignment on UBP_ActionPowerBall_C");
static_assert(sizeof(UBP_ActionPowerBall_C) == 0x0002D0, "Wrong size on UBP_ActionPowerBall_C");

}

