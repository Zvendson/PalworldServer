#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "InputCore_structs.hpp"
#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function WBP_IngameMenu_PalBox_PalList.WBP_IngameMenu_PalBox_PalList_C.BindFromSlot
// 0x0040 (0x0040 - 0x0000)
struct WBP_IngameMenu_PalBox_PalList_C_BindFromSlot final
{
public:
	class UPalIndividualCharacterSlot*            TargetSlot_0;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetHandle_ReturnValue;                    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x2];                                       // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName& NewSkinName)>     K2Node_CreateDelegate_OutputDelegate;              // 0x002C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalList_C_BindFromSlot) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalList_C_BindFromSlot");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalList_C_BindFromSlot) == 0x000040, "Wrong size on WBP_IngameMenu_PalBox_PalList_C_BindFromSlot");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_BindFromSlot, TargetSlot_0) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalList_C_BindFromSlot::TargetSlot_0' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_BindFromSlot, CallFunc_MakeLiteralName_ReturnValue) == 0x000008, "Member 'WBP_IngameMenu_PalBox_PalList_C_BindFromSlot::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_BindFromSlot, CallFunc_GetHandle_ReturnValue) == 0x000010, "Member 'WBP_IngameMenu_PalBox_PalList_C_BindFromSlot::CallFunc_GetHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_BindFromSlot, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_IngameMenu_PalBox_PalList_C_BindFromSlot::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_BindFromSlot, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000020, "Member 'WBP_IngameMenu_PalBox_PalList_C_BindFromSlot::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_BindFromSlot, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'WBP_IngameMenu_PalBox_PalList_C_BindFromSlot::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_BindFromSlot, CallFunc_IsEmpty_ReturnValue) == 0x000029, "Member 'WBP_IngameMenu_PalBox_PalList_C_BindFromSlot::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_BindFromSlot, K2Node_CreateDelegate_OutputDelegate) == 0x00002C, "Member 'WBP_IngameMenu_PalBox_PalList_C_BindFromSlot::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalList.WBP_IngameMenu_PalBox_PalList_C.BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_IngameMenu_PalBox_PalList_C_BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalList_C_BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalList_C_BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalList_C_BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_IngameMenu_PalBox_PalList_C_BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalList_C_BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalList.WBP_IngameMenu_PalBox_PalList_C.BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_IngameMenu_PalBox_PalList_C_BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalList_C_BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalList_C_BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalList_C_BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_IngameMenu_PalBox_PalList_C_BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalList_C_BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalList.WBP_IngameMenu_PalBox_PalList_C.BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_IngameMenu_PalBox_PalList_C_BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalList_C_BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalList_C_BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalList_C_BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_IngameMenu_PalBox_PalList_C_BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalList_C_BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalList.WBP_IngameMenu_PalBox_PalList_C.DraggedButtonEvent
