#include "PalServer/Basic.hpp"

#include "PalServer/BP_ActionUniqueAttackBase_classes.hpp"
#include "PalServer/BP_ActionUniqueAttackBase_parameters.hpp"


namespace PalServer
{

// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.AttachToOwner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             SocketName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionUniqueAttackBase_C::AttachToOwner(class APalSkillEffectBase* Effect, const struct FVector& Offset, class FName SocketName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUniqueAttackBase_C", "AttachToOwner");

	Params::BP_ActionUniqueAttackBase_C_AttachToOwner Parms{};

	Parms.Effect = Effect;
	Parms.Offset = std::move(Offset);
	Parms.SocketName = SocketName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.CalculateTeleportDestination
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  SearchDegree                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  TeleportCheckDistance                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Destination                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionUniqueAttackBase_C::CalculateTeleportDestination(bool IsCharacter, double SearchDegree, double TeleportCheckDistance, struct FVector* Destination)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUniqueAttackBase_C", "CalculateTeleportDestination");

	Params::BP_ActionUniqueAttackBase_C_CalculateTeleportDestination Parms{};

	Parms.IsCharacter = IsCharacter;
	Parms.SearchDegree = SearchDegree;
	Parms.TeleportCheckDistance = TeleportCheckDistance;

	UObject::ProcessEvent(Func, &Parms);

	if (Destination != nullptr)
		*Destination = std::move(Parms.Destination);
}


// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.CreateSkillActionModule
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           UniqueSkillModuleClass                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_UniqueSkillModule_Tackle_C*   Module                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionUniqueAttackBase_C::CreateSkillActionModule(class UClass* UniqueSkillModuleClass, class UBP_UniqueSkillModule_Tackle_C** Module)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUniqueAttackBase_C", "CreateSkillActionModule");

	Params::BP_ActionUniqueAttackBase_C_CreateSkillActionModule Parms{};

	Parms.UniqueSkillModuleClass = UniqueSkillModuleClass;

	UObject::ProcessEvent(Func, &Parms);

	if (Module != nullptr)
		*Module = Parms.Module;
}


// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.ExecuteUbergraph_BP_ActionUniqueAttackBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionUniqueAttackBase_C::ExecuteUbergraph_BP_ActionUniqueAttackBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUniqueAttackBase_C", "ExecuteUbergraph_BP_ActionUniqueAttackBase");

	Params::BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.FindActionTarget
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ActionUniqueAttackBase_C::FindActionTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUniqueAttackBase_C", "FindActionTarget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.FindEffectByClass
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                           EffectClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalSkillEffectBase*              Effect                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionUniqueAttackBase_C::FindEffectByClass(class UClass* EffectClass, class APalSkillEffectBase** Effect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUniqueAttackBase_C", "FindEffectByClass");

	Params::BP_ActionUniqueAttackBase_C_FindEffectByClass Parms{};

	Parms.EffectClass = EffectClass;

	UObject::ProcessEvent(Func, &Parms);

	if (Effect != nullptr)
		*Effect = Parms.Effect;
}


// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.GetAttackTargetLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsFrontLocation                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  FrontDistance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionUniqueAttackBase_C::GetAttackTargetLocation(bool IsFrontLocation, double FrontDistance, struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUniqueAttackBase_C", "GetAttackTargetLocation");

	Params::BP_ActionUniqueAttackBase_C_GetAttackTargetLocation Parms{};

	Parms.IsFrontLocation = IsFrontLocation;
	Parms.FrontDistance = FrontDistance;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}


// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.GetCapsuleHalfHeight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  HalfHeight                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionUniqueAttackBase_C::GetCapsuleHalfHeight(double* HalfHeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUniqueAttackBase_C", "GetCapsuleHalfHeight");

	Params::BP_ActionUniqueAttackBase_C_GetCapsuleHalfHeight Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HalfHeight != nullptr)
		*HalfHeight = Parms.HalfHeight;
}


// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.GetCapsuleHalfRadius
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  HalfRadius                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionUniqueAttackBase_C::GetCapsuleHalfRadius(double* HalfRadius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUniqueAttackBase_C", "GetCapsuleHalfRadius");

	Params::BP_ActionUniqueAttackBase_C_GetCapsuleHalfRadius Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HalfRadius != nullptr)
		*HalfRadius = Parms.HalfRadius;
}


// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.GetCheckedTeleportDestination
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   WarpCheckCount                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  WarpFaceOriDegree                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  WarpDestinationDistance                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  WarpDestinationDistance_MapOb                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    AcceptSideBlockPos                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IgnoreFloor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsRiding                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          TargetLocation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    HasFloor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionUniqueAttackBase_C::GetCheckedTeleportDestination(int32 WarpCheckCount, double WarpFaceOriDegree, double WarpDestinationDistance, double WarpDestinationDistance_MapOb, bool AcceptSideBlockPos, bool IgnoreFloor, bool IsRiding, struct FVector* TargetLocation, bool* HasFloor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUniqueAttackBase_C", "GetCheckedTeleportDestination");

	Params::BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination Parms{};

	Parms.WarpCheckCount = WarpCheckCount;
	Parms.WarpFaceOriDegree = WarpFaceOriDegree;
	Parms.WarpDestinationDistance = WarpDestinationDistance;
	Parms.WarpDestinationDistance_MapOb = WarpDestinationDistance_MapOb;
	Parms.AcceptSideBlockPos = AcceptSideBlockPos;
	Parms.IgnoreFloor = IgnoreFloor;
	Parms.IsRiding = IsRiding;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetLocation != nullptr)
		*TargetLocation = std::move(Parms.TargetLocation);

	if (HasFloor != nullptr)
		*HasFloor = Parms.HasFloor;
}


// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.GetFootLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionUniqueAttackBase_C::GetFootLocation(struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUniqueAttackBase_C", "GetFootLocation");

	Params::BP_ActionUniqueAttackBase_C_GetFootLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}


// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.GetHeightToFloor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Height                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionUniqueAttackBase_C::GetHeightToFloor(double* Height)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUniqueAttackBase_C", "GetHeightToFloor");

	Params::BP_ActionUniqueAttackBase_C_GetHeightToFloor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Height != nullptr)
		*Height = Parms.Height;
}


// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.GetPalAnimInstance
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalAnimInstance*                 AnimInstance                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionUniqueAttackBase_C::GetPalAnimInstance(class UPalAnimInstance** AnimInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUniqueAttackBase_C", "GetPalAnimInstance");

	Params::BP_ActionUniqueAttackBase_C_GetPalAnimInstance Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimInstance != nullptr)
		*AnimInstance = Parms.AnimInstance;
}


// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.GetRotation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NoInterp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionUniqueAttackBase_C::GetRotation(double DeltaTime, bool NoInterp, struct FRotator* Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUniqueAttackBase_C", "GetRotation");

	Params::BP_ActionUniqueAttackBase_C_GetRotation Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.NoInterp = NoInterp;

	UObject::ProcessEvent(Func, &Parms);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);
}


// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.GetUniqueActionTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           TargetActor                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionUniqueAttackBase_C::GetUniqueActionTarget(class AActor** TargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUniqueAttackBase_C", "GetUniqueActionTarget");

	Params::BP_ActionUniqueAttackBase_C_GetUniqueActionTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TargetActor != nullptr)
		*TargetActor = Parms.TargetActor;
}


// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.IsMontagePlaying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimMontage*                     Montage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsPlaying                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionUniqueAttackBase_C::IsMontagePlaying(class UAnimMontage* Montage, bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUniqueAttackBase_C", "IsMontagePlaying");

	Params::BP_ActionUniqueAttackBase_C_IsMontagePlaying Parms{};

	Parms.Montage = Montage;

	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;
}


// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionUniqueAttackBase_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUniqueAttackBase_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_ActionUniqueAttackBase_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUniqueAttackBase_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.OnSpawnEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionUniqueAttackBase_C::OnSpawnEffect(class APalSkillEffectBase* Effect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUniqueAttackBase_C", "OnSpawnEffect");

	Params::BP_ActionUniqueAttackBase_C_OnSpawnEffect Parms{};

	Parms.Effect = Effect;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.SetMoveState_Common
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDisable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionUniqueAttackBase_C::SetMoveState_Common(bool IsDisable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUniqueAttackBase_C", "SetMoveState_Common");

	Params::BP_ActionUniqueAttackBase_C_SetMoveState_Common Parms{};

	Parms.IsDisable = IsDisable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.SetMoveState_Gravity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  GravityRate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionUniqueAttackBase_C::SetMoveState_Gravity(double GravityRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUniqueAttackBase_C", "SetMoveState_Gravity");

	Params::BP_ActionUniqueAttackBase_C_SetMoveState_Gravity Parms{};

	Parms.GravityRate = GravityRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.SetMoveState_Rotate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDisable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionUniqueAttackBase_C::SetMoveState_Rotate(bool IsDisable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUniqueAttackBase_C", "SetMoveState_Rotate");

	Params::BP_ActionUniqueAttackBase_C_SetMoveState_Rotate Parms{};

	Parms.IsDisable = IsDisable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.SpawnEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EffectKey                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionUniqueAttackBase_C::SpawnEffect(class FName EffectKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUniqueAttackBase_C", "SpawnEffect");

	Params::BP_ActionUniqueAttackBase_C_SpawnEffect Parms{};

	Parms.EffectKey = EffectKey;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionUniqueAttackBase_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionUniqueAttackBase_C", "TickAction");

	Params::BP_ActionUniqueAttackBase_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

