#include "PalSDK/Basic.hpp"

#include "PalSDK/Hotfix_classes.hpp"


namespace PalSDK
{

// Function Hotfix.OnlineHotfixManager.StartHotfixProcess
// (Native, Public, BlueprintCallable)

void UOnlineHotfixManager::StartHotfixProcess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnlineHotfixManager", "StartHotfixProcess");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

