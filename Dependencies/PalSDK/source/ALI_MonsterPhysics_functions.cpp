#include "PalSDK/Basic.hpp"

#include "PalSDK/ALI_MonsterPhysics_classes.hpp"
#include "PalSDK/ALI_MonsterPhysics_parameters.hpp"


namespace PalSDK
{

// Function ALI_MonsterPhysics.ALI_MonsterPhysics_C.MonsterPhysics
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        MonsterPhysics_0                                       (Parm, OutParm, NoDestructor)

void IALI_MonsterPhysics_C::MonsterPhysics(const struct FPoseLink& InPose, struct FPoseLink* MonsterPhysics_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALI_MonsterPhysics_C", "MonsterPhysics");

	Params::ALI_MonsterPhysics_C_MonsterPhysics Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (MonsterPhysics_0 != nullptr)
		*MonsterPhysics_0 = std::move(Parms.MonsterPhysics_0);
}

}

