#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_AIController_Interface_Invader.BP_AIController_Interface_Invader_C
// 0x0000 (0x0028 - 0x0028)
class IBP_AIController_Interface_Invader_C final : public IInterface
{
public:
	void BindOnInvaderArrivedDelegate(TDelegate<void()> Event);
	void OnInvaderArrived();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIController_Interface_Invader_C">();
	}
	static class IBP_AIController_Interface_Invader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBP_AIController_Interface_Invader_C>();
	}
};
static_assert(alignof(IBP_AIController_Interface_Invader_C) == 0x000008, "Wrong alignment on IBP_AIController_Interface_Invader_C");
static_assert(sizeof(IBP_AIController_Interface_Invader_C) == 0x000028, "Wrong size on IBP_AIController_Interface_Invader_C");

}

