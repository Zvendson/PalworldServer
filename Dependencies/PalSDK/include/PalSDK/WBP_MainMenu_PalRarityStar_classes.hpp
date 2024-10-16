#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_MainMenu_PalRarityStar.WBP_MainMenu_PalRarityStar_C
// 0x0028 (0x02A0 - 0x0278)
class UWBP_MainMenu_PalRarityStar_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Highlight;                                     // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ANm_OffToOn;                                       // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Off;                                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 On;                                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void AnmEvent_ForceOff();
	void AnmEvent_Highlight();
	void AnmEvent_OffToOn();
	void AnmEvent_OnToOff();
	void ExecuteUbergraph_WBP_MainMenu_PalRarityStar(int32 EntryPoint);
	void SetActiveRank(bool IsActive);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MainMenu_PalRarityStar_C">();
	}
	static class UWBP_MainMenu_PalRarityStar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MainMenu_PalRarityStar_C>();
	}
};
static_assert(alignof(UWBP_MainMenu_PalRarityStar_C) == 0x000008, "Wrong alignment on UWBP_MainMenu_PalRarityStar_C");
static_assert(sizeof(UWBP_MainMenu_PalRarityStar_C) == 0x0002A0, "Wrong size on UWBP_MainMenu_PalRarityStar_C");
static_assert(offsetof(UWBP_MainMenu_PalRarityStar_C, UberGraphFrame) == 0x000278, "Member 'UWBP_MainMenu_PalRarityStar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_PalRarityStar_C, Anm_Highlight) == 0x000280, "Member 'UWBP_MainMenu_PalRarityStar_C::Anm_Highlight' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_PalRarityStar_C, ANm_OffToOn) == 0x000288, "Member 'UWBP_MainMenu_PalRarityStar_C::ANm_OffToOn' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_PalRarityStar_C, Off) == 0x000290, "Member 'UWBP_MainMenu_PalRarityStar_C::Off' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_PalRarityStar_C, On) == 0x000298, "Member 'UWBP_MainMenu_PalRarityStar_C::On' has a wrong offset!");

}

