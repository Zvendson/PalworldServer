#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_MapObjectSpawnerLocationComponent_SkillFruits.BP_MapObjectSpawnerLocationComponent_SkillFruits_C
// 0x0000 (0x05F0 - 0x05F0)
class UBP_MapObjectSpawnerLocationComponent_SkillFruits_C final : public UPalMapObjectSpawnerMultiItemLocationComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapObjectSpawnerLocationComponent_SkillFruits_C">();
	}
	static class UBP_MapObjectSpawnerLocationComponent_SkillFruits_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MapObjectSpawnerLocationComponent_SkillFruits_C>();
	}
};
static_assert(alignof(UBP_MapObjectSpawnerLocationComponent_SkillFruits_C) == 0x000010, "Wrong alignment on UBP_MapObjectSpawnerLocationComponent_SkillFruits_C");
static_assert(sizeof(UBP_MapObjectSpawnerLocationComponent_SkillFruits_C) == 0x0005F0, "Wrong size on UBP_MapObjectSpawnerLocationComponent_SkillFruits_C");

}

