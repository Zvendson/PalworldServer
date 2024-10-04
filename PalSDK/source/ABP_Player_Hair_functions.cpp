#include "PalServer/Basic.hpp"

#include "PalServer/ABP_Player_Hair_classes.hpp"
#include "PalServer/ABP_Player_Hair_parameters.hpp"


namespace PalServer
{

// Function ABP_Player_Hair.ABP_Player_Hair_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_Player_Hair_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Player_Hair_C", "AnimGraph");

	Params::ABP_Player_Hair_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ABP_Player_Hair.ABP_Player_Hair_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)

void UABP_Player_Hair_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Player_Hair_C", "BlueprintBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Player_Hair.ABP_Player_Hair_C.ExecuteUbergraph_ABP_Player_Hair
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_Hair_C::ExecuteUbergraph_ABP_Player_Hair(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Player_Hair_C", "ExecuteUbergraph_ABP_Player_Hair");

	Params::ABP_Player_Hair_C_ExecuteUbergraph_ABP_Player_Hair Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_Player_Hair.ABP_Player_Hair_C.HairLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        HairLayer_0                                            (Parm, OutParm, NoDestructor)

void UABP_Player_Hair_C::HairLayer(const struct FPoseLink& InPose, struct FPoseLink* HairLayer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Player_Hair_C", "HairLayer");

	Params::ABP_Player_Hair_C_HairLayer Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (HairLayer_0 != nullptr)
		*HairLayer_0 = std::move(Parms.HairLayer_0);
}

}

