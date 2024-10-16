#include "PalSDK/Basic.hpp"

#include "PalSDK/ABP_Player_Head_classes.hpp"
#include "PalSDK/ABP_Player_Head_parameters.hpp"


namespace PalSDK
{

// Function ABP_Player_Head.ABP_Player_Head_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_Player_Head_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Player_Head_C", "AnimGraph");

	Params::ABP_Player_Head_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ABP_Player_Head.ABP_Player_Head_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)

void UABP_Player_Head_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Player_Head_C", "BlueprintBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Player_Head.ABP_Player_Head_C.ExecuteUbergraph_ABP_Player_Head
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_Head_C::ExecuteUbergraph_ABP_Player_Head(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Player_Head_C", "ExecuteUbergraph_ABP_Player_Head");

	Params::ABP_Player_Head_C_ExecuteUbergraph_ABP_Player_Head Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_Player_Head.ABP_Player_Head_C.EyeLocationFix
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        EyeLocationFix_0                                       (Parm, OutParm, NoDestructor)

void UABP_Player_Head_C::EyeLocationFix(const struct FPoseLink& InPose, struct FPoseLink* EyeLocationFix_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Player_Head_C", "EyeLocationFix");

	Params::ABP_Player_Head_C_EyeLocationFix Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (EyeLocationFix_0 != nullptr)
		*EyeLocationFix_0 = std::move(Parms.EyeLocationFix_0);
}

}

