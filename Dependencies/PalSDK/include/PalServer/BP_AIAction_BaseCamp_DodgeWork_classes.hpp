#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_AIAction_BaseCamp_DodgeWork.BP_AIAction_BaseCamp_DodgeWork_C
// 0x0000 (0x0190 - 0x0190)
class UBP_AIAction_BaseCamp_DodgeWork_C final : public UPalAIActionBaseCampDodgeWork
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_BaseCamp_DodgeWork_C">();
	}
	static class UBP_AIAction_BaseCamp_DodgeWork_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_BaseCamp_DodgeWork_C>();
	}
};
static_assert(alignof(UBP_AIAction_BaseCamp_DodgeWork_C) == 0x000008, "Wrong alignment on UBP_AIAction_BaseCamp_DodgeWork_C");
static_assert(sizeof(UBP_AIAction_BaseCamp_DodgeWork_C) == 0x000190, "Wrong size on UBP_AIAction_BaseCamp_DodgeWork_C");

}

