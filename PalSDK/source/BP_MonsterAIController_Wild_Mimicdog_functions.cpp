#include "PalServer/Basic.hpp"

#include "PalServer/BP_MonsterAIController_Wild_Mimicdog_classes.hpp"
#include "PalServer/BP_MonsterAIController_Wild_Mimicdog_parameters.hpp"


namespace PalServer
{

// Function BP_MonsterAIController_Wild_Mimicdog.BP_MonsterAIController_Wild_Mimicdog_C.PlayDefaultAction
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MonsterAIController_Wild_Mimicdog_C::PlayDefaultAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Wild_Mimicdog_C", "PlayDefaultAction");

	UObject::ProcessEvent(Func, nullptr);
}

}

