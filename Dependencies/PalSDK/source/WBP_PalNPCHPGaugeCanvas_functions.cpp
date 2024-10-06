#include "PalServer/Basic.hpp"

#include "PalServer/WBP_PalNPCHPGaugeCanvas_classes.hpp"
#include "PalServer/WBP_PalNPCHPGaugeCanvas_parameters.hpp"


namespace PalServer
{

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.Add Boss Gauge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    TargetCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGaugeCanvas_C::Add_Boss_Gauge(class APalCharacter* TargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "Add Boss Gauge");

	Params::WBP_PalNPCHPGaugeCanvas_C_Add_Boss_Gauge Parms{};

	Parms.TargetCharacter = TargetCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.Add New Gauge UI
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    TargetCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGaugeCanvas_C::Add_New_Gauge_UI(class APalCharacter* TargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "Add New Gauge UI");

	Params::WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI Parms{};

	Parms.TargetCharacter = TargetCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.Add Player Gauge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    TargetCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGaugeCanvas_C::Add_Player_Gauge(class APalCharacter* TargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "Add Player Gauge");

	Params::WBP_PalNPCHPGaugeCanvas_C_Add_Player_Gauge Parms{};

	Parms.TargetCharacter = TargetCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.AddNormalPalGauge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    TargetCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGaugeCanvas_C::AddNormalPalGauge(class APalCharacter* TargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "AddNormalPalGauge");

	Params::WBP_PalNPCHPGaugeCanvas_C_AddNormalPalGauge Parms{};

	Parms.TargetCharacter = TargetCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.CloseDelayGauges
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGaugeCanvas_C::CloseDelayGauges(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "CloseDelayGauges");

	Params::WBP_PalNPCHPGaugeCanvas_C_CloseDelayGauges Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.CREATEDELEGATE_PROXYFUNCTION_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageInfo                   DamageInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AActor*                           Defender                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGaugeCanvas_C::CREATEDELEGATE_PROXYFUNCTION_0(const struct FPalDamageInfo& DamageInfo, class AActor* Defender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "CREATEDELEGATE_PROXYFUNCTION_0");

	Params::WBP_PalNPCHPGaugeCanvas_C_CREATEDELEGATE_PROXYFUNCTION_0 Parms{};

	Parms.DamageInfo = std::move(DamageInfo);
	Parms.Defender = Defender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalNPCHPGaugeCanvas_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.ExecuteUbergraph_WBP_PalNPCHPGaugeCanvas
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGaugeCanvas_C::ExecuteUbergraph_WBP_PalNPCHPGaugeCanvas(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "ExecuteUbergraph_WBP_PalNPCHPGaugeCanvas");

	Params::WBP_PalNPCHPGaugeCanvas_C_ExecuteUbergraph_WBP_PalNPCHPGaugeCanvas Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.GetCameraLocationAndForwardVector
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ForwardVector                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGaugeCanvas_C::GetCameraLocationAndForwardVector(struct FVector* Location, struct FVector* ForwardVector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "GetCameraLocationAndForwardVector");

	Params::WBP_PalNPCHPGaugeCanvas_C_GetCameraLocationAndForwardVector Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (ForwardVector != nullptr)
		*ForwardVector = std::move(Parms.ForwardVector);
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.GetDistanceByPlayer
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UWBP_PalNPCHPGaugeCanvas_C::GetDistanceByPlayer(class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "GetDistanceByPlayer");

	Params::WBP_PalNPCHPGaugeCanvas_C_GetDistanceByPlayer Parms{};

	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.Is Sight Display
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalCharacter*                    Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGaugeCanvas_C::Is_Sight_Display(class APalCharacter* Actor, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "Is Sight Display");

	Params::WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.IsAiming
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsAiming_0                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGaugeCanvas_C::IsAiming(bool* IsAiming_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "IsAiming");

