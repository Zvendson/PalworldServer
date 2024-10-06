#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "Pal_structs.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_Ingame_TimeZone.WBP_Ingame_TimeZone_C
// 0x0028 (0x02A0 - 0x0278)
class UWBP_Ingame_TimeZone_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_DayToNight;                                    // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Gauge;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconDay;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconNight;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Ingame_TimeZone(int32 EntryPoint);
	void OnInitialized();
	void UpdateTime();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Ingame_TimeZone_C">();
	}
	static class UWBP_Ingame_TimeZone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Ingame_TimeZone_C>();
	}
};
static_assert(alignof(UWBP_Ingame_TimeZone_C) == 0x000008, "Wrong alignment on UWBP_Ingame_TimeZone_C");
static_assert(sizeof(UWBP_Ingame_TimeZone_C) == 0x0002A0, "Wrong size on UWBP_Ingame_TimeZone_C");
static_assert(offsetof(UWBP_Ingame_TimeZone_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Ingame_TimeZone_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_TimeZone_C, Anm_DayToNight) == 0x000280, "Member 'UWBP_Ingame_TimeZone_C::Anm_DayToNight' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_TimeZone_C, Gauge) == 0x000288, "Member 'UWBP_Ingame_TimeZone_C::Gauge' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_TimeZone_C, IconDay) == 0x000290, "Member 'UWBP_Ingame_TimeZone_C::IconDay' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_TimeZone_C, IconNight) == 0x000298, "Member 'UWBP_Ingame_TimeZone_C::IconNight' has a wrong offset!");

}

