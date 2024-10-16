#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "E_PalUISkinChangerSequenceType_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_CharacterSkinChanger.WBP_CharacterSkinChanger_C.BndEvt__WBP_CharacterSkinChanger_WBP_PalStorageMenu_ForSkinChanger_K2Node_ComponentBoundEvent_3_OnClickedAnySlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_CharacterSkinChanger_C_BndEvt__WBP_CharacterSkinChanger_WBP_PalStorageMenu_ForSkinChanger_K2Node_ComponentBoundEvent_3_OnClickedAnySlot__DelegateSignature final
{
public:
	class UPalIndividualCharacterSlot*            Slot_0;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterSkinChanger_C_BndEvt__WBP_CharacterSkinChanger_WBP_PalStorageMenu_ForSkinChanger_K2Node_ComponentBoundEvent_3_OnClickedAnySlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_CharacterSkinChanger_C_BndEvt__WBP_CharacterSkinChanger_WBP_PalStorageMenu_ForSkinChanger_K2Node_ComponentBoundEvent_3_OnClickedAnySlot__DelegateSignature");
static_assert(sizeof(WBP_CharacterSkinChanger_C_BndEvt__WBP_CharacterSkinChanger_WBP_PalStorageMenu_ForSkinChanger_K2Node_ComponentBoundEvent_3_OnClickedAnySlot__DelegateSignature) == 0x000008, "Wrong size on WBP_CharacterSkinChanger_C_BndEvt__WBP_CharacterSkinChanger_WBP_PalStorageMenu_ForSkinChanger_K2Node_ComponentBoundEvent_3_OnClickedAnySlot__DelegateSignature");
static_assert(offsetof(WBP_CharacterSkinChanger_C_BndEvt__WBP_CharacterSkinChanger_WBP_PalStorageMenu_ForSkinChanger_K2Node_ComponentBoundEvent_3_OnClickedAnySlot__DelegateSignature, Slot_0) == 0x000000, "Member 'WBP_CharacterSkinChanger_C_BndEvt__WBP_CharacterSkinChanger_WBP_PalStorageMenu_ForSkinChanger_K2Node_ComponentBoundEvent_3_OnClickedAnySlot__DelegateSignature::Slot_0' has a wrong offset!");

// Function WBP_CharacterSkinChanger.WBP_CharacterSkinChanger_C.ChangeSequence
// 0x0028 (0x0028 - 0x0000)
struct WBP_CharacterSkinChanger_C_ChangeSequence final
{
public:
	E_PalUISkinChangerSequenceType                NewSequence;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlaySlot*                           CallFunc_AddChildToOverlay_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                           CallFunc_AddChildToOverlay_ReturnValue_1;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetNowSequenceFocusTarget_Widget;         // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterSkinChanger_C_ChangeSequence) == 0x000008, "Wrong alignment on WBP_CharacterSkinChanger_C_ChangeSequence");
static_assert(sizeof(WBP_CharacterSkinChanger_C_ChangeSequence) == 0x000028, "Wrong size on WBP_CharacterSkinChanger_C_ChangeSequence");
static_assert(offsetof(WBP_CharacterSkinChanger_C_ChangeSequence, NewSequence) == 0x000000, "Member 'WBP_CharacterSkinChanger_C_ChangeSequence::NewSequence' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_ChangeSequence, CallFunc_AddChildToOverlay_ReturnValue) == 0x000008, "Member 'WBP_CharacterSkinChanger_C_ChangeSequence::CallFunc_AddChildToOverlay_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_ChangeSequence, CallFunc_AddChildToOverlay_ReturnValue_1) == 0x000010, "Member 'WBP_CharacterSkinChanger_C_ChangeSequence::CallFunc_AddChildToOverlay_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_ChangeSequence, CallFunc_GetNowSequenceFocusTarget_Widget) == 0x000018, "Member 'WBP_CharacterSkinChanger_C_ChangeSequence::CallFunc_GetNowSequenceFocusTarget_Widget' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_ChangeSequence, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_CharacterSkinChanger_C_ChangeSequence::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_ChangeSequence, K2Node_SwitchEnum_CmpSuccess) == 0x000021, "Member 'WBP_CharacterSkinChanger_C_ChangeSequence::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WBP_CharacterSkinChanger.WBP_CharacterSkinChanger_C.ExecuteUbergraph_WBP_CharacterSkinChanger
// 0x00D8 (0x00D8 - 0x0000)
struct WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterSlot*            K2Node_ComponentBoundEvent_Slot;                   // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UPalIndividualCharacterSlot> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x0040(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetHandle_ReturnValue;                    // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A[0x2];                                       // 0x008A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  CallFunc_GetNowInsideBaseCampId_Id;                // 0x008C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PalMonsterCaptureSet_C*             CallFunc_GetCaptureCameraActor_cameraActor;        // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x00A8(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x00C4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger) == 0x000008, "Wrong alignment on WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger");
static_assert(sizeof(WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger) == 0x0000D8, "Wrong size on WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger");
static_assert(offsetof(WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger, EntryPoint) == 0x000000, "Member 'WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger, K2Node_ComponentBoundEvent_Slot) == 0x000038, "Member 'WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger::K2Node_ComponentBoundEvent_Slot' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x000040, "Member 'WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger, CallFunc_GetHandle_ReturnValue) == 0x000070, "Member 'WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger::CallFunc_GetHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000080, "Member 'WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger, CallFunc_IsEmpty_ReturnValue) == 0x000088, "Member 'WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger, CallFunc_IsValid_ReturnValue_1) == 0x000089, "Member 'WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger, CallFunc_GetNowInsideBaseCampId_Id) == 0x00008C, "Member 'WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger::CallFunc_GetNowInsideBaseCampId_Id' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger, CallFunc_GetCaptureCameraActor_cameraActor) == 0x0000A0, "Member 'WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger::CallFunc_GetCaptureCameraActor_cameraActor' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger, CallFunc_GetLocalizedTextFromHandle_Text) == 0x0000A8, "Member 'WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger, K2Node_SwitchEnum_CmpSuccess) == 0x0000C0, "Member 'WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000C4, "Member 'WBP_CharacterSkinChanger_C_ExecuteUbergraph_WBP_CharacterSkinChanger::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");

// Function WBP_CharacterSkinChanger.WBP_CharacterSkinChanger_C.Get Localized Skin Name
// 0x00C8 (0x00C8 - 0x0000)
struct WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name final
{
public:
	class FName                                   SkinName;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   SkinNameText;                                      // 0x0008(0x0018)(Parm, OutParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, struct FPalUICharacterSkinDisplayInfo> CallFunc_GetCachedSkinInfo_ReturnValue;            // 0x0030(0x0050)(ConstParm)
	struct FPalUICharacterSkinDisplayInfo         CallFunc_Map_Find_Value;                           // 0x0080(0x0010)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalSkinDataBase*                       CallFunc_Array_Get_Item;                           // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A2[0x6];                                       // 0x00A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedSkinName_ReturnValue;         // 0x00A8(0x0018)()
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name) == 0x000008, "Wrong alignment on WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name");
static_assert(sizeof(WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name) == 0x0000C8, "Wrong size on WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name");
static_assert(offsetof(WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name, SkinName) == 0x000000, "Member 'WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name::SkinName' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name, SkinNameText) == 0x000008, "Member 'WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name::SkinNameText' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name, Temp_int_Array_Index_Variable) == 0x000020, "Member 'WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name, CallFunc_GetCachedSkinInfo_ReturnValue) == 0x000030, "Member 'WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name::CallFunc_GetCachedSkinInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name, CallFunc_Map_Find_Value) == 0x000080, "Member 'WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name, CallFunc_Map_Find_ReturnValue) == 0x000090, "Member 'WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name, CallFunc_Array_Length_ReturnValue) == 0x000094, "Member 'WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name, CallFunc_Array_Get_Item) == 0x000098, "Member 'WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name, CallFunc_Less_IntInt_ReturnValue) == 0x0000A0, "Member 'WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name, CallFunc_IsValid_ReturnValue) == 0x0000A1, "Member 'WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name, CallFunc_GetLocalizedSkinName_ReturnValue) == 0x0000A8, "Member 'WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name::CallFunc_GetLocalizedSkinName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name, CallFunc_EqualEqual_NameName_ReturnValue) == 0x0000C0, "Member 'WBP_CharacterSkinChanger_C_Get_Localized_Skin_Name::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");

