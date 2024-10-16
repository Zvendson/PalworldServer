#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_MainMenu_Pal_FoodAmountIcon.WBP_MainMenu_Pal_FoodAmountIcon_C
// 0x0028 (0x02A0 - 0x0278)
class UWBP_MainMenu_Pal_FoodAmountIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_OFF;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_ON;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Icon_OFF;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_ON;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void AnmEvent_Off();
	void AnmEvent_On();
	void ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmountIcon(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MainMenu_Pal_FoodAmountIcon_C">();
	}
	static class UWBP_MainMenu_Pal_FoodAmountIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MainMenu_Pal_FoodAmountIcon_C>();
	}
};
static_assert(alignof(UWBP_MainMenu_Pal_FoodAmountIcon_C) == 0x000008, "Wrong alignment on UWBP_MainMenu_Pal_FoodAmountIcon_C");
static_assert(sizeof(UWBP_MainMenu_Pal_FoodAmountIcon_C) == 0x0002A0, "Wrong size on UWBP_MainMenu_Pal_FoodAmountIcon_C");
static_assert(offsetof(UWBP_MainMenu_Pal_FoodAmountIcon_C, UberGraphFrame) == 0x000278, "Member 'UWBP_MainMenu_Pal_FoodAmountIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_FoodAmountIcon_C, Anm_OFF) == 0x000280, "Member 'UWBP_MainMenu_Pal_FoodAmountIcon_C::Anm_OFF' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_FoodAmountIcon_C, Anm_ON) == 0x000288, "Member 'UWBP_MainMenu_Pal_FoodAmountIcon_C::Anm_ON' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_FoodAmountIcon_C, Icon_OFF) == 0x000290, "Member 'UWBP_MainMenu_Pal_FoodAmountIcon_C::Icon_OFF' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_FoodAmountIcon_C, Icon_ON) == 0x000298, "Member 'UWBP_MainMenu_Pal_FoodAmountIcon_C::Icon_ON' has a wrong offset!");

}

