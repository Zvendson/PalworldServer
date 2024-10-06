#include "PalServer/Basic.hpp"

#include "PalServer/BP_SkillEffect_SandTornado_classes.hpp"
#include "PalServer/BP_SkillEffect_SandTornado_parameters.hpp"


namespace PalServer
{

// Function BP_SkillEffect_SandTornado.BP_SkillEffect_SandTornado_C.CancelShoot
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_SandTornado_C::CancelShoot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_SandTornado_C", "CancelShoot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_SandTornado.BP_SkillEffect_SandTornado_C.ExecuteUbergraph_BP_SkillEffect_SandTornado
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_SandTornado_C::ExecuteUbergraph_BP_SkillEffect_SandTornado(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_SandTornado_C", "ExecuteUbergraph_BP_SkillEffect_SandTornado");

	Params::BP_SkillEffect_SandTornado_C_ExecuteUbergraph_BP_SkillEffect_SandTornado Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_SandTornado.BP_SkillEffect_SandTornado_C.GetDesiredLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        TargetLocation2D                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        NormalizedDirection2D                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        NewDirection                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NewLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_SandTornado_C::GetDesiredLocation(double DeltaTime, const struct FVector2D& TargetLocation2D, const struct FVector2D& NormalizedDirection2D, struct FVector2D* NewDirection, struct FVector* NewLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_SandTornado_C", "GetDesiredLocation");

	Params::BP_SkillEffect_SandTornado_C_GetDesiredLocation Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.TargetLocation2D = std::move(TargetLocation2D);
	Parms.NormalizedDirection2D = std::move(NormalizedDirection2D);

	UObject::ProcessEvent(Func, &Parms);

	if (NewDirection != nullptr)
		*NewDirection = std::move(Parms.NewDirection);

	if (NewLocation != nullptr)
		*NewLocation = std::move(Parms.NewLocation);
}


// Function BP_SkillEffect_SandTornado.BP_SkillEffect_SandTornado_C.MoveToTargetLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Tornado                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        TargetLocation2D                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        NormalizedDirection2D                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        NewDirection                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_SandTornado_C::MoveToTargetLocation(class APalSkillEffectBase*& Tornado, double DeltaTime, const struct FVector2D& TargetLocation2D, const struct FVector2D& NormalizedDirection2D, struct FVector2D* NewDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_SandTornado_C", "MoveToTargetLocation");

	Params::BP_SkillEffect_SandTornado_C_MoveToTargetLocation Parms{};

	Parms.Tornado = Tornado;
	Parms.DeltaTime = DeltaTime;
	Parms.TargetLocation2D = std::move(TargetLocation2D);
	Parms.NormalizedDirection2D = std::move(NormalizedDirection2D);

	UObject::ProcessEvent(Func, &Parms);

	Tornado = Parms.Tornado;

	if (NewDirection != nullptr)
		*NewDirection = std::move(Parms.NewDirection);
}


// Function BP_SkillEffect_SandTornado.BP_SkillEffect_SandTornado_C.OnInitialize
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_SandTornado_C::OnInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_SandTornado_C", "OnInitialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_SandTornado.BP_SkillEffect_SandTornado_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_SandTornado_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_SandTornado_C", "ReceiveTick");

	Params::BP_SkillEffect_SandTornado_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_SandTornado.BP_SkillEffect_SandTornado_C.Shoot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          TargetLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_SandTornado_C::Shoot(const struct FVector& TargetLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_SandTornado_C", "Shoot");

	Params::BP_SkillEffect_SandTornado_C_Shoot Parms{};

	Parms.TargetLocation = std::move(TargetLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_SandTornado.BP_SkillEffect_SandTornado_C.ShootBullet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          TargetLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_SandTornado_C::ShootBullet(const struct FVector& TargetLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_SandTornado_C", "ShootBullet");

	Params::BP_SkillEffect_SandTornado_C_ShootBullet Parms{};

	Parms.TargetLocation = std::move(TargetLocation);

	UObject::ProcessEvent(Func, &Parms);
}

}

