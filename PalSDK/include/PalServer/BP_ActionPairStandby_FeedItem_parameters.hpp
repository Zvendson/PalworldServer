#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function BP_ActionPairStandby_FeedItem.BP_ActionPairStandby_FeedItem_C.OnSetCallAIAction
// 0x0048 (0x0048 - 0x0000)
struct BP_ActionPairStandby_FeedItem_C_OnSetCallAIAction final
{
public:
	class UPalAIActionBase*                       CallAction;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_AIActionPairCall_FeedItem_C*        CallAIActionFeedItem;                              // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalNetArchive                         CallFunc_GetBlackboard_ReturnValue;                // 0x0010(0x0010)(ConstParm)
	struct FPalItemSlotId                         CallFunc_ReadPlayerFeedItemTo_ItemSlotId;          // 0x0020(0x0014)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_ReadPlayerFeedItemTo_ItemNum;             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_AIActionPairCall_FeedItem_C*        K2Node_DynamicCast_AsBP_AIAction_Pair_Call_Feed_Item; // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPairStandby_FeedItem_C_OnSetCallAIAction) == 0x000008, "Wrong alignment on BP_ActionPairStandby_FeedItem_C_OnSetCallAIAction");
static_assert(sizeof(BP_ActionPairStandby_FeedItem_C_OnSetCallAIAction) == 0x000048, "Wrong size on BP_ActionPairStandby_FeedItem_C_OnSetCallAIAction");
static_assert(offsetof(BP_ActionPairStandby_FeedItem_C_OnSetCallAIAction, CallAction) == 0x000000, "Member 'BP_ActionPairStandby_FeedItem_C_OnSetCallAIAction::CallAction' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandby_FeedItem_C_OnSetCallAIAction, CallAIActionFeedItem) == 0x000008, "Member 'BP_ActionPairStandby_FeedItem_C_OnSetCallAIAction::CallAIActionFeedItem' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandby_FeedItem_C_OnSetCallAIAction, CallFunc_GetBlackboard_ReturnValue) == 0x000010, "Member 'BP_ActionPairStandby_FeedItem_C_OnSetCallAIAction::CallFunc_GetBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandby_FeedItem_C_OnSetCallAIAction, CallFunc_ReadPlayerFeedItemTo_ItemSlotId) == 0x000020, "Member 'BP_ActionPairStandby_FeedItem_C_OnSetCallAIAction::CallFunc_ReadPlayerFeedItemTo_ItemSlotId' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandby_FeedItem_C_OnSetCallAIAction, CallFunc_ReadPlayerFeedItemTo_ItemNum) == 0x000034, "Member 'BP_ActionPairStandby_FeedItem_C_OnSetCallAIAction::CallFunc_ReadPlayerFeedItemTo_ItemNum' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandby_FeedItem_C_OnSetCallAIAction, K2Node_DynamicCast_AsBP_AIAction_Pair_Call_Feed_Item) == 0x000038, "Member 'BP_ActionPairStandby_FeedItem_C_OnSetCallAIAction::K2Node_DynamicCast_AsBP_AIAction_Pair_Call_Feed_Item' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandby_FeedItem_C_OnSetCallAIAction, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_ActionPairStandby_FeedItem_C_OnSetCallAIAction::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

