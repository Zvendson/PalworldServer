#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_Notice.WBP_Notice_C
// 0x0090 (0x0308 - 0x0278)
class UWBP_Notice_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Visit_Close;                                   // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Visit_Open;                                    // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Raid_Close;                                    // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Raid_Open;                                     // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_C_84;                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_notice;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_notice_Shadow;                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Notice_base_C;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Notice_base_C_1;                                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Notice_base_L;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Notice_base_L_1;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Notice_base_R;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Notice_base_R_1;                                   // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnOpened;                                          // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClosed;                                          // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void AnmEvent_Close_Negative();
	void AnmEvent_Close_Positive();
	void AnmEvent_Open_Negative();
	void AnmEvent_Open_Positive();
	void ExecuteUbergraph_WBP_Notice(int32 EntryPoint);
	void Finished_1C35836941B88D2824102B8E8EC65295();
	void Finished_6DE1EEED4A47BC160DDFEBA700165427();
	void Finished_6F0CFBFE4FFC647FC29A08AD10869738();
	void Finished_77B22E4B4836BC8AB8B4A08F2691F416();
	void HideIcon();
	void OnClosed__DelegateSignature();
	void OnOpened__DelegateSignature();
	void SetIconTexture(class UTexture2D* Texture);
	void SetText(const class FText& Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Notice_C">();
	}
	static class UWBP_Notice_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Notice_C>();
	}
};
static_assert(alignof(UWBP_Notice_C) == 0x000008, "Wrong alignment on UWBP_Notice_C");
static_assert(sizeof(UWBP_Notice_C) == 0x000308, "Wrong size on UWBP_Notice_C");
static_assert(offsetof(UWBP_Notice_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Notice_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_C, Anm_Visit_Close) == 0x000280, "Member 'UWBP_Notice_C::Anm_Visit_Close' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_C, Anm_Visit_Open) == 0x000288, "Member 'UWBP_Notice_C::Anm_Visit_Open' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_C, Anm_Raid_Close) == 0x000290, "Member 'UWBP_Notice_C::Anm_Raid_Close' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_C, Anm_Raid_Open) == 0x000298, "Member 'UWBP_Notice_C::Anm_Raid_Open' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_C, BP_PalTextBlock_C_84) == 0x0002A0, "Member 'UWBP_Notice_C::BP_PalTextBlock_C_84' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_C, Icon_notice) == 0x0002A8, "Member 'UWBP_Notice_C::Icon_notice' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_C, Icon_notice_Shadow) == 0x0002B0, "Member 'UWBP_Notice_C::Icon_notice_Shadow' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_C, Notice_base_C) == 0x0002B8, "Member 'UWBP_Notice_C::Notice_base_C' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_C, Notice_base_C_1) == 0x0002C0, "Member 'UWBP_Notice_C::Notice_base_C_1' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_C, Notice_base_L) == 0x0002C8, "Member 'UWBP_Notice_C::Notice_base_L' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_C, Notice_base_L_1) == 0x0002D0, "Member 'UWBP_Notice_C::Notice_base_L_1' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_C, Notice_base_R) == 0x0002D8, "Member 'UWBP_Notice_C::Notice_base_R' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_C, Notice_base_R_1) == 0x0002E0, "Member 'UWBP_Notice_C::Notice_base_R_1' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_C, OnOpened) == 0x0002E8, "Member 'UWBP_Notice_C::OnOpened' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_C, OnClosed) == 0x0002F8, "Member 'UWBP_Notice_C::OnClosed' has a wrong offset!");

}

