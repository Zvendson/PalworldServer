#pragma once

#include "Basic.hpp"

#include "BP_Action_SpawnItemBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_Action_SpawnItem_CowPal.BP_Action_SpawnItem_CowPal_C
// 0x0000 (0x01C0 - 0x01C0)
class UBP_Action_SpawnItem_CowPal_C final : public UBP_Action_SpawnItemBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_SpawnItem_CowPal_C">();
	}
	static class UBP_Action_SpawnItem_CowPal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_SpawnItem_CowPal_C>();
	}
};
static_assert(alignof(UBP_Action_SpawnItem_CowPal_C) == 0x000010, "Wrong alignment on UBP_Action_SpawnItem_CowPal_C");
static_assert(sizeof(UBP_Action_SpawnItem_CowPal_C) == 0x0001C0, "Wrong size on UBP_Action_SpawnItem_CowPal_C");

}

