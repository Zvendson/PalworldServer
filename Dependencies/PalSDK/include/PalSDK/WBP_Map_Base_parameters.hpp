#pragma once

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "SlateCore_structs.hpp"
#include "InputCore_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_Map_Base.WBP_Map_Base_C.AddBossIcon
// 0x0060 (0x0060 - 0x0000)
struct WBP_Map_Base_C_AddBossIcon final
{
public:
	struct FPalUIBossSpawnerLoactionData          SpawnerData;                                       // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Map_IconBoss_C*                    CallFunc_Create_ReturnValue;                       // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Add_Icon_By_Location_Added;               // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Base_C_AddBossIcon) == 0x000008, "Wrong alignment on WBP_Map_Base_C_AddBossIcon");
static_assert(sizeof(WBP_Map_Base_C_AddBossIcon) == 0x000060, "Wrong size on WBP_Map_Base_C_AddBossIcon");
static_assert(offsetof(WBP_Map_Base_C_AddBossIcon, SpawnerData) == 0x000000, "Member 'WBP_Map_Base_C_AddBossIcon::SpawnerData' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_AddBossIcon, CallFunc_GetHUDService_ReturnValue) == 0x000038, "Member 'WBP_Map_Base_C_AddBossIcon::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_AddBossIcon, CallFunc_Array_Contains_ReturnValue) == 0x000040, "Member 'WBP_Map_Base_C_AddBossIcon::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_AddBossIcon, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000048, "Member 'WBP_Map_Base_C_AddBossIcon::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_AddBossIcon, CallFunc_Create_ReturnValue) == 0x000050, "Member 'WBP_Map_Base_C_AddBossIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_AddBossIcon, CallFunc_Add_Icon_By_Location_Added) == 0x000058, "Member 'WBP_Map_Base_C_AddBossIcon::CallFunc_Add_Icon_By_Location_Added' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_AddBossIcon, CallFunc_Array_Add_ReturnValue) == 0x00005C, "Member 'WBP_Map_Base_C_AddBossIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function WBP_Map_Base.WBP_Map_Base_C.AddCustomIcon
// 0x0050 (0x0050 - 0x0000)
struct WBP_Map_Base_C_AddCustomIcon final
{
public:
	struct FGuid                                  LocationId;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalCustomMarkerSaveData               MarkerData;                                        // 0x0010(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Map_IconCustom_C*                  CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Add_Icon_By_Location_Added;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Base_C_AddCustomIcon) == 0x000008, "Wrong alignment on WBP_Map_Base_C_AddCustomIcon");
static_assert(sizeof(WBP_Map_Base_C_AddCustomIcon) == 0x000050, "Wrong size on WBP_Map_Base_C_AddCustomIcon");
static_assert(offsetof(WBP_Map_Base_C_AddCustomIcon, LocationId) == 0x000000, "Member 'WBP_Map_Base_C_AddCustomIcon::LocationId' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_AddCustomIcon, MarkerData) == 0x000010, "Member 'WBP_Map_Base_C_AddCustomIcon::MarkerData' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_AddCustomIcon, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000030, "Member 'WBP_Map_Base_C_AddCustomIcon::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_AddCustomIcon, CallFunc_Create_ReturnValue) == 0x000038, "Member 'WBP_Map_Base_C_AddCustomIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_AddCustomIcon, CallFunc_Array_Get_Item) == 0x000040, "Member 'WBP_Map_Base_C_AddCustomIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_AddCustomIcon, CallFunc_Add_Icon_By_Location_Added) == 0x000048, "Member 'WBP_Map_Base_C_AddCustomIcon::CallFunc_Add_Icon_By_Location_Added' has a wrong offset!");

// Function WBP_Map_Base.WBP_Map_Base_C.ChangeCustomIcon
// 0x0040 (0x0040 - 0x0000)
struct WBP_Map_Base_C_ChangeCustomIcon final
{
public:
	class UWBP_Map_IconCustom_C*                  Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Index_0;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  RemoveId;                                          // 0x000C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Map_IconCustom_C*                  K2Node_DynamicCast_AsWBP_Map_Icon_Custom;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalLocationManager*                    CallFunc_GetLocationManager_ReturnValue;           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Base_C_ChangeCustomIcon) == 0x000008, "Wrong alignment on WBP_Map_Base_C_ChangeCustomIcon");
static_assert(sizeof(WBP_Map_Base_C_ChangeCustomIcon) == 0x000040, "Wrong size on WBP_Map_Base_C_ChangeCustomIcon");
static_assert(offsetof(WBP_Map_Base_C_ChangeCustomIcon, Icon) == 0x000000, "Member 'WBP_Map_Base_C_ChangeCustomIcon::Icon' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeCustomIcon, Index_0) == 0x000008, "Member 'WBP_Map_Base_C_ChangeCustomIcon::Index_0' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeCustomIcon, RemoveId) == 0x00000C, "Member 'WBP_Map_Base_C_ChangeCustomIcon::RemoveId' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeCustomIcon, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'WBP_Map_Base_C_ChangeCustomIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeCustomIcon, K2Node_DynamicCast_AsWBP_Map_Icon_Custom) == 0x000020, "Member 'WBP_Map_Base_C_ChangeCustomIcon::K2Node_DynamicCast_AsWBP_Map_Icon_Custom' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeCustomIcon, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_Map_Base_C_ChangeCustomIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeCustomIcon, CallFunc_Array_Get_Item) == 0x000030, "Member 'WBP_Map_Base_C_ChangeCustomIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeCustomIcon, CallFunc_GetLocationManager_ReturnValue) == 0x000038, "Member 'WBP_Map_Base_C_ChangeCustomIcon::CallFunc_GetLocationManager_ReturnValue' has a wrong offset!");

// Function WBP_Map_Base.WBP_Map_Base_C.ChangeFilter
// 0x01E8 (0x01E8 - 0x0000)
struct WBP_Map_Base_C_ChangeFilter final
{
public:
	EPalLocationType                              FilterMap;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnable;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<EPalLocationType>                        TempFilter;                                        // 0x0008(0x0050)(Edit, BlueprintVisible)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalLocationType                              Temp_byte_Variable_1;                              // 0x005A(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalLocationType                              Temp_byte_Variable_4;                              // 0x005E(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalLocationType                              Temp_byte_Variable_5;                              // 0x005F(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_6;                              // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_7;                              // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_8;                              // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_9;                              // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0066(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_10;                             // 0x0067(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_11;                             // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<EPalLocationType>                        K2Node_MakeVariable_MakeVariableOutput;            // 0x0070(0x0050)()
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_12;                             // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x3];                                       // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_4;                  // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_4;                   // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_104[0x4];                                      // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_Map_IconCustom_C*>          CallFunc_Map_Values_Values;                        // 0x0108(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWBP_Map_IconBoss_C*                    CallFunc_Array_Get_Item;                           // 0x0118(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Map_IconCustom_C*                  CallFunc_Array_Get_Item_1;                         // 0x0120(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsHiding_Hiding;                       // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_129[0x3];                                      // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0135(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Set_Contains_ReturnValue;                 // 0x0136(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalLocationType                              Temp_byte_Variable_13;                             // 0x0137(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Set_Contains_ReturnValue_1;               // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x013A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x013B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13C[0x4];                                      // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<EPalLocationType>                        K2Node_MakeSet_Set;                                // 0x0140(0x0050)()
	bool                                          CallFunc_Set_Contains_ReturnValue_2;               // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Set_Contains_ReturnValue_3;               // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0192(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x0193(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Set_Remove_ReturnValue;                   // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_195[0x3];                                      // 0x0195(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Map_IconPlayer_C*                  CallFunc_Array_Get_Item_2;                         // 0x0198(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A5[0x3];                                      // 0x01A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Map_IconDeath_C*                   CallFunc_Array_Get_Item_3;                         // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_WorldMap_IconBase_NoDesign_C*> CallFunc_Map_Values_Values_1;                      // 0x01B0(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWBP_WorldMap_IconBase_NoDesign_C*      CallFunc_Array_Get_Item_4;                         // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsHiding_Hiding_1;                     // 0x01CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x01CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CE[0x2];                                      // 0x01CE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationPoint*                      CallFunc_GetLocationPoint_LocationPoint;           // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalLocationType                              CallFunc_GetType_ReturnValue;                      // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D9[0x3];                                      // 0x01D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Set_Contains_ReturnValue_4;               // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x01E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_4;                           // 0x01E3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Base_C_ChangeFilter) == 0x000008, "Wrong alignment on WBP_Map_Base_C_ChangeFilter");
static_assert(sizeof(WBP_Map_Base_C_ChangeFilter) == 0x0001E8, "Wrong size on WBP_Map_Base_C_ChangeFilter");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, FilterMap) == 0x000000, "Member 'WBP_Map_Base_C_ChangeFilter::FilterMap' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, IsEnable) == 0x000001, "Member 'WBP_Map_Base_C_ChangeFilter::IsEnable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, TempFilter) == 0x000008, "Member 'WBP_Map_Base_C_ChangeFilter::TempFilter' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, Temp_byte_Variable) == 0x000058, "Member 'WBP_Map_Base_C_ChangeFilter::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000059, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, Temp_byte_Variable_1) == 0x00005A, "Member 'WBP_Map_Base_C_ChangeFilter::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, Temp_bool_Variable) == 0x00005B, "Member 'WBP_Map_Base_C_ChangeFilter::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, Temp_byte_Variable_2) == 0x00005C, "Member 'WBP_Map_Base_C_ChangeFilter::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, Temp_byte_Variable_3) == 0x00005D, "Member 'WBP_Map_Base_C_ChangeFilter::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, Temp_byte_Variable_4) == 0x00005E, "Member 'WBP_Map_Base_C_ChangeFilter::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, Temp_byte_Variable_5) == 0x00005F, "Member 'WBP_Map_Base_C_ChangeFilter::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, Temp_bool_Variable_1) == 0x000060, "Member 'WBP_Map_Base_C_ChangeFilter::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, Temp_byte_Variable_6) == 0x000061, "Member 'WBP_Map_Base_C_ChangeFilter::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, Temp_byte_Variable_7) == 0x000062, "Member 'WBP_Map_Base_C_ChangeFilter::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, Temp_bool_Variable_2) == 0x000063, "Member 'WBP_Map_Base_C_ChangeFilter::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, Temp_byte_Variable_8) == 0x000064, "Member 'WBP_Map_Base_C_ChangeFilter::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, Temp_byte_Variable_9) == 0x000065, "Member 'WBP_Map_Base_C_ChangeFilter::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, Temp_bool_Variable_3) == 0x000066, "Member 'WBP_Map_Base_C_ChangeFilter::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, Temp_byte_Variable_10) == 0x000067, "Member 'WBP_Map_Base_C_ChangeFilter::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, Temp_byte_Variable_11) == 0x000068, "Member 'WBP_Map_Base_C_ChangeFilter::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, K2Node_MakeVariable_MakeVariableOutput) == 0x000070, "Member 'WBP_Map_Base_C_ChangeFilter::K2Node_MakeVariable_MakeVariableOutput' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, Temp_int_Array_Index_Variable) == 0x0000C0, "Member 'WBP_Map_Base_C_ChangeFilter::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, Temp_int_Loop_Counter_Variable) == 0x0000C4, "Member 'WBP_Map_Base_C_ChangeFilter::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_Add_IntInt_ReturnValue) == 0x0000C8, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, Temp_int_Array_Index_Variable_1) == 0x0000CC, "Member 'WBP_Map_Base_C_ChangeFilter::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, Temp_byte_Variable_12) == 0x0000D0, "Member 'WBP_Map_Base_C_ChangeFilter::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, Temp_int_Loop_Counter_Variable_1) == 0x0000D4, "Member 'WBP_Map_Base_C_ChangeFilter::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000D8, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, Temp_int_Loop_Counter_Variable_2) == 0x0000DC, "Member 'WBP_Map_Base_C_ChangeFilter::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000E0, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, Temp_int_Array_Index_Variable_2) == 0x0000E4, "Member 'WBP_Map_Base_C_ChangeFilter::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, Temp_int_Loop_Counter_Variable_3) == 0x0000E8, "Member 'WBP_Map_Base_C_ChangeFilter::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_Add_IntInt_ReturnValue_3) == 0x0000EC, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, Temp_bool_Variable_4) == 0x0000F0, "Member 'WBP_Map_Base_C_ChangeFilter::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, Temp_int_Array_Index_Variable_3) == 0x0000F4, "Member 'WBP_Map_Base_C_ChangeFilter::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, Temp_int_Loop_Counter_Variable_4) == 0x0000F8, "Member 'WBP_Map_Base_C_ChangeFilter::Temp_int_Loop_Counter_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_Add_IntInt_ReturnValue_4) == 0x0000FC, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, Temp_int_Array_Index_Variable_4) == 0x000100, "Member 'WBP_Map_Base_C_ChangeFilter::Temp_int_Array_Index_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_Map_Values_Values) == 0x000108, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_Array_Get_Item) == 0x000118, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_Array_Get_Item_1) == 0x000120, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_GetIsHiding_Hiding) == 0x000128, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_GetIsHiding_Hiding' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_Array_Length_ReturnValue) == 0x00012C, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_Array_Length_ReturnValue_1) == 0x000130, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_Less_IntInt_ReturnValue) == 0x000134, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_Less_IntInt_ReturnValue_1) == 0x000135, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_Set_Contains_ReturnValue) == 0x000136, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_Set_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, Temp_byte_Variable_13) == 0x000137, "Member 'WBP_Map_Base_C_ChangeFilter::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_BooleanOR_ReturnValue) == 0x000138, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_Set_Contains_ReturnValue_1) == 0x000139, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_Set_Contains_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, K2Node_Select_Default) == 0x00013A, "Member 'WBP_Map_Base_C_ChangeFilter::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, K2Node_Select_Default_1) == 0x00013B, "Member 'WBP_Map_Base_C_ChangeFilter::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, K2Node_MakeSet_Set) == 0x000140, "Member 'WBP_Map_Base_C_ChangeFilter::K2Node_MakeSet_Set' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_Set_Contains_ReturnValue_2) == 0x000190, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_Set_Contains_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_Set_Contains_ReturnValue_3) == 0x000191, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_Set_Contains_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, K2Node_Select_Default_2) == 0x000192, "Member 'WBP_Map_Base_C_ChangeFilter::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, K2Node_Select_Default_3) == 0x000193, "Member 'WBP_Map_Base_C_ChangeFilter::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_Set_Remove_ReturnValue) == 0x000194, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_Set_Remove_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_Array_Get_Item_2) == 0x000198, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_Array_Length_ReturnValue_2) == 0x0001A0, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_Less_IntInt_ReturnValue_2) == 0x0001A4, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_Array_Get_Item_3) == 0x0001A8, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_Map_Values_Values_1) == 0x0001B0, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_Map_Values_Values_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_Array_Get_Item_4) == 0x0001C0, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_Array_Length_ReturnValue_3) == 0x0001C8, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_GetIsHiding_Hiding_1) == 0x0001CC, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_GetIsHiding_Hiding_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_Less_IntInt_ReturnValue_3) == 0x0001CD, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_GetLocationPoint_LocationPoint) == 0x0001D0, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_GetLocationPoint_LocationPoint' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_GetType_ReturnValue) == 0x0001D8, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_GetType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_Array_Length_ReturnValue_4) == 0x0001DC, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_Set_Contains_ReturnValue_4) == 0x0001E0, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_Set_Contains_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_Less_IntInt_ReturnValue_4) == 0x0001E1, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, CallFunc_BooleanOR_ReturnValue_1) == 0x0001E2, "Member 'WBP_Map_Base_C_ChangeFilter::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ChangeFilter, K2Node_Select_Default_4) == 0x0001E3, "Member 'WBP_Map_Base_C_ChangeFilter::K2Node_Select_Default_4' has a wrong offset!");