// Function WBP_CharacterSkinChanger.WBP_CharacterSkinChanger_C.GetNowInsideBaseCampId
// 0x0038 (0x0038 - 0x0000)
struct WBP_CharacterSkinChanger_C_GetNowInsideBaseCampId final
{
public:
	struct FGuid                                  ID;                                                // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalInsideBaseCampCheckComponent*       CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x2];                                       // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  CallFunc_GetInsideBaseCampID_ReturnValue;          // 0x0024(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_Guid_ReturnValue;                 // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterSkinChanger_C_GetNowInsideBaseCampId) == 0x000008, "Wrong alignment on WBP_CharacterSkinChanger_C_GetNowInsideBaseCampId");
static_assert(sizeof(WBP_CharacterSkinChanger_C_GetNowInsideBaseCampId) == 0x000038, "Wrong size on WBP_CharacterSkinChanger_C_GetNowInsideBaseCampId");
static_assert(offsetof(WBP_CharacterSkinChanger_C_GetNowInsideBaseCampId, ID) == 0x000000, "Member 'WBP_CharacterSkinChanger_C_GetNowInsideBaseCampId::ID' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_GetNowInsideBaseCampId, CallFunc_GetPalmi_ReturnValue) == 0x000010, "Member 'WBP_CharacterSkinChanger_C_GetNowInsideBaseCampId::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_GetNowInsideBaseCampId, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'WBP_CharacterSkinChanger_C_GetNowInsideBaseCampId::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_GetNowInsideBaseCampId, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_CharacterSkinChanger_C_GetNowInsideBaseCampId::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_GetNowInsideBaseCampId, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'WBP_CharacterSkinChanger_C_GetNowInsideBaseCampId::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_GetNowInsideBaseCampId, CallFunc_GetInsideBaseCampID_ReturnValue) == 0x000024, "Member 'WBP_CharacterSkinChanger_C_GetNowInsideBaseCampId::CallFunc_GetInsideBaseCampID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_GetNowInsideBaseCampId, CallFunc_IsValid_Guid_ReturnValue) == 0x000034, "Member 'WBP_CharacterSkinChanger_C_GetNowInsideBaseCampId::CallFunc_IsValid_Guid_ReturnValue' has a wrong offset!");

