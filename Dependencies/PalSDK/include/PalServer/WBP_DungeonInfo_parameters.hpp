#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "SlateCore_structs.hpp"


namespace PalServer::Params
{

// Function WBP_DungeonInfo.WBP_DungeonInfo_C.ExecuteUbergraph_WBP_DungeonInfo
// 0x0050 (0x0050 - 0x0000)
struct WBP_DungeonInfo_C_ExecuteUbergraph_WBP_DungeonInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_DungeonInfo_C_ExecuteUbergraph_WBP_DungeonInfo) == 0x000008, "Wrong alignment on WBP_DungeonInfo_C_ExecuteUbergraph_WBP_DungeonInfo");
static_assert(sizeof(WBP_DungeonInfo_C_ExecuteUbergraph_WBP_DungeonInfo) == 0x000050, "Wrong size on WBP_DungeonInfo_C_ExecuteUbergraph_WBP_DungeonInfo");
static_assert(offsetof(WBP_DungeonInfo_C_ExecuteUbergraph_WBP_DungeonInfo, EntryPoint) == 0x000000, "Member 'WBP_DungeonInfo_C_ExecuteUbergraph_WBP_DungeonInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_DungeonInfo_C_ExecuteUbergraph_WBP_DungeonInfo, K2Node_Event_MyGeometry) == 0x000008, "Member 'WBP_DungeonInfo_C_ExecuteUbergraph_WBP_DungeonInfo::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_DungeonInfo_C_ExecuteUbergraph_WBP_DungeonInfo, K2Node_Event_InDeltaTime) == 0x000048, "Member 'WBP_DungeonInfo_C_ExecuteUbergraph_WBP_DungeonInfo::K2Node_Event_InDeltaTime' has a wrong offset!");

// Function WBP_DungeonInfo.WBP_DungeonInfo_C.SetDungeonBossSpawned
// 0x0018 (0x0018 - 0x0000)
struct WBP_DungeonInfo_C_SetDungeonBossSpawned final
{
public:
	class UPalDungeonInstanceModel*               DungeonInstanceModel;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDungeonInstanceModel*               DungeonInstanceModel_0;                            // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalDungeonInstanceBossState                  CallFunc_GetBossState_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_DungeonInfo_C_SetDungeonBossSpawned) == 0x000008, "Wrong alignment on WBP_DungeonInfo_C_SetDungeonBossSpawned");
static_assert(sizeof(WBP_DungeonInfo_C_SetDungeonBossSpawned) == 0x000018, "Wrong size on WBP_DungeonInfo_C_SetDungeonBossSpawned");
static_assert(offsetof(WBP_DungeonInfo_C_SetDungeonBossSpawned, DungeonInstanceModel) == 0x000000, "Member 'WBP_DungeonInfo_C_SetDungeonBossSpawned::DungeonInstanceModel' has a wrong offset!");
static_assert(offsetof(WBP_DungeonInfo_C_SetDungeonBossSpawned, DungeonInstanceModel_0) == 0x000008, "Member 'WBP_DungeonInfo_C_SetDungeonBossSpawned::DungeonInstanceModel_0' has a wrong offset!");
static_assert(offsetof(WBP_DungeonInfo_C_SetDungeonBossSpawned, CallFunc_GetBossState_ReturnValue) == 0x000010, "Member 'WBP_DungeonInfo_C_SetDungeonBossSpawned::CallFunc_GetBossState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DungeonInfo_C_SetDungeonBossSpawned, K2Node_SwitchEnum_CmpSuccess) == 0x000011, "Member 'WBP_DungeonInfo_C_SetDungeonBossSpawned::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WBP_DungeonInfo.WBP_DungeonInfo_C.SetDungeonDisappearTimeAt
// 0x0010 (0x0010 - 0x0000)
struct WBP_DungeonInfo_C_SetDungeonDisappearTimeAt final
{
public:
	class UPalDungeonInstanceModel*               DungeonInstanceModel;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameDateTime                          CallFunc_GetDisappearTimeAt_ReturnValue;           // 0x0008(0x0008)(ConstParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_DungeonInfo_C_SetDungeonDisappearTimeAt) == 0x000008, "Wrong alignment on WBP_DungeonInfo_C_SetDungeonDisappearTimeAt");
static_assert(sizeof(WBP_DungeonInfo_C_SetDungeonDisappearTimeAt) == 0x000010, "Wrong size on WBP_DungeonInfo_C_SetDungeonDisappearTimeAt");
static_assert(offsetof(WBP_DungeonInfo_C_SetDungeonDisappearTimeAt, DungeonInstanceModel) == 0x000000, "Member 'WBP_DungeonInfo_C_SetDungeonDisappearTimeAt::DungeonInstanceModel' has a wrong offset!");
static_assert(offsetof(WBP_DungeonInfo_C_SetDungeonDisappearTimeAt, CallFunc_GetDisappearTimeAt_ReturnValue) == 0x000008, "Member 'WBP_DungeonInfo_C_SetDungeonDisappearTimeAt::CallFunc_GetDisappearTimeAt_ReturnValue' has a wrong offset!");

// Function WBP_DungeonInfo.WBP_DungeonInfo_C.SetDungeonLevel
// 0x0030 (0x0030 - 0x0000)
struct WBP_DungeonInfo_C_SetDungeonLevel final
{
public:
	class UPalDungeonInstanceModel*               DungeonInstanceModel;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDungeonInstanceModel*               DungeonInstanceModel_0;                            // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevel_ReturnValue;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
};
static_assert(alignof(WBP_DungeonInfo_C_SetDungeonLevel) == 0x000008, "Wrong alignment on WBP_DungeonInfo_C_SetDungeonLevel");
static_assert(sizeof(WBP_DungeonInfo_C_SetDungeonLevel) == 0x000030, "Wrong size on WBP_DungeonInfo_C_SetDungeonLevel");
static_assert(offsetof(WBP_DungeonInfo_C_SetDungeonLevel, DungeonInstanceModel) == 0x000000, "Member 'WBP_DungeonInfo_C_SetDungeonLevel::DungeonInstanceModel' has a wrong offset!");
static_assert(offsetof(WBP_DungeonInfo_C_SetDungeonLevel, DungeonInstanceModel_0) == 0x000008, "Member 'WBP_DungeonInfo_C_SetDungeonLevel::DungeonInstanceModel_0' has a wrong offset!");
static_assert(offsetof(WBP_DungeonInfo_C_SetDungeonLevel, CallFunc_GetLevel_ReturnValue) == 0x000010, "Member 'WBP_DungeonInfo_C_SetDungeonLevel::CallFunc_GetLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DungeonInfo_C_SetDungeonLevel, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'WBP_DungeonInfo_C_SetDungeonLevel::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function WBP_DungeonInfo.WBP_DungeonInfo_C.SetDungeonName
// 0x0028 (0x0028 - 0x0000)
struct WBP_DungeonInfo_C_SetDungeonName final
{
public:
	class UPalDungeonInstanceModel*               DungeonInstanceModel;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDungeonInstanceModel*               DungeonInstanceModel_0;                            // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetDungeonNameText_ReturnValue;           // 0x0010(0x0018)()
};
static_assert(alignof(WBP_DungeonInfo_C_SetDungeonName) == 0x000008, "Wrong alignment on WBP_DungeonInfo_C_SetDungeonName");
static_assert(sizeof(WBP_DungeonInfo_C_SetDungeonName) == 0x000028, "Wrong size on WBP_DungeonInfo_C_SetDungeonName");
static_assert(offsetof(WBP_DungeonInfo_C_SetDungeonName, DungeonInstanceModel) == 0x000000, "Member 'WBP_DungeonInfo_C_SetDungeonName::DungeonInstanceModel' has a wrong offset!");
static_assert(offsetof(WBP_DungeonInfo_C_SetDungeonName, DungeonInstanceModel_0) == 0x000008, "Member 'WBP_DungeonInfo_C_SetDungeonName::DungeonInstanceModel_0' has a wrong offset!");
static_assert(offsetof(WBP_DungeonInfo_C_SetDungeonName, CallFunc_GetDungeonNameText_ReturnValue) == 0x000010, "Member 'WBP_DungeonInfo_C_SetDungeonName::CallFunc_GetDungeonNameText_ReturnValue' has a wrong offset!");

// Function WBP_DungeonInfo.WBP_DungeonInfo_C.Setup by Stage Model
// 0x0028 (0x0028 - 0x0000)
struct WBP_DungeonInfo_C_Setup_by_Stage_Model final
{
public:
	class UPalStageModelDungeon*                  InStageModel;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDungeonInstanceModel*               InstanceModel;                                     // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDungeonInstanceModel*               CallFunc_GetInstanceModel_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalDungeonInstanceModel* Self)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_DungeonInfo_C_Setup_by_Stage_Model) == 0x000008, "Wrong alignment on WBP_DungeonInfo_C_Setup_by_Stage_Model");
static_assert(sizeof(WBP_DungeonInfo_C_Setup_by_Stage_Model) == 0x000028, "Wrong size on WBP_DungeonInfo_C_Setup_by_Stage_Model");
static_assert(offsetof(WBP_DungeonInfo_C_Setup_by_Stage_Model, InStageModel) == 0x000000, "Member 'WBP_DungeonInfo_C_Setup_by_Stage_Model::InStageModel' has a wrong offset!");
static_assert(offsetof(WBP_DungeonInfo_C_Setup_by_Stage_Model, InstanceModel) == 0x000008, "Member 'WBP_DungeonInfo_C_Setup_by_Stage_Model::InstanceModel' has a wrong offset!");
static_assert(offsetof(WBP_DungeonInfo_C_Setup_by_Stage_Model, CallFunc_GetInstanceModel_ReturnValue) == 0x000010, "Member 'WBP_DungeonInfo_C_Setup_by_Stage_Model::CallFunc_GetInstanceModel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DungeonInfo_C_Setup_by_Stage_Model, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'WBP_DungeonInfo_C_Setup_by_Stage_Model::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function WBP_DungeonInfo.WBP_DungeonInfo_C.SetupEvents
// 0x0028 (0x0028 - 0x0000)
struct WBP_DungeonInfo_C_SetupEvents final
{
public:
	class UPalStageModelDungeon*                  StageModel;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDungeonInstanceModel*               InstanceModel;                                     // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalDungeonInstanceModel* Self)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDungeonInstanceModel*               CallFunc_GetInstanceModel_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_DungeonInfo_C_SetupEvents) == 0x000008, "Wrong alignment on WBP_DungeonInfo_C_SetupEvents");
static_assert(sizeof(WBP_DungeonInfo_C_SetupEvents) == 0x000028, "Wrong size on WBP_DungeonInfo_C_SetupEvents");
static_assert(offsetof(WBP_DungeonInfo_C_SetupEvents, StageModel) == 0x000000, "Member 'WBP_DungeonInfo_C_SetupEvents::StageModel' has a wrong offset!");
static_assert(offsetof(WBP_DungeonInfo_C_SetupEvents, InstanceModel) == 0x000008, "Member 'WBP_DungeonInfo_C_SetupEvents::InstanceModel' has a wrong offset!");
static_assert(offsetof(WBP_DungeonInfo_C_SetupEvents, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_DungeonInfo_C_SetupEvents::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_DungeonInfo_C_SetupEvents, CallFunc_GetInstanceModel_ReturnValue) == 0x000020, "Member 'WBP_DungeonInfo_C_SetupEvents::CallFunc_GetInstanceModel_ReturnValue' has a wrong offset!");

// Function WBP_DungeonInfo.WBP_DungeonInfo_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_DungeonInfo_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_DungeonInfo_C_Tick) == 0x000008, "Wrong alignment on WBP_DungeonInfo_C_Tick");
static_assert(sizeof(WBP_DungeonInfo_C_Tick) == 0x000048, "Wrong size on WBP_DungeonInfo_C_Tick");
static_assert(offsetof(WBP_DungeonInfo_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_DungeonInfo_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_DungeonInfo_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_DungeonInfo_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_DungeonInfo.WBP_DungeonInfo_C.UpdateDisplayInfo
// 0x0008 (0x0008 - 0x0000)
struct WBP_DungeonInfo_C_UpdateDisplayInfo final
{
public:
	class UPalDungeonInstanceModel*               DungeonInstanceModel;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_DungeonInfo_C_UpdateDisplayInfo) == 0x000008, "Wrong alignment on WBP_DungeonInfo_C_UpdateDisplayInfo");
static_assert(sizeof(WBP_DungeonInfo_C_UpdateDisplayInfo) == 0x000008, "Wrong size on WBP_DungeonInfo_C_UpdateDisplayInfo");
static_assert(offsetof(WBP_DungeonInfo_C_UpdateDisplayInfo, DungeonInstanceModel) == 0x000000, "Member 'WBP_DungeonInfo_C_UpdateDisplayInfo::DungeonInstanceModel' has a wrong offset!");

// Function WBP_DungeonInfo.WBP_DungeonInfo_C.UpdateDungeonDisappearRemainTime
// 0x0060 (0x0060 - 0x0000)
struct WBP_DungeonInfo_C_UpdateDungeonDisappearRemainTime final
{
public:
	class ULocalPlayer*                           CallFunc_GetOwningLocalPlayer_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_CalcRemainSecondsBy_ReturnValue;          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_PalTimeSecondsToString_ReturnValue;       // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	class FText                                   CallFunc_SelectText_ReturnValue;                   // 0x0040(0x0018)()
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_DungeonInfo_C_UpdateDungeonDisappearRemainTime) == 0x000008, "Wrong alignment on WBP_DungeonInfo_C_UpdateDungeonDisappearRemainTime");
static_assert(sizeof(WBP_DungeonInfo_C_UpdateDungeonDisappearRemainTime) == 0x000060, "Wrong size on WBP_DungeonInfo_C_UpdateDungeonDisappearRemainTime");
static_assert(offsetof(WBP_DungeonInfo_C_UpdateDungeonDisappearRemainTime, CallFunc_GetOwningLocalPlayer_ReturnValue) == 0x000000, "Member 'WBP_DungeonInfo_C_UpdateDungeonDisappearRemainTime::CallFunc_GetOwningLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DungeonInfo_C_UpdateDungeonDisappearRemainTime, CallFunc_CalcRemainSecondsBy_ReturnValue) == 0x000008, "Member 'WBP_DungeonInfo_C_UpdateDungeonDisappearRemainTime::CallFunc_CalcRemainSecondsBy_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DungeonInfo_C_UpdateDungeonDisappearRemainTime, CallFunc_PalTimeSecondsToString_ReturnValue) == 0x000010, "Member 'WBP_DungeonInfo_C_UpdateDungeonDisappearRemainTime::CallFunc_PalTimeSecondsToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DungeonInfo_C_UpdateDungeonDisappearRemainTime, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000020, "Member 'WBP_DungeonInfo_C_UpdateDungeonDisappearRemainTime::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DungeonInfo_C_UpdateDungeonDisappearRemainTime, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'WBP_DungeonInfo_C_UpdateDungeonDisappearRemainTime::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DungeonInfo_C_UpdateDungeonDisappearRemainTime, CallFunc_SelectText_ReturnValue) == 0x000040, "Member 'WBP_DungeonInfo_C_UpdateDungeonDisappearRemainTime::CallFunc_SelectText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DungeonInfo_C_UpdateDungeonDisappearRemainTime, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000058, "Member 'WBP_DungeonInfo_C_UpdateDungeonDisappearRemainTime::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");

}

