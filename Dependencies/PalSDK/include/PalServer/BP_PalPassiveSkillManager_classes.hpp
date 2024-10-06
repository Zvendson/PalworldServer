#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalPassiveSkillManager.BP_PalPassiveSkillManager_C
// 0x0000 (0x02A0 - 0x02A0)
class UBP_PalPassiveSkillManager_C final : public UPalPassiveSkillManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalPassiveSkillManager_C">();
	}
	static class UBP_PalPassiveSkillManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalPassiveSkillManager_C>();
	}
};
static_assert(alignof(UBP_PalPassiveSkillManager_C) == 0x000008, "Wrong alignment on UBP_PalPassiveSkillManager_C");
static_assert(sizeof(UBP_PalPassiveSkillManager_C) == 0x0002A0, "Wrong size on UBP_PalPassiveSkillManager_C");

}

