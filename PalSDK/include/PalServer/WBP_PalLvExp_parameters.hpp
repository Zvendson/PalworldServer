#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function WBP_PalLvExp.WBP_PalLvExp_C.AnmEvent_NewMove
// 0x0001 (0x0001 - 0x0000)
struct WBP_PalLvExp_C_AnmEvent_NewMove final
{
public:
	EPalWazaID                                    NewWazaID;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLvExp_C_AnmEvent_NewMove) == 0x000001, "Wrong alignment on WBP_PalLvExp_C_AnmEvent_NewMove");
static_assert(sizeof(WBP_PalLvExp_C_AnmEvent_NewMove) == 0x000001, "Wrong size on WBP_PalLvExp_C_AnmEvent_NewMove");
static_assert(offsetof(WBP_PalLvExp_C_AnmEvent_NewMove, NewWazaID) == 0x000000, "Member 'WBP_PalLvExp_C_AnmEvent_NewMove::NewWazaID' has a wrong offset!");

// Function WBP_PalLvExp.WBP_PalLvExp_C.BindFromHandle
// 0x0028 (0x0028 - 0x0000)
struct WBP_PalLvExp_C_BindFromHandle final
{
public:
	class UPalIndividualCharacterHandle*          TargetHandle;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCharacterID_ReturnValue;               // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevel_ReturnValue;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLvExp_C_BindFromHandle) == 0x000008, "Wrong alignment on WBP_PalLvExp_C_BindFromHandle");
static_assert(sizeof(WBP_PalLvExp_C_BindFromHandle) == 0x000028, "Wrong size on WBP_PalLvExp_C_BindFromHandle");
static_assert(offsetof(WBP_PalLvExp_C_BindFromHandle, TargetHandle) == 0x000000, "Member 'WBP_PalLvExp_C_BindFromHandle::TargetHandle' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_BindFromHandle, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_PalLvExp_C_BindFromHandle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_BindFromHandle, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000010, "Member 'WBP_PalLvExp_C_BindFromHandle::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_BindFromHandle, CallFunc_IsValid_ReturnValue_1) == 0x000018, "Member 'WBP_PalLvExp_C_BindFromHandle::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_BindFromHandle, CallFunc_GetCharacterID_ReturnValue) == 0x00001C, "Member 'WBP_PalLvExp_C_BindFromHandle::CallFunc_GetCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_BindFromHandle, CallFunc_GetLevel_ReturnValue) == 0x000024, "Member 'WBP_PalLvExp_C_BindFromHandle::CallFunc_GetLevel_ReturnValue' has a wrong offset!");

// Function WBP_PalLvExp.WBP_PalLvExp_C.BindFromSlot
// 0x0020 (0x0020 - 0x0000)
struct WBP_PalLvExp_C_BindFromSlot final
{
public:
	class UPalIndividualCharacterSlot*            TargetSlot;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UPalIndividualCharacterSlot* Slot, class UPalIndividualCharacterHandle* LastHandle)> K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLvExp_C_BindFromSlot) == 0x000008, "Wrong alignment on WBP_PalLvExp_C_BindFromSlot");
