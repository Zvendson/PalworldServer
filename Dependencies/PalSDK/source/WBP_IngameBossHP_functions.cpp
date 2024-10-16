#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_IngameBossHP_classes.hpp"
#include "PalSDK/WBP_IngameBossHP_parameters.hpp"


namespace PalSDK
{

// Function WBP_IngameBossHP.WBP_IngameBossHP_C.ExecuteUbergraph_WBP_IngameBossHP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameBossHP_C::ExecuteUbergraph_WBP_IngameBossHP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameBossHP_C", "ExecuteUbergraph_WBP_IngameBossHP");

	Params::WBP_IngameBossHP_C_ExecuteUbergraph_WBP_IngameBossHP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameBossHP.WBP_IngameBossHP_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_IngameBossHP_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameBossHP_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameBossHP.WBP_IngameBossHP_C.Set Enable Talent Detail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter* Parameter                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameBossHP_C::Set_Enable_Talent_Detail(bool IsEnable, class UPalIndividualCharacterParameter* Parameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameBossHP_C", "Set Enable Talent Detail");

	Params::WBP_IngameBossHP_C_Set_Enable_Talent_Detail Parms{};

	Parms.IsEnable = IsEnable;
	Parms.Parameter = Parameter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameBossHP.WBP_IngameBossHP_C.SetBossName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_IngameBossHP_C::SetBossName(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameBossHP_C", "SetBossName");

	Params::WBP_IngameBossHP_C_SetBossName Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameBossHP.WBP_IngameBossHP_C.SetBossPrefix
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_IngameBossHP_C::SetBossPrefix(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameBossHP_C", "SetBossPrefix");

	Params::WBP_IngameBossHP_C_SetBossPrefix Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameBossHP.WBP_IngameBossHP_C.SetElement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalElementType                         Type1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPalElementType                         Type2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameBossHP_C::SetElement(EPalElementType Type1, EPalElementType Type2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameBossHP_C", "SetElement");

	Params::WBP_IngameBossHP_C_SetElement Parms{};

	Parms.Type1 = Type1;
	Parms.Type2 = Type2;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameBossHP.WBP_IngameBossHP_C.SetHP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NowHP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxHP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameBossHP_C::SetHP(int32 NowHP, int32 MaxHP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameBossHP_C", "SetHP");

	Params::WBP_IngameBossHP_C_SetHP Parms{};

	Parms.NowHP = NowHP;
	Parms.MaxHP = MaxHP;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameBossHP.WBP_IngameBossHP_C.SetLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameBossHP_C::SetLevel(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameBossHP_C", "SetLevel");

	Params::WBP_IngameBossHP_C_SetLevel Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameBossHP.WBP_IngameBossHP_C.SetLevelVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameBossHP_C::SetLevelVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameBossHP_C", "SetLevelVisibility");

	Params::WBP_IngameBossHP_C_SetLevelVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameBossHP.WBP_IngameBossHP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameBossHP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameBossHP_C", "Tick");

	Params::WBP_IngameBossHP_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

