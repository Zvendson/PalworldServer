#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_LineThunderBullet_classes.hpp"
#include "PalSDK/BP_LineThunderBullet_parameters.hpp"


namespace PalSDK
{

// Function BP_LineThunderBullet.BP_LineThunderBullet_C.ActivateOmen
// (BlueprintCallable, BlueprintEvent)

void ABP_LineThunderBullet_C::ActivateOmen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LineThunderBullet_C", "ActivateOmen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LineThunderBullet.BP_LineThunderBullet_C.ExecuteUbergraph_BP_LineThunderBullet
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LineThunderBullet_C::ExecuteUbergraph_BP_LineThunderBullet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LineThunderBullet_C", "ExecuteUbergraph_BP_LineThunderBullet");

	Params::BP_LineThunderBullet_C_ExecuteUbergraph_BP_LineThunderBullet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

