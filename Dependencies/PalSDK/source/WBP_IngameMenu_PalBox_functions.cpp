#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_IngameMenu_PalBox_classes.hpp"
#include "PalSDK/WBP_IngameMenu_PalBox_parameters.hpp"


namespace PalSDK
{

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.AnmEvent_Close
// (BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalBox_C::AnmEvent_Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "AnmEvent_Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.AnmEvent_Open
// (BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalBox_C::AnmEvent_Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "AnmEvent_Open");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.BndEvt__WBP_InGameMainMenu_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_IngameMenu_PalBox_C::BndEvt__WBP_InGameMainMenu_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "BndEvt__WBP_InGameMainMenu_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_0_OnCreatedSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*CreatedSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_C::BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_0_OnCreatedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* CreatedSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_0_OnCreatedSlot__DelegateSignature");

	Params::WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_0_OnCreatedSlot__DelegateSignature Parms{};

	Parms.CreatedSlot = CreatedSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_10_OnRightClickedSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_C::BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_10_OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_10_OnRightClickedSlot__DelegateSignature");

	Params::WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_10_OnRightClickedSlot__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_3_OnLeftClickedSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EPalItemSlotPressType                   PressType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_C::BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_3_OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_3_OnLeftClickedSlot__DelegateSignature");

	Params::WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_3_OnLeftClickedSlot__DelegateSignature Parms{};

	Parms.Widget = Widget;
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_5_OnUnhoveredSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_C::BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_5_OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_5_OnUnhoveredSlot__DelegateSignature");

	Params::WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_5_OnUnhoveredSlot__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_8_OnHoveredSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_C::BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_8_OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_8_OnHoveredSlot__DelegateSignature");

	Params::WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_8_OnHoveredSlot__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_1_OnCreatedSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*CreatedSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_C::BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_1_OnCreatedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* CreatedSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_1_OnCreatedSlot__DelegateSignature");

	Params::WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_1_OnCreatedSlot__DelegateSignature Parms{};

	Parms.CreatedSlot = CreatedSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_2_OnLeftClickedSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EPalItemSlotPressType                   PressType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_C::BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_2_OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_2_OnLeftClickedSlot__DelegateSignature");

	Params::WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_2_OnLeftClickedSlot__DelegateSignature Parms{};

	Parms.Widget = Widget;
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_4_OnUnhoveredSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_C::BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_4_OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_4_OnUnhoveredSlot__DelegateSignature");

	Params::WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_4_OnUnhoveredSlot__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_7_OnHoveredSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_C::BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_7_OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_7_OnHoveredSlot__DelegateSignature");

	Params::WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_7_OnHoveredSlot__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_9_OnRightClickedSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_C::BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_9_OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_9_OnRightClickedSlot__DelegateSignature");

	Params::WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_9_OnRightClickedSlot__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.BndEvt__WBP_IngameMenu_PalBox_WBP_CommonButton_1_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_IngameMenu_PalBox_C::BndEvt__WBP_IngameMenu_PalBox_WBP_CommonButton_1_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "BndEvt__WBP_IngameMenu_PalBox_WBP_CommonButton_1_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_IngameMenu_PalBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.CreatePageControlWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalBox_C::CreatePageControlWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "CreatePageControlWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.CustomNavi_ToSortButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_IngameMenu_PalBox_C::CustomNavi_ToSortButton(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "CustomNavi_ToSortButton");

	Params::WBP_IngameMenu_PalBox_C_CustomNavi_ToSortButton Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.Display Pal Detail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot*      Slot_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPalBoxHoveredSlotType                  SlotType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_C::Display_Pal_Detail(class UPalIndividualCharacterSlot* Slot_0, EPalBoxHoveredSlotType SlotType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "Display Pal Detail");

	Params::WBP_IngameMenu_PalBox_C_Display_Pal_Detail Parms{};

	Parms.Slot_0 = Slot_0;
	Parms.SlotType = SlotType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.DoCustomNavigation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_IngameMenu_PalBox_C::DoCustomNavigation(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "DoCustomNavigation");

