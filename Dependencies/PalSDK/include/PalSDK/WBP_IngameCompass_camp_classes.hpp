#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_CompassIconBase_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_IngameCompass_camp.WBP_IngameCompass_camp_C
// 0x0020 (0x0468 - 0x0448)
class UWBP_IngameCompass_camp_C final : public UWBP_CompassIconBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_IngameCompass_camp_C;           // 0x0448(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Canvas_Innner;                                     // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon;                                        // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Length;                                       // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Destruct();
	void ExecuteUbergraph_WBP_IngameCompass_camp(int32 EntryPoint);
	void SetDistanceText(double Length);
	void SetupTexture(TSoftObjectPtr<class UTexture2D> SoftTexture);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngameCompass_camp_C">();
	}
	static class UWBP_IngameCompass_camp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngameCompass_camp_C>();
	}
};
static_assert(alignof(UWBP_IngameCompass_camp_C) == 0x000008, "Wrong alignment on UWBP_IngameCompass_camp_C");
static_assert(sizeof(UWBP_IngameCompass_camp_C) == 0x000468, "Wrong size on UWBP_IngameCompass_camp_C");
static_assert(offsetof(UWBP_IngameCompass_camp_C, UberGraphFrame_WBP_IngameCompass_camp_C) == 0x000448, "Member 'UWBP_IngameCompass_camp_C::UberGraphFrame_WBP_IngameCompass_camp_C' has a wrong offset!");
static_assert(offsetof(UWBP_IngameCompass_camp_C, Canvas_Innner) == 0x000450, "Member 'UWBP_IngameCompass_camp_C::Canvas_Innner' has a wrong offset!");
static_assert(offsetof(UWBP_IngameCompass_camp_C, Image_Icon) == 0x000458, "Member 'UWBP_IngameCompass_camp_C::Image_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_IngameCompass_camp_C, Text_Length) == 0x000460, "Member 'UWBP_IngameCompass_camp_C::Text_Length' has a wrong offset!");

}

