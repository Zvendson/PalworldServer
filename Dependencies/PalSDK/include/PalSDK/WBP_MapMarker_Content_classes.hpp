#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_MapMarker_Content.WBP_MapMarker_Content_C
// 0x0040 (0x02B8 - 0x0278)
class UWBP_MapMarker_Content_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 FrameFlare;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Select;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              WBP_PalInvisibleButton;                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Index_0;                                           // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A4[0x4];                                      // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_MapMarker_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_MapMarker_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_MapMarker_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_MapMarker_Content(int32 EntryPoint);
	void OnClicked__DelegateSignature(int32 Index_0);
	void SetIndex(int32 Index_0, class UTexture2D* Texture);
	void SetSelected(bool IsSelected);
	void SetUnhovered();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MapMarker_Content_C">();
	}
	static class UWBP_MapMarker_Content_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MapMarker_Content_C>();
	}
};
static_assert(alignof(UWBP_MapMarker_Content_C) == 0x000008, "Wrong alignment on UWBP_MapMarker_Content_C");
static_assert(sizeof(UWBP_MapMarker_Content_C) == 0x0002B8, "Wrong size on UWBP_MapMarker_Content_C");
static_assert(offsetof(UWBP_MapMarker_Content_C, UberGraphFrame) == 0x000278, "Member 'UWBP_MapMarker_Content_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Content_C, FrameFlare) == 0x000280, "Member 'UWBP_MapMarker_Content_C::FrameFlare' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Content_C, Icon) == 0x000288, "Member 'UWBP_MapMarker_Content_C::Icon' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Content_C, Select) == 0x000290, "Member 'UWBP_MapMarker_Content_C::Select' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Content_C, WBP_PalInvisibleButton) == 0x000298, "Member 'UWBP_MapMarker_Content_C::WBP_PalInvisibleButton' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Content_C, Index_0) == 0x0002A0, "Member 'UWBP_MapMarker_Content_C::Index_0' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Content_C, OnClicked) == 0x0002A8, "Member 'UWBP_MapMarker_Content_C::OnClicked' has a wrong offset!");

}