// 0x0010 (0x0010 - 0x0000)
struct WBP_IngameMenu_PalBox_PalList_C_DraggedButtonEvent final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalItemSlotPressType                         PressType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalList_C_DraggedButtonEvent) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalList_C_DraggedButtonEvent");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalList_C_DraggedButtonEvent) == 0x000010, "Wrong size on WBP_IngameMenu_PalBox_PalList_C_DraggedButtonEvent");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_DraggedButtonEvent, Widget) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalList_C_DraggedButtonEvent::Widget' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_DraggedButtonEvent, PressType) == 0x000008, "Member 'WBP_IngameMenu_PalBox_PalList_C_DraggedButtonEvent::PressType' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalList.WBP_IngameMenu_PalBox_PalList_C.ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList
// 0x0090 (0x0090 - 0x0000)
struct WBP_IngameMenu_PalBox_PalList_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(double NowHunger, double NowMaxHunger)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& NewNickName)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NewLevel)>               K2Node_CreateDelegate_OutputDelegate_4;            // 0x0060(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_2;               // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_1;               // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalList_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalList_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalList_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList) == 0x000090, "Wrong size on WBP_IngameMenu_PalBox_PalList_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList, EntryPoint) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalList_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_IngameMenu_PalBox_PalList_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'WBP_IngameMenu_PalBox_PalList_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'WBP_IngameMenu_PalBox_PalList_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList, CallFunc_PlayAnimation_ReturnValue_2) == 0x000028, "Member 'WBP_IngameMenu_PalBox_PalList_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList, K2Node_CreateDelegate_OutputDelegate_1) == 0x000030, "Member 'WBP_IngameMenu_PalBox_PalList_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList, K2Node_CreateDelegate_OutputDelegate_2) == 0x000040, "Member 'WBP_IngameMenu_PalBox_PalList_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList, K2Node_CreateDelegate_OutputDelegate_3) == 0x000050, "Member 'WBP_IngameMenu_PalBox_PalList_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList, K2Node_CreateDelegate_OutputDelegate_4) == 0x000060, "Member 'WBP_IngameMenu_PalBox_PalList_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList, K2Node_ComponentBoundEvent_Button_2) == 0x000070, "Member 'WBP_IngameMenu_PalBox_PalList_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList::K2Node_ComponentBoundEvent_Button_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList, K2Node_ComponentBoundEvent_Button_1) == 0x000078, "Member 'WBP_IngameMenu_PalBox_PalList_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList, K2Node_ComponentBoundEvent_Button) == 0x000080, "Member 'WBP_IngameMenu_PalBox_PalList_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000088, "Member 'WBP_IngameMenu_PalBox_PalList_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalList.WBP_IngameMenu_PalBox_PalList_C.OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_IngameMenu_PalBox_PalList_C_OnClicked__DelegateSignature final
{
public:
	class UPalIndividualCharacterSlot*            TargetSlot_0;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalList_C_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalList_C_OnClicked__DelegateSignature");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalList_C_OnClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_IngameMenu_PalBox_PalList_C_OnClicked__DelegateSignature");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnClicked__DelegateSignature, TargetSlot_0) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnClicked__DelegateSignature::TargetSlot_0' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalList.WBP_IngameMenu_PalBox_PalList_C.OnDragDetected