	Params::WBP_PalNPCHPGaugeCanvas_C_IsAiming Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsAiming_0 != nullptr)
		*IsAiming_0 = Parms.IsAiming_0;
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.isConflict
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsConflict_0                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGaugeCanvas_C::IsConflict(bool* IsConflict_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "isConflict");

	Params::WBP_PalNPCHPGaugeCanvas_C_IsConflict Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsConflict_0 != nullptr)
		*IsConflict_0 = Parms.IsConflict_0;
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.IsDisplayDistance
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Distance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsSameGuild                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsDisplay                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGaugeCanvas_C::IsDisplayDistance(double Distance, bool IsSameGuild, bool* IsDisplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "IsDisplayDistance");

	Params::WBP_PalNPCHPGaugeCanvas_C_IsDisplayDistance Parms{};

	Parms.Distance = Distance;
	Parms.IsSameGuild = IsSameGuild;

	UObject::ProcessEvent(Func, &Parms);

	if (IsDisplay != nullptr)
		*IsDisplay = Parms.IsDisplay;
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.IsDisplayGaugeByPlayerRotation
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalCharacter*                    TargetCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsDisplay                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGaugeCanvas_C::IsDisplayGaugeByPlayerRotation(class APalCharacter* TargetCharacter, bool* IsDisplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "IsDisplayGaugeByPlayerRotation");

	Params::WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation Parms{};

	Parms.TargetCharacter = TargetCharacter;

	UObject::ProcessEvent(Func, &Parms);

	if (IsDisplay != nullptr)
		*IsDisplay = Parms.IsDisplay;
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.IsMimicry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalCharacter*                    Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsMimicryMode                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGaugeCanvas_C::IsMimicry(class APalCharacter* Character, bool* IsMimicryMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "IsMimicry");

	Params::WBP_PalNPCHPGaugeCanvas_C_IsMimicry Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

	if (IsMimicryMode != nullptr)
		*IsMimicryMode = Parms.IsMimicryMode;
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.On Begin Overlap
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UWBP_PalNPCHPGaugeCanvas_C::On_Begin_Overlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "On Begin Overlap");

	Params::WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.OnBossDead
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    TargetCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGaugeCanvas_C::OnBossDead(class APalCharacter* TargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "OnBossDead");

	Params::WBP_PalNPCHPGaugeCanvas_C_OnBossDead Parms{};

	Parms.TargetCharacter = TargetCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.OnChangedEquipment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                     ItemSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPalPlayerEquipItemSlotType             SlotType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGaugeCanvas_C::OnChangedEquipment(class UPalItemSlot* ItemSlot, EPalPlayerEquipItemSlotType SlotType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "OnChangedEquipment");

	Params::WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment Parms{};

	Parms.ItemSlot = ItemSlot;
	Parms.SlotType = SlotType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.OnDamagePopup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageInfo                   DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGaugeCanvas_C::OnDamagePopup(const struct FPalDamageInfo& DamageInfo, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "OnDamagePopup");

	Params::WBP_PalNPCHPGaugeCanvas_C_OnDamagePopup Parms{};

	Parms.DamageInfo = std::move(DamageInfo);
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.OnEndOverlap
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGaugeCanvas_C::OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "OnEndOverlap");

	Params::WBP_PalNPCHPGaugeCanvas_C_OnEndOverlap Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.OnEndPlayBossPal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGaugeCanvas_C::OnEndPlayBossPal(class AActor* Actor, EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "OnEndPlayBossPal");

	Params::WBP_PalNPCHPGaugeCanvas_C_OnEndPlayBossPal Parms{};

	Parms.Actor = Actor;
	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.OnEndPlayer
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGaugeCanvas_C::OnEndPlayer(class AActor* Actor, EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "OnEndPlayer");

	Params::WBP_PalNPCHPGaugeCanvas_C_OnEndPlayer Parms{};

	Parms.Actor = Actor;
	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.OnEndPlayNormalPal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGaugeCanvas_C::OnEndPlayNormalPal(class AActor* Actor, EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "OnEndPlayNormalPal");

	Params::WBP_PalNPCHPGaugeCanvas_C_OnEndPlayNormalPal Parms{};

	Parms.Actor = Actor;
	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.OnInitializedCharacter
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    TargetCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_UIIndividualParameterInitializeWaiter_C*SelfObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGaugeCanvas_C::OnInitializedCharacter(class APalCharacter* TargetCharacter, class UBP_UIIndividualParameterInitializeWaiter_C* SelfObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "OnInitializedCharacter");

	Params::WBP_PalNPCHPGaugeCanvas_C_OnInitializedCharacter Parms{};

	Parms.TargetCharacter = TargetCharacter;
	Parms.SelfObject = SelfObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.Remove Children
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PalNPCHPGaugeCanvas_C::Remove_Children()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "Remove Children");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.SetGaugeVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    DelayClose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Close                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGaugeCanvas_C::SetGaugeVisibility(class UWidget* Widget, class AActor* TargetActor, bool DelayClose, bool Close)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "SetGaugeVisibility");

	Params::WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility Parms{};

	Parms.Widget = Widget;
	Parms.TargetActor = TargetActor;
	Parms.DelayClose = DelayClose;
	Parms.Close = Close;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PalNPCHPGaugeCanvas_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGaugeCanvas_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "Tick");

	Params::WBP_PalNPCHPGaugeCanvas_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.Try Process DIsplay Gauge
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    TargetCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGaugeCanvas_C::Try_Process_DIsplay_Gauge(class APalCharacter* TargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "Try Process DIsplay Gauge");

	Params::WBP_PalNPCHPGaugeCanvas_C_Try_Process_DIsplay_Gauge Parms{};

	Parms.TargetCharacter = TargetCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.Update Children Timer
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PalNPCHPGaugeCanvas_C::Update_Children_Timer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "Update Children Timer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.Update Visibility Pal HPGauges
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PalNPCHPGaugeCanvas_C::Update_Visibility_Pal_HPGauges()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "Update Visibility Pal HPGauges");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.Update Visibility Player Gauges
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PalNPCHPGaugeCanvas_C::Update_Visibility_Player_Gauges()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "Update Visibility Player Gauges");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.UpdateChildren_ForTick
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGaugeCanvas_C::UpdateChildren_ForTick(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "UpdateChildren_ForTick");

	Params::WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.UpdateVisibility_BossGauge
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PalNPCHPGaugeCanvas_C::UpdateVisibility_BossGauge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGaugeCanvas_C", "UpdateVisibility_BossGauge");

	UObject::ProcessEvent(Func, nullptr);
}

}

