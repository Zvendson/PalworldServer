#include "PalServer/Basic.hpp"

#include "PalServer/WBP_SimpleLog_classes.hpp"
#include "PalServer/WBP_SimpleLog_parameters.hpp"


namespace PalServer
{

// Function WBP_SimpleLog.WBP_SimpleLog_C.ExecuteUbergraph_WBP_SimpleLog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SimpleLog_C::ExecuteUbergraph_WBP_SimpleLog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SimpleLog_C", "ExecuteUbergraph_WBP_SimpleLog");

	Params::WBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SimpleLog.WBP_SimpleLog_C.OnFinishClose
// (BlueprintCallable, BlueprintEvent)

void UWBP_SimpleLog_C::OnFinishClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SimpleLog_C", "OnFinishClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SimpleLog.WBP_SimpleLog_C.OnFinishOpen
// (BlueprintCallable, BlueprintEvent)

void UWBP_SimpleLog_C::OnFinishOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SimpleLog_C", "OnFinishOpen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SimpleLog.WBP_SimpleLog_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_SimpleLog_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SimpleLog_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SimpleLog.WBP_SimpleLog_C.OnLoaded_E9D9449849BBF69D84DD6485CBEECF9A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_SimpleLog_C::OnLoaded_E9D9449849BBF69D84DD6485CBEECF9A(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SimpleLog_C", "OnLoaded_E9D9449849BBF69D84DD6485CBEECF9A");

	Params::WBP_SimpleLog_C_OnLoaded_E9D9449849BBF69D84DD6485CBEECF9A Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SimpleLog.WBP_SimpleLog_C.OverrideBgColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalLogContentToneType                  ToneType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SimpleLog_C::OverrideBgColor(EPalLogContentToneType ToneType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SimpleLog_C", "OverrideBgColor");

	Params::WBP_SimpleLog_C_OverrideBgColor Parms{};

	Parms.ToneType = ToneType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SimpleLog.WBP_SimpleLog_C.RequestInAnime
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_SimpleLog_C::RequestInAnime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SimpleLog_C", "RequestInAnime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SimpleLog.WBP_SimpleLog_C.RequestLoadIconTexture
// (HasOutParams, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        SoftTexturePtr                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)

void UWBP_SimpleLog_C::RequestLoadIconTexture(const TSoftObjectPtr<class UTexture2D>& SoftTexturePtr)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SimpleLog_C", "RequestLoadIconTexture");

	Params::WBP_SimpleLog_C_RequestLoadIconTexture Parms{};

	Parms.SoftTexturePtr = SoftTexturePtr;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SimpleLog.WBP_SimpleLog_C.RequestOutAnime
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_SimpleLog_C::RequestOutAnime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SimpleLog_C", "RequestOutAnime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SimpleLog.WBP_SimpleLog_C.SetAdditionalData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalLogAdditionalData            InAdditionalData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_SimpleLog_C::SetAdditionalData(const struct FPalLogAdditionalData& InAdditionalData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SimpleLog_C", "SetAdditionalData");

	Params::WBP_SimpleLog_C_SetAdditionalData Parms{};

	Parms.InAdditionalData = std::move(InAdditionalData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SimpleLog.WBP_SimpleLog_C.SetLogText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_SimpleLog_C::SetLogText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SimpleLog_C", "SetLogText");

	Params::WBP_SimpleLog_C_SetLogText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}

