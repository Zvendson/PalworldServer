#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_IngameMenu_PalCondense_classes.hpp"
#include "PalSDK/WBP_IngameMenu_PalCondense_parameters.hpp"


namespace PalSDK
{

// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.ActionInvokeRankUp
// (BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalCondense_C::ActionInvokeRankUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "ActionInvokeRankUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalList_K2Node_ComponentBoundEvent_10_OnUnhoveredSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalCondense_C::BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalList_K2Node_ComponentBoundEvent_10_OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalList_K2Node_ComponentBoundEvent_10_OnUnhoveredSlot__DelegateSignature");

	Params::WBP_IngameMenu_PalCondense_C_BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalList_K2Node_ComponentBoundEvent_10_OnUnhoveredSlot__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalList_K2Node_ComponentBoundEvent_6_OnLeftClickedSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EPalItemSlotPressType                   PressType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalCondense_C::BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalList_K2Node_ComponentBoundEvent_6_OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalList_K2Node_ComponentBoundEvent_6_OnLeftClickedSlot__DelegateSignature");

	Params::WBP_IngameMenu_PalCondense_C_BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalList_K2Node_ComponentBoundEvent_6_OnLeftClickedSlot__DelegateSignature Parms{};

	Parms.Widget = Widget;
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalList_K2Node_ComponentBoundEvent_7_OnUpdatedPage__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   NowPage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalCondense_C::BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalList_K2Node_ComponentBoundEvent_7_OnUpdatedPage__DelegateSignature(int32 NowPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalList_K2Node_ComponentBoundEvent_7_OnUpdatedPage__DelegateSignature");

	Params::WBP_IngameMenu_PalCondense_C_BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalList_K2Node_ComponentBoundEvent_7_OnUpdatedPage__DelegateSignature Parms{};

	Parms.NowPage = NowPage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalList_K2Node_ComponentBoundEvent_8_OnCreatedNewSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*NewSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalCondense_C::BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalList_K2Node_ComponentBoundEvent_8_OnCreatedNewSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* NewSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalList_K2Node_ComponentBoundEvent_8_OnCreatedNewSlot__DelegateSignature");

	Params::WBP_IngameMenu_PalCondense_C_BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalList_K2Node_ComponentBoundEvent_8_OnCreatedNewSlot__DelegateSignature Parms{};

	Parms.NewSlot = NewSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalList_K2Node_ComponentBoundEvent_9_OnHoveredSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalCondense_C::BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalList_K2Node_ComponentBoundEvent_9_OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalList_K2Node_ComponentBoundEvent_9_OnHoveredSlot__DelegateSignature");

	Params::WBP_IngameMenu_PalCondense_C_BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalList_K2Node_ComponentBoundEvent_9_OnHoveredSlot__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.BndEvt__WBP_IngameMenu_PalCondense_WBP_CommonButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_IngameMenu_PalCondense_C::BndEvt__WBP_IngameMenu_PalCondense_WBP_CommonButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "BndEvt__WBP_IngameMenu_PalCondense_WBP_CommonButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.BndEvt__WBP_IngameMenu_PalCondense_WBP_Menu_btn_K2Node_ComponentBoundEvent_4_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_IngameMenu_PalCondense_C::BndEvt__WBP_IngameMenu_PalCondense_WBP_Menu_btn_K2Node_ComponentBoundEvent_4_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "BndEvt__WBP_IngameMenu_PalCondense_WBP_Menu_btn_K2Node_ComponentBoundEvent_4_OnButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.Cancel Condense
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalCondense_C::Cancel_Condense()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "Cancel Condense");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.ConfirmInvokeRankUp
// (BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalCondense_C::ConfirmInvokeRankUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "ConfirmInvokeRankUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.ConfirmSuccess
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bResult                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalCondense_C::ConfirmSuccess(bool bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "ConfirmSuccess");

	Params::WBP_IngameMenu_PalCondense_C_ConfirmSuccess Parms{};

	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_IngameMenu_PalCondense_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.ExecuteUbergraph_WBP_IngameMenu_PalCondense
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalCondense_C::ExecuteUbergraph_WBP_IngameMenu_PalCondense(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "ExecuteUbergraph_WBP_IngameMenu_PalCondense");