// Function WBP_CharacterSkinChanger.WBP_CharacterSkinChanger_C.OnCancelAction
// 0x0001 (0x0001 - 0x0000)
struct WBP_CharacterSkinChanger_C_OnCancelAction final
{
public:
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterSkinChanger_C_OnCancelAction) == 0x000001, "Wrong alignment on WBP_CharacterSkinChanger_C_OnCancelAction");
static_assert(sizeof(WBP_CharacterSkinChanger_C_OnCancelAction) == 0x000001, "Wrong size on WBP_CharacterSkinChanger_C_OnCancelAction");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnCancelAction, K2Node_SwitchEnum_CmpSuccess) == 0x000000, "Member 'WBP_CharacterSkinChanger_C_OnCancelAction::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WBP_CharacterSkinChanger.WBP_CharacterSkinChanger_C.OnClickedCharacterPanel
// 0x0040 (0x0040 - 0x0000)
struct WBP_CharacterSkinChanger_C_OnClickedCharacterPanel final
{
public:
	class FName                                   CharacterID;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Paldex_List_C*                     Widget;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UWBP_Paldex_List_C>      CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x0010(0x0030)(InstancedReference, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterSkinChanger_C_OnClickedCharacterPanel) == 0x000008, "Wrong alignment on WBP_CharacterSkinChanger_C_OnClickedCharacterPanel");
static_assert(sizeof(WBP_CharacterSkinChanger_C_OnClickedCharacterPanel) == 0x000040, "Wrong size on WBP_CharacterSkinChanger_C_OnClickedCharacterPanel");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnClickedCharacterPanel, CharacterID) == 0x000000, "Member 'WBP_CharacterSkinChanger_C_OnClickedCharacterPanel::CharacterID' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnClickedCharacterPanel, Widget) == 0x000008, "Member 'WBP_CharacterSkinChanger_C_OnClickedCharacterPanel::Widget' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnClickedCharacterPanel, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x000010, "Member 'WBP_CharacterSkinChanger_C_OnClickedCharacterPanel::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");

// Function WBP_CharacterSkinChanger.WBP_CharacterSkinChanger_C.OnClickedRemoveSkinButton
// 0x0010 (0x0010 - 0x0000)
struct WBP_CharacterSkinChanger_C_OnClickedRemoveSkinButton final
{
public:
	class FName                                   CharacterID;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Paldex_List_C*                     Widget;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterSkinChanger_C_OnClickedRemoveSkinButton) == 0x000008, "Wrong alignment on WBP_CharacterSkinChanger_C_OnClickedRemoveSkinButton");
static_assert(sizeof(WBP_CharacterSkinChanger_C_OnClickedRemoveSkinButton) == 0x000010, "Wrong size on WBP_CharacterSkinChanger_C_OnClickedRemoveSkinButton");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnClickedRemoveSkinButton, CharacterID) == 0x000000, "Member 'WBP_CharacterSkinChanger_C_OnClickedRemoveSkinButton::CharacterID' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnClickedRemoveSkinButton, Widget) == 0x000008, "Member 'WBP_CharacterSkinChanger_C_OnClickedRemoveSkinButton::Widget' has a wrong offset!");

// Function WBP_CharacterSkinChanger.WBP_CharacterSkinChanger_C.OnClickedSkinPanel
// 0x0010 (0x0010 - 0x0000)
struct WBP_CharacterSkinChanger_C_OnClickedSkinPanel final
{
public:
	class FName                                   CharacterID;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Paldex_List_C*                     Widget;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterSkinChanger_C_OnClickedSkinPanel) == 0x000008, "Wrong alignment on WBP_CharacterSkinChanger_C_OnClickedSkinPanel");
static_assert(sizeof(WBP_CharacterSkinChanger_C_OnClickedSkinPanel) == 0x000010, "Wrong size on WBP_CharacterSkinChanger_C_OnClickedSkinPanel");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnClickedSkinPanel, CharacterID) == 0x000000, "Member 'WBP_CharacterSkinChanger_C_OnClickedSkinPanel::CharacterID' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnClickedSkinPanel, Widget) == 0x000008, "Member 'WBP_CharacterSkinChanger_C_OnClickedSkinPanel::Widget' has a wrong offset!");

// Function WBP_CharacterSkinChanger.WBP_CharacterSkinChanger_C.OnClosedCheckDialog
// 0x0020 (0x0020 - 0x0000)
struct WBP_CharacterSkinChanger_C_OnClosedCheckDialog final
{
public:
	bool                                          bResult;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterSlot*            K2Node_DynamicCast_AsPal_Individual_Character_Slot; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterSkinChanger_C_OnClosedCheckDialog) == 0x000008, "Wrong alignment on WBP_CharacterSkinChanger_C_OnClosedCheckDialog");
static_assert(sizeof(WBP_CharacterSkinChanger_C_OnClosedCheckDialog) == 0x000020, "Wrong size on WBP_CharacterSkinChanger_C_OnClosedCheckDialog");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnClosedCheckDialog, bResult) == 0x000000, "Member 'WBP_CharacterSkinChanger_C_OnClosedCheckDialog::bResult' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnClosedCheckDialog, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000008, "Member 'WBP_CharacterSkinChanger_C_OnClosedCheckDialog::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnClosedCheckDialog, K2Node_DynamicCast_AsPal_Individual_Character_Slot) == 0x000010, "Member 'WBP_CharacterSkinChanger_C_OnClosedCheckDialog::K2Node_DynamicCast_AsPal_Individual_Character_Slot' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnClosedCheckDialog, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_CharacterSkinChanger_C_OnClosedCheckDialog::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnClosedCheckDialog, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000019, "Member 'WBP_CharacterSkinChanger_C_OnClosedCheckDialog::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");

