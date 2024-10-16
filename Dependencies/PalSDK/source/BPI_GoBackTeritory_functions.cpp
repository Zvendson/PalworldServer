#include "PalSDK/Basic.hpp"

#include "PalSDK/BPI_GoBackTeritory_classes.hpp"


namespace PalSDK
{

// Function BPI_GoBackTeritory.BPI_GoBackTeritory_C.GoBack_Teritory
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_GoBackTeritory_C::GoBack_Teritory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GoBackTeritory_C", "GoBack_Teritory");

	UObject::ProcessEvent(Func, nullptr);
}

}

