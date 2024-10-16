#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_MapObjectPlayerBedModel_classes.hpp"
#include "PalSDK/BP_MapObjectPlayerBedModel_parameters.hpp"


namespace PalSDK
{

// Function BP_MapObjectPlayerBedModel.BP_MapObjectPlayerBedModel_C.BP_OnTriggerInteract_SleepPlayerBed
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Other                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPalInteractiveObjectIndicatorType      IndicatorType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MapObjectPlayerBedModel_C::BP_OnTriggerInteract_SleepPlayerBed(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObjectPlayerBedModel_C", "BP_OnTriggerInteract_SleepPlayerBed");

	Params::BP_MapObjectPlayerBedModel_C_BP_OnTriggerInteract_SleepPlayerBed Parms{};

	Parms.Other = Other;
	Parms.IndicatorType = IndicatorType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapObjectPlayerBedModel.BP_MapObjectPlayerBedModel_C.ExecuteUbergraph_BP_MapObjectPlayerBedModel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MapObjectPlayerBedModel_C::ExecuteUbergraph_BP_MapObjectPlayerBedModel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObjectPlayerBedModel_C", "ExecuteUbergraph_BP_MapObjectPlayerBedModel");

	Params::BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapObjectPlayerBedModel.BP_MapObjectPlayerBedModel_C.IsSleepingInteractor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalCharacter*                    Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_MapObjectPlayerBedModel_C::IsSleepingInteractor(class APalCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObjectPlayerBedModel_C", "IsSleepingInteractor");

	Params::BP_MapObjectPlayerBedModel_C_IsSleepingInteractor Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_MapObjectPlayerBedModel.BP_MapObjectPlayerBedModel_C.OnBeginSleep
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Other                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_MapObjectPlayerBedModel_C::OnBeginSleep(class AActor* Other)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObjectPlayerBedModel_C", "OnBeginSleep");

	Params::BP_MapObjectPlayerBedModel_C_OnBeginSleep Parms{};

	Parms.Other = Other;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapObjectPlayerBedModel.BP_MapObjectPlayerBedModel_C.PutPlayerToSleep
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    CharacterHandle                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_MapObjectPlayerBedModel_C::PutPlayerToSleep(class UPalIndividualCharacterHandle* CharacterHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObjectPlayerBedModel_C", "PutPlayerToSleep");

	Params::BP_MapObjectPlayerBedModel_C_PutPlayerToSleep Parms{};

	Parms.CharacterHandle = CharacterHandle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapObjectPlayerBedModel.BP_MapObjectPlayerBedModel_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          FixPos                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         BedRotate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_MapObjectPlayerBedModel_C::Setup(const struct FVector& FixPos, const struct FRotator& BedRotate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObjectPlayerBedModel_C", "Setup");

	Params::BP_MapObjectPlayerBedModel_C_Setup Parms{};

	Parms.FixPos = std::move(FixPos);
	Parms.BedRotate = std::move(BedRotate);

	UObject::ProcessEvent(Func, &Parms);
}

}

