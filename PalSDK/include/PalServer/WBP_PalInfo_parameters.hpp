#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "FPalUIPalInfoDisplayData_structs.hpp"
#include "EPalUIPalInfoType_structs.hpp"
#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function WBP_PalInfo.WBP_PalInfo_C.AnmEvent_DescToBonus
// 0x0001 (0x0001 - 0x0000)
struct WBP_PalInfo_C_AnmEvent_DescToBonus final
{
public:
	bool                                          AlreadyBonusCompleted;                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalInfo_C_AnmEvent_DescToBonus) == 0x000001, "Wrong alignment on WBP_PalInfo_C_AnmEvent_DescToBonus");
static_assert(sizeof(WBP_PalInfo_C_AnmEvent_DescToBonus) == 0x000001, "Wrong size on WBP_PalInfo_C_AnmEvent_DescToBonus");
static_assert(offsetof(WBP_PalInfo_C_AnmEvent_DescToBonus, AlreadyBonusCompleted) == 0x000000, "Member 'WBP_PalInfo_C_AnmEvent_DescToBonus::AlreadyBonusCompleted' has a wrong offset!");

// Function WBP_PalInfo.WBP_PalInfo_C.AnmEvent_OpenAndSetTimer
// 0x0002 (0x0002 - 0x0000)
struct WBP_PalInfo_C_AnmEvent_OpenAndSetTimer final
{
public:
	EPalUIPalInfoType                             InfoType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AlreadyBonusCompleted;                             // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalInfo_C_AnmEvent_OpenAndSetTimer) == 0x000001, "Wrong alignment on WBP_PalInfo_C_AnmEvent_OpenAndSetTimer");
static_assert(sizeof(WBP_PalInfo_C_AnmEvent_OpenAndSetTimer) == 0x000002, "Wrong size on WBP_PalInfo_C_AnmEvent_OpenAndSetTimer");
static_assert(offsetof(WBP_PalInfo_C_AnmEvent_OpenAndSetTimer, InfoType) == 0x000000, "Member 'WBP_PalInfo_C_AnmEvent_OpenAndSetTimer::InfoType' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_AnmEvent_OpenAndSetTimer, AlreadyBonusCompleted) == 0x000001, "Member 'WBP_PalInfo_C_AnmEvent_OpenAndSetTimer::AlreadyBonusCompleted' has a wrong offset!");

// Function WBP_PalInfo.WBP_PalInfo_C.Create Default Get Info
// 0x00D0 (0x00D0 - 0x0000)
struct WBP_PalInfo_C_Create_Default_Get_Info final
{
public:
	struct FPalUIPalCaptureInfo                   CaptureInfo;                                       // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFPalUIPalInfoDisplayData              GetInfoData;                                       // 0x0028(0x0038)(Parm, OutParm, HasGetValueTypeHash)
	bool                                          IsSuccessed;                                       // 0x0060(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62[0x6];                                       // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalUIPalCaptureInfo                   K2Node_Copy_ReturnValue;                           // 0x0068(0x0028)()
	EPalUIPalInfoType                             Temp_byte_Variable;                                // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalUIPalInfoType                             Temp_byte_Variable_1;                              // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalUIPalInfoType                             K2Node_Select_Default;                             // 0x0093(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFPalUIPalInfoDisplayData              K2Node_MakeStruct_FPalUIPalInfoDisplayData;        // 0x0098(0x0038)(HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalInfo_C_Create_Default_Get_Info) == 0x000008, "Wrong alignment on WBP_PalInfo_C_Create_Default_Get_Info");
static_assert(sizeof(WBP_PalInfo_C_Create_Default_Get_Info) == 0x0000D0, "Wrong size on WBP_PalInfo_C_Create_Default_Get_Info");
static_assert(offsetof(WBP_PalInfo_C_Create_Default_Get_Info, CaptureInfo) == 0x000000, "Member 'WBP_PalInfo_C_Create_Default_Get_Info::CaptureInfo' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_Create_Default_Get_Info, GetInfoData) == 0x000028, "Member 'WBP_PalInfo_C_Create_Default_Get_Info::GetInfoData' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_Create_Default_Get_Info, IsSuccessed) == 0x000060, "Member 'WBP_PalInfo_C_Create_Default_Get_Info::IsSuccessed' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_Create_Default_Get_Info, Temp_bool_Variable) == 0x000061, "Member 'WBP_PalInfo_C_Create_Default_Get_Info::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_Create_Default_Get_Info, K2Node_Copy_ReturnValue) == 0x000068, "Member 'WBP_PalInfo_C_Create_Default_Get_Info::K2Node_Copy_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_Create_Default_Get_Info, Temp_byte_Variable) == 0x000090, "Member 'WBP_PalInfo_C_Create_Default_Get_Info::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_Create_Default_Get_Info, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000091, "Member 'WBP_PalInfo_C_Create_Default_Get_Info::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_Create_Default_Get_Info, Temp_byte_Variable_1) == 0x000092, "Member 'WBP_PalInfo_C_Create_Default_Get_Info::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_Create_Default_Get_Info, K2Node_Select_Default) == 0x000093, "Member 'WBP_PalInfo_C_Create_Default_Get_Info::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_Create_Default_Get_Info, K2Node_MakeStruct_FPalUIPalInfoDisplayData) == 0x000098, "Member 'WBP_PalInfo_C_Create_Default_Get_Info::K2Node_MakeStruct_FPalUIPalInfoDisplayData' has a wrong offset!");

// Function WBP_PalInfo.WBP_PalInfo_C.DisplayFirstActivatedInfo
// 0x0020 (0x0020 - 0x0000)
struct WBP_PalInfo_C_DisplayFirstActivatedInfo final
{
public:
	class APalCharacter*                          Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetFormatedFirstActivatedInfoText_outFormatedText; // 0x0008(0x0018)()
};
static_assert(alignof(WBP_PalInfo_C_DisplayFirstActivatedInfo) == 0x000008, "Wrong alignment on WBP_PalInfo_C_DisplayFirstActivatedInfo");
static_assert(sizeof(WBP_PalInfo_C_DisplayFirstActivatedInfo) == 0x000020, "Wrong size on WBP_PalInfo_C_DisplayFirstActivatedInfo");
static_assert(offsetof(WBP_PalInfo_C_DisplayFirstActivatedInfo, Character) == 0x000000, "Member 'WBP_PalInfo_C_DisplayFirstActivatedInfo::Character' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_DisplayFirstActivatedInfo, CallFunc_GetFormatedFirstActivatedInfoText_outFormatedText) == 0x000008, "Member 'WBP_PalInfo_C_DisplayFirstActivatedInfo::CallFunc_GetFormatedFirstActivatedInfoText_outFormatedText' has a wrong offset!");

// Function WBP_PalInfo.WBP_PalInfo_C.DisplayPassiveSkill
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalInfo_C_DisplayPassiveSkill final
{
public:
	TArray<class FName>                           PassiveList;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_PalInfo_C_DisplayPassiveSkill) == 0x000008, "Wrong alignment on WBP_PalInfo_C_DisplayPassiveSkill");
static_assert(sizeof(WBP_PalInfo_C_DisplayPassiveSkill) == 0x000010, "Wrong size on WBP_PalInfo_C_DisplayPassiveSkill");
static_assert(offsetof(WBP_PalInfo_C_DisplayPassiveSkill, PassiveList) == 0x000000, "Member 'WBP_PalInfo_C_DisplayPassiveSkill::PassiveList' has a wrong offset!");

// Function WBP_PalInfo.WBP_PalInfo_C.DisplayShorDesc
// 0x0020 (0x0020 - 0x0000)
struct WBP_PalInfo_C_DisplayShorDesc final
{
public:
	class FName                                   CharacterID;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetPalLongDescription_outName;            // 0x0008(0x0018)()
};
static_assert(alignof(WBP_PalInfo_C_DisplayShorDesc) == 0x000008, "Wrong alignment on WBP_PalInfo_C_DisplayShorDesc");
static_assert(sizeof(WBP_PalInfo_C_DisplayShorDesc) == 0x000020, "Wrong size on WBP_PalInfo_C_DisplayShorDesc");
static_assert(offsetof(WBP_PalInfo_C_DisplayShorDesc, CharacterID) == 0x000000, "Member 'WBP_PalInfo_C_DisplayShorDesc::CharacterID' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_DisplayShorDesc, CallFunc_GetPalLongDescription_outName) == 0x000008, "Member 'WBP_PalInfo_C_DisplayShorDesc::CallFunc_GetPalLongDescription_outName' has a wrong offset!");

// Function WBP_PalInfo.WBP_PalInfo_C.ExecuteUbergraph_WBP_PalInfo
// 0x01B8 (0x01B8 - 0x0000)
struct WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalUIPalInfoType                             Temp_byte_Variable;                                // 0x0024(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalUIPalInfoType                             Temp_byte_Variable_1;                              // 0x002C(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalUIPalInfoType                             Temp_byte_Variable_2;                              // 0x002D(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E[0x2];                                       // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_Skill_Passive_C*      CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalUIPalInfoType                             K2Node_CustomEvent_infoType;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_AlreadyBonusCompleted_1;        // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryDIsplayStackedCharacter_displayed;     // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B[0x5];                                       // 0x004B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Map_Find_Value;                           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_AlreadyBonusCompleted;          // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0088(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0098(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result; // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue; // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIPalCaptureInfo                   K2Node_CustomEvent_CaptureInfo;                    // 0x00D8(0x0028)()
	struct FFPalUIPalInfoDisplayData              CallFunc_Create_Default_Get_Info_getInfoData;      // 0x0100(0x0038)(HasGetValueTypeHash)
	bool                                          CallFunc_Create_Default_Get_Info_isSuccessed;      // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_MainMenu_Pal_Skill_Passive_C*> K2Node_MakeArray_Array;                            // 0x0140(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UPalIndividualCharacterHandle*          K2Node_CustomEvent_Handle;                         // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15C[0x4];                                      // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFPalUIPalInfoDisplayData              K2Node_MakeStruct_FPalUIPalInfoDisplayData;        // 0x0160(0x0038)(HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19C[0x4];                                      // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Map_Add_Value_ImplicitCast;               // 0x01A0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Map_Add_Value_ImplicitCast_1;             // 0x01A8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Map_Add_Value_ImplicitCast_2;             // 0x01B0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo) == 0x000008, "Wrong alignment on WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo");
static_assert(sizeof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo) == 0x0001B8, "Wrong size on WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, EntryPoint) == 0x000000, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, Temp_byte_Variable) == 0x000024, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, Temp_byte_Variable_1) == 0x00002C, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, Temp_byte_Variable_2) == 0x00002D, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, Temp_int_Array_Index_Variable) == 0x000030, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, CallFunc_Array_Get_Item) == 0x000038, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, K2Node_CustomEvent_infoType) == 0x000048, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::K2Node_CustomEvent_infoType' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, K2Node_CustomEvent_AlreadyBonusCompleted_1) == 0x000049, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::K2Node_CustomEvent_AlreadyBonusCompleted_1' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, CallFunc_TryDIsplayStackedCharacter_displayed) == 0x00004A, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::CallFunc_TryDIsplayStackedCharacter_displayed' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, CallFunc_PlayAnimation_ReturnValue) == 0x000050, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, CallFunc_Map_Find_Value) == 0x000058, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, CallFunc_Map_Find_ReturnValue) == 0x000060, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, CallFunc_PlayAnimation_ReturnValue_1) == 0x000068, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, CallFunc_PlayAnimation_ReturnValue_2) == 0x000070, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, K2Node_CustomEvent_AlreadyBonusCompleted) == 0x000078, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::K2Node_CustomEvent_AlreadyBonusCompleted' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, CallFunc_PlayAnimation_ReturnValue_3) == 0x000080, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, K2Node_CreateDelegate_OutputDelegate_2) == 0x000088, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000098, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x0000A0, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x0000A8, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, CallFunc_IsValid_ReturnValue) == 0x0000B0, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result) == 0x0000B8, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue) == 0x0000C0, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, CallFunc_IsValid_ReturnValue_1) == 0x0000C8, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, CallFunc_GetGameSetting_ReturnValue) == 0x0000D0, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, K2Node_CustomEvent_CaptureInfo) == 0x0000D8, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::K2Node_CustomEvent_CaptureInfo' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, CallFunc_Create_Default_Get_Info_getInfoData) == 0x000100, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::CallFunc_Create_Default_Get_Info_getInfoData' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, CallFunc_Create_Default_Get_Info_isSuccessed) == 0x000138, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::CallFunc_Create_Default_Get_Info_isSuccessed' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, K2Node_MakeArray_Array) == 0x000140, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, K2Node_CustomEvent_Handle) == 0x000150, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::K2Node_CustomEvent_Handle' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, CallFunc_Array_Add_ReturnValue) == 0x000158, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, K2Node_MakeStruct_FPalUIPalInfoDisplayData) == 0x000160, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::K2Node_MakeStruct_FPalUIPalInfoDisplayData' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000198, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, CallFunc_Map_Add_Value_ImplicitCast) == 0x0001A0, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::CallFunc_Map_Add_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, CallFunc_Map_Add_Value_ImplicitCast_1) == 0x0001A8, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::CallFunc_Map_Add_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo, CallFunc_Map_Add_Value_ImplicitCast_2) == 0x0001B0, "Member 'WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo::CallFunc_Map_Add_Value_ImplicitCast_2' has a wrong offset!");

// Function WBP_PalInfo.WBP_PalInfo_C.Setup
// 0x01C0 (0x01C0 - 0x0000)
struct WBP_PalInfo_C_Setup final
{
public:
	struct FFPalUIPalInfoDisplayData              GetInfo;                                           // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	EPalUIPalInfoType                             InfoType;                                          // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRank_ReturnValue;                      // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetCharacterID_ReturnValue;               // 0x005C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetPartnerSkillName_OutText;              // 0x0070(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0088(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00D8(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0128(0x0010)(ReferenceParm)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0138(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0148(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_151[0x7];                                      // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0158(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0170(0x0018)()
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_189[0x7];                                      // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedText_ReturnValue;             // 0x0190(0x0018)()
	class FText                                   CallFunc_GetLocalizedText_ReturnValue_1;           // 0x01A8(0x0018)()
};
static_assert(alignof(WBP_PalInfo_C_Setup) == 0x000008, "Wrong alignment on WBP_PalInfo_C_Setup");
static_assert(sizeof(WBP_PalInfo_C_Setup) == 0x0001C0, "Wrong size on WBP_PalInfo_C_Setup");
static_assert(offsetof(WBP_PalInfo_C_Setup, GetInfo) == 0x000000, "Member 'WBP_PalInfo_C_Setup::GetInfo' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_Setup, InfoType) == 0x000038, "Member 'WBP_PalInfo_C_Setup::InfoType' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'WBP_PalInfo_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_Setup, CallFunc_Less_IntInt_ReturnValue) == 0x00003A, "Member 'WBP_PalInfo_C_Setup::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_Setup, CallFunc_BooleanOR_ReturnValue) == 0x00003B, "Member 'WBP_PalInfo_C_Setup::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_Setup, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000040, "Member 'WBP_PalInfo_C_Setup::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_Setup, CallFunc_IsValid_ReturnValue_1) == 0x000048, "Member 'WBP_PalInfo_C_Setup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_Setup, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000050, "Member 'WBP_PalInfo_C_Setup::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_Setup, CallFunc_GetRank_ReturnValue) == 0x000058, "Member 'WBP_PalInfo_C_Setup::CallFunc_GetRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_Setup, CallFunc_GetCharacterID_ReturnValue) == 0x00005C, "Member 'WBP_PalInfo_C_Setup::CallFunc_GetCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_Setup, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000068, "Member 'WBP_PalInfo_C_Setup::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_Setup, CallFunc_GetPartnerSkillName_OutText) == 0x000070, "Member 'WBP_PalInfo_C_Setup::CallFunc_GetPartnerSkillName_OutText' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_Setup, K2Node_MakeStruct_FormatArgumentData) == 0x000088, "Member 'WBP_PalInfo_C_Setup::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_Setup, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000D8, "Member 'WBP_PalInfo_C_Setup::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_Setup, K2Node_MakeArray_Array) == 0x000128, "Member 'WBP_PalInfo_C_Setup::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_Setup, K2Node_CreateDelegate_OutputDelegate) == 0x000138, "Member 'WBP_PalInfo_C_Setup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_Setup, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000148, "Member 'WBP_PalInfo_C_Setup::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_Setup, K2Node_SwitchEnum_CmpSuccess) == 0x000150, "Member 'WBP_PalInfo_C_Setup::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_Setup, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000158, "Member 'WBP_PalInfo_C_Setup::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_Setup, CallFunc_Format_ReturnValue) == 0x000170, "Member 'WBP_PalInfo_C_Setup::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_Setup, CallFunc_IsVisible_ReturnValue) == 0x000188, "Member 'WBP_PalInfo_C_Setup::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_Setup, CallFunc_GetLocalizedText_ReturnValue) == 0x000190, "Member 'WBP_PalInfo_C_Setup::CallFunc_GetLocalizedText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_Setup, CallFunc_GetLocalizedText_ReturnValue_1) == 0x0001A8, "Member 'WBP_PalInfo_C_Setup::CallFunc_GetLocalizedText_ReturnValue_1' has a wrong offset!");

