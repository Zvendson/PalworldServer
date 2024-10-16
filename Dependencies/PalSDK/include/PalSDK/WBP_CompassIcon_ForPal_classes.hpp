#pragma once

#include "Basic.hpp"

#include "WBP_IngameCompass_arrow_classes.hpp"
#include "Engine_structs.hpp"
#include "Pal_structs.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_CompassIcon_ForPal.WBP_CompassIcon_ForPal_C
// 0x0008 (0x0468 - 0x0460)
class UWBP_CompassIcon_ForPal_C final : public UWBP_IngameCompass_arrow_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_CompassIcon_ForPal_C;           // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_WBP_CompassIcon_ForPal(int32 EntryPoint);
	void OnInitialized();
	void SetupTexture(TSoftObjectPtr<class UTexture2D> SoftTexture);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CompassIcon_ForPal_C">();
	}
	static class UWBP_CompassIcon_ForPal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CompassIcon_ForPal_C>();
	}
};
static_assert(alignof(UWBP_CompassIcon_ForPal_C) == 0x000008, "Wrong alignment on UWBP_CompassIcon_ForPal_C");
static_assert(sizeof(UWBP_CompassIcon_ForPal_C) == 0x000468, "Wrong size on UWBP_CompassIcon_ForPal_C");
static_assert(offsetof(UWBP_CompassIcon_ForPal_C, UberGraphFrame_WBP_CompassIcon_ForPal_C) == 0x000460, "Member 'UWBP_CompassIcon_ForPal_C::UberGraphFrame_WBP_CompassIcon_ForPal_C' has a wrong offset!");

}

