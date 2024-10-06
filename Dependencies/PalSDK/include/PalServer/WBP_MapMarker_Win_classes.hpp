#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_MapMarker_Win.WBP_MapMarker_Win_C
// 0x00E8 (0x0360 - 0x0278)
class UWBP_MapMarker_Win_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HorizontalBox;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Head_MarkerCount;                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapMarker_Button_C*                WBP_MapMarker_Button;                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapMarker_Content_C*               WBP_MapMarker_Content;                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapMarker_Content_C*               WBP_MapMarker_Content_1;                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapMarker_Content_C*               WBP_MapMarker_Content_2;                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapMarker_Content_C*               WBP_MapMarker_Content_3;                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapMarker_Content_C*               WBP_MapMarker_Content_4;                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapMarker_Content_C*               WBP_MapMarker_Content_5;                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapMarker_Content_C*               WBP_MapMarker_Content_6;                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapMarker_Content_C*               WBP_MapMarker_Content_7;                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapMarker_Content_C*               WBP_MapMarker_Content_8;                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapMarker_Content_C*               WBP_MapMarker_Content_9;                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapMarker_Content_C*               WBP_MapMarker_Content_10;                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapMarker_Content_C*               WBP_MapMarker_Content_11;                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapMarker_Content_C*               WBP_MapMarker_Content_12;                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapMarker_Content_C*               WBP_MapMarker_Content_13;                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapMarker_Content_C*               WBP_MapMarker_Content_14;                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_MapMarker_Content_C*>       Markers;                                           // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UWBP_Map_IconCustom_C*                  CurrentEdittingIcon;                               // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             RemoveCustomIcon;                                  // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UTexture2D*>                     Textures;                                          // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             ChangeCustomIcon;                                  // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         CurrentIndex;                                      // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ChangeCustomIcon__DelegateSignature(class UWBP_Map_IconCustom_C* Icon, int32 Index_0);
	void ChangeIconType(int32 Index_0);
	void ClickDeleteButton();
	void Construct();
	class UWidget* DoCustomNavigation(EUINavigation Navigation_0);
	void ExecuteUbergraph_WBP_MapMarker_Win(int32 EntryPoint);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void RemoveCustomIcon__DelegateSignature(class UWBP_Map_IconCustom_C* Icon);
	void SetEdittingIcon(class UWBP_Map_IconCustom_C* CustomIcon);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MapMarker_Win_C">();
	}
	static class UWBP_MapMarker_Win_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MapMarker_Win_C>();
	}
};
static_assert(alignof(UWBP_MapMarker_Win_C) == 0x000008, "Wrong alignment on UWBP_MapMarker_Win_C");
static_assert(sizeof(UWBP_MapMarker_Win_C) == 0x000360, "Wrong size on UWBP_MapMarker_Win_C");
static_assert(offsetof(UWBP_MapMarker_Win_C, UberGraphFrame) == 0x000278, "Member 'UWBP_MapMarker_Win_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Win_C, HorizontalBox) == 0x000280, "Member 'UWBP_MapMarker_Win_C::HorizontalBox' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Win_C, Text_Head_MarkerCount) == 0x000288, "Member 'UWBP_MapMarker_Win_C::Text_Head_MarkerCount' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Win_C, WBP_MapMarker_Button) == 0x000290, "Member 'UWBP_MapMarker_Win_C::WBP_MapMarker_Button' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Win_C, WBP_MapMarker_Content) == 0x000298, "Member 'UWBP_MapMarker_Win_C::WBP_MapMarker_Content' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Win_C, WBP_MapMarker_Content_1) == 0x0002A0, "Member 'UWBP_MapMarker_Win_C::WBP_MapMarker_Content_1' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Win_C, WBP_MapMarker_Content_2) == 0x0002A8, "Member 'UWBP_MapMarker_Win_C::WBP_MapMarker_Content_2' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Win_C, WBP_MapMarker_Content_3) == 0x0002B0, "Member 'UWBP_MapMarker_Win_C::WBP_MapMarker_Content_3' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Win_C, WBP_MapMarker_Content_4) == 0x0002B8, "Member 'UWBP_MapMarker_Win_C::WBP_MapMarker_Content_4' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Win_C, WBP_MapMarker_Content_5) == 0x0002C0, "Member 'UWBP_MapMarker_Win_C::WBP_MapMarker_Content_5' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Win_C, WBP_MapMarker_Content_6) == 0x0002C8, "Member 'UWBP_MapMarker_Win_C::WBP_MapMarker_Content_6' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Win_C, WBP_MapMarker_Content_7) == 0x0002D0, "Member 'UWBP_MapMarker_Win_C::WBP_MapMarker_Content_7' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Win_C, WBP_MapMarker_Content_8) == 0x0002D8, "Member 'UWBP_MapMarker_Win_C::WBP_MapMarker_Content_8' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Win_C, WBP_MapMarker_Content_9) == 0x0002E0, "Member 'UWBP_MapMarker_Win_C::WBP_MapMarker_Content_9' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Win_C, WBP_MapMarker_Content_10) == 0x0002E8, "Member 'UWBP_MapMarker_Win_C::WBP_MapMarker_Content_10' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Win_C, WBP_MapMarker_Content_11) == 0x0002F0, "Member 'UWBP_MapMarker_Win_C::WBP_MapMarker_Content_11' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Win_C, WBP_MapMarker_Content_12) == 0x0002F8, "Member 'UWBP_MapMarker_Win_C::WBP_MapMarker_Content_12' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Win_C, WBP_MapMarker_Content_13) == 0x000300, "Member 'UWBP_MapMarker_Win_C::WBP_MapMarker_Content_13' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Win_C, WBP_MapMarker_Content_14) == 0x000308, "Member 'UWBP_MapMarker_Win_C::WBP_MapMarker_Content_14' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Win_C, Markers) == 0x000310, "Member 'UWBP_MapMarker_Win_C::Markers' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Win_C, CurrentEdittingIcon) == 0x000320, "Member 'UWBP_MapMarker_Win_C::CurrentEdittingIcon' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Win_C, RemoveCustomIcon) == 0x000328, "Member 'UWBP_MapMarker_Win_C::RemoveCustomIcon' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Win_C, Textures) == 0x000338, "Member 'UWBP_MapMarker_Win_C::Textures' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Win_C, ChangeCustomIcon) == 0x000348, "Member 'UWBP_MapMarker_Win_C::ChangeCustomIcon' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Win_C, CurrentIndex) == 0x000358, "Member 'UWBP_MapMarker_Win_C::CurrentIndex' has a wrong offset!");

}

