#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ActionUnlockCagePalLock_classes.hpp"
#include "PalSDK/BP_ActionUnlockCagePalLock_parameters.hpp"


namespace PalSDK
{

// Function BP_ActionUnlockCagePalLock.BP_ActionUnlockCagePalLock_C.ExecuteUbergraph_BP_ActionUnlockCagePalLock
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionUnlockCagePalLock_C::ExecuteUbergraph_BP_ActionUnlockCagePalLock(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUnlockCagePalLock_C", "ExecuteUbergraph_BP_ActionUnlockCagePalLock");

	Params::BP_ActionUnlockCagePalLock_C_ExecuteUbergraph_BP_ActionUnlockCagePalLock Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionUnlockCagePalLock.BP_ActionUnlockCagePalLock_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionUnlockCagePalLock_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUnlockCagePalLock_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionUnlockCagePalLock.BP_ActionUnlockCagePalLock_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_ActionUnlockCagePalLock_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUnlockCagePalLock_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionUnlockCagePalLock.BP_ActionUnlockCagePalLock_C.RotateToLockModel
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ActionUnlockCagePalLock_C::RotateToLockModel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUnlockCagePalLock_C", "RotateToLockModel");

	UObject::ProcessEvent(Func, nullptr);
}

}

