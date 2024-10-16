#pragma once

#include "Basic.hpp"

#include "WBP_WorldMap_IconBase_NoDesign_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_Map_IconDungeon.WBP_Map_IconDungeon_C
// 0x0020 (0x0478 - 0x0458)
class UWBP_Map_IconDungeon_C final : public UWBP_WorldMap_IconBase_NoDesign_C
{
public:
	class UImage*                                 Icon;                                              // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonButton_C*                 WBP_PalCommonButton;                               // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGuid                                  BaseCampId;                                        // 0x0468(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Map_IconDungeon_C">();
	}
	static class UWBP_Map_IconDungeon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Map_IconDungeon_C>();
	}
};
static_assert(alignof(UWBP_Map_IconDungeon_C) == 0x000008, "Wrong alignment on UWBP_Map_IconDungeon_C");
static_assert(sizeof(UWBP_Map_IconDungeon_C) == 0x000478, "Wrong size on UWBP_Map_IconDungeon_C");
static_assert(offsetof(UWBP_Map_IconDungeon_C, Icon) == 0x000458, "Member 'UWBP_Map_IconDungeon_C::Icon' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconDungeon_C, WBP_PalCommonButton) == 0x000460, "Member 'UWBP_Map_IconDungeon_C::WBP_PalCommonButton' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconDungeon_C, BaseCampId) == 0x000468, "Member 'UWBP_Map_IconDungeon_C::BaseCampId' has a wrong offset!");

}

