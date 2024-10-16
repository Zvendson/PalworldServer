#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SkillEffect_Inferno_classes.hpp"
#include "PalSDK/BP_SkillEffect_Inferno_parameters.hpp"


namespace PalSDK
{

// Function BP_SkillEffect_Inferno.BP_SkillEffect_Inferno_C.ExecuteUbergraph_BP_SkillEffect_Inferno
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Inferno_C::ExecuteUbergraph_BP_SkillEffect_Inferno(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Inferno_C", "ExecuteUbergraph_BP_SkillEffect_Inferno");

	Params::BP_SkillEffect_Inferno_C_ExecuteUbergraph_BP_SkillEffect_Inferno Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_Inferno.BP_SkillEffect_Inferno_C.Explosion
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_Inferno_C::Explosion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Inferno_C", "Explosion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_Inferno.BP_SkillEffect_Inferno_C.GetEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                           NewParam                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Inferno_C::GetEffect(class UClass** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Inferno_C", "GetEffect");

	Params::BP_SkillEffect_Inferno_C_GetEffect Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BP_SkillEffect_Inferno.BP_SkillEffect_Inferno_C.GetInsertIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Index_0                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsInside                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Inferno_C::GetInsertIndex(const struct FVector& Location, int32* Index_0, bool* IsInside)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Inferno_C", "GetInsertIndex");

	Params::BP_SkillEffect_Inferno_C_GetInsertIndex Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);

	if (Index_0 != nullptr)
		*Index_0 = Parms.Index_0;

	if (IsInside != nullptr)
		*IsInside = Parms.IsInside;
}


// Function BP_SkillEffect_Inferno.BP_SkillEffect_Inferno_C.GetRandomPointList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector2D>                NewParam                                               (Parm, OutParm)

void ABP_SkillEffect_Inferno_C::GetRandomPointList(TArray<struct FVector2D>* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Inferno_C", "GetRandomPointList");

	Params::BP_SkillEffect_Inferno_C_GetRandomPointList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);
}


// Function BP_SkillEffect_Inferno.BP_SkillEffect_Inferno_C.OnExlosion
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_Inferno_C::OnExlosion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Inferno_C", "OnExlosion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_Inferno.BP_SkillEffect_Inferno_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Inferno_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Inferno_C", "ReceiveTick");

	Params::BP_SkillEffect_Inferno_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_Inferno.BP_SkillEffect_Inferno_C.SpawnBullet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_Inferno_C::SpawnBullet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Inferno_C", "SpawnBullet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_Inferno.BP_SkillEffect_Inferno_C.StartInterval
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_Inferno_C::StartInterval()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Inferno_C", "StartInterval");

	UObject::ProcessEvent(Func, nullptr);
}

}

