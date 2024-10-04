#include "PalServer/Basic.hpp"

#include "PalServer/WBP_IngameStatusPoint_classes.hpp"
#include "PalServer/WBP_IngameStatusPoint_parameters.hpp"


namespace PalServer
{

// Function WBP_IngameStatusPoint.WBP_IngameStatusPoint_C.ExecuteUbergraph_WBP_IngameStatusPoint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameStatusPoint_C::ExecuteUbergraph_WBP_IngameStatusPoint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameStatusPoint_C", "ExecuteUbergraph_WBP_IngameStatusPoint");

	Params::WBP_IngameStatusPoint_C_ExecuteUbergraph_WBP_IngameStatusPoint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameStatusPoint.WBP_IngameStatusPoint_C.SetupStatusPointAttention
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_IngameStatusPoint_C::SetupStatusPointAttention()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameStatusPoint_C", "SetupStatusPointAttention");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameStatusPoint.WBP_IngameStatusPoint_C.UpdatedTechnologyPoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TechnologyPoint                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameStatusPoint_C::UpdatedTechnologyPoint(int32 TechnologyPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameStatusPoint_C", "UpdatedTechnologyPoint");

	Params::WBP_IngameStatusPoint_C_UpdatedTechnologyPoint Parms{};

	Parms.TechnologyPoint = TechnologyPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameStatusPoint.WBP_IngameStatusPoint_C.UpdateUnusedStatusPoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   UnusedPoint                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameStatusPoint_C::UpdateUnusedStatusPoint(int32 UnusedPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameStatusPoint_C", "UpdateUnusedStatusPoint");

	Params::WBP_IngameStatusPoint_C_UpdateUnusedStatusPoint Parms{};

	Parms.UnusedPoint = UnusedPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

