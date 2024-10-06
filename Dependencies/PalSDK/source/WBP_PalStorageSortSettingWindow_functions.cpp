#include "PalServer/Basic.hpp"

#include "PalServer/WBP_PalStorageSortSettingWindow_classes.hpp"
#include "PalServer/WBP_PalStorageSortSettingWindow_parameters.hpp"


namespace PalServer
{

// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.ApplyCachedSortInfo
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PalStorageSortSettingWindow_C::ApplyCachedSortInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortSettingWindow_C", "ApplyCachedSortInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.BndEvt__WBP_PalStorageSortSettingWindow_WBP_CommonButton_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_PalStorageSortSettingWindow_C::BndEvt__WBP_PalStorageSortSettingWindow_WBP_CommonButton_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortSettingWindow_C", "BndEvt__WBP_PalStorageSortSettingWindow_WBP_CommonButton_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.BndEvt__WBP_PalStorageSortSettingWindow_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_PalStorageSortSettingWindow_C::BndEvt__WBP_PalStorageSortSettingWindow_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortSettingWindow_C", "BndEvt__WBP_PalStorageSortSettingWindow_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.BndEvt__WBP_PalStorageSortSettingWindow_WBP_PalInvisibleButton_Favorite_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageSortSettingWindow_C::BndEvt__WBP_PalStorageSortSettingWindow_WBP_PalInvisibleButton_Favorite_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortSettingWindow_C", "BndEvt__WBP_PalStorageSortSettingWindow_WBP_PalInvisibleButton_Favorite_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_PalStorageSortSettingWindow_C_BndEvt__WBP_PalStorageSortSettingWindow_WBP_PalInvisibleButton_Favorite_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.CacheSortInfo
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PalStorageSortSettingWindow_C::CacheSortInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortSettingWindow_C", "CacheSortInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.CollectFilteringElementType
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<EPalElementType>                 ElementTypeArray                                       (Parm, OutParm)

void UWBP_PalStorageSortSettingWindow_C::CollectFilteringElementType(TArray<EPalElementType>* ElementTypeArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortSettingWindow_C", "CollectFilteringElementType");

	Params::WBP_PalStorageSortSettingWindow_C_CollectFilteringElementType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ElementTypeArray != nullptr)
		*ElementTypeArray = std::move(Parms.ElementTypeArray);
}


// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.CollectFilteringSuitability
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<EPalWorkSuitability>             SuitabilityArray                                       (Parm, OutParm)

void UWBP_PalStorageSortSettingWindow_C::CollectFilteringSuitability(TArray<EPalWorkSuitability>* SuitabilityArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortSettingWindow_C", "CollectFilteringSuitability");

	Params::WBP_PalStorageSortSettingWindow_C_CollectFilteringSuitability Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SuitabilityArray != nullptr)
		*SuitabilityArray = std::move(Parms.SuitabilityArray);
}


// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.CustomNavi_ToCloseButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_PalStorageSortSettingWindow_C::CustomNavi_ToCloseButton(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortSettingWindow_C", "CustomNavi_ToCloseButton");

	Params::WBP_PalStorageSortSettingWindow_C_CustomNavi_ToCloseButton Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.CustomNavi_ToFavoriteCheckBox
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_PalStorageSortSettingWindow_C::CustomNavi_ToFavoriteCheckBox(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortSettingWindow_C", "CustomNavi_ToFavoriteCheckBox");

	Params::WBP_PalStorageSortSettingWindow_C_CustomNavi_ToFavoriteCheckBox Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.CustomNavi_ToSortButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_PalStorageSortSettingWindow_C::CustomNavi_ToSortButton(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortSettingWindow_C", "CustomNavi_ToSortButton");

	Params::WBP_PalStorageSortSettingWindow_C_CustomNavi_ToSortButton Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.CustomNavi_ToSortTypeTop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_PalStorageSortSettingWindow_C::CustomNavi_ToSortTypeTop(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortSettingWindow_C", "CustomNavi_ToSortTypeTop");

	Params::WBP_PalStorageSortSettingWindow_C_CustomNavi_ToSortTypeTop Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalStorageSortSettingWindow_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortSettingWindow_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.ExecuteUbergraph_WBP_PalStorageSortSettingWindow
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageSortSettingWindow_C::ExecuteUbergraph_WBP_PalStorageSortSettingWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortSettingWindow_C", "ExecuteUbergraph_WBP_PalStorageSortSettingWindow");

	Params::WBP_PalStorageSortSettingWindow_C_ExecuteUbergraph_WBP_PalStorageSortSettingWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.OnClickedElementTypeCheckBox
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bChecked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPalElementType                         ElementType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageSortSettingWindow_C::OnClickedElementTypeCheckBox(bool bChecked, EPalElementType ElementType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortSettingWindow_C", "OnClickedElementTypeCheckBox");

	Params::WBP_PalStorageSortSettingWindow_C_OnClickedElementTypeCheckBox Parms{};

	Parms.bChecked = bChecked;
	Parms.ElementType = ElementType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.OnClickedSortTypeButton
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalStorageSortTypeButton_C*  Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageSortSettingWindow_C::OnClickedSortTypeButton(class UWBP_PalStorageSortTypeButton_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortSettingWindow_C", "OnClickedSortTypeButton");

	Params::WBP_PalStorageSortSettingWindow_C_OnClickedSortTypeButton Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.OnClickedWorkSuitabilityCheckBox
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bChecked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPalWorkSuitability                     WorkSuitbility                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageSortSettingWindow_C::OnClickedWorkSuitabilityCheckBox(bool bChecked, EPalWorkSuitability WorkSuitbility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortSettingWindow_C", "OnClickedWorkSuitabilityCheckBox");

	Params::WBP_PalStorageSortSettingWindow_C_OnClickedWorkSuitabilityCheckBox Parms{};

	Parms.bChecked = bChecked;
	Parms.WorkSuitbility = WorkSuitbility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalStorageSortSettingWindow_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortSettingWindow_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_PalStorageSortSettingWindow_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortSettingWindow_C", "OnSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.SetupElementTypeCheckBox
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PalStorageSortSettingWindow_C::SetupElementTypeCheckBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortSettingWindow_C", "SetupElementTypeCheckBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.SetupSortTypeButton
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PalStorageSortSettingWindow_C::SetupSortTypeButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortSettingWindow_C", "SetupSortTypeButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.SetupWorkSuitabilityCheckBox
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PalStorageSortSettingWindow_C::SetupWorkSuitabilityCheckBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortSettingWindow_C", "SetupWorkSuitabilityCheckBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_PalStorageSortSettingWindow_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalStorageSortSettingWindow_C", "BP_GetDesiredFocusTarget");

	Params::WBP_PalStorageSortSettingWindow_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

