#pragma once

#include "Basic.hpp"

#include "WBP_CompassIconBase_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_IngameCompass_dungeonPortal.WBP_IngameCompass_dungeonPortal_C
// 0x0010 (0x0458 - 0x0448)
class UWBP_IngameCompass_dungeonPortal_C final : public UWBP_CompassIconBase_C
{
public:
	class UImage*                                 Image_Icon;                                        // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Length;                                       // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetDistanceText(double Length);
	void SetupTexture(TSoftObjectPtr<class UTexture2D> SoftTexture);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngameCompass_dungeonPortal_C">();
	}
	static class UWBP_IngameCompass_dungeonPortal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngameCompass_dungeonPortal_C>();
	}
};
static_assert(alignof(UWBP_IngameCompass_dungeonPortal_C) == 0x000008, "Wrong alignment on UWBP_IngameCompass_dungeonPortal_C");
static_assert(sizeof(UWBP_IngameCompass_dungeonPortal_C) == 0x000458, "Wrong size on UWBP_IngameCompass_dungeonPortal_C");
static_assert(offsetof(UWBP_IngameCompass_dungeonPortal_C, Image_Icon) == 0x000448, "Member 'UWBP_IngameCompass_dungeonPortal_C::Image_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_IngameCompass_dungeonPortal_C, Text_Length) == 0x000450, "Member 'UWBP_IngameCompass_dungeonPortal_C::Text_Length' has a wrong offset!");

}

