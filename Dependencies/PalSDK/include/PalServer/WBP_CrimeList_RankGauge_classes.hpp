#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_CrimeList_RankGauge.WBP_CrimeList_RankGauge_C
// 0x0018 (0x0290 - 0x0278)
class UWBP_CrimeList_RankGauge_C final : public UUserWidget
{
public:
	class UWidgetAnimation*                       ANm_OffToOn;                                       // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 IconRank;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_109;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CrimeList_RankGauge_C">();
	}
	static class UWBP_CrimeList_RankGauge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CrimeList_RankGauge_C>();
	}
};
static_assert(alignof(UWBP_CrimeList_RankGauge_C) == 0x000008, "Wrong alignment on UWBP_CrimeList_RankGauge_C");
static_assert(sizeof(UWBP_CrimeList_RankGauge_C) == 0x000290, "Wrong size on UWBP_CrimeList_RankGauge_C");
static_assert(offsetof(UWBP_CrimeList_RankGauge_C, ANm_OffToOn) == 0x000278, "Member 'UWBP_CrimeList_RankGauge_C::ANm_OffToOn' has a wrong offset!");
static_assert(offsetof(UWBP_CrimeList_RankGauge_C, IconRank) == 0x000280, "Member 'UWBP_CrimeList_RankGauge_C::IconRank' has a wrong offset!");
static_assert(offsetof(UWBP_CrimeList_RankGauge_C, ProgressBar_109) == 0x000288, "Member 'UWBP_CrimeList_RankGauge_C::ProgressBar_109' has a wrong offset!");

}

