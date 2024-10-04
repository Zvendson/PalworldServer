#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace PalServer::Params
{

// Function WBP_CompassIconBase.WBP_CompassIconBase_C.ExecuteUbergraph_WBP_CompassIconBase
// 0x0050 (0x0050 - 0x0000)
struct WBP_CompassIconBase_C_ExecuteUbergraph_WBP_CompassIconBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CompassIconBase_C_ExecuteUbergraph_WBP_CompassIconBase) == 0x000008, "Wrong alignment on WBP_CompassIconBase_C_ExecuteUbergraph_WBP_CompassIconBase");
static_assert(sizeof(WBP_CompassIconBase_C_ExecuteUbergraph_WBP_CompassIconBase) == 0x000050, "Wrong size on WBP_CompassIconBase_C_ExecuteUbergraph_WBP_CompassIconBase");
static_assert(offsetof(WBP_CompassIconBase_C_ExecuteUbergraph_WBP_CompassIconBase, EntryPoint) == 0x000000, "Member 'WBP_CompassIconBase_C_ExecuteUbergraph_WBP_CompassIconBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_ExecuteUbergraph_WBP_CompassIconBase, K2Node_Event_MyGeometry) == 0x000008, "Member 'WBP_CompassIconBase_C_ExecuteUbergraph_WBP_CompassIconBase::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_ExecuteUbergraph_WBP_CompassIconBase, K2Node_Event_InDeltaTime) == 0x000048, "Member 'WBP_CompassIconBase_C_ExecuteUbergraph_WBP_CompassIconBase::K2Node_Event_InDeltaTime' has a wrong offset!");

// Function WBP_CompassIconBase.WBP_CompassIconBase_C.Get Offset Value
// 0x0110 (0x0110 - 0x0000)
struct WBP_CompassIconBase_C_Get_Offset_Value final
{
public:
	double                                        OffSetValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetCameraLocation_ReturnValue;            // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetCameraRotation_ReturnValue;            // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetRightVector_ReturnValue;               // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue_1;      // 0x0098(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Normal2D_ReturnValue;                     // 0x00A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Normal2D_ReturnValue_1;                   // 0x00B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue_1;           // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_DotProduct2D_ReturnValue;                 // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue_2;      // 0x00E8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_DotProduct2D_ReturnValue_1;               // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CompassIconBase_C_Get_Offset_Value) == 0x000008, "Wrong alignment on WBP_CompassIconBase_C_Get_Offset_Value");
static_assert(sizeof(WBP_CompassIconBase_C_Get_Offset_Value) == 0x000110, "Wrong size on WBP_CompassIconBase_C_Get_Offset_Value");
static_assert(offsetof(WBP_CompassIconBase_C_Get_Offset_Value, OffSetValue) == 0x000000, "Member 'WBP_CompassIconBase_C_Get_Offset_Value::OffSetValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_Get_Offset_Value, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000008, "Member 'WBP_CompassIconBase_C_Get_Offset_Value::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_Get_Offset_Value, CallFunc_GetCameraLocation_ReturnValue) == 0x000010, "Member 'WBP_CompassIconBase_C_Get_Offset_Value::CallFunc_GetCameraLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_Get_Offset_Value, CallFunc_GetCameraRotation_ReturnValue) == 0x000028, "Member 'WBP_CompassIconBase_C_Get_Offset_Value::CallFunc_GetCameraRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_Get_Offset_Value, CallFunc_FindLookAtRotation_ReturnValue) == 0x000040, "Member 'WBP_CompassIconBase_C_Get_Offset_Value::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_Get_Offset_Value, CallFunc_GetRightVector_ReturnValue) == 0x000058, "Member 'WBP_CompassIconBase_C_Get_Offset_Value::CallFunc_GetRightVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_Get_Offset_Value, CallFunc_GetForwardVector_ReturnValue) == 0x000070, "Member 'WBP_CompassIconBase_C_Get_Offset_Value::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_Get_Offset_Value, CallFunc_Conv_VectorToVector2D_ReturnValue) == 0x000088, "Member 'WBP_CompassIconBase_C_Get_Offset_Value::CallFunc_Conv_VectorToVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_Get_Offset_Value, CallFunc_Conv_VectorToVector2D_ReturnValue_1) == 0x000098, "Member 'WBP_CompassIconBase_C_Get_Offset_Value::CallFunc_Conv_VectorToVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_Get_Offset_Value, CallFunc_Normal2D_ReturnValue) == 0x0000A8, "Member 'WBP_CompassIconBase_C_Get_Offset_Value::CallFunc_Normal2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_Get_Offset_Value, CallFunc_Normal2D_ReturnValue_1) == 0x0000B8, "Member 'WBP_CompassIconBase_C_Get_Offset_Value::CallFunc_Normal2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_Get_Offset_Value, CallFunc_GetForwardVector_ReturnValue_1) == 0x0000C8, "Member 'WBP_CompassIconBase_C_Get_Offset_Value::CallFunc_GetForwardVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_Get_Offset_Value, CallFunc_DotProduct2D_ReturnValue) == 0x0000E0, "Member 'WBP_CompassIconBase_C_Get_Offset_Value::CallFunc_DotProduct2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_Get_Offset_Value, CallFunc_Conv_VectorToVector2D_ReturnValue_2) == 0x0000E8, "Member 'WBP_CompassIconBase_C_Get_Offset_Value::CallFunc_Conv_VectorToVector2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_Get_Offset_Value, CallFunc_Less_DoubleDouble_ReturnValue) == 0x0000F8, "Member 'WBP_CompassIconBase_C_Get_Offset_Value::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_Get_Offset_Value, CallFunc_DotProduct2D_ReturnValue_1) == 0x000100, "Member 'WBP_CompassIconBase_C_Get_Offset_Value::CallFunc_DotProduct2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_Get_Offset_Value, CallFunc_Less_DoubleDouble_ReturnValue_1) == 0x000108, "Member 'WBP_CompassIconBase_C_Get_Offset_Value::CallFunc_Less_DoubleDouble_ReturnValue_1' has a wrong offset!");