// 0x0118 (0x0118 - 0x0000)
struct WBP_IngameMenu_PalBox_PalList_C_OnDragDetected final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          PointerEvent;                                      // 0x0040(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                     Operation;                                         // 0x00D8(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UDragDropOperation*                     CallFunc_CreateDragDropOperation_ReturnValue;      // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType)> K2Node_CreateDelegate_OutputDelegate;              // 0x00E8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FA[0x6];                                       // 0x00FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalCommonCharacterSlotButton_C*    CallFunc_Create_ReturnValue;                       // 0x0110(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalList_C_OnDragDetected) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalList_C_OnDragDetected");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalList_C_OnDragDetected) == 0x000118, "Wrong size on WBP_IngameMenu_PalBox_PalList_C_OnDragDetected");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnDragDetected, MyGeometry) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnDragDetected::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnDragDetected, PointerEvent) == 0x000040, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnDragDetected::PointerEvent' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnDragDetected, Operation) == 0x0000D8, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnDragDetected::Operation' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnDragDetected, CallFunc_CreateDragDropOperation_ReturnValue) == 0x0000E0, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnDragDetected::CallFunc_CreateDragDropOperation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnDragDetected, K2Node_CreateDelegate_OutputDelegate) == 0x0000E8, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnDragDetected::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnDragDetected, CallFunc_IsValid_ReturnValue) == 0x0000F8, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnDragDetected::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnDragDetected, CallFunc_IsEmpty_ReturnValue) == 0x0000F9, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnDragDetected::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnDragDetected, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000100, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnDragDetected::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnDragDetected, CallFunc_MakeLiteralByte_ReturnValue) == 0x000108, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnDragDetected::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnDragDetected, CallFunc_Create_ReturnValue) == 0x000110, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnDragDetected::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalList.WBP_IngameMenu_PalBox_PalList_C.OnDrop
// 0x00F8 (0x00F8 - 0x0000)
struct WBP_IngameMenu_PalBox_PalList_C_OnDrop final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          PointerEvent;                                      // 0x0040(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                     Operation;                                         // 0x00D8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x00E0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalCharacterSlotButtonBase_C*      K2Node_DynamicCast_AsWBP_Pal_Character_Slot_Button_Base; // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalList_C_OnDrop) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalList_C_OnDrop");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalList_C_OnDrop) == 0x0000F8, "Wrong size on WBP_IngameMenu_PalBox_PalList_C_OnDrop");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnDrop, MyGeometry) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnDrop::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnDrop, PointerEvent) == 0x000040, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnDrop::PointerEvent' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnDrop, Operation) == 0x0000D8, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnDrop::Operation' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnDrop, ReturnValue) == 0x0000E0, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnDrop::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnDrop, K2Node_DynamicCast_AsWBP_Pal_Character_Slot_Button_Base) == 0x0000E8, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnDrop::K2Node_DynamicCast_AsWBP_Pal_Character_Slot_Button_Base' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnDrop, K2Node_DynamicCast_bSuccess) == 0x0000F0, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnDrop::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalList.WBP_IngameMenu_PalBox_PalList_C.OnHovered__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_IngameMenu_PalBox_PalList_C_OnHovered__DelegateSignature final
{
public:
	class UPalIndividualCharacterSlot*            Slot_0;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalList_C_OnHovered__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalList_C_OnHovered__DelegateSignature");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalList_C_OnHovered__DelegateSignature) == 0x000008, "Wrong size on WBP_IngameMenu_PalBox_PalList_C_OnHovered__DelegateSignature");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnHovered__DelegateSignature, Slot_0) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnHovered__DelegateSignature::Slot_0' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalList.WBP_IngameMenu_PalBox_PalList_C.OnMouseButtonUp
// 0x0320 (0x0320 - 0x0000)
struct WBP_IngameMenu_PalBox_PalList_C_OnMouseButtonUp final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0040(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00D8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FKey                                   CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x0190(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A9[0x7];                                      // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x01B0(0x00B8)()
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0268(0x00B8)()
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalList_C_OnMouseButtonUp) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalList_C_OnMouseButtonUp");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalList_C_OnMouseButtonUp) == 0x000320, "Wrong size on WBP_IngameMenu_PalBox_PalList_C_OnMouseButtonUp");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnMouseButtonUp, MyGeometry) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnMouseButtonUp::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnMouseButtonUp, MouseEvent) == 0x000040, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnMouseButtonUp::MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnMouseButtonUp, ReturnValue) == 0x0000D8, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnMouseButtonUp::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnMouseButtonUp, CallFunc_PointerEvent_GetEffectingButton_ReturnValue) == 0x000190, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnMouseButtonUp::CallFunc_PointerEvent_GetEffectingButton_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnMouseButtonUp, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x0001A8, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnMouseButtonUp::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnMouseButtonUp, CallFunc_Handled_ReturnValue) == 0x0001B0, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnMouseButtonUp::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnMouseButtonUp, CallFunc_Unhandled_ReturnValue) == 0x000268, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnMouseButtonUp::CallFunc_Unhandled_ReturnValue' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalList.WBP_IngameMenu_PalBox_PalList_C.OnPreviewMouseButtonDown
// 0x0248 (0x0248 - 0x0000)
struct WBP_IngameMenu_PalBox_PalList_C_OnPreviewMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0040(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00D8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_DetectDragIfPressed_ReturnValue;          // 0x0190(0x00B8)()
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalList_C_OnPreviewMouseButtonDown) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalList_C_OnPreviewMouseButtonDown");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalList_C_OnPreviewMouseButtonDown) == 0x000248, "Wrong size on WBP_IngameMenu_PalBox_PalList_C_OnPreviewMouseButtonDown");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnPreviewMouseButtonDown, MyGeometry) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnPreviewMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnPreviewMouseButtonDown, MouseEvent) == 0x000040, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnPreviewMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnPreviewMouseButtonDown, ReturnValue) == 0x0000D8, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnPreviewMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnPreviewMouseButtonDown, CallFunc_DetectDragIfPressed_ReturnValue) == 0x000190, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnPreviewMouseButtonDown::CallFunc_DetectDragIfPressed_ReturnValue' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalList.WBP_IngameMenu_PalBox_PalList_C.OnUpdateHandleSlot
// 0x0010 (0x0010 - 0x0000)
struct WBP_IngameMenu_PalBox_PalList_C_OnUpdateHandleSlot final
{
public:
	class UPalIndividualCharacterSlot*            Slot_0;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          LastHandle;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalList_C_OnUpdateHandleSlot) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalList_C_OnUpdateHandleSlot");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalList_C_OnUpdateHandleSlot) == 0x000010, "Wrong size on WBP_IngameMenu_PalBox_PalList_C_OnUpdateHandleSlot");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnUpdateHandleSlot, Slot_0) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnUpdateHandleSlot::Slot_0' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnUpdateHandleSlot, LastHandle) == 0x000008, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnUpdateHandleSlot::LastHandle' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalList.WBP_IngameMenu_PalBox_PalList_C.OnUpdateSkin
// 0x0068 (0x0068 - 0x0000)
struct WBP_IngameMenu_PalBox_PalList_C_OnUpdateSkin final
{
public:
	class FName                                   NewSkinName;                                       // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetCharacterIconTextureByIndividualHandle_ReturnValue; // 0x0020(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalList_C_OnUpdateSkin) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalList_C_OnUpdateSkin");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalList_C_OnUpdateSkin) == 0x000068, "Wrong size on WBP_IngameMenu_PalBox_PalList_C_OnUpdateSkin");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnUpdateSkin, NewSkinName) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnUpdateSkin::NewSkinName' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnUpdateSkin, CallFunc_GetBindedHandle_targetHandle) == 0x000008, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnUpdateSkin::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnUpdateSkin, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000010, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnUpdateSkin::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnUpdateSkin, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnUpdateSkin::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnUpdateSkin, CallFunc_GetCharacterIconTextureByIndividualHandle_ReturnValue) == 0x000020, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnUpdateSkin::CallFunc_GetCharacterIconTextureByIndividualHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnUpdateSkin, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000050, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnUpdateSkin::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnUpdateSkin, K2Node_DynamicCast_AsTexture_2D) == 0x000058, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnUpdateSkin::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnUpdateSkin, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnUpdateSkin::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_OnUpdateSkin, CallFunc_IsValid_ReturnValue_1) == 0x000061, "Member 'WBP_IngameMenu_PalBox_PalList_C_OnUpdateSkin::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalList.WBP_IngameMenu_PalBox_PalList_C.SetEnableDragDrop
// 0x0001 (0x0001 - 0x0000)
struct WBP_IngameMenu_PalBox_PalList_C_SetEnableDragDrop final
{
public:
	bool                                          bIsEnable;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalList_C_SetEnableDragDrop) == 0x000001, "Wrong alignment on WBP_IngameMenu_PalBox_PalList_C_SetEnableDragDrop");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalList_C_SetEnableDragDrop) == 0x000001, "Wrong size on WBP_IngameMenu_PalBox_PalList_C_SetEnableDragDrop");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_SetEnableDragDrop, bIsEnable) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalList_C_SetEnableDragDrop::bIsEnable' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalList.WBP_IngameMenu_PalBox_PalList_C.Setup
