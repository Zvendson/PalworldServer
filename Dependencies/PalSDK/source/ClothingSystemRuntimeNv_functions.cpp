#include "PalSDK/Basic.hpp"

#include "PalSDK/ClothingSystemRuntimeNv_classes.hpp"
#include "PalSDK/ClothingSystemRuntimeNv_parameters.hpp"


namespace PalSDK
{

// Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   InStiffness                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClothingSimulationInteractorNv::SetAnimDriveDamperStiffness(float InStiffness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClothingSimulationInteractorNv", "SetAnimDriveDamperStiffness");

	Params::ClothingSimulationInteractorNv_SetAnimDriveDamperStiffness Parms{};

	Parms.InStiffness = InStiffness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

