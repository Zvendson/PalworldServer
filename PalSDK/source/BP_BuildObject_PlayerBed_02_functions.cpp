#include "PalServer/Basic.hpp"

#include "PalServer/BP_BuildObject_PlayerBed_02_classes.hpp"


namespace PalServer
{

// Function BP_BuildObject_PlayerBed_02.BP_BuildObject_PlayerBed_02_C.OpenMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BuildObject_PlayerBed_02_C::OpenMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_PlayerBed_02_C", "OpenMenu");

	UObject::ProcessEvent(Func, nullptr);
}

}

