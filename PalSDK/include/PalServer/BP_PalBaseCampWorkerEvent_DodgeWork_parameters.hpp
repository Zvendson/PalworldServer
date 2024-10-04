#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function BP_PalBaseCampWorkerEvent_DodgeWork.BP_PalBaseCampWorkerEvent_DodgeWork_C.CreateNotifyMessageText
// 0x00D8 (0x00D8 - 0x0000)
struct BP_PalBaseCampWorkerEvent_DodgeWork_C_CreateNotifyMessageText final
{
public:
	class FText                                   LocalizedFormatText;                               // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class APalCharacter*                          Character;                                         // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   ReturnValue;                                       // 0x0020(0x0018)(Parm, OutParm, ReturnParm)
	class FString                                 CallFunc_GetNickName_outName;                      // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0060(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00B0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00C0(0x0018)()
};
static_assert(alignof(BP_PalBaseCampWorkerEvent_DodgeWork_C_CreateNotifyMessageText) == 0x000008, "Wrong alignment on BP_PalBaseCampWorkerEvent_DodgeWork_C_CreateNotifyMessageText");
static_assert(sizeof(BP_PalBaseCampWorkerEvent_DodgeWork_C_CreateNotifyMessageText) == 0x0000D8, "Wrong size on BP_PalBaseCampWorkerEvent_DodgeWork_C_CreateNotifyMessageText");
static_assert(offsetof(BP_PalBaseCampWorkerEvent_DodgeWork_C_CreateNotifyMessageText, LocalizedFormatText) == 0x000000, "Member 'BP_PalBaseCampWorkerEvent_DodgeWork_C_CreateNotifyMessageText::LocalizedFormatText' has a wrong offset!");
static_assert(offsetof(BP_PalBaseCampWorkerEvent_DodgeWork_C_CreateNotifyMessageText, Character) == 0x000018, "Member 'BP_PalBaseCampWorkerEvent_DodgeWork_C_CreateNotifyMessageText::Character' has a wrong offset!");
static_assert(offsetof(BP_PalBaseCampWorkerEvent_DodgeWork_C_CreateNotifyMessageText, ReturnValue) == 0x000020, "Member 'BP_PalBaseCampWorkerEvent_DodgeWork_C_CreateNotifyMessageText::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBaseCampWorkerEvent_DodgeWork_C_CreateNotifyMessageText, CallFunc_GetNickName_outName) == 0x000038, "Member 'BP_PalBaseCampWorkerEvent_DodgeWork_C_CreateNotifyMessageText::CallFunc_GetNickName_outName' has a wrong offset!");
static_assert(offsetof(BP_PalBaseCampWorkerEvent_DodgeWork_C_CreateNotifyMessageText, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'BP_PalBaseCampWorkerEvent_DodgeWork_C_CreateNotifyMessageText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBaseCampWorkerEvent_DodgeWork_C_CreateNotifyMessageText, K2Node_MakeStruct_FormatArgumentData) == 0x000060, "Member 'BP_PalBaseCampWorkerEvent_DodgeWork_C_CreateNotifyMessageText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_PalBaseCampWorkerEvent_DodgeWork_C_CreateNotifyMessageText, K2Node_MakeArray_Array) == 0x0000B0, "Member 'BP_PalBaseCampWorkerEvent_DodgeWork_C_CreateNotifyMessageText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_PalBaseCampWorkerEvent_DodgeWork_C_CreateNotifyMessageText, CallFunc_Format_ReturnValue) == 0x0000C0, "Member 'BP_PalBaseCampWorkerEvent_DodgeWork_C_CreateNotifyMessageText::CallFunc_Format_ReturnValue' has a wrong offset!");

}

