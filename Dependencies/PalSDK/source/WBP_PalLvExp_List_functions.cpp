#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_PalLvExp_List_classes.hpp"
#include "PalSDK/WBP_PalLvExp_List_parameters.hpp"


namespace PalSDK
{

// Function WBP_PalLvExp_List.WBP_PalLvExp_List_C.Anm_Open
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalLvExp_List_C::Anm_Open(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLvExp_List_C", "Anm_Open");

	Params::WBP_PalLvExp_List_C_Anm_Open Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalLvExp_List.WBP_PalLvExp_List_C.Anm_Open_All
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalLvExp_List_C::Anm_Open_All()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLvExp_List_C", "Anm_Open_All");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalLvExp_List.WBP_PalLvExp_List_C.ExecuteUbergraph_WBP_PalLvExp_List
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalLvExp_List_C::ExecuteUbergraph_WBP_PalLvExp_List(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLvExp_List_C", "ExecuteUbergraph_WBP_PalLvExp_List");

	Params::WBP_PalLvExp_List_C_ExecuteUbergraph_WBP_PalLvExp_List Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalLvExp_List.WBP_PalLvExp_List_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalLvExp_List_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLvExp_List_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalLvExp_List.WBP_PalLvExp_List_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PalLvExp_List_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLvExp_List_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}

}

