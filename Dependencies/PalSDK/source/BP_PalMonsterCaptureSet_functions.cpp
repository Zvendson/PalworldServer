#include "PalServer/Basic.hpp"

#include "PalServer/BP_PalMonsterCaptureSet_classes.hpp"
#include "PalServer/BP_PalMonsterCaptureSet_parameters.hpp"


namespace PalServer
{

// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.AddRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                         Rotator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PalMonsterCaptureSet_C::AddRotation(const struct FRotator& Rotator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalMonsterCaptureSet_C", "AddRotation");

	Params::BP_PalMonsterCaptureSet_C_AddRotation Parms{};

	Parms.Rotator = std::move(Rotator);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.CancelDelayHandle
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PalMonsterCaptureSet_C::CancelDelayHandle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalMonsterCaptureSet_C", "CancelDelayHandle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.DelayCompleteSetup
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_PalMonsterCaptureSet_C::DelayCompleteSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalMonsterCaptureSet_C", "DelayCompleteSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.ExecuteUbergraph_BP_PalMonsterCaptureSet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalMonsterCaptureSet_C::ExecuteUbergraph_BP_PalMonsterCaptureSet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalMonsterCaptureSet_C", "ExecuteUbergraph_BP_PalMonsterCaptureSet");

	Params::BP_PalMonsterCaptureSet_C_ExecuteUbergraph_BP_PalMonsterCaptureSet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.GetCaptureCharacterID
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             CharacterID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             BPClassName                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalMonsterCaptureSet_C::GetCaptureCharacterID(class FName CharacterID, class FName* BPClassName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalMonsterCaptureSet_C", "GetCaptureCharacterID");

	Params::BP_PalMonsterCaptureSet_C_GetCaptureCharacterID Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

	if (BPClassName != nullptr)
		*BPClassName = Parms.BPClassName;
}


// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.GetNowDisplayingPalID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             PalID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalMonsterCaptureSet_C::GetNowDisplayingPalID(class FName* PalID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalMonsterCaptureSet_C", "GetNowDisplayingPalID");

	Params::BP_PalMonsterCaptureSet_C_GetNowDisplayingPalID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PalID != nullptr)
		*PalID = Parms.PalID;
}


// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.On Loaded Pal Class
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalMonsterCaptureSet_C::On_Loaded_Pal_Class(class UClass* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalMonsterCaptureSet_C", "On Loaded Pal Class");

	Params::BP_PalMonsterCaptureSet_C_On_Loaded_Pal_Class Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.OnCompletedSetup__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PalMonsterCaptureSet_C::OnCompletedSetup__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalMonsterCaptureSet_C", "OnCompletedSetup__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.OnLoaded_47E3700548CBE24684940690F7B5FBD1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_PalMonsterCaptureSet_C::OnLoaded_47E3700548CBE24684940690F7B5FBD1(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalMonsterCaptureSet_C", "OnLoaded_47E3700548CBE24684940690F7B5FBD1");

	Params::BP_PalMonsterCaptureSet_C_OnLoaded_47E3700548CBE24684940690F7B5FBD1 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.OnRequestLoadPalClass
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UClass>             NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PalMonsterCaptureSet_C::OnRequestLoadPalClass(TSoftClassPtr<class UClass> NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalMonsterCaptureSet_C", "OnRequestLoadPalClass");

	Params::BP_PalMonsterCaptureSet_C_OnRequestLoadPalClass Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.OverrideMaterial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           TargetSkeletalMesh                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_PalMonsterCaptureSet_C::OverrideMaterial(class USkeletalMeshComponent* TargetSkeletalMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalMonsterCaptureSet_C", "OverrideMaterial");

	Params::BP_PalMonsterCaptureSet_C_OverrideMaterial Parms{};

	Parms.TargetSkeletalMesh = TargetSkeletalMesh;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PalMonsterCaptureSet_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalMonsterCaptureSet_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalMonsterCaptureSet_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalMonsterCaptureSet_C", "ReceiveTick");

	Params::BP_PalMonsterCaptureSet_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.Request Capture from PalSkin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             PalRowName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UClass>             SkinClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PalMonsterCaptureSet_C::Request_Capture_from_PalSkin(class FName PalRowName, TSoftClassPtr<class UClass> SkinClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalMonsterCaptureSet_C", "Request Capture from PalSkin");

	Params::BP_PalMonsterCaptureSet_C_Request_Capture_from_PalSkin Parms{};

	Parms.PalRowName = PalRowName;
	Parms.SkinClass = SkinClass;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.RequestCaptureFromPalID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             PalRowName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalMonsterCaptureSet_C::RequestCaptureFromPalID(class FName PalRowName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalMonsterCaptureSet_C", "RequestCaptureFromPalID");

	Params::BP_PalMonsterCaptureSet_C_RequestCaptureFromPalID Parms{};

	Parms.PalRowName = PalRowName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.Reset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PalMonsterCaptureSet_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalMonsterCaptureSet_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.ResetRotator
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PalMonsterCaptureSet_C::ResetRotator()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalMonsterCaptureSet_C", "ResetRotator");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.SetupDelayHandle
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PalMonsterCaptureSet_C::SetupDelayHandle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalMonsterCaptureSet_C", "SetupDelayHandle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C.SetupSkeletalMesh
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*                    Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalMonsterCaptureSet_C::SetupSkeletalMesh(class USkeletalMesh* Mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalMonsterCaptureSet_C", "SetupSkeletalMesh");

	Params::BP_PalMonsterCaptureSet_C_SetupSkeletalMesh Parms{};

	Parms.Mesh = Mesh;

	UObject::ProcessEvent(Func, &Parms);
}

}

