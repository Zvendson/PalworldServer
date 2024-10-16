#include "PalSDK/Basic.hpp"

#include "PalSDK/ActorSequence_classes.hpp"


namespace PalSDK
{

// Function ActorSequence.ActorSequenceComponent.PauseSequence
// (Final, Native, Public, BlueprintCallable)

void UActorSequenceComponent::PauseSequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActorSequenceComponent", "PauseSequence");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function ActorSequence.ActorSequenceComponent.PlaySequence
// (Final, Native, Public, BlueprintCallable)

void UActorSequenceComponent::PlaySequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActorSequenceComponent", "PlaySequence");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function ActorSequence.ActorSequenceComponent.StopSequence
// (Final, Native, Public, BlueprintCallable)

void UActorSequenceComponent::StopSequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActorSequenceComponent", "StopSequence");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