// Function WBP_CompassIconBase.WBP_CompassIconBase_C.SetDisplayDistance
// 0x0020 (0x0020 - 0x0000)
struct WBP_CompassIconBase_C_SetDisplayDistance final
{
public:
	double                                        Length;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_CurrentDistance_ImplicitCast;   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_HiddenDistance_ImplicitCast;    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CompassIconBase_C_SetDisplayDistance) == 0x000008, "Wrong alignment on WBP_CompassIconBase_C_SetDisplayDistance");
static_assert(sizeof(WBP_CompassIconBase_C_SetDisplayDistance) == 0x000020, "Wrong size on WBP_CompassIconBase_C_SetDisplayDistance");
static_assert(offsetof(WBP_CompassIconBase_C_SetDisplayDistance, Length) == 0x000000, "Member 'WBP_CompassIconBase_C_SetDisplayDistance::Length' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_SetDisplayDistance, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000008, "Member 'WBP_CompassIconBase_C_SetDisplayDistance::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_SetDisplayDistance, K2Node_VariableSet_CurrentDistance_ImplicitCast) == 0x000010, "Member 'WBP_CompassIconBase_C_SetDisplayDistance::K2Node_VariableSet_CurrentDistance_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_SetDisplayDistance, K2Node_VariableSet_HiddenDistance_ImplicitCast) == 0x000018, "Member 'WBP_CompassIconBase_C_SetDisplayDistance::K2Node_VariableSet_HiddenDistance_ImplicitCast' has a wrong offset!");

// Function WBP_CompassIconBase.WBP_CompassIconBase_C.SetDistanceText
// 0x0008 (0x0008 - 0x0000)
struct WBP_CompassIconBase_C_SetDistanceText final
{
public:
	double                                        Length;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CompassIconBase_C_SetDistanceText) == 0x000008, "Wrong alignment on WBP_CompassIconBase_C_SetDistanceText");
static_assert(sizeof(WBP_CompassIconBase_C_SetDistanceText) == 0x000008, "Wrong size on WBP_CompassIconBase_C_SetDistanceText");
static_assert(offsetof(WBP_CompassIconBase_C_SetDistanceText, Length) == 0x000000, "Member 'WBP_CompassIconBase_C_SetDistanceText::Length' has a wrong offset!");

// Function WBP_CompassIconBase.WBP_CompassIconBase_C.SetLocationId
// 0x0010 (0x0010 - 0x0000)
struct WBP_CompassIconBase_C_SetLocationId final
{
public:
	struct FGuid                                  LocationId;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CompassIconBase_C_SetLocationId) == 0x000004, "Wrong alignment on WBP_CompassIconBase_C_SetLocationId");
static_assert(sizeof(WBP_CompassIconBase_C_SetLocationId) == 0x000010, "Wrong size on WBP_CompassIconBase_C_SetLocationId");
static_assert(offsetof(WBP_CompassIconBase_C_SetLocationId, LocationId) == 0x000000, "Member 'WBP_CompassIconBase_C_SetLocationId::LocationId' has a wrong offset!");

