#include "PalServer/Basic.hpp"

#include "PalServer/BP_ShooterAnime_ThrowBase_classes.hpp"
#include "PalServer/BP_ShooterAnime_ThrowBase_parameters.hpp"


namespace PalServer
{

// Function BP_ShooterAnime_ThrowBase.BP_ShooterAnime_ThrowBase_C.ChangeRidePullTriggerAnime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalStepAxisType                        Direction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ShooterAnime_ThrowBase_C::ChangeRidePullTriggerAnime(EPalStepAxisType Direction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShooterAnime_ThrowBase_C", "ChangeRidePullTriggerAnime");

	Params::BP_ShooterAnime_ThrowBase_C_ChangeRidePullTriggerAnime Parms{};

	Parms.Direction = Direction;

	UObject::ProcessEvent(Func, &Parms);
}

}

