#pragma once

#include "Basic.hpp"

#include "BP_ActionStepBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_ActionStep_Back.BP_ActionStep_Back_C
// 0x0000 (0x0230 - 0x0230)
class UBP_ActionStep_Back_C final : public UBP_ActionStepBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionStep_Back_C">();
	}
	static class UBP_ActionStep_Back_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionStep_Back_C>();
	}
};
static_assert(alignof(UBP_ActionStep_Back_C) == 0x000010, "Wrong alignment on UBP_ActionStep_Back_C");
static_assert(sizeof(UBP_ActionStep_Back_C) == 0x000230, "Wrong size on UBP_ActionStep_Back_C");

}

