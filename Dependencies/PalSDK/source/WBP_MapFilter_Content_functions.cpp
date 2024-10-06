#include "PalServer/Basic.hpp"

#include "PalServer/WBP_MapFilter_Content_classes.hpp"
#include "PalServer/WBP_MapFilter_Content_parameters.hpp"


namespace PalServer
{

// Function WBP_MapFilter_Content.WBP_MapFilter_Content_C.BndEvt__WBP_MapFilter_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MapFilter_Content_C::BndEvt__WBP_MapFilter_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapFilter_Content_C", "BndEvt__WBP_MapFilter_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_MapFilter_Content_C_BndEvt__WBP_MapFilter_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MapFilter_Content.WBP_MapFilter_Content_C.BndEvt__WBP_MapFilter_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MapFilter_Content_C::BndEvt__WBP_MapFilter_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapFilter_Content_C", "BndEvt__WBP_MapFilter_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_MapFilter_Content_C_BndEvt__WBP_MapFilter_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MapFilter_Content.WBP_MapFilter_Content_C.BndEvt__WBP_MapFilter_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MapFilter_Content_C::BndEvt__WBP_MapFilter_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapFilter_Content_C", "BndEvt__WBP_MapFilter_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_MapFilter_Content_C_BndEvt__WBP_MapFilter_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MapFilter_Content.WBP_MapFilter_Content_C.ChangeFilter__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalLocationType                        LocationType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapFilter_Content_C::ChangeFilter__DelegateSignature(EPalLocationType LocationType, bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapFilter_Content_C", "ChangeFilter__DelegateSignature");

	Params::WBP_MapFilter_Content_C_ChangeFilter__DelegateSignature Parms{};

	Parms.LocationType = LocationType;
	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MapFilter_Content.WBP_MapFilter_Content_C.ExecuteUbergraph_WBP_MapFilter_Content
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapFilter_Content_C::ExecuteUbergraph_WBP_MapFilter_Content(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapFilter_Content_C", "ExecuteUbergraph_WBP_MapFilter_Content");

	Params::WBP_MapFilter_Content_C_ExecuteUbergraph_WBP_MapFilter_Content Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MapFilter_Content.WBP_MapFilter_Content_C.SetFilter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle              MsgId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// EPalLocationType                        LocationType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapFilter_Content_C::SetFilter(const struct FDataTableRowHandle& MsgId, EPalLocationType LocationType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapFilter_Content_C", "SetFilter");

	Params::WBP_MapFilter_Content_C_SetFilter Parms{};

	Parms.MsgId = std::move(MsgId);
	Parms.LocationType = LocationType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MapFilter_Content.WBP_MapFilter_Content_C.SetForceEnable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Set                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapFilter_Content_C::SetForceEnable(bool Set)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapFilter_Content_C", "SetForceEnable");

	Params::WBP_MapFilter_Content_C_SetForceEnable Parms{};

	Parms.Set = Set;

	UObject::ProcessEvent(Func, &Parms);
}

}

