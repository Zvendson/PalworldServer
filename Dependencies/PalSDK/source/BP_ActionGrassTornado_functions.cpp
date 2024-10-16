#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ActionGrassTornado_classes.hpp"
#include "PalSDK/BP_ActionGrassTornado_parameters.hpp"


namespace PalSDK
{

// Function BP_ActionGrassTornado.BP_ActionGrassTornado_C.OnStartProcessAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ActionGrassTornado_C::OnStartProcessAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGrassTornado_C", "OnStartProcessAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

}

