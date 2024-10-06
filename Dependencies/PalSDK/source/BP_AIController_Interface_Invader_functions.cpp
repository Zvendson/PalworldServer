#include "PalServer/Basic.hpp"

#include "PalServer/BP_AIController_Interface_Invader_classes.hpp"
#include "PalServer/BP_AIController_Interface_Invader_parameters.hpp"


namespace PalServer
{

// Function BP_AIController_Interface_Invader.BP_AIController_Interface_Invader_C.BindOnInvaderArrivedDelegate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TDelegate<void()>                       Event                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBP_AIController_Interface_Invader_C::BindOnInvaderArrivedDelegate(TDelegate<void()> Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIController_Interface_Invader_C", "BindOnInvaderArrivedDelegate");

	Params::BP_AIController_Interface_Invader_C_BindOnInvaderArrivedDelegate Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIController_Interface_Invader.BP_AIController_Interface_Invader_C.OnInvaderArrived
// (Public, BlueprintCallable, BlueprintEvent)

void IBP_AIController_Interface_Invader_C::OnInvaderArrived()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIController_Interface_Invader_C", "OnInvaderArrived");

	UObject::ProcessEvent(Func, nullptr);
}

}

