#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_OilrigMachineSpawnerComponent_classes.hpp"
#include "PalSDK/BP_OilrigMachineSpawnerComponent_parameters.hpp"


namespace PalSDK
{

// Function BP_OilrigMachineSpawnerComponent.BP_OilrigMachineSpawnerComponent_C.Despawn Delegate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_OilrigMachineSpawnerComponent_C::Despawn_Delegate(const struct FPalInstanceID& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilrigMachineSpawnerComponent_C", "Despawn Delegate");

	Params::BP_OilrigMachineSpawnerComponent_C_Despawn_Delegate Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OilrigMachineSpawnerComponent.BP_OilrigMachineSpawnerComponent_C.DespawnMachine
// (Event, Protected, BlueprintEvent)

void UBP_OilrigMachineSpawnerComponent_C::DespawnMachine()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilrigMachineSpawnerComponent_C", "DespawnMachine");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_OilrigMachineSpawnerComponent.BP_OilrigMachineSpawnerComponent_C.DespawnMecha
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_OilrigMachineSpawnerComponent_C::DespawnMecha()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilrigMachineSpawnerComponent_C", "DespawnMecha");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_OilrigMachineSpawnerComponent.BP_OilrigMachineSpawnerComponent_C.Destroy by Dead
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_OilrigMachineSpawnerComponent_C::Destroy_by_Dead()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilrigMachineSpawnerComponent_C", "Destroy by Dead");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_OilrigMachineSpawnerComponent.BP_OilrigMachineSpawnerComponent_C.ExecuteUbergraph_BP_OilrigMachineSpawnerComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OilrigMachineSpawnerComponent_C::ExecuteUbergraph_BP_OilrigMachineSpawnerComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilrigMachineSpawnerComponent_C", "ExecuteUbergraph_BP_OilrigMachineSpawnerComponent");

	Params::BP_OilrigMachineSpawnerComponent_C_ExecuteUbergraph_BP_OilrigMachineSpawnerComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OilrigMachineSpawnerComponent.BP_OilrigMachineSpawnerComponent_C.On Dead
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                     DeadInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_OilrigMachineSpawnerComponent_C::On_Dead(const struct FPalDeadInfo& DeadInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilrigMachineSpawnerComponent_C", "On Dead");

	Params::BP_OilrigMachineSpawnerComponent_C_On_Dead Parms{};

	Parms.DeadInfo = std::move(DeadInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OilrigMachineSpawnerComponent.BP_OilrigMachineSpawnerComponent_C.Spawn Delegate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_OilrigMachineSpawnerComponent_C::Spawn_Delegate(const struct FPalInstanceID& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilrigMachineSpawnerComponent_C", "Spawn Delegate");

	Params::BP_OilrigMachineSpawnerComponent_C_Spawn_Delegate Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OilrigMachineSpawnerComponent.BP_OilrigMachineSpawnerComponent_C.SpawnMachine
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_OilrigMachineSpawnerComponent_C::SpawnMachine(const struct FVector& Location, const struct FRotator& Rotate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilrigMachineSpawnerComponent_C", "SpawnMachine");

	Params::BP_OilrigMachineSpawnerComponent_C_SpawnMachine Parms{};

	Parms.Location = std::move(Location);
	Parms.Rotate = std::move(Rotate);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OilrigMachineSpawnerComponent.BP_OilrigMachineSpawnerComponent_C.SpawnMecha
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_OilrigMachineSpawnerComponent_C::SpawnMecha(const struct FVector& Location, const struct FRotator& Rotate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilrigMachineSpawnerComponent_C", "SpawnMecha");

	Params::BP_OilrigMachineSpawnerComponent_C_SpawnMecha Parms{};

	Parms.Location = std::move(Location);
	Parms.Rotate = std::move(Rotate);

	UObject::ProcessEvent(Func, &Parms);
}

}

