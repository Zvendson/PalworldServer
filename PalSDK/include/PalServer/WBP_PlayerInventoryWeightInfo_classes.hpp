#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C
// 0x0040 (0x02B8 - 0x0278)
class UWBP_PlayerInventoryWeightInfo_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_NormalToFull;                                  // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_ItemWeight;                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_CurrentWeightArrow;                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_MaxWeightArrow;                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_MaxWeight;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_NowWeight;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         CachedInventoryWeightRate;                         // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnmEvent_ForceFull();
	void AnmEvent_ForceNormal();
	void AnmEvent_FullToNormal();
	void AnmEvent_NormalToFull();
	void Construct();
	void CREATEDELEGATE_PROXYFUNCTION_0(float ChangedWeight);
	void Destruct();
	void ExecuteUbergraph_WBP_PlayerInventoryWeightInfo(int32 EntryPoint);
	void OnUpdateCurrentWeightBuff(double ChangedCurrentWeight);
	void OnUpdateMaxWeight(float MaxWeight);
	void OnUpdateMaxWeightBuff();
	void OnUpdateWeight(float NowWeight);
	void UpdateWeight_Internal(double NowWeight, double MaxWeight, bool ForceSkipAnim);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PlayerInventoryWeightInfo_C">();
	}
	static class UWBP_PlayerInventoryWeightInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PlayerInventoryWeightInfo_C>();
	}
};
static_assert(alignof(UWBP_PlayerInventoryWeightInfo_C) == 0x000008, "Wrong alignment on UWBP_PlayerInventoryWeightInfo_C");
static_assert(sizeof(UWBP_PlayerInventoryWeightInfo_C) == 0x0002B8, "Wrong size on UWBP_PlayerInventoryWeightInfo_C");
static_assert(offsetof(UWBP_PlayerInventoryWeightInfo_C, UberGraphFrame) == 0x000278, "Member 'UWBP_PlayerInventoryWeightInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerInventoryWeightInfo_C, Anm_NormalToFull) == 0x000280, "Member 'UWBP_PlayerInventoryWeightInfo_C::Anm_NormalToFull' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerInventoryWeightInfo_C, ProgressBar_ItemWeight) == 0x000288, "Member 'UWBP_PlayerInventoryWeightInfo_C::ProgressBar_ItemWeight' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerInventoryWeightInfo_C, SizeBox_CurrentWeightArrow) == 0x000290, "Member 'UWBP_PlayerInventoryWeightInfo_C::SizeBox_CurrentWeightArrow' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerInventoryWeightInfo_C, SizeBox_MaxWeightArrow) == 0x000298, "Member 'UWBP_PlayerInventoryWeightInfo_C::SizeBox_MaxWeightArrow' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerInventoryWeightInfo_C, Text_MaxWeight) == 0x0002A0, "Member 'UWBP_PlayerInventoryWeightInfo_C::Text_MaxWeight' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerInventoryWeightInfo_C, Text_NowWeight) == 0x0002A8, "Member 'UWBP_PlayerInventoryWeightInfo_C::Text_NowWeight' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerInventoryWeightInfo_C, CachedInventoryWeightRate) == 0x0002B0, "Member 'UWBP_PlayerInventoryWeightInfo_C::CachedInventoryWeightRate' has a wrong offset!");

}

