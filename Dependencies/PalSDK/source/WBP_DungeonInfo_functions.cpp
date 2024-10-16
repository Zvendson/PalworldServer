#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_DungeonInfo_classes.hpp"
#include "PalSDK/WBP_DungeonInfo_parameters.hpp"


namespace PalSDK
{

// Function WBP_DungeonInfo.WBP_DungeonInfo_C.ExecuteUbergraph_WBP_DungeonInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_C::ExecuteUbergraph_WBP_DungeonInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DungeonInfo_C", "ExecuteUbergraph_WBP_DungeonInfo");

	Params::WBP_DungeonInfo_C_ExecuteUbergraph_WBP_DungeonInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DungeonInfo.WBP_DungeonInfo_C.SetDungeonBossSpawned
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalDungeonInstanceModel*         DungeonInstanceModel                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_C::SetDungeonBossSpawned(class UPalDungeonInstanceModel* DungeonInstanceModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DungeonInfo_C", "SetDungeonBossSpawned");

	Params::WBP_DungeonInfo_C_SetDungeonBossSpawned Parms{};

	Parms.DungeonInstanceModel = DungeonInstanceModel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DungeonInfo.WBP_DungeonInfo_C.SetDungeonDisappearTimeAt
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalDungeonInstanceModel*         DungeonInstanceModel                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_C::SetDungeonDisappearTimeAt(class UPalDungeonInstanceModel* DungeonInstanceModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DungeonInfo_C", "SetDungeonDisappearTimeAt");

	Params::WBP_DungeonInfo_C_SetDungeonDisappearTimeAt Parms{};

	Parms.DungeonInstanceModel = DungeonInstanceModel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DungeonInfo.WBP_DungeonInfo_C.SetDungeonLevel
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalDungeonInstanceModel*         DungeonInstanceModel                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_C::SetDungeonLevel(class UPalDungeonInstanceModel* DungeonInstanceModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DungeonInfo_C", "SetDungeonLevel");

	Params::WBP_DungeonInfo_C_SetDungeonLevel Parms{};

	Parms.DungeonInstanceModel = DungeonInstanceModel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DungeonInfo.WBP_DungeonInfo_C.SetDungeonName
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalDungeonInstanceModel*         DungeonInstanceModel                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_C::SetDungeonName(class UPalDungeonInstanceModel* DungeonInstanceModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DungeonInfo_C", "SetDungeonName");

	Params::WBP_DungeonInfo_C_SetDungeonName Parms{};

	Parms.DungeonInstanceModel = DungeonInstanceModel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DungeonInfo.WBP_DungeonInfo_C.Setup by Stage Model
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalStageModelDungeon*            InStageModel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_C::Setup_by_Stage_Model(class UPalStageModelDungeon* InStageModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DungeonInfo_C", "Setup by Stage Model");

	Params::WBP_DungeonInfo_C_Setup_by_Stage_Model Parms{};

	Parms.InStageModel = InStageModel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DungeonInfo.WBP_DungeonInfo_C.SetupEvents
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalStageModelDungeon*            StageModel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_C::SetupEvents(class UPalStageModelDungeon* StageModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DungeonInfo_C", "SetupEvents");

	Params::WBP_DungeonInfo_C_SetupEvents Parms{};

	Parms.StageModel = StageModel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DungeonInfo.WBP_DungeonInfo_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DungeonInfo_C", "Tick");

	Params::WBP_DungeonInfo_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DungeonInfo.WBP_DungeonInfo_C.UpdateDisplayInfo
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalDungeonInstanceModel*         DungeonInstanceModel                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_C::UpdateDisplayInfo(class UPalDungeonInstanceModel* DungeonInstanceModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DungeonInfo_C", "UpdateDisplayInfo");

	Params::WBP_DungeonInfo_C_UpdateDisplayInfo Parms{};

	Parms.DungeonInstanceModel = DungeonInstanceModel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DungeonInfo.WBP_DungeonInfo_C.UpdateDungeonDisappearRemainTime
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_DungeonInfo_C::UpdateDungeonDisappearRemainTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DungeonInfo_C", "UpdateDungeonDisappearRemainTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DungeonInfo.WBP_DungeonInfo_C.UpdateDungeonInfoByTick
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_DungeonInfo_C::UpdateDungeonInfoByTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DungeonInfo_C", "UpdateDungeonInfoByTick");

	UObject::ProcessEvent(Func, nullptr);
}

}

