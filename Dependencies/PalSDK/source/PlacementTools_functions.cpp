#include "PalServer/Basic.hpp"

#include "PalServer/PlacementTools_classes.hpp"


namespace PalServer
{

// Function PlacementTools.PlacementToolBase.Generate
// (Final, Native, Public, BlueprintCallable)

void APlacementToolBase::Generate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlacementToolBase", "Generate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PlacementTools.PlacementToolBase.RandomizeSeed
// (Final, Native, Protected, BlueprintCallable)

void APlacementToolBase::RandomizeSeed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlacementToolBase", "RandomizeSeed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

