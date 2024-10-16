#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_EnemyExclamationMarkIcon_classes.hpp"
#include "PalSDK/WBP_EnemyExclamationMarkIcon_parameters.hpp"


namespace PalSDK
{

// Function WBP_EnemyExclamationMarkIcon.WBP_EnemyExclamationMarkIcon_C.CheckEnd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnd                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyExclamationMarkIcon_C::CheckEnd(bool* IsEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyExclamationMarkIcon_C", "CheckEnd");

	Params::WBP_EnemyExclamationMarkIcon_C_CheckEnd Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsEnd != nullptr)
		*IsEnd = Parms.IsEnd;
}


// Function WBP_EnemyExclamationMarkIcon.WBP_EnemyExclamationMarkIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_EnemyExclamationMarkIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyExclamationMarkIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EnemyExclamationMarkIcon.WBP_EnemyExclamationMarkIcon_C.ExecuteUbergraph_WBP_EnemyExclamationMarkIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyExclamationMarkIcon_C::ExecuteUbergraph_WBP_EnemyExclamationMarkIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyExclamationMarkIcon_C", "ExecuteUbergraph_WBP_EnemyExclamationMarkIcon");

	Params::WBP_EnemyExclamationMarkIcon_C_ExecuteUbergraph_WBP_EnemyExclamationMarkIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EnemyExclamationMarkIcon.WBP_EnemyExclamationMarkIcon_C.Finished_263A711A43F529A2B1BDFD9C84555BC8
// (BlueprintCallable, BlueprintEvent)

void UWBP_EnemyExclamationMarkIcon_C::Finished_263A711A43F529A2B1BDFD9C84555BC8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyExclamationMarkIcon_C", "Finished_263A711A43F529A2B1BDFD9C84555BC8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EnemyExclamationMarkIcon.WBP_EnemyExclamationMarkIcon_C.Finished_E6B9CD8740962A7164A9698FF7EA74CA
// (BlueprintCallable, BlueprintEvent)

void UWBP_EnemyExclamationMarkIcon_C::Finished_E6B9CD8740962A7164A9698FF7EA74CA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyExclamationMarkIcon_C", "Finished_E6B9CD8740962A7164A9698FF7EA74CA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EnemyExclamationMarkIcon.WBP_EnemyExclamationMarkIcon_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_EnemyExclamationMarkIcon_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyExclamationMarkIcon_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EnemyExclamationMarkIcon.WBP_EnemyExclamationMarkIcon_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    TargetPal                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyExclamationMarkIcon_C::Setup(class APalCharacter* TargetPal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyExclamationMarkIcon_C", "Setup");

	Params::WBP_EnemyExclamationMarkIcon_C_Setup Parms{};

	Parms.TargetPal = TargetPal;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EnemyExclamationMarkIcon.WBP_EnemyExclamationMarkIcon_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyExclamationMarkIcon_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyExclamationMarkIcon_C", "Tick");

	Params::WBP_EnemyExclamationMarkIcon_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

