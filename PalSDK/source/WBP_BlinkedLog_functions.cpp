#include "PalServer/Basic.hpp"

#include "PalServer/WBP_BlinkedLog_classes.hpp"
#include "PalServer/WBP_BlinkedLog_parameters.hpp"


namespace PalServer
{

// Function WBP_BlinkedLog.WBP_BlinkedLog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_BlinkedLog_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BlinkedLog_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BlinkedLog.WBP_BlinkedLog_C.ExecuteUbergraph_WBP_BlinkedLog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BlinkedLog_C::ExecuteUbergraph_WBP_BlinkedLog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BlinkedLog_C", "ExecuteUbergraph_WBP_BlinkedLog");

	Params::WBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BlinkedLog.WBP_BlinkedLog_C.OnFinishClose
// (BlueprintCallable, BlueprintEvent)

void UWBP_BlinkedLog_C::OnFinishClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BlinkedLog_C", "OnFinishClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BlinkedLog.WBP_BlinkedLog_C.OnFinishOpen
// (BlueprintCallable, BlueprintEvent)

void UWBP_BlinkedLog_C::OnFinishOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BlinkedLog_C", "OnFinishOpen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BlinkedLog.WBP_BlinkedLog_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_BlinkedLog_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BlinkedLog_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BlinkedLog.WBP_BlinkedLog_C.OnLoaded_B2F1547C445A710FFB036EAD5D1B3FE1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_BlinkedLog_C::OnLoaded_B2F1547C445A710FFB036EAD5D1B3FE1(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BlinkedLog_C", "OnLoaded_B2F1547C445A710FFB036EAD5D1B3FE1");

	Params::WBP_BlinkedLog_C_OnLoaded_B2F1547C445A710FFB036EAD5D1B3FE1 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BlinkedLog.WBP_BlinkedLog_C.OverrideBgColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalLogContentToneType                  ToneType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BlinkedLog_C::OverrideBgColor(EPalLogContentToneType ToneType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BlinkedLog_C", "OverrideBgColor");

	Params::WBP_BlinkedLog_C_OverrideBgColor Parms{};

	Parms.ToneType = ToneType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BlinkedLog.WBP_BlinkedLog_C.RequestInAnime
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_BlinkedLog_C::RequestInAnime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BlinkedLog_C", "RequestInAnime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BlinkedLog.WBP_BlinkedLog_C.RequestLoadIconTexture
// (HasOutParams, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        SoftTexturePtr                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)

void UWBP_BlinkedLog_C::RequestLoadIconTexture(const TSoftObjectPtr<class UTexture2D>& SoftTexturePtr)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BlinkedLog_C", "RequestLoadIconTexture");

	Params::WBP_BlinkedLog_C_RequestLoadIconTexture Parms{};

	Parms.SoftTexturePtr = SoftTexturePtr;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BlinkedLog.WBP_BlinkedLog_C.RequestOutAnime
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_BlinkedLog_C::RequestOutAnime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BlinkedLog_C", "RequestOutAnime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BlinkedLog.WBP_BlinkedLog_C.SetAdditionalData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalLogAdditionalData            InAdditionalData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_BlinkedLog_C::SetAdditionalData(const struct FPalLogAdditionalData& InAdditionalData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BlinkedLog_C", "SetAdditionalData");

	Params::WBP_BlinkedLog_C_SetAdditionalData Parms{};

	Parms.InAdditionalData = std::move(InAdditionalData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BlinkedLog.WBP_BlinkedLog_C.SetLogText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_BlinkedLog_C::SetLogText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BlinkedLog_C", "SetLogText");

	Params::WBP_BlinkedLog_C_SetLogText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BlinkedLog.WBP_BlinkedLog_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BlinkedLog_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BlinkedLog_C", "Tick");

	Params::WBP_BlinkedLog_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