// Function WBP_CompassIconBase.WBP_CompassIconBase_C.SetTargetLocation
// 0x0018 (0x0018 - 0x0000)
struct WBP_CompassIconBase_C_SetTargetLocation final
{
public:
	struct FVector                                TargetLocation;                                    // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CompassIconBase_C_SetTargetLocation) == 0x000008, "Wrong alignment on WBP_CompassIconBase_C_SetTargetLocation");
static_assert(sizeof(WBP_CompassIconBase_C_SetTargetLocation) == 0x000018, "Wrong size on WBP_CompassIconBase_C_SetTargetLocation");
static_assert(offsetof(WBP_CompassIconBase_C_SetTargetLocation, TargetLocation) == 0x000000, "Member 'WBP_CompassIconBase_C_SetTargetLocation::TargetLocation' has a wrong offset!");

// Function WBP_CompassIconBase.WBP_CompassIconBase_C.SetupTexture
// 0x0030 (0x0030 - 0x0000)
struct WBP_CompassIconBase_C_SetupTexture final
{
public:
	TSoftObjectPtr<class UTexture2D>              SoftTexture;                                       // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CompassIconBase_C_SetupTexture) == 0x000008, "Wrong alignment on WBP_CompassIconBase_C_SetupTexture");
static_assert(sizeof(WBP_CompassIconBase_C_SetupTexture) == 0x000030, "Wrong size on WBP_CompassIconBase_C_SetupTexture");
static_assert(offsetof(WBP_CompassIconBase_C_SetupTexture, SoftTexture) == 0x000000, "Member 'WBP_CompassIconBase_C_SetupTexture::SoftTexture' has a wrong offset!");

// Function WBP_CompassIconBase.WBP_CompassIconBase_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_CompassIconBase_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CompassIconBase_C_Tick) == 0x000008, "Wrong alignment on WBP_CompassIconBase_C_Tick");
static_assert(sizeof(WBP_CompassIconBase_C_Tick) == 0x000048, "Wrong size on WBP_CompassIconBase_C_Tick");
static_assert(offsetof(WBP_CompassIconBase_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_CompassIconBase_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_CompassIconBase_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_CompassIconBase.WBP_CompassIconBase_C.UpdateDistance
// 0x0030 (0x0030 - 0x0000)
struct WBP_CompassIconBase_C_UpdateDistance final
{
public:
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Vector_Distance_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CompassIconBase_C_UpdateDistance) == 0x000008, "Wrong alignment on WBP_CompassIconBase_C_UpdateDistance");
static_assert(sizeof(WBP_CompassIconBase_C_UpdateDistance) == 0x000030, "Wrong size on WBP_CompassIconBase_C_UpdateDistance");
static_assert(offsetof(WBP_CompassIconBase_C_UpdateDistance, CallFunc_GetPalmi_ReturnValue) == 0x000000, "Member 'WBP_CompassIconBase_C_UpdateDistance::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_UpdateDistance, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_CompassIconBase_C_UpdateDistance::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_UpdateDistance, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'WBP_CompassIconBase_C_UpdateDistance::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_UpdateDistance, CallFunc_Vector_Distance_ReturnValue) == 0x000028, "Member 'WBP_CompassIconBase_C_UpdateDistance::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");

// Function WBP_CompassIconBase.WBP_CompassIconBase_C.UpdateVisibility
// 0x0048 (0x0048 - 0x0000)
struct WBP_CompassIconBase_C_UpdateVisibility final
{
public:
	bool                                          InDistance;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Vector_Distance_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Less_DoubleDouble_B_ImplicitCast;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CompassIconBase_C_UpdateVisibility) == 0x000008, "Wrong alignment on WBP_CompassIconBase_C_UpdateVisibility");
static_assert(sizeof(WBP_CompassIconBase_C_UpdateVisibility) == 0x000048, "Wrong size on WBP_CompassIconBase_C_UpdateVisibility");
static_assert(offsetof(WBP_CompassIconBase_C_UpdateVisibility, InDistance) == 0x000000, "Member 'WBP_CompassIconBase_C_UpdateVisibility::InDistance' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_UpdateVisibility, Temp_byte_Variable) == 0x000001, "Member 'WBP_CompassIconBase_C_UpdateVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_UpdateVisibility, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_CompassIconBase_C_UpdateVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_UpdateVisibility, CallFunc_IsVisible_ReturnValue) == 0x000003, "Member 'WBP_CompassIconBase_C_UpdateVisibility::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_UpdateVisibility, Temp_bool_Variable) == 0x000004, "Member 'WBP_CompassIconBase_C_UpdateVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_UpdateVisibility, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000005, "Member 'WBP_CompassIconBase_C_UpdateVisibility::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_UpdateVisibility, CallFunc_GetPalmi_ReturnValue) == 0x000008, "Member 'WBP_CompassIconBase_C_UpdateVisibility::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_UpdateVisibility, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_CompassIconBase_C_UpdateVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_UpdateVisibility, K2Node_Select_Default) == 0x000011, "Member 'WBP_CompassIconBase_C_UpdateVisibility::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_UpdateVisibility, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'WBP_CompassIconBase_C_UpdateVisibility::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_UpdateVisibility, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000030, "Member 'WBP_CompassIconBase_C_UpdateVisibility::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_UpdateVisibility, CallFunc_Vector_Distance_ReturnValue) == 0x000038, "Member 'WBP_CompassIconBase_C_UpdateVisibility::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CompassIconBase_C_UpdateVisibility, CallFunc_Less_DoubleDouble_B_ImplicitCast) == 0x000040, "Member 'WBP_CompassIconBase_C_UpdateVisibility::CallFunc_Less_DoubleDouble_B_ImplicitCast' has a wrong offset!");

}

