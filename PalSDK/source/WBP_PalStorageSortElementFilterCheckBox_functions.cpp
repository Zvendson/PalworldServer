#include "PalServer/Basic.hpp"

#include "PalServer/WBP_PalStorageSortElementFilterCheckBox_classes.hpp"
#include "PalServer/WBP_PalStorageSortElementFilterCheckBox_parameters.hpp"


namespace PalServer
{

// Function WBP_PalStorageSortElementFilterCheckBox.WBP_PalStorageSortElementFilterCheckBox_C.BndEvt__WBP_PalStorageSortElementFilterCheckBox_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageSortElementFilterCheckBox_C::BndEvt__WBP_PalStorageSortElementFilterCheckBox_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortElementFilterCheckBox_C", "BndEvt__WBP_PalStorageSortElementFilterCheckBox_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_PalStorageSortElementFilterCheckBox_C_BndEvt__WBP_PalStorageSortElementFilterCheckBox_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalStorageSortElementFilterCheckBox.WBP_PalStorageSortElementFilterCheckBox_C.ExecuteUbergraph_WBP_PalStorageSortElementFilterCheckBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageSortElementFilterCheckBox_C::ExecuteUbergraph_WBP_PalStorageSortElementFilterCheckBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortElementFilterCheckBox_C", "ExecuteUbergraph_WBP_PalStorageSortElementFilterCheckBox");

	Params::WBP_PalStorageSortElementFilterCheckBox_C_ExecuteUbergraph_WBP_PalStorageSortElementFilterCheckBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalStorageSortElementFilterCheckBox.WBP_PalStorageSortElementFilterCheckBox_C.OnChangedStateInternal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageSortElementFilterCheckBox_C::OnChangedStateInternal(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortElementFilterCheckBox_C", "OnChangedStateInternal");

	Params::WBP_PalStorageSortElementFilterCheckBox_C_OnChangedStateInternal Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalStorageSortElementFilterCheckBox.WBP_PalStorageSortElementFilterCheckBox_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bChecked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPalElementType                         ElementType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageSortElementFilterCheckBox_C::OnClicked__DelegateSignature(bool bChecked, EPalElementType ElementType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortElementFilterCheckBox_C", "OnClicked__DelegateSignature");

	Params::WBP_PalStorageSortElementFilterCheckBox_C_OnClicked__DelegateSignature Parms{};

	Parms.bChecked = bChecked;
	Parms.ElementType = ElementType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalStorageSortElementFilterCheckBox.WBP_PalStorageSortElementFilterCheckBox_C.SetCheckedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bChecked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageSortElementFilterCheckBox_C::SetCheckedState(bool bChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortElementFilterCheckBox_C", "SetCheckedState");

	Params::WBP_PalStorageSortElementFilterCheckBox_C_SetCheckedState Parms{};

	Parms.bChecked = bChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalStorageSortElementFilterCheckBox.WBP_PalStorageSortElementFilterCheckBox_C.SetElementType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalElementType                         ElenemtType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageSortElementFilterCheckBox_C::SetElementType(EPalElementType ElenemtType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortElementFilterCheckBox_C", "SetElementType");

	Params::WBP_PalStorageSortElementFilterCheckBox_C_SetElementType Parms{};

	Parms.ElenemtType = ElenemtType;

	UObject::ProcessEvent(Func, &Parms);
}

}

