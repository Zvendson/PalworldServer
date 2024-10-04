#include "PalServer/Basic.hpp"

#include "PalServer/WBP_PalDamageCanvas_OneShotText_classes.hpp"
#include "PalServer/WBP_PalDamageCanvas_OneShotText_parameters.hpp"


namespace PalServer
{

// Function WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C.AddDamageTextEvent
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageInfo                   DamageInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AActor*                           Defender                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDamageCanvas_OneShotText_C::AddDamageTextEvent(const struct FPalDamageInfo& DamageInfo, class AActor* Defender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalDamageCanvas_OneShotText_C", "AddDamageTextEvent");

	Params::WBP_PalDamageCanvas_OneShotText_C_AddDamageTextEvent Parms{};

	Parms.DamageInfo = std::move(DamageInfo);
	Parms.Defender = Defender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C.AddNewDamageText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageInfo                   DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                           Defender                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDamageCanvas_OneShotText_C::AddNewDamageText(const struct FPalDamageInfo& DamageInfo, class AActor* Defender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalDamageCanvas_OneShotText_C", "AddNewDamageText");

	Params::WBP_PalDamageCanvas_OneShotText_C_AddNewDamageText Parms{};

	Parms.DamageInfo = std::move(DamageInfo);
	Parms.Defender = Defender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C.CalcDamageTextType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageInfo                   DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                           Defender                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  DamageRate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   WeakCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPalDamageTextType                      TextType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDamageCanvas_OneShotText_C::CalcDamageTextType(const struct FPalDamageInfo& DamageInfo, class AActor* Defender, double DamageRate, int32 WeakCount, EPalDamageTextType* TextType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalDamageCanvas_OneShotText_C", "CalcDamageTextType");

	Params::WBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType Parms{};

	Parms.DamageInfo = std::move(DamageInfo);
	Parms.Defender = Defender;
	Parms.DamageRate = DamageRate;
	Parms.WeakCount = WeakCount;

	UObject::ProcessEvent(Func, &Parms);

	if (TextType != nullptr)
		*TextType = Parms.TextType;
}


// Function WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C.CalcLengthToPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Length                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDamageCanvas_OneShotText_C::CalcLengthToPlayer(const struct FVector& HitLocation, double* Length)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalDamageCanvas_OneShotText_C", "CalcLengthToPlayer");

	Params::WBP_PalDamageCanvas_OneShotText_C_CalcLengthToPlayer Parms{};

	Parms.HitLocation = std::move(HitLocation);

	UObject::ProcessEvent(Func, &Parms);

	if (Length != nullptr)
		*Length = Parms.Length;
}


// Function WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C.CalcTargetLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalDamageInfo                   DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                           Defender                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDamageCanvas_OneShotText_C::CalcTargetLocation(const struct FPalDamageInfo& DamageInfo, class AActor* Defender, struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalDamageCanvas_OneShotText_C", "CalcTargetLocation");

	Params::WBP_PalDamageCanvas_OneShotText_C_CalcTargetLocation Parms{};

	Parms.DamageInfo = std::move(DamageInfo);
	Parms.Defender = Defender;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}


// Function WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C.CreateDamageWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalUIDamageTextBase*             CreatedWdiget                                          (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDamageCanvas_OneShotText_C::CreateDamageWidget(class UPalUIDamageTextBase** CreatedWdiget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalDamageCanvas_OneShotText_C", "CreateDamageWidget");

	Params::WBP_PalDamageCanvas_OneShotText_C_CreateDamageWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedWdiget != nullptr)
		*CreatedWdiget = Parms.CreatedWdiget;
}


// Function WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalDamageCanvas_OneShotText_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalDamageCanvas_OneShotText_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C.ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDamageCanvas_OneShotText_C::ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalDamageCanvas_OneShotText_C", "ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText");

	Params::WBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C.IsEquipAttacker
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           Attacker                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEquip                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDamageCanvas_OneShotText_C::IsEquipAttacker(class AActor* Attacker, bool* IsEquip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalDamageCanvas_OneShotText_C", "IsEquipAttacker");

	Params::WBP_PalDamageCanvas_OneShotText_C_IsEquipAttacker Parms{};

	Parms.Attacker = Attacker;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEquip != nullptr)
		*IsEquip = Parms.IsEquip;
}


// Function WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C.OnChangedUISettings
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalOptionUISettings             PrevSettings                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FPalOptionUISettings             NewSettings                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UWBP_PalDamageCanvas_OneShotText_C::OnChangedUISettings(const struct FPalOptionUISettings& PrevSettings, const struct FPalOptionUISettings& NewSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalDamageCanvas_OneShotText_C", "OnChangedUISettings");

	Params::WBP_PalDamageCanvas_OneShotText_C_OnChangedUISettings Parms{};

	Parms.PrevSettings = std::move(PrevSettings);
	Parms.NewSettings = std::move(NewSettings);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalDamageCanvas_OneShotText_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalDamageCanvas_OneShotText_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_PalDamageCanvas_OneShotText_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalDamageCanvas_OneShotText_C", "OnSetup");

	UObject::ProcessEvent(Func, nullptr);
}

}