static_assert(sizeof(WBP_PalLvExp_C_BindFromSlot) == 0x000020, "Wrong size on WBP_PalLvExp_C_BindFromSlot");
static_assert(offsetof(WBP_PalLvExp_C_BindFromSlot, TargetSlot) == 0x000000, "Member 'WBP_PalLvExp_C_BindFromSlot::TargetSlot' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_BindFromSlot, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_PalLvExp_C_BindFromSlot::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_BindFromSlot, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'WBP_PalLvExp_C_BindFromSlot::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function WBP_PalLvExp.WBP_PalLvExp_C.ExecuteUbergraph_WBP_PalLvExp
// 0x0138 (0x0138 - 0x0000)
struct WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NewLevel)>               K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalWazaID                                    K2Node_CustomEvent_NewWazaID;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetWazaName_outName;                      // 0x0038(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0050(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00A0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x00B0(0x0018)()
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text_1;        // 0x00C8(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00E0(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_4;              // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int64 AddExp, int64 OldExp, double NowExpRate)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0110(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_NewMoveAnimeDelay_ImplicitCast; // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_LevelUpAnimeDelay_ImplicitCast; // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_closeAnimeDelay_ImplicitCast;   // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp) == 0x000008, "Wrong alignment on WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp");
static_assert(sizeof(WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp) == 0x000138, "Wrong size on WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp");
static_assert(offsetof(WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp, EntryPoint) == 0x000000, "Member 'WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp, CallFunc_PlayAnimation_ReturnValue_2) == 0x000028, "Member 'WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp, K2Node_CustomEvent_NewWazaID) == 0x000030, "Member 'WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp::K2Node_CustomEvent_NewWazaID' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp, CallFunc_GetWazaName_outName) == 0x000038, "Member 'WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp::CallFunc_GetWazaName_outName' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp, K2Node_MakeStruct_FormatArgumentData) == 0x000050, "Member 'WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp, K2Node_MakeArray_Array) == 0x0000A0, "Member 'WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp, CallFunc_GetLocalizedTextFromHandle_Text) == 0x0000B0, "Member 'WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp, CallFunc_GetLocalizedTextFromHandle_Text_1) == 0x0000C8, "Member 'WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp::CallFunc_GetLocalizedTextFromHandle_Text_1' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp, CallFunc_Format_ReturnValue) == 0x0000E0, "Member 'WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp, CallFunc_PlayAnimation_ReturnValue_3) == 0x0000F8, "Member 'WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp, CallFunc_GetGameSetting_ReturnValue) == 0x000100, "Member 'WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp, CallFunc_PlayAnimation_ReturnValue_4) == 0x000108, "Member 'WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp::CallFunc_PlayAnimation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp, K2Node_CreateDelegate_OutputDelegate_1) == 0x000110, "Member 'WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp, K2Node_VariableSet_NewMoveAnimeDelay_ImplicitCast) == 0x000120, "Member 'WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp::K2Node_VariableSet_NewMoveAnimeDelay_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp, K2Node_VariableSet_LevelUpAnimeDelay_ImplicitCast) == 0x000128, "Member 'WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp::K2Node_VariableSet_LevelUpAnimeDelay_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp, K2Node_VariableSet_closeAnimeDelay_ImplicitCast) == 0x000130, "Member 'WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp::K2Node_VariableSet_closeAnimeDelay_ImplicitCast' has a wrong offset!");

