#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_DungeonInfo_FixedDungeon_classes.hpp"
#include "PalSDK/WBP_DungeonInfo_FixedDungeon_parameters.hpp"


namespace PalSDK
{

// Function WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C.ExecuteUbergraph_WBP_DungeonInfo_FixedDungeon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_FixedDungeon_C::ExecuteUbergraph_WBP_DungeonInfo_FixedDungeon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DungeonInfo_FixedDungeon_C", "ExecuteUbergraph_WBP_DungeonInfo_FixedDungeon");

	Params::WBP_DungeonInfo_FixedDungeon_C_ExecuteUbergraph_WBP_DungeonInfo_FixedDungeon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C.Set Dungeon Level
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalDungeonInstanceModel*         DungeonInstanceModel                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_FixedDungeon_C::Set_Dungeon_Level(class UPalDungeonInstanceModel* DungeonInstanceModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DungeonInfo_FixedDungeon_C", "Set Dungeon Level");

	Params::WBP_DungeonInfo_FixedDungeon_C_Set_Dungeon_Level Parms{};

	Parms.DungeonInstanceModel = DungeonInstanceModel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C.SetBossRespawnTimeAt
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalDungeonInstanceModel*         DungeonInstanceModel                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_FixedDungeon_C::SetBossRespawnTimeAt(class UPalDungeonInstanceModel* DungeonInstanceModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DungeonInfo_FixedDungeon_C", "SetBossRespawnTimeAt");

	Params::WBP_DungeonInfo_FixedDungeon_C_SetBossRespawnTimeAt Parms{};

	Parms.DungeonInstanceModel = DungeonInstanceModel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C.SetDungeonBossSpawned
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalDungeonInstanceModel*         DungeonInstanceModel                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_FixedDungeon_C::SetDungeonBossSpawned(class UPalDungeonInstanceModel* DungeonInstanceModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DungeonInfo_FixedDungeon_C", "SetDungeonBossSpawned");

	Params::WBP_DungeonInfo_FixedDungeon_C_SetDungeonBossSpawned Parms{};

	Parms.DungeonInstanceModel = DungeonInstanceModel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C.SetDungeonName
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalDungeonInstanceModel*         DungeonInstanceModel                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_FixedDungeon_C::SetDungeonName(class UPalDungeonInstanceModel* DungeonInstanceModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DungeonInfo_FixedDungeon_C", "SetDungeonName");

	Params::WBP_DungeonInfo_FixedDungeon_C_SetDungeonName Parms{};

	Parms.DungeonInstanceModel = DungeonInstanceModel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C.Setup by Stage Model
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalStageModelDungeon*            InStageModel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_FixedDungeon_C::Setup_by_Stage_Model(class UPalStageModelDungeon* InStageModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DungeonInfo_FixedDungeon_C", "Setup by Stage Model");

	Params::WBP_DungeonInfo_FixedDungeon_C_Setup_by_Stage_Model Parms{};

	Parms.InStageModel = InStageModel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C.SetupEvents
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalStageModelDungeon*            StageModel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_FixedDungeon_C::SetupEvents(class UPalStageModelDungeon* StageModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DungeonInfo_FixedDungeon_C", "SetupEvents");

	Params::WBP_DungeonInfo_FixedDungeon_C_SetupEvents Parms{};

	Parms.StageModel = StageModel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_FixedDungeon_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DungeonInfo_FixedDungeon_C", "Tick");

	Params::WBP_DungeonInfo_FixedDungeon_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C.Update Display Info
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalDungeonInstanceModel*         DungeonInstanceModel                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_FixedDungeon_C::Update_Display_Info(class UPalDungeonInstanceModel* DungeonInstanceModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DungeonInfo_FixedDungeon_C", "Update Display Info");

	Params::WBP_DungeonInfo_FixedDungeon_C_Update_Display_Info Parms{};

	Parms.DungeonInstanceModel = DungeonInstanceModel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C.UpdateBossRespawnRemainTime
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_DungeonInfo_FixedDungeon_C::UpdateBossRespawnRemainTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DungeonInfo_FixedDungeon_C", "UpdateBossRespawnRemainTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C.UpdateDungeonInfoByTick
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_DungeonInfo_FixedDungeon_C::UpdateDungeonInfoByTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DungeonInfo_FixedDungeon_C", "UpdateDungeonInfoByTick");

	UObject::ProcessEvent(Func, nullptr);
}

}

