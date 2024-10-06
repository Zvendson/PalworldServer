#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "SlateCore_structs.hpp"


namespace PalServer::Params
{

// Function WBP_CompassIcon_ForMapObject.WBP_CompassIcon_ForMapObject_C.ExecuteUbergraph_WBP_CompassIcon_ForMapObject
// 0x01B0 (0x01B0 - 0x0000)
struct WBP_CompassIcon_ForMapObject_C_ExecuteUbergraph_WBP_CompassIcon_ForMapObject final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0xC];                                        // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_Copy_ReturnValue;                           // 0x0010(0x00D0)()
	struct FSlateBrush                            K2Node_SetFieldsInStruct_StructOut;                // 0x00E0(0x00D0)()
};
static_assert(alignof(WBP_CompassIcon_ForMapObject_C_ExecuteUbergraph_WBP_CompassIcon_ForMapObject) == 0x000010, "Wrong alignment on WBP_CompassIcon_ForMapObject_C_ExecuteUbergraph_WBP_CompassIcon_ForMapObject");
static_assert(sizeof(WBP_CompassIcon_ForMapObject_C_ExecuteUbergraph_WBP_CompassIcon_ForMapObject) == 0x0001B0, "Wrong size on WBP_CompassIcon_ForMapObject_C_ExecuteUbergraph_WBP_CompassIcon_ForMapObject");
static_assert(offsetof(WBP_CompassIcon_ForMapObject_C_ExecuteUbergraph_WBP_CompassIcon_ForMapObject, EntryPoint) == 0x000000, "Member 'WBP_CompassIcon_ForMapObject_C_ExecuteUbergraph_WBP_CompassIcon_ForMapObject::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForMapObject_C_ExecuteUbergraph_WBP_CompassIcon_ForMapObject, K2Node_Copy_ReturnValue) == 0x000010, "Member 'WBP_CompassIcon_ForMapObject_C_ExecuteUbergraph_WBP_CompassIcon_ForMapObject::K2Node_Copy_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForMapObject_C_ExecuteUbergraph_WBP_CompassIcon_ForMapObject, K2Node_SetFieldsInStruct_StructOut) == 0x0000E0, "Member 'WBP_CompassIcon_ForMapObject_C_ExecuteUbergraph_WBP_CompassIcon_ForMapObject::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

// Function WBP_CompassIcon_ForMapObject.WBP_CompassIcon_ForMapObject_C.SetupTexture
// 0x0148 (0x0148 - 0x0000)
struct WBP_CompassIcon_ForMapObject_C_SetupTexture final
{
public:
	TSoftObjectPtr<class UTexture2D>              SoftTexture;                                       // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FPalLocationUIData_TableRow            CallFunc_GetDataTableRowFromName_OutRow;           // 0x0030(0x00A8)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationManager*                    CallFunc_GetLocationManager_ReturnValue;           // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationBase*                       CallFunc_GetLocation_ReturnValue;                  // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalLocationPoint_MapObject*            K2Node_DynamicCast_AsPal_Location_Point_Map_Object; // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_102[0x2];                                      // 0x0102(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetMapObjectName_MapObjectName;           // 0x0104(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMapObjectName_ReturnValue;             // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10D[0x3];                                      // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_Map_Find_Value;                           // 0x0110(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CompassIcon_ForMapObject_C_SetupTexture) == 0x000008, "Wrong alignment on WBP_CompassIcon_ForMapObject_C_SetupTexture");
static_assert(sizeof(WBP_CompassIcon_ForMapObject_C_SetupTexture) == 0x000148, "Wrong size on WBP_CompassIcon_ForMapObject_C_SetupTexture");
static_assert(offsetof(WBP_CompassIcon_ForMapObject_C_SetupTexture, SoftTexture) == 0x000000, "Member 'WBP_CompassIcon_ForMapObject_C_SetupTexture::SoftTexture' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForMapObject_C_SetupTexture, CallFunc_GetDataTableRowFromName_OutRow) == 0x000030, "Member 'WBP_CompassIcon_ForMapObject_C_SetupTexture::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForMapObject_C_SetupTexture, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000D8, "Member 'WBP_CompassIcon_ForMapObject_C_SetupTexture::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForMapObject_C_SetupTexture, CallFunc_GetLocationManager_ReturnValue) == 0x0000E0, "Member 'WBP_CompassIcon_ForMapObject_C_SetupTexture::CallFunc_GetLocationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForMapObject_C_SetupTexture, CallFunc_IsValid_ReturnValue) == 0x0000E8, "Member 'WBP_CompassIcon_ForMapObject_C_SetupTexture::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForMapObject_C_SetupTexture, CallFunc_GetLocation_ReturnValue) == 0x0000F0, "Member 'WBP_CompassIcon_ForMapObject_C_SetupTexture::CallFunc_GetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForMapObject_C_SetupTexture, K2Node_DynamicCast_AsPal_Location_Point_Map_Object) == 0x0000F8, "Member 'WBP_CompassIcon_ForMapObject_C_SetupTexture::K2Node_DynamicCast_AsPal_Location_Point_Map_Object' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForMapObject_C_SetupTexture, K2Node_DynamicCast_bSuccess) == 0x000100, "Member 'WBP_CompassIcon_ForMapObject_C_SetupTexture::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForMapObject_C_SetupTexture, CallFunc_IsValid_ReturnValue_1) == 0x000101, "Member 'WBP_CompassIcon_ForMapObject_C_SetupTexture::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForMapObject_C_SetupTexture, CallFunc_GetMapObjectName_MapObjectName) == 0x000104, "Member 'WBP_CompassIcon_ForMapObject_C_SetupTexture::CallFunc_GetMapObjectName_MapObjectName' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForMapObject_C_SetupTexture, CallFunc_GetMapObjectName_ReturnValue) == 0x00010C, "Member 'WBP_CompassIcon_ForMapObject_C_SetupTexture::CallFunc_GetMapObjectName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForMapObject_C_SetupTexture, CallFunc_Map_Find_Value) == 0x000110, "Member 'WBP_CompassIcon_ForMapObject_C_SetupTexture::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_CompassIcon_ForMapObject_C_SetupTexture, CallFunc_Map_Find_ReturnValue) == 0x000140, "Member 'WBP_CompassIcon_ForMapObject_C_SetupTexture::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

}

