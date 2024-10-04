#include "PalServer/Basic.hpp"

#include "PalServer/BP_PalBiomeEffectController_classes.hpp"
#include "PalServer/BP_PalBiomeEffectController_parameters.hpp"


namespace PalServer
{

// Function BP_PalBiomeEffectController.BP_PalBiomeEffectController_C.ExecuteUbergraph_BP_PalBiomeEffectController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalBiomeEffectController_C::ExecuteUbergraph_BP_PalBiomeEffectController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalBiomeEffectController_C", "ExecuteUbergraph_BP_PalBiomeEffectController");

	Params::BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalBiomeEffectController.BP_PalBiomeEffectController_C.On Biome Enter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalBiomeType                           Biome_Type                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalBiomeEffectController_C::On_Biome_Enter(EPalBiomeType Biome_Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalBiomeEffectController_C", "On Biome Enter");

	Params::BP_PalBiomeEffectController_C_On_Biome_Enter Parms{};

	Parms.Biome_Type = Biome_Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalBiomeEffectController.BP_PalBiomeEffectController_C.On Biome Exit
// (BlueprintCallable, BlueprintEvent)

void UBP_PalBiomeEffectController_C::On_Biome_Exit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalBiomeEffectController_C", "On Biome Exit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalBiomeEffectController.BP_PalBiomeEffectController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalBiomeEffectController_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalBiomeEffectController_C", "ReceiveTick");

	Params::BP_PalBiomeEffectController_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

