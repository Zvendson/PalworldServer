#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalServer
{

// UserDefinedStruct SplineAttachment.SplineAttachment
// 0x0070 (0x0070 - 0x0000)
struct FSplineAttachment final
{
public:
	class UStaticMesh*                            StaticMesh_47_3E26B9A843F1DD460A8E648EA4512EF1;    // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Actor_43_55DB51C74ADB81AE8B3C67B1E701AC70;         // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	float                                         Spacing_16_A1850B9941C9F1CE594A6D8E4D2B6C72;       // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Scale_17_0FF21A994C9965DF5D70EB8E0B857472;         // 0x0018(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Offset_18_04ECFFEB41DE1C636D2E66B03104C5E7;        // 0x0030(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SplineOffset_52_C731D9EB439A6A122EE274AC46F153E8;  // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               Rotation_19_8934B08D49E62A953A970696627EBA95;      // 0x0050(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          OrientToSpline_45_8AE90114466411B69A364A9ACC68D82F; // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Enabled_54_28B292F644AD049F1C817E98CAE7E1A8;       // 0x0069(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InterpolateSplineScale_63_795808994F00156B5CE473897E183DE4; // 0x006A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSplineAttachment) == 0x000008, "Wrong alignment on FSplineAttachment");
static_assert(sizeof(FSplineAttachment) == 0x000070, "Wrong size on FSplineAttachment");
static_assert(offsetof(FSplineAttachment, StaticMesh_47_3E26B9A843F1DD460A8E648EA4512EF1) == 0x000000, "Member 'FSplineAttachment::StaticMesh_47_3E26B9A843F1DD460A8E648EA4512EF1' has a wrong offset!");
static_assert(offsetof(FSplineAttachment, Actor_43_55DB51C74ADB81AE8B3C67B1E701AC70) == 0x000008, "Member 'FSplineAttachment::Actor_43_55DB51C74ADB81AE8B3C67B1E701AC70' has a wrong offset!");
static_assert(offsetof(FSplineAttachment, Spacing_16_A1850B9941C9F1CE594A6D8E4D2B6C72) == 0x000010, "Member 'FSplineAttachment::Spacing_16_A1850B9941C9F1CE594A6D8E4D2B6C72' has a wrong offset!");
static_assert(offsetof(FSplineAttachment, Scale_17_0FF21A994C9965DF5D70EB8E0B857472) == 0x000018, "Member 'FSplineAttachment::Scale_17_0FF21A994C9965DF5D70EB8E0B857472' has a wrong offset!");
static_assert(offsetof(FSplineAttachment, Offset_18_04ECFFEB41DE1C636D2E66B03104C5E7) == 0x000030, "Member 'FSplineAttachment::Offset_18_04ECFFEB41DE1C636D2E66B03104C5E7' has a wrong offset!");
static_assert(offsetof(FSplineAttachment, SplineOffset_52_C731D9EB439A6A122EE274AC46F153E8) == 0x000048, "Member 'FSplineAttachment::SplineOffset_52_C731D9EB439A6A122EE274AC46F153E8' has a wrong offset!");
static_assert(offsetof(FSplineAttachment, Rotation_19_8934B08D49E62A953A970696627EBA95) == 0x000050, "Member 'FSplineAttachment::Rotation_19_8934B08D49E62A953A970696627EBA95' has a wrong offset!");
static_assert(offsetof(FSplineAttachment, OrientToSpline_45_8AE90114466411B69A364A9ACC68D82F) == 0x000068, "Member 'FSplineAttachment::OrientToSpline_45_8AE90114466411B69A364A9ACC68D82F' has a wrong offset!");
static_assert(offsetof(FSplineAttachment, Enabled_54_28B292F644AD049F1C817E98CAE7E1A8) == 0x000069, "Member 'FSplineAttachment::Enabled_54_28B292F644AD049F1C817E98CAE7E1A8' has a wrong offset!");
static_assert(offsetof(FSplineAttachment, InterpolateSplineScale_63_795808994F00156B5CE473897E183DE4) == 0x00006A, "Member 'FSplineAttachment::InterpolateSplineScale_63_795808994F00156B5CE473897E183DE4' has a wrong offset!");

}

