#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_ItemGet.WBP_ItemGet_C
// 0x0080 (0x02F8 - 0x0278)
class UWBP_ItemGet_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Close;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Open;                                          // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Base;                                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalRichTextBlock_C*                 BP_PalRichTextBlock_C_128;                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Eff_00;                                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Eff_01;                                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemGet_base_C;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemGet_base_L;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemGet_base_R;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemIcon;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemIcon_Shadow;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnOpened;                                          // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClosed;                                          // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void AnmEvent_Close();
	void AnmEvent_Open();
	void ChangeBgColor(const struct FLinearColor& Color);
	void ExecuteUbergraph_WBP_ItemGet(int32 EntryPoint);
	void Finished_1F002FD94DF611BBD1EF47BE09B9889B();
	void Finished_841401E94A6018595306E0AC3B421AB7();
	void HideIcon();
	void OnClosed__DelegateSignature();
	void OnOpened__DelegateSignature();
	void SetDefaultFontStyleName(class FName StyleName);
	void SetIconTexture(class UTexture2D* Texture);
	void SetText(const class FText& Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ItemGet_C">();
	}
	static class UWBP_ItemGet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ItemGet_C>();
	}
};
static_assert(alignof(UWBP_ItemGet_C) == 0x000008, "Wrong alignment on UWBP_ItemGet_C");
static_assert(sizeof(UWBP_ItemGet_C) == 0x0002F8, "Wrong size on UWBP_ItemGet_C");
static_assert(offsetof(UWBP_ItemGet_C, UberGraphFrame) == 0x000278, "Member 'UWBP_ItemGet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ItemGet_C, Anm_Close) == 0x000280, "Member 'UWBP_ItemGet_C::Anm_Close' has a wrong offset!");
static_assert(offsetof(UWBP_ItemGet_C, Anm_Open) == 0x000288, "Member 'UWBP_ItemGet_C::Anm_Open' has a wrong offset!");
static_assert(offsetof(UWBP_ItemGet_C, Base) == 0x000290, "Member 'UWBP_ItemGet_C::Base' has a wrong offset!");
static_assert(offsetof(UWBP_ItemGet_C, BP_PalRichTextBlock_C_128) == 0x000298, "Member 'UWBP_ItemGet_C::BP_PalRichTextBlock_C_128' has a wrong offset!");
static_assert(offsetof(UWBP_ItemGet_C, Eff_00) == 0x0002A0, "Member 'UWBP_ItemGet_C::Eff_00' has a wrong offset!");
static_assert(offsetof(UWBP_ItemGet_C, Eff_01) == 0x0002A8, "Member 'UWBP_ItemGet_C::Eff_01' has a wrong offset!");
static_assert(offsetof(UWBP_ItemGet_C, ItemGet_base_C) == 0x0002B0, "Member 'UWBP_ItemGet_C::ItemGet_base_C' has a wrong offset!");
static_assert(offsetof(UWBP_ItemGet_C, ItemGet_base_L) == 0x0002B8, "Member 'UWBP_ItemGet_C::ItemGet_base_L' has a wrong offset!");
static_assert(offsetof(UWBP_ItemGet_C, ItemGet_base_R) == 0x0002C0, "Member 'UWBP_ItemGet_C::ItemGet_base_R' has a wrong offset!");
static_assert(offsetof(UWBP_ItemGet_C, ItemIcon) == 0x0002C8, "Member 'UWBP_ItemGet_C::ItemIcon' has a wrong offset!");
static_assert(offsetof(UWBP_ItemGet_C, ItemIcon_Shadow) == 0x0002D0, "Member 'UWBP_ItemGet_C::ItemIcon_Shadow' has a wrong offset!");
static_assert(offsetof(UWBP_ItemGet_C, OnOpened) == 0x0002D8, "Member 'UWBP_ItemGet_C::OnOpened' has a wrong offset!");
static_assert(offsetof(UWBP_ItemGet_C, OnClosed) == 0x0002E8, "Member 'UWBP_ItemGet_C::OnClosed' has a wrong offset!");

}

