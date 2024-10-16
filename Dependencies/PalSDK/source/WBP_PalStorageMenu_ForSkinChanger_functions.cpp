#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_PalStorageMenu_ForSkinChanger_classes.hpp"
#include "PalSDK/WBP_PalStorageMenu_ForSkinChanger_parameters.hpp"


namespace PalSDK
{

// Function WBP_PalStorageMenu_ForSkinChanger.WBP_PalStorageMenu_ForSkinChanger_C.DisableNoSkinCharacterButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PalStorageMenu_ForSkinChanger_C::DisableNoSkinCharacterButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageMenu_ForSkinChanger_C", "DisableNoSkinCharacterButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalStorageMenu_ForSkinChanger.WBP_PalStorageMenu_ForSkinChanger_C.ExecuteUbergraph_WBP_PalStorageMenu_ForSkinChanger
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageMenu_ForSkinChanger_C::ExecuteUbergraph_WBP_PalStorageMenu_ForSkinChanger(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageMenu_ForSkinChanger_C", "ExecuteUbergraph_WBP_PalStorageMenu_ForSkinChanger");

	Params::WBP_PalStorageMenu_ForSkinChanger_C_ExecuteUbergraph_WBP_PalStorageMenu_ForSkinChanger Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalStorageMenu_ForSkinChanger.WBP_PalStorageMenu_ForSkinChanger_C.IsMatchCharacterID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalIndividualCharacterSlot*      Slot_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsMatch                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageMenu_ForSkinChanger_C::IsMatchCharacterID(class UPalIndividualCharacterSlot* Slot_0, bool* bIsMatch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageMenu_ForSkinChanger_C", "IsMatchCharacterID");

	Params::WBP_PalStorageMenu_ForSkinChanger_C_IsMatchCharacterID Parms{};

	Parms.Slot_0 = Slot_0;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsMatch != nullptr)
		*bIsMatch = Parms.bIsMatch;
}


// Function WBP_PalStorageMenu_ForSkinChanger.WBP_PalStorageMenu_ForSkinChanger_C.IsSkinApplied
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalIndividualCharacterSlot*      Slot_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bSkinApplied                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageMenu_ForSkinChanger_C::IsSkinApplied(class UPalIndividualCharacterSlot* Slot_0, bool* bSkinApplied)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageMenu_ForSkinChanger_C", "IsSkinApplied");

	Params::WBP_PalStorageMenu_ForSkinChanger_C_IsSkinApplied Parms{};

	Parms.Slot_0 = Slot_0;

	UObject::ProcessEvent(Func, &Parms);

	if (bSkinApplied != nullptr)
		*bSkinApplied = Parms.bSkinApplied;
}


// Function WBP_PalStorageMenu_ForSkinChanger.WBP_PalStorageMenu_ForSkinChanger_C.OnClickedAnySlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot*      Slot_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageMenu_ForSkinChanger_C::OnClickedAnySlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageMenu_ForSkinChanger_C", "OnClickedAnySlot__DelegateSignature");

	Params::WBP_PalStorageMenu_ForSkinChanger_C_OnClickedAnySlot__DelegateSignature Parms{};

	Parms.Slot_0 = Slot_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalStorageMenu_ForSkinChanger.WBP_PalStorageMenu_ForSkinChanger_C.OnClickedCloseButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_PalStorageMenu_ForSkinChanger_C::OnClickedCloseButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageMenu_ForSkinChanger_C", "OnClickedCloseButton__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalStorageMenu_ForSkinChanger.WBP_PalStorageMenu_ForSkinChanger_C.SetTargetCharacterID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CharacterID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageMenu_ForSkinChanger_C::SetTargetCharacterID(class FName CharacterID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageMenu_ForSkinChanger_C", "SetTargetCharacterID");

	Params::WBP_PalStorageMenu_ForSkinChanger_C_SetTargetCharacterID Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalStorageMenu_ForSkinChanger.WBP_PalStorageMenu_ForSkinChanger_C.UpdateButtonEnable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PalStorageMenu_ForSkinChanger_C::UpdateButtonEnable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageMenu_ForSkinChanger_C", "UpdateButtonEnable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalStorageMenu_ForSkinChanger.WBP_PalStorageMenu_ForSkinChanger_C.カスタムイベント
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalStorageMenu_ForSkinChanger_C::________________________()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageMenu_ForSkinChanger_C", "カスタムイベント");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalStorageMenu_ForSkinChanger.WBP_PalStorageMenu_ForSkinChanger_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_PalStorageMenu_ForSkinChanger_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageMenu_ForSkinChanger_C", "OnSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalStorageMenu_ForSkinChanger.WBP_PalStorageMenu_ForSkinChanger_C.OnUpdatePagePalBoxList
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// int32                                   NowPage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPalIndividualCharacterSlot*>SlotList                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PalStorageMenu_ForSkinChanger_C::OnUpdatePagePalBoxList(int32 NowPage, const TArray<class UPalIndividualCharacterSlot*>& SlotList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageMenu_ForSkinChanger_C", "OnUpdatePagePalBoxList");

	Params::WBP_PalStorageMenu_ForSkinChanger_C_OnUpdatePagePalBoxList Parms{};

	Parms.NowPage = NowPage;
	Parms.SlotList = std::move(SlotList);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalStorageMenu_ForSkinChanger.WBP_PalStorageMenu_ForSkinChanger_C.OnUpdatePageWorkerList
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class UPalIndividualCharacterSlot*>SlotList                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PalStorageMenu_ForSkinChanger_C::OnUpdatePageWorkerList(const TArray<class UPalIndividualCharacterSlot*>& SlotList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageMenu_ForSkinChanger_C", "OnUpdatePageWorkerList");

	Params::WBP_PalStorageMenu_ForSkinChanger_C_OnUpdatePageWorkerList Parms{};

	Parms.SlotList = std::move(SlotList);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalStorageMenu_ForSkinChanger.WBP_PalStorageMenu_ForSkinChanger_C.SelectSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot*      Slot_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPalItemSlotPressType                   PressType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageMenu_ForSkinChanger_C::SelectSlot(class UPalIndividualCharacterSlot* Slot_0, EPalItemSlotPressType PressType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageMenu_ForSkinChanger_C", "SelectSlot");

	Params::WBP_PalStorageMenu_ForSkinChanger_C_SelectSlot Parms{};

	Parms.Slot_0 = Slot_0;
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);
}

}

