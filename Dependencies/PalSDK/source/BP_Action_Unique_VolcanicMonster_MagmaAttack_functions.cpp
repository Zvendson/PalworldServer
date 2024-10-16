#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_Action_Unique_VolcanicMonster_MagmaAttack_classes.hpp"
#include "PalSDK/BP_Action_Unique_VolcanicMonster_MagmaAttack_parameters.hpp"


namespace PalSDK
{

// Function BP_Action_Unique_VolcanicMonster_MagmaAttack.BP_Action_Unique_VolcanicMonster_MagmaAttack_C.ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_VolcanicMonster_MagmaAttack_C::ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_VolcanicMonster_MagmaAttack_C", "ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack");

	Params::BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_VolcanicMonster_MagmaAttack.BP_Action_Unique_VolcanicMonster_MagmaAttack_C.FindSpawnLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_VolcanicMonster_MagmaAttack_C::FindSpawnLocation(struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_VolcanicMonster_MagmaAttack_C", "FindSpawnLocation");

	Params::BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}


// Function BP_Action_Unique_VolcanicMonster_MagmaAttack.BP_Action_Unique_VolcanicMonster_MagmaAttack_C.GetEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                           NewParam                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_VolcanicMonster_MagmaAttack_C::GetEffect(class UClass** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_VolcanicMonster_MagmaAttack_C", "GetEffect");

	Params::BP_Action_Unique_VolcanicMonster_MagmaAttack_C_GetEffect Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BP_Action_Unique_VolcanicMonster_MagmaAttack.BP_Action_Unique_VolcanicMonster_MagmaAttack_C.GetMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimMontage*                     NewParam                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_VolcanicMonster_MagmaAttack_C::GetMontage(class UAnimMontage** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_VolcanicMonster_MagmaAttack_C", "GetMontage");

	Params::BP_Action_Unique_VolcanicMonster_MagmaAttack_C_GetMontage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BP_Action_Unique_VolcanicMonster_MagmaAttack.BP_Action_Unique_VolcanicMonster_MagmaAttack_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_Action_Unique_VolcanicMonster_MagmaAttack_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_VolcanicMonster_MagmaAttack_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Unique_VolcanicMonster_MagmaAttack.BP_Action_Unique_VolcanicMonster_MagmaAttack_C.OnBlendOut_090DDDA44FFC5FC760FE0895EF53957A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_VolcanicMonster_MagmaAttack_C::OnBlendOut_090DDDA44FFC5FC760FE0895EF53957A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_VolcanicMonster_MagmaAttack_C", "OnBlendOut_090DDDA44FFC5FC760FE0895EF53957A");

	Params::BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnBlendOut_090DDDA44FFC5FC760FE0895EF53957A Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_VolcanicMonster_MagmaAttack.BP_Action_Unique_VolcanicMonster_MagmaAttack_C.OnCompleted_090DDDA44FFC5FC760FE0895EF53957A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_VolcanicMonster_MagmaAttack_C::OnCompleted_090DDDA44FFC5FC760FE0895EF53957A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_VolcanicMonster_MagmaAttack_C", "OnCompleted_090DDDA44FFC5FC760FE0895EF53957A");

	Params::BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnCompleted_090DDDA44FFC5FC760FE0895EF53957A Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_VolcanicMonster_MagmaAttack.BP_Action_Unique_VolcanicMonster_MagmaAttack_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_Action_Unique_VolcanicMonster_MagmaAttack_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_VolcanicMonster_MagmaAttack_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Unique_VolcanicMonster_MagmaAttack.BP_Action_Unique_VolcanicMonster_MagmaAttack_C.OnInterrupted_090DDDA44FFC5FC760FE0895EF53957A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_VolcanicMonster_MagmaAttack_C::OnInterrupted_090DDDA44FFC5FC760FE0895EF53957A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_VolcanicMonster_MagmaAttack_C", "OnInterrupted_090DDDA44FFC5FC760FE0895EF53957A");

	Params::BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnInterrupted_090DDDA44FFC5FC760FE0895EF53957A Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_VolcanicMonster_MagmaAttack.BP_Action_Unique_VolcanicMonster_MagmaAttack_C.OnNotifyBegin_090DDDA44FFC5FC760FE0895EF53957A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_VolcanicMonster_MagmaAttack_C::OnNotifyBegin_090DDDA44FFC5FC760FE0895EF53957A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_VolcanicMonster_MagmaAttack_C", "OnNotifyBegin_090DDDA44FFC5FC760FE0895EF53957A");

	Params::BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnNotifyBegin_090DDDA44FFC5FC760FE0895EF53957A Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_VolcanicMonster_MagmaAttack.BP_Action_Unique_VolcanicMonster_MagmaAttack_C.OnNotifyEnd_090DDDA44FFC5FC760FE0895EF53957A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_VolcanicMonster_MagmaAttack_C::OnNotifyEnd_090DDDA44FFC5FC760FE0895EF53957A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_VolcanicMonster_MagmaAttack_C", "OnNotifyEnd_090DDDA44FFC5FC760FE0895EF53957A");

	Params::BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnNotifyEnd_090DDDA44FFC5FC760FE0895EF53957A Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}

}

