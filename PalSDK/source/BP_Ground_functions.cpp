#include "PalServer/Basic.hpp"

#include "PalServer/BP_Ground_classes.hpp"
#include "PalServer/BP_Ground_parameters.hpp"


namespace PalServer
{

// Function BP_Ground.BP_Ground_C.ChangeMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Ground_C::ChangeMode(int32 NewMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ground_C", "ChangeMode");

	Params::BP_Ground_C_ChangeMode Parms{};

	Parms.NewMode = NewMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Ground.BP_Ground_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Ground_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ground_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

