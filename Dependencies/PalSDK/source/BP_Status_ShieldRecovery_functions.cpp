#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_Status_ShieldRecovery_classes.hpp"
#include "PalSDK/BP_Status_ShieldRecovery_parameters.hpp"


namespace PalSDK
{

// Function BP_Status_ShieldRecovery.BP_Status_ShieldRecovery_C.ChangeSheildDamageMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Status_ShieldRecovery_C::ChangeSheildDamageMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_ShieldRecovery_C", "ChangeSheildDamageMaterial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_ShieldRecovery.BP_Status_ShieldRecovery_C.CreateDynamicMaterial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_Status_ShieldRecovery_C::CreateDynamicMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_ShieldRecovery_C", "CreateDynamicMaterial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_ShieldRecovery.BP_Status_ShieldRecovery_C.ExecuteUbergraph_BP_Status_ShieldRecovery
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_ShieldRecovery_C::ExecuteUbergraph_BP_Status_ShieldRecovery(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_ShieldRecovery_C", "ExecuteUbergraph_BP_Status_ShieldRecovery");

	Params::BP_Status_ShieldRecovery_C_ExecuteUbergraph_BP_Status_ShieldRecovery Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_ShieldRecovery.BP_Status_ShieldRecovery_C.GetParam
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalIndividualCharacterParameter* Ip                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Status_ShieldRecovery_C::GetParam(class UPalIndividualCharacterParameter** Ip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_ShieldRecovery_C", "GetParam");

	Params::BP_Status_ShieldRecovery_C_GetParam Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ip != nullptr)
		*Ip = Parms.Ip;
}


// Function BP_Status_ShieldRecovery.BP_Status_ShieldRecovery_C.OnBeginStatus
// (Event, Public, BlueprintEvent)

void UBP_Status_ShieldRecovery_C::OnBeginStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_ShieldRecovery_C", "OnBeginStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_ShieldRecovery.BP_Status_ShieldRecovery_C.OnEndStatus
// (Event, Public, BlueprintEvent)

void UBP_Status_ShieldRecovery_C::OnEndStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_ShieldRecovery_C", "OnEndStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_ShieldRecovery.BP_Status_ShieldRecovery_C.TickStatus
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_ShieldRecovery_C::TickStatus(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_ShieldRecovery_C", "TickStatus");

	Params::BP_Status_ShieldRecovery_C_TickStatus Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_ShieldRecovery.BP_Status_ShieldRecovery_C.カスタムイベント_0
// (BlueprintCallable, BlueprintEvent)

void UBP_Status_ShieldRecovery_C::_________________________0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_ShieldRecovery_C", "カスタムイベント_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_ShieldRecovery.BP_Status_ShieldRecovery_C.カスタムイベント_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    InCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Status_ShieldRecovery_C::_________________________1(class APalCharacter* InCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_ShieldRecovery_C", "カスタムイベント_1");

	Params::BP_Status_ShieldRecovery_C__________________________1 Parms{};

	Parms.InCharacter = InCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_ShieldRecovery.BP_Status_ShieldRecovery_C.カスタムイベント_DamageShield
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsShieldBroken                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_ShieldRecovery_C::_________________________DamageShield(int32 Damage, bool IsShieldBroken)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_ShieldRecovery_C", "カスタムイベント_DamageShield");

	Params::BP_Status_ShieldRecovery_C__________________________DamageShield Parms{};

	Parms.Damage = Damage;
	Parms.IsShieldBroken = IsShieldBroken;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_ShieldRecovery.BP_Status_ShieldRecovery_C.カスタムイベント_OnDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageResult                 DamageResult                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_Status_ShieldRecovery_C::_________________________OnDamage(const struct FPalDamageResult& DamageResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_ShieldRecovery_C", "カスタムイベント_OnDamage");

	Params::BP_Status_ShieldRecovery_C__________________________OnDamage Parms{};

	Parms.DamageResult = std::move(DamageResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_ShieldRecovery.BP_Status_ShieldRecovery_C.カスタムイベント_OnSlipDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_ShieldRecovery_C::_________________________OnSlipDamage(int32 Damage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_ShieldRecovery_C", "カスタムイベント_OnSlipDamage");

	Params::BP_Status_ShieldRecovery_C__________________________OnSlipDamage Parms{};

	Parms.Damage = Damage;

	UObject::ProcessEvent(Func, &Parms);
}

}