// Function WBP_PalLvExp.WBP_PalLvExp_C.On Update Exp Binded
// 0x0030 (0x0030 - 0x0000)
struct WBP_PalLvExp_C_On_Update_Exp_Binded final
{
public:
	int64                                         AddExp;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         OldExp;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NowExpRate;                                        // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Add_Int64Int64_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLvExp_C_On_Update_Exp_Binded) == 0x000008, "Wrong alignment on WBP_PalLvExp_C_On_Update_Exp_Binded");
static_assert(sizeof(WBP_PalLvExp_C_On_Update_Exp_Binded) == 0x000030, "Wrong size on WBP_PalLvExp_C_On_Update_Exp_Binded");
static_assert(offsetof(WBP_PalLvExp_C_On_Update_Exp_Binded, AddExp) == 0x000000, "Member 'WBP_PalLvExp_C_On_Update_Exp_Binded::AddExp' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_On_Update_Exp_Binded, OldExp) == 0x000008, "Member 'WBP_PalLvExp_C_On_Update_Exp_Binded::OldExp' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_On_Update_Exp_Binded, NowExpRate) == 0x000010, "Member 'WBP_PalLvExp_C_On_Update_Exp_Binded::NowExpRate' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_On_Update_Exp_Binded, CallFunc_Add_Int64Int64_ReturnValue) == 0x000018, "Member 'WBP_PalLvExp_C_On_Update_Exp_Binded::CallFunc_Add_Int64Int64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_On_Update_Exp_Binded, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000020, "Member 'WBP_PalLvExp_C_On_Update_Exp_Binded::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_On_Update_Exp_Binded, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'WBP_PalLvExp_C_On_Update_Exp_Binded::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WBP_PalLvExp.WBP_PalLvExp_C.On Update Level Binded
// 0x0080 (0x0080 - 0x0000)
struct WBP_PalLvExp_C_On_Update_Level_Binded final
{
public:
	int32                                         NewLevel;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalWazaDatabase*                       CallFunc_GetWazaDatabase_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EPalWazaID, int32>                       CallFunc_GetMasterrableWaza_BetweenLevel_OutMap;   // 0x0018(0x0050)()
	TArray<EPalWazaID>                            CallFunc_Map_Keys_Keys;                            // 0x0068(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsExistMasterrableWaza_BetweenLevel_ReturnValue; // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLvExp_C_On_Update_Level_Binded) == 0x000008, "Wrong alignment on WBP_PalLvExp_C_On_Update_Level_Binded");
static_assert(sizeof(WBP_PalLvExp_C_On_Update_Level_Binded) == 0x000080, "Wrong size on WBP_PalLvExp_C_On_Update_Level_Binded");
static_assert(offsetof(WBP_PalLvExp_C_On_Update_Level_Binded, NewLevel) == 0x000000, "Member 'WBP_PalLvExp_C_On_Update_Level_Binded::NewLevel' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_On_Update_Level_Binded, CallFunc_GetWazaDatabase_ReturnValue) == 0x000008, "Member 'WBP_PalLvExp_C_On_Update_Level_Binded::CallFunc_GetWazaDatabase_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_On_Update_Level_Binded, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PalLvExp_C_On_Update_Level_Binded::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_On_Update_Level_Binded, CallFunc_GetMasterrableWaza_BetweenLevel_OutMap) == 0x000018, "Member 'WBP_PalLvExp_C_On_Update_Level_Binded::CallFunc_GetMasterrableWaza_BetweenLevel_OutMap' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_On_Update_Level_Binded, CallFunc_Map_Keys_Keys) == 0x000068, "Member 'WBP_PalLvExp_C_On_Update_Level_Binded::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_On_Update_Level_Binded, CallFunc_IsExistMasterrableWaza_BetweenLevel_ReturnValue) == 0x000078, "Member 'WBP_PalLvExp_C_On_Update_Level_Binded::CallFunc_IsExistMasterrableWaza_BetweenLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_On_Update_Level_Binded, CallFunc_Greater_IntInt_ReturnValue) == 0x000079, "Member 'WBP_PalLvExp_C_On_Update_Level_Binded::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_PalLvExp.WBP_PalLvExp_C.OnTriggerLevelUpAnime
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalLvExp_C_OnTriggerLevelUpAnime final
{
public:
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLvExp_C_OnTriggerLevelUpAnime) == 0x000004, "Wrong alignment on WBP_PalLvExp_C_OnTriggerLevelUpAnime");
static_assert(sizeof(WBP_PalLvExp_C_OnTriggerLevelUpAnime) == 0x000008, "Wrong size on WBP_PalLvExp_C_OnTriggerLevelUpAnime");
static_assert(offsetof(WBP_PalLvExp_C_OnTriggerLevelUpAnime, CallFunc_Array_Length_ReturnValue) == 0x000000, "Member 'WBP_PalLvExp_C_OnTriggerLevelUpAnime::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_OnTriggerLevelUpAnime, CallFunc_Greater_IntInt_ReturnValue) == 0x000004, "Member 'WBP_PalLvExp_C_OnTriggerLevelUpAnime::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_PalLvExp.WBP_PalLvExp_C.OnTriggerNewMoveAnime
// 0x0014 (0x0014 - 0x0000)
struct WBP_PalLvExp_C_OnTriggerNewMoveAnime final
{
public:
	EPalWazaID                                    CallFunc_Array_Get_Item;                           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLvExp_C_OnTriggerNewMoveAnime) == 0x000004, "Wrong alignment on WBP_PalLvExp_C_OnTriggerNewMoveAnime");
static_assert(sizeof(WBP_PalLvExp_C_OnTriggerNewMoveAnime) == 0x000014, "Wrong size on WBP_PalLvExp_C_OnTriggerNewMoveAnime");
static_assert(offsetof(WBP_PalLvExp_C_OnTriggerNewMoveAnime, CallFunc_Array_Get_Item) == 0x000000, "Member 'WBP_PalLvExp_C_OnTriggerNewMoveAnime::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_OnTriggerNewMoveAnime, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'WBP_PalLvExp_C_OnTriggerNewMoveAnime::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_OnTriggerNewMoveAnime, CallFunc_Greater_IntInt_ReturnValue) == 0x000008, "Member 'WBP_PalLvExp_C_OnTriggerNewMoveAnime::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_OnTriggerNewMoveAnime, CallFunc_Array_Length_ReturnValue_1) == 0x00000C, "Member 'WBP_PalLvExp_C_OnTriggerNewMoveAnime::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_OnTriggerNewMoveAnime, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000010, "Member 'WBP_PalLvExp_C_OnTriggerNewMoveAnime::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");

// Function WBP_PalLvExp.WBP_PalLvExp_C.OnUpdateSlot
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalLvExp_C_OnUpdateSlot final
{
public:
	class UPalIndividualCharacterSlot*            Slot_0;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          LastHandle;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLvExp_C_OnUpdateSlot) == 0x000008, "Wrong alignment on WBP_PalLvExp_C_OnUpdateSlot");