// Function WBP_Map_Base.WBP_Map_Base_C.CREATEDELEGATE_PROXYFUNCTION_0
// 0x0010 (0x0010 - 0x0000)
struct WBP_Map_Base_C_CREATEDELEGATE_PROXYFUNCTION_0 final
{
public:
	struct FGuid                                  MarkerId;                                          // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Base_C_CREATEDELEGATE_PROXYFUNCTION_0) == 0x000004, "Wrong alignment on WBP_Map_Base_C_CREATEDELEGATE_PROXYFUNCTION_0");
static_assert(sizeof(WBP_Map_Base_C_CREATEDELEGATE_PROXYFUNCTION_0) == 0x000010, "Wrong size on WBP_Map_Base_C_CREATEDELEGATE_PROXYFUNCTION_0");
static_assert(offsetof(WBP_Map_Base_C_CREATEDELEGATE_PROXYFUNCTION_0, MarkerId) == 0x000000, "Member 'WBP_Map_Base_C_CREATEDELEGATE_PROXYFUNCTION_0::MarkerId' has a wrong offset!");

// Function WBP_Map_Base.WBP_Map_Base_C.Enable Custom Mark
// 0x00D0 (0x00D0 - 0x0000)
struct WBP_Map_Base_C_Enable_Custom_Mark final
{
public:
	class UPalLocationManager*                    CallFunc_GetLocationManager_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<struct FGuid, struct FPalCustomMarkerSaveData> CallFunc_GetCustomMarkers_ReturnValue;             // 0x0008(0x0050)()
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Map_Length_ReturnValue;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66[0x2];                                       // 0x0066(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Map_IconCustom_C*                  K2Node_DynamicCast_AsWBP_Map_Icon_Custom;          // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationManager*                    CallFunc_GetLocationManager_ReturnValue_1;         // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue_1;      // 0x0098(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Project_Icon_Position_to_World_Postion_WorldPosition; // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_AddLocalCustomLocation_ReturnValue;       // 0x00C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Base_C_Enable_Custom_Mark) == 0x000008, "Wrong alignment on WBP_Map_Base_C_Enable_Custom_Mark");
static_assert(sizeof(WBP_Map_Base_C_Enable_Custom_Mark) == 0x0000D0, "Wrong size on WBP_Map_Base_C_Enable_Custom_Mark");
static_assert(offsetof(WBP_Map_Base_C_Enable_Custom_Mark, CallFunc_GetLocationManager_ReturnValue) == 0x000000, "Member 'WBP_Map_Base_C_Enable_Custom_Mark::CallFunc_GetLocationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Enable_Custom_Mark, CallFunc_GetCustomMarkers_ReturnValue) == 0x000008, "Member 'WBP_Map_Base_C_Enable_Custom_Mark::CallFunc_GetCustomMarkers_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Enable_Custom_Mark, CallFunc_GetGameSetting_ReturnValue) == 0x000058, "Member 'WBP_Map_Base_C_Enable_Custom_Mark::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Enable_Custom_Mark, CallFunc_Map_Length_ReturnValue) == 0x000060, "Member 'WBP_Map_Base_C_Enable_Custom_Mark::CallFunc_Map_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Enable_Custom_Mark, CallFunc_Less_IntInt_ReturnValue) == 0x000064, "Member 'WBP_Map_Base_C_Enable_Custom_Mark::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Enable_Custom_Mark, CallFunc_BooleanAND_ReturnValue) == 0x000065, "Member 'WBP_Map_Base_C_Enable_Custom_Mark::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Enable_Custom_Mark, CallFunc_Conv_VectorToVector2D_ReturnValue) == 0x000068, "Member 'WBP_Map_Base_C_Enable_Custom_Mark::CallFunc_Conv_VectorToVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Enable_Custom_Mark, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'WBP_Map_Base_C_Enable_Custom_Mark::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Enable_Custom_Mark, K2Node_DynamicCast_AsWBP_Map_Icon_Custom) == 0x000080, "Member 'WBP_Map_Base_C_Enable_Custom_Mark::K2Node_DynamicCast_AsWBP_Map_Icon_Custom' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Enable_Custom_Mark, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'WBP_Map_Base_C_Enable_Custom_Mark::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Enable_Custom_Mark, CallFunc_GetLocationManager_ReturnValue_1) == 0x000090, "Member 'WBP_Map_Base_C_Enable_Custom_Mark::CallFunc_GetLocationManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Enable_Custom_Mark, CallFunc_Conv_VectorToVector2D_ReturnValue_1) == 0x000098, "Member 'WBP_Map_Base_C_Enable_Custom_Mark::CallFunc_Conv_VectorToVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Enable_Custom_Mark, CallFunc_Project_Icon_Position_to_World_Postion_WorldPosition) == 0x0000A8, "Member 'WBP_Map_Base_C_Enable_Custom_Mark::CallFunc_Project_Icon_Position_to_World_Postion_WorldPosition' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Enable_Custom_Mark, CallFunc_AddLocalCustomLocation_ReturnValue) == 0x0000C0, "Member 'WBP_Map_Base_C_Enable_Custom_Mark::CallFunc_AddLocalCustomLocation_ReturnValue' has a wrong offset!");

