#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_CrimeList.WBP_CrimeList_C
// 0x0038 (0x02B0 - 0x0278)
class UWBP_CrimeList_C final : public UUserWidget
{
public:
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_WantedPrize;                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_0;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CrimeList_RankGauge_C*             WBP_CrimeList_RankGauge;                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CrimeList_RankGauge_C*             WBP_CrimeList_RankGauge_1;                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CrimeList_RankGauge_C*             WBP_CrimeList_RankGauge_2;                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CrimeList_RankGauge_C*             WBP_CrimeList_RankGauge_3;                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CrimeList_RankGauge_C*             WBP_CrimeList_RankGauge_4;                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void RemoveAllCrime();
	void SetCrimeList(TArray<class FName>& CrimeList);
	void SetPrizeMoney(int32 Money);
	void SortCrime();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CrimeList_C">();
	}
	static class UWBP_CrimeList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CrimeList_C>();
	}
};
static_assert(alignof(UWBP_CrimeList_C) == 0x000008, "Wrong alignment on UWBP_CrimeList_C");
static_assert(sizeof(UWBP_CrimeList_C) == 0x0002B0, "Wrong size on UWBP_CrimeList_C");
static_assert(offsetof(UWBP_CrimeList_C, BP_PalTextBlock_WantedPrize) == 0x000278, "Member 'UWBP_CrimeList_C::BP_PalTextBlock_WantedPrize' has a wrong offset!");
static_assert(offsetof(UWBP_CrimeList_C, VerticalBox_0) == 0x000280, "Member 'UWBP_CrimeList_C::VerticalBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_CrimeList_C, WBP_CrimeList_RankGauge) == 0x000288, "Member 'UWBP_CrimeList_C::WBP_CrimeList_RankGauge' has a wrong offset!");
static_assert(offsetof(UWBP_CrimeList_C, WBP_CrimeList_RankGauge_1) == 0x000290, "Member 'UWBP_CrimeList_C::WBP_CrimeList_RankGauge_1' has a wrong offset!");
static_assert(offsetof(UWBP_CrimeList_C, WBP_CrimeList_RankGauge_2) == 0x000298, "Member 'UWBP_CrimeList_C::WBP_CrimeList_RankGauge_2' has a wrong offset!");
static_assert(offsetof(UWBP_CrimeList_C, WBP_CrimeList_RankGauge_3) == 0x0002A0, "Member 'UWBP_CrimeList_C::WBP_CrimeList_RankGauge_3' has a wrong offset!");
static_assert(offsetof(UWBP_CrimeList_C, WBP_CrimeList_RankGauge_4) == 0x0002A8, "Member 'UWBP_CrimeList_C::WBP_CrimeList_RankGauge_4' has a wrong offset!");

}

