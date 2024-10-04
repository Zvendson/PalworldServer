#pragma once

#include "Basic.hpp"

#include "BP_ItemBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_Item_Wheat.BP_Item_Wheat_C
// 0x0008 (0x02B8 - 0x02B0)
class ABP_Item_Wheat_C final : public ABP_ItemBase_C
{
public:
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Item_Wheat_C">();
	}
	static class ABP_Item_Wheat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Item_Wheat_C>();
	}
};
static_assert(alignof(ABP_Item_Wheat_C) == 0x000008, "Wrong alignment on ABP_Item_Wheat_C");
static_assert(sizeof(ABP_Item_Wheat_C) == 0x0002B8, "Wrong size on ABP_Item_Wheat_C");
static_assert(offsetof(ABP_Item_Wheat_C, StaticMesh1) == 0x0002B0, "Member 'ABP_Item_Wheat_C::StaticMesh1' has a wrong offset!");

}