// Function WBP_Map_Base.WBP_Map_Base_C.ExecuteUbergraph_WBP_Map_Base
// 0x0408 (0x0408 - 0x0000)
struct WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalWorldMapUIDataTableRow             CallFunc_GetDataTableRowFromName_OutRow;           // 0x0008(0x00D8)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue;           // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_Map_IconPlayer_C*>          CallFunc_Setup_Player_Icon_PlayerIcons;            // 0x00F8(0x0010)(ReferenceParm, ContainsInstancedReference)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDDispatchParameterBase*           CallFunc_GetParam_ReturnValue;                     // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDDispatchParameter_WorldMap*      K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_World_Map; // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_129[0x3];                                      // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x012C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   CallFunc_RegisterActionBinding_ReturnValue;        // 0x013C(0x0004)(NoDestructor)
	TDelegate<void(class UWBP_Map_IconCustom_C* Icon)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0140(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_Map_IconCustom_C* Icon, int32 Index)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0150(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0160(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   CallFunc_RegisterActionBinding_ReturnValue_1;      // 0x0170(0x0004)(NoDestructor)
	TDelegate<void(EPalLocationType FilterMap, bool IsEnable)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0174(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0184(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0185(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_186[0x2];                                      // 0x0186(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0188(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x0198(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x01A8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   CallFunc_RegisterActionBinding_ReturnValue_2;      // 0x01B8(0x0004)(NoDestructor)
	uint8                                         Pad_1BC[0x4];                                      // 0x01BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x01C0(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_204[0x4];                                      // 0x0204(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector_X;                            // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0x0238(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue_1;      // 0x0248(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_259[0x7];                                      // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Project_Icon_Position_to_World_Postion_WorldPosition; // 0x0260(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_2;                          // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_2;                          // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_2;                          // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_291[0x7];                                      // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_MapRangeUnclamped_ReturnValue;            // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeUnclamped_ReturnValue_1;          // 0x02A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;            // 0x02A8(0x0018)()
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue_1;          // 0x02C0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x02D8(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0328(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0378(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0388(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x03A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x03A8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   CallFunc_RegisterActionBinding_ReturnValue_3;      // 0x03B8(0x0004)(NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x03BC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_10;           // 0x03CC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   CallFunc_RegisterActionBinding_ReturnValue_4;      // 0x03DC(0x0004)(NoDestructor)
	class UPalWorldMapUIData*                     CallFunc_GetLocalWorldMapData_ReturnValue;         // 0x03E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   CallFunc_RegisterActionBinding_ReturnValue_5;      // 0x03E8(0x0004)(NoDestructor)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x03EC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLocalPlayerID_ReturnValue;             // 0x03F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x03F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_UnlockMap_ReturnValue;                    // 0x0400(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base) == 0x000008, "Wrong alignment on WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base");
static_assert(sizeof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base) == 0x000408, "Wrong size on WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, EntryPoint) == 0x000000, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, Temp_byte_Variable) == 0x000004, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, Temp_bool_Variable) == 0x000005, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, Temp_byte_Variable_1) == 0x000006, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, Temp_byte_Variable_2) == 0x000007, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_GetDataTableRowFromName_OutRow) == 0x000008, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000E0, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_GetPalDebugSetting_ReturnValue) == 0x0000E8, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_GetPalDebugSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_IsValid_ReturnValue) == 0x0000F0, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_Setup_Player_Icon_PlayerIcons) == 0x0000F8, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_Setup_Player_Icon_PlayerIcons' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, Temp_byte_Variable_3) == 0x000108, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_GetParam_ReturnValue) == 0x000110, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_GetParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_IsValid_ReturnValue_1) == 0x000118, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_World_Map) == 0x000120, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_World_Map' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, K2Node_DynamicCast_bSuccess) == 0x000128, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, K2Node_CreateDelegate_OutputDelegate) == 0x00012C, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_RegisterActionBinding_ReturnValue) == 0x00013C, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_RegisterActionBinding_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, K2Node_CreateDelegate_OutputDelegate_1) == 0x000140, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, K2Node_CreateDelegate_OutputDelegate_2) == 0x000150, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, K2Node_CreateDelegate_OutputDelegate_3) == 0x000160, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_RegisterActionBinding_ReturnValue_1) == 0x000170, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_RegisterActionBinding_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, K2Node_CreateDelegate_OutputDelegate_4) == 0x000174, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_Not_PreBool_ReturnValue) == 0x000184, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, K2Node_Select_Default) == 0x000185, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, K2Node_CreateDelegate_OutputDelegate_5) == 0x000188, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, K2Node_CreateDelegate_OutputDelegate_6) == 0x000198, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, K2Node_CreateDelegate_OutputDelegate_7) == 0x0001A8, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_RegisterActionBinding_ReturnValue_2) == 0x0001B8, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_RegisterActionBinding_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, K2Node_Event_MyGeometry) == 0x0001C0, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, K2Node_Event_InDeltaTime) == 0x000200, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_BreakVector_X) == 0x000208, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_BreakVector_Y) == 0x000210, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_BreakVector_Z) == 0x000218, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_BreakVector_X_1) == 0x000220, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_BreakVector_Y_1) == 0x000228, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_BreakVector_Z_1) == 0x000230, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_Conv_VectorToVector2D_ReturnValue) == 0x000238, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_Conv_VectorToVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_Conv_VectorToVector2D_ReturnValue_1) == 0x000248, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_Conv_VectorToVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, Temp_bool_Variable_1) == 0x000258, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_Project_Icon_Position_to_World_Postion_WorldPosition) == 0x000260, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_Project_Icon_Position_to_World_Postion_WorldPosition' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_BreakVector_X_2) == 0x000278, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_BreakVector_Y_2) == 0x000280, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_BreakVector_Z_2) == 0x000288, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, K2Node_Select_Default_1) == 0x000290, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_MapRangeUnclamped_ReturnValue) == 0x000298, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_MapRangeUnclamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_MapRangeUnclamped_ReturnValue_1) == 0x0002A0, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_MapRangeUnclamped_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_Conv_DoubleToText_ReturnValue) == 0x0002A8, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_Conv_DoubleToText_ReturnValue_1) == 0x0002C0, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_Conv_DoubleToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, K2Node_MakeStruct_FormatArgumentData) == 0x0002D8, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, K2Node_MakeStruct_FormatArgumentData_1) == 0x000328, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, K2Node_MakeArray_Array) == 0x000378, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_Format_ReturnValue) == 0x000388, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_PlayAnimation_ReturnValue) == 0x0003A0, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, K2Node_CreateDelegate_OutputDelegate_8) == 0x0003A8, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_RegisterActionBinding_ReturnValue_3) == 0x0003B8, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_RegisterActionBinding_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, K2Node_CreateDelegate_OutputDelegate_9) == 0x0003BC, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, K2Node_CreateDelegate_OutputDelegate_10) == 0x0003CC, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_RegisterActionBinding_ReturnValue_4) == 0x0003DC, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_RegisterActionBinding_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_GetLocalWorldMapData_ReturnValue) == 0x0003E0, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_GetLocalWorldMapData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_RegisterActionBinding_ReturnValue_5) == 0x0003E8, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_RegisterActionBinding_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_Conv_StringToName_ReturnValue) == 0x0003EC, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_GetLocalPlayerID_ReturnValue) == 0x0003F4, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_GetLocalPlayerID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x0003F8, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base, CallFunc_UnlockMap_ReturnValue) == 0x000400, "Member 'WBP_Map_Base_C_ExecuteUbergraph_WBP_Map_Base::CallFunc_UnlockMap_ReturnValue' has a wrong offset!");

// Function WBP_Map_Base.WBP_Map_Base_C.On Custom Mark Changed
// 0x0098 (0x0098 - 0x0000)
struct WBP_Map_Base_C_On_Custom_Mark_Changed final
{
public:
	struct FGuid                                  Guid;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalLocationManager*                    CallFunc_GetLocationManager_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Contains_ReturnValue;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<struct FGuid, struct FPalCustomMarkerSaveData> CallFunc_GetCustomMarkers_ReturnValue;             // 0x0020(0x0050)()
	struct FPalCustomMarkerSaveData               CallFunc_Map_Find_Value;                           // 0x0070(0x0020)(NoDestructor)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Base_C_On_Custom_Mark_Changed) == 0x000008, "Wrong alignment on WBP_Map_Base_C_On_Custom_Mark_Changed");
static_assert(sizeof(WBP_Map_Base_C_On_Custom_Mark_Changed) == 0x000098, "Wrong size on WBP_Map_Base_C_On_Custom_Mark_Changed");
static_assert(offsetof(WBP_Map_Base_C_On_Custom_Mark_Changed, Guid) == 0x000000, "Member 'WBP_Map_Base_C_On_Custom_Mark_Changed::Guid' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_On_Custom_Mark_Changed, CallFunc_GetLocationManager_ReturnValue) == 0x000010, "Member 'WBP_Map_Base_C_On_Custom_Mark_Changed::CallFunc_GetLocationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_On_Custom_Mark_Changed, CallFunc_Map_Contains_ReturnValue) == 0x000018, "Member 'WBP_Map_Base_C_On_Custom_Mark_Changed::CallFunc_Map_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_On_Custom_Mark_Changed, CallFunc_GetCustomMarkers_ReturnValue) == 0x000020, "Member 'WBP_Map_Base_C_On_Custom_Mark_Changed::CallFunc_GetCustomMarkers_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_On_Custom_Mark_Changed, CallFunc_Map_Find_Value) == 0x000070, "Member 'WBP_Map_Base_C_On_Custom_Mark_Changed::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_On_Custom_Mark_Changed, CallFunc_Map_Find_ReturnValue) == 0x000090, "Member 'WBP_Map_Base_C_On_Custom_Mark_Changed::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function WBP_Map_Base.WBP_Map_Base_C.On Icon Clicked
// 0x00A8 (0x00A8 - 0x0000)
struct WBP_Map_Base_C_On_Icon_Clicked final
{
public:
	class UWBP_WorldMap_IconBase_NoDesign_C*      Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    UseMsgID;                                          // 0x0008(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UPalLocationPoint*                      CallFunc_GetLocationPoint_LocationPoint;           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalLocationPointBaseCamp*              K2Node_DynamicCast_AsPal_Location_Point_Base_Camp; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationPointFastTravel*            K2Node_DynamicCast_AsPal_Location_Point_Fast_Travel; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnableFastTravel_ReturnValue;           // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnableFastTravel_ReturnValue_1;         // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalLocationType                              CallFunc_GetType_ReturnValue;                      // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Map_IconCustom_C*                  K2Node_DynamicCast_AsWBP_Map_Icon_Custom;          // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0050(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bResult)>                 K2Node_CreateDelegate_OutputDelegate;              // 0x006C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_Dialog_ReturnValue;                       // 0x007C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    K2Node_Select_Default;                             // 0x0090(0x0010)(NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Base_C_On_Icon_Clicked) == 0x000008, "Wrong alignment on WBP_Map_Base_C_On_Icon_Clicked");
static_assert(sizeof(WBP_Map_Base_C_On_Icon_Clicked) == 0x0000A8, "Wrong size on WBP_Map_Base_C_On_Icon_Clicked");
static_assert(offsetof(WBP_Map_Base_C_On_Icon_Clicked, Icon) == 0x000000, "Member 'WBP_Map_Base_C_On_Icon_Clicked::Icon' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_On_Icon_Clicked, UseMsgID) == 0x000008, "Member 'WBP_Map_Base_C_On_Icon_Clicked::UseMsgID' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_On_Icon_Clicked, CallFunc_GetLocationPoint_LocationPoint) == 0x000018, "Member 'WBP_Map_Base_C_On_Icon_Clicked::CallFunc_GetLocationPoint_LocationPoint' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_On_Icon_Clicked, K2Node_DynamicCast_AsPal_Location_Point_Base_Camp) == 0x000020, "Member 'WBP_Map_Base_C_On_Icon_Clicked::K2Node_DynamicCast_AsPal_Location_Point_Base_Camp' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_On_Icon_Clicked, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_Map_Base_C_On_Icon_Clicked::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_On_Icon_Clicked, K2Node_DynamicCast_AsPal_Location_Point_Fast_Travel) == 0x000030, "Member 'WBP_Map_Base_C_On_Icon_Clicked::K2Node_DynamicCast_AsPal_Location_Point_Fast_Travel' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_On_Icon_Clicked, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'WBP_Map_Base_C_On_Icon_Clicked::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_On_Icon_Clicked, CallFunc_IsEnableFastTravel_ReturnValue) == 0x000039, "Member 'WBP_Map_Base_C_On_Icon_Clicked::CallFunc_IsEnableFastTravel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_On_Icon_Clicked, CallFunc_IsEnableFastTravel_ReturnValue_1) == 0x00003A, "Member 'WBP_Map_Base_C_On_Icon_Clicked::CallFunc_IsEnableFastTravel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_On_Icon_Clicked, CallFunc_GetType_ReturnValue) == 0x00003B, "Member 'WBP_Map_Base_C_On_Icon_Clicked::CallFunc_GetType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_On_Icon_Clicked, K2Node_SwitchEnum_CmpSuccess) == 0x00003C, "Member 'WBP_Map_Base_C_On_Icon_Clicked::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_On_Icon_Clicked, K2Node_DynamicCast_AsWBP_Map_Icon_Custom) == 0x000040, "Member 'WBP_Map_Base_C_On_Icon_Clicked::K2Node_DynamicCast_AsWBP_Map_Icon_Custom' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_On_Icon_Clicked, K2Node_DynamicCast_bSuccess_2) == 0x000048, "Member 'WBP_Map_Base_C_On_Icon_Clicked::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_On_Icon_Clicked, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000050, "Member 'WBP_Map_Base_C_On_Icon_Clicked::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_On_Icon_Clicked, Temp_bool_Variable) == 0x000068, "Member 'WBP_Map_Base_C_On_Icon_Clicked::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_On_Icon_Clicked, K2Node_CreateDelegate_OutputDelegate) == 0x00006C, "Member 'WBP_Map_Base_C_On_Icon_Clicked::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_On_Icon_Clicked, CallFunc_Dialog_ReturnValue) == 0x00007C, "Member 'WBP_Map_Base_C_On_Icon_Clicked::CallFunc_Dialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_On_Icon_Clicked, K2Node_Select_Default) == 0x000090, "Member 'WBP_Map_Base_C_On_Icon_Clicked::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_On_Icon_Clicked, CallFunc_BooleanOR_ReturnValue) == 0x0000A0, "Member 'WBP_Map_Base_C_On_Icon_Clicked::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_On_Icon_Clicked, CallFunc_BooleanOR_ReturnValue_1) == 0x0000A1, "Member 'WBP_Map_Base_C_On_Icon_Clicked::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");

// Function WBP_Map_Base.WBP_Map_Base_C.OnInputMethodChanged
// 0x000B (0x000B - 0x0000)
struct WBP_Map_Base_C_OnInputMethodChanged final
{
public:
	ECommonInputType                              InputType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Base_C_OnInputMethodChanged) == 0x000001, "Wrong alignment on WBP_Map_Base_C_OnInputMethodChanged");
static_assert(sizeof(WBP_Map_Base_C_OnInputMethodChanged) == 0x00000B, "Wrong size on WBP_Map_Base_C_OnInputMethodChanged");
static_assert(offsetof(WBP_Map_Base_C_OnInputMethodChanged, InputType) == 0x000000, "Member 'WBP_Map_Base_C_OnInputMethodChanged::InputType' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnInputMethodChanged, Temp_bool_Variable) == 0x000001, "Member 'WBP_Map_Base_C_OnInputMethodChanged::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnInputMethodChanged, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000002, "Member 'WBP_Map_Base_C_OnInputMethodChanged::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnInputMethodChanged, Temp_byte_Variable) == 0x000003, "Member 'WBP_Map_Base_C_OnInputMethodChanged::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnInputMethodChanged, Temp_byte_Variable_1) == 0x000004, "Member 'WBP_Map_Base_C_OnInputMethodChanged::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnInputMethodChanged, Temp_bool_Variable_1) == 0x000005, "Member 'WBP_Map_Base_C_OnInputMethodChanged::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnInputMethodChanged, Temp_byte_Variable_2) == 0x000006, "Member 'WBP_Map_Base_C_OnInputMethodChanged::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnInputMethodChanged, Temp_byte_Variable_3) == 0x000007, "Member 'WBP_Map_Base_C_OnInputMethodChanged::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnInputMethodChanged, CallFunc_BooleanOR_ReturnValue) == 0x000008, "Member 'WBP_Map_Base_C_OnInputMethodChanged::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnInputMethodChanged, K2Node_Select_Default) == 0x000009, "Member 'WBP_Map_Base_C_OnInputMethodChanged::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnInputMethodChanged, K2Node_Select_Default_1) == 0x00000A, "Member 'WBP_Map_Base_C_OnInputMethodChanged::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_Map_Base.WBP_Map_Base_C.OnKeyDown
// 0x0268 (0x0268 - 0x0000)
struct WBP_Map_Base_C_OnKeyDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0040(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0080(0x00B8)(Parm, OutParm, ReturnParm)
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x0138(0x0018)(HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0x0150(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x0162(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0163(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_164[0x4];                                      // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue;           // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_171[0x7];                                      // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue_1;      // 0x0178(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Project_Icon_Position_to_World_Postion_WorldPosition; // 0x0188(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue_1;         // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A9[0x7];                                      // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x01B0(0x00B8)()
};
static_assert(alignof(WBP_Map_Base_C_OnKeyDown) == 0x000008, "Wrong alignment on WBP_Map_Base_C_OnKeyDown");
static_assert(sizeof(WBP_Map_Base_C_OnKeyDown) == 0x000268, "Wrong size on WBP_Map_Base_C_OnKeyDown");
static_assert(offsetof(WBP_Map_Base_C_OnKeyDown, MyGeometry) == 0x000000, "Member 'WBP_Map_Base_C_OnKeyDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnKeyDown, InKeyEvent) == 0x000040, "Member 'WBP_Map_Base_C_OnKeyDown::InKeyEvent' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnKeyDown, ReturnValue) == 0x000080, "Member 'WBP_Map_Base_C_OnKeyDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnKeyDown, CallFunc_GetKey_ReturnValue) == 0x000138, "Member 'WBP_Map_Base_C_OnKeyDown::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnKeyDown, CallFunc_Conv_VectorToVector2D_ReturnValue) == 0x000150, "Member 'WBP_Map_Base_C_OnKeyDown::CallFunc_Conv_VectorToVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000160, "Member 'WBP_Map_Base_C_OnKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue_1) == 0x000161, "Member 'WBP_Map_Base_C_OnKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue_2) == 0x000162, "Member 'WBP_Map_Base_C_OnKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnKeyDown, CallFunc_BooleanOR_ReturnValue) == 0x000163, "Member 'WBP_Map_Base_C_OnKeyDown::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnKeyDown, CallFunc_GetPalDebugSetting_ReturnValue) == 0x000168, "Member 'WBP_Map_Base_C_OnKeyDown::CallFunc_GetPalDebugSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnKeyDown, CallFunc_IsValid_ReturnValue) == 0x000170, "Member 'WBP_Map_Base_C_OnKeyDown::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnKeyDown, CallFunc_Conv_VectorToVector2D_ReturnValue_1) == 0x000178, "Member 'WBP_Map_Base_C_OnKeyDown::CallFunc_Conv_VectorToVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnKeyDown, CallFunc_Project_Icon_Position_to_World_Postion_WorldPosition) == 0x000188, "Member 'WBP_Map_Base_C_OnKeyDown::CallFunc_Project_Icon_Position_to_World_Postion_WorldPosition' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnKeyDown, CallFunc_GetPalDebugSetting_ReturnValue_1) == 0x0001A0, "Member 'WBP_Map_Base_C_OnKeyDown::CallFunc_GetPalDebugSetting_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnKeyDown, CallFunc_IsValid_ReturnValue_1) == 0x0001A8, "Member 'WBP_Map_Base_C_OnKeyDown::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnKeyDown, CallFunc_Unhandled_ReturnValue) == 0x0001B0, "Member 'WBP_Map_Base_C_OnKeyDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");

// Function WBP_Map_Base.WBP_Map_Base_C.OnMouseButtonDown
// 0x02B0 (0x02B0 - 0x0000)
struct WBP_Map_Base_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0040(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00D8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FKey                                   CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x0190(0x0018)(HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0x01A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B9[0x7];                                      // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue;           // 0x01C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLeftShiftDown_ForUI_ReturnValue;        // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CB[0x5];                                      // 0x01CB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x01D0(0x00B8)()
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue_1;      // 0x0288(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Project_Icon_Position_to_World_Postion_WorldPosition; // 0x0298(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Base_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on WBP_Map_Base_C_OnMouseButtonDown");
static_assert(sizeof(WBP_Map_Base_C_OnMouseButtonDown) == 0x0002B0, "Wrong size on WBP_Map_Base_C_OnMouseButtonDown");
static_assert(offsetof(WBP_Map_Base_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'WBP_Map_Base_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnMouseButtonDown, MouseEvent) == 0x000040, "Member 'WBP_Map_Base_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnMouseButtonDown, ReturnValue) == 0x0000D8, "Member 'WBP_Map_Base_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnMouseButtonDown, CallFunc_PointerEvent_GetEffectingButton_ReturnValue) == 0x000190, "Member 'WBP_Map_Base_C_OnMouseButtonDown::CallFunc_PointerEvent_GetEffectingButton_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnMouseButtonDown, CallFunc_Conv_VectorToVector2D_ReturnValue) == 0x0001A8, "Member 'WBP_Map_Base_C_OnMouseButtonDown::CallFunc_Conv_VectorToVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnMouseButtonDown, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x0001B8, "Member 'WBP_Map_Base_C_OnMouseButtonDown::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnMouseButtonDown, CallFunc_GetPalDebugSetting_ReturnValue) == 0x0001C0, "Member 'WBP_Map_Base_C_OnMouseButtonDown::CallFunc_GetPalDebugSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnMouseButtonDown, CallFunc_IsLeftShiftDown_ForUI_ReturnValue) == 0x0001C8, "Member 'WBP_Map_Base_C_OnMouseButtonDown::CallFunc_IsLeftShiftDown_ForUI_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnMouseButtonDown, CallFunc_IsValid_ReturnValue) == 0x0001C9, "Member 'WBP_Map_Base_C_OnMouseButtonDown::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnMouseButtonDown, CallFunc_BooleanAND_ReturnValue) == 0x0001CA, "Member 'WBP_Map_Base_C_OnMouseButtonDown::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnMouseButtonDown, CallFunc_Unhandled_ReturnValue) == 0x0001D0, "Member 'WBP_Map_Base_C_OnMouseButtonDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnMouseButtonDown, CallFunc_Conv_VectorToVector2D_ReturnValue_1) == 0x000288, "Member 'WBP_Map_Base_C_OnMouseButtonDown::CallFunc_Conv_VectorToVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnMouseButtonDown, CallFunc_Project_Icon_Position_to_World_Postion_WorldPosition) == 0x000298, "Member 'WBP_Map_Base_C_OnMouseButtonDown::CallFunc_Project_Icon_Position_to_World_Postion_WorldPosition' has a wrong offset!");

// Function WBP_Map_Base.WBP_Map_Base_C.OnRemovedLocation
// 0x0090 (0x0090 - 0x0000)
struct WBP_Map_Base_C_OnRemovedLocation final
{
public:
	struct FGuid                                  LocationId;                                        // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalLocationBase*                       Location;                                          // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalLocationManager*                    CallFunc_GetLocationManager_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalLocationType                              CallFunc_GetType_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<struct FGuid, class UPalLocationBase*>   CallFunc_GetLocationMap_ReturnValue;               // 0x0028(0x0050)()
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Remove_ReturnValue;                   // 0x007B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_WorldMap_IconBase_NoDesign_C*      CallFunc_Map_Find_Value;                           // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Base_C_OnRemovedLocation) == 0x000008, "Wrong alignment on WBP_Map_Base_C_OnRemovedLocation");
static_assert(sizeof(WBP_Map_Base_C_OnRemovedLocation) == 0x000090, "Wrong size on WBP_Map_Base_C_OnRemovedLocation");
static_assert(offsetof(WBP_Map_Base_C_OnRemovedLocation, LocationId) == 0x000000, "Member 'WBP_Map_Base_C_OnRemovedLocation::LocationId' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnRemovedLocation, Location) == 0x000010, "Member 'WBP_Map_Base_C_OnRemovedLocation::Location' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnRemovedLocation, CallFunc_GetLocationManager_ReturnValue) == 0x000018, "Member 'WBP_Map_Base_C_OnRemovedLocation::CallFunc_GetLocationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnRemovedLocation, CallFunc_GetType_ReturnValue) == 0x000020, "Member 'WBP_Map_Base_C_OnRemovedLocation::CallFunc_GetType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnRemovedLocation, CallFunc_GetLocationMap_ReturnValue) == 0x000028, "Member 'WBP_Map_Base_C_OnRemovedLocation::CallFunc_GetLocationMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnRemovedLocation, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000078, "Member 'WBP_Map_Base_C_OnRemovedLocation::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnRemovedLocation, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000079, "Member 'WBP_Map_Base_C_OnRemovedLocation::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnRemovedLocation, CallFunc_BooleanAND_ReturnValue) == 0x00007A, "Member 'WBP_Map_Base_C_OnRemovedLocation::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnRemovedLocation, CallFunc_Map_Remove_ReturnValue) == 0x00007B, "Member 'WBP_Map_Base_C_OnRemovedLocation::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnRemovedLocation, CallFunc_Map_Find_Value) == 0x000080, "Member 'WBP_Map_Base_C_OnRemovedLocation::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnRemovedLocation, CallFunc_Map_Find_ReturnValue) == 0x000088, "Member 'WBP_Map_Base_C_OnRemovedLocation::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function WBP_Map_Base.WBP_Map_Base_C.OnRepliedDialog
// 0x0088 (0x0088 - 0x0000)
struct WBP_Map_Base_C_OnRepliedDialog final
{
public:
	bool                                          bOK;                                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationPoint*                      CallFunc_GetLocationPoint_LocationPoint;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocation_ReturnValue;                  // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_VectorToString_ReturnValue;          // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetLocationPosition_LocationPosition;     // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalPlayerState*                        CallFunc_GetLocalPlayerState_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalLocationPoint*                      CallFunc_GetLocationPoint_LocationPoint_1;         // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue_1;              // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Base_C_OnRepliedDialog) == 0x000008, "Wrong alignment on WBP_Map_Base_C_OnRepliedDialog");
static_assert(sizeof(WBP_Map_Base_C_OnRepliedDialog) == 0x000088, "Wrong size on WBP_Map_Base_C_OnRepliedDialog");
static_assert(offsetof(WBP_Map_Base_C_OnRepliedDialog, bOK) == 0x000000, "Member 'WBP_Map_Base_C_OnRepliedDialog::bOK' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnRepliedDialog, CallFunc_MakeLiteralName_ReturnValue) == 0x000004, "Member 'WBP_Map_Base_C_OnRepliedDialog::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnRepliedDialog, CallFunc_GetLocationPoint_LocationPoint) == 0x000010, "Member 'WBP_Map_Base_C_OnRepliedDialog::CallFunc_GetLocationPoint_LocationPoint' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnRepliedDialog, CallFunc_GetLocation_ReturnValue) == 0x000018, "Member 'WBP_Map_Base_C_OnRepliedDialog::CallFunc_GetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnRepliedDialog, CallFunc_Not_PreBool_ReturnValue) == 0x000030, "Member 'WBP_Map_Base_C_OnRepliedDialog::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnRepliedDialog, CallFunc_Conv_VectorToString_ReturnValue) == 0x000038, "Member 'WBP_Map_Base_C_OnRepliedDialog::CallFunc_Conv_VectorToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnRepliedDialog, CallFunc_GetHUDService_ReturnValue) == 0x000048, "Member 'WBP_Map_Base_C_OnRepliedDialog::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnRepliedDialog, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'WBP_Map_Base_C_OnRepliedDialog::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnRepliedDialog, CallFunc_GetLocationPosition_LocationPosition) == 0x000058, "Member 'WBP_Map_Base_C_OnRepliedDialog::CallFunc_GetLocationPosition_LocationPosition' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnRepliedDialog, CallFunc_GetLocalPlayerState_ReturnValue) == 0x000070, "Member 'WBP_Map_Base_C_OnRepliedDialog::CallFunc_GetLocalPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnRepliedDialog, CallFunc_GetLocationPoint_LocationPoint_1) == 0x000078, "Member 'WBP_Map_Base_C_OnRepliedDialog::CallFunc_GetLocationPoint_LocationPoint_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_OnRepliedDialog, CallFunc_GetHUDService_ReturnValue_1) == 0x000080, "Member 'WBP_Map_Base_C_OnRepliedDialog::CallFunc_GetHUDService_ReturnValue_1' has a wrong offset!");

// Function WBP_Map_Base.WBP_Map_Base_C.RefreshDeathMark
// 0x01F8 (0x01F8 - 0x0000)
struct WBP_Map_Base_C_RefreshDeathMark final
{
public:
	TMap<struct FGuid, class UPalLocationBase*>   LocationMap;                                       // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGuid                                  LocationId;                                        // 0x0050(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalLocationPoint*                      LocationPoint;                                     // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          AddNew;                                            // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  PlayerUId;                                         // 0x006C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E[0x2];                                       // 0x008E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_GetLocalPlayerUID_ReturnValue;            // 0x009C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_GuidGuid_ReturnValue;          // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AD[0x3];                                       // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationPoint_DroppedChest*         K2Node_DynamicCast_AsPal_Location_Point_Dropped_Chest; // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationPoint_DroppedCharacter*     K2Node_DynamicCast_AsPal_Location_Point_Dropped_Character; // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x3];                                       // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  CallFunc_GetOwnerPlayerUId_ReturnValue;            // 0x00CC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_GetOwnerPlayerUId_ReturnValue_1;          // 0x00DC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EC[0x4];                                       // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGuid>                          CallFunc_Map_Keys_Keys;                            // 0x00F0(0x0010)(ReferenceParm)
	struct FGuid                                  CallFunc_Array_Get_Item;                           // 0x0100(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_115[0x3];                                      // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalLocationBase*                       CallFunc_Map_Find_Value;                           // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Map_IconDeath_C*                   CallFunc_Array_Get_Item_1;                         // 0x0130(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationPoint*                      CallFunc_LocationPoint_ReturnValue;                // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsShowInMap_ReturnValue;                  // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14A[0x2];                                      // 0x014A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_151[0x7];                                      // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Map_IconDeath_C*                   CallFunc_Create_ReturnValue;                       // 0x0160(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocation_ReturnValue;                  // 0x0168(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Add_Icon_Added;                           // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_181[0x3];                                      // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UPalLocationPoint*>              CallFunc_Map_Keys_Keys_1;                          // 0x0188(0x0010)(ReferenceParm)
	TArray<struct FGuid>                          CallFunc_Map_Values_Values;                        // 0x0198(0x0010)(ReferenceParm)
	class UPalLocationPoint*                      CallFunc_Array_Get_Item_2;                         // 0x01A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_Array_Get_Item_3;                         // 0x01B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocation_ReturnValue_1;                // 0x01C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_GuidGuid_ReturnValue_1;        // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D9[0x7];                                      // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Vector_Distance2D_ReturnValue;            // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x01EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x01ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x01EE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x01EF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Contains_ReturnValue;                 // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x01F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Base_C_RefreshDeathMark) == 0x000008, "Wrong alignment on WBP_Map_Base_C_RefreshDeathMark");
static_assert(sizeof(WBP_Map_Base_C_RefreshDeathMark) == 0x0001F8, "Wrong size on WBP_Map_Base_C_RefreshDeathMark");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, LocationMap) == 0x000000, "Member 'WBP_Map_Base_C_RefreshDeathMark::LocationMap' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, LocationId) == 0x000050, "Member 'WBP_Map_Base_C_RefreshDeathMark::LocationId' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, LocationPoint) == 0x000060, "Member 'WBP_Map_Base_C_RefreshDeathMark::LocationPoint' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, AddNew) == 0x000068, "Member 'WBP_Map_Base_C_RefreshDeathMark::AddNew' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, PlayerUId) == 0x00006C, "Member 'WBP_Map_Base_C_RefreshDeathMark::PlayerUId' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, Temp_int_Array_Index_Variable) == 0x00007C, "Member 'WBP_Map_Base_C_RefreshDeathMark::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, Temp_int_Loop_Counter_Variable) == 0x000080, "Member 'WBP_Map_Base_C_RefreshDeathMark::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_Add_IntInt_ReturnValue) == 0x000084, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, Temp_int_Array_Index_Variable_1) == 0x000088, "Member 'WBP_Map_Base_C_RefreshDeathMark::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, Temp_bool_True_if_break_was_hit_Variable) == 0x00008C, "Member 'WBP_Map_Base_C_RefreshDeathMark::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_Not_PreBool_ReturnValue) == 0x00008D, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, Temp_int_Loop_Counter_Variable_1) == 0x000090, "Member 'WBP_Map_Base_C_RefreshDeathMark::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_Add_IntInt_ReturnValue_1) == 0x000094, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, Temp_int_Array_Index_Variable_2) == 0x000098, "Member 'WBP_Map_Base_C_RefreshDeathMark::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_GetLocalPlayerUID_ReturnValue) == 0x00009C, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_GetLocalPlayerUID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_EqualEqual_GuidGuid_ReturnValue) == 0x0000AC, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_EqualEqual_GuidGuid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, K2Node_DynamicCast_AsPal_Location_Point_Dropped_Chest) == 0x0000B0, "Member 'WBP_Map_Base_C_RefreshDeathMark::K2Node_DynamicCast_AsPal_Location_Point_Dropped_Chest' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, K2Node_DynamicCast_bSuccess) == 0x0000B8, "Member 'WBP_Map_Base_C_RefreshDeathMark::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, K2Node_DynamicCast_AsPal_Location_Point_Dropped_Character) == 0x0000C0, "Member 'WBP_Map_Base_C_RefreshDeathMark::K2Node_DynamicCast_AsPal_Location_Point_Dropped_Character' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, K2Node_DynamicCast_bSuccess_1) == 0x0000C8, "Member 'WBP_Map_Base_C_RefreshDeathMark::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_GetOwnerPlayerUId_ReturnValue) == 0x0000CC, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_GetOwnerPlayerUId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_GetOwnerPlayerUId_ReturnValue_1) == 0x0000DC, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_GetOwnerPlayerUId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_Map_Keys_Keys) == 0x0000F0, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_Array_Get_Item) == 0x000100, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_Array_Length_ReturnValue) == 0x000110, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_Less_IntInt_ReturnValue) == 0x000114, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, Temp_int_Loop_Counter_Variable_2) == 0x000118, "Member 'WBP_Map_Base_C_RefreshDeathMark::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_Add_IntInt_ReturnValue_2) == 0x00011C, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_Map_Find_Value) == 0x000120, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_Map_Find_ReturnValue) == 0x000128, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_Array_Get_Item_1) == 0x000130, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_IsValid_ReturnValue) == 0x000138, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_LocationPoint_ReturnValue) == 0x000140, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_LocationPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_IsShowInMap_ReturnValue) == 0x000148, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_IsShowInMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_BooleanAND_ReturnValue) == 0x000149, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_Array_Length_ReturnValue_1) == 0x00014C, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_Less_IntInt_ReturnValue_1) == 0x000150, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_GetOwningPlayer_ReturnValue) == 0x000158, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_Create_ReturnValue) == 0x000160, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_GetLocation_ReturnValue) == 0x000168, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_GetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_Add_Icon_Added) == 0x000180, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_Add_Icon_Added' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_Array_Add_ReturnValue) == 0x000184, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_Map_Keys_Keys_1) == 0x000188, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_Map_Keys_Keys_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_Map_Values_Values) == 0x000198, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_Array_Get_Item_2) == 0x0001A8, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_Array_Get_Item_3) == 0x0001B0, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_GetLocation_ReturnValue_1) == 0x0001C0, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_GetLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_EqualEqual_GuidGuid_ReturnValue_1) == 0x0001D8, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_EqualEqual_GuidGuid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_Vector_Distance2D_ReturnValue) == 0x0001E0, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_Vector_Distance2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_Array_Length_ReturnValue_2) == 0x0001E8, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_Less_DoubleDouble_ReturnValue) == 0x0001EC, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_Less_IntInt_ReturnValue_2) == 0x0001ED, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_BooleanAND_ReturnValue_1) == 0x0001EE, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_BooleanAND_ReturnValue_2) == 0x0001EF, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_Map_Contains_ReturnValue) == 0x0001F0, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_Map_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_Not_PreBool_ReturnValue_1) == 0x0001F1, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshDeathMark, CallFunc_BooleanAND_ReturnValue_3) == 0x0001F2, "Member 'WBP_Map_Base_C_RefreshDeathMark::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");

