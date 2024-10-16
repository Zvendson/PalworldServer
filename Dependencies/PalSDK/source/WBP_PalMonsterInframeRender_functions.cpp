#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_PalMonsterInframeRender_classes.hpp"
#include "PalSDK/WBP_PalMonsterInframeRender_parameters.hpp"


namespace PalSDK
{

// Function WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C.AddRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                         Rotator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_PalMonsterInframeRender_C::AddRotation(const struct FRotator& Rotator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalMonsterInframeRender_C", "AddRotation");

	Params::WBP_PalMonsterInframeRender_C_AddRotation Parms{};

	Parms.Rotator = std::move(Rotator);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalMonsterInframeRender_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalMonsterInframeRender_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalMonsterInframeRender_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalMonsterInframeRender_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C.ExecuteUbergraph_WBP_PalMonsterInframeRender
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalMonsterInframeRender_C::ExecuteUbergraph_WBP_PalMonsterInframeRender(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalMonsterInframeRender_C", "ExecuteUbergraph_WBP_PalMonsterInframeRender");

	Params::WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C.Finalize
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalMonsterInframeRender_C::Finalize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalMonsterInframeRender_C", "Finalize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C.GetCaptureCameraActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_PalMonsterCaptureSet_C*       CameraActor                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalMonsterInframeRender_C::GetCaptureCameraActor(class ABP_PalMonsterCaptureSet_C** CameraActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalMonsterInframeRender_C", "GetCaptureCameraActor");

	Params::WBP_PalMonsterInframeRender_C_GetCaptureCameraActor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CameraActor != nullptr)
		*CameraActor = Parms.CameraActor;
}


// Function WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TextureSize                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalMonsterInframeRender_C::Initialize(int32 TextureSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalMonsterInframeRender_C", "Initialize");

	Params::WBP_PalMonsterInframeRender_C_Initialize Parms{};

	Parms.TextureSize = TextureSize;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C.Initialize_FreeSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TextureSizeX                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TextureSizeY                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalMonsterInframeRender_C::Initialize_FreeSize(int32 TextureSizeX, int32 TextureSizeY)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalMonsterInframeRender_C", "Initialize_FreeSize");

	Params::WBP_PalMonsterInframeRender_C_Initialize_FreeSize Parms{};

	Parms.TextureSizeX = TextureSizeX;
	Parms.TextureSizeY = TextureSizeY;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C.Initialize_Internal
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TextureSizeX                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TextureSizeY                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalMonsterInframeRender_C::Initialize_Internal(int32 TextureSizeX, int32 TextureSizeY)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalMonsterInframeRender_C", "Initialize_Internal");

	Params::WBP_PalMonsterInframeRender_C_Initialize_Internal Parms{};

	Parms.TextureSizeX = TextureSizeX;
	Parms.TextureSizeY = TextureSizeY;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C.OnCompleteCapture
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PalMonsterInframeRender_C::OnCompleteCapture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalMonsterInframeRender_C", "OnCompleteCapture");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C.OnTimer_CaptureScene
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PalMonsterInframeRender_C::OnTimer_CaptureScene()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalMonsterInframeRender_C", "OnTimer_CaptureScene");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C.PlayNowDisplayingPalCry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EmoStateName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalMonsterInframeRender_C::PlayNowDisplayingPalCry(class FName EmoStateName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalMonsterInframeRender_C", "PlayNowDisplayingPalCry");

	Params::WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry Parms{};

	Parms.EmoStateName = EmoStateName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C.PlayNowDisplayingPalCryRandom
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PalMonsterInframeRender_C::PlayNowDisplayingPalCryRandom()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalMonsterInframeRender_C", "PlayNowDisplayingPalCryRandom");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C.RequestCapture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CharacterID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalMonsterInframeRender_C::RequestCapture(class FName CharacterID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalMonsterInframeRender_C", "RequestCapture");

	Params::WBP_PalMonsterInframeRender_C_RequestCapture Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalMonsterInframeRender_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalMonsterInframeRender_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C.ResetRotation
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalMonsterInframeRender_C::ResetRotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalMonsterInframeRender_C", "ResetRotation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalMonsterInframeRender_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalMonsterInframeRender_C", "Tick");

	Params::WBP_PalMonsterInframeRender_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

