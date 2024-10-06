#pragma once

#include "Basic.hpp"

#include "BP_ActionDefenseWait_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_ActionDefenseWait_Wait.BP_ActionDefenseWait_Wait_C
// 0x0000 (0x0160 - 0x0160)
class UBP_ActionDefenseWait_Wait_C final : public UBP_ActionDefenseWait_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionDefenseWait_Wait_C">();
	}
	static class UBP_ActionDefenseWait_Wait_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionDefenseWait_Wait_C>();
	}
};
static_assert(alignof(UBP_ActionDefenseWait_Wait_C) == 0x000010, "Wrong alignment on UBP_ActionDefenseWait_Wait_C");
static_assert(sizeof(UBP_ActionDefenseWait_Wait_C) == 0x000160, "Wrong size on UBP_ActionDefenseWait_Wait_C");

}