// Function WBP_Map_Base.WBP_Map_Base_C.RefreshIconState
// 0x0060 (0x0060 - 0x0000)
struct WBP_Map_Base_C_RefreshIconState final
{
public:
	EPalLocationType                              Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationPoint*                      LocationPoint;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_WorldMap_IconBase_NoDesign_C*      Icon;                                              // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  CallFunc_GetLocalPlayerUID_ReturnValue;            // 0x001C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationPointFastTravel*            K2Node_DynamicCast_AsPal_Location_Point_Fast_Travel; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationPointBaseCamp*              K2Node_DynamicCast_AsPal_Location_Point_Base_Camp; // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnableFastTravel_ReturnValue;           // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnableFastTravel_ReturnValue_1;         // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B[0x1];                                       // 0x004B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  CallFunc_GetLocationId_ReturnValue;                // 0x004C(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSameGuildWithPlayer_ReturnValue;        // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Remove_ReturnValue;                   // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Base_C_RefreshIconState) == 0x000008, "Wrong alignment on WBP_Map_Base_C_RefreshIconState");
static_assert(sizeof(WBP_Map_Base_C_RefreshIconState) == 0x000060, "Wrong size on WBP_Map_Base_C_RefreshIconState");
static_assert(offsetof(WBP_Map_Base_C_RefreshIconState, Type) == 0x000000, "Member 'WBP_Map_Base_C_RefreshIconState::Type' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshIconState, LocationPoint) == 0x000008, "Member 'WBP_Map_Base_C_RefreshIconState::LocationPoint' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshIconState, Icon) == 0x000010, "Member 'WBP_Map_Base_C_RefreshIconState::Icon' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshIconState, K2Node_SwitchEnum_CmpSuccess) == 0x000018, "Member 'WBP_Map_Base_C_RefreshIconState::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshIconState, CallFunc_GetLocalPlayerUID_ReturnValue) == 0x00001C, "Member 'WBP_Map_Base_C_RefreshIconState::CallFunc_GetLocalPlayerUID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshIconState, K2Node_DynamicCast_AsPal_Location_Point_Fast_Travel) == 0x000030, "Member 'WBP_Map_Base_C_RefreshIconState::K2Node_DynamicCast_AsPal_Location_Point_Fast_Travel' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshIconState, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'WBP_Map_Base_C_RefreshIconState::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshIconState, K2Node_DynamicCast_AsPal_Location_Point_Base_Camp) == 0x000040, "Member 'WBP_Map_Base_C_RefreshIconState::K2Node_DynamicCast_AsPal_Location_Point_Base_Camp' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshIconState, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'WBP_Map_Base_C_RefreshIconState::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshIconState, CallFunc_IsEnableFastTravel_ReturnValue) == 0x000049, "Member 'WBP_Map_Base_C_RefreshIconState::CallFunc_IsEnableFastTravel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshIconState, CallFunc_IsEnableFastTravel_ReturnValue_1) == 0x00004A, "Member 'WBP_Map_Base_C_RefreshIconState::CallFunc_IsEnableFastTravel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshIconState, CallFunc_GetLocationId_ReturnValue) == 0x00004C, "Member 'WBP_Map_Base_C_RefreshIconState::CallFunc_GetLocationId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshIconState, CallFunc_IsSameGuildWithPlayer_ReturnValue) == 0x00005C, "Member 'WBP_Map_Base_C_RefreshIconState::CallFunc_IsSameGuildWithPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RefreshIconState, CallFunc_Map_Remove_ReturnValue) == 0x00005D, "Member 'WBP_Map_Base_C_RefreshIconState::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");

