#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_AnimNotify_PlaySound_classes.hpp"
#include "PalSDK/BP_AnimNotify_PlaySound_parameters.hpp"


namespace PalSDK
{

// Function BP_AnimNotify_PlaySound.BP_AnimNotify_PlaySound_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*           MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference        EventReference                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_AnimNotify_PlaySound_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AnimNotify_PlaySound_C", "Received_Notify");

	Params::BP_AnimNotify_PlaySound_C_Received_Notify Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = std::move(EventReference);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_AnimNotify_PlaySound.BP_AnimNotify_PlaySound_C.PlaySoundEditor
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UMeshComponent*                   MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_AnimNotify_PlaySound_C::PlaySoundEditor(class UMeshComponent* MeshComp) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AnimNotify_PlaySound_C", "PlaySoundEditor");

	Params::BP_AnimNotify_PlaySound_C_PlaySoundEditor Parms{};

	Parms.MeshComp = MeshComp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AnimNotify_PlaySound.BP_AnimNotify_PlaySound_C.PlaySound
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UMeshComponent*                   MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_AnimNotify_PlaySound_C::PlaySound(class UMeshComponent* MeshComp) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AnimNotify_PlaySound_C", "PlaySound");

	Params::BP_AnimNotify_PlaySound_C_PlaySound Parms{};

	Parms.MeshComp = MeshComp;

	UObject::ProcessEvent(Func, &Parms);
}

}

