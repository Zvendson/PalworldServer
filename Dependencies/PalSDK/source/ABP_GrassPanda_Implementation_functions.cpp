#include "PalSDK/Basic.hpp"

#include "PalSDK/ABP_GrassPanda_Implementation_classes.hpp"
#include "PalSDK/ABP_GrassPanda_Implementation_parameters.hpp"


namespace PalSDK
{

// Function ABP_GrassPanda_Implementation.ABP_GrassPanda_Implementation_C.UpperOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        NativePose                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        ActionPose                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        UpperOverride_0                                        (Parm, OutParm, NoDestructor)

void UABP_GrassPanda_Implementation_C::UpperOverride(const struct FPoseLink& NativePose, const struct FPoseLink& ActionPose, struct FPoseLink* UpperOverride_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_GrassPanda_Implementation_C", "UpperOverride");

	Params::ABP_GrassPanda_Implementation_C_UpperOverride Parms{};

	Parms.NativePose = std::move(NativePose);
	Parms.ActionPose = std::move(ActionPose);

	UObject::ProcessEvent(Func, &Parms);

	if (UpperOverride_0 != nullptr)
		*UpperOverride_0 = std::move(Parms.UpperOverride_0);
}


// Function ABP_GrassPanda_Implementation.ABP_GrassPanda_Implementation_C.LookAtOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FVector                          LookAtWorldLocation_0                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                        LookAtOverride_0                                       (Parm, OutParm, NoDestructor)

void UABP_GrassPanda_Implementation_C::LookAtOverride(const struct FPoseLink& InPose, const struct FVector& LookAtWorldLocation_0, struct FPoseLink* LookAtOverride_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_GrassPanda_Implementation_C", "LookAtOverride");

	Params::ABP_GrassPanda_Implementation_C_LookAtOverride Parms{};

	Parms.InPose = std::move(InPose);
	Parms.LookAtWorldLocation_0 = std::move(LookAtWorldLocation_0);

	UObject::ProcessEvent(Func, &Parms);

	if (LookAtOverride_0 != nullptr)
		*LookAtOverride_0 = std::move(Parms.LookAtOverride_0);
}


// Function ABP_GrassPanda_Implementation.ABP_GrassPanda_Implementation_C.ExecuteUbergraph_ABP_GrassPanda_Implementation
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_GrassPanda_Implementation_C::ExecuteUbergraph_ABP_GrassPanda_Implementation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_GrassPanda_Implementation_C", "ExecuteUbergraph_ABP_GrassPanda_Implementation");

	Params::ABP_GrassPanda_Implementation_C_ExecuteUbergraph_ABP_GrassPanda_Implementation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_GrassPanda_Implementation.ABP_GrassPanda_Implementation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GrassPanda_Implementation_AnimGraphNode_ModifyBone_C1855993489164A48479578D3D9A7A8F
// (BlueprintEvent)

void UABP_GrassPanda_Implementation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GrassPanda_Implementation_AnimGraphNode_ModifyBone_C1855993489164A48479578D3D9A7A8F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_GrassPanda_Implementation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GrassPanda_Implementation_AnimGraphNode_ModifyBone_C1855993489164A48479578D3D9A7A8F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_GrassPanda_Implementation.ABP_GrassPanda_Implementation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GrassPanda_Implementation_AnimGraphNode_ModifyBone_93DFD3BE4E28AB0AB3200CB5ABC0A4D5
// (BlueprintEvent)

void UABP_GrassPanda_Implementation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GrassPanda_Implementation_AnimGraphNode_ModifyBone_93DFD3BE4E28AB0AB3200CB5ABC0A4D5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_GrassPanda_Implementation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GrassPanda_Implementation_AnimGraphNode_ModifyBone_93DFD3BE4E28AB0AB3200CB5ABC0A4D5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_GrassPanda_Implementation.ABP_GrassPanda_Implementation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GrassPanda_Implementation_AnimGraphNode_ModifyBone_46D5D7D84A629BA96819029DBB7A90F5
// (BlueprintEvent)

void UABP_GrassPanda_Implementation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GrassPanda_Implementation_AnimGraphNode_ModifyBone_46D5D7D84A629BA96819029DBB7A90F5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_GrassPanda_Implementation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GrassPanda_Implementation_AnimGraphNode_ModifyBone_46D5D7D84A629BA96819029DBB7A90F5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_GrassPanda_Implementation.ABP_GrassPanda_Implementation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_GrassPanda_Implementation_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_GrassPanda_Implementation_C", "AnimGraph");

	Params::ABP_GrassPanda_Implementation_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ABP_GrassPanda_Implementation.ABP_GrassPanda_Implementation_C.AimingOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        DefaultPose                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FRotator                         AimRotator_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPoseLink                        AimingOverride_0                                       (Parm, OutParm, NoDestructor)

void UABP_GrassPanda_Implementation_C::AimingOverride(const struct FPoseLink& DefaultPose, const struct FRotator& AimRotator_0, struct FPoseLink* AimingOverride_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_GrassPanda_Implementation_C", "AimingOverride");

	Params::ABP_GrassPanda_Implementation_C_AimingOverride Parms{};

	Parms.DefaultPose = std::move(DefaultPose);
	Parms.AimRotator_0 = std::move(AimRotator_0);

	UObject::ProcessEvent(Func, &Parms);

	if (AimingOverride_0 != nullptr)
		*AimingOverride_0 = std::move(Parms.AimingOverride_0);
}

}

