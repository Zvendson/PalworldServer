#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_IngameMenu_TaskMaterial.WBP_IngameMenu_TaskMaterial_C
// 0x0038 (0x02B0 - 0x0278)
class UWBP_IngameMenu_TaskMaterial_C final : public UUserWidget
{
public:
	class UImage*                                 Image;                                             // 0x0278(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_56;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_34;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_ItemNum;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonItemIcon_C*               WBP_PalCommonItemIcon;                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCurveLinearColor*                      GaugeColor;                                        // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Hide_when_Zero;                                 // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetHIdeWhenZeroFlag(bool IsHideWhenZero);
	void SetItemNum(int64 ItemNum, int64 GaugeMaxBorderNum);
	void SetupTexture(class FName StaticItemId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngameMenu_TaskMaterial_C">();
	}
	static class UWBP_IngameMenu_TaskMaterial_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngameMenu_TaskMaterial_C>();
	}
};
static_assert(alignof(UWBP_IngameMenu_TaskMaterial_C) == 0x000008, "Wrong alignment on UWBP_IngameMenu_TaskMaterial_C");
static_assert(sizeof(UWBP_IngameMenu_TaskMaterial_C) == 0x0002B0, "Wrong size on UWBP_IngameMenu_TaskMaterial_C");
static_assert(offsetof(UWBP_IngameMenu_TaskMaterial_C, Image) == 0x000278, "Member 'UWBP_IngameMenu_TaskMaterial_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_TaskMaterial_C, Image_56) == 0x000280, "Member 'UWBP_IngameMenu_TaskMaterial_C::Image_56' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_TaskMaterial_C, ProgressBar_34) == 0x000288, "Member 'UWBP_IngameMenu_TaskMaterial_C::ProgressBar_34' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_TaskMaterial_C, Text_ItemNum) == 0x000290, "Member 'UWBP_IngameMenu_TaskMaterial_C::Text_ItemNum' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_TaskMaterial_C, WBP_PalCommonItemIcon) == 0x000298, "Member 'UWBP_IngameMenu_TaskMaterial_C::WBP_PalCommonItemIcon' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_TaskMaterial_C, GaugeColor) == 0x0002A0, "Member 'UWBP_IngameMenu_TaskMaterial_C::GaugeColor' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_TaskMaterial_C, Is_Hide_when_Zero) == 0x0002A8, "Member 'UWBP_IngameMenu_TaskMaterial_C::Is_Hide_when_Zero' has a wrong offset!");

}

