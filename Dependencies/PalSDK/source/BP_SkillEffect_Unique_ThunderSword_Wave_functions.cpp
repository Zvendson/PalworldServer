#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SkillEffect_Unique_ThunderSword_Wave_classes.hpp"
#include "PalSDK/BP_SkillEffect_Unique_ThunderSword_Wave_parameters.hpp"


namespace PalSDK
{

// Function BP_SkillEffect_Unique_ThunderSword_Wave.BP_SkillEffect_Unique_ThunderSword_Wave_C.DelayEnableCollision
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_Unique_ThunderSword_Wave_C::DelayEnableCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Unique_ThunderSword_Wave_C", "DelayEnableCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_Unique_ThunderSword_Wave.BP_SkillEffect_Unique_ThunderSword_Wave_C.ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Unique_ThunderSword_Wave_C::ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Unique_ThunderSword_Wave_C", "ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave");

	Params::BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_Unique_ThunderSword_Wave.BP_SkillEffect_Unique_ThunderSword_Wave_C.FadeOutEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaSecond                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Unique_ThunderSword_Wave_C::FadeOutEffect(double DeltaSecond)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Unique_ThunderSword_Wave_C", "FadeOutEffect");

	Params::BP_SkillEffect_Unique_ThunderSword_Wave_C_FadeOutEffect Parms{};

	Parms.DeltaSecond = DeltaSecond;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_Unique_ThunderSword_Wave.BP_SkillEffect_Unique_ThunderSword_Wave_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkillEffect_Unique_ThunderSword_Wave_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Unique_ThunderSword_Wave_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_Unique_ThunderSword_Wave.BP_SkillEffect_Unique_ThunderSword_Wave_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Unique_ThunderSword_Wave_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Unique_ThunderSword_Wave_C", "ReceiveTick");

	Params::BP_SkillEffect_Unique_ThunderSword_Wave_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_Unique_ThunderSword_Wave.BP_SkillEffect_Unique_ThunderSword_Wave_C.SetDirection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          NewDirct                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   DirctIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   WaveCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  InitialAngle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Unique_ThunderSword_Wave_C::SetDirection(const struct FVector& NewDirct, int32 DirctIndex, int32 WaveCount, double InitialAngle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Unique_ThunderSword_Wave_C", "SetDirection");

	Params::BP_SkillEffect_Unique_ThunderSword_Wave_C_SetDirection Parms{};

	Parms.NewDirct = std::move(NewDirct);
	Parms.DirctIndex = DirctIndex;
	Parms.WaveCount = WaveCount;
	Parms.InitialAngle = InitialAngle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_Unique_ThunderSword_Wave.BP_SkillEffect_Unique_ThunderSword_Wave_C.SetLifeTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Unique_ThunderSword_Wave_C::SetLifeTime(double Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Unique_ThunderSword_Wave_C", "SetLifeTime");

	Params::BP_SkillEffect_Unique_ThunderSword_Wave_C_SetLifeTime Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_Unique_ThunderSword_Wave.BP_SkillEffect_Unique_ThunderSword_Wave_C.WaveEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_Unique_ThunderSword_Wave_C::WaveEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Unique_ThunderSword_Wave_C", "WaveEnd");

	UObject::ProcessEvent(Func, nullptr);
}

}

