#pragma once

#include "Basic.hpp"

#include "WBP_WorldMap_IconBase_NoDesign_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_Map_IconDeath.WBP_Map_IconDeath_C
// 0x0008 (0x0460 - 0x0458)
class UWBP_Map_IconDeath_C final : public UWBP_WorldMap_IconBase_NoDesign_C
{
public:
	class UImage*                                 Icon;                                              // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Map_IconDeath_C">();
	}
	static class UWBP_Map_IconDeath_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Map_IconDeath_C>();
	}
};
static_assert(alignof(UWBP_Map_IconDeath_C) == 0x000008, "Wrong alignment on UWBP_Map_IconDeath_C");
static_assert(sizeof(UWBP_Map_IconDeath_C) == 0x000460, "Wrong size on UWBP_Map_IconDeath_C");
static_assert(offsetof(UWBP_Map_IconDeath_C, Icon) == 0x000458, "Member 'UWBP_Map_IconDeath_C::Icon' has a wrong offset!");

}

