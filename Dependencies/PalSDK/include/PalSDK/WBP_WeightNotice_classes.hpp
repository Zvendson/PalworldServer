#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_WeightNotice.WBP_WeightNotice_C
// 0x0030 (0x02A8 - 0x0278)
class UWBP_WeightNotice_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Full;                                          // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Normal;                                        // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_Weight;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Weight;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        CachedWeightRate;                                  // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_WeightNotice(int32 EntryPoint);
	void UpdateVisibility();
	void UpdateWeight(double NowWeight, double MaxWeight);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_WeightNotice_C">();
	}
	static class UWBP_WeightNotice_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_WeightNotice_C>();
	}
};
static_assert(alignof(UWBP_WeightNotice_C) == 0x000008, "Wrong alignment on UWBP_WeightNotice_C");
static_assert(sizeof(UWBP_WeightNotice_C) == 0x0002A8, "Wrong size on UWBP_WeightNotice_C");
static_assert(offsetof(UWBP_WeightNotice_C, UberGraphFrame) == 0x000278, "Member 'UWBP_WeightNotice_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_WeightNotice_C, Anm_Full) == 0x000280, "Member 'UWBP_WeightNotice_C::Anm_Full' has a wrong offset!");
static_assert(offsetof(UWBP_WeightNotice_C, Anm_Normal) == 0x000288, "Member 'UWBP_WeightNotice_C::Anm_Normal' has a wrong offset!");
static_assert(offsetof(UWBP_WeightNotice_C, ProgressBar_Weight) == 0x000290, "Member 'UWBP_WeightNotice_C::ProgressBar_Weight' has a wrong offset!");
static_assert(offsetof(UWBP_WeightNotice_C, Text_Weight) == 0x000298, "Member 'UWBP_WeightNotice_C::Text_Weight' has a wrong offset!");
static_assert(offsetof(UWBP_WeightNotice_C, CachedWeightRate) == 0x0002A0, "Member 'UWBP_WeightNotice_C::CachedWeightRate' has a wrong offset!");

}