// Function WBP_PalInfo.WBP_PalInfo_C.SetupCapturePalInfo
// 0x0028 (0x0028 - 0x0000)
struct WBP_PalInfo_C_SetupCapturePalInfo final
{
public:
	struct FPalUIPalCaptureInfo                   CaptureInfo;                                       // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_PalInfo_C_SetupCapturePalInfo) == 0x000008, "Wrong alignment on WBP_PalInfo_C_SetupCapturePalInfo");
static_assert(sizeof(WBP_PalInfo_C_SetupCapturePalInfo) == 0x000028, "Wrong size on WBP_PalInfo_C_SetupCapturePalInfo");
static_assert(offsetof(WBP_PalInfo_C_SetupCapturePalInfo, CaptureInfo) == 0x000000, "Member 'WBP_PalInfo_C_SetupCapturePalInfo::CaptureInfo' has a wrong offset!");

// Function WBP_PalInfo.WBP_PalInfo_C.SetupFirstActivatedPalInfo
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalInfo_C_SetupFirstActivatedPalInfo final
{
public:
	class UPalIndividualCharacterHandle*          Handle;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalInfo_C_SetupFirstActivatedPalInfo) == 0x000008, "Wrong alignment on WBP_PalInfo_C_SetupFirstActivatedPalInfo");
