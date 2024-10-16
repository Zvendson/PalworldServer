#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_PalAim_classes.hpp"
#include "PalSDK/WBP_PalAim_parameters.hpp"


namespace PalSDK
{

// Function WBP_PalAim.WBP_PalAim_C.DisplayOutlineTarget
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       HitResult                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UWBP_PalAim_C::DisplayOutlineTarget(struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalAim_C", "DisplayOutlineTarget");

	Params::WBP_PalAim_C_DisplayOutlineTarget Parms{};

	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);

	HitResult = std::move(Parms.HitResult);
}


// Function WBP_PalAim.WBP_PalAim_C.EndThrowPalMode
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PalAim_C::EndThrowPalMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalAim_C", "EndThrowPalMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalAim.WBP_PalAim_C.ExecuteUbergraph_WBP_PalAim
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalAim_C::ExecuteUbergraph_WBP_PalAim(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalAim_C", "ExecuteUbergraph_WBP_PalAim");

	Params::WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalAim.WBP_PalAim_C.Get Reticle Hit Result
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FHitResult                       HitResult                                              (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UWBP_PalAim_C::Get_Reticle_Hit_Result(struct FHitResult* HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalAim_C", "Get Reticle Hit Result");

	Params::WBP_PalAim_C_Get_Reticle_Hit_Result Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HitResult != nullptr)
		*HitResult = std::move(Parms.HitResult);
}


// Function WBP_PalAim.WBP_PalAim_C.GetNowSelectedOtomoParameter
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalCharacterParameterComponent*  Parameter                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalAim_C::GetNowSelectedOtomoParameter(class UPalCharacterParameterComponent** Parameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalAim_C", "GetNowSelectedOtomoParameter");

	Params::WBP_PalAim_C_GetNowSelectedOtomoParameter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Parameter != nullptr)
		*Parameter = Parms.Parameter;
}


// Function WBP_PalAim.WBP_PalAim_C.On Changed UISettings
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalOptionUISettings             PrevSettings                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FPalOptionUISettings             NewSettings                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UWBP_PalAim_C::On_Changed_UISettings(const struct FPalOptionUISettings& PrevSettings, const struct FPalOptionUISettings& NewSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalAim_C", "On Changed UISettings");

	Params::WBP_PalAim_C_On_Changed_UISettings Parms{};

	Parms.PrevSettings = std::move(PrevSettings);
	Parms.NewSettings = std::move(NewSettings);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalAim.WBP_PalAim_C.On Dead Detail
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalAim_C::On_Dead_Detail()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalAim_C", "On Dead Detail");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalAim.WBP_PalAim_C.OnChangedWeaon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalWeaponBase*                   Weapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalAim_C::OnChangedWeaon(class APalWeaponBase* Weapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalAim_C", "OnChangedWeaon");

	Params::WBP_PalAim_C_OnChangedWeaon Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalAim.WBP_PalAim_C.OnEndLiftCampPal
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalAim_C::OnEndLiftCampPal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalAim_C", "OnEndLiftCampPal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalAim.WBP_PalAim_C.OnLiftCampPal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    TargetCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalAim_C::OnLiftCampPal(class APalCharacter* TargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalAim_C", "OnLiftCampPal");

	Params::WBP_PalAim_C_OnLiftCampPal Parms{};

	Parms.TargetCharacter = TargetCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalAim.WBP_PalAim_C.Raycast Reticle Direction Body
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PalAim_C::Raycast_Reticle_Direction_Body()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalAim_C", "Raycast Reticle Direction Body");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalAim.WBP_PalAim_C.SetGrapplingReticleVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsVisible_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalAim_C::SetGrapplingReticleVisible(bool IsVisible_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalAim_C", "SetGrapplingReticleVisible");

	Params::WBP_PalAim_C_SetGrapplingReticleVisible Parms{};

	Parms.IsVisible_0 = IsVisible_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalAim.WBP_PalAim_C.Setup_AfterCreatedPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PalAim_C::Setup_AfterCreatedPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalAim_C", "Setup_AfterCreatedPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalAim.WBP_PalAim_C.Show Assignable Throwing Pal
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       HitResult                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UWBP_PalAim_C::Show_Assignable_Throwing_Pal(struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalAim_C", "Show Assignable Throwing Pal");

	Params::WBP_PalAim_C_Show_Assignable_Throwing_Pal Parms{};

	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);

	HitResult = std::move(Parms.HitResult);
}


// Function WBP_PalAim.WBP_PalAim_C.StartThrowPalMode
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PalAim_C::StartThrowPalMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalAim_C", "StartThrowPalMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalAim.WBP_PalAim_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalAim_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalAim_C", "Tick");

	Params::WBP_PalAim_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalAim.WBP_PalAim_C.UpdateGrapplingReticle
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalAim_C::UpdateGrapplingReticle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalAim_C", "UpdateGrapplingReticle");

	UObject::ProcessEvent(Func, nullptr);
}

}

