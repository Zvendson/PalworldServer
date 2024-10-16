#include "PalSDK/Basic.hpp"

#include "PalSDK/ABP_MonsterBase_classes.hpp"
#include "PalSDK/ABP_MonsterBase_parameters.hpp"


namespace PalSDK
{

// Function ABP_MonsterBase.ABP_MonsterBase_C.UpperOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        NativePose                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        ActionPose                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        UpperOverride_0                                        (Parm, OutParm, NoDestructor)

void UABP_MonsterBase_C::UpperOverride(const struct FPoseLink& NativePose, const struct FPoseLink& ActionPose, struct FPoseLink* UpperOverride_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "UpperOverride");

	Params::ABP_MonsterBase_C_UpperOverride Parms{};

	Parms.NativePose = std::move(NativePose);
	Parms.ActionPose = std::move(ActionPose);

	UObject::ProcessEvent(Func, &Parms);

	if (UpperOverride_0 != nullptr)
		*UpperOverride_0 = std::move(Parms.UpperOverride_0);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.UpdateShooterParameter
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_MonsterBase_C::UpdateShooterParameter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "UpdateShooterParameter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.UpdateRidingParameter
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_MonsterBase_C::UpdateRidingParameter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "UpdateRidingParameter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.UpdateDashEffect_AnyThread
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_MonsterBase_C::UpdateDashEffect_AnyThread()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "UpdateDashEffect_AnyThread");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.UpdateBasicParameter
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_MonsterBase_C::UpdateBasicParameter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "UpdateBasicParameter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.Update Look at Parameter
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_MonsterBase_C::Update_Look_at_Parameter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "Update Look at Parameter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.StopFootStepEffect
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_MonsterBase_C::StopFootStepEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "StopFootStepEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.StartFootStepEffect
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_MonsterBase_C::StartFootStepEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "StartFootStepEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.PostUpdateDashEffect
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_MonsterBase_C::PostUpdateDashEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "PostUpdateDashEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.PlaySound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             SoundId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_MonsterBase_C::PlaySound(class FName SoundId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "PlaySound");

	Params::ABP_MonsterBase_C_PlaySound Parms{};

	Parms.SoundId = SoundId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.PlayLandingSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UABP_MonsterBase_C::PlayLandingSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "PlayLandingSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.MonsterPhysics
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        MonsterPhysics_0                                       (Parm, OutParm, NoDestructor)

void UABP_MonsterBase_C::MonsterPhysics(const struct FPoseLink& InPose, struct FPoseLink* MonsterPhysics_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "MonsterPhysics");

	Params::ABP_MonsterBase_C_MonsterPhysics Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (MonsterPhysics_0 != nullptr)
		*MonsterPhysics_0 = std::move(Parms.MonsterPhysics_0);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.MakeSwitchStatePalSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalMonsterCharacter*             Pal                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                           PalSize                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UABP_MonsterBase_C::MakeSwitchStatePalSize(class APalMonsterCharacter* Pal, class FString* PalSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "MakeSwitchStatePalSize");

	Params::ABP_MonsterBase_C_MakeSwitchStatePalSize Parms{};

	Parms.Pal = Pal;

	UObject::ProcessEvent(Func, &Parms);

	if (PalSize != nullptr)
		*PalSize = std::move(Parms.PalSize);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.LookAtOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FVector                          LookAtWorldLocation                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                        LookAtOverride_0                                       (Parm, OutParm, NoDestructor)

void UABP_MonsterBase_C::LookAtOverride(const struct FPoseLink& InPose, const struct FVector& LookAtWorldLocation, struct FPoseLink* LookAtOverride_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "LookAtOverride");

	Params::ABP_MonsterBase_C_LookAtOverride Parms{};

	Parms.InPose = std::move(InPose);
	Parms.LookAtWorldLocation = std::move(LookAtWorldLocation);

	UObject::ProcessEvent(Func, &Parms);

	if (LookAtOverride_0 != nullptr)
		*LookAtOverride_0 = std::move(Parms.LookAtOverride_0);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.IsFloatingPal
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_MonsterBase_C::IsFloatingPal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "IsFloatingPal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.GetSprint
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsSprint                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_MonsterBase_C::GetSprint(bool* IsSprint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "GetSprint");

	Params::ABP_MonsterBase_C_GetSprint Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsSprint != nullptr)
		*IsSprint = Parms.IsSprint;
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.GetFootStepEffectScale
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Scale                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_MonsterBase_C::GetFootStepEffectScale(double* Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "GetFootStepEffectScale");

	Params::ABP_MonsterBase_C_GetFootStepEffectScale Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Scale != nullptr)
		*Scale = Parms.Scale;
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.GetFootStepCharacterSpeed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  CharacterSpeed                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_MonsterBase_C::GetFootStepCharacterSpeed(double* CharacterSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "GetFootStepCharacterSpeed");

	Params::ABP_MonsterBase_C_GetFootStepCharacterSpeed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CharacterSpeed != nullptr)
		*CharacterSpeed = Parms.CharacterSpeed;
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.ExecuteUbergraph_ABP_MonsterBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_MonsterBase_C::ExecuteUbergraph_ABP_MonsterBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "ExecuteUbergraph_ABP_MonsterBase");

	Params::ABP_MonsterBase_C_ExecuteUbergraph_ABP_MonsterBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_F96787034784DF12FF90028A34BB8B39