// Function WBP_CharacterSkinChanger.WBP_CharacterSkinChanger_C.OnClosedRemoveSkinDialog
// 0x0020 (0x0020 - 0x0000)
struct WBP_CharacterSkinChanger_C_OnClosedRemoveSkinDialog final
{
public:
	bool                                          bResult;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterSlot*            K2Node_DynamicCast_AsPal_Individual_Character_Slot; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterSkinChanger_C_OnClosedRemoveSkinDialog) == 0x000008, "Wrong alignment on WBP_CharacterSkinChanger_C_OnClosedRemoveSkinDialog");
static_assert(sizeof(WBP_CharacterSkinChanger_C_OnClosedRemoveSkinDialog) == 0x000020, "Wrong size on WBP_CharacterSkinChanger_C_OnClosedRemoveSkinDialog");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnClosedRemoveSkinDialog, bResult) == 0x000000, "Member 'WBP_CharacterSkinChanger_C_OnClosedRemoveSkinDialog::bResult' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnClosedRemoveSkinDialog, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000008, "Member 'WBP_CharacterSkinChanger_C_OnClosedRemoveSkinDialog::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnClosedRemoveSkinDialog, K2Node_DynamicCast_AsPal_Individual_Character_Slot) == 0x000010, "Member 'WBP_CharacterSkinChanger_C_OnClosedRemoveSkinDialog::K2Node_DynamicCast_AsPal_Individual_Character_Slot' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnClosedRemoveSkinDialog, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_CharacterSkinChanger_C_OnClosedRemoveSkinDialog::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnClosedRemoveSkinDialog, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000019, "Member 'WBP_CharacterSkinChanger_C_OnClosedRemoveSkinDialog::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");

// Function WBP_CharacterSkinChanger.WBP_CharacterSkinChanger_C.OnHoveredCharacterPanel
// 0x0010 (0x0010 - 0x0000)
struct WBP_CharacterSkinChanger_C_OnHoveredCharacterPanel final
{
public:
	class FName                                   CharacterID;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Paldex_List_C*                     SelfWidget;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterSkinChanger_C_OnHoveredCharacterPanel) == 0x000008, "Wrong alignment on WBP_CharacterSkinChanger_C_OnHoveredCharacterPanel");
static_assert(sizeof(WBP_CharacterSkinChanger_C_OnHoveredCharacterPanel) == 0x000010, "Wrong size on WBP_CharacterSkinChanger_C_OnHoveredCharacterPanel");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnHoveredCharacterPanel, CharacterID) == 0x000000, "Member 'WBP_CharacterSkinChanger_C_OnHoveredCharacterPanel::CharacterID' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnHoveredCharacterPanel, SelfWidget) == 0x000008, "Member 'WBP_CharacterSkinChanger_C_OnHoveredCharacterPanel::SelfWidget' has a wrong offset!");

// Function WBP_CharacterSkinChanger.WBP_CharacterSkinChanger_C.OnHoveredRemoveSkinButton
// 0x0010 (0x0010 - 0x0000)
struct WBP_CharacterSkinChanger_C_OnHoveredRemoveSkinButton final
{
public:
	class FName                                   CharacterID;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Paldex_List_C*                     SelfWidget;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterSkinChanger_C_OnHoveredRemoveSkinButton) == 0x000008, "Wrong alignment on WBP_CharacterSkinChanger_C_OnHoveredRemoveSkinButton");
static_assert(sizeof(WBP_CharacterSkinChanger_C_OnHoveredRemoveSkinButton) == 0x000010, "Wrong size on WBP_CharacterSkinChanger_C_OnHoveredRemoveSkinButton");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnHoveredRemoveSkinButton, CharacterID) == 0x000000, "Member 'WBP_CharacterSkinChanger_C_OnHoveredRemoveSkinButton::CharacterID' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnHoveredRemoveSkinButton, SelfWidget) == 0x000008, "Member 'WBP_CharacterSkinChanger_C_OnHoveredRemoveSkinButton::SelfWidget' has a wrong offset!");