static_assert(sizeof(WBP_PalInfo_C_SetupFirstActivatedPalInfo) == 0x000008, "Wrong size on WBP_PalInfo_C_SetupFirstActivatedPalInfo");
static_assert(offsetof(WBP_PalInfo_C_SetupFirstActivatedPalInfo, Handle) == 0x000000, "Member 'WBP_PalInfo_C_SetupFirstActivatedPalInfo::Handle' has a wrong offset!");

// Function WBP_PalInfo.WBP_PalInfo_C.TryDIsplayStackedCharacter
// 0x0048 (0x0048 - 0x0000)
struct WBP_PalInfo_C_TryDIsplayStackedCharacter final
{
public:
	bool                                          Displayed;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFPalUIPalInfoDisplayData              CallFunc_Array_Get_Item;                           // 0x0008(0x0038)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalInfo_C_TryDIsplayStackedCharacter) == 0x000008, "Wrong alignment on WBP_PalInfo_C_TryDIsplayStackedCharacter");
static_assert(sizeof(WBP_PalInfo_C_TryDIsplayStackedCharacter) == 0x000048, "Wrong size on WBP_PalInfo_C_TryDIsplayStackedCharacter");
static_assert(offsetof(WBP_PalInfo_C_TryDIsplayStackedCharacter, Displayed) == 0x000000, "Member 'WBP_PalInfo_C_TryDIsplayStackedCharacter::Displayed' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_TryDIsplayStackedCharacter, CallFunc_Array_Get_Item) == 0x000008, "Member 'WBP_PalInfo_C_TryDIsplayStackedCharacter::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_TryDIsplayStackedCharacter, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'WBP_PalInfo_C_TryDIsplayStackedCharacter::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalInfo_C_TryDIsplayStackedCharacter, CallFunc_Greater_IntInt_ReturnValue) == 0x000044, "Member 'WBP_PalInfo_C_TryDIsplayStackedCharacter::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

}

