#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_BuildObject_WallSignboard_classes.hpp"
#include "PalSDK/BP_BuildObject_WallSignboard_parameters.hpp"


namespace PalSDK
{

// Function BP_BuildObject_WallSignboard.BP_BuildObject_WallSignboard_C.ExecuteUbergraph_BP_BuildObject_WallSignboard
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_WallSignboard_C::ExecuteUbergraph_BP_BuildObject_WallSignboard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_WallSignboard_C", "ExecuteUbergraph_BP_BuildObject_WallSignboard");

	Params::BP_BuildObject_WallSignboard_C_ExecuteUbergraph_BP_BuildObject_WallSignboard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_WallSignboard.BP_BuildObject_WallSignboard_C.OnAvailable_BlueprintImpl
// (Event, Protected, BlueprintEvent)

void ABP_BuildObject_WallSignboard_C::OnAvailable_BlueprintImpl()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_WallSignboard_C", "OnAvailable_BlueprintImpl");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BuildObject_WallSignboard.BP_BuildObject_WallSignboard_C.OnSetConcreteModel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*   Model                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_WallSignboard_C::OnSetConcreteModel(class UPalMapObjectConcreteModelBase* Model)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_WallSignboard_C", "OnSetConcreteModel");

	Params::BP_BuildObject_WallSignboard_C_OnSetConcreteModel Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_WallSignboard.BP_BuildObject_WallSignboard_C.OnUpdateText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           TextValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_BuildObject_WallSignboard_C::OnUpdateText(const class FString& TextValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_WallSignboard_C", "OnUpdateText");

	Params::BP_BuildObject_WallSignboard_C_OnUpdateText Parms{};

	Parms.TextValue = std::move(TextValue);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_WallSignboard.BP_BuildObject_WallSignboard_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BuildObject_WallSignboard_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_WallSignboard_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