// Function WBP_CharacterSkinChanger.WBP_CharacterSkinChanger_C.OnHoveredSkinPanel
// 0x00E0 (0x00E0 - 0x0000)
struct WBP_CharacterSkinChanger_C_OnHoveredSkinPanel final
{
public:
	class FName                                   CharacterID;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Paldex_List_C*                     SelfWidget;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalSkinManager*                        CallFunc_GetSkinManager_ReturnValue;               // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FPalUICharacterSkinDisplayInfo> CallFunc_GetCachedSkinInfo_ReturnValue;            // 0x0028(0x0050)(ConstParm)
	TSoftClassPtr<class UClass>                   CallFunc_GetPalCharacterClass_OutCharacterClass;   // 0x0078(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_GetPalCharacterClass_ReturnValue;         // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalUICharacterSkinDisplayInfo         CallFunc_Map_Find_Value;                           // 0x00B0(0x0010)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PalMonsterCaptureSet_C*             CallFunc_GetCaptureCameraActor_cameraActor;        // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkinDataBase*                       CallFunc_Array_Get_Item;                           // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterSkinChanger_C_OnHoveredSkinPanel) == 0x000008, "Wrong alignment on WBP_CharacterSkinChanger_C_OnHoveredSkinPanel");
static_assert(sizeof(WBP_CharacterSkinChanger_C_OnHoveredSkinPanel) == 0x0000E0, "Wrong size on WBP_CharacterSkinChanger_C_OnHoveredSkinPanel");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnHoveredSkinPanel, CharacterID) == 0x000000, "Member 'WBP_CharacterSkinChanger_C_OnHoveredSkinPanel::CharacterID' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnHoveredSkinPanel, SelfWidget) == 0x000008, "Member 'WBP_CharacterSkinChanger_C_OnHoveredSkinPanel::SelfWidget' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnHoveredSkinPanel, Temp_int_Array_Index_Variable) == 0x000010, "Member 'WBP_CharacterSkinChanger_C_OnHoveredSkinPanel::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnHoveredSkinPanel, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'WBP_CharacterSkinChanger_C_OnHoveredSkinPanel::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnHoveredSkinPanel, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'WBP_CharacterSkinChanger_C_OnHoveredSkinPanel::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnHoveredSkinPanel, CallFunc_GetSkinManager_ReturnValue) == 0x000020, "Member 'WBP_CharacterSkinChanger_C_OnHoveredSkinPanel::CallFunc_GetSkinManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnHoveredSkinPanel, CallFunc_GetCachedSkinInfo_ReturnValue) == 0x000028, "Member 'WBP_CharacterSkinChanger_C_OnHoveredSkinPanel::CallFunc_GetCachedSkinInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnHoveredSkinPanel, CallFunc_GetPalCharacterClass_OutCharacterClass) == 0x000078, "Member 'WBP_CharacterSkinChanger_C_OnHoveredSkinPanel::CallFunc_GetPalCharacterClass_OutCharacterClass' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnHoveredSkinPanel, CallFunc_GetPalCharacterClass_ReturnValue) == 0x0000A8, "Member 'WBP_CharacterSkinChanger_C_OnHoveredSkinPanel::CallFunc_GetPalCharacterClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnHoveredSkinPanel, CallFunc_Map_Find_Value) == 0x0000B0, "Member 'WBP_CharacterSkinChanger_C_OnHoveredSkinPanel::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnHoveredSkinPanel, CallFunc_Map_Find_ReturnValue) == 0x0000C0, "Member 'WBP_CharacterSkinChanger_C_OnHoveredSkinPanel::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnHoveredSkinPanel, CallFunc_GetCaptureCameraActor_cameraActor) == 0x0000C8, "Member 'WBP_CharacterSkinChanger_C_OnHoveredSkinPanel::CallFunc_GetCaptureCameraActor_cameraActor' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnHoveredSkinPanel, CallFunc_Array_Get_Item) == 0x0000D0, "Member 'WBP_CharacterSkinChanger_C_OnHoveredSkinPanel::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnHoveredSkinPanel, CallFunc_Array_Length_ReturnValue) == 0x0000D8, "Member 'WBP_CharacterSkinChanger_C_OnHoveredSkinPanel::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnHoveredSkinPanel, CallFunc_EqualEqual_NameName_ReturnValue) == 0x0000DC, "Member 'WBP_CharacterSkinChanger_C_OnHoveredSkinPanel::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OnHoveredSkinPanel, CallFunc_Less_IntInt_ReturnValue) == 0x0000DD, "Member 'WBP_CharacterSkinChanger_C_OnHoveredSkinPanel::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_CharacterSkinChanger.WBP_CharacterSkinChanger_C.OpenChangeSkinDIalog
// 0x02D0 (0x02D0 - 0x0000)
struct WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog final
{
public:
	class UPalIndividualCharacterParameter*       TargetCharacterParameter;                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetSkinName_ReturnValue;                  // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Get_Localized_Skin_Name_SkinNameText;     // 0x0018(0x0018)()
	class FString                                 CallFunc_GetNickName_outName;                      // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0040(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0090(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00A8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00C0(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0110(0x0050)(HasGetValueTypeHash)
	bool                                          CallFunc_IsSkinApplied_ReturnValue;                // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Get_Localized_Skin_Name_SkinNameText_1;   // 0x0168(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0180(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x01D0(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0220(0x0010)(ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0230(0x0010)(ReferenceParm)
	TDelegate<void(bool bResult)>                 K2Node_CreateDelegate_OutputDelegate;              // 0x0240(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    K2Node_Select_Default;                             // 0x0250(0x0010)(NoDestructor)
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0260(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0278(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0290(0x0018)()
	class FText                                   CallFunc_SelectText_ReturnValue;                   // 0x02A8(0x0018)()
	struct FGuid                                  CallFunc_Dialog_ReturnValue;                       // 0x02C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog) == 0x000008, "Wrong alignment on WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog");
static_assert(sizeof(WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog) == 0x0002D0, "Wrong size on WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog, TargetCharacterParameter) == 0x000000, "Member 'WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog::TargetCharacterParameter' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog, Temp_bool_Variable) == 0x000008, "Member 'WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog, CallFunc_GetSkinName_ReturnValue) == 0x00000C, "Member 'WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog::CallFunc_GetSkinName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog, CallFunc_Get_Localized_Skin_Name_SkinNameText) == 0x000018, "Member 'WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog::CallFunc_Get_Localized_Skin_Name_SkinNameText' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog, CallFunc_GetNickName_outName) == 0x000030, "Member 'WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog::CallFunc_GetNickName_outName' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog, K2Node_MakeStruct_FormatArgumentData) == 0x000040, "Member 'WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog, CallFunc_Conv_StringToText_ReturnValue) == 0x000090, "Member 'WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000A8, "Member 'WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000C0, "Member 'WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog, K2Node_MakeStruct_FormatArgumentData_2) == 0x000110, "Member 'WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog, CallFunc_IsSkinApplied_ReturnValue) == 0x000160, "Member 'WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog::CallFunc_IsSkinApplied_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog, CallFunc_Get_Localized_Skin_Name_SkinNameText_1) == 0x000168, "Member 'WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog::CallFunc_Get_Localized_Skin_Name_SkinNameText_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog, K2Node_MakeStruct_FormatArgumentData_3) == 0x000180, "Member 'WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog, K2Node_MakeStruct_FormatArgumentData_4) == 0x0001D0, "Member 'WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog, K2Node_MakeArray_Array) == 0x000220, "Member 'WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog, K2Node_MakeArray_Array_1) == 0x000230, "Member 'WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog, K2Node_CreateDelegate_OutputDelegate) == 0x000240, "Member 'WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog, K2Node_Select_Default) == 0x000250, "Member 'WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000260, "Member 'WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog, CallFunc_Format_ReturnValue) == 0x000278, "Member 'WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog, CallFunc_Format_ReturnValue_1) == 0x000290, "Member 'WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog, CallFunc_SelectText_ReturnValue) == 0x0002A8, "Member 'WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog::CallFunc_SelectText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog, CallFunc_Dialog_ReturnValue) == 0x0002C0, "Member 'WBP_CharacterSkinChanger_C_OpenChangeSkinDIalog::CallFunc_Dialog_ReturnValue' has a wrong offset!");

