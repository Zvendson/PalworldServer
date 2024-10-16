#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_BuildObjectFactoryConveyorComponent_classes.hpp"
#include "PalSDK/BP_BuildObjectFactoryConveyorComponent_parameters.hpp"


namespace PalSDK
{

// Function BP_BuildObjectFactoryConveyorComponent.BP_BuildObjectFactoryConveyorComponent_C.OnReadyOwnerEnergyModule
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*   Model                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectConcreteModelModuleBase*Module                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_BuildObjectFactoryConveyorComponent_C::OnReadyOwnerEnergyModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObjectFactoryConveyorComponent_C", "OnReadyOwnerEnergyModule");

	Params::BP_BuildObjectFactoryConveyorComponent_C_OnReadyOwnerEnergyModule Parms{};

	Parms.Model = Model;
	Parms.Module = Module;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObjectFactoryConveyorComponent.BP_BuildObjectFactoryConveyorComponent_C.OnUpdateCurrentEnergyState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectEnergyModule*        Module                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_BuildObjectFactoryConveyorComponent_C::OnUpdateCurrentEnergyState(class UPalMapObjectEnergyModule* Module)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObjectFactoryConveyorComponent_C", "OnUpdateCurrentEnergyState");

	Params::BP_BuildObjectFactoryConveyorComponent_C_OnUpdateCurrentEnergyState Parms{};

	Parms.Module = Module;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObjectFactoryConveyorComponent.BP_BuildObjectFactoryConveyorComponent_C.OnUpdateRecipe
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConvertItemModel*    Model                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_BuildObjectFactoryConveyorComponent_C::OnUpdateRecipe(class UPalMapObjectConvertItemModel* Model)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObjectFactoryConveyorComponent_C", "OnUpdateRecipe");

	Params::BP_BuildObjectFactoryConveyorComponent_C_OnUpdateRecipe Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObjectFactoryConveyorComponent.BP_BuildObjectFactoryConveyorComponent_C.SetRunningConveyor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bOn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BuildObjectFactoryConveyorComponent_C::SetRunningConveyor(bool bOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObjectFactoryConveyorComponent_C", "SetRunningConveyor");

	Params::BP_BuildObjectFactoryConveyorComponent_C_SetRunningConveyor Parms{};

	Parms.bOn = bOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObjectFactoryConveyorComponent.BP_BuildObjectFactoryConveyorComponent_C.SetupByOwner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*   ConcreteModel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         ConveyorMaterialInstance                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_BuildObjectFactoryConveyorComponent_C::SetupByOwner(class UPalMapObjectConcreteModelBase* ConcreteModel, class UMaterialInstanceDynamic* ConveyorMaterialInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObjectFactoryConveyorComponent_C", "SetupByOwner");

	Params::BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner Parms{};

	Parms.ConcreteModel = ConcreteModel;
	Parms.ConveyorMaterialInstance = ConveyorMaterialInstance;

	UObject::ProcessEvent(Func, &Parms);
}

}