static_assert(sizeof(WBP_PalLvExp_C_OnUpdateSlot) == 0x000010, "Wrong size on WBP_PalLvExp_C_OnUpdateSlot");
static_assert(offsetof(WBP_PalLvExp_C_OnUpdateSlot, Slot_0) == 0x000000, "Member 'WBP_PalLvExp_C_OnUpdateSlot::Slot_0' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_OnUpdateSlot, LastHandle) == 0x000008, "Member 'WBP_PalLvExp_C_OnUpdateSlot::LastHandle' has a wrong offset!");

// Function WBP_PalLvExp.WBP_PalLvExp_C.Set Exp Percent
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalLvExp_C_Set_Exp_Percent final
{
public:
	double                                        Percent;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLvExp_C_Set_Exp_Percent) == 0x000008, "Wrong alignment on WBP_PalLvExp_C_Set_Exp_Percent");
static_assert(sizeof(WBP_PalLvExp_C_Set_Exp_Percent) == 0x000010, "Wrong size on WBP_PalLvExp_C_Set_Exp_Percent");
static_assert(offsetof(WBP_PalLvExp_C_Set_Exp_Percent, Percent) == 0x000000, "Member 'WBP_PalLvExp_C_Set_Exp_Percent::Percent' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_Set_Exp_Percent, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x000008, "Member 'WBP_PalLvExp_C_Set_Exp_Percent::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");

// Function WBP_PalLvExp.WBP_PalLvExp_C.Set Level
// 0x0020 (0x0020 - 0x0000)
struct WBP_PalLvExp_C_Set_Level final
{
public:
	int32                                         Level;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevel_ReturnValue;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLvExp_C_Set_Level) == 0x000008, "Wrong alignment on WBP_PalLvExp_C_Set_Level");
