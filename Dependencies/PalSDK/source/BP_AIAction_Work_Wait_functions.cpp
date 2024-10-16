#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_AIAction_Work_Wait_classes.hpp"


namespace PalSDK
{

// Function BP_AIAction_Work_Wait.BP_AIAction_Work_Wait_C.ReturnToDefaultPosition
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_Work_Wait_C::ReturnToDefaultPosition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Work_Wait_C", "ReturnToDefaultPosition");

	UObject::ProcessEvent(Func, nullptr);
}

}

