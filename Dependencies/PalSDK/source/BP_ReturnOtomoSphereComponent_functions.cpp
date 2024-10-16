#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ReturnOtomoSphereComponent_classes.hpp"


namespace PalSDK
{

// Function BP_ReturnOtomoSphereComponent.BP_ReturnOtomoSphereComponent_C.DeleteSelf
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ReturnOtomoSphereComponent_C::DeleteSelf()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ReturnOtomoSphereComponent_C", "DeleteSelf");

	UObject::ProcessEvent(Func, nullptr);
}

}

