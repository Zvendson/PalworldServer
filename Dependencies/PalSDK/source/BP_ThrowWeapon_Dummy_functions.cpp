#include "PalServer/Basic.hpp"

#include "PalServer/BP_ThrowWeapon_Dummy_classes.hpp"
#include "PalServer/BP_ThrowWeapon_Dummy_parameters.hpp"


namespace PalServer
{

// Function BP_ThrowWeapon_Dummy.BP_ThrowWeapon_Dummy_C.ExecuteUbergraph_BP_ThrowWeapon_Dummy
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowWeapon_Dummy_C::ExecuteUbergraph_BP_ThrowWeapon_Dummy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowWeapon_Dummy_C", "ExecuteUbergraph_BP_ThrowWeapon_Dummy");

	Params::BP_ThrowWeapon_Dummy_C_ExecuteUbergraph_BP_ThrowWeapon_Dummy Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

