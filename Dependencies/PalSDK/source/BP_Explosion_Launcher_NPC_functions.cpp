#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_Explosion_Launcher_NPC_classes.hpp"
#include "PalSDK/BP_Explosion_Launcher_NPC_parameters.hpp"


namespace PalSDK
{

// Function BP_Explosion_Launcher_NPC.BP_Explosion_Launcher_NPC_C.BndEvt__BP_Explosion_PenguinLauncher_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UNiagaraComponent*                PSystem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Explosion_Launcher_NPC_C::BndEvt__BP_Explosion_PenguinLauncher_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature(class UNiagaraComponent* PSystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Explosion_Launcher_NPC_C", "BndEvt__BP_Explosion_PenguinLauncher_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature");

	Params::BP_Explosion_Launcher_NPC_C_BndEvt__BP_Explosion_PenguinLauncher_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature Parms{};

	Parms.PSystem = PSystem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Explosion_Launcher_NPC.BP_Explosion_Launcher_NPC_C.ExecuteUbergraph_BP_Explosion_Launcher_NPC
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Explosion_Launcher_NPC_C::ExecuteUbergraph_BP_Explosion_Launcher_NPC(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Explosion_Launcher_NPC_C", "ExecuteUbergraph_BP_Explosion_Launcher_NPC");

	Params::BP_Explosion_Launcher_NPC_C_ExecuteUbergraph_BP_Explosion_Launcher_NPC Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

