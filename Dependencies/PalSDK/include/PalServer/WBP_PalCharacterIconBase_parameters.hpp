#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.ExecuteUbergraph_WBP_PalCharacterIconBase
// 0x0068 (0x0068 - 0x0000)
struct WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              K2Node_CustomEvent_softTexture;                    // 0x0038(0x0030)(HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase) == 0x000008, "Wrong alignment on WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase");
static_assert(sizeof(WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase) == 0x000068, "Wrong size on WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase");
static_assert(offsetof(WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase, EntryPoint) == 0x000000, "Member 'WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase, Temp_object_Variable) == 0x000020, "Member 'WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase, K2Node_DynamicCast_AsTexture_2D) == 0x000028, "Member 'WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase, K2Node_CustomEvent_softTexture) == 0x000038, "Member 'WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase::K2Node_CustomEvent_softTexture' has a wrong offset!");

// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.LoadIconEvent_Internal
// 0x0030 (0x0030 - 0x0000)
struct WBP_PalCharacterIconBase_C_LoadIconEvent_Internal final
{
public:
	TSoftObjectPtr<class UTexture2D>              SoftTexture;                                       // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterIconBase_C_LoadIconEvent_Internal) == 0x000008, "Wrong alignment on WBP_PalCharacterIconBase_C_LoadIconEvent_Internal");
static_assert(sizeof(WBP_PalCharacterIconBase_C_LoadIconEvent_Internal) == 0x000030, "Wrong size on WBP_PalCharacterIconBase_C_LoadIconEvent_Internal");
static_assert(offsetof(WBP_PalCharacterIconBase_C_LoadIconEvent_Internal, SoftTexture) == 0x000000, "Member 'WBP_PalCharacterIconBase_C_LoadIconEvent_Internal::SoftTexture' has a wrong offset!");

// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.OnLoaded_2131D8E64037785EDD84EFACA46D7EBC
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterIconBase_C_OnLoaded_2131D8E64037785EDD84EFACA46D7EBC final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterIconBase_C_OnLoaded_2131D8E64037785EDD84EFACA46D7EBC) == 0x000008, "Wrong alignment on WBP_PalCharacterIconBase_C_OnLoaded_2131D8E64037785EDD84EFACA46D7EBC");
static_assert(sizeof(WBP_PalCharacterIconBase_C_OnLoaded_2131D8E64037785EDD84EFACA46D7EBC) == 0x000008, "Wrong size on WBP_PalCharacterIconBase_C_OnLoaded_2131D8E64037785EDD84EFACA46D7EBC");
static_assert(offsetof(WBP_PalCharacterIconBase_C_OnLoaded_2131D8E64037785EDD84EFACA46D7EBC, Loaded) == 0x000000, "Member 'WBP_PalCharacterIconBase_C_OnLoaded_2131D8E64037785EDD84EFACA46D7EBC::Loaded' has a wrong offset!");

// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.OnLoadedTexture__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterIconBase_C_OnLoadedTexture__DelegateSignature final
{
public:
	class UTexture2D*                             LoadedTexture;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterIconBase_C_OnLoadedTexture__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalCharacterIconBase_C_OnLoadedTexture__DelegateSignature");
static_assert(sizeof(WBP_PalCharacterIconBase_C_OnLoadedTexture__DelegateSignature) == 0x000008, "Wrong size on WBP_PalCharacterIconBase_C_OnLoadedTexture__DelegateSignature");
static_assert(offsetof(WBP_PalCharacterIconBase_C_OnLoadedTexture__DelegateSignature, LoadedTexture) == 0x000000, "Member 'WBP_PalCharacterIconBase_C_OnLoadedTexture__DelegateSignature::LoadedTexture' has a wrong offset!");

// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.OnUpdateSkinName
// 0x00E0 (0x00E0 - 0x0000)
struct WBP_PalCharacterIconBase_C_OnUpdateSkinName final
{
public:
	class FName                                   NewSkinName;                                       // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       K2Node_DynamicCast_AsPal_Individual_Character_Parameter; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetSkinName_ReturnValue;                  // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetCharacterID_ReturnValue;               // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetCharacterIconTextureBySkinName_ReturnValue; // 0x0048(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetCharacterIconTexture_ReturnValue;      // 0x0078(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_IsSkinApplied_ReturnValue;                // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              K2Node_Select_Default;                             // 0x00B0(0x0030)(HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterIconBase_C_OnUpdateSkinName) == 0x000008, "Wrong alignment on WBP_PalCharacterIconBase_C_OnUpdateSkinName");
static_assert(sizeof(WBP_PalCharacterIconBase_C_OnUpdateSkinName) == 0x0000E0, "Wrong size on WBP_PalCharacterIconBase_C_OnUpdateSkinName");
static_assert(offsetof(WBP_PalCharacterIconBase_C_OnUpdateSkinName, NewSkinName) == 0x000000, "Member 'WBP_PalCharacterIconBase_C_OnUpdateSkinName::NewSkinName' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_OnUpdateSkinName, Temp_bool_Variable) == 0x000008, "Member 'WBP_PalCharacterIconBase_C_OnUpdateSkinName::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_OnUpdateSkinName, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000010, "Member 'WBP_PalCharacterIconBase_C_OnUpdateSkinName::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_OnUpdateSkinName, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000018, "Member 'WBP_PalCharacterIconBase_C_OnUpdateSkinName::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_OnUpdateSkinName, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000020, "Member 'WBP_PalCharacterIconBase_C_OnUpdateSkinName::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_OnUpdateSkinName, K2Node_DynamicCast_AsPal_Individual_Character_Parameter) == 0x000028, "Member 'WBP_PalCharacterIconBase_C_OnUpdateSkinName::K2Node_DynamicCast_AsPal_Individual_Character_Parameter' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_OnUpdateSkinName, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WBP_PalCharacterIconBase_C_OnUpdateSkinName::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_OnUpdateSkinName, CallFunc_GetSkinName_ReturnValue) == 0x000034, "Member 'WBP_PalCharacterIconBase_C_OnUpdateSkinName::CallFunc_GetSkinName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_OnUpdateSkinName, CallFunc_GetCharacterID_ReturnValue) == 0x00003C, "Member 'WBP_PalCharacterIconBase_C_OnUpdateSkinName::CallFunc_GetCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_OnUpdateSkinName, CallFunc_GetCharacterIconTextureBySkinName_ReturnValue) == 0x000048, "Member 'WBP_PalCharacterIconBase_C_OnUpdateSkinName::CallFunc_GetCharacterIconTextureBySkinName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_OnUpdateSkinName, CallFunc_GetCharacterIconTexture_ReturnValue) == 0x000078, "Member 'WBP_PalCharacterIconBase_C_OnUpdateSkinName::CallFunc_GetCharacterIconTexture_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_OnUpdateSkinName, CallFunc_IsSkinApplied_ReturnValue) == 0x0000A8, "Member 'WBP_PalCharacterIconBase_C_OnUpdateSkinName::CallFunc_IsSkinApplied_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_OnUpdateSkinName, K2Node_Select_Default) == 0x0000B0, "Member 'WBP_PalCharacterIconBase_C_OnUpdateSkinName::K2Node_Select_Default' has a wrong offset!");

// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.Setup
// 0x0050 (0x0050 - 0x0000)
struct WBP_PalCharacterIconBase_C_Setup final
{
public:
	class FName                                   CharacterID;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetCharacterIconTexture_ReturnValue;      // 0x0020(0x0030)(UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterIconBase_C_Setup) == 0x000008, "Wrong alignment on WBP_PalCharacterIconBase_C_Setup");
static_assert(sizeof(WBP_PalCharacterIconBase_C_Setup) == 0x000050, "Wrong size on WBP_PalCharacterIconBase_C_Setup");
static_assert(offsetof(WBP_PalCharacterIconBase_C_Setup, CharacterID) == 0x000000, "Member 'WBP_PalCharacterIconBase_C_Setup::CharacterID' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_Setup, CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName) == 0x000008, "Member 'WBP_PalCharacterIconBase_C_Setup::CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_Setup, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000010, "Member 'WBP_PalCharacterIconBase_C_Setup::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_PalCharacterIconBase_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_Setup, CallFunc_GetCharacterIconTexture_ReturnValue) == 0x000020, "Member 'WBP_PalCharacterIconBase_C_Setup::CallFunc_GetCharacterIconTexture_ReturnValue' has a wrong offset!");

// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.SetupByHandle
// 0x0018 (0x0018 - 0x0000)
struct WBP_PalCharacterIconBase_C_SetupByHandle final
{
public:
	class UPalIndividualCharacterHandle*          IndividualHandle;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterIconBase_C_SetupByHandle) == 0x000008, "Wrong alignment on WBP_PalCharacterIconBase_C_SetupByHandle");
