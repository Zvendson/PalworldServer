#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_BuildObject_HatchingPalEgg_classes.hpp"
#include "PalSDK/BP_BuildObject_HatchingPalEgg_parameters.hpp"


namespace PalSDK
{

// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.ExecuteUbergraph_BP_BuildObject_HatchingPalEgg
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::ExecuteUbergraph_BP_BuildObject_HatchingPalEgg(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "ExecuteUbergraph_BP_BuildObject_HatchingPalEgg");

	Params::BP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.GetCurrentTemperature
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   CurrentTemperature                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::GetCurrentTemperature(int32* CurrentTemperature)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "GetCurrentTemperature");

	Params::BP_BuildObject_HatchingPalEgg_C_GetCurrentTemperature Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentTemperature != nullptr)
		*CurrentTemperature = Parms.CurrentTemperature;
}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.GetHatchingTemperature
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Temperature                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::GetHatchingTemperature(int32* Temperature)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "GetHatchingTemperature");

	Params::BP_BuildObject_HatchingPalEgg_C_GetHatchingTemperature Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Temperature != nullptr)
		*Temperature = Parms.Temperature;
}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.GetTemperatureDiff
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Diff                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::GetTemperatureDiff(int32* Diff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "GetTemperatureDiff");

	Params::BP_BuildObject_HatchingPalEgg_C_GetTemperatureDiff Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Diff != nullptr)
		*Diff = Parms.Diff;
}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.LoadEggMeshModel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UClass>             EggActorClass_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::LoadEggMeshModel(TSoftClassPtr<class UClass> EggActorClass_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "LoadEggMeshModel");

	Params::BP_BuildObject_HatchingPalEgg_C_LoadEggMeshModel Parms{};

	Parms.EggActorClass_0 = EggActorClass_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.On Change Temperature
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NextTemperature                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::On_Change_Temperature(int32 NextTemperature)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "On Change Temperature");

	Params::BP_BuildObject_HatchingPalEgg_C_On_Change_Temperature Parms{};

	Parms.NextTemperature = NextTemperature;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.OnAvailable_BlueprintImpl
// (Event, Protected, BlueprintEvent)

void ABP_BuildObject_HatchingPalEgg_C::OnAvailable_BlueprintImpl()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "OnAvailable_BlueprintImpl");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.OnEndTriggerInteract
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Other                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPalInteractiveObjectIndicatorType      IndicatorType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::OnEndTriggerInteract(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "OnEndTriggerInteract");

	Params::BP_BuildObject_HatchingPalEgg_C_OnEndTriggerInteract Parms{};

	Parms.Other = Other;
	Parms.IndicatorType = IndicatorType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.OnHatchedCharacter
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectHatchingEggModel*    Model                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::OnHatchedCharacter(class UPalMapObjectHatchingEggModel* Model)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "OnHatchedCharacter");

	Params::BP_BuildObject_HatchingPalEgg_C_OnHatchedCharacter Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.OnLoaded_B204AE4F4F695277751BD0B2AE4D80AE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::OnLoaded_B204AE4F4F695277751BD0B2AE4D80AE(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "OnLoaded_B204AE4F4F695277751BD0B2AE4D80AE");

	Params::BP_BuildObject_HatchingPalEgg_C_OnLoaded_B204AE4F4F695277751BD0B2AE4D80AE Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.OnRep_EggActorClass
// (BlueprintCallable, BlueprintEvent)

void ABP_BuildObject_HatchingPalEgg_C::OnRep_EggActorClass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "OnRep_EggActorClass");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.OnSetConcreteModelAvailable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*   Model                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::OnSetConcreteModelAvailable(class UPalMapObjectConcreteModelBase* Model)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "OnSetConcreteModelAvailable");

	Params::BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailable Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.OnSetConcreteModelAvailableInternal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*   ConcreteModel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::OnSetConcreteModelAvailableInternal(class UPalMapObjectConcreteModelBase* ConcreteModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "OnSetConcreteModelAvailableInternal");

	Params::BP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal Parms{};

	Parms.ConcreteModel = ConcreteModel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.OnStartTriggerInteract
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Other                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPalInteractiveObjectIndicatorType      IndicatorType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::OnStartTriggerInteract(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "OnStartTriggerInteract");

	Params::BP_BuildObject_HatchingPalEgg_C_OnStartTriggerInteract Parms{};

	Parms.Other = Other;
	Parms.IndicatorType = IndicatorType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.OnUpdateHatchedCharacter
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectHatchingEggModel*    Model                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::OnUpdateHatchedCharacter(class UPalMapObjectHatchingEggModel* Model)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "OnUpdateHatchedCharacter");

	Params::BP_BuildObject_HatchingPalEgg_C_OnUpdateHatchedCharacter Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.OnUpdateItemContainer
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemContainer*                Container                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::OnUpdateItemContainer(class UPalItemContainer* Container)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "OnUpdateItemContainer");

	Params::BP_BuildObject_HatchingPalEgg_C_OnUpdateItemContainer Parms{};

	Parms.Container = Container;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.OnUpdateWorkable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Workable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::OnUpdateWorkable(bool Workable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "OnUpdateWorkable");

	Params::BP_BuildObject_HatchingPalEgg_C_OnUpdateWorkable Parms{};

	Parms.Workable = Workable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.ResetHatchingSpeed
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BuildObject_HatchingPalEgg_C::ResetHatchingSpeed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "ResetHatchingSpeed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.SetEggAnimPlayState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPlay                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::SetEggAnimPlayState(bool IsPlay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "SetEggAnimPlayState");

	Params::BP_BuildObject_HatchingPalEgg_C_SetEggAnimPlayState Parms{};

	Parms.IsPlay = IsPlay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.SetupItemForeach
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                     Slot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::SetupItemForeach(class UPalItemSlot* Slot, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "SetupItemForeach");

	Params::BP_BuildObject_HatchingPalEgg_C_SetupItemForeach Parms{};

	Parms.Slot = Slot;
	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.SpawnGetPalEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BuildObject_HatchingPalEgg_C::SpawnGetPalEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "SpawnGetPalEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.UpdateHatchingSpeed
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BuildObject_HatchingPalEgg_C::UpdateHatchingSpeed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "UpdateHatchingSpeed");

	UObject::ProcessEvent(Func, nullptr);
}

}

