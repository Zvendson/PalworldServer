#include "PalServer/Basic.hpp"

#include "PalServer/BP_PalWindController_classes.hpp"
#include "PalServer/BP_PalWindController_parameters.hpp"


namespace PalServer
{

// Function BP_PalWindController.BP_PalWindController_C.ExecuteUbergraph_BP_PalWindController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalWindController_C::ExecuteUbergraph_BP_PalWindController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalWindController_C", "ExecuteUbergraph_BP_PalWindController");

	Params::BP_PalWindController_C_ExecuteUbergraph_BP_PalWindController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalWindController.BP_PalWindController_C.UpdateNiagaraParameterCollection
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPalWindInfo                     WindInfo                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ABP_PalWindController_C::UpdateNiagaraParameterCollection(const struct FPalWindInfo& WindInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalWindController_C", "UpdateNiagaraParameterCollection");

	Params::BP_PalWindController_C_UpdateNiagaraParameterCollection Parms{};

	Parms.WindInfo = std::move(WindInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalWindController.BP_PalWindController_C.UpdateNPC
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalWindInfo                     WindInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ABP_PalWindController_C::UpdateNPC(struct FPalWindInfo& WindInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalWindController_C", "UpdateNPC");

	Params::BP_PalWindController_C_UpdateNPC Parms{};

	Parms.WindInfo = std::move(WindInfo);

	UObject::ProcessEvent(Func, &Parms);

	WindInfo = std::move(Parms.WindInfo);
}

}

