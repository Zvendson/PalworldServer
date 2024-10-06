#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "SlateCore_structs.hpp"


namespace PalServer::Params
{

// Function WBP_CompassIcon_ForPal.WBP_CompassIcon_ForPal_C.ExecuteUbergraph_WBP_CompassIcon_ForPal
// 0x01B0 (0x01B0 - 0x0000)
struct WBP_CompassIcon_ForPal_C_ExecuteUbergraph_WBP_CompassIcon_ForPal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0xC];                                        // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_Copy_ReturnValue;                           // 0x0010(0x00D0)()
	struct FSlateBrush                            K2Node_SetFieldsInStruct_StructOut;                // 0x00E0(0x00D0)()
};
static_assert(alignof(WBP_CompassIcon_ForPal_C_ExecuteUbergraph_WBP_CompassIcon_ForPal) == 0x000010, "Wrong alignment on WBP_CompassIcon_ForPal_C_ExecuteUbergraph_WBP_CompassIcon_ForPal");
static_assert(sizeof(WBP_CompassIcon_ForPal_C_ExecuteUbergraph_WBP_CompassIcon_ForPal) == 0x0001B0, "Wrong size on WBP_CompassIcon_ForPal_C_ExecuteUbergraph_WBP_CompassIcon_ForPal");
static_assert(offsetof(WBP_CompassIcon_ForPal_C_ExecuteUbergraph_WBP_CompassIcon_ForPal, EntryPoint) == 0x000000, "Member 'WBP_CompassIcon_ForPal_C_ExecuteUbergraph_WBP_CompassIcon_ForPal::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForPal_C_ExecuteUbergraph_WBP_CompassIcon_ForPal, K2Node_Copy_ReturnValue) == 0x000010, "Member 'WBP_CompassIcon_ForPal_C_ExecuteUbergraph_WBP_CompassIcon_ForPal::K2Node_Copy_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForPal_C_ExecuteUbergraph_WBP_CompassIcon_ForPal, K2Node_SetFieldsInStruct_StructOut) == 0x0000E0, "Member 'WBP_CompassIcon_ForPal_C_ExecuteUbergraph_WBP_CompassIcon_ForPal::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

// Function WBP_CompassIcon_ForPal.WBP_CompassIcon_ForPal_C.SetupTexture
// 0x0398 (0x0398 - 0x0000)
struct WBP_CompassIcon_ForPal_C_SetupTexture final
{
public:
	TSoftObjectPtr<class UTexture2D>              SoftTexture;                                       // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue_1; // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalLocationManager*                    CallFunc_GetLocationManager_ReturnValue;           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalLocationBase*                       CallFunc_GetLocation_ReturnValue;                  // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationPoint_DroppedCharacter*     K2Node_DynamicCast_AsPal_Location_Point_Dropped_Character; // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalMapObjectPickableCharacterModelBase* CallFunc_GetMapObjectConcreteModel_ReturnValue;    // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalLocationPoint_Character*            K2Node_DynamicCast_AsPal_Location_Point_Character; // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalCharacterLocationType                     CallFunc_GetCharacterLocationType_ReturnValue;     // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x007B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetCharacterID_ReturnValue;               // 0x007C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalIndividualCharacterSaveParameter   CallFunc_GetCharacterSaveParameter_ReturnValue;    // 0x0088(0x02A8)(ConstParm)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetCharacterIconTexture_ReturnValue;      // 0x0330(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	class FName                                   CallFunc_GetSaveParameterValue_CharacterID_ReturnValue; // 0x0360(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetCharacterIconTexture_ReturnValue_1;    // 0x0368(0x0030)(UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CompassIcon_ForPal_C_SetupTexture) == 0x000008, "Wrong alignment on WBP_CompassIcon_ForPal_C_SetupTexture");
static_assert(sizeof(WBP_CompassIcon_ForPal_C_SetupTexture) == 0x000398, "Wrong size on WBP_CompassIcon_ForPal_C_SetupTexture");
static_assert(offsetof(WBP_CompassIcon_ForPal_C_SetupTexture, SoftTexture) == 0x000000, "Member 'WBP_CompassIcon_ForPal_C_SetupTexture::SoftTexture' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForPal_C_SetupTexture, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000030, "Member 'WBP_CompassIcon_ForPal_C_SetupTexture::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForPal_C_SetupTexture, CallFunc_GetDatabaseCharacterParameter_ReturnValue_1) == 0x000038, "Member 'WBP_CompassIcon_ForPal_C_SetupTexture::CallFunc_GetDatabaseCharacterParameter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForPal_C_SetupTexture, CallFunc_GetLocationManager_ReturnValue) == 0x000040, "Member 'WBP_CompassIcon_ForPal_C_SetupTexture::CallFunc_GetLocationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForPal_C_SetupTexture, CallFunc_GetLocation_ReturnValue) == 0x000048, "Member 'WBP_CompassIcon_ForPal_C_SetupTexture::CallFunc_GetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForPal_C_SetupTexture, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'WBP_CompassIcon_ForPal_C_SetupTexture::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForPal_C_SetupTexture, K2Node_DynamicCast_AsPal_Location_Point_Dropped_Character) == 0x000058, "Member 'WBP_CompassIcon_ForPal_C_SetupTexture::K2Node_DynamicCast_AsPal_Location_Point_Dropped_Character' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForPal_C_SetupTexture, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'WBP_CompassIcon_ForPal_C_SetupTexture::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForPal_C_SetupTexture, CallFunc_GetMapObjectConcreteModel_ReturnValue) == 0x000068, "Member 'WBP_CompassIcon_ForPal_C_SetupTexture::CallFunc_GetMapObjectConcreteModel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForPal_C_SetupTexture, K2Node_DynamicCast_AsPal_Location_Point_Character) == 0x000070, "Member 'WBP_CompassIcon_ForPal_C_SetupTexture::K2Node_DynamicCast_AsPal_Location_Point_Character' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForPal_C_SetupTexture, K2Node_DynamicCast_bSuccess_1) == 0x000078, "Member 'WBP_CompassIcon_ForPal_C_SetupTexture::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForPal_C_SetupTexture, CallFunc_IsValid_ReturnValue_1) == 0x000079, "Member 'WBP_CompassIcon_ForPal_C_SetupTexture::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForPal_C_SetupTexture, CallFunc_GetCharacterLocationType_ReturnValue) == 0x00007A, "Member 'WBP_CompassIcon_ForPal_C_SetupTexture::CallFunc_GetCharacterLocationType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForPal_C_SetupTexture, K2Node_SwitchEnum_CmpSuccess) == 0x00007B, "Member 'WBP_CompassIcon_ForPal_C_SetupTexture::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForPal_C_SetupTexture, CallFunc_GetCharacterID_ReturnValue) == 0x00007C, "Member 'WBP_CompassIcon_ForPal_C_SetupTexture::CallFunc_GetCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForPal_C_SetupTexture, CallFunc_GetCharacterSaveParameter_ReturnValue) == 0x000088, "Member 'WBP_CompassIcon_ForPal_C_SetupTexture::CallFunc_GetCharacterSaveParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForPal_C_SetupTexture, CallFunc_GetCharacterIconTexture_ReturnValue) == 0x000330, "Member 'WBP_CompassIcon_ForPal_C_SetupTexture::CallFunc_GetCharacterIconTexture_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForPal_C_SetupTexture, CallFunc_GetSaveParameterValue_CharacterID_ReturnValue) == 0x000360, "Member 'WBP_CompassIcon_ForPal_C_SetupTexture::CallFunc_GetSaveParameterValue_CharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForPal_C_SetupTexture, CallFunc_GetCharacterIconTexture_ReturnValue_1) == 0x000368, "Member 'WBP_CompassIcon_ForPal_C_SetupTexture::CallFunc_GetCharacterIconTexture_ReturnValue_1' has a wrong offset!");

}