// Function WBP_Map_Base.WBP_Map_Base_C.RemoveCustomIcon
// 0x0018 (0x0018 - 0x0000)
struct WBP_Map_Base_C_RemoveCustomIcon final
{
public:
	class UWBP_Map_IconCustom_C*                  Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Remove_ReturnValue;                   // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationManager*                    CallFunc_GetLocationManager_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Base_C_RemoveCustomIcon) == 0x000008, "Wrong alignment on WBP_Map_Base_C_RemoveCustomIcon");
static_assert(sizeof(WBP_Map_Base_C_RemoveCustomIcon) == 0x000018, "Wrong size on WBP_Map_Base_C_RemoveCustomIcon");
static_assert(offsetof(WBP_Map_Base_C_RemoveCustomIcon, Icon) == 0x000000, "Member 'WBP_Map_Base_C_RemoveCustomIcon::Icon' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RemoveCustomIcon, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_Map_Base_C_RemoveCustomIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RemoveCustomIcon, CallFunc_Map_Remove_ReturnValue) == 0x000009, "Member 'WBP_Map_Base_C_RemoveCustomIcon::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_RemoveCustomIcon, CallFunc_GetLocationManager_ReturnValue) == 0x000010, "Member 'WBP_Map_Base_C_RemoveCustomIcon::CallFunc_GetLocationManager_ReturnValue' has a wrong offset!");

// Function WBP_Map_Base.WBP_Map_Base_C.SetFilter
// 0x0020 (0x0020 - 0x0000)
struct WBP_Map_Base_C_SetFilter final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default_2;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Base_C_SetFilter) == 0x000008, "Wrong alignment on WBP_Map_Base_C_SetFilter");
static_assert(sizeof(WBP_Map_Base_C_SetFilter) == 0x000020, "Wrong size on WBP_Map_Base_C_SetFilter");
static_assert(offsetof(WBP_Map_Base_C_SetFilter, Temp_bool_Variable) == 0x000000, "Member 'WBP_Map_Base_C_SetFilter::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetFilter, Temp_byte_Variable) == 0x000001, "Member 'WBP_Map_Base_C_SetFilter::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetFilter, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_Map_Base_C_SetFilter::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetFilter, Temp_bool_Variable_1) == 0x000003, "Member 'WBP_Map_Base_C_SetFilter::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetFilter, Temp_bool_Variable_2) == 0x000004, "Member 'WBP_Map_Base_C_SetFilter::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetFilter, K2Node_Select_Default) == 0x000005, "Member 'WBP_Map_Base_C_SetFilter::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetFilter, Temp_byte_Variable_2) == 0x000006, "Member 'WBP_Map_Base_C_SetFilter::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetFilter, Temp_byte_Variable_3) == 0x000007, "Member 'WBP_Map_Base_C_SetFilter::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetFilter, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000008, "Member 'WBP_Map_Base_C_SetFilter::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetFilter, K2Node_Select_Default_1) == 0x000010, "Member 'WBP_Map_Base_C_SetFilter::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetFilter, CallFunc_GetCurrentInputType_ReturnValue) == 0x000011, "Member 'WBP_Map_Base_C_SetFilter::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetFilter, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000012, "Member 'WBP_Map_Base_C_SetFilter::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetFilter, CallFunc_Not_PreBool_ReturnValue) == 0x000013, "Member 'WBP_Map_Base_C_SetFilter::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetFilter, K2Node_Select_Default_2) == 0x000018, "Member 'WBP_Map_Base_C_SetFilter::K2Node_Select_Default_2' has a wrong offset!");

