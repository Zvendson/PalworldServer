#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.ExecuteUbergraph_WBP_WorldMap_IconBase_NoDesign
// 0x0004 (0x0004 - 0x0000)
struct WBP_WorldMap_IconBase_NoDesign_C_ExecuteUbergraph_WBP_WorldMap_IconBase_NoDesign final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_WorldMap_IconBase_NoDesign_C_ExecuteUbergraph_WBP_WorldMap_IconBase_NoDesign) == 0x000004, "Wrong alignment on WBP_WorldMap_IconBase_NoDesign_C_ExecuteUbergraph_WBP_WorldMap_IconBase_NoDesign");
static_assert(sizeof(WBP_WorldMap_IconBase_NoDesign_C_ExecuteUbergraph_WBP_WorldMap_IconBase_NoDesign) == 0x000004, "Wrong size on WBP_WorldMap_IconBase_NoDesign_C_ExecuteUbergraph_WBP_WorldMap_IconBase_NoDesign");
static_assert(offsetof(WBP_WorldMap_IconBase_NoDesign_C_ExecuteUbergraph_WBP_WorldMap_IconBase_NoDesign, EntryPoint) == 0x000000, "Member 'WBP_WorldMap_IconBase_NoDesign_C_ExecuteUbergraph_WBP_WorldMap_IconBase_NoDesign::EntryPoint' has a wrong offset!");

// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.GetIsHiding
// 0x0001 (0x0001 - 0x0000)
struct WBP_WorldMap_IconBase_NoDesign_C_GetIsHiding final
{
public:
	bool                                          Hiding;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_WorldMap_IconBase_NoDesign_C_GetIsHiding) == 0x000001, "Wrong alignment on WBP_WorldMap_IconBase_NoDesign_C_GetIsHiding");
static_assert(sizeof(WBP_WorldMap_IconBase_NoDesign_C_GetIsHiding) == 0x000001, "Wrong size on WBP_WorldMap_IconBase_NoDesign_C_GetIsHiding");
static_assert(offsetof(WBP_WorldMap_IconBase_NoDesign_C_GetIsHiding, Hiding) == 0x000000, "Member 'WBP_WorldMap_IconBase_NoDesign_C_GetIsHiding::Hiding' has a wrong offset!");

// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.GetLocationPoint
// 0x0018 (0x0018 - 0x0000)
struct WBP_WorldMap_IconBase_NoDesign_C_GetLocationPoint final
{
public:
	class UPalLocationPoint*                      LocationPoint;                                     // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalLocationManager*                    CallFunc_GetLocationManager_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalLocationPoint*                      CallFunc_GetLocationPoint_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_WorldMap_IconBase_NoDesign_C_GetLocationPoint) == 0x000008, "Wrong alignment on WBP_WorldMap_IconBase_NoDesign_C_GetLocationPoint");
static_assert(sizeof(WBP_WorldMap_IconBase_NoDesign_C_GetLocationPoint) == 0x000018, "Wrong size on WBP_WorldMap_IconBase_NoDesign_C_GetLocationPoint");
static_assert(offsetof(WBP_WorldMap_IconBase_NoDesign_C_GetLocationPoint, LocationPoint) == 0x000000, "Member 'WBP_WorldMap_IconBase_NoDesign_C_GetLocationPoint::LocationPoint' has a wrong offset!");
static_assert(offsetof(WBP_WorldMap_IconBase_NoDesign_C_GetLocationPoint, CallFunc_GetLocationManager_ReturnValue) == 0x000008, "Member 'WBP_WorldMap_IconBase_NoDesign_C_GetLocationPoint::CallFunc_GetLocationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_WorldMap_IconBase_NoDesign_C_GetLocationPoint, CallFunc_GetLocationPoint_ReturnValue) == 0x000010, "Member 'WBP_WorldMap_IconBase_NoDesign_C_GetLocationPoint::CallFunc_GetLocationPoint_ReturnValue' has a wrong offset!");

// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.GetLocationPosition
// 0x0040 (0x0040 - 0x0000)
struct WBP_WorldMap_IconBase_NoDesign_C_GetLocationPosition final
{
public:
	struct FVector                                LocationPosition;                                  // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalLocationPoint*                      CallFunc_GetLocationPoint_LocationPoint;           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetLocation_ReturnValue;                  // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_WorldMap_IconBase_NoDesign_C_GetLocationPosition) == 0x000008, "Wrong alignment on WBP_WorldMap_IconBase_NoDesign_C_GetLocationPosition");
static_assert(sizeof(WBP_WorldMap_IconBase_NoDesign_C_GetLocationPosition) == 0x000040, "Wrong size on WBP_WorldMap_IconBase_NoDesign_C_GetLocationPosition");
static_assert(offsetof(WBP_WorldMap_IconBase_NoDesign_C_GetLocationPosition, LocationPosition) == 0x000000, "Member 'WBP_WorldMap_IconBase_NoDesign_C_GetLocationPosition::LocationPosition' has a wrong offset!");
static_assert(offsetof(WBP_WorldMap_IconBase_NoDesign_C_GetLocationPosition, CallFunc_GetLocationPoint_LocationPoint) == 0x000018, "Member 'WBP_WorldMap_IconBase_NoDesign_C_GetLocationPosition::CallFunc_GetLocationPoint_LocationPoint' has a wrong offset!");
static_assert(offsetof(WBP_WorldMap_IconBase_NoDesign_C_GetLocationPosition, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_WorldMap_IconBase_NoDesign_C_GetLocationPosition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_WorldMap_IconBase_NoDesign_C_GetLocationPosition, CallFunc_GetLocation_ReturnValue) == 0x000028, "Member 'WBP_WorldMap_IconBase_NoDesign_C_GetLocationPosition::CallFunc_GetLocation_ReturnValue' has a wrong offset!");

// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.GetText
// 0x0018 (0x0018 - 0x0000)
struct WBP_WorldMap_IconBase_NoDesign_C_GetText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(Parm, OutParm)
};
static_assert(alignof(WBP_WorldMap_IconBase_NoDesign_C_GetText) == 0x000008, "Wrong alignment on WBP_WorldMap_IconBase_NoDesign_C_GetText");
static_assert(sizeof(WBP_WorldMap_IconBase_NoDesign_C_GetText) == 0x000018, "Wrong size on WBP_WorldMap_IconBase_NoDesign_C_GetText");
static_assert(offsetof(WBP_WorldMap_IconBase_NoDesign_C_GetText, Text) == 0x000000, "Member 'WBP_WorldMap_IconBase_NoDesign_C_GetText::Text' has a wrong offset!");

// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.IsIgnoreMask
// 0x0001 (0x0001 - 0x0000)
struct WBP_WorldMap_IconBase_NoDesign_C_IsIgnoreMask final
{
public:
	bool                                          IsIgnore;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_WorldMap_IconBase_NoDesign_C_IsIgnoreMask) == 0x000001, "Wrong alignment on WBP_WorldMap_IconBase_NoDesign_C_IsIgnoreMask");
static_assert(sizeof(WBP_WorldMap_IconBase_NoDesign_C_IsIgnoreMask) == 0x000001, "Wrong size on WBP_WorldMap_IconBase_NoDesign_C_IsIgnoreMask");
static_assert(offsetof(WBP_WorldMap_IconBase_NoDesign_C_IsIgnoreMask, IsIgnore) == 0x000000, "Member 'WBP_WorldMap_IconBase_NoDesign_C_IsIgnoreMask::IsIgnore' has a wrong offset!");

// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_WorldMap_IconBase_NoDesign_C_OnClicked__DelegateSignature final
{
public:
	class UWBP_WorldMap_IconBase_NoDesign_C*      IconWidget;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_WorldMap_IconBase_NoDesign_C_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_WorldMap_IconBase_NoDesign_C_OnClicked__DelegateSignature");
static_assert(sizeof(WBP_WorldMap_IconBase_NoDesign_C_OnClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_WorldMap_IconBase_NoDesign_C_OnClicked__DelegateSignature");
static_assert(offsetof(WBP_WorldMap_IconBase_NoDesign_C_OnClicked__DelegateSignature, IconWidget) == 0x000000, "Member 'WBP_WorldMap_IconBase_NoDesign_C_OnClicked__DelegateSignature::IconWidget' has a wrong offset!");

// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.OnHovered__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_WorldMap_IconBase_NoDesign_C_OnHovered__DelegateSignature final
{
public:
	class UWBP_WorldMap_IconBase_NoDesign_C*      IconWidget;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_WorldMap_IconBase_NoDesign_C_OnHovered__DelegateSignature) == 0x000008, "Wrong alignment on WBP_WorldMap_IconBase_NoDesign_C_OnHovered__DelegateSignature");
static_assert(sizeof(WBP_WorldMap_IconBase_NoDesign_C_OnHovered__DelegateSignature) == 0x000008, "Wrong size on WBP_WorldMap_IconBase_NoDesign_C_OnHovered__DelegateSignature");
static_assert(offsetof(WBP_WorldMap_IconBase_NoDesign_C_OnHovered__DelegateSignature, IconWidget) == 0x000000, "Member 'WBP_WorldMap_IconBase_NoDesign_C_OnHovered__DelegateSignature::IconWidget' has a wrong offset!");

// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.OnUnhovered__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_WorldMap_IconBase_NoDesign_C_OnUnhovered__DelegateSignature final
{
public:
	class UWBP_WorldMap_IconBase_NoDesign_C*      IconWidget;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_WorldMap_IconBase_NoDesign_C_OnUnhovered__DelegateSignature) == 0x000008, "Wrong alignment on WBP_WorldMap_IconBase_NoDesign_C_OnUnhovered__DelegateSignature");
static_assert(sizeof(WBP_WorldMap_IconBase_NoDesign_C_OnUnhovered__DelegateSignature) == 0x000008, "Wrong size on WBP_WorldMap_IconBase_NoDesign_C_OnUnhovered__DelegateSignature");
static_assert(offsetof(WBP_WorldMap_IconBase_NoDesign_C_OnUnhovered__DelegateSignature, IconWidget) == 0x000000, "Member 'WBP_WorldMap_IconBase_NoDesign_C_OnUnhovered__DelegateSignature::IconWidget' has a wrong offset!");

// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.SetEnable
// 0x0001 (0x0001 - 0x0000)
struct WBP_WorldMap_IconBase_NoDesign_C_SetEnable final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_WorldMap_IconBase_NoDesign_C_SetEnable) == 0x000001, "Wrong alignment on WBP_WorldMap_IconBase_NoDesign_C_SetEnable");
static_assert(sizeof(WBP_WorldMap_IconBase_NoDesign_C_SetEnable) == 0x000001, "Wrong size on WBP_WorldMap_IconBase_NoDesign_C_SetEnable");
static_assert(offsetof(WBP_WorldMap_IconBase_NoDesign_C_SetEnable, Enable) == 0x000000, "Member 'WBP_WorldMap_IconBase_NoDesign_C_SetEnable::Enable' has a wrong offset!");

// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.SetIgnoreMask
// 0x0001 (0x0001 - 0x0000)
struct WBP_WorldMap_IconBase_NoDesign_C_SetIgnoreMask final
{
public:
	bool                                          IsIgnore;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_WorldMap_IconBase_NoDesign_C_SetIgnoreMask) == 0x000001, "Wrong alignment on WBP_WorldMap_IconBase_NoDesign_C_SetIgnoreMask");
static_assert(sizeof(WBP_WorldMap_IconBase_NoDesign_C_SetIgnoreMask) == 0x000001, "Wrong size on WBP_WorldMap_IconBase_NoDesign_C_SetIgnoreMask");
static_assert(offsetof(WBP_WorldMap_IconBase_NoDesign_C_SetIgnoreMask, IsIgnore) == 0x000000, "Member 'WBP_WorldMap_IconBase_NoDesign_C_SetIgnoreMask::IsIgnore' has a wrong offset!");

// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.SetIsHiding
// 0x0001 (0x0001 - 0x0000)
struct WBP_WorldMap_IconBase_NoDesign_C_SetIsHiding final
{
public:
	bool                                          Hiding;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_WorldMap_IconBase_NoDesign_C_SetIsHiding) == 0x000001, "Wrong alignment on WBP_WorldMap_IconBase_NoDesign_C_SetIsHiding");
static_assert(sizeof(WBP_WorldMap_IconBase_NoDesign_C_SetIsHiding) == 0x000001, "Wrong size on WBP_WorldMap_IconBase_NoDesign_C_SetIsHiding");
static_assert(offsetof(WBP_WorldMap_IconBase_NoDesign_C_SetIsHiding, Hiding) == 0x000000, "Member 'WBP_WorldMap_IconBase_NoDesign_C_SetIsHiding::Hiding' has a wrong offset!");

// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.Setup
// 0x0020 (0x0020 - 0x0000)
struct WBP_WorldMap_IconBase_NoDesign_C_Setup final
{
public:
	class UPalLocationPoint*                      LocationPoint;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  LocationId_0;                                      // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_WorldMap_IconBase_NoDesign_C_Setup) == 0x000008, "Wrong alignment on WBP_WorldMap_IconBase_NoDesign_C_Setup");
static_assert(sizeof(WBP_WorldMap_IconBase_NoDesign_C_Setup) == 0x000020, "Wrong size on WBP_WorldMap_IconBase_NoDesign_C_Setup");
static_assert(offsetof(WBP_WorldMap_IconBase_NoDesign_C_Setup, LocationPoint) == 0x000000, "Member 'WBP_WorldMap_IconBase_NoDesign_C_Setup::LocationPoint' has a wrong offset!");
static_assert(offsetof(WBP_WorldMap_IconBase_NoDesign_C_Setup, LocationId_0) == 0x000008, "Member 'WBP_WorldMap_IconBase_NoDesign_C_Setup::LocationId_0' has a wrong offset!");
static_assert(offsetof(WBP_WorldMap_IconBase_NoDesign_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_WorldMap_IconBase_NoDesign_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.Setup_Internal
// 0x0008 (0x0008 - 0x0000)
struct WBP_WorldMap_IconBase_NoDesign_C_Setup_Internal final
{
public:
	class UPalLocationPoint*                      LocationPoint;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_WorldMap_IconBase_NoDesign_C_Setup_Internal) == 0x000008, "Wrong alignment on WBP_WorldMap_IconBase_NoDesign_C_Setup_Internal");
static_assert(sizeof(WBP_WorldMap_IconBase_NoDesign_C_Setup_Internal) == 0x000008, "Wrong size on WBP_WorldMap_IconBase_NoDesign_C_Setup_Internal");
static_assert(offsetof(WBP_WorldMap_IconBase_NoDesign_C_Setup_Internal, LocationPoint) == 0x000000, "Member 'WBP_WorldMap_IconBase_NoDesign_C_Setup_Internal::LocationPoint' has a wrong offset!");

}

