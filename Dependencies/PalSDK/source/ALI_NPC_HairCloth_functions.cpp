#include "PalSDK/Basic.hpp"

#include "PalSDK/ALI_NPC_HairCloth_classes.hpp"
#include "PalSDK/ALI_NPC_HairCloth_parameters.hpp"


namespace PalSDK
{

// Function ALI_NPC_HairCloth.ALI_NPC_HairCloth_C.NPC_HairClothLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        NPC_HairClothLayer_0                                   (Parm, OutParm, NoDestructor)

void IALI_NPC_HairCloth_C::NPC_HairClothLayer(const struct FPoseLink& InPose, struct FPoseLink* NPC_HairClothLayer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALI_NPC_HairCloth_C", "NPC_HairClothLayer");

	Params::ALI_NPC_HairCloth_C_NPC_HairClothLayer Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (NPC_HairClothLayer_0 != nullptr)
		*NPC_HairClothLayer_0 = std::move(Parms.NPC_HairClothLayer_0);
}

}

