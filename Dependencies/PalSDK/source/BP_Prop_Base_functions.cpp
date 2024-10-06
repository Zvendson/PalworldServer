#include "PalServer/Basic.hpp"

#include "PalServer/BP_Prop_Base_classes.hpp"
#include "PalServer/BP_Prop_Base_parameters.hpp"


namespace PalServer
{

// Function BP_Prop_Base.BP_Prop_Base_C.ExecuteUbergraph_BP_Prop_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Prop_Base_C::ExecuteUbergraph_BP_Prop_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Prop_Base_C", "ExecuteUbergraph_BP_Prop_Base");

	Params::BP_Prop_Base_C_ExecuteUbergraph_BP_Prop_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

