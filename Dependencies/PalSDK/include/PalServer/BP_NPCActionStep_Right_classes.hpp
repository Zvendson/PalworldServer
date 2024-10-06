#pragma once

#include "Basic.hpp"

#include "BP_NPCActionStepBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_NPCActionStep_Right.BP_NPCActionStep_Right_C
// 0x0000 (0x01B0 - 0x01B0)
class UBP_NPCActionStep_Right_C final : public UBP_NPCActionStepBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NPCActionStep_Right_C">();
	}
	static class UBP_NPCActionStep_Right_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_NPCActionStep_Right_C>();
	}
};
static_assert(alignof(UBP_NPCActionStep_Right_C) == 0x000010, "Wrong alignment on UBP_NPCActionStep_Right_C");
static_assert(sizeof(UBP_NPCActionStep_Right_C) == 0x0001B0, "Wrong size on UBP_NPCActionStep_Right_C");

}

