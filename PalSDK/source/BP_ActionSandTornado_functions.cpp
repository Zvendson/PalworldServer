#include "PalServer/Basic.hpp"

#include "PalServer/BP_ActionSandTornado_classes.hpp"
#include "PalServer/BP_ActionSandTornado_parameters.hpp"


namespace PalServer
{

// Function BP_ActionSandTornado.BP_ActionSandTornado_C.OnStartProcessAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ActionSandTornado_C::OnStartProcessAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSandTornado_C", "OnStartProcessAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

}

