#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function BP_UIOtomoListModel.BP_UIOtomoListModel_C.GetCurrentPageSlots
// 0x0050 (0x0050 - 0x0000)
struct BP_UIOtomoListModel_C_GetCurrentPageSlots final
{
public:
	TArray<class UPalIndividualCharacterSlot*>    OutSlots;                                          // 0x0000(0x0010)(Parm, OutParm)
	class UPalOtomoHolderComponentBase*           OtomoHolder;                                       // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterContainer*       CallFunc_TryGetContainer_Container;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryGetContainer_ReturnValue;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UPalIndividualCharacterSlot*>    CallFunc_GetSlots_ReturnValue;                     // 0x0030(0x0010)(ReferenceParm)
	class UPalOtomoHolderComponentBase*           CallFunc_GetComponentByClass_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UIOtomoListModel_C_GetCurrentPageSlots) == 0x000008, "Wrong alignment on BP_UIOtomoListModel_C_GetCurrentPageSlots");
static_assert(sizeof(BP_UIOtomoListModel_C_GetCurrentPageSlots) == 0x000050, "Wrong size on BP_UIOtomoListModel_C_GetCurrentPageSlots");
static_assert(offsetof(BP_UIOtomoListModel_C_GetCurrentPageSlots, OutSlots) == 0x000000, "Member 'BP_UIOtomoListModel_C_GetCurrentPageSlots::OutSlots' has a wrong offset!");
static_assert(offsetof(BP_UIOtomoListModel_C_GetCurrentPageSlots, OtomoHolder) == 0x000010, "Member 'BP_UIOtomoListModel_C_GetCurrentPageSlots::OtomoHolder' has a wrong offset!");
static_assert(offsetof(BP_UIOtomoListModel_C_GetCurrentPageSlots, CallFunc_TryGetContainer_Container) == 0x000018, "Member 'BP_UIOtomoListModel_C_GetCurrentPageSlots::CallFunc_TryGetContainer_Container' has a wrong offset!");
static_assert(offsetof(BP_UIOtomoListModel_C_GetCurrentPageSlots, CallFunc_TryGetContainer_ReturnValue) == 0x000020, "Member 'BP_UIOtomoListModel_C_GetCurrentPageSlots::CallFunc_TryGetContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIOtomoListModel_C_GetCurrentPageSlots, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000028, "Member 'BP_UIOtomoListModel_C_GetCurrentPageSlots::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIOtomoListModel_C_GetCurrentPageSlots, CallFunc_GetSlots_ReturnValue) == 0x000030, "Member 'BP_UIOtomoListModel_C_GetCurrentPageSlots::CallFunc_GetSlots_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIOtomoListModel_C_GetCurrentPageSlots, CallFunc_GetComponentByClass_ReturnValue) == 0x000040, "Member 'BP_UIOtomoListModel_C_GetCurrentPageSlots::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIOtomoListModel_C_GetCurrentPageSlots, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'BP_UIOtomoListModel_C_GetCurrentPageSlots::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_UIOtomoListModel.BP_UIOtomoListModel_C.GetSlotCountInPage
// 0x0020 (0x0020 - 0x0000)
struct BP_UIOtomoListModel_C_GetSlotCountInPage final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPalIndividualCharacterSlot*>    CallFunc_GetCurrentPageSlots_OutSlots;             // 0x0008(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UIOtomoListModel_C_GetSlotCountInPage) == 0x000008, "Wrong alignment on BP_UIOtomoListModel_C_GetSlotCountInPage");
static_assert(sizeof(BP_UIOtomoListModel_C_GetSlotCountInPage) == 0x000020, "Wrong size on BP_UIOtomoListModel_C_GetSlotCountInPage");
static_assert(offsetof(BP_UIOtomoListModel_C_GetSlotCountInPage, ReturnValue) == 0x000000, "Member 'BP_UIOtomoListModel_C_GetSlotCountInPage::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIOtomoListModel_C_GetSlotCountInPage, CallFunc_GetCurrentPageSlots_OutSlots) == 0x000008, "Member 'BP_UIOtomoListModel_C_GetSlotCountInPage::CallFunc_GetCurrentPageSlots_OutSlots' has a wrong offset!");
static_assert(offsetof(BP_UIOtomoListModel_C_GetSlotCountInPage, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'BP_UIOtomoListModel_C_GetSlotCountInPage::CallFunc_Array_Length_ReturnValue' has a wrong offset!");

}