// (BlueprintEvent)

void UABP_MonsterBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_F96787034784DF12FF90028A34BB8B39()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_F96787034784DF12FF90028A34BB8B39");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_F48506EF4272DE0D9403FC8091658CC2
// (BlueprintEvent)

void UABP_MonsterBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_F48506EF4272DE0D9403FC8091658CC2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_F48506EF4272DE0D9403FC8091658CC2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_F0D464AD4B31CE2D2A7A7EA95C239B70
// (BlueprintEvent)

void UABP_MonsterBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_F0D464AD4B31CE2D2A7A7EA95C239B70()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_F0D464AD4B31CE2D2A7A7EA95C239B70");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_EE0E56854535C9DCA7F729A194F159F1
// (BlueprintEvent)

void UABP_MonsterBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_EE0E56854535C9DCA7F729A194F159F1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_EE0E56854535C9DCA7F729A194F159F1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_CE52F1054119833750D5A6BE24F3D0CF
// (BlueprintEvent)

void UABP_MonsterBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_CE52F1054119833750D5A6BE24F3D0CF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_CE52F1054119833750D5A6BE24F3D0CF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_A47488D6499D3064732F10A46F49E205
// (BlueprintEvent)

void UABP_MonsterBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_A47488D6499D3064732F10A46F49E205()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_A47488D6499D3064732F10A46F49E205");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_94EBA2794624A1AE0E87B0B8F0C035CA
// (BlueprintEvent)

void UABP_MonsterBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_94EBA2794624A1AE0E87B0B8F0C035CA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_94EBA2794624A1AE0E87B0B8F0C035CA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_8E5298E14CFFC43AC4CB97899CB66188
// (BlueprintEvent)

void UABP_MonsterBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_8E5298E14CFFC43AC4CB97899CB66188()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_8E5298E14CFFC43AC4CB97899CB66188");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_6D5D23194B5DCCF74E79899BDAC0B9BA
// (BlueprintEvent)

void UABP_MonsterBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_6D5D23194B5DCCF74E79899BDAC0B9BA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_6D5D23194B5DCCF74E79899BDAC0B9BA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_56B64F4E4C9E82DE226407ACE61B8F62
// (BlueprintEvent)

void UABP_MonsterBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_56B64F4E4C9E82DE226407ACE61B8F62()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_56B64F4E4C9E82DE226407ACE61B8F62");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_12D0A21548EC4F9A1B3A7F89B42E002E
// (BlueprintEvent)

void UABP_MonsterBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_12D0A21548EC4F9A1B3A7F89B42E002E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_12D0A21548EC4F9A1B3A7F89B42E002E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_SequencePlayer_FE682B1C41C3E7BF960F52B352036D22
// (BlueprintEvent)

void UABP_MonsterBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_SequencePlayer_FE682B1C41C3E7BF960F52B352036D22()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_SequencePlayer_FE682B1C41C3E7BF960F52B352036D22");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_SequencePlayer_EA0B5CD54E5A85E50831B98555463D29
// (BlueprintEvent)

void UABP_MonsterBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_SequencePlayer_EA0B5CD54E5A85E50831B98555463D29()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_SequencePlayer_EA0B5CD54E5A85E50831B98555463D29");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_SequencePlayer_128A52BB436E9B3A31FBB7A0A5CC15C1
// (BlueprintEvent)

void UABP_MonsterBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_SequencePlayer_128A52BB436E9B3A31FBB7A0A5CC15C1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_SequencePlayer_128A52BB436E9B3A31FBB7A0A5CC15C1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_ECFECB414886E0974195E991463ACD99
// (BlueprintEvent)

