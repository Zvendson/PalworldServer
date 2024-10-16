#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_AIAction_Death_SelfDestruct_classes.hpp"
#include "PalSDK/BP_AIAction_Death_SelfDestruct_parameters.hpp"


namespace PalSDK
{

// Function BP_AIAction_Death_SelfDestruct.BP_AIAction_Death_SelfDestruct_C.GetDeathActionClass
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                           DeathAction                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Death_SelfDestruct_C::GetDeathActionClass(class UClass** DeathAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Death_SelfDestruct_C", "GetDeathActionClass");

	Params::BP_AIAction_Death_SelfDestruct_C_GetDeathActionClass Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (DeathAction != nullptr)
		*DeathAction = Parms.DeathAction;
}

}

