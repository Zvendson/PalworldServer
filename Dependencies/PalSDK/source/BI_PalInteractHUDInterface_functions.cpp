#include "PalServer/Basic.hpp"

#include "PalServer/BI_PalInteractHUDInterface_classes.hpp"
#include "PalServer/BI_PalInteractHUDInterface_parameters.hpp"


namespace PalServer
{

// Function BI_PalInteractHUDInterface.BI_PalInteractHUDInterface_C.GetInteractWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalUserWidget*                   CreatedWidget                                          (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBI_PalInteractHUDInterface_C::GetInteractWidget(class UPalUserWidget** CreatedWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_PalInteractHUDInterface_C", "GetInteractWidget");

	Params::BI_PalInteractHUDInterface_C_GetInteractWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedWidget != nullptr)
		*CreatedWidget = Parms.CreatedWidget;
}

}

