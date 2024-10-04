#include "PalServer/Basic.hpp"

#include "PalServer/BP_MapObject_MeteorDrop_Damagable_classes.hpp"
#include "PalServer/BP_MapObject_MeteorDrop_Damagable_parameters.hpp"


namespace PalServer
{

// Function BP_MapObject_MeteorDrop_Damagable.BP_MapObject_MeteorDrop_Damagable_C.IsShowOutlineInReticleTargetting
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_MapObject_MeteorDrop_Damagable_C::IsShowOutlineInReticleTargetting() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_MeteorDrop_Damagable_C", "IsShowOutlineInReticleTargetting");

	Params::BP_MapObject_MeteorDrop_Damagable_C_IsShowOutlineInReticleTargetting Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

