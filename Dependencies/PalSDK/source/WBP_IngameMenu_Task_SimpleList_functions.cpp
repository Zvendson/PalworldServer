#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_IngameMenu_Task_SimpleList_classes.hpp"
#include "PalSDK/WBP_IngameMenu_Task_SimpleList_parameters.hpp"


namespace PalSDK
{

// Function WBP_IngameMenu_Task_SimpleList.WBP_IngameMenu_Task_SimpleList_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_Task_SimpleList_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_Task_SimpleList_C", "Clear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_Task_SimpleList.WBP_IngameMenu_Task_SimpleList_C.ExecuteUbergraph_WBP_IngameMenu_Task_SimpleList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Task_SimpleList_C::ExecuteUbergraph_WBP_IngameMenu_Task_SimpleList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_Task_SimpleList_C", "ExecuteUbergraph_WBP_IngameMenu_Task_SimpleList");

	Params::WBP_IngameMenu_Task_SimpleList_C_ExecuteUbergraph_WBP_IngameMenu_Task_SimpleList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_Task_SimpleList.WBP_IngameMenu_Task_SimpleList_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_IngameMenu_Task_SimpleList_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_Task_SimpleList_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_Task_SimpleList.WBP_IngameMenu_Task_SimpleList_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot*      TargetSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Task_SimpleList_C::Setup(class UPalIndividualCharacterSlot* TargetSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_Task_SimpleList_C", "Setup");

	Params::WBP_IngameMenu_Task_SimpleList_C_Setup Parms{};

	Parms.TargetSlot = TargetSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_Task_SimpleList.WBP_IngameMenu_Task_SimpleList_C.UpdateCondition
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<EPalUIConditionType>             Conditions                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_IngameMenu_Task_SimpleList_C::UpdateCondition(TArray<EPalUIConditionType>& Conditions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_Task_SimpleList_C", "UpdateCondition");

	Params::WBP_IngameMenu_Task_SimpleList_C_UpdateCondition Parms{};

	Parms.Conditions = std::move(Conditions);

	UObject::ProcessEvent(Func, &Parms);

	Conditions = std::move(Parms.Conditions);
}


// Function WBP_IngameMenu_Task_SimpleList.WBP_IngameMenu_Task_SimpleList_C.UpdateNickName
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           NewNickName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Task_SimpleList_C::UpdateNickName(const class FString& NewNickName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_Task_SimpleList_C", "UpdateNickName");

	Params::WBP_IngameMenu_Task_SimpleList_C_UpdateNickName Parms{};

	Parms.NewNickName = std::move(NewNickName);

	UObject::ProcessEvent(Func, &Parms);
}

}