	Params::WBP_IngameMenu_PalCondense_C_ExecuteUbergraph_WBP_IngameMenu_PalCondense Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.Get Consumeable Pal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalCondense_C::Get_Consumeable_Pal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "Get Consumeable Pal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.GetWarningLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalCondense_C::GetWarningLevel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "GetWarningLevel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.MaxRankConfirm
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bResult                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalCondense_C::MaxRankConfirm(bool bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "MaxRankConfirm");

	Params::WBP_IngameMenu_PalCondense_C_MaxRankConfirm Parms{};

	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.OnCancelAction
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalCondense_C::OnCancelAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "OnCancelAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.OnClickSlot
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Slot_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EPalItemSlotPressType                   PressType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalCondense_C::OnClickSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot_0, EPalItemSlotPressType PressType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "OnClickSlot");

	Params::WBP_IngameMenu_PalCondense_C_OnClickSlot Parms{};

	Parms.Slot_0 = Slot_0;
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.OnHoverPalSlot
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Slot_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalCondense_C::OnHoverPalSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "OnHoverPalSlot");

	Params::WBP_IngameMenu_PalCondense_C_OnHoverPalSlot Parms{};

	Parms.Slot_0 = Slot_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalCondense_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "OnSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.OnUnhoverPalSlot
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Slot_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalCondense_C::OnUnhoverPalSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "OnUnhoverPalSlot");

	Params::WBP_IngameMenu_PalCondense_C_OnUnhoverPalSlot Parms{};

	Parms.Slot_0 = Slot_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalCondense_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "PreConstruct");

	Params::WBP_IngameMenu_PalCondense_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.RankupSuccessed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewRank                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OldRank                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalCondense_C::RankupSuccessed(int32 NewRank, int32 OldRank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "RankupSuccessed");

	Params::WBP_IngameMenu_PalCondense_C_RankupSuccessed Parms{};

	Parms.NewRank = NewRank;
	Parms.OldRank = OldRank;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.ReceiveConfirmInvokeRankup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsConfirmed                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalCondense_C::ReceiveConfirmInvokeRankup(bool IsConfirmed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "ReceiveConfirmInvokeRankup");

	Params::WBP_IngameMenu_PalCondense_C_ReceiveConfirmInvokeRankup Parms{};

	Parms.IsConfirmed = IsConfirmed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.ReceiveConfirmOverflowRankUpExp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bResult                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalCondense_C::ReceiveConfirmOverflowRankUpExp(bool bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "ReceiveConfirmOverflowRankUpExp");

	Params::WBP_IngameMenu_PalCondense_C_ReceiveConfirmOverflowRankUpExp Parms{};

	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.SetBasePal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    IndividualHandle                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalCondense_C::SetBasePal(class UPalIndividualCharacterHandle* IndividualHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "SetBasePal");

	Params::WBP_IngameMenu_PalCondense_C_SetBasePal Parms{};

	Parms.IndividualHandle = IndividualHandle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.SetRank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Rank                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ToRank                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalCondense_C::SetRank(int32 Rank, int32 ToRank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "SetRank");

	Params::WBP_IngameMenu_PalCondense_C_SetRank Parms{};

	Parms.Rank = Rank;
	Parms.ToRank = ToRank;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalCondense_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.SetupBoxSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Slot_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalCondense_C::SetupBoxSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "SetupBoxSlot");

	Params::WBP_IngameMenu_PalCondense_C_SetupBoxSlot Parms{};

	Parms.Slot_0 = Slot_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.SetWorkSuitability
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterParameter* IndividualParam                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalCondense_C::SetWorkSuitability(class UPalIndividualCharacterParameter* IndividualParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "SetWorkSuitability");

	Params::WBP_IngameMenu_PalCondense_C_SetWorkSuitability Parms{};

	Parms.IndividualParam = IndividualParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.UpdateBaseCharacterSimulateStatus
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalCondense_C::UpdateBaseCharacterSimulateStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "UpdateBaseCharacterSimulateStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.UpdateGauge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalCondense_C::UpdateGauge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "UpdateGauge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.UpdateSimulation
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalCondense_C::UpdateSimulation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "UpdateSimulation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_IngameMenu_PalCondense_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalCondense_C", "BP_GetDesiredFocusTarget");

	Params::WBP_IngameMenu_PalCondense_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

