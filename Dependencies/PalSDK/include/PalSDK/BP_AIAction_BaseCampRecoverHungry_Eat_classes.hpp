#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_AIAction_BaseCampRecoverHungry_Eat.BP_AIAction_BaseCampRecoverHungry_Eat_C
// 0x0000 (0x0170 - 0x0170)
class UBP_AIAction_BaseCampRecoverHungry_Eat_C final : public UPalAIActionBaseCampRecoverHungryEat
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_BaseCampRecoverHungry_Eat_C">();
	}
	static class UBP_AIAction_BaseCampRecoverHungry_Eat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_BaseCampRecoverHungry_Eat_C>();
	}
};
static_assert(alignof(UBP_AIAction_BaseCampRecoverHungry_Eat_C) == 0x000008, "Wrong alignment on UBP_AIAction_BaseCampRecoverHungry_Eat_C");
static_assert(sizeof(UBP_AIAction_BaseCampRecoverHungry_Eat_C) == 0x000170, "Wrong size on UBP_AIAction_BaseCampRecoverHungry_Eat_C");

}

