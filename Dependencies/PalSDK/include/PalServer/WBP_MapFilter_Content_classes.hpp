#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "UMG_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_MapFilter_Content.WBP_MapFilter_Content_C
// 0x0048 (0x02C0 - 0x0278)
class UWBP_MapFilter_Content_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCheckBox*                              CheckBox;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Focus;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_FilterContent;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              WBP_PalInvisibleButton;                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EPalLocationType                              Location_Type;                                     // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A1[0x7];                                      // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             ChangeFilter;                                      // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          ForceEnable;                                       // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_MapFilter_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_MapFilter_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_MapFilter_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ChangeFilter__DelegateSignature(EPalLocationType LocationType, bool IsEnable);
	void ExecuteUbergraph_WBP_MapFilter_Content(int32 EntryPoint);
	void SetFilter(const struct FDataTableRowHandle& MsgId, EPalLocationType LocationType);
	void SetForceEnable(bool Set);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MapFilter_Content_C">();
	}
	static class UWBP_MapFilter_Content_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MapFilter_Content_C>();
	}
};
static_assert(alignof(UWBP_MapFilter_Content_C) == 0x000008, "Wrong alignment on UWBP_MapFilter_Content_C");
static_assert(sizeof(UWBP_MapFilter_Content_C) == 0x0002C0, "Wrong size on UWBP_MapFilter_Content_C");
static_assert(offsetof(UWBP_MapFilter_Content_C, UberGraphFrame) == 0x000278, "Member 'UWBP_MapFilter_Content_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MapFilter_Content_C, CheckBox) == 0x000280, "Member 'UWBP_MapFilter_Content_C::CheckBox' has a wrong offset!");
static_assert(offsetof(UWBP_MapFilter_Content_C, Focus) == 0x000288, "Member 'UWBP_MapFilter_Content_C::Focus' has a wrong offset!");
static_assert(offsetof(UWBP_MapFilter_Content_C, Text_FilterContent) == 0x000290, "Member 'UWBP_MapFilter_Content_C::Text_FilterContent' has a wrong offset!");
static_assert(offsetof(UWBP_MapFilter_Content_C, WBP_PalInvisibleButton) == 0x000298, "Member 'UWBP_MapFilter_Content_C::WBP_PalInvisibleButton' has a wrong offset!");
static_assert(offsetof(UWBP_MapFilter_Content_C, Location_Type) == 0x0002A0, "Member 'UWBP_MapFilter_Content_C::Location_Type' has a wrong offset!");
static_assert(offsetof(UWBP_MapFilter_Content_C, ChangeFilter) == 0x0002A8, "Member 'UWBP_MapFilter_Content_C::ChangeFilter' has a wrong offset!");
static_assert(offsetof(UWBP_MapFilter_Content_C, ForceEnable) == 0x0002B8, "Member 'UWBP_MapFilter_Content_C::ForceEnable' has a wrong offset!");

}

