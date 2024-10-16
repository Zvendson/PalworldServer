#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_MapFilter_Win.WBP_MapFilter_Win_C
// 0x00A8 (0x0320 - 0x0278)
class UWBP_MapFilter_Win_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_MapFilter_Content_C*               WBP_MapFilter_Content;                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapFilter_Content_C*               WBP_MapFilter_Content_1;                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapFilter_Content_C*               WBP_MapFilter_Content_2;                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapFilter_Content_C*               WBP_MapFilter_Content_3;                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapFilter_Content_C*               WBP_MapFilter_Content_4;                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapFilter_Content_C*               WBP_MapFilter_Content_5;                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_MapFilter_Content_C*>       Filters;                                           // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<EPalLocationType, struct FDataTableRowHandle> FilterMsgMap;                                      // 0x02C0(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnFilterChanged;                                   // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ChangeFilter(EPalLocationType LocationType, bool IsEnable);
	void Construct();
	void ExecuteUbergraph_WBP_MapFilter_Win(int32 EntryPoint);
	void ForceFTEnable(bool IsEnable);
	void OnFilterChanged__DelegateSignature(EPalLocationType FilterMap, bool IsEnable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MapFilter_Win_C">();
	}
	static class UWBP_MapFilter_Win_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MapFilter_Win_C>();
	}
};
static_assert(alignof(UWBP_MapFilter_Win_C) == 0x000008, "Wrong alignment on UWBP_MapFilter_Win_C");
static_assert(sizeof(UWBP_MapFilter_Win_C) == 0x000320, "Wrong size on UWBP_MapFilter_Win_C");
static_assert(offsetof(UWBP_MapFilter_Win_C, UberGraphFrame) == 0x000278, "Member 'UWBP_MapFilter_Win_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MapFilter_Win_C, WBP_MapFilter_Content) == 0x000280, "Member 'UWBP_MapFilter_Win_C::WBP_MapFilter_Content' has a wrong offset!");
static_assert(offsetof(UWBP_MapFilter_Win_C, WBP_MapFilter_Content_1) == 0x000288, "Member 'UWBP_MapFilter_Win_C::WBP_MapFilter_Content_1' has a wrong offset!");
static_assert(offsetof(UWBP_MapFilter_Win_C, WBP_MapFilter_Content_2) == 0x000290, "Member 'UWBP_MapFilter_Win_C::WBP_MapFilter_Content_2' has a wrong offset!");
static_assert(offsetof(UWBP_MapFilter_Win_C, WBP_MapFilter_Content_3) == 0x000298, "Member 'UWBP_MapFilter_Win_C::WBP_MapFilter_Content_3' has a wrong offset!");
static_assert(offsetof(UWBP_MapFilter_Win_C, WBP_MapFilter_Content_4) == 0x0002A0, "Member 'UWBP_MapFilter_Win_C::WBP_MapFilter_Content_4' has a wrong offset!");
static_assert(offsetof(UWBP_MapFilter_Win_C, WBP_MapFilter_Content_5) == 0x0002A8, "Member 'UWBP_MapFilter_Win_C::WBP_MapFilter_Content_5' has a wrong offset!");
static_assert(offsetof(UWBP_MapFilter_Win_C, Filters) == 0x0002B0, "Member 'UWBP_MapFilter_Win_C::Filters' has a wrong offset!");
static_assert(offsetof(UWBP_MapFilter_Win_C, FilterMsgMap) == 0x0002C0, "Member 'UWBP_MapFilter_Win_C::FilterMsgMap' has a wrong offset!");
static_assert(offsetof(UWBP_MapFilter_Win_C, OnFilterChanged) == 0x000310, "Member 'UWBP_MapFilter_Win_C::OnFilterChanged' has a wrong offset!");

}

