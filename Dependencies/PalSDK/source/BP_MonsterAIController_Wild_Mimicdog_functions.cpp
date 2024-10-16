#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_MonsterAIController_Wild_Mimicdog_classes.hpp"
#include "PalSDK/BP_MonsterAIController_Wild_Mimicdog_parameters.hpp"


namespace PalSDK
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

