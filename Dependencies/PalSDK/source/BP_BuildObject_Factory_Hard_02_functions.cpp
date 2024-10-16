#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_BuildObject_Factory_Hard_02_classes.hpp"
#include "PalSDK/BP_BuildObject_Factory_Hard_02_parameters.hpp"


namespace PalSDK
{

// Function BP_BuildObject_Factory_Hard_02.BP_BuildObject_Factory_Hard_02_C.ExecuteUbergraph_BP_BuildObject_Factory_Hard_02
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Factory_Hard_02_C::ExecuteUbergraph_BP_BuildObject_Factory_Hard_02(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Factory_Hard_02_C", "ExecuteUbergraph_BP_BuildObject_Factory_Hard_02");

	Params::BP_BuildObject_Factory_Hard_02_C_ExecuteUbergraph_BP_BuildObject_Factory_Hard_02 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_Factory_Hard_02.BP_BuildObject_Factory_Hard_02_C.OnAvailable_BlueprintImpl
// (Event, Protected, BlueprintEvent)

void ABP_BuildObject_Factory_Hard_02_C::OnAvailable_BlueprintImpl()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Factory_Hard_02_C", "OnAvailable_BlueprintImpl");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BuildObject_Factory_Hard_02.BP_BuildObject_Factory_Hard_02_C.OnSetConcreteModel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*   Model                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Factory_Hard_02_C::OnSetConcreteModel(class UPalMapObjectConcreteModelBase* Model)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Factory_Hard_02_C", "OnSetConcreteModel");

	Params::BP_BuildObject_Factory_Hard_02_C_OnSetConcreteModel Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);
}

}

