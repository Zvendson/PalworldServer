#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalBotBuilderLocation.BP_PalBotBuilderLocation_C
// 0x0020 (0x02B8 - 0x0298)
class ABP_PalBotBuilderLocation_C final : public APalBotBuilderLocationBase
{
public:
	class UStaticMeshComponent*                   GuildArea;                                         // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   AreaCube;                                          // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalBotBuilderLocation_C">();
	}
	static class ABP_PalBotBuilderLocation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalBotBuilderLocation_C>();
	}
};
static_assert(alignof(ABP_PalBotBuilderLocation_C) == 0x000008, "Wrong alignment on ABP_PalBotBuilderLocation_C");
static_assert(sizeof(ABP_PalBotBuilderLocation_C) == 0x0002B8, "Wrong size on ABP_PalBotBuilderLocation_C");
static_assert(offsetof(ABP_PalBotBuilderLocation_C, GuildArea) == 0x000298, "Member 'ABP_PalBotBuilderLocation_C::GuildArea' has a wrong offset!");
static_assert(offsetof(ABP_PalBotBuilderLocation_C, AreaCube) == 0x0002A0, "Member 'ABP_PalBotBuilderLocation_C::AreaCube' has a wrong offset!");
static_assert(offsetof(ABP_PalBotBuilderLocation_C, Arrow) == 0x0002A8, "Member 'ABP_PalBotBuilderLocation_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_PalBotBuilderLocation_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABP_PalBotBuilderLocation_C::DefaultSceneRoot' has a wrong offset!");

}