	Params::WBP_IngameMenu_PalBox_C_DoCustomNavigation Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.ExecuteUbergraph_WBP_IngameMenu_PalBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_C::ExecuteUbergraph_WBP_IngameMenu_PalBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "ExecuteUbergraph_WBP_IngameMenu_PalBox");

	Params::WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.FocusToBoxTopSlot
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalBox_C::FocusToBoxTopSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "FocusToBoxTopSlot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.FocusToPartyTopSlot
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalBox_C::FocusToPartyTopSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "FocusToPartyTopSlot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.FocusToWorkerTopSlot
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalBox_C::FocusToWorkerTopSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "FocusToWorkerTopSlot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          TargetWidget                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_C::GetFocusTarget(class UWidget** TargetWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "GetFocusTarget");

	Params::WBP_IngameMenu_PalBox_C_GetFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TargetWidget != nullptr)
		*TargetWidget = Parms.TargetWidget;
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.OnAnySlotHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot*      Slot_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_C::OnAnySlotHovered__DelegateSignature(class UPalIndividualCharacterSlot* Slot_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "OnAnySlotHovered__DelegateSignature");

	Params::WBP_IngameMenu_PalBox_C_OnAnySlotHovered__DelegateSignature Parms{};

	Parms.Slot_0 = Slot_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.OnAnySlotUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalBox_C::OnAnySlotUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "OnAnySlotUnhovered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.OnClickedBaseCampPal__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot*      Slot_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPalItemSlotPressType                   PressType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_C::OnClickedBaseCampPal__DelegateSignature(class UPalIndividualCharacterSlot* Slot_0, EPalItemSlotPressType PressType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "OnClickedBaseCampPal__DelegateSignature");

	Params::WBP_IngameMenu_PalBox_C_OnClickedBaseCampPal__DelegateSignature Parms{};

	Parms.Slot_0 = Slot_0;
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.OnClickedCloseButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalBox_C::OnClickedCloseButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "OnClickedCloseButton__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.OnClickedLooseButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalBox_C::OnClickedLooseButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "OnClickedLooseButton__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.OnClickedPalBoxNextPage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalBox_C::OnClickedPalBoxNextPage__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "OnClickedPalBoxNextPage__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.OnClickedPalBoxPal__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot*      Slot_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPalItemSlotPressType                   PressType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_C::OnClickedPalBoxPal__DelegateSignature(class UPalIndividualCharacterSlot* Slot_0, EPalItemSlotPressType PressType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "OnClickedPalBoxPal__DelegateSignature");

	Params::WBP_IngameMenu_PalBox_C_OnClickedPalBoxPal__DelegateSignature Parms{};

	Parms.Slot_0 = Slot_0;
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.OnClickedPalBoxPrevPage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalBox_C::OnClickedPalBoxPrevPage__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "OnClickedPalBoxPrevPage__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.OnClickedPartySlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot*      TargetSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_C::OnClickedPartySlot__DelegateSignature(class UPalIndividualCharacterSlot* TargetSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "OnClickedPartySlot__DelegateSignature");

	Params::WBP_IngameMenu_PalBox_C_OnClickedPartySlot__DelegateSignature Parms{};

	Parms.TargetSlot = TargetSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.OnClickedPartySlotInternal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot*      TargetSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_C::OnClickedPartySlotInternal(class UPalIndividualCharacterSlot* TargetSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "OnClickedPartySlotInternal");

	Params::WBP_IngameMenu_PalBox_C_OnClickedPartySlotInternal Parms{};

	Parms.TargetSlot = TargetSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.OnHoveredBoxSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot*      Slot_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_C::OnHoveredBoxSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "OnHoveredBoxSlot__DelegateSignature");

	Params::WBP_IngameMenu_PalBox_C_OnHoveredBoxSlot__DelegateSignature Parms{};

	Parms.Slot_0 = Slot_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.OnHoveredPartySlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot*      Slot_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_C::OnHoveredPartySlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "OnHoveredPartySlot__DelegateSignature");

	Params::WBP_IngameMenu_PalBox_C_OnHoveredPartySlot__DelegateSignature Parms{};

	Parms.Slot_0 = Slot_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.OnHoveredPartySlot_Internal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot*      Slot_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_C::OnHoveredPartySlot_Internal(class UPalIndividualCharacterSlot* Slot_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "OnHoveredPartySlot_Internal");

	Params::WBP_IngameMenu_PalBox_C_OnHoveredPartySlot_Internal Parms{};

	Parms.Slot_0 = Slot_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.OnHoveredWorkerSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot*      Slot_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_C::OnHoveredWorkerSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "OnHoveredWorkerSlot__DelegateSignature");

	Params::WBP_IngameMenu_PalBox_C_OnHoveredWorkerSlot__DelegateSignature Parms{};

	Parms.Slot_0 = Slot_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_IngameMenu_PalBox_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.OnRightClickedBoxSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot*      Slot_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_C::OnRightClickedBoxSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "OnRightClickedBoxSlot__DelegateSignature");

	Params::WBP_IngameMenu_PalBox_C_OnRightClickedBoxSlot__DelegateSignature Parms{};

	Parms.Slot_0 = Slot_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.OnRightClickedWorkerSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot*      Slot_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_C::OnRightClickedWorkerSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "OnRightClickedWorkerSlot__DelegateSignature");

	Params::WBP_IngameMenu_PalBox_C_OnRightClickedWorkerSlot__DelegateSignature Parms{};

	Parms.Slot_0 = Slot_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.OnUnhoveredPartySlot_Internal
// (BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalBox_C::OnUnhoveredPartySlot_Internal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "OnUnhoveredPartySlot_Internal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.SetBaseCampPalList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPalIndividualCharacterSlot*>Slots                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_IngameMenu_PalBox_C::SetBaseCampPalList(TArray<class UPalIndividualCharacterSlot*>& Slots)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "SetBaseCampPalList");

	Params::WBP_IngameMenu_PalBox_C_SetBaseCampPalList Parms{};

	Parms.Slots = std::move(Slots);

	UObject::ProcessEvent(Func, &Parms);

	Slots = std::move(Parms.Slots);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.SetCurrentPalBoxPageNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PageNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_C::SetCurrentPalBoxPageNum(int32 PageNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "SetCurrentPalBoxPageNum");

	Params::WBP_IngameMenu_PalBox_C_SetCurrentPalBoxPageNum Parms{};

	Parms.PageNum = PageNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.SetEnableDragDrop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsEnableDragDrop                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_C::SetEnableDragDrop(bool bIsEnableDragDrop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "SetEnableDragDrop");

	Params::WBP_IngameMenu_PalBox_C_SetEnableDragDrop Parms{};

	Parms.bIsEnableDragDrop = bIsEnableDragDrop;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.SetPalBoxList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPalIndividualCharacterSlot*>TargetSlots                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   PageNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_C::SetPalBoxList(TArray<class UPalIndividualCharacterSlot*>& TargetSlots, int32 PageNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "SetPalBoxList");

	Params::WBP_IngameMenu_PalBox_C_SetPalBoxList Parms{};

	Parms.TargetSlots = std::move(TargetSlots);
	Parms.PageNum = PageNum;

	UObject::ProcessEvent(Func, &Parms);

	TargetSlots = std::move(Parms.TargetSlots);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalBox_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.Setup Party Pal
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalBox_C::Setup_Party_Pal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_C", "Setup Party Pal");

	UObject::ProcessEvent(Func, nullptr);
}

}