// Function WBP_CharacterSkinChanger.WBP_CharacterSkinChanger_C.OpenRemoveSkinDialog
// 0x0158 (0x0158 - 0x0000)
struct WBP_CharacterSkinChanger_C_OpenRemoveSkinDialog final
{
public:
	class UPalIndividualCharacterParameter*       TargetCharacterParameter;                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0010(0x0018)()
	class FName                                   CallFunc_GetSkinName_ReturnValue;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetNickName_outName;                      // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Get_Localized_Skin_Name_SkinNameText;     // 0x0040(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0058(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0070(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00C0(0x0050)(HasGetValueTypeHash)
	TDelegate<void(bool bResult)>                 K2Node_CreateDelegate_OutputDelegate;              // 0x0110(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0120(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0130(0x0018)()
	struct FGuid                                  CallFunc_Dialog_ReturnValue;                       // 0x0148(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterSkinChanger_C_OpenRemoveSkinDialog) == 0x000008, "Wrong alignment on WBP_CharacterSkinChanger_C_OpenRemoveSkinDialog");
static_assert(sizeof(WBP_CharacterSkinChanger_C_OpenRemoveSkinDialog) == 0x000158, "Wrong size on WBP_CharacterSkinChanger_C_OpenRemoveSkinDialog");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenRemoveSkinDialog, TargetCharacterParameter) == 0x000000, "Member 'WBP_CharacterSkinChanger_C_OpenRemoveSkinDialog::TargetCharacterParameter' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenRemoveSkinDialog, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_CharacterSkinChanger_C_OpenRemoveSkinDialog::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenRemoveSkinDialog, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000010, "Member 'WBP_CharacterSkinChanger_C_OpenRemoveSkinDialog::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenRemoveSkinDialog, CallFunc_GetSkinName_ReturnValue) == 0x000028, "Member 'WBP_CharacterSkinChanger_C_OpenRemoveSkinDialog::CallFunc_GetSkinName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenRemoveSkinDialog, CallFunc_GetNickName_outName) == 0x000030, "Member 'WBP_CharacterSkinChanger_C_OpenRemoveSkinDialog::CallFunc_GetNickName_outName' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenRemoveSkinDialog, CallFunc_Get_Localized_Skin_Name_SkinNameText) == 0x000040, "Member 'WBP_CharacterSkinChanger_C_OpenRemoveSkinDialog::CallFunc_Get_Localized_Skin_Name_SkinNameText' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenRemoveSkinDialog, CallFunc_Conv_StringToText_ReturnValue) == 0x000058, "Member 'WBP_CharacterSkinChanger_C_OpenRemoveSkinDialog::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenRemoveSkinDialog, K2Node_MakeStruct_FormatArgumentData) == 0x000070, "Member 'WBP_CharacterSkinChanger_C_OpenRemoveSkinDialog::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenRemoveSkinDialog, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000C0, "Member 'WBP_CharacterSkinChanger_C_OpenRemoveSkinDialog::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenRemoveSkinDialog, K2Node_CreateDelegate_OutputDelegate) == 0x000110, "Member 'WBP_CharacterSkinChanger_C_OpenRemoveSkinDialog::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenRemoveSkinDialog, K2Node_MakeArray_Array) == 0x000120, "Member 'WBP_CharacterSkinChanger_C_OpenRemoveSkinDialog::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenRemoveSkinDialog, CallFunc_Format_ReturnValue) == 0x000130, "Member 'WBP_CharacterSkinChanger_C_OpenRemoveSkinDialog::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_OpenRemoveSkinDialog, CallFunc_Dialog_ReturnValue) == 0x000148, "Member 'WBP_CharacterSkinChanger_C_OpenRemoveSkinDialog::CallFunc_Dialog_ReturnValue' has a wrong offset!");

