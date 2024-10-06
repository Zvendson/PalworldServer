#include "PalServer/Basic.hpp"

#include "PalServer/WBP_EnemyQuestionMarkIcon_classes.hpp"
#include "PalServer/WBP_EnemyQuestionMarkIcon_parameters.hpp"


namespace PalServer
{

// Function WBP_EnemyQuestionMarkIcon.WBP_EnemyQuestionMarkIcon_C.CheckEnd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnd                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyQuestionMarkIcon_C::CheckEnd(bool* IsEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyQuestionMarkIcon_C", "CheckEnd");

	Params::WBP_EnemyQuestionMarkIcon_C_CheckEnd Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsEnd != nullptr)
		*IsEnd = Parms.IsEnd;
}


// Function WBP_EnemyQuestionMarkIcon.WBP_EnemyQuestionMarkIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_EnemyQuestionMarkIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyQuestionMarkIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EnemyQuestionMarkIcon.WBP_EnemyQuestionMarkIcon_C.ExecuteUbergraph_WBP_EnemyQuestionMarkIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyQuestionMarkIcon_C::ExecuteUbergraph_WBP_EnemyQuestionMarkIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyQuestionMarkIcon_C", "ExecuteUbergraph_WBP_EnemyQuestionMarkIcon");

	Params::WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EnemyQuestionMarkIcon.WBP_EnemyQuestionMarkIcon_C.Finished_65824A4344E87236A81F99B8C42BE19D
// (BlueprintCallable, BlueprintEvent)

void UWBP_EnemyQuestionMarkIcon_C::Finished_65824A4344E87236A81F99B8C42BE19D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyQuestionMarkIcon_C", "Finished_65824A4344E87236A81F99B8C42BE19D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EnemyQuestionMarkIcon.WBP_EnemyQuestionMarkIcon_C.Finished_AAA80C6F4C0998EEE3398EA3A4904D66
// (BlueprintCallable, BlueprintEvent)

void UWBP_EnemyQuestionMarkIcon_C::Finished_AAA80C6F4C0998EEE3398EA3A4904D66()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyQuestionMarkIcon_C", "Finished_AAA80C6F4C0998EEE3398EA3A4904D66");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EnemyQuestionMarkIcon.WBP_EnemyQuestionMarkIcon_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_EnemyQuestionMarkIcon_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyQuestionMarkIcon_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EnemyQuestionMarkIcon.WBP_EnemyQuestionMarkIcon_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    TargetPal                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyQuestionMarkIcon_C::Setup(class APalCharacter* TargetPal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyQuestionMarkIcon_C", "Setup");

	Params::WBP_EnemyQuestionMarkIcon_C_Setup Parms{};

	Parms.TargetPal = TargetPal;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EnemyQuestionMarkIcon.WBP_EnemyQuestionMarkIcon_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyQuestionMarkIcon_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyQuestionMarkIcon_C", "Tick");

	Params::WBP_EnemyQuestionMarkIcon_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

