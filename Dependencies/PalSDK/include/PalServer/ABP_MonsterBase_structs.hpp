#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace PalServer
{

// ScriptStruct ABP_MonsterBase.ABP_MonsterBase_C.AnimBlueprintGeneratedConstantData
// 0x0197 (0x0198 - 0x0001)
struct ABP_MonsterBase::FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_333;                                // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_334;                                // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_335;                                // 0x0014(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_336;                                // 0x001C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_337;                                // 0x0024(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_338;                                // 0x002C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_339;                                // 0x0034(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_340;                                 // 0x003C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_341;                                // 0x0040(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_342;                                 // 0x0048(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_343;                                // 0x004C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_344;                                 // 0x0054(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_345;                              // 0x0058(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_346;                               // 0x0084(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_347;                                // 0x0088(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_348;                                 // 0x0090(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_349;                                // 0x0094(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95[0x3];                                       // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_350;                               // 0x0098(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_351;                                // 0x009C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_352;                                // 0x009D(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E[0x2];                                       // 0x009E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_353;                                // 0x00A0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_354;                                // 0x00A8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_355;                                 // 0x00B0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendProfile*                          __BlendProfile_356;                                // 0x00B8(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_357;                                  // 0x00C0(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          __BoolProperty_358;                                // 0x00C8(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_359;                                // 0x00C9(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_360;                                // 0x00CA(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CB[0x5];                                       // 0x00CB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_361;                               // 0x00D0(0x0010)(BlueprintVisible, EditFixedSize)
	struct FAnimNodeFunctionRef                   __StructProperty_362;                              // 0x00E0(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0100(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0180(0x0018)()
};
static_assert(alignof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_MonsterBase::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData) == 0x000198, "Wrong size on ABP_MonsterBase::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData, __NameProperty_333) == 0x000004, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedConstantData::__NameProperty_333' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData, __NameProperty_334) == 0x00000C, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedConstantData::__NameProperty_334' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData, __NameProperty_335) == 0x000014, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedConstantData::__NameProperty_335' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData, __NameProperty_336) == 0x00001C, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedConstantData::__NameProperty_336' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData, __NameProperty_337) == 0x000024, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedConstantData::__NameProperty_337' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData, __NameProperty_338) == 0x00002C, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedConstantData::__NameProperty_338' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData, __NameProperty_339) == 0x000034, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedConstantData::__NameProperty_339' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData, __IntProperty_340) == 0x00003C, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedConstantData::__IntProperty_340' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData, __NameProperty_341) == 0x000040, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedConstantData::__NameProperty_341' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData, __IntProperty_342) == 0x000048, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedConstantData::__IntProperty_342' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData, __NameProperty_343) == 0x00004C, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedConstantData::__NameProperty_343' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData, __IntProperty_344) == 0x000054, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedConstantData::__IntProperty_344' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData, __StructProperty_345) == 0x000058, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedConstantData::__StructProperty_345' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData, __FloatProperty_346) == 0x000084, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedConstantData::__FloatProperty_346' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData, __NameProperty_347) == 0x000088, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedConstantData::__NameProperty_347' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData, __IntProperty_348) == 0x000090, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedConstantData::__IntProperty_348' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData, __BoolProperty_349) == 0x000094, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedConstantData::__BoolProperty_349' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData, __FloatProperty_350) == 0x000098, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedConstantData::__FloatProperty_350' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData, __EnumProperty_351) == 0x00009C, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedConstantData::__EnumProperty_351' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData, __ByteProperty_352) == 0x00009D, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedConstantData::__ByteProperty_352' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData, __NameProperty_353) == 0x0000A0, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedConstantData::__NameProperty_353' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData, __NameProperty_354) == 0x0000A8, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedConstantData::__NameProperty_354' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData, __IntProperty_355) == 0x0000B0, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedConstantData::__IntProperty_355' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData, __BlendProfile_356) == 0x0000B8, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedConstantData::__BlendProfile_356' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData, __CurveFloat_357) == 0x0000C0, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedConstantData::__CurveFloat_357' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData, __BoolProperty_358) == 0x0000C8, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedConstantData::__BoolProperty_358' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData, __EnumProperty_359) == 0x0000C9, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedConstantData::__EnumProperty_359' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData, __EnumProperty_360) == 0x0000CA, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedConstantData::__EnumProperty_360' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData, __ArrayProperty_361) == 0x0000D0, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedConstantData::__ArrayProperty_361' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData, __StructProperty_362) == 0x0000E0, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedConstantData::__StructProperty_362' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000100, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000180, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct ABP_MonsterBase.ABP_MonsterBase_C.AnimBlueprintGeneratedMutableData
// 0x005F (0x0060 - 0x0001)
struct ABP_MonsterBase::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty;                                   // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_0;                                 // 0x0008(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_1;                                  // 0x000C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_2;                                  // 0x000D(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_3;                                  // 0x000E(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F[0x1];                                        // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_4;                                 // 0x0010(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_5;                                 // 0x0014(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_6;                                 // 0x0018(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_7;                                  // 0x001C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_8;                                  // 0x001D(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E[0x2];                                       // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_9;                                 // 0x0020(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_10;                                // 0x0024(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_11;                                // 0x0028(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_12;                                // 0x002C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_13;                                 // 0x0030(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_14;                                // 0x0034(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_15;                                // 0x0038(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_16;                                // 0x003C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_17;                                // 0x0040(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_18;                                // 0x0048(0x0010)(BlueprintVisible, EditFixedSize)
	bool                                          __BoolProperty_19;                                 // 0x0058(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_20;                                 // 0x0059(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_MonsterBase::FAnimBlueprintGeneratedMutableData) == 0x000008, "Wrong alignment on ABP_MonsterBase::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(ABP_MonsterBase::FAnimBlueprintGeneratedMutableData) == 0x000060, "Wrong size on ABP_MonsterBase::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedMutableData, __FloatProperty) == 0x000004, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedMutableData::__FloatProperty' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedMutableData, __FloatProperty_0) == 0x000008, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedMutableData::__FloatProperty_0' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedMutableData, __BoolProperty_1) == 0x00000C, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedMutableData::__BoolProperty_1' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedMutableData, __BoolProperty_2) == 0x00000D, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedMutableData::__BoolProperty_2' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedMutableData, __BoolProperty_3) == 0x00000E, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedMutableData::__BoolProperty_3' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedMutableData, __FloatProperty_4) == 0x000010, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedMutableData::__FloatProperty_4' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedMutableData, __FloatProperty_5) == 0x000014, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedMutableData::__FloatProperty_5' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedMutableData, __FloatProperty_6) == 0x000018, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedMutableData::__FloatProperty_6' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedMutableData, __BoolProperty_7) == 0x00001C, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedMutableData::__BoolProperty_7' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedMutableData, __BoolProperty_8) == 0x00001D, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedMutableData::__BoolProperty_8' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedMutableData, __FloatProperty_9) == 0x000020, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedMutableData::__FloatProperty_9' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedMutableData, __FloatProperty_10) == 0x000024, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedMutableData::__FloatProperty_10' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedMutableData, __FloatProperty_11) == 0x000028, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedMutableData::__FloatProperty_11' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedMutableData, __FloatProperty_12) == 0x00002C, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedMutableData::__FloatProperty_12' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedMutableData, __BoolProperty_13) == 0x000030, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedMutableData::__BoolProperty_13' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedMutableData, __FloatProperty_14) == 0x000034, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedMutableData::__FloatProperty_14' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedMutableData, __FloatProperty_15) == 0x000038, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedMutableData::__FloatProperty_15' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedMutableData, __FloatProperty_16) == 0x00003C, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedMutableData::__FloatProperty_16' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedMutableData, __FloatProperty_17) == 0x000040, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedMutableData::__FloatProperty_17' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedMutableData, __ArrayProperty_18) == 0x000048, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedMutableData::__ArrayProperty_18' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedMutableData, __BoolProperty_19) == 0x000058, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedMutableData::__BoolProperty_19' has a wrong offset!");
static_assert(offsetof(ABP_MonsterBase::FAnimBlueprintGeneratedMutableData, __BoolProperty_20) == 0x000059, "Member 'ABP_MonsterBase::FAnimBlueprintGeneratedMutableData::__BoolProperty_20' has a wrong offset!");

}

