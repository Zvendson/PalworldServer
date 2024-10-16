#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_PalItemSlotBase_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_PalCommonItemSlot.WBP_PalCommonItemSlot_C
// 0x0050 (0x04F0 - 0x04A0)
class UWBP_PalCommonItemSlot_C final : public UWBP_PalItemSlotBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_PalCommonItemSlot_C;            // 0x04A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Background;                                        // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Background_circle_b;                               // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Background_Circle_f;                               // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_C_135;                             // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonItemIcon_C*               WBP_PalCommonItemIcon;                             // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnAfterSetEmpty;                                   // 0x04D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnAfterUpdateSlot;                                 // 0x04E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_WBP_PalCommonItemSlot(int32 EntryPoint);
	void OnAfterSetEmpty__DelegateSignature();
	void OnAfterUpdateSlot__DelegateSignature();
	void OnInitialized();
	void OnSetEmpty_Binded();
	void OnSetValidSlot_Binded();
	void OnUpdateSlot_Binded(class UPalItemSlot* TargetSlot_0);
	void RegisterItemIconWidget(class UWBP_PalItemIconBase_C** IconWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalCommonItemSlot_C">();
	}
	static class UWBP_PalCommonItemSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalCommonItemSlot_C>();
	}
};
static_assert(alignof(UWBP_PalCommonItemSlot_C) == 0x000008, "Wrong alignment on UWBP_PalCommonItemSlot_C");
static_assert(sizeof(UWBP_PalCommonItemSlot_C) == 0x0004F0, "Wrong size on UWBP_PalCommonItemSlot_C");
static_assert(offsetof(UWBP_PalCommonItemSlot_C, UberGraphFrame_WBP_PalCommonItemSlot_C) == 0x0004A0, "Member 'UWBP_PalCommonItemSlot_C::UberGraphFrame_WBP_PalCommonItemSlot_C' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonItemSlot_C, Background) == 0x0004A8, "Member 'UWBP_PalCommonItemSlot_C::Background' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonItemSlot_C, Background_circle_b) == 0x0004B0, "Member 'UWBP_PalCommonItemSlot_C::Background_circle_b' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonItemSlot_C, Background_Circle_f) == 0x0004B8, "Member 'UWBP_PalCommonItemSlot_C::Background_Circle_f' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonItemSlot_C, BP_PalTextBlock_C_135) == 0x0004C0, "Member 'UWBP_PalCommonItemSlot_C::BP_PalTextBlock_C_135' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonItemSlot_C, WBP_PalCommonItemIcon) == 0x0004C8, "Member 'UWBP_PalCommonItemSlot_C::WBP_PalCommonItemIcon' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonItemSlot_C, OnAfterSetEmpty) == 0x0004D0, "Member 'UWBP_PalCommonItemSlot_C::OnAfterSetEmpty' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonItemSlot_C, OnAfterUpdateSlot) == 0x0004E0, "Member 'UWBP_PalCommonItemSlot_C::OnAfterUpdateSlot' has a wrong offset!");

}

