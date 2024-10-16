#include "PalSDK/Basic.hpp"

#include "PalSDK/ABP_WhiteMoth_Implementation_classes.hpp"
#include "PalSDK/ABP_WhiteMoth_Implementation_parameters.hpp"


namespace PalSDK
{

// Function ABP_WhiteMoth_Implementation.ABP_WhiteMoth_Implementation_C.UpperOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        NativePose                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        ActionPose                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        UpperOverride_0                                        (Parm, OutParm, NoDestructor)

void UABP_WhiteMoth_Implementation_C::UpperOverride(const struct FPoseLink& NativePose, const struct FPoseLink& ActionPose, struct FPoseLink* UpperOverride_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_WhiteMoth_Implementation_C", "UpperOverride");

	Params::ABP_WhiteMoth_Implementation_C_UpperOverride Parms{};

	Parms.NativePose = std::move(NativePose);
	Parms.ActionPose = std::move(ActionPose);

	UObject::ProcessEvent(Func, &Parms);

	if (UpperOverride_0 != nullptr)
		*UpperOverride_0 = std::move(Parms.UpperOverride_0);
}


// Function ABP_WhiteMoth_Implementation.ABP_WhiteMoth_Implementation_C.LookAtOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FVector                          LookAtWorldLocation_0                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                        LookAtOverride_0                                       (Parm, OutParm, NoDestructor)

void UABP_WhiteMoth_Implementation_C::LookAtOverride(const struct FPoseLink& InPose, const struct FVector& LookAtWorldLocation_0, struct FPoseLink* LookAtOverride_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_WhiteMoth_Implementation_C", "LookAtOverride");

	Params::ABP_WhiteMoth_Implementation_C_LookAtOverride Parms{};

	Parms.InPose = std::move(InPose);
	Parms.LookAtWorldLocation_0 = std::move(LookAtWorldLocation_0);

	UObject::ProcessEvent(Func, &Parms);

	if (LookAtOverride_0 != nullptr)
		*LookAtOverride_0 = std::move(Parms.LookAtOverride_0);
}


// Function ABP_WhiteMoth_Implementation.ABP_WhiteMoth_Implementation_C.ExecuteUbergraph_ABP_WhiteMoth_Implementation
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_WhiteMoth_Implementation_C::ExecuteUbergraph_ABP_WhiteMoth_Implementation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_WhiteMoth_Implementation_C", "ExecuteUbergraph_ABP_WhiteMoth_Implementation");

	Params::ABP_WhiteMoth_Implementation_C_ExecuteUbergraph_ABP_WhiteMoth_Implementation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_WhiteMoth_Implementation.ABP_WhiteMoth_Implementation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_WhiteMoth_Implementation_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_WhiteMoth_Implementation_C", "AnimGraph");

	Params::ABP_WhiteMoth_Implementation_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ABP_WhiteMoth_Implementation.ABP_WhiteMoth_Implementation_C.AimingOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        DefaultPose                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FRotator                         AimRotator                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPoseLink                        AimingOverride_0                                       (Parm, OutParm, NoDestructor)

void UABP_WhiteMoth_Implementation_C::AimingOverride(const struct FPoseLink& DefaultPose, const struct FRotator& AimRotator, struct FPoseLink* AimingOverride_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_WhiteMoth_Implementation_C", "AimingOverride");

	Params::ABP_WhiteMoth_Implementation_C_AimingOverride Parms{};

	Parms.DefaultPose = std::move(DefaultPose);
	Parms.AimRotator = std::move(AimRotator);

	UObject::ProcessEvent(Func, &Parms);

	if (AimingOverride_0 != nullptr)
		*AimingOverride_0 = std::move(Parms.AimingOverride_0);
}

}