// Function WBP_Map_Base.WBP_Map_Base_C.Setup Boss Icon
// 0x0070 (0x0070 - 0x0000)
struct WBP_Map_Base_C_Setup_Boss_Icon final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0010(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalUIBossSpawnerLoactionData          CallFunc_GetDataTableRowFromName_OutRow;           // 0x0028(0x0038)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Base_C_Setup_Boss_Icon) == 0x000008, "Wrong alignment on WBP_Map_Base_C_Setup_Boss_Icon");
static_assert(sizeof(WBP_Map_Base_C_Setup_Boss_Icon) == 0x000070, "Wrong size on WBP_Map_Base_C_Setup_Boss_Icon");
static_assert(offsetof(WBP_Map_Base_C_Setup_Boss_Icon, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WBP_Map_Base_C_Setup_Boss_Icon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Boss_Icon, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_Map_Base_C_Setup_Boss_Icon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Boss_Icon, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_Map_Base_C_Setup_Boss_Icon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Boss_Icon, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000010, "Member 'WBP_Map_Base_C_Setup_Boss_Icon::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Boss_Icon, CallFunc_Array_Get_Item) == 0x000020, "Member 'WBP_Map_Base_C_Setup_Boss_Icon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Boss_Icon, CallFunc_GetDataTableRowFromName_OutRow) == 0x000028, "Member 'WBP_Map_Base_C_Setup_Boss_Icon::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Boss_Icon, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000060, "Member 'WBP_Map_Base_C_Setup_Boss_Icon::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Boss_Icon, CallFunc_Array_Length_ReturnValue) == 0x000064, "Member 'WBP_Map_Base_C_Setup_Boss_Icon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Boss_Icon, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'WBP_Map_Base_C_Setup_Boss_Icon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_Map_Base.WBP_Map_Base_C.Setup Icon
// 0x0140 (0x0140 - 0x0000)
struct WBP_Map_Base_C_Setup_Icon final
{
public:
	EPalLocationType                              LocationType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationPoint*                      LocationPoint;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_WorldMap_IconBase_NoDesign_C*      Icon;                                              // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_WorldMap_IconBase_NoDesign_C*      ReturnIcon;                                        // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsClientDedicatedServer_ReturnValue;      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsShowInMap_ReturnValue;                  // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_GetLocalPlayerUID_ReturnValue;            // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Map_IconSupply_C*                  CallFunc_Create_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_GetLocalPlayerUID_ReturnValue_1;          // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalLocationPoint_Respawn*              K2Node_DynamicCast_AsPal_Location_Point_Respawn;   // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationPoint_BossTower*            K2Node_DynamicCast_AsPal_Location_Point_Boss_Tower; // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalBossTower*                          CallFunc_GetBossTower_ReturnValue;                 // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalRespawnPointData                   CallFunc_GetDataTableRowFromName_OutRow;           // 0x0080(0x0020)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPocketpairUserSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetInviteCode_ReturnValue;                // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Map_IconCamp_C*                    CallFunc_Create_ReturnValue_1;                     // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRequestedPlayer_ReturnValue;            // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationPointBaseCamp*              K2Node_DynamicCast_AsPal_Location_Point_Base_Camp; // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationPointFastTravel*            K2Node_DynamicCast_AsPal_Location_Point_Fast_Travel; // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnableFastTravel_ReturnValue;           // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnableFastTravel_ReturnValue_1;         // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FB[0x1];                                       // 0x00FB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  CallFunc_GetBaseCampId_ReturnValue;                // 0x00FC(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSameGuildWithPlayer_ReturnValue;        // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10D[0x3];                                      // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Map_IconFTTower_C*                 CallFunc_Create_ReturnValue_2;                     // 0x0110(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_2;            // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Map_IconDungeon_C*                 CallFunc_Create_ReturnValue_3;                     // 0x0120(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_WorldMap_Icon_Respawn_C*           CallFunc_Create_ReturnValue_4;                     // 0x0128(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Map_IconTower_C*                   CallFunc_Create_ReturnValue_5;                     // 0x0130(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Base_C_Setup_Icon) == 0x000008, "Wrong alignment on WBP_Map_Base_C_Setup_Icon");
static_assert(sizeof(WBP_Map_Base_C_Setup_Icon) == 0x000140, "Wrong size on WBP_Map_Base_C_Setup_Icon");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, LocationType) == 0x000000, "Member 'WBP_Map_Base_C_Setup_Icon::LocationType' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, LocationPoint) == 0x000008, "Member 'WBP_Map_Base_C_Setup_Icon::LocationPoint' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, Icon) == 0x000010, "Member 'WBP_Map_Base_C_Setup_Icon::Icon' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, ReturnIcon) == 0x000018, "Member 'WBP_Map_Base_C_Setup_Icon::ReturnIcon' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, CallFunc_IsClientDedicatedServer_ReturnValue) == 0x000020, "Member 'WBP_Map_Base_C_Setup_Icon::CallFunc_IsClientDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, CallFunc_IsShowInMap_ReturnValue) == 0x000021, "Member 'WBP_Map_Base_C_Setup_Icon::CallFunc_IsShowInMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, CallFunc_Not_PreBool_ReturnValue) == 0x000022, "Member 'WBP_Map_Base_C_Setup_Icon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, K2Node_SwitchEnum_CmpSuccess) == 0x000023, "Member 'WBP_Map_Base_C_Setup_Icon::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, CallFunc_GetOwningPlayer_ReturnValue) == 0x000028, "Member 'WBP_Map_Base_C_Setup_Icon::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, CallFunc_GetLocalPlayerUID_ReturnValue) == 0x000030, "Member 'WBP_Map_Base_C_Setup_Icon::CallFunc_GetLocalPlayerUID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, CallFunc_Create_ReturnValue) == 0x000040, "Member 'WBP_Map_Base_C_Setup_Icon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, CallFunc_GetLocalPlayerUID_ReturnValue_1) == 0x000048, "Member 'WBP_Map_Base_C_Setup_Icon::CallFunc_GetLocalPlayerUID_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, K2Node_DynamicCast_AsPal_Location_Point_Respawn) == 0x000058, "Member 'WBP_Map_Base_C_Setup_Icon::K2Node_DynamicCast_AsPal_Location_Point_Respawn' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'WBP_Map_Base_C_Setup_Icon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, K2Node_DynamicCast_AsPal_Location_Point_Boss_Tower) == 0x000068, "Member 'WBP_Map_Base_C_Setup_Icon::K2Node_DynamicCast_AsPal_Location_Point_Boss_Tower' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, K2Node_DynamicCast_bSuccess_1) == 0x000070, "Member 'WBP_Map_Base_C_Setup_Icon::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, CallFunc_GetBossTower_ReturnValue) == 0x000078, "Member 'WBP_Map_Base_C_Setup_Icon::CallFunc_GetBossTower_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, CallFunc_GetDataTableRowFromName_OutRow) == 0x000080, "Member 'WBP_Map_Base_C_Setup_Icon::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000A0, "Member 'WBP_Map_Base_C_Setup_Icon::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x0000A8, "Member 'WBP_Map_Base_C_Setup_Icon::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, CallFunc_GetInviteCode_ReturnValue) == 0x0000B0, "Member 'WBP_Map_Base_C_Setup_Icon::CallFunc_GetInviteCode_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, CallFunc_IsEmpty_ReturnValue) == 0x0000C0, "Member 'WBP_Map_Base_C_Setup_Icon::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, CallFunc_BooleanAND_ReturnValue) == 0x0000C1, "Member 'WBP_Map_Base_C_Setup_Icon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x0000C8, "Member 'WBP_Map_Base_C_Setup_Icon::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, CallFunc_Create_ReturnValue_1) == 0x0000D0, "Member 'WBP_Map_Base_C_Setup_Icon::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, CallFunc_IsRequestedPlayer_ReturnValue) == 0x0000D8, "Member 'WBP_Map_Base_C_Setup_Icon::CallFunc_IsRequestedPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, K2Node_DynamicCast_AsPal_Location_Point_Base_Camp) == 0x0000E0, "Member 'WBP_Map_Base_C_Setup_Icon::K2Node_DynamicCast_AsPal_Location_Point_Base_Camp' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, K2Node_DynamicCast_bSuccess_2) == 0x0000E8, "Member 'WBP_Map_Base_C_Setup_Icon::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, K2Node_DynamicCast_AsPal_Location_Point_Fast_Travel) == 0x0000F0, "Member 'WBP_Map_Base_C_Setup_Icon::K2Node_DynamicCast_AsPal_Location_Point_Fast_Travel' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, K2Node_DynamicCast_bSuccess_3) == 0x0000F8, "Member 'WBP_Map_Base_C_Setup_Icon::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, CallFunc_IsEnableFastTravel_ReturnValue) == 0x0000F9, "Member 'WBP_Map_Base_C_Setup_Icon::CallFunc_IsEnableFastTravel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, CallFunc_IsEnableFastTravel_ReturnValue_1) == 0x0000FA, "Member 'WBP_Map_Base_C_Setup_Icon::CallFunc_IsEnableFastTravel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, CallFunc_GetBaseCampId_ReturnValue) == 0x0000FC, "Member 'WBP_Map_Base_C_Setup_Icon::CallFunc_GetBaseCampId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, CallFunc_IsSameGuildWithPlayer_ReturnValue) == 0x00010C, "Member 'WBP_Map_Base_C_Setup_Icon::CallFunc_IsSameGuildWithPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, CallFunc_Create_ReturnValue_2) == 0x000110, "Member 'WBP_Map_Base_C_Setup_Icon::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, CallFunc_GetOwningPlayer_ReturnValue_2) == 0x000118, "Member 'WBP_Map_Base_C_Setup_Icon::CallFunc_GetOwningPlayer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, CallFunc_Create_ReturnValue_3) == 0x000120, "Member 'WBP_Map_Base_C_Setup_Icon::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, CallFunc_Create_ReturnValue_4) == 0x000128, "Member 'WBP_Map_Base_C_Setup_Icon::CallFunc_Create_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, CallFunc_Create_ReturnValue_5) == 0x000130, "Member 'WBP_Map_Base_C_Setup_Icon::CallFunc_Create_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Icon, CallFunc_Array_Add_ReturnValue) == 0x000138, "Member 'WBP_Map_Base_C_Setup_Icon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function WBP_Map_Base.WBP_Map_Base_C.Setup Location Point Icon
// 0x0050 (0x0050 - 0x0000)
struct WBP_Map_Base_C_Setup_Location_Point_Icon final
{
public:
	struct FGuid                                  LocationId;                                        // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalLocationBase*                       Location;                                          // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalLocationPoint*                      CallFunc_LocationPoint_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalLocationType                              CallFunc_GetType_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_WorldMap_IconBase_NoDesign_C*      CallFunc_Setup_Icon_Icon;                          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationPoint*                      CallFunc_LocationPoint_ReturnValue_1;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_WorldMap_IconBase_NoDesign_C*      CallFunc_Map_Find_Value;                           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Add_Icon_Added;                           // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Update_Icon_Visibility_Visible;           // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Base_C_Setup_Location_Point_Icon) == 0x000008, "Wrong alignment on WBP_Map_Base_C_Setup_Location_Point_Icon");
static_assert(sizeof(WBP_Map_Base_C_Setup_Location_Point_Icon) == 0x000050, "Wrong size on WBP_Map_Base_C_Setup_Location_Point_Icon");
static_assert(offsetof(WBP_Map_Base_C_Setup_Location_Point_Icon, LocationId) == 0x000000, "Member 'WBP_Map_Base_C_Setup_Location_Point_Icon::LocationId' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Location_Point_Icon, Location) == 0x000010, "Member 'WBP_Map_Base_C_Setup_Location_Point_Icon::Location' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Location_Point_Icon, CallFunc_LocationPoint_ReturnValue) == 0x000018, "Member 'WBP_Map_Base_C_Setup_Location_Point_Icon::CallFunc_LocationPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Location_Point_Icon, CallFunc_GetType_ReturnValue) == 0x000020, "Member 'WBP_Map_Base_C_Setup_Location_Point_Icon::CallFunc_GetType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Location_Point_Icon, CallFunc_Setup_Icon_Icon) == 0x000028, "Member 'WBP_Map_Base_C_Setup_Location_Point_Icon::CallFunc_Setup_Icon_Icon' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Location_Point_Icon, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'WBP_Map_Base_C_Setup_Location_Point_Icon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Location_Point_Icon, CallFunc_LocationPoint_ReturnValue_1) == 0x000038, "Member 'WBP_Map_Base_C_Setup_Location_Point_Icon::CallFunc_LocationPoint_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Location_Point_Icon, CallFunc_Map_Find_Value) == 0x000040, "Member 'WBP_Map_Base_C_Setup_Location_Point_Icon::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Location_Point_Icon, CallFunc_Map_Find_ReturnValue) == 0x000048, "Member 'WBP_Map_Base_C_Setup_Location_Point_Icon::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Location_Point_Icon, CallFunc_Add_Icon_Added) == 0x000049, "Member 'WBP_Map_Base_C_Setup_Location_Point_Icon::CallFunc_Add_Icon_Added' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Setup_Location_Point_Icon, CallFunc_Update_Icon_Visibility_Visible) == 0x00004A, "Member 'WBP_Map_Base_C_Setup_Location_Point_Icon::CallFunc_Update_Icon_Visibility_Visible' has a wrong offset!");

