#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_PalStorageSortWorkSuitabilityFilterCheckBox_classes.hpp"
#include "PalSDK/WBP_PalStorageSortWorkSuitabilityFilterCheckBox_parameters.hpp"


namespace PalSDK
{

// Function WBP_PalStorageSortWorkSuitabilityFilterCheckBox.WBP_PalStorageSortWorkSuitabilityFilterCheckBox_C.BndEvt__WBP_PalStorageSortElementFilterCheckBox_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C::BndEvt__WBP_PalStorageSortElementFilterCheckBox_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortWorkSuitabilityFilterCheckBox_C", "BndEvt__WBP_PalStorageSortElementFilterCheckBox_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_PalStorageSortWorkSuitabilityFilterCheckBox_C_BndEvt__WBP_PalStorageSortElementFilterCheckBox_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalStorageSortWorkSuitabilityFilterCheckBox.WBP_PalStorageSortWorkSuitabilityFilterCheckBox_C.ExecuteUbergraph_WBP_PalStorageSortWorkSuitabilityFilterCheckBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C::ExecuteUbergraph_WBP_PalStorageSortWorkSuitabilityFilterCheckBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortWorkSuitabilityFilterCheckBox_C", "ExecuteUbergraph_WBP_PalStorageSortWorkSuitabilityFilterCheckBox");

	Params::WBP_PalStorageSortWorkSuitabilityFilterCheckBox_C_ExecuteUbergraph_WBP_PalStorageSortWorkSuitabilityFilterCheckBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalStorageSortWorkSuitabilityFilterCheckBox.WBP_PalStorageSortWorkSuitabilityFilterCheckBox_C.OnChangedStateInternal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C::OnChangedStateInternal(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortWorkSuitabilityFilterCheckBox_C", "OnChangedStateInternal");

	Params::WBP_PalStorageSortWorkSuitabilityFilterCheckBox_C_OnChangedStateInternal Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalStorageSortWorkSuitabilityFilterCheckBox.WBP_PalStorageSortWorkSuitabilityFilterCheckBox_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bChecked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPalWorkSuitability                     WorkSuitbility                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C::OnClicked__DelegateSignature(bool bChecked, EPalWorkSuitability WorkSuitbility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortWorkSuitabilityFilterCheckBox_C", "OnClicked__DelegateSignature");

	Params::WBP_PalStorageSortWorkSuitabilityFilterCheckBox_C_OnClicked__DelegateSignature Parms{};

	Parms.bChecked = bChecked;
	Parms.WorkSuitbility = WorkSuitbility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalStorageSortWorkSuitabilityFilterCheckBox.WBP_PalStorageSortWorkSuitabilityFilterCheckBox_C.SetCheckedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bChecked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C::SetCheckedState(bool bChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortWorkSuitabilityFilterCheckBox_C", "SetCheckedState");

	Params::WBP_PalStorageSortWorkSuitabilityFilterCheckBox_C_SetCheckedState Parms{};

	Parms.bChecked = bChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalStorageSortWorkSuitabilityFilterCheckBox.WBP_PalStorageSortWorkSuitabilityFilterCheckBox_C.SetWorkSuitability
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalWorkSuitability                     WorkSuitability                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C::SetWorkSuitability(EPalWorkSuitability WorkSuitability)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortWorkSuitabilityFilterCheckBox_C", "SetWorkSuitability");

	Params::WBP_PalStorageSortWorkSuitabilityFilterCheckBox_C_SetWorkSuitability Parms{};

	Parms.WorkSuitability = WorkSuitability;

	UObject::ProcessEvent(Func, &Parms);
}

}

