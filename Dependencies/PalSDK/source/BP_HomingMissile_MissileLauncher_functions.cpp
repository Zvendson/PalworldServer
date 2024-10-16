#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_HomingMissile_MissileLauncher_classes.hpp"
#include "PalSDK/BP_HomingMissile_MissileLauncher_parameters.hpp"


namespace PalSDK
{

// Function BP_HomingMissile_MissileLauncher.BP_HomingMissile_MissileLauncher_C.ExecuteUbergraph_BP_HomingMissile_MissileLauncher
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HomingMissile_MissileLauncher_C::ExecuteUbergraph_BP_HomingMissile_MissileLauncher(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomingMissile_MissileLauncher_C", "ExecuteUbergraph_BP_HomingMissile_MissileLauncher");

	Params::BP_HomingMissile_MissileLauncher_C_ExecuteUbergraph_BP_HomingMissile_MissileLauncher Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HomingMissile_MissileLauncher.BP_HomingMissile_MissileLauncher_C.Find Target Actor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    PalCharacter                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_HomingMissile_MissileLauncher_C::Find_Target_Actor(class APalCharacter** PalCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomingMissile_MissileLauncher_C", "Find Target Actor");

	Params::BP_HomingMissile_MissileLauncher_C_Find_Target_Actor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PalCharacter != nullptr)
		*PalCharacter = Parms.PalCharacter;
}


// Function BP_HomingMissile_MissileLauncher.BP_HomingMissile_MissileLauncher_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HomingMissile_MissileLauncher_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomingMissile_MissileLauncher_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

