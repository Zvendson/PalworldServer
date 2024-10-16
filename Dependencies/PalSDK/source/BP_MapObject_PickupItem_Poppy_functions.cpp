#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_MapObject_PickupItem_Poppy_classes.hpp"
#include "PalSDK/BP_MapObject_PickupItem_Poppy_parameters.hpp"


namespace PalSDK
{

// Function BP_MapObject_PickupItem_Poppy.BP_MapObject_PickupItem_Poppy_C.IsShowOutlineInReticleTargetting
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_MapObject_PickupItem_Poppy_C::IsShowOutlineInReticleTargetting() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_PickupItem_Poppy_C", "IsShowOutlineInReticleTargetting");

	Params::BP_MapObject_PickupItem_Poppy_C_IsShowOutlineInReticleTargetting Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

