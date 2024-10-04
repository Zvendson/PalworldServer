#include "PalServer/Basic.hpp"

#include "PalServer/WBP_PalCharacterIconBase_classes.hpp"
#include "PalServer/WBP_PalCharacterIconBase_parameters.hpp"


namespace PalServer
{

// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalCharacterIconBase_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterIconBase_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.ExecuteUbergraph_WBP_PalCharacterIconBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterIconBase_C::ExecuteUbergraph_WBP_PalCharacterIconBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterIconBase_C", "ExecuteUbergraph_WBP_PalCharacterIconBase");

	Params::WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.LoadIconEvent_Internal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        SoftTexture                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_PalCharacterIconBase_C::LoadIconEvent_Internal(TSoftObjectPtr<class UTexture2D> SoftTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterIconBase_C", "LoadIconEvent_Internal");

	Params::WBP_PalCharacterIconBase_C_LoadIconEvent_Internal Parms{};

	Parms.SoftTexture = SoftTexture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.OnLoaded_2131D8E64037785EDD84EFACA46D7EBC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterIconBase_C::OnLoaded_2131D8E64037785EDD84EFACA46D7EBC(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterIconBase_C", "OnLoaded_2131D8E64037785EDD84EFACA46D7EBC");

	Params::WBP_PalCharacterIconBase_C_OnLoaded_2131D8E64037785EDD84EFACA46D7EBC Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.OnLoadedTexture__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       LoadedTexture                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterIconBase_C::OnLoadedTexture__DelegateSignature(class UTexture2D* LoadedTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterIconBase_C", "OnLoadedTexture__DelegateSignature");

	Params::WBP_PalCharacterIconBase_C_OnLoadedTexture__DelegateSignature Parms{};

	Parms.LoadedTexture = LoadedTexture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.OnSetEmpty__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_PalCharacterIconBase_C::OnSetEmpty__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterIconBase_C", "OnSetEmpty__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.OnStartLoadTexture__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_PalCharacterIconBase_C::OnStartLoadTexture__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterIconBase_C", "OnStartLoadTexture__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.OnUpdateSkinName
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NewSkinName                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterIconBase_C::OnUpdateSkinName(const class FName& NewSkinName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterIconBase_C", "OnUpdateSkinName");

	Params::WBP_PalCharacterIconBase_C_OnUpdateSkinName Parms{};

	Parms.NewSkinName = NewSkinName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.SetEmpty
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalCharacterIconBase_C::SetEmpty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterIconBase_C", "SetEmpty");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CharacterID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterIconBase_C::Setup(class FName CharacterID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterIconBase_C", "Setup");

	Params::WBP_PalCharacterIconBase_C_Setup Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.SetupByHandle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    IndividualHandle                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterIconBase_C::SetupByHandle(class UPalIndividualCharacterHandle* IndividualHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterIconBase_C", "SetupByHandle");

	Params::WBP_PalCharacterIconBase_C_SetupByHandle Parms{};

	Parms.IndividualHandle = IndividualHandle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.SetupByParameter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterParameter* Parameter                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterIconBase_C::SetupByParameter(class UPalIndividualCharacterParameter* Parameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterIconBase_C", "SetupByParameter");

	Params::WBP_PalCharacterIconBase_C_SetupByParameter Parms{};

	Parms.Parameter = Parameter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.UnbindEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalCharacterIconBase_C::UnbindEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterIconBase_C", "UnbindEvent");

	UObject::ProcessEvent(Func, nullptr);
}

}

