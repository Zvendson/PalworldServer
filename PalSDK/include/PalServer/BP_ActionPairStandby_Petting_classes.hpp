#pragma once

#include "Basic.hpp"

#include "BP_ActionPairStandbyBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_ActionPairStandby_Petting.BP_ActionPairStandby_Petting_C
// 0x0000 (0x0160 - 0x0160)
class UBP_ActionPairStandby_Petting_C final : public UBP_ActionPairStandbyBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionPairStandby_Petting_C">();
	}
	static class UBP_ActionPairStandby_Petting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionPairStandby_Petting_C>();
	}
};
static_assert(alignof(UBP_ActionPairStandby_Petting_C) == 0x000010, "Wrong alignment on UBP_ActionPairStandby_Petting_C");
static_assert(sizeof(UBP_ActionPairStandby_Petting_C) == 0x000160, "Wrong size on UBP_ActionPairStandby_Petting_C");

}