// Function WBP_Map_Base.WBP_Map_Base_C.SetupCustomIcons
// 0x00C8 (0x00C8 - 0x0000)
struct WBP_Map_Base_C_SetupCustomIcons final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGuid& MarkerId)>       K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationManager*                    CallFunc_GetLocationManager_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<struct FGuid, struct FPalCustomMarkerSaveData> CallFunc_GetCustomMarkers_ReturnValue;             // 0x0028(0x0050)()
	TArray<struct FGuid>                          CallFunc_Map_Keys_Keys;                            // 0x0078(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_Array_Get_Item;                           // 0x008C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Contains_ReturnValue;                 // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E[0x2];                                       // 0x009E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalCustomMarkerSaveData               CallFunc_Map_Find_Value;                           // 0x00A0(0x0020)(NoDestructor)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Base_C_SetupCustomIcons) == 0x000008, "Wrong alignment on WBP_Map_Base_C_SetupCustomIcons");
static_assert(sizeof(WBP_Map_Base_C_SetupCustomIcons) == 0x0000C8, "Wrong size on WBP_Map_Base_C_SetupCustomIcons");
static_assert(offsetof(WBP_Map_Base_C_SetupCustomIcons, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WBP_Map_Base_C_SetupCustomIcons::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupCustomIcons, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_Map_Base_C_SetupCustomIcons::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupCustomIcons, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_Map_Base_C_SetupCustomIcons::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupCustomIcons, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'WBP_Map_Base_C_SetupCustomIcons::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupCustomIcons, CallFunc_GetLocationManager_ReturnValue) == 0x000020, "Member 'WBP_Map_Base_C_SetupCustomIcons::CallFunc_GetLocationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupCustomIcons, CallFunc_GetCustomMarkers_ReturnValue) == 0x000028, "Member 'WBP_Map_Base_C_SetupCustomIcons::CallFunc_GetCustomMarkers_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupCustomIcons, CallFunc_Map_Keys_Keys) == 0x000078, "Member 'WBP_Map_Base_C_SetupCustomIcons::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupCustomIcons, CallFunc_Array_Length_ReturnValue) == 0x000088, "Member 'WBP_Map_Base_C_SetupCustomIcons::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupCustomIcons, CallFunc_Array_Get_Item) == 0x00008C, "Member 'WBP_Map_Base_C_SetupCustomIcons::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupCustomIcons, CallFunc_Less_IntInt_ReturnValue) == 0x00009C, "Member 'WBP_Map_Base_C_SetupCustomIcons::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupCustomIcons, CallFunc_Map_Contains_ReturnValue) == 0x00009D, "Member 'WBP_Map_Base_C_SetupCustomIcons::CallFunc_Map_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupCustomIcons, CallFunc_Map_Find_Value) == 0x0000A0, "Member 'WBP_Map_Base_C_SetupCustomIcons::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupCustomIcons, CallFunc_Map_Find_ReturnValue) == 0x0000C0, "Member 'WBP_Map_Base_C_SetupCustomIcons::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function WBP_Map_Base.WBP_Map_Base_C.SetupLocationIcon
// 0x0240 (0x0240 - 0x0000)
struct WBP_Map_Base_C_SetupLocationIcon final
{
public:
	TMap<struct FGuid, class UPalLocationBase*>   LocationMap;                                       // 0x0000(0x0050)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A[0x2];                                       // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_4;                   // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Map_IconBoss_C*                    CallFunc_Array_Get_Item;                           // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Update_Icon_Visibility_Visible;           // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGuid>                          CallFunc_Map_Keys_Keys;                            // 0x00A0(0x0010)(ReferenceParm)
	struct FGuid                                  CallFunc_Array_Get_Item_1;                         // 0x00B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuid>                          CallFunc_Map_Keys_Keys_1;                          // 0x00C0(0x0010)(ReferenceParm)
	bool                                          CallFunc_Map_Remove_ReturnValue;                   // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  CallFunc_Array_Get_Item_2;                         // 0x00D4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_WorldMap_IconBase_NoDesign_C*      CallFunc_Map_Find_Value;                           // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_WorldMap_IconBase_NoDesign_C*      CallFunc_Map_Find_Value_1;                         // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetLocationPosition_LocationPosition;     // 0x0108(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Map_IconFTTower_C*                 K2Node_DynamicCast_AsWBP_Map_Icon_FTTower;         // 0x0120(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_129[0x3];                                      // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_131[0x7];                                      // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_4;                  // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_145[0x3];                                      // 0x0145(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14D[0x3];                                      // 0x014D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FGuid& LocationId, class UPalLocationBase* Location)> K2Node_CreateDelegate_OutputDelegate;              // 0x0150(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Map_IconTower_C*                   CallFunc_Array_Get_Item_3;                         // 0x0160(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x016C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16D[0x3];                                      // 0x016D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetLocationPosition_LocationPosition_1;   // 0x0170(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Vector_Distance2D_ReturnValue;            // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGuid& LocationId, class UPalLocationBase* Location)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0190(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A1[0x7];                                      // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGuid>                          CallFunc_Map_Keys_Keys_2;                          // 0x01A8(0x0010)(ReferenceParm)
	struct FGuid                                  CallFunc_Array_Get_Item_4;                         // 0x01B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x01CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x01CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CE[0x2];                                      // 0x01CE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationManager*                    CallFunc_GetLocationManager_ReturnValue;           // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalLocationBase*                       CallFunc_Map_Find_Value_2;                         // 0x01D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_2;                   // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsShowInMap_ReturnValue;                  // 0x01E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E3[0x5];                                      // 0x01E3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<struct FGuid, class UPalLocationBase*>   CallFunc_GetLocationMap_ReturnValue;               // 0x01E8(0x0050)()
	double                                        CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;    // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Base_C_SetupLocationIcon) == 0x000008, "Wrong alignment on WBP_Map_Base_C_SetupLocationIcon");
static_assert(sizeof(WBP_Map_Base_C_SetupLocationIcon) == 0x000240, "Wrong size on WBP_Map_Base_C_SetupLocationIcon");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, LocationMap) == 0x000000, "Member 'WBP_Map_Base_C_SetupLocationIcon::LocationMap' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, Temp_int_Array_Index_Variable) == 0x000050, "Member 'WBP_Map_Base_C_SetupLocationIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, Temp_int_Array_Index_Variable_1) == 0x000054, "Member 'WBP_Map_Base_C_SetupLocationIcon::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, Temp_bool_True_if_break_was_hit_Variable) == 0x000058, "Member 'WBP_Map_Base_C_SetupLocationIcon::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Not_PreBool_ReturnValue) == 0x000059, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, Temp_int_Loop_Counter_Variable) == 0x00005C, "Member 'WBP_Map_Base_C_SetupLocationIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000060, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, Temp_int_Array_Index_Variable_2) == 0x000064, "Member 'WBP_Map_Base_C_SetupLocationIcon::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, Temp_int_Loop_Counter_Variable_1) == 0x000068, "Member 'WBP_Map_Base_C_SetupLocationIcon::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Add_IntInt_ReturnValue_1) == 0x00006C, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, Temp_int_Loop_Counter_Variable_2) == 0x000070, "Member 'WBP_Map_Base_C_SetupLocationIcon::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, Temp_int_Loop_Counter_Variable_3) == 0x000074, "Member 'WBP_Map_Base_C_SetupLocationIcon::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Add_IntInt_ReturnValue_2) == 0x000078, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Add_IntInt_ReturnValue_3) == 0x00007C, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, Temp_int_Array_Index_Variable_3) == 0x000080, "Member 'WBP_Map_Base_C_SetupLocationIcon::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Array_Length_ReturnValue) == 0x000084, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, Temp_int_Array_Index_Variable_4) == 0x000088, "Member 'WBP_Map_Base_C_SetupLocationIcon::Temp_int_Array_Index_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Less_IntInt_ReturnValue) == 0x00008C, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Array_Get_Item) == 0x000090, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Update_Icon_Visibility_Visible) == 0x000098, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Update_Icon_Visibility_Visible' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Map_Keys_Keys) == 0x0000A0, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Array_Get_Item_1) == 0x0000B0, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Map_Keys_Keys_1) == 0x0000C0, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Map_Keys_Keys_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Map_Remove_ReturnValue) == 0x0000D0, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Array_Get_Item_2) == 0x0000D4, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Array_Length_ReturnValue_1) == 0x0000E4, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Map_Find_Value) == 0x0000E8, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Map_Find_ReturnValue) == 0x0000F0, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Map_Find_Value_1) == 0x0000F8, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Map_Find_ReturnValue_1) == 0x000100, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_GetLocationPosition_LocationPosition) == 0x000108, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_GetLocationPosition_LocationPosition' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, K2Node_DynamicCast_AsWBP_Map_Icon_FTTower) == 0x000120, "Member 'WBP_Map_Base_C_SetupLocationIcon::K2Node_DynamicCast_AsWBP_Map_Icon_FTTower' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, K2Node_DynamicCast_bSuccess) == 0x000128, "Member 'WBP_Map_Base_C_SetupLocationIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Array_Length_ReturnValue_2) == 0x00012C, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Less_IntInt_ReturnValue_1) == 0x000130, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_GetGameSetting_ReturnValue) == 0x000138, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, Temp_int_Loop_Counter_Variable_4) == 0x000140, "Member 'WBP_Map_Base_C_SetupLocationIcon::Temp_int_Loop_Counter_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Less_IntInt_ReturnValue_2) == 0x000144, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Add_IntInt_ReturnValue_4) == 0x000148, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_BooleanAND_ReturnValue) == 0x00014C, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, K2Node_CreateDelegate_OutputDelegate) == 0x000150, "Member 'WBP_Map_Base_C_SetupLocationIcon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Array_Get_Item_3) == 0x000160, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Array_Length_ReturnValue_3) == 0x000168, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Less_IntInt_ReturnValue_3) == 0x00016C, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_GetLocationPosition_LocationPosition_1) == 0x000170, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_GetLocationPosition_LocationPosition_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Vector_Distance2D_ReturnValue) == 0x000188, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Vector_Distance2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, K2Node_CreateDelegate_OutputDelegate_1) == 0x000190, "Member 'WBP_Map_Base_C_SetupLocationIcon::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x0001A0, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Map_Keys_Keys_2) == 0x0001A8, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Map_Keys_Keys_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Array_Get_Item_4) == 0x0001B8, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Array_Length_ReturnValue_4) == 0x0001C8, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Array_Contains_ReturnValue) == 0x0001CC, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Less_IntInt_ReturnValue_4) == 0x0001CD, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_GetLocationManager_ReturnValue) == 0x0001D0, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_GetLocationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Map_Find_Value_2) == 0x0001D8, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Map_Find_Value_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_Map_Find_ReturnValue_2) == 0x0001E0, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_Map_Find_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_IsValid_ReturnValue) == 0x0001E1, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_IsShowInMap_ReturnValue) == 0x0001E2, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_IsShowInMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_GetLocationMap_ReturnValue) == 0x0001E8, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_GetLocationMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_SetupLocationIcon, CallFunc_LessEqual_DoubleDouble_B_ImplicitCast) == 0x000238, "Member 'WBP_Map_Base_C_SetupLocationIcon::CallFunc_LessEqual_DoubleDouble_B_ImplicitCast' has a wrong offset!");

