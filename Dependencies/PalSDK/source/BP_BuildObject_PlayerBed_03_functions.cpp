#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_BuildObject_PlayerBed_03_classes.hpp"


namespace PalSDK
{

// Function BP_BuildObject_PlayerBed_03.BP_BuildObject_PlayerBed_03_C.OpenMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BuildObject_PlayerBed_03_C::OpenMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_PlayerBed_03_C", "OpenMenu");

	UObject::ProcessEvent(Func, nullptr);
}

}

