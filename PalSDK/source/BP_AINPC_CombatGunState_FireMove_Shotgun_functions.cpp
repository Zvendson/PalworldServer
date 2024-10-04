#include "PalServer/Basic.hpp"

#include "PalServer/BP_AINPC_CombatGunState_FireMove_Shotgun_classes.hpp"
#include "PalServer/BP_AINPC_CombatGunState_FireMove_Shotgun_parameters.hpp"


namespace PalServer
{

// Function BP_AINPC_CombatGunState_FireMove_Shotgun.BP_AINPC_CombatGunState_FireMove_Shotgun_C.CanMove
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_CanMove_0                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatGunState_FireMove_Shotgun_C::CanMove(bool* Param_CanMove_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_FireMove_Shotgun_C", "CanMove");

	Params::BP_AINPC_CombatGunState_FireMove_Shotgun_C_CanMove Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_CanMove_0 != nullptr)
		*Param_CanMove_0 = Parms.Param_CanMove_0;
}


// Function BP_AINPC_CombatGunState_FireMove_Shotgun.BP_AINPC_CombatGunState_FireMove_Shotgun_C.MoveDIrectionWorldSpace
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Direction                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatGunState_FireMove_Shotgun_C::MoveDIrectionWorldSpace(struct FVector* Direction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_FireMove_Shotgun_C", "MoveDIrectionWorldSpace");

	Params::BP_AINPC_CombatGunState_FireMove_Shotgun_C_MoveDIrectionWorldSpace Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Direction != nullptr)
		*Direction = std::move(Parms.Direction);
}

}

