#include "PalServer/Basic.hpp"

#include "PalServer/ABP_ChickenPal_Implemantation_classes.hpp"
#include "PalServer/ABP_ChickenPal_Implemantation_parameters.hpp"


namespace PalServer
{

// Function ABP_ChickenPal_Implemantation.ABP_ChickenPal_Implemantation_C.UpperOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        NativePose                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        ActionPose                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        UpperOverride_0                                        (Parm, OutParm, NoDestructor)

void UABP_ChickenPal_Implemantation_C::UpperOverride(const struct FPoseLink& NativePose, const struct FPoseLink& ActionPose, struct FPoseLink* UpperOverride_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_ChickenPal_Implemantation_C", "UpperOverride");

	Params::ABP_ChickenPal_Implemantation_C_UpperOverride Parms{};

	Parms.NativePose = std::move(NativePose);
	Parms.ActionPose = std::move(ActionPose);

	UObject::ProcessEvent(Func, &Parms);

	if (UpperOverride_0 != nullptr)
		*UpperOverride_0 = std::move(Parms.UpperOverride_0);
}


// Function ABP_ChickenPal_Implemantation.ABP_ChickenPal_Implemantation_C.LookAtOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FVector                          LookAtWorldLocation_0                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                        LookAtOverride_0                                       (Parm, OutParm, NoDestructor)

void UABP_ChickenPal_Implemantation_C::LookAtOverride(const struct FPoseLink& InPose, const struct FVector& LookAtWorldLocation_0, struct FPoseLink* LookAtOverride_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_ChickenPal_Implemantation_C", "LookAtOverride");

	Params::ABP_ChickenPal_Implemantation_C_LookAtOverride Parms{};

	Parms.InPose = std::move(InPose);
	Parms.LookAtWorldLocation_0 = std::move(LookAtWorldLocation_0);

	UObject::ProcessEvent(Func, &Parms);

	if (LookAtOverride_0 != nullptr)
		*LookAtOverride_0 = std::move(Parms.LookAtOverride_0);
}


// Function ABP_ChickenPal_Implemantation.ABP_ChickenPal_Implemantation_C.ExecuteUbergraph_ABP_ChickenPal_Implemantation
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_ChickenPal_Implemantation_C::ExecuteUbergraph_ABP_ChickenPal_Implemantation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_ChickenPal_Implemantation_C", "ExecuteUbergraph_ABP_ChickenPal_Implemantation");

	Params::ABP_ChickenPal_Implemantation_C_ExecuteUbergraph_ABP_ChickenPal_Implemantation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_ChickenPal_Implemantation.ABP_ChickenPal_Implemantation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_ChickenPal_Implemantation_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_ChickenPal_Implemantation_C", "AnimGraph");

	Params::ABP_ChickenPal_Implemantation_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ABP_ChickenPal_Implemantation.ABP_ChickenPal_Implemantation_C.AimingOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        DefaultPose                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FRotator                         AimRotator                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPoseLink                        AimingOverride_0                                       (Parm, OutParm, NoDestructor)

void UABP_ChickenPal_Implemantation_C::AimingOverride(const struct FPoseLink& DefaultPose, const struct FRotator& AimRotator, struct FPoseLink* AimingOverride_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_ChickenPal_Implemantation_C", "AimingOverride");

	Params::ABP_ChickenPal_Implemantation_C_AimingOverride Parms{};

	Parms.DefaultPose = std::move(DefaultPose);
	Parms.AimRotator = std::move(AimRotator);

	UObject::ProcessEvent(Func, &Parms);

	if (AimingOverride_0 != nullptr)
		*AimingOverride_0 = std::move(Parms.AimingOverride_0);
}

}

