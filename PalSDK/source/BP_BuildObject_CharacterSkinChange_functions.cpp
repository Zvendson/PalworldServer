#include "PalServer/Basic.hpp"

#include "PalServer/BP_BuildObject_CharacterSkinChange_classes.hpp"
#include "PalServer/BP_BuildObject_CharacterSkinChange_parameters.hpp"


namespace PalServer
{

// Function BP_BuildObject_CharacterSkinChange.BP_BuildObject_CharacterSkinChange_C.ExecuteUbergraph_BP_BuildObject_CharacterSkinChange
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_CharacterSkinChange_C::ExecuteUbergraph_BP_BuildObject_CharacterSkinChange(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_CharacterSkinChange_C", "ExecuteUbergraph_BP_BuildObject_CharacterSkinChange");

	Params::BP_BuildObject_CharacterSkinChange_C_ExecuteUbergraph_BP_BuildObject_CharacterSkinChange Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_CharacterSkinChange.BP_BuildObject_CharacterSkinChange_C.OnAvailable_BlueprintImpl
// (Event, Protected, BlueprintEvent)

void ABP_BuildObject_CharacterSkinChange_C::OnAvailable_BlueprintImpl()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_CharacterSkinChange_C", "OnAvailable_BlueprintImpl");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BuildObject_CharacterSkinChange.BP_BuildObject_CharacterSkinChange_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BuildObject_CharacterSkinChange_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_CharacterSkinChange_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BuildObject_CharacterSkinChange.BP_BuildObject_CharacterSkinChange_C.SetActiveInternal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    On                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_CharacterSkinChange_C::SetActiveInternal(bool On)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_CharacterSkinChange_C", "SetActiveInternal");

	Params::BP_BuildObject_CharacterSkinChange_C_SetActiveInternal Parms{};

	Parms.On = On;

	UObject::ProcessEvent(Func, &Parms);
}

}

