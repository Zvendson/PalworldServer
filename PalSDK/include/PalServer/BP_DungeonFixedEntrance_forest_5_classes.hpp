#pragma once

#include "Basic.hpp"

#include "BP_DungeonFixedEntrance_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_DungeonFixedEntrance_forest_5.BP_DungeonFixedEntrance_forest_5_C
// 0x0008 (0x0350 - 0x0348)
class ABP_DungeonFixedEntrance_forest_5_C final : public ABP_DungeonFixedEntrance_C
{
public:
	class UNiagaraComponent*                      Niagara;                                           // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DungeonFixedEntrance_forest_5_C">();
	}
	static class ABP_DungeonFixedEntrance_forest_5_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DungeonFixedEntrance_forest_5_C>();
	}
};
static_assert(alignof(ABP_DungeonFixedEntrance_forest_5_C) == 0x000008, "Wrong alignment on ABP_DungeonFixedEntrance_forest_5_C");
static_assert(sizeof(ABP_DungeonFixedEntrance_forest_5_C) == 0x000350, "Wrong size on ABP_DungeonFixedEntrance_forest_5_C");
static_assert(offsetof(ABP_DungeonFixedEntrance_forest_5_C, Niagara) == 0x000348, "Member 'ABP_DungeonFixedEntrance_forest_5_C::Niagara' has a wrong offset!");

}

