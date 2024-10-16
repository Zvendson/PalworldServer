#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_PalCommonItemIcon_classes.hpp"
#include "PalSDK/WBP_PalCommonItemIcon_parameters.hpp"


namespace PalSDK
{

// Function WBP_PalCommonItemIcon.WBP_PalCommonItemIcon_C.ExecuteUbergraph_WBP_PalCommonItemIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonItemIcon_C::ExecuteUbergraph_WBP_PalCommonItemIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonItemIcon_C", "ExecuteUbergraph_WBP_PalCommonItemIcon");

	Params::WBP_PalCommonItemIcon_C_ExecuteUbergraph_WBP_PalCommonItemIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCommonItemIcon.WBP_PalCommonItemIcon_C.OnEmpty
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalCommonItemIcon_C::OnEmpty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonItemIcon_C", "OnEmpty");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCommonItemIcon.WBP_PalCommonItemIcon_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalCommonItemIcon_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonItemIcon_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCommonItemIcon.WBP_PalCommonItemIcon_C.OnLoaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       LoadedTexture                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonItemIcon_C::OnLoaded(class UTexture2D* LoadedTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonItemIcon_C", "OnLoaded");

	Params::WBP_PalCommonItemIcon_C_OnLoaded Parms{};

	Parms.LoadedTexture = LoadedTexture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCommonItemIcon.WBP_PalCommonItemIcon_C.OnStartLoad
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalCommonItemIcon_C::OnStartLoad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonItemIcon_C", "OnStartLoad");

	UObject::ProcessEvent(Func, nullptr);
}

}

