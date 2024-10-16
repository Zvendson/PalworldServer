#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_CharaCre_PartsSelectPanel_classes.hpp"
#include "PalSDK/WBP_CharaCre_PartsSelectPanel_parameters.hpp"


namespace PalSDK
{

// Function WBP_CharaCre_PartsSelectPanel.WBP_CharaCre_PartsSelectPanel_C.AddMeshPresets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, struct FPalCharacterCreationMeshPresetDataRow>PresetMap                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CharaCre_PartsSelectPanel_C::AddMeshPresets(const TMap<class FName, struct FPalCharacterCreationMeshPresetDataRow>& PresetMap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_PartsSelectPanel_C", "AddMeshPresets");

	Params::WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets Parms{};

	Parms.PresetMap = std::move(PresetMap);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_PartsSelectPanel.WBP_CharaCre_PartsSelectPanel_C.AddPreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             PresetName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        SoftIconTexture                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_CharaCre_PartsSelectPanel_C::AddPreset(class FName PresetName, TSoftObjectPtr<class UTexture2D> SoftIconTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_PartsSelectPanel_C", "AddPreset");

	Params::WBP_CharaCre_PartsSelectPanel_C_AddPreset Parms{};

	Parms.PresetName = PresetName;
	Parms.SoftIconTexture = SoftIconTexture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_PartsSelectPanel.WBP_CharaCre_PartsSelectPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CharaCre_PartsSelectPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_PartsSelectPanel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharaCre_PartsSelectPanel.WBP_CharaCre_PartsSelectPanel_C.ExecuteUbergraph_WBP_CharaCre_PartsSelectPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_PartsSelectPanel_C::ExecuteUbergraph_WBP_CharaCre_PartsSelectPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_PartsSelectPanel_C", "ExecuteUbergraph_WBP_CharaCre_PartsSelectPanel");

	Params::WBP_CharaCre_PartsSelectPanel_C_ExecuteUbergraph_WBP_CharaCre_PartsSelectPanel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_PartsSelectPanel.WBP_CharaCre_PartsSelectPanel_C.GetTopFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_PartsSelectPanel_C::GetTopFocusTarget(class UWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_PartsSelectPanel_C", "GetTopFocusTarget");

	Params::WBP_CharaCre_PartsSelectPanel_C_GetTopFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function WBP_CharaCre_PartsSelectPanel.WBP_CharaCre_PartsSelectPanel_C.OnClicked_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CharaCre_PartsSelect_sq_C*   Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_PartsSelectPanel_C::OnClicked_Internal(class UWBP_CharaCre_PartsSelect_sq_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_PartsSelectPanel_C", "OnClicked_Internal");

	Params::WBP_CharaCre_PartsSelectPanel_C_OnClicked_Internal Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_PartsSelectPanel.WBP_CharaCre_PartsSelectPanel_C.OnClickedAnyContent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             BindedName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_PartsSelectPanel_C::OnClickedAnyContent__DelegateSignature(class FName BindedName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_PartsSelectPanel_C", "OnClickedAnyContent__DelegateSignature");

	Params::WBP_CharaCre_PartsSelectPanel_C_OnClickedAnyContent__DelegateSignature Parms{};

	Parms.BindedName = BindedName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_PartsSelectPanel.WBP_CharaCre_PartsSelectPanel_C.SetSelectedPresetName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             PresetName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_PartsSelectPanel_C::SetSelectedPresetName(class FName PresetName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_PartsSelectPanel_C", "SetSelectedPresetName");

	Params::WBP_CharaCre_PartsSelectPanel_C_SetSelectedPresetName Parms{};

	Parms.PresetName = PresetName;

	UObject::ProcessEvent(Func, &Parms);
}

}

