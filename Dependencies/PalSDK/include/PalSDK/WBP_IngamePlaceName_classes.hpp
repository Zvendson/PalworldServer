#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_IngamePlaceName.WBP_IngamePlaceName_C
// 0x0050 (0x02C8 - 0x0278)
class UWBP_IngamePlaceName_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Close;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Open;                                          // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Base;                                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BaseLineL;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BaseLineR;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Flare;                                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_RegionName;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                           CloseTimer;                                        // 0x02B8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   CachedRegionNameID;                                // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnmEvent_End();
	void AnmEvent_Start();
	void Construct();
	void DisplayRegion(class FName RegionNameID);
	void ExecuteUbergraph_WBP_IngamePlaceName(int32 EntryPoint);
	void OnCloseTimerEnd();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngamePlaceName_C">();
	}
	static class UWBP_IngamePlaceName_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngamePlaceName_C>();
	}
};
static_assert(alignof(UWBP_IngamePlaceName_C) == 0x000008, "Wrong alignment on UWBP_IngamePlaceName_C");
static_assert(sizeof(UWBP_IngamePlaceName_C) == 0x0002C8, "Wrong size on UWBP_IngamePlaceName_C");
static_assert(offsetof(UWBP_IngamePlaceName_C, UberGraphFrame) == 0x000278, "Member 'UWBP_IngamePlaceName_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_IngamePlaceName_C, Anm_Close) == 0x000280, "Member 'UWBP_IngamePlaceName_C::Anm_Close' has a wrong offset!");
static_assert(offsetof(UWBP_IngamePlaceName_C, Anm_Open) == 0x000288, "Member 'UWBP_IngamePlaceName_C::Anm_Open' has a wrong offset!");
static_assert(offsetof(UWBP_IngamePlaceName_C, Base) == 0x000290, "Member 'UWBP_IngamePlaceName_C::Base' has a wrong offset!");
static_assert(offsetof(UWBP_IngamePlaceName_C, BaseLineL) == 0x000298, "Member 'UWBP_IngamePlaceName_C::BaseLineL' has a wrong offset!");
static_assert(offsetof(UWBP_IngamePlaceName_C, BaseLineR) == 0x0002A0, "Member 'UWBP_IngamePlaceName_C::BaseLineR' has a wrong offset!");
static_assert(offsetof(UWBP_IngamePlaceName_C, Flare) == 0x0002A8, "Member 'UWBP_IngamePlaceName_C::Flare' has a wrong offset!");
static_assert(offsetof(UWBP_IngamePlaceName_C, Text_RegionName) == 0x0002B0, "Member 'UWBP_IngamePlaceName_C::Text_RegionName' has a wrong offset!");
static_assert(offsetof(UWBP_IngamePlaceName_C, CloseTimer) == 0x0002B8, "Member 'UWBP_IngamePlaceName_C::CloseTimer' has a wrong offset!");
static_assert(offsetof(UWBP_IngamePlaceName_C, CachedRegionNameID) == 0x0002C0, "Member 'UWBP_IngamePlaceName_C::CachedRegionNameID' has a wrong offset!");

}