// Function WBP_CharacterSkinChanger.WBP_CharacterSkinChanger_C.SetupExistSkinCharacterList
// 0x0110 (0x0110 - 0x0000)
struct WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList final
{
public:
	TDelegate<void(class FName CharacterID, class UWBP_Paldex_List_C* SelfWidget)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName CharacterID, class UWBP_Paldex_List_C* Widget)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0028(0x0018)()
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Paldex_List_C*                     CallFunc_Create_ReturnValue;                       // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName CharacterID, class UWBP_Paldex_List_C* SelfWidget)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0064(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName CharacterID, class UWBP_Paldex_List_C* Widget)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0074(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue_1;   // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Paldex_List_C*                     CallFunc_Create_ReturnValue_1;                     // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FPalUICharacterSkinDisplayInfo> CallFunc_GetCachedSkinInfo_ReturnValue;            // 0x0098(0x0050)(ConstParm)
	TArray<class FName>                           CallFunc_Map_Keys_Keys;                            // 0x00E8(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_105[0x3];                                      // 0x0105(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x0108(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList) == 0x000008, "Wrong alignment on WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList");
static_assert(sizeof(WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList) == 0x000110, "Wrong size on WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList, Temp_int_Array_Index_Variable) == 0x000020, "Member 'WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000028, "Member 'WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000040, "Member 'WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList, Temp_int_Loop_Counter_Variable) == 0x000048, "Member 'WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList, CallFunc_Create_ReturnValue) == 0x000050, "Member 'WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList, CallFunc_AddChild_ReturnValue) == 0x000058, "Member 'WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList, CallFunc_Add_IntInt_ReturnValue) == 0x000060, "Member 'WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList, K2Node_CreateDelegate_OutputDelegate_2) == 0x000064, "Member 'WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList, K2Node_CreateDelegate_OutputDelegate_3) == 0x000074, "Member 'WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList, CallFunc_GetLocalPlayerController_ReturnValue_1) == 0x000088, "Member 'WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList::CallFunc_GetLocalPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList, CallFunc_Create_ReturnValue_1) == 0x000090, "Member 'WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList, CallFunc_GetCachedSkinInfo_ReturnValue) == 0x000098, "Member 'WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList::CallFunc_GetCachedSkinInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList, CallFunc_Map_Keys_Keys) == 0x0000E8, "Member 'WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList, CallFunc_Array_Get_Item) == 0x0000F8, "Member 'WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList, CallFunc_Array_Length_ReturnValue) == 0x000100, "Member 'WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList, CallFunc_Less_IntInt_ReturnValue) == 0x000104, "Member 'WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList, CallFunc_AddChild_ReturnValue_1) == 0x000108, "Member 'WBP_CharacterSkinChanger_C_SetupExistSkinCharacterList::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");

// Function WBP_CharacterSkinChanger.WBP_CharacterSkinChanger_C.SetupSkinList
// 0x00E0 (0x00E0 - 0x0000)
struct WBP_CharacterSkinChanger_C_SetupSkinList final
{
public:
	class FName                                   CharacterID;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName CharacterID, class UWBP_Paldex_List_C* SelfWidget)> K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName CharacterID, class UWBP_Paldex_List_C* Widget)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Paldex_List_C*                     CallFunc_Create_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FPalUICharacterSkinDisplayInfo> CallFunc_GetCachedSkinInfo_ReturnValue;            // 0x0050(0x0050)(ConstParm)
	struct FPalUICharacterSkinDisplayInfo         CallFunc_Map_Find_Value;                           // 0x00A0(0x0010)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalSkinDataBase*                       CallFunc_Array_Get_Item;                           // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedSkinName_ReturnValue;         // 0x00C8(0x0018)()
};
static_assert(alignof(WBP_CharacterSkinChanger_C_SetupSkinList) == 0x000008, "Wrong alignment on WBP_CharacterSkinChanger_C_SetupSkinList");
static_assert(sizeof(WBP_CharacterSkinChanger_C_SetupSkinList) == 0x0000E0, "Wrong size on WBP_CharacterSkinChanger_C_SetupSkinList");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupSkinList, CharacterID) == 0x000000, "Member 'WBP_CharacterSkinChanger_C_SetupSkinList::CharacterID' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupSkinList, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'WBP_CharacterSkinChanger_C_SetupSkinList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupSkinList, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'WBP_CharacterSkinChanger_C_SetupSkinList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupSkinList, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'WBP_CharacterSkinChanger_C_SetupSkinList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupSkinList, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'WBP_CharacterSkinChanger_C_SetupSkinList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupSkinList, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'WBP_CharacterSkinChanger_C_SetupSkinList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupSkinList, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000038, "Member 'WBP_CharacterSkinChanger_C_SetupSkinList::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupSkinList, CallFunc_Create_ReturnValue) == 0x000040, "Member 'WBP_CharacterSkinChanger_C_SetupSkinList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupSkinList, CallFunc_AddChild_ReturnValue) == 0x000048, "Member 'WBP_CharacterSkinChanger_C_SetupSkinList::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupSkinList, CallFunc_GetCachedSkinInfo_ReturnValue) == 0x000050, "Member 'WBP_CharacterSkinChanger_C_SetupSkinList::CallFunc_GetCachedSkinInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupSkinList, CallFunc_Map_Find_Value) == 0x0000A0, "Member 'WBP_CharacterSkinChanger_C_SetupSkinList::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupSkinList, CallFunc_Map_Find_ReturnValue) == 0x0000B0, "Member 'WBP_CharacterSkinChanger_C_SetupSkinList::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupSkinList, CallFunc_Array_Length_ReturnValue) == 0x0000B4, "Member 'WBP_CharacterSkinChanger_C_SetupSkinList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupSkinList, CallFunc_Array_Get_Item) == 0x0000B8, "Member 'WBP_CharacterSkinChanger_C_SetupSkinList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupSkinList, CallFunc_Less_IntInt_ReturnValue) == 0x0000C0, "Member 'WBP_CharacterSkinChanger_C_SetupSkinList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_SetupSkinList, CallFunc_GetLocalizedSkinName_ReturnValue) == 0x0000C8, "Member 'WBP_CharacterSkinChanger_C_SetupSkinList::CallFunc_GetLocalizedSkinName_ReturnValue' has a wrong offset!");

