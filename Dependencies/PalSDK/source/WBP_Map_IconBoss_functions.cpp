#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_Map_IconBoss_classes.hpp"
#include "PalSDK/WBP_Map_IconBoss_parameters.hpp"


namespace PalSDK
{

// Function WBP_Map_IconBoss.WBP_Map_IconBoss_C.BndEvt__WBP_Map_IconTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_IconBoss_C::BndEvt__WBP_Map_IconTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_IconBoss_C", "BndEvt__WBP_Map_IconTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_Map_IconBoss_C_BndEvt__WBP_Map_IconTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_IconBoss.WBP_Map_IconBoss_C.BndEvt__WBP_Map_IconTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_IconBoss_C::BndEvt__WBP_Map_IconTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_IconBoss_C", "BndEvt__WBP_Map_IconTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_Map_IconBoss_C_BndEvt__WBP_Map_IconTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_IconBoss.WBP_Map_IconBoss_C.ExecuteUbergraph_WBP_Map_IconBoss
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_IconBoss_C::ExecuteUbergraph_WBP_Map_IconBoss(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_IconBoss_C", "ExecuteUbergraph_WBP_Map_IconBoss");

	Params::WBP_Map_IconBoss_C_ExecuteUbergraph_WBP_Map_IconBoss Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_IconBoss.WBP_Map_IconBoss_C.SetBoss
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CharacterID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Level_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Spawner_Id_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_IconBoss_C::SetBoss(class FName CharacterID, int32 Level_0, class FName Spawner_Id_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_IconBoss_C", "SetBoss");

	Params::WBP_Map_IconBoss_C_SetBoss Parms{};

	Parms.CharacterID = CharacterID;
	Parms.Level_0 = Level_0;
	Parms.Spawner_Id_0 = Spawner_Id_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_IconBoss.WBP_Map_IconBoss_C.UpdateCheckState
// (BlueprintCallable, BlueprintEvent)

void UWBP_Map_IconBoss_C::UpdateCheckState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_IconBoss_C", "UpdateCheckState");

	UObject::ProcessEvent(Func, nullptr);
}

}

