#include "PalServer/Basic.hpp"

#include "PalServer/WBP_IngameMenu_Task_Simple_classes.hpp"
#include "PalServer/WBP_IngameMenu_Task_Simple_parameters.hpp"


namespace PalServer
{

// Function WBP_IngameMenu_Task_Simple.WBP_IngameMenu_Task_Simple_C.AddItemInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsHideWhenZero                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                                   ItemNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                                   GaugeMaxNumBorder                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Task_Simple_C::AddItemInfo(bool IsHideWhenZero, class FName ItemId, int64 ItemNum, int64 GaugeMaxNumBorder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Simple_C", "AddItemInfo");

	Params::WBP_IngameMenu_Task_Simple_C_AddItemInfo Parms{};

	Parms.IsHideWhenZero = IsHideWhenZero;
	Parms.ItemId = ItemId;
	Parms.ItemNum = ItemNum;
	Parms.GaugeMaxNumBorder = GaugeMaxNumBorder;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_Task_Simple.WBP_IngameMenu_Task_Simple_C.AddTaslDetailText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   NowNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RequireNum                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Task_Simple_C::AddTaslDetailText(const class FText& Text, int32 NowNum, int32 RequireNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Simple_C", "AddTaslDetailText");

	Params::WBP_IngameMenu_Task_Simple_C_AddTaslDetailText Parms{};

	Parms.Text = std::move(Text);
	Parms.NowNum = NowNum;
	Parms.RequireNum = RequireNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_Task_Simple.WBP_IngameMenu_Task_Simple_C.ExecuteUbergraph_WBP_IngameMenu_Task_Simple
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Task_Simple_C::ExecuteUbergraph_WBP_IngameMenu_Task_Simple(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Simple_C", "ExecuteUbergraph_WBP_IngameMenu_Task_Simple");

	Params::WBP_IngameMenu_Task_Simple_C_ExecuteUbergraph_WBP_IngameMenu_Task_Simple Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_Task_Simple.WBP_IngameMenu_Task_Simple_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_IngameMenu_Task_Simple_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Simple_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_Task_Simple.WBP_IngameMenu_Task_Simple_C.RemoveAllItemDetail
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_Task_Simple_C::RemoveAllItemDetail()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Simple_C", "RemoveAllItemDetail");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_Task_Simple.WBP_IngameMenu_Task_Simple_C.RemoveTaskDetailText
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_Task_Simple_C::RemoveTaskDetailText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Simple_C", "RemoveTaskDetailText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_Task_Simple.WBP_IngameMenu_Task_Simple_C.Set Camp Name
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             BaseCampName                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_IngameMenu_Task_Simple_C::Set_Camp_Name(const class FText& BaseCampName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Simple_C", "Set Camp Name");

	Params::WBP_IngameMenu_Task_Simple_C_Set_Camp_Name Parms{};

	Parms.BaseCampName = std::move(BaseCampName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_Task_Simple.WBP_IngameMenu_Task_Simple_C.Set Camp Pal and Bed Num
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NowPalNum                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxPalNum                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   BedNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Task_Simple_C::Set_Camp_Pal_and_Bed_Num(int32 NowPalNum, int32 MaxPalNum, int32 BedNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Simple_C", "Set Camp Pal and Bed Num");

	Params::WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num Parms{};

	Parms.NowPalNum = NowPalNum;
	Parms.MaxPalNum = MaxPalNum;
	Parms.BedNum = BedNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_Task_Simple.WBP_IngameMenu_Task_Simple_C.Set Pal Slots
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPalIndividualCharacterSlot*>Slots                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   MaxPalNum                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Palbed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Task_Simple_C::Set_Pal_Slots(TArray<class UPalIndividualCharacterSlot*>& Slots, int32 MaxPalNum, int32 Palbed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Simple_C", "Set Pal Slots");

	Params::WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots Parms{};

	Parms.Slots = std::move(Slots);
	Parms.MaxPalNum = MaxPalNum;
	Parms.Palbed = Palbed;

	UObject::ProcessEvent(Func, &Parms);

	Slots = std::move(Parms.Slots);
}


// Function WBP_IngameMenu_Task_Simple.WBP_IngameMenu_Task_Simple_C.Set Task List
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalBaseCampTaskCheckedData      TaskCheckedData                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPalBaseCampTaskDataSet          TaskData                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_IngameMenu_Task_Simple_C::Set_Task_List(const struct FPalBaseCampTaskCheckedData& TaskCheckedData, const struct FPalBaseCampTaskDataSet& TaskData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Simple_C", "Set Task List");

	Params::WBP_IngameMenu_Task_Simple_C_Set_Task_List Parms{};

	Parms.TaskCheckedData = std::move(TaskCheckedData);
	Parms.TaskData = std::move(TaskData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_Task_Simple.WBP_IngameMenu_Task_Simple_C.SetEnableWorkerBattleTypeInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Task_Simple_C::SetEnableWorkerBattleTypeInfo(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Simple_C", "SetEnableWorkerBattleTypeInfo");

	Params::WBP_IngameMenu_Task_Simple_C_SetEnableWorkerBattleTypeInfo Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_Task_Simple.WBP_IngameMenu_Task_Simple_C.SetEnableWorkHardInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Task_Simple_C::SetEnableWorkHardInfo(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Simple_C", "SetEnableWorkHardInfo");

	Params::WBP_IngameMenu_Task_Simple_C_SetEnableWorkHardInfo Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_Task_Simple.WBP_IngameMenu_Task_Simple_C.SetRemainDIsplayPalNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Task_Simple_C::SetRemainDIsplayPalNum(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Simple_C", "SetRemainDIsplayPalNum");

	Params::WBP_IngameMenu_Task_Simple_C_SetRemainDIsplayPalNum Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_Task_Simple.WBP_IngameMenu_Task_Simple_C.SetRemainTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  RemainTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Task_Simple_C::SetRemainTimer(double RemainTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Simple_C", "SetRemainTimer");

	Params::WBP_IngameMenu_Task_Simple_C_SetRemainTimer Parms{};

	Parms.RemainTime = RemainTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_Task_Simple.WBP_IngameMenu_Task_Simple_C.SetVisibilityTaskDetail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        NewVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Task_Simple_C::SetVisibilityTaskDetail(ESlateVisibility NewVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Simple_C", "SetVisibilityTaskDetail");

	Params::WBP_IngameMenu_Task_Simple_C_SetVisibilityTaskDetail Parms{};

	Parms.NewVisibility = NewVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_Task_Simple.WBP_IngameMenu_Task_Simple_C.SetWorkerBattleType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalBaseCampWorkerDirectionBattleType   BattleType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Task_Simple_C::SetWorkerBattleType(EPalBaseCampWorkerDirectionBattleType BattleType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Simple_C", "SetWorkerBattleType");

	Params::WBP_IngameMenu_Task_Simple_C_SetWorkerBattleType Parms{};

	Parms.BattleType = BattleType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_Task_Simple.WBP_IngameMenu_Task_Simple_C.SetWorkHardType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalBaseCampPassiveEffectWorkHardType   WorkHardType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Task_Simple_C::SetWorkHardType(EPalBaseCampPassiveEffectWorkHardType WorkHardType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Simple_C", "SetWorkHardType");

	Params::WBP_IngameMenu_Task_Simple_C_SetWorkHardType Parms{};

	Parms.WorkHardType = WorkHardType;

	UObject::ProcessEvent(Func, &Parms);
}

}

