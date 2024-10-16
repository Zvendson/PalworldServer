#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_Status_CollectItem_classes.hpp"
#include "PalSDK/BP_Status_CollectItem_parameters.hpp"


namespace PalSDK
{

// Function BP_Status_CollectItem.BP_Status_CollectItem_C.AddItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalStaticItemIdAndNum           ItemInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_Status_CollectItem_C::AddItem(const struct FPalStaticItemIdAndNum& ItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_CollectItem_C", "AddItem");

	Params::BP_Status_CollectItem_C_AddItem Parms{};

	Parms.ItemInfo = std::move(ItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_CollectItem.BP_Status_CollectItem_C.AddLog_UseSkill
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_Status_CollectItem_C::AddLog_UseSkill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_CollectItem_C", "AddLog_UseSkill");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_CollectItem.BP_Status_CollectItem_C.AddLog_UseSkillInBaseCamp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_Status_CollectItem_C::AddLog_UseSkillInBaseCamp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_CollectItem_C", "AddLog_UseSkillInBaseCamp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_CollectItem.BP_Status_CollectItem_C.CreateLotteryTable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFPassiveSkillCollectItemLotteryData>Result                                                 (Parm, OutParm)

void UBP_Status_CollectItem_C::CreateLotteryTable(TArray<struct FFPassiveSkillCollectItemLotteryData>* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_CollectItem_C", "CreateLotteryTable");

	Params::BP_Status_CollectItem_C_CreateLotteryTable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);
}


// Function BP_Status_CollectItem.BP_Status_CollectItem_C.ExecuteUbergraph_BP_Status_CollectItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_CollectItem_C::ExecuteUbergraph_BP_Status_CollectItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_CollectItem_C", "ExecuteUbergraph_BP_Status_CollectItem");

	Params::BP_Status_CollectItem_C_ExecuteUbergraph_BP_Status_CollectItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_CollectItem.BP_Status_CollectItem_C.Get Base Camp Action Class
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                           Class_0                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Status_CollectItem_C::Get_Base_Camp_Action_Class(class UClass** Class_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_CollectItem_C", "Get Base Camp Action Class");

	Params::BP_Status_CollectItem_C_Get_Base_Camp_Action_Class Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Class_0 != nullptr)
		*Class_0 = Parms.Class_0;
}


// Function BP_Status_CollectItem.BP_Status_CollectItem_C.Get Lottery Index
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LotteryValue                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Index_0                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_CollectItem_C::Get_Lottery_Index(int32 LotteryValue, int32* Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_CollectItem_C", "Get Lottery Index");

	Params::BP_Status_CollectItem_C_Get_Lottery_Index Parms{};

	Parms.LotteryValue = LotteryValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index_0 != nullptr)
		*Index_0 = Parms.Index_0;
}


// Function BP_Status_CollectItem.BP_Status_CollectItem_C.GetLotteryDataTable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UDataTable*                       DataTable                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Status_CollectItem_C::GetLotteryDataTable(class UDataTable** DataTable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_CollectItem_C", "GetLotteryDataTable");

	Params::BP_Status_CollectItem_C_GetLotteryDataTable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (DataTable != nullptr)
		*DataTable = Parms.DataTable;
}


// Function BP_Status_CollectItem.BP_Status_CollectItem_C.GetRandVal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Max                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RandVal                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_CollectItem_C::GetRandVal(int32 Max, int32* RandVal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_CollectItem_C", "GetRandVal");

	Params::BP_Status_CollectItem_C_GetRandVal Parms{};

	Parms.Max = Max;

	UObject::ProcessEvent(Func, &Parms);

	if (RandVal != nullptr)
		*RandVal = Parms.RandVal;
}


// Function BP_Status_CollectItem.BP_Status_CollectItem_C.GetRank
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Rank                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_CollectItem_C::GetRank(int32* Rank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_CollectItem_C", "GetRank");

	Params::BP_Status_CollectItem_C_GetRank Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Rank != nullptr)
		*Rank = Parms.Rank;
}


