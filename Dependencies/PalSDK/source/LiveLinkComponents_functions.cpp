#include "PalSDK/Basic.hpp"

#include "PalSDK/LiveLinkComponents_classes.hpp"
#include "PalSDK/LiveLinkComponents_parameters.hpp"


namespace PalSDK
{

// Function LiveLinkComponents.LiveLinkComponentController.SetSubjectRepresentation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectRepresentation   InSubjectRepresentation                                (Parm, NoDestructor, NativeAccessSpecifierPublic)

void ULiveLinkComponentController::SetSubjectRepresentation(const struct FLiveLinkSubjectRepresentation& InSubjectRepresentation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveLinkComponentController", "SetSubjectRepresentation");

	Params::LiveLinkComponentController_SetSubjectRepresentation Parms{};

	Parms.InSubjectRepresentation = std::move(InSubjectRepresentation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LiveLinkComponents.LiveLinkComponentController.GetSubjectRepresentation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLiveLinkSubjectRepresentation   ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FLiveLinkSubjectRepresentation ULiveLinkComponentController::GetSubjectRepresentation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveLinkComponentController", "GetSubjectRepresentation");

	Params::LiveLinkComponentController_GetSubjectRepresentation Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

