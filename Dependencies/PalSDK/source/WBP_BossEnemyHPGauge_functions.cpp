#include "PalServer/Basic.hpp"

#include "PalServer/WBP_BossEnemyHPGauge_classes.hpp"
#include "PalServer/WBP_BossEnemyHPGauge_parameters.hpp"


namespace PalServer
{

// Function WBP_BossEnemyHPGauge.WBP_BossEnemyHPGauge_C.AnmEvent_Close
// (BlueprintCallable, BlueprintEvent)

void UWBP_BossEnemyHPGauge_C::AnmEvent_Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossEnemyHPGauge_C", "AnmEvent_Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BossEnemyHPGauge.WBP_BossEnemyHPGauge_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_BossEnemyHPGauge_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossEnemyHPGauge_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BossEnemyHPGauge.WBP_BossEnemyHPGauge_C.ExecuteUbergraph_WBP_BossEnemyHPGauge
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BossEnemyHPGauge_C::ExecuteUbergraph_WBP_BossEnemyHPGauge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossEnemyHPGauge_C", "ExecuteUbergraph_WBP_BossEnemyHPGauge");

	Params::WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BossEnemyHPGauge.WBP_BossEnemyHPGauge_C.Finished_10F7592E48B01E3F065E49BC1224338C
// (BlueprintCallable, BlueprintEvent)

void UWBP_BossEnemyHPGauge_C::Finished_10F7592E48B01E3F065E49BC1224338C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossEnemyHPGauge_C", "Finished_10F7592E48B01E3F065E49BC1224338C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BossEnemyHPGauge.WBP_BossEnemyHPGauge_C.On Update Level
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AddLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NowLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BossEnemyHPGauge_C::On_Update_Level(int32 AddLevel, int32 NowLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossEnemyHPGauge_C", "On Update Level");

	Params::WBP_BossEnemyHPGauge_C_On_Update_Level Parms{};

	Parms.AddLevel = AddLevel;
	Parms.NowLevel = NowLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BossEnemyHPGauge.WBP_BossEnemyHPGauge_C.OnDead__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    TargetCharacter_0                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_BossEnemyHPGauge_C::OnDead__DelegateSignature(class APalCharacter* TargetCharacter_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossEnemyHPGauge_C", "OnDead__DelegateSignature");

	Params::WBP_BossEnemyHPGauge_C_OnDead__DelegateSignature Parms{};

	Parms.TargetCharacter_0 = TargetCharacter_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BossEnemyHPGauge.WBP_BossEnemyHPGauge_C.OnRequestClose
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_BossEnemyHPGauge_C::OnRequestClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossEnemyHPGauge_C", "OnRequestClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BossEnemyHPGauge.WBP_BossEnemyHPGauge_C.OnUpdateElement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalElementType                         Type1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPalElementType                         Type2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BossEnemyHPGauge_C::OnUpdateElement(EPalElementType Type1, EPalElementType Type2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossEnemyHPGauge_C", "OnUpdateElement");

	Params::WBP_BossEnemyHPGauge_C_OnUpdateElement Parms{};

	Parms.Type1 = Type1;
	Parms.Type2 = Type2;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BossEnemyHPGauge.WBP_BossEnemyHPGauge_C.OnUpdateHp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64                    NowHP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64                    NowMaxHP                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_BossEnemyHPGauge_C::OnUpdateHp(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossEnemyHPGauge_C", "OnUpdateHp");

	Params::WBP_BossEnemyHPGauge_C_OnUpdateHp Parms{};

	Parms.NowHP = std::move(NowHP);
	Parms.NowMaxHP = std::move(NowMaxHP);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BossEnemyHPGauge.WBP_BossEnemyHPGauge_C.SetTargetCharacter
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    TargetCharacter_0                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_BossEnemyHPGauge_C::SetTargetCharacter(class APalCharacter* TargetCharacter_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossEnemyHPGauge_C", "SetTargetCharacter");

	Params::WBP_BossEnemyHPGauge_C_SetTargetCharacter Parms{};

	Parms.TargetCharacter_0 = TargetCharacter_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BossEnemyHPGauge.WBP_BossEnemyHPGauge_C.SetupEvents
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_BossEnemyHPGauge_C::SetupEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossEnemyHPGauge_C", "SetupEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BossEnemyHPGauge.WBP_BossEnemyHPGauge_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BossEnemyHPGauge_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossEnemyHPGauge_C", "Tick");

	Params::WBP_BossEnemyHPGauge_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BossEnemyHPGauge.WBP_BossEnemyHPGauge_C.UpdateText
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_BossEnemyHPGauge_C::UpdateText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossEnemyHPGauge_C", "UpdateText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BossEnemyHPGauge.WBP_BossEnemyHPGauge_C.UpdateVisibility
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_BossEnemyHPGauge_C::UpdateVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossEnemyHPGauge_C", "UpdateVisibility");

	UObject::ProcessEvent(Func, nullptr);
}

}

