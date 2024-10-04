#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_MainMenu_Pal_FoodAmount.WBP_MainMenu_Pal_FoodAmount_C
// 0x0070 (0x02E8 - 0x0278)
class UWBP_MainMenu_Pal_FoodAmount_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HorizontalBox_0;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_FoodAmountIcon_C*     WBP_MainMenu_Pal_FoodAmountIcon;                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_FoodAmountIcon_C*     WBP_MainMenu_Pal_FoodAmountIcon_1;                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_FoodAmountIcon_C*     WBP_MainMenu_Pal_FoodAmountIcon_2;                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_FoodAmountIcon_C*     WBP_MainMenu_Pal_FoodAmountIcon_3;                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_FoodAmountIcon_C*     WBP_MainMenu_Pal_FoodAmountIcon_4;                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_FoodAmountIcon_C*     WBP_MainMenu_Pal_FoodAmountIcon_5;                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_FoodAmountIcon_C*     WBP_MainMenu_Pal_FoodAmountIcon_6;                 // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_FoodAmountIcon_C*     WBP_MainMenu_Pal_FoodAmountIcon_7;                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_FoodAmountIcon_C*     WBP_MainMenu_Pal_FoodAmountIcon_8;                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_FoodAmountIcon_C*     WBP_MainMenu_Pal_FoodAmountIcon_9;                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_MainMenu_Pal_FoodAmountIcon_C*> IconArray;                                         // 0x02D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount(int32 EntryPoint);
	void OnInitialized();
	void SetFoodAmount(int32 FoodAmount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MainMenu_Pal_FoodAmount_C">();
	}
	static class UWBP_MainMenu_Pal_FoodAmount_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MainMenu_Pal_FoodAmount_C>();
	}
};
static_assert(alignof(UWBP_MainMenu_Pal_FoodAmount_C) == 0x000008, "Wrong alignment on UWBP_MainMenu_Pal_FoodAmount_C");
static_assert(sizeof(UWBP_MainMenu_Pal_FoodAmount_C) == 0x0002E8, "Wrong size on UWBP_MainMenu_Pal_FoodAmount_C");
static_assert(offsetof(UWBP_MainMenu_Pal_FoodAmount_C, UberGraphFrame) == 0x000278, "Member 'UWBP_MainMenu_Pal_FoodAmount_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_FoodAmount_C, HorizontalBox_0) == 0x000280, "Member 'UWBP_MainMenu_Pal_FoodAmount_C::HorizontalBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_FoodAmount_C, WBP_MainMenu_Pal_FoodAmountIcon) == 0x000288, "Member 'UWBP_MainMenu_Pal_FoodAmount_C::WBP_MainMenu_Pal_FoodAmountIcon' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_FoodAmount_C, WBP_MainMenu_Pal_FoodAmountIcon_1) == 0x000290, "Member 'UWBP_MainMenu_Pal_FoodAmount_C::WBP_MainMenu_Pal_FoodAmountIcon_1' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_FoodAmount_C, WBP_MainMenu_Pal_FoodAmountIcon_2) == 0x000298, "Member 'UWBP_MainMenu_Pal_FoodAmount_C::WBP_MainMenu_Pal_FoodAmountIcon_2' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_FoodAmount_C, WBP_MainMenu_Pal_FoodAmountIcon_3) == 0x0002A0, "Member 'UWBP_MainMenu_Pal_FoodAmount_C::WBP_MainMenu_Pal_FoodAmountIcon_3' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_FoodAmount_C, WBP_MainMenu_Pal_FoodAmountIcon_4) == 0x0002A8, "Member 'UWBP_MainMenu_Pal_FoodAmount_C::WBP_MainMenu_Pal_FoodAmountIcon_4' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_FoodAmount_C, WBP_MainMenu_Pal_FoodAmountIcon_5) == 0x0002B0, "Member 'UWBP_MainMenu_Pal_FoodAmount_C::WBP_MainMenu_Pal_FoodAmountIcon_5' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_FoodAmount_C, WBP_MainMenu_Pal_FoodAmountIcon_6) == 0x0002B8, "Member 'UWBP_MainMenu_Pal_FoodAmount_C::WBP_MainMenu_Pal_FoodAmountIcon_6' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_FoodAmount_C, WBP_MainMenu_Pal_FoodAmountIcon_7) == 0x0002C0, "Member 'UWBP_MainMenu_Pal_FoodAmount_C::WBP_MainMenu_Pal_FoodAmountIcon_7' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_FoodAmount_C, WBP_MainMenu_Pal_FoodAmountIcon_8) == 0x0002C8, "Member 'UWBP_MainMenu_Pal_FoodAmount_C::WBP_MainMenu_Pal_FoodAmountIcon_8' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_FoodAmount_C, WBP_MainMenu_Pal_FoodAmountIcon_9) == 0x0002D0, "Member 'UWBP_MainMenu_Pal_FoodAmount_C::WBP_MainMenu_Pal_FoodAmountIcon_9' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_FoodAmount_C, IconArray) == 0x0002D8, "Member 'UWBP_MainMenu_Pal_FoodAmount_C::IconArray' has a wrong offset!");

}