// Function WBP_Map_Base.WBP_Map_Base_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_Map_Base_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Base_C_Tick) == 0x000008, "Wrong alignment on WBP_Map_Base_C_Tick");
static_assert(sizeof(WBP_Map_Base_C_Tick) == 0x000048, "Wrong size on WBP_Map_Base_C_Tick");
static_assert(offsetof(WBP_Map_Base_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_Map_Base_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_Map_Base_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_Map_Base.WBP_Map_Base_C.UpdateBossCheckState
// 0x0020 (0x0020 - 0x0000)
struct WBP_Map_Base_C_UpdateBossCheckState final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Map_IconBoss_C*                    CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Base_C_UpdateBossCheckState) == 0x000008, "Wrong alignment on WBP_Map_Base_C_UpdateBossCheckState");
static_assert(sizeof(WBP_Map_Base_C_UpdateBossCheckState) == 0x000020, "Wrong size on WBP_Map_Base_C_UpdateBossCheckState");
static_assert(offsetof(WBP_Map_Base_C_UpdateBossCheckState, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WBP_Map_Base_C_UpdateBossCheckState::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_UpdateBossCheckState, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_Map_Base_C_UpdateBossCheckState::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_UpdateBossCheckState, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_Map_Base_C_UpdateBossCheckState::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_UpdateBossCheckState, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'WBP_Map_Base_C_UpdateBossCheckState::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_UpdateBossCheckState, CallFunc_Array_Get_Item) == 0x000010, "Member 'WBP_Map_Base_C_UpdateBossCheckState::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Map_Base_C_UpdateBossCheckState, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'WBP_Map_Base_C_UpdateBossCheckState::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_Map_Base.WBP_Map_Base_C.BP_GetDesiredFocusTarget
// 0x0008 (0x0008 - 0x0000)
struct WBP_Map_Base_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Base_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_Map_Base_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_Map_Base_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong size on WBP_Map_Base_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_Map_Base_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_Map_Base_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");

}

