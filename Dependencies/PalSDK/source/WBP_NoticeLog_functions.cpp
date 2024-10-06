#include "PalServer/Basic.hpp"

#include "PalServer/WBP_NoticeLog_classes.hpp"
#include "PalServer/WBP_NoticeLog_parameters.hpp"


namespace PalServer
{

// Function WBP_NoticeLog.WBP_NoticeLog_C.Close_Internal
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_NoticeLog_C::Close_Internal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NoticeLog_C", "Close_Internal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NoticeLog.WBP_NoticeLog_C.ExecuteUbergraph_WBP_NoticeLog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NoticeLog_C::ExecuteUbergraph_WBP_NoticeLog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NoticeLog_C", "ExecuteUbergraph_WBP_NoticeLog");

	Params::WBP_NoticeLog_C_ExecuteUbergraph_WBP_NoticeLog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NoticeLog.WBP_NoticeLog_C.OnFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_NoticeLog_C::OnFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NoticeLog_C", "OnFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NoticeLog.WBP_NoticeLog_C.OnFinishedClose
// (BlueprintCallable, BlueprintEvent)

void UWBP_NoticeLog_C::OnFinishedClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NoticeLog_C", "OnFinishedClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NoticeLog.WBP_NoticeLog_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_NoticeLog_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NoticeLog_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NoticeLog.WBP_NoticeLog_C.OnLoaded_19AB6838498B19451FE6AEAD31DEA803
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_NoticeLog_C::OnLoaded_19AB6838498B19451FE6AEAD31DEA803(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NoticeLog_C", "OnLoaded_19AB6838498B19451FE6AEAD31DEA803");

	Params::WBP_NoticeLog_C_OnLoaded_19AB6838498B19451FE6AEAD31DEA803 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NoticeLog.WBP_NoticeLog_C.Open_Internal
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_NoticeLog_C::Open_Internal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NoticeLog_C", "Open_Internal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NoticeLog.WBP_NoticeLog_C.RequestInAnime
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_NoticeLog_C::RequestInAnime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NoticeLog_C", "RequestInAnime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NoticeLog.WBP_NoticeLog_C.RequestLoadIconTexture
// (HasOutParams, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        SoftTexturePtr                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)

void UWBP_NoticeLog_C::RequestLoadIconTexture(const TSoftObjectPtr<class UTexture2D>& SoftTexturePtr)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NoticeLog_C", "RequestLoadIconTexture");

	Params::WBP_NoticeLog_C_RequestLoadIconTexture Parms{};

	Parms.SoftTexturePtr = SoftTexturePtr;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NoticeLog.WBP_NoticeLog_C.RequestOutAnime
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_NoticeLog_C::RequestOutAnime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NoticeLog_C", "RequestOutAnime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NoticeLog.WBP_NoticeLog_C.SetAdditionalData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalLogAdditionalData            InAdditionalData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_NoticeLog_C::SetAdditionalData(const struct FPalLogAdditionalData& InAdditionalData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NoticeLog_C", "SetAdditionalData");

	Params::WBP_NoticeLog_C_SetAdditionalData Parms{};

	Parms.InAdditionalData = std::move(InAdditionalData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NoticeLog.WBP_NoticeLog_C.SetLogText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_NoticeLog_C::SetLogText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NoticeLog_C", "SetLogText");

	Params::WBP_NoticeLog_C_SetLogText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}

