#include "PalServer/Basic.hpp"

#include "PalServer/WBP_EnemyMark_classes.hpp"
#include "PalServer/WBP_EnemyMark_parameters.hpp"


namespace PalServer
{

// Function WBP_EnemyMark.WBP_EnemyMark_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_EnemyMark_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyMark_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EnemyMark.WBP_EnemyMark_C.ExecuteUbergraph_WBP_EnemyMark
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyMark_C::ExecuteUbergraph_WBP_EnemyMark(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyMark_C", "ExecuteUbergraph_WBP_EnemyMark");

	Params::WBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EnemyMark.WBP_EnemyMark_C.カスタムイベント_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    TargetCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyMark_C::_________________________0(class APalCharacter* TargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyMark_C", "カスタムイベント_0");

	Params::WBP_EnemyMark_C__________________________0 Parms{};

	Parms.TargetCharacter = TargetCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EnemyMark.WBP_EnemyMark_C.カスタムイベント_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    TargetCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyMark_C::_________________________1(class APalCharacter* TargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyMark_C", "カスタムイベント_1");

	Params::WBP_EnemyMark_C__________________________1 Parms{};

	Parms.TargetCharacter = TargetCharacter;

	UObject::ProcessEvent(Func, &Parms);
}

}

