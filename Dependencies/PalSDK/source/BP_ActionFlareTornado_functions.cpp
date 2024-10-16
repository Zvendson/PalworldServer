#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ActionFlareTornado_classes.hpp"
#include "PalSDK/BP_ActionFlareTornado_parameters.hpp"


namespace PalSDK
{

// Function BP_ActionFlareTornado.BP_ActionFlareTornado_C.OnStartProcessAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ActionFlareTornado_C::OnStartProcessAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionFlareTornado_C", "OnStartProcessAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

}

