#include "PalServer/Basic.hpp"

#include "PalServer/BP_ActionGeneralAttackBase_classes.hpp"
#include "PalServer/BP_ActionGeneralAttackBase_parameters.hpp"


namespace PalServer
{

// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.AttachToOwner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             SocketName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPalBodyLocationType                    BodyLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::AttachToOwner(class APalSkillEffectBase* Effect, const struct FVector& Offset, class FName SocketName, EPalBodyLocationType BodyLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "AttachToOwner");

	Params::BP_ActionGeneralAttackBase_C_AttachToOwner Parms{};

	Parms.Effect = Effect;
	Parms.Offset = std::move(Offset);
	Parms.SocketName = SocketName;
	Parms.BodyLocation = BodyLocation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.CallEffect
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSkillEffectSpawnParameter       Parameter                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UBP_ActionGeneralAttackBase_C::CallEffect(const struct FSkillEffectSpawnParameter& Parameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "CallEffect");

	Params::BP_ActionGeneralAttackBase_C_CallEffect Parms{};

	Parms.Parameter = std::move(Parameter);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.CanGainSP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_ActionGeneralAttackBase_C::CanGainSP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "CanGainSP");

	Params::BP_ActionGeneralAttackBase_C_CanGainSP Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.CanStepCancel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_ActionGeneralAttackBase_C::CanStepCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "CanStepCancel");

	Params::BP_ActionGeneralAttackBase_C_CanStepCancel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.CheckFastTerminate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::CheckFastTerminate(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "CheckFastTerminate");

	Params::BP_ActionGeneralAttackBase_C_CheckFastTerminate Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.CheckMontageFacialNotify
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_ActionGeneralAttackBase_C::CheckMontageFacialNotify()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "CheckMontageFacialNotify");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.CheckMontageFacialNotify_OneAnime
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPalGeneralMontageType                  AnimType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    UseMontageFacialNotify                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::CheckMontageFacialNotify_OneAnime(EPalGeneralMontageType AnimType, bool* UseMontageFacialNotify)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "CheckMontageFacialNotify_OneAnime");

	Params::BP_ActionGeneralAttackBase_C_CheckMontageFacialNotify_OneAnime Parms{};

	Parms.AnimType = AnimType;

	UObject::ProcessEvent(Func, &Parms);

	if (UseMontageFacialNotify != nullptr)
		*UseMontageFacialNotify = Parms.UseMontageFacialNotify;
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.DoAfterAnimation
// (BlueprintCallable, BlueprintEvent)

void UBP_ActionGeneralAttackBase_C::DoAfterAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "DoAfterAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.DoEnd
// (BlueprintCallable, BlueprintEvent)

void UBP_ActionGeneralAttackBase_C::DoEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "DoEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.DoProcessAnimation
// (BlueprintCallable, BlueprintEvent)

void UBP_ActionGeneralAttackBase_C::DoProcessAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "DoProcessAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.DoStartMovement
// (BlueprintCallable, BlueprintEvent)

void UBP_ActionGeneralAttackBase_C::DoStartMovement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "DoStartMovement");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.EndFacial
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ActionGeneralAttackBase_C::EndFacial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "EndFacial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.ExecuteUbergraph_BP_ActionGeneralAttackBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::ExecuteUbergraph_BP_ActionGeneralAttackBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "ExecuteUbergraph_BP_ActionGeneralAttackBase");

	Params::BP_ActionGeneralAttackBase_C_ExecuteUbergraph_BP_ActionGeneralAttackBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.FindEffectByClass
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                           EffectClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalSkillEffectBase*              Effect                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::FindEffectByClass(class UClass* EffectClass, class APalSkillEffectBase** Effect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "FindEffectByClass");

	Params::BP_ActionGeneralAttackBase_C_FindEffectByClass Parms{};

	Parms.EffectClass = EffectClass;

	UObject::ProcessEvent(Func, &Parms);

	if (Effect != nullptr)
		*Effect = Parms.Effect;
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.Get Attack Owner
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           OwnerActor                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::Get_Attack_Owner(class AActor** OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "Get Attack Owner");

	Params::BP_ActionGeneralAttackBase_C_Get_Attack_Owner Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OwnerActor != nullptr)
		*OwnerActor = Parms.OwnerActor;
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.GetSkillEffectTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           ActionTarget                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::GetSkillEffectTarget(class AActor** ActionTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "GetSkillEffectTarget");

	Params::BP_ActionGeneralAttackBase_C_GetSkillEffectTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ActionTarget != nullptr)
		*ActionTarget = Parms.ActionTarget;
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.Movement Enable
// (BlueprintCallable, BlueprintEvent)