// Function WBP_CharacterSkinChanger.WBP_CharacterSkinChanger_C.BP_GetDesiredFocusTarget
// 0x0010 (0x0010 - 0x0000)
struct WBP_CharacterSkinChanger_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetNowSequenceFocusTarget_Widget;         // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterSkinChanger_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_CharacterSkinChanger_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_CharacterSkinChanger_C_BP_GetDesiredFocusTarget) == 0x000010, "Wrong size on WBP_CharacterSkinChanger_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_CharacterSkinChanger_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_CharacterSkinChanger_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_BP_GetDesiredFocusTarget, CallFunc_GetNowSequenceFocusTarget_Widget) == 0x000008, "Member 'WBP_CharacterSkinChanger_C_BP_GetDesiredFocusTarget::CallFunc_GetNowSequenceFocusTarget_Widget' has a wrong offset!");

// Function WBP_CharacterSkinChanger.WBP_CharacterSkinChanger_C.GetNowSequenceFocusTarget
// 0x0058 (0x0058 - 0x0000)
struct WBP_CharacterSkinChanger_C_GetNowSequenceFocusTarget final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetDesiredFocusTarget_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Paldex_List_C*                     K2Node_DynamicCast_AsWBP_Paldex_List;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Paldex_List_C*                     K2Node_DynamicCast_AsWBP_Paldex_List_1;            // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Paldex_List_C*                     K2Node_DynamicCast_AsWBP_Paldex_List_2;            // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterSkinChanger_C_GetNowSequenceFocusTarget) == 0x000008, "Wrong alignment on WBP_CharacterSkinChanger_C_GetNowSequenceFocusTarget");
static_assert(sizeof(WBP_CharacterSkinChanger_C_GetNowSequenceFocusTarget) == 0x000058, "Wrong size on WBP_CharacterSkinChanger_C_GetNowSequenceFocusTarget");
static_assert(offsetof(WBP_CharacterSkinChanger_C_GetNowSequenceFocusTarget, Widget) == 0x000000, "Member 'WBP_CharacterSkinChanger_C_GetNowSequenceFocusTarget::Widget' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_GetNowSequenceFocusTarget, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000008, "Member 'WBP_CharacterSkinChanger_C_GetNowSequenceFocusTarget::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_GetNowSequenceFocusTarget, CallFunc_GetDesiredFocusTarget_ReturnValue) == 0x000010, "Member 'WBP_CharacterSkinChanger_C_GetNowSequenceFocusTarget::CallFunc_GetDesiredFocusTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_GetNowSequenceFocusTarget, K2Node_DynamicCast_AsWBP_Paldex_List) == 0x000018, "Member 'WBP_CharacterSkinChanger_C_GetNowSequenceFocusTarget::K2Node_DynamicCast_AsWBP_Paldex_List' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_GetNowSequenceFocusTarget, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_CharacterSkinChanger_C_GetNowSequenceFocusTarget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_GetNowSequenceFocusTarget, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000021, "Member 'WBP_CharacterSkinChanger_C_GetNowSequenceFocusTarget::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_GetNowSequenceFocusTarget, CallFunc_GetChildAt_ReturnValue) == 0x000028, "Member 'WBP_CharacterSkinChanger_C_GetNowSequenceFocusTarget::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_GetNowSequenceFocusTarget, CallFunc_GetChildAt_ReturnValue_1) == 0x000030, "Member 'WBP_CharacterSkinChanger_C_GetNowSequenceFocusTarget::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_GetNowSequenceFocusTarget, K2Node_DynamicCast_AsWBP_Paldex_List_1) == 0x000038, "Member 'WBP_CharacterSkinChanger_C_GetNowSequenceFocusTarget::K2Node_DynamicCast_AsWBP_Paldex_List_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_GetNowSequenceFocusTarget, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'WBP_CharacterSkinChanger_C_GetNowSequenceFocusTarget::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_GetNowSequenceFocusTarget, K2Node_DynamicCast_AsWBP_Paldex_List_2) == 0x000048, "Member 'WBP_CharacterSkinChanger_C_GetNowSequenceFocusTarget::K2Node_DynamicCast_AsWBP_Paldex_List_2' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_GetNowSequenceFocusTarget, K2Node_DynamicCast_bSuccess_2) == 0x000050, "Member 'WBP_CharacterSkinChanger_C_GetNowSequenceFocusTarget::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_CharacterSkinChanger_C_GetNowSequenceFocusTarget, K2Node_SwitchEnum_CmpSuccess) == 0x000051, "Member 'WBP_CharacterSkinChanger_C_GetNowSequenceFocusTarget::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

