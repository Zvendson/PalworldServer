#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_BuildObject_Spa_2_classes.hpp"
#include "PalSDK/BP_BuildObject_Spa_2_parameters.hpp"


namespace PalSDK
{

// Function BP_BuildObject_Spa_2.BP_BuildObject_Spa_2_C.BP_OnSetConcreteModel
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*   ConcreteModel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Spa_2_C::BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Spa_2_C", "BP_OnSetConcreteModel");

	Params::BP_BuildObject_Spa_2_C_BP_OnSetConcreteModel Parms{};

	Parms.ConcreteModel = ConcreteModel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_Spa_2.BP_BuildObject_Spa_2_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*   Model                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Spa_2_C::CustomEvent(class UPalMapObjectConcreteModelBase* Model)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Spa_2_C", "CustomEvent");

	Params::BP_BuildObject_Spa_2_C_CustomEvent Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_Spa_2.BP_BuildObject_Spa_2_C.ExecuteUbergraph_BP_BuildObject_Spa_2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Spa_2_C::ExecuteUbergraph_BP_BuildObject_Spa_2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Spa_2_C", "ExecuteUbergraph_BP_BuildObject_Spa_2");

	Params::BP_BuildObject_Spa_2_C_ExecuteUbergraph_BP_BuildObject_Spa_2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_Spa_2.BP_BuildObject_Spa_2_C.OnStartUsingInServer
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectAmusementModel*      Model                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*                    Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Spa_2_C::OnStartUsingInServer(class UPalMapObjectAmusementModel* Model, class APalCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Spa_2_C", "OnStartUsingInServer");

	Params::BP_BuildObject_Spa_2_C_OnStartUsingInServer Parms{};

	Parms.Model = Model;
	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_Spa_2.BP_BuildObject_Spa_2_C.OnUpdateCharacter
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectAmusementModel*      Model                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Spa_2_C::OnUpdateCharacter(class UPalMapObjectAmusementModel* Model)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Spa_2_C", "OnUpdateCharacter");

	Params::BP_BuildObject_Spa_2_C_OnUpdateCharacter Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_Spa_2.BP_BuildObject_Spa_2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BuildObject_Spa_2_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Spa_2_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BuildObject_Spa_2.BP_BuildObject_Spa_2_C.SetActive_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bOn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Spa_2_C::SetActive_Internal(bool bOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Spa_2_C", "SetActive_Internal");

	Params::BP_BuildObject_Spa_2_C_SetActive_Internal Parms{};

	Parms.bOn = bOn;

	UObject::ProcessEvent(Func, &Parms);
}

}

