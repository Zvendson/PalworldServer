#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_TutorialMessage_Temp_classes.hpp"
#include "PalSDK/WBP_TutorialMessage_Temp_parameters.hpp"


namespace PalSDK
{

// Function WBP_TutorialMessage_Temp.WBP_TutorialMessage_Temp_C.CreateGuideText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             OutText                                                (Parm, OutParm)

void UWBP_TutorialMessage_Temp_C::CreateGuideText(const class FText& InText, class FText* OutText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TutorialMessage_Temp_C", "CreateGuideText");

	Params::WBP_TutorialMessage_Temp_C_CreateGuideText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = std::move(Parms.OutText);
}


// Function WBP_TutorialMessage_Temp.WBP_TutorialMessage_Temp_C.ExecuteUbergraph_WBP_TutorialMessage_Temp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TutorialMessage_Temp_C::ExecuteUbergraph_WBP_TutorialMessage_Temp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TutorialMessage_Temp_C", "ExecuteUbergraph_WBP_TutorialMessage_Temp");

	Params::WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TutorialMessage_Temp.WBP_TutorialMessage_Temp_C.Finished_5267E3844738D65023A58CBEE7C11FAC
// (BlueprintCallable, BlueprintEvent)

void UWBP_TutorialMessage_Temp_C::Finished_5267E3844738D65023A58CBEE7C11FAC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TutorialMessage_Temp_C", "Finished_5267E3844738D65023A58CBEE7C11FAC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TutorialMessage_Temp.WBP_TutorialMessage_Temp_C.Finished_D8B6F6C240191DC6DD60BAADB6596025
// (BlueprintCallable, BlueprintEvent)

void UWBP_TutorialMessage_Temp_C::Finished_D8B6F6C240191DC6DD60BAADB6596025()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TutorialMessage_Temp_C", "Finished_D8B6F6C240191DC6DD60BAADB6596025");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TutorialMessage_Temp.WBP_TutorialMessage_Temp_C.On Input Method Changed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        InputType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TutorialMessage_Temp_C::On_Input_Method_Changed(ECommonInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TutorialMessage_Temp_C", "On Input Method Changed");

	Params::WBP_TutorialMessage_Temp_C_On_Input_Method_Changed Parms{};

	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TutorialMessage_Temp.WBP_TutorialMessage_Temp_C.PresentMessage
// (BlueprintCallable, BlueprintEvent)

void UWBP_TutorialMessage_Temp_C::PresentMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TutorialMessage_Temp_C", "PresentMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TutorialMessage_Temp.WBP_TutorialMessage_Temp_C.QueueTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle              TutorialMsgID                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_TutorialMessage_Temp_C::QueueTutorial(const struct FDataTableRowHandle& TutorialMsgID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TutorialMessage_Temp_C", "QueueTutorial");

	Params::WBP_TutorialMessage_Temp_C_QueueTutorial Parms{};

	Parms.TutorialMsgID = std::move(TutorialMsgID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TutorialMessage_Temp.WBP_TutorialMessage_Temp_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TutorialMessage_Temp_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TutorialMessage_Temp_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TutorialMessage_Temp.WBP_TutorialMessage_Temp_C.SkipToNextMessage
// (BlueprintCallable, BlueprintEvent)

void UWBP_TutorialMessage_Temp_C::SkipToNextMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TutorialMessage_Temp_C", "SkipToNextMessage");

	UObject::ProcessEvent(Func, nullptr);
}

}