void UBP_ActionGeneralAttackBase_C::Movement_Enable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "Movement Enable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionGeneralAttackBase_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.OnBreakAction
// (Event, Public, BlueprintEvent)

void UBP_ActionGeneralAttackBase_C::OnBreakAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "OnBreakAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_ActionGeneralAttackBase_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.OnProcess__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_ActionGeneralAttackBase_C::OnProcess__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "OnProcess__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.OnSpawnEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::OnSpawnEffect(class APalSkillEffectBase* Effect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "OnSpawnEffect");

	Params::BP_ActionGeneralAttackBase_C_OnSpawnEffect Parms{};

	Parms.Effect = Effect;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.OnStartAfterAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ActionGeneralAttackBase_C::OnStartAfterAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "OnStartAfterAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.OnStartProcessAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ActionGeneralAttackBase_C::OnStartProcessAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "OnStartProcessAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.OnStartReadyAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ActionGeneralAttackBase_C::OnStartReadyAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "OnStartReadyAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.PlayAfterAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ActionGeneralAttackBase_C::PlayAfterAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "PlayAfterAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.PlayEffectByTime
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSkillEffectSpawnParameter>EffectList                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_ActionGeneralAttackBase_C::PlayEffectByTime(TArray<struct FSkillEffectSpawnParameter>& EffectList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "PlayEffectByTime");

	Params::BP_ActionGeneralAttackBase_C_PlayEffectByTime Parms{};

	Parms.EffectList = std::move(EffectList);

	UObject::ProcessEvent(Func, &Parms);

	EffectList = std::move(Parms.EffectList);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.PlayProcessAnimation
// (BlueprintCallable, BlueprintEvent)

void UBP_ActionGeneralAttackBase_C::PlayProcessAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "PlayProcessAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.PlayReadyAnimation
// (BlueprintCallable, BlueprintEvent)

void UBP_ActionGeneralAttackBase_C::PlayReadyAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "PlayReadyAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.Set Disable Movement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::Set_Disable_Movement(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "Set Disable Movement");

	Params::BP_ActionGeneralAttackBase_C_Set_Disable_Movement Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.SetDisableMovement
// (BlueprintCallable, BlueprintEvent)

void UBP_ActionGeneralAttackBase_C::SetDisableMovement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "SetDisableMovement");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.SetSkillEffectClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSkillEffectSpawnParameter       SkillEffectParams                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class UClass*                           NewEffectClass                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::SetSkillEffectClass(struct FSkillEffectSpawnParameter& SkillEffectParams, class UClass* NewEffectClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "SetSkillEffectClass");

	Params::BP_ActionGeneralAttackBase_C_SetSkillEffectClass Parms{};

	Parms.SkillEffectParams = std::move(SkillEffectParams);
	Parms.NewEffectClass = NewEffectClass;

	UObject::ProcessEvent(Func, &Parms);

	SkillEffectParams = std::move(Parms.SkillEffectParams);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.SetSkillEffectTimeOffset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSkillEffectSpawnParameter       EffectSpawnParams                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// double                                  NewTimeOffset                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::SetSkillEffectTimeOffset(struct FSkillEffectSpawnParameter& EffectSpawnParams, double NewTimeOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "SetSkillEffectTimeOffset");

	Params::BP_ActionGeneralAttackBase_C_SetSkillEffectTimeOffset Parms{};

	Parms.EffectSpawnParams = std::move(EffectSpawnParams);
	Parms.NewTimeOffset = NewTimeOffset;

	UObject::ProcessEvent(Func, &Parms);

	EffectSpawnParams = std::move(Parms.EffectSpawnParams);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.SetupMovementControl
// (BlueprintCallable, BlueprintEvent)

void UBP_ActionGeneralAttackBase_C::SetupMovementControl()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "SetupMovementControl");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.SetWalkSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSlow                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::SetWalkSpeed(bool IsSlow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "SetWalkSpeed");

	Params::BP_ActionGeneralAttackBase_C_SetWalkSpeed Parms{};

	Parms.IsSlow = IsSlow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.SetYawRotateRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Rate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::SetYawRotateRate(double Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "SetYawRotateRate");

	Params::BP_ActionGeneralAttackBase_C_SetYawRotateRate Parms{};

	Parms.Rate = Rate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.ShortenAnimationTimeWhenPalRidden
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ActionGeneralAttackBase_C::ShortenAnimationTimeWhenPalRidden()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "ShortenAnimationTimeWhenPalRidden");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.StopAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ActionGeneralAttackBase_C::StopAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "StopAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "TickAction");

	Params::BP_ActionGeneralAttackBase_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.TickMovement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::TickMovement(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "TickMovement");

	Params::BP_ActionGeneralAttackBase_C_TickMovement Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