void UABP_MonsterBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_ECFECB414886E0974195E991463ACD99()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_ECFECB414886E0974195E991463ACD99");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_E84338B149C6CA71A04CD2A2AFEE1A26
// (BlueprintEvent)

void UABP_MonsterBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_E84338B149C6CA71A04CD2A2AFEE1A26()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_E84338B149C6CA71A04CD2A2AFEE1A26");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_ADBAEE7E4B8D4BFED7B43DBC07178B76
// (BlueprintEvent)

void UABP_MonsterBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_ADBAEE7E4B8D4BFED7B43DBC07178B76()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_ADBAEE7E4B8D4BFED7B43DBC07178B76");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_925DF20E402882570857548CCD9E3C68
// (BlueprintEvent)

void UABP_MonsterBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_925DF20E402882570857548CCD9E3C68()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_925DF20E402882570857548CCD9E3C68");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_6FEC962E4C28F1AC8D56A49C89C4ADFA
// (BlueprintEvent)

void UABP_MonsterBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_6FEC962E4C28F1AC8D56A49C89C4ADFA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_6FEC962E4C28F1AC8D56A49C89C4ADFA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_672678E246E619FB275DE5AFE6DDA234
// (BlueprintEvent)

void UABP_MonsterBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_672678E246E619FB275DE5AFE6DDA234()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_672678E246E619FB275DE5AFE6DDA234");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_40ADA346423143A5CAA0D4B50B157F15
// (BlueprintEvent)

void UABP_MonsterBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_40ADA346423143A5CAA0D4B50B157F15()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_40ADA346423143A5CAA0D4B50B157F15");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendListByBool_FB442B974C195CB35B6129B622134627
// (BlueprintEvent)

void UABP_MonsterBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendListByBool_FB442B974C195CB35B6129B622134627()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendListByBool_FB442B974C195CB35B6129B622134627");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendListByBool_C95153CD4007A62F8D752891550DF5D9
// (BlueprintEvent)

void UABP_MonsterBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendListByBool_C95153CD4007A62F8D752891550DF5D9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendListByBool_C95153CD4007A62F8D752891550DF5D9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendListByBool_B62C4ED042628BD16274AFA4FDD16719
// (BlueprintEvent)

void UABP_MonsterBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendListByBool_B62C4ED042628BD16274AFA4FDD16719()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendListByBool_B62C4ED042628BD16274AFA4FDD16719");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.CanSpawnFootStepEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    CanSpawn                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_MonsterBase_C::CanSpawnFootStepEffect(bool* CanSpawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "CanSpawnFootStepEffect");

	Params::ABP_MonsterBase_C_CanSpawnFootStepEffect Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CanSpawn != nullptr)
		*CanSpawn = Parms.CanSpawn;
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_MonsterBase_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "BlueprintUpdateAnimation");

	Params::ABP_MonsterBase_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.BlueprintThreadSafeUpdateAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_MonsterBase_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "BlueprintThreadSafeUpdateAnimation");

	Params::ABP_MonsterBase_C_BlueprintThreadSafeUpdateAnimation Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.BlueprintPostEvaluateAnimation
// (Event, Public, BlueprintEvent)

void UABP_MonsterBase_C::BlueprintPostEvaluateAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "BlueprintPostEvaluateAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)

void UABP_MonsterBase_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "BlueprintBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.AnimNotify_Landing
// (BlueprintCallable, BlueprintEvent)

void UABP_MonsterBase_C::AnimNotify_Landing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "AnimNotify_Landing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_MonsterBase_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "AnimGraph");

	Params::ABP_MonsterBase_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ABP_MonsterBase.ABP_MonsterBase_C.AimingOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        DefaultPose                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FRotator                         AimRotator_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPoseLink                        AimingOverride_0                                       (Parm, OutParm, NoDestructor)

void UABP_MonsterBase_C::AimingOverride(const struct FPoseLink& DefaultPose, const struct FRotator& AimRotator_0, struct FPoseLink* AimingOverride_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MonsterBase_C", "AimingOverride");

	Params::ABP_MonsterBase_C_AimingOverride Parms{};

	Parms.DefaultPose = std::move(DefaultPose);
	Parms.AimRotator_0 = std::move(AimRotator_0);

	UObject::ProcessEvent(Func, &Parms);

	if (AimingOverride_0 != nullptr)
		*AimingOverride_0 = std::move(Parms.AimingOverride_0);
}

}

