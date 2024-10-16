#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_BossDemoBase_classes.hpp"


namespace PalSDK
{

// Function WBP_BossDemoBase.WBP_BossDemoBase_C.OnStartEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_BossDemoBase_C::OnStartEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossDemoBase_C", "OnStartEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BossDemoBase.WBP_BossDemoBase_C.SetupText
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_BossDemoBase_C::SetupText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossDemoBase_C", "SetupText");

	UObject::ProcessEvent(Func, nullptr);
}

}

