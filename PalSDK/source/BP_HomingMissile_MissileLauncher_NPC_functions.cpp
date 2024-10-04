#include "PalServer/Basic.hpp"

#include "PalServer/BP_HomingMissile_MissileLauncher_NPC_classes.hpp"
#include "PalServer/BP_HomingMissile_MissileLauncher_NPC_parameters.hpp"


namespace PalServer
{

// Function BP_HomingMissile_MissileLauncher_NPC.BP_HomingMissile_MissileLauncher_NPC_C.Find Target Actor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    PalCharacter                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_HomingMissile_MissileLauncher_NPC_C::Find_Target_Actor(class APalCharacter** PalCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomingMissile_MissileLauncher_NPC_C", "Find Target Actor");

	Params::BP_HomingMissile_MissileLauncher_NPC_C_Find_Target_Actor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PalCharacter != nullptr)
		*PalCharacter = Parms.PalCharacter;
}

}