// 0x0020 (0x0020 - 0x0000)
struct WBP_IngameMenu_PalBox_PalList_C_Setup final
{
public:
	class UPalIndividualCharacterSlot*            TargetSlot_0;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UPalIndividualCharacterSlot* Slot, class UPalIndividualCharacterHandle* LastHandle)> K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalList_C_Setup) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalList_C_Setup");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalList_C_Setup) == 0x000020, "Wrong size on WBP_IngameMenu_PalBox_PalList_C_Setup");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_Setup, TargetSlot_0) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalList_C_Setup::TargetSlot_0' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_IngameMenu_PalBox_PalList_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_Setup, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'WBP_IngameMenu_PalBox_PalList_C_Setup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalList.WBP_IngameMenu_PalBox_PalList_C.Unbind
// 0x0030 (0x0030 - 0x0000)
struct WBP_IngameMenu_PalBox_PalList_C_Unbind final
{
public:
	TDelegate<void(class FName& NewSkinName)>     K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalList_C_Unbind) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalList_C_Unbind");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalList_C_Unbind) == 0x000030, "Wrong size on WBP_IngameMenu_PalBox_PalList_C_Unbind");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_Unbind, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalList_C_Unbind::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_Unbind, CallFunc_GetBindedHandle_targetHandle) == 0x000010, "Member 'WBP_IngameMenu_PalBox_PalList_C_Unbind::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_Unbind, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_IngameMenu_PalBox_PalList_C_Unbind::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_Unbind, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000020, "Member 'WBP_IngameMenu_PalBox_PalList_C_Unbind::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_Unbind, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'WBP_IngameMenu_PalBox_PalList_C_Unbind::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalList.WBP_IngameMenu_PalBox_PalList_C.Update Level