static_assert(sizeof(WBP_PalLvExp_C_Set_Level) == 0x000020, "Wrong size on WBP_PalLvExp_C_Set_Level");
static_assert(offsetof(WBP_PalLvExp_C_Set_Level, Level) == 0x000000, "Member 'WBP_PalLvExp_C_Set_Level::Level' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_Set_Level, CallFunc_GetBindedHandle_targetHandle) == 0x000008, "Member 'WBP_PalLvExp_C_Set_Level::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_Set_Level, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000010, "Member 'WBP_PalLvExp_C_Set_Level::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_Set_Level, CallFunc_GetLevel_ReturnValue) == 0x000018, "Member 'WBP_PalLvExp_C_Set_Level::CallFunc_GetLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_Set_Level, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'WBP_PalLvExp_C_Set_Level::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_PalLvExp.WBP_PalLvExp_C.SetAddExp
// 0x0080 (0x0080 - 0x0000)
struct WBP_PalLvExp_C_SetAddExp final
{
public:
	int64                                         AddExp;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0008(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0058(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0068(0x0018)()
};
static_assert(alignof(WBP_PalLvExp_C_SetAddExp) == 0x000008, "Wrong alignment on WBP_PalLvExp_C_SetAddExp");
static_assert(sizeof(WBP_PalLvExp_C_SetAddExp) == 0x000080, "Wrong size on WBP_PalLvExp_C_SetAddExp");
static_assert(offsetof(WBP_PalLvExp_C_SetAddExp, AddExp) == 0x000000, "Member 'WBP_PalLvExp_C_SetAddExp::AddExp' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_SetAddExp, K2Node_MakeStruct_FormatArgumentData) == 0x000008, "Member 'WBP_PalLvExp_C_SetAddExp::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_SetAddExp, K2Node_MakeArray_Array) == 0x000058, "Member 'WBP_PalLvExp_C_SetAddExp::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_SetAddExp, CallFunc_Format_ReturnValue) == 0x000068, "Member 'WBP_PalLvExp_C_SetAddExp::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_PalLvExp.WBP_PalLvExp_C.SetupCloseAnimeTimer
// 0x0020 (0x0020 - 0x0000)
struct WBP_PalLvExp_C_SetupCloseAnimeTimer final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLvExp_C_SetupCloseAnimeTimer) == 0x000008, "Wrong alignment on WBP_PalLvExp_C_SetupCloseAnimeTimer");
static_assert(sizeof(WBP_PalLvExp_C_SetupCloseAnimeTimer) == 0x000020, "Wrong size on WBP_PalLvExp_C_SetupCloseAnimeTimer");
static_assert(offsetof(WBP_PalLvExp_C_SetupCloseAnimeTimer, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_PalLvExp_C_SetupCloseAnimeTimer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_SetupCloseAnimeTimer, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000010, "Member 'WBP_PalLvExp_C_SetupCloseAnimeTimer::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_SetupCloseAnimeTimer, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000018, "Member 'WBP_PalLvExp_C_SetupCloseAnimeTimer::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

// Function WBP_PalLvExp.WBP_PalLvExp_C.SetupLevelUpAnimeTimer
// 0x0020 (0x0020 - 0x0000)
struct WBP_PalLvExp_C_SetupLevelUpAnimeTimer final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLvExp_C_SetupLevelUpAnimeTimer) == 0x000008, "Wrong alignment on WBP_PalLvExp_C_SetupLevelUpAnimeTimer");
static_assert(sizeof(WBP_PalLvExp_C_SetupLevelUpAnimeTimer) == 0x000020, "Wrong size on WBP_PalLvExp_C_SetupLevelUpAnimeTimer");
static_assert(offsetof(WBP_PalLvExp_C_SetupLevelUpAnimeTimer, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_PalLvExp_C_SetupLevelUpAnimeTimer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_SetupLevelUpAnimeTimer, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000010, "Member 'WBP_PalLvExp_C_SetupLevelUpAnimeTimer::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_SetupLevelUpAnimeTimer, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000018, "Member 'WBP_PalLvExp_C_SetupLevelUpAnimeTimer::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

// Function WBP_PalLvExp.WBP_PalLvExp_C.SetupNewMoveAnimeTimer
// 0x0020 (0x0020 - 0x0000)
struct WBP_PalLvExp_C_SetupNewMoveAnimeTimer final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLvExp_C_SetupNewMoveAnimeTimer) == 0x000008, "Wrong alignment on WBP_PalLvExp_C_SetupNewMoveAnimeTimer");
static_assert(sizeof(WBP_PalLvExp_C_SetupNewMoveAnimeTimer) == 0x000020, "Wrong size on WBP_PalLvExp_C_SetupNewMoveAnimeTimer");
static_assert(offsetof(WBP_PalLvExp_C_SetupNewMoveAnimeTimer, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_PalLvExp_C_SetupNewMoveAnimeTimer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_SetupNewMoveAnimeTimer, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000010, "Member 'WBP_PalLvExp_C_SetupNewMoveAnimeTimer::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_C_SetupNewMoveAnimeTimer, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000018, "Member 'WBP_PalLvExp_C_SetupNewMoveAnimeTimer::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

}

