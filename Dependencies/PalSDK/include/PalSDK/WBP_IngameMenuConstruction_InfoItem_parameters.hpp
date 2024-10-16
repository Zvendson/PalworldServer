#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_IngameMenuConstruction_InfoItem.WBP_IngameMenuConstruction_InfoItem_C.Setup
// 0x00B0 (0x00B0 - 0x0000)
struct WBP_IngameMenuConstruction_InfoItem_C_Setup final
{
public:
	class FName                                   ID;                                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NeedNum;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HasNum;                                            // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0010(0x0014)()
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalItemIDManager*                      CallFunc_GetItemIDManager_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticItemDataBase*                 CallFunc_GetStaticItemData_ReturnValue;            // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0040(0x0014)()
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetItemName_outName;                      // 0x0068(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0080(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0098(0x0018)()
};
static_assert(alignof(WBP_IngameMenuConstruction_InfoItem_C_Setup) == 0x000008, "Wrong alignment on WBP_IngameMenuConstruction_InfoItem_C_Setup");
static_assert(sizeof(WBP_IngameMenuConstruction_InfoItem_C_Setup) == 0x0000B0, "Wrong size on WBP_IngameMenuConstruction_InfoItem_C_Setup");
static_assert(offsetof(WBP_IngameMenuConstruction_InfoItem_C_Setup, ID) == 0x000000, "Member 'WBP_IngameMenuConstruction_InfoItem_C_Setup::ID' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenuConstruction_InfoItem_C_Setup, NeedNum) == 0x000008, "Member 'WBP_IngameMenuConstruction_InfoItem_C_Setup::NeedNum' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenuConstruction_InfoItem_C_Setup, HasNum) == 0x00000C, "Member 'WBP_IngameMenuConstruction_InfoItem_C_Setup::HasNum' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenuConstruction_InfoItem_C_Setup, K2Node_MakeStruct_SlateColor) == 0x000010, "Member 'WBP_IngameMenuConstruction_InfoItem_C_Setup::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenuConstruction_InfoItem_C_Setup, CallFunc_GetItemIDManager_ReturnValue) == 0x000028, "Member 'WBP_IngameMenuConstruction_InfoItem_C_Setup::CallFunc_GetItemIDManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenuConstruction_InfoItem_C_Setup, CallFunc_GetStaticItemData_ReturnValue) == 0x000030, "Member 'WBP_IngameMenuConstruction_InfoItem_C_Setup::CallFunc_GetStaticItemData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenuConstruction_InfoItem_C_Setup, CallFunc_PlayAnimation_ReturnValue) == 0x000038, "Member 'WBP_IngameMenuConstruction_InfoItem_C_Setup::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenuConstruction_InfoItem_C_Setup, K2Node_MakeStruct_SlateColor_1) == 0x000040, "Member 'WBP_IngameMenuConstruction_InfoItem_C_Setup::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenuConstruction_InfoItem_C_Setup, CallFunc_PlayAnimation_ReturnValue_1) == 0x000058, "Member 'WBP_IngameMenuConstruction_InfoItem_C_Setup::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenuConstruction_InfoItem_C_Setup, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000060, "Member 'WBP_IngameMenuConstruction_InfoItem_C_Setup::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenuConstruction_InfoItem_C_Setup, CallFunc_GetItemName_outName) == 0x000068, "Member 'WBP_IngameMenuConstruction_InfoItem_C_Setup::CallFunc_GetItemName_outName' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenuConstruction_InfoItem_C_Setup, CallFunc_Conv_IntToText_ReturnValue) == 0x000080, "Member 'WBP_IngameMenuConstruction_InfoItem_C_Setup::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenuConstruction_InfoItem_C_Setup, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000098, "Member 'WBP_IngameMenuConstruction_InfoItem_C_Setup::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");

}