// 0x0038 (0x0038 - 0x0000)
struct WBP_IngameMenu_PalBox_PalList_C_Update_Level final
{
public:
	int32                                         NewLevel;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	class UMaterialInterface*                     Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_1;                            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     K2Node_Select_Default;                             // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalList_C_Update_Level) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalList_C_Update_Level");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalList_C_Update_Level) == 0x000038, "Wrong size on WBP_IngameMenu_PalBox_PalList_C_Update_Level");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_Update_Level, NewLevel) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalList_C_Update_Level::NewLevel' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_Update_Level, Temp_bool_Variable) == 0x000004, "Member 'WBP_IngameMenu_PalBox_PalList_C_Update_Level::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_Update_Level, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'WBP_IngameMenu_PalBox_PalList_C_Update_Level::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_Update_Level, Temp_object_Variable) == 0x000020, "Member 'WBP_IngameMenu_PalBox_PalList_C_Update_Level::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_Update_Level, Temp_object_Variable_1) == 0x000028, "Member 'WBP_IngameMenu_PalBox_PalList_C_Update_Level::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_Update_Level, K2Node_Select_Default) == 0x000030, "Member 'WBP_IngameMenu_PalBox_PalList_C_Update_Level::K2Node_Select_Default' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalList.WBP_IngameMenu_PalBox_PalList_C.UpdateFavorite
// 0x0020 (0x0020 - 0x0000)
struct WBP_IngameMenu_PalBox_PalList_C_UpdateFavorite final
{
public:
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFavoritePal_ReturnValue;                // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalList_C_UpdateFavorite) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalList_C_UpdateFavorite");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalList_C_UpdateFavorite) == 0x000020, "Wrong size on WBP_IngameMenu_PalBox_PalList_C_UpdateFavorite");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateFavorite, Temp_byte_Variable) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateFavorite::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateFavorite, Temp_byte_Variable_1) == 0x000001, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateFavorite::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateFavorite, Temp_bool_Variable) == 0x000002, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateFavorite::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateFavorite, CallFunc_GetBindedHandle_targetHandle) == 0x000008, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateFavorite::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateFavorite, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000010, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateFavorite::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateFavorite, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateFavorite::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateFavorite, CallFunc_IsValid_ReturnValue_1) == 0x000019, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateFavorite::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateFavorite, CallFunc_IsFavoritePal_ReturnValue) == 0x00001A, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateFavorite::CallFunc_IsFavoritePal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateFavorite, K2Node_Select_Default) == 0x00001B, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateFavorite::K2Node_Select_Default' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalList.WBP_IngameMenu_PalBox_PalList_C.UpdateHP
// 0x0158 (0x0158 - 0x0000)
struct WBP_IngameMenu_PalBox_PalList_C_UpdateHP final
{
public:
	struct FFixedPoint64                          NowHP;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                          NowMaxHP;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                          CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue; // 0x0010(0x0008)(NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;  // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Convert_FixedPoint64ToInt64_ReturnValue;  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_Int64ToText_ReturnValue;             // 0x0038(0x0018)()
	class FText                                   CallFunc_Conv_Int64ToText_ReturnValue_1;           // 0x0050(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0068(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00B8(0x0010)(ReferenceParm)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00D0(0x0018)()
	struct FFixedPoint64                          CallFunc_Convert_Int64ToFixedPoint64_ReturnValue;  // 0x00E8(0x0008)(NoDestructor)
	bool                                          CallFunc_EqualEqual_FixedPoint64FixedPoint64_ReturnValue; // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0108(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X;                          // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0130(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0138(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalList_C_UpdateHP) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalList_C_UpdateHP");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalList_C_UpdateHP) == 0x000158, "Wrong size on WBP_IngameMenu_PalBox_PalList_C_UpdateHP");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHP, NowHP) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHP::NowHP' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHP, NowMaxHP) == 0x000008, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHP::NowMaxHP' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHP, CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue) == 0x000010, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHP::CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHP, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHP::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHP, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue) == 0x000020, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHP::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHP, CallFunc_Convert_FixedPoint64ToInt64_ReturnValue) == 0x000028, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHP::CallFunc_Convert_FixedPoint64ToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHP, CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1) == 0x000030, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHP::CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHP, CallFunc_Conv_Int64ToText_ReturnValue) == 0x000038, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHP::CallFunc_Conv_Int64ToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHP, CallFunc_Conv_Int64ToText_ReturnValue_1) == 0x000050, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHP::CallFunc_Conv_Int64ToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHP, K2Node_MakeStruct_FormatArgumentData) == 0x000068, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHP::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHP, K2Node_MakeArray_Array) == 0x0000B8, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHP::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHP, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000C8, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHP::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHP, CallFunc_Format_ReturnValue) == 0x0000D0, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHP::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHP, CallFunc_Convert_Int64ToFixedPoint64_ReturnValue) == 0x0000E8, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHP::CallFunc_Convert_Int64ToFixedPoint64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHP, CallFunc_EqualEqual_FixedPoint64FixedPoint64_ReturnValue) == 0x0000F0, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHP::CallFunc_EqualEqual_FixedPoint64FixedPoint64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHP, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x0000F8, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHP::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHP, CallFunc_IsValid_ReturnValue) == 0x000100, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHP, CallFunc_GetSize_ReturnValue) == 0x000108, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHP::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHP, CallFunc_BreakVector2D_X) == 0x000118, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHP::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHP, CallFunc_BreakVector2D_Y) == 0x000120, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHP::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHP, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000128, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHP::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHP, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000130, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHP::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHP, CallFunc_MakeVector2D_ReturnValue) == 0x000138, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHP::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHP, CallFunc_IsValid_ReturnValue_1) == 0x000148, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHP::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHP, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x000150, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHP::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalList.WBP_IngameMenu_PalBox_PalList_C.UpdateHunger
// 0x0078 (0x0078 - 0x0000)
struct WBP_IngameMenu_PalBox_PalList_C_UpdateHunger final
{
public:
	double                                        NowHunger;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NowMaxHunger;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X;                          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalList_C_UpdateHunger) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalList_C_UpdateHunger");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalList_C_UpdateHunger) == 0x000078, "Wrong size on WBP_IngameMenu_PalBox_PalList_C_UpdateHunger");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHunger, NowHunger) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHunger::NowHunger' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHunger, NowMaxHunger) == 0x000008, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHunger::NowMaxHunger' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHunger, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000010, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHunger::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHunger, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000018, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHunger::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHunger, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHunger::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHunger, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000028, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHunger::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHunger, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHunger::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHunger, CallFunc_GetSize_ReturnValue) == 0x000038, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHunger::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHunger, CallFunc_BreakVector2D_X) == 0x000048, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHunger::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHunger, CallFunc_BreakVector2D_Y) == 0x000050, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHunger::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHunger, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000058, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHunger::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHunger, CallFunc_MakeVector2D_ReturnValue) == 0x000060, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHunger::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateHunger, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x000070, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateHunger::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalList.WBP_IngameMenu_PalBox_PalList_C.UpdateNickName
// 0x0028 (0x0028 - 0x0000)
struct WBP_IngameMenu_PalBox_PalList_C_UpdateNickName final
{
public:
	class FString                                 NewNickName;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalList_C_UpdateNickName) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalList_C_UpdateNickName");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalList_C_UpdateNickName) == 0x000028, "Wrong size on WBP_IngameMenu_PalBox_PalList_C_UpdateNickName");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateNickName, NewNickName) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateNickName::NewNickName' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalList_C_UpdateNickName, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'WBP_IngameMenu_PalBox_PalList_C_UpdateNickName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

