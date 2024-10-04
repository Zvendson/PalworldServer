#include "PalServer/Basic.hpp"

#include "PalServer/WBP_PalPlayerDebuffNoticeBox_classes.hpp"
#include "PalServer/WBP_PalPlayerDebuffNoticeBox_parameters.hpp"


namespace PalServer
{

// Function WBP_PalPlayerDebuffNoticeBox.WBP_PalPlayerDebuffNoticeBox_C.AddDebuffNotice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_PalUIPlayerDebuffNoticeType           DebuffType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalPlayerDebuffNoticeBox_C::AddDebuffNotice(E_PalUIPlayerDebuffNoticeType DebuffType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalPlayerDebuffNoticeBox_C", "AddDebuffNotice");

	Params::WBP_PalPlayerDebuffNoticeBox_C_AddDebuffNotice Parms{};

	Parms.DebuffType = DebuffType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalPlayerDebuffNoticeBox.WBP_PalPlayerDebuffNoticeBox_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalPlayerDebuffNoticeBox_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalPlayerDebuffNoticeBox_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalPlayerDebuffNoticeBox.WBP_PalPlayerDebuffNoticeBox_C.ExecuteUbergraph_WBP_PalPlayerDebuffNoticeBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalPlayerDebuffNoticeBox_C::ExecuteUbergraph_WBP_PalPlayerDebuffNoticeBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalPlayerDebuffNoticeBox_C", "ExecuteUbergraph_WBP_PalPlayerDebuffNoticeBox");

	Params::WBP_PalPlayerDebuffNoticeBox_C_ExecuteUbergraph_WBP_PalPlayerDebuffNoticeBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalPlayerDebuffNoticeBox.WBP_PalPlayerDebuffNoticeBox_C.RemoveDebuffNotice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_PalUIPlayerDebuffNoticeType           DebuffType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalPlayerDebuffNoticeBox_C::RemoveDebuffNotice(E_PalUIPlayerDebuffNoticeType DebuffType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalPlayerDebuffNoticeBox_C", "RemoveDebuffNotice");

	Params::WBP_PalPlayerDebuffNoticeBox_C_RemoveDebuffNotice Parms{};

	Parms.DebuffType = DebuffType;

	UObject::ProcessEvent(Func, &Parms);
}

}

