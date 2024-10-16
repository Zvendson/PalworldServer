#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_AnimNotify_PlayWingSound_classes.hpp"
#include "PalSDK/BP_AnimNotify_PlayWingSound_parameters.hpp"


namespace PalSDK
{

// Function BP_AnimNotify_PlayWingSound.BP_AnimNotify_PlayWingSound_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*           MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference        EventReference                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_AnimNotify_PlayWingSound_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AnimNotify_PlayWingSound_C", "Received_Notify");

	Params::BP_AnimNotify_PlayWingSound_C_Received_Notify Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = std::move(EventReference);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_AnimNotify_PlayWingSound.BP_AnimNotify_PlayWingSound_C.MakeSwitchStatePalSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class APalMonsterCharacter*             Pal                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                           PalSize                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBP_AnimNotify_PlayWingSound_C::MakeSwitchStatePalSize(class APalMonsterCharacter* Pal, class FString* PalSize) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AnimNotify_PlayWingSound_C", "MakeSwitchStatePalSize");

	Params::BP_AnimNotify_PlayWingSound_C_MakeSwitchStatePalSize Parms{};

	Parms.Pal = Pal;

	UObject::ProcessEvent(Func, &Parms);

	if (PalSize != nullptr)
		*PalSize = std::move(Parms.PalSize);
}

}