// Function BP_Status_CollectItem.BP_Status_CollectItem_C.Is Actor Active
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsActive                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_CollectItem_C::Is_Actor_Active(bool* IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_CollectItem_C", "Is Actor Active");

	Params::BP_Status_CollectItem_C_Is_Actor_Active Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsActive != nullptr)
		*IsActive = Parms.IsActive;
}


// Function BP_Status_CollectItem.BP_Status_CollectItem_C.IsActorDead
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsDead                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_CollectItem_C::IsActorDead(bool* IsDead)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_CollectItem_C", "IsActorDead");

	Params::BP_Status_CollectItem_C_IsActorDead Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsDead != nullptr)
		*IsDead = Parms.IsDead;
}


// Function BP_Status_CollectItem.BP_Status_CollectItem_C.LotteryItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalStaticItemIdAndNum           ItemInfo                                               (Parm, OutParm, NoDestructor)

void UBP_Status_CollectItem_C::LotteryItem(struct FPalStaticItemIdAndNum* ItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_CollectItem_C", "LotteryItem");

	Params::BP_Status_CollectItem_C_LotteryItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ItemInfo != nullptr)
		*ItemInfo = std::move(Parms.ItemInfo);
}


// Function BP_Status_CollectItem.BP_Status_CollectItem_C.Observe AIAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_Status_CollectItem_C::Observe_AIAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_CollectItem_C", "Observe AIAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_CollectItem.BP_Status_CollectItem_C.OnAddItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalItemOperationResult                 Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_CollectItem_C::OnAddItem(EPalItemOperationResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_CollectItem_C", "OnAddItem");

	Params::BP_Status_CollectItem_C_OnAddItem Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_CollectItem.BP_Status_CollectItem_C.OnBeginStatus
// (Event, Public, BlueprintEvent)

void UBP_Status_CollectItem_C::OnBeginStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_CollectItem_C", "OnBeginStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_CollectItem.BP_Status_CollectItem_C.OnBreakStatus
// (Event, Public, BlueprintEvent)

void UBP_Status_CollectItem_C::OnBreakStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_CollectItem_C", "OnBreakStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_CollectItem.BP_Status_CollectItem_C.OnEndStatus
// (Event, Public, BlueprintEvent)

void UBP_Status_CollectItem_C::OnEndStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_CollectItem_C", "OnEndStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_CollectItem.BP_Status_CollectItem_C.PlayAction_SpawnItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalStaticItemIdAndNum           AddItemInfo_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_Status_CollectItem_C::PlayAction_SpawnItem(const struct FPalStaticItemIdAndNum& AddItemInfo_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_CollectItem_C", "PlayAction_SpawnItem");

	Params::BP_Status_CollectItem_C_PlayAction_SpawnItem Parms{};

	Parms.AddItemInfo_0 = std::move(AddItemInfo_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_CollectItem.BP_Status_CollectItem_C.ResetElapsedTime
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Status_CollectItem_C::ResetElapsedTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_CollectItem_C", "ResetElapsedTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_CollectItem.BP_Status_CollectItem_C.SetCollectItemTime
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Status_CollectItem_C::SetCollectItemTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_CollectItem_C", "SetCollectItemTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_CollectItem.BP_Status_CollectItem_C.SetPause
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Pause                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_CollectItem_C::SetPause(bool Pause)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_CollectItem_C", "SetPause");

	Params::BP_Status_CollectItem_C_SetPause Parms{};

	Parms.Pause = Pause;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_CollectItem.BP_Status_CollectItem_C.TickStatus
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_CollectItem_C::TickStatus(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_CollectItem_C", "TickStatus");

	Params::BP_Status_CollectItem_C_TickStatus Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_CollectItem.BP_Status_CollectItem_C.UpdateSkill
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_CollectItem_C::UpdateSkill(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_CollectItem_C", "UpdateSkill");

	Params::BP_Status_CollectItem_C_UpdateSkill Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_CollectItem.BP_Status_CollectItem_C.Get Name Text Id
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                             SkillNameTextId                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_CollectItem_C::Get_Name_Text_Id(class FName* SkillNameTextId) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_CollectItem_C", "Get Name Text Id");

	Params::BP_Status_CollectItem_C_Get_Name_Text_Id Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SkillNameTextId != nullptr)
		*SkillNameTextId = Parms.SkillNameTextId;
}

}

