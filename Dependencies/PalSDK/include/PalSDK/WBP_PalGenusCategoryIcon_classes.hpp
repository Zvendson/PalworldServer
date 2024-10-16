#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_PalGenusCategoryIcon.WBP_PalGenusCategoryIcon_C
// 0x0058 (0x0460 - 0x0408)
class UWBP_PalGenusCategoryIcon_C final : public UPalUserWidget
{
public:
	class UImage*                                 Image_15;                                          // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<EPalGenusCategoryType, TSoftObjectPtr<class UTexture2D>> IconMap;                                           // 0x0410(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Setup(EPalGenusCategoryType Category);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalGenusCategoryIcon_C">();
	}
	static class UWBP_PalGenusCategoryIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalGenusCategoryIcon_C>();
	}
};
static_assert(alignof(UWBP_PalGenusCategoryIcon_C) == 0x000008, "Wrong alignment on UWBP_PalGenusCategoryIcon_C");
static_assert(sizeof(UWBP_PalGenusCategoryIcon_C) == 0x000460, "Wrong size on UWBP_PalGenusCategoryIcon_C");
static_assert(offsetof(UWBP_PalGenusCategoryIcon_C, Image_15) == 0x000408, "Member 'UWBP_PalGenusCategoryIcon_C::Image_15' has a wrong offset!");
static_assert(offsetof(UWBP_PalGenusCategoryIcon_C, IconMap) == 0x000410, "Member 'UWBP_PalGenusCategoryIcon_C::IconMap' has a wrong offset!");

}

