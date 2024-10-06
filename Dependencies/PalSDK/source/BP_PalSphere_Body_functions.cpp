#include "PalServer/Basic.hpp"

#include "PalServer/BP_PalSphere_Body_classes.hpp"
#include "PalServer/BP_PalSphere_Body_parameters.hpp"


namespace PalServer
{

// Function BP_PalSphere_Body.BP_PalSphere_Body_C.BallShakeTick
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_Body_C::BallShakeTick(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_C", "BallShakeTick");

	Params::BP_PalSphere_Body_C_BallShakeTick Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_Body.BP_PalSphere_Body_C.BounceBallEvent
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_PalSphere_Body_C::BounceBallEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_C", "BounceBallEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSphere_Body.BP_PalSphere_Body_C.CaptureSuccessEvent
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_PalSphere_Body_C::CaptureSuccessEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_C", "CaptureSuccessEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSphere_Body.BP_PalSphere_Body_C.CheckBouncedReason
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_PalCaptureSphereBouncedReason         ReasonType                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_Body_C::CheckBouncedReason(E_PalCaptureSphereBouncedReason* ReasonType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_C", "CheckBouncedReason");

	Params::BP_PalSphere_Body_C_CheckBouncedReason Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ReasonType != nullptr)
		*ReasonType = Parms.ReasonType;
}


// Function BP_PalSphere_Body.BP_PalSphere_Body_C.DelayPassingPhase
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Phase                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  DelayTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_Body_C::DelayPassingPhase(int32 Phase, double DelayTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_C", "DelayPassingPhase");

	Params::BP_PalSphere_Body_C_DelayPassingPhase Parms{};

	Parms.Phase = Phase;
	Parms.DelayTime = DelayTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_Body.BP_PalSphere_Body_C.DelayPassingPhase_WithEffect
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Phase                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  DelayTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_Body_C::DelayPassingPhase_WithEffect(int32 Phase, double DelayTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_C", "DelayPassingPhase_WithEffect");

	Params::BP_PalSphere_Body_C_DelayPassingPhase_WithEffect Parms{};

	Parms.Phase = Phase;
	Parms.DelayTime = DelayTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_Body.BP_PalSphere_Body_C.ExecuteUbergraph_BP_PalSphere_Body
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_Body_C::ExecuteUbergraph_BP_PalSphere_Body(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_C", "ExecuteUbergraph_BP_PalSphere_Body");

	Params::BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_Body.BP_PalSphere_Body_C.FailedCapture_OutOfBall
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_PalSphere_Body_C::FailedCapture_OutOfBall()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_C", "FailedCapture_OutOfBall");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSphere_Body.BP_PalSphere_Body_C.FindOwnerPlayer
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalPlayerCharacter*              Player                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_Body_C::FindOwnerPlayer(class APalPlayerCharacter** Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_C", "FindOwnerPlayer");

	Params::BP_PalSphere_Body_C_FindOwnerPlayer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Player != nullptr)
		*Player = Parms.Player;
}


// Function BP_PalSphere_Body.BP_PalSphere_Body_C.FlyToSkyEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_Body_C::FlyToSkyEvent(double Delay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_C", "FlyToSkyEvent");

	Params::BP_PalSphere_Body_C_FlyToSkyEvent Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_Body.BP_PalSphere_Body_C.intoBall
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          GoolLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_Body_C::IntoBall(const struct FVector& GoolLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_C", "intoBall");

	Params::BP_PalSphere_Body_C_IntoBall Parms{};

	Parms.GoolLocation = std::move(GoolLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_Body.BP_PalSphere_Body_C.IsSkipFirstJudge
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalCharacterParameterComponent*  Parameter                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<double>                          RateList                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    IsSkip                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_Body_C::IsSkipFirstJudge(class UPalCharacterParameterComponent* Parameter, TArray<double>& RateList, bool* IsSkip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_C", "IsSkipFirstJudge");

	Params::BP_PalSphere_Body_C_IsSkipFirstJudge Parms{};

	Parms.Parameter = Parameter;
	Parms.RateList = std::move(RateList);

	UObject::ProcessEvent(Func, &Parms);

	RateList = std::move(Parms.RateList);

	if (IsSkip != nullptr)
		*IsSkip = Parms.IsSkip;
}


// Function BP_PalSphere_Body.BP_PalSphere_Body_C.JudgeProcess
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   JudgeIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_Body_C::JudgeProcess(int32 JudgeIndex, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_C", "JudgeProcess");

	Params::BP_PalSphere_Body_C_JudgeProcess Parms{};

	Parms.JudgeIndex = JudgeIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_PalSphere_Body.BP_PalSphere_Body_C.Judging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_Body_C::Judging(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_C", "Judging");

	Params::BP_PalSphere_Body_C_Judging Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_Body.BP_PalSphere_Body_C.OnCompleteCaptureEmissiveEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalVisualEffectBase*             VisualEffect                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_Body_C::OnCompleteCaptureEmissiveEffect(class UPalVisualEffectBase* VisualEffect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_C", "OnCompleteCaptureEmissiveEffect");

	Params::BP_PalSphere_Body_C_OnCompleteCaptureEmissiveEffect Parms{};

	Parms.VisualEffect = VisualEffect;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_Body.BP_PalSphere_Body_C.OnPassingCapturePhase_イベント_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PhaseCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*    TargetHandle_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_Body_C::OnPassingCapturePhase______________0(int32 PhaseCount, class UPalIndividualCharacterHandle* TargetHandle_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_C", "OnPassingCapturePhase_イベント_0");

	Params::BP_PalSphere_Body_C_OnPassingCapturePhase______________0 Parms{};

	Parms.PhaseCount = PhaseCount;
	Parms.TargetHandle_0 = TargetHandle_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_Body.BP_PalSphere_Body_C.OnShakeBodyToALL
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_PalSphere_Body_C::OnShakeBodyToALL()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_C", "OnShakeBodyToALL");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSphere_Body.BP_PalSphere_Body_C.PlayBallCenterEffect
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PalSphere_Body_C::PlayBallCenterEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_C", "PlayBallCenterEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSphere_Body.BP_PalSphere_Body_C.PlayCaptureAbsorbToBallEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PalSphere_Body_C::PlayCaptureAbsorbToBallEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_C", "PlayCaptureAbsorbToBallEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSphere_Body.BP_PalSphere_Body_C.PlayCaptureEffectEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_PalSphere_Body_C::PlayCaptureEffectEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_C", "PlayCaptureEffectEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSphere_Body.BP_PalSphere_Body_C.PlayOpenSphereEffect
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PalSphere_Body_C::PlayOpenSphereEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_C", "PlayOpenSphereEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSphere_Body.BP_PalSphere_Body_C.PlaySoundShake
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PalSphere_Body_C::PlaySoundShake()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_C", "PlaySoundShake");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSphere_Body.BP_PalSphere_Body_C.PrevIndexFullPercentage
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsFull                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_Body_C::PrevIndexFullPercentage(int32 Index_0, bool* IsFull)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_C", "PrevIndexFullPercentage");

	Params::BP_PalSphere_Body_C_PrevIndexFullPercentage Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);

	if (IsFull != nullptr)
		*IsFull = Parms.IsFull;
}


// Function BP_PalSphere_Body.BP_PalSphere_Body_C.SetCaptureState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalCaptureSphereState                  NewState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_Body_C::SetCaptureState(EPalCaptureSphereState NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_C", "SetCaptureState");

	Params::BP_PalSphere_Body_C_SetCaptureState Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_Body.BP_PalSphere_Body_C.SetParameterCaptureAbsorbToBallEffectBySize
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*                Effect                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_Body_C::SetParameterCaptureAbsorbToBallEffectBySize(class UNiagaraComponent* Effect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_C", "SetParameterCaptureAbsorbToBallEffectBySize");

	Params::BP_PalSphere_Body_C_SetParameterCaptureAbsorbToBallEffectBySize Parms{};

	Parms.Effect = Effect;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_Body.BP_PalSphere_Body_C.StopTargetPal
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PalSphere_Body_C::StopTargetPal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_C", "StopTargetPal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSphere_Body.BP_PalSphere_Body_C.SynchronizeJudgeParameter
// (Net, NetReliable, NetMulticast, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                            JudgeFlagArray                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<double>                          JudgeRateArray                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PalSphere_Body_C::SynchronizeJudgeParameter(const TArray<bool>& JudgeFlagArray, const TArray<double>& JudgeRateArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_C", "SynchronizeJudgeParameter");

	Params::BP_PalSphere_Body_C_SynchronizeJudgeParameter Parms{};

	Parms.JudgeFlagArray = std::move(JudgeFlagArray);
	Parms.JudgeRateArray = std::move(JudgeRateArray);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_Body.BP_PalSphere_Body_C.TickMovement_HitedBall
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_Body_C::TickMovement_HitedBall(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_C", "TickMovement_HitedBall");

	Params::BP_PalSphere_Body_C_TickMovement_HitedBall Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_Body.BP_PalSphere_Body_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PalSphere_Body_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSphere_Body.BP_PalSphere_Body_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_Body_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_C", "ReceiveTick");

	Params::BP_PalSphere_Body_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_Body.BP_PalSphere_Body_C.SetupInServer
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    TargetCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_Body_C::SetupInServer(class APalCharacter* TargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_C", "SetupInServer");

	Params::BP_PalSphere_Body_C_SetupInServer Parms{};

	Parms.TargetCharacter = TargetCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_Body.BP_PalSphere_Body_C.TickMovement_MoveToSky
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_Body_C::TickMovement_MoveToSky(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_C", "TickMovement_MoveToSky");

	Params::BP_PalSphere_Body_C_TickMovement_MoveToSky Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