static_assert(sizeof(WBP_PalCharacterIconBase_C_SetupByHandle) == 0x000018, "Wrong size on WBP_PalCharacterIconBase_C_SetupByHandle");
static_assert(offsetof(WBP_PalCharacterIconBase_C_SetupByHandle, IndividualHandle) == 0x000000, "Member 'WBP_PalCharacterIconBase_C_SetupByHandle::IndividualHandle' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_SetupByHandle, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000008, "Member 'WBP_PalCharacterIconBase_C_SetupByHandle::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_SetupByHandle, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PalCharacterIconBase_C_SetupByHandle::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.SetupByParameter
// 0x0058 (0x0058 - 0x0000)
struct WBP_PalCharacterIconBase_C_SetupByParameter final
{
public:
	class UPalIndividualCharacterParameter*       Parameter;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UPalIndividualCharacterParameter> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x0008(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName& NewSkinName)>     K2Node_CreateDelegate_OutputDelegate;              // 0x0044(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterIconBase_C_SetupByParameter) == 0x000008, "Wrong alignment on WBP_PalCharacterIconBase_C_SetupByParameter");
static_assert(sizeof(WBP_PalCharacterIconBase_C_SetupByParameter) == 0x000058, "Wrong size on WBP_PalCharacterIconBase_C_SetupByParameter");
static_assert(offsetof(WBP_PalCharacterIconBase_C_SetupByParameter, Parameter) == 0x000000, "Member 'WBP_PalCharacterIconBase_C_SetupByParameter::Parameter' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_SetupByParameter, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x000008, "Member 'WBP_PalCharacterIconBase_C_SetupByParameter::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_SetupByParameter, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'WBP_PalCharacterIconBase_C_SetupByParameter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_SetupByParameter, CallFunc_MakeLiteralName_ReturnValue) == 0x00003C, "Member 'WBP_PalCharacterIconBase_C_SetupByParameter::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_SetupByParameter, K2Node_CreateDelegate_OutputDelegate) == 0x000044, "Member 'WBP_PalCharacterIconBase_C_SetupByParameter::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.UnbindEvent
// 0x0030 (0x0030 - 0x0000)
struct WBP_PalCharacterIconBase_C_UnbindEvent final
{
public:
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       K2Node_DynamicCast_AsPal_Individual_Character_Parameter; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName& NewSkinName)>     K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterIconBase_C_UnbindEvent) == 0x000008, "Wrong alignment on WBP_PalCharacterIconBase_C_UnbindEvent");
static_assert(sizeof(WBP_PalCharacterIconBase_C_UnbindEvent) == 0x000030, "Wrong size on WBP_PalCharacterIconBase_C_UnbindEvent");
static_assert(offsetof(WBP_PalCharacterIconBase_C_UnbindEvent, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000000, "Member 'WBP_PalCharacterIconBase_C_UnbindEvent::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_UnbindEvent, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000008, "Member 'WBP_PalCharacterIconBase_C_UnbindEvent::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_UnbindEvent, K2Node_DynamicCast_AsPal_Individual_Character_Parameter) == 0x000010, "Member 'WBP_PalCharacterIconBase_C_UnbindEvent::K2Node_DynamicCast_AsPal_Individual_Character_Parameter' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_UnbindEvent, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_PalCharacterIconBase_C_UnbindEvent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_UnbindEvent, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'WBP_PalCharacterIconBase_C_UnbindEvent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_UnbindEvent, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'WBP_PalCharacterIconBase_C_UnbindEvent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

}

