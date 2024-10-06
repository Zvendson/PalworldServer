#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalServer
{

// UserDefinedStruct RiverSplineElement.RiverSplineElement
// 0x0070 (0x0070 - 0x0000)
struct FRiverSplineElement final
{
public:
	class UStaticMesh*                            RiverSplineMesh_60_55DB51C74ADB81AE8B3C67B1E701AC70; // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                              SplineMaterial_38_D0D297DF41688E686403848C672F8D41; // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         Spacing_16_A1850B9941C9F1CE594A6D8E4D2B6C72;       // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Scale_17_0FF21A994C9965DF5D70EB8E0B857472;         // 0x0018(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Offset_18_04ECFFEB41DE1C636D2E66B03104C5E7;        // 0x0030(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Rotation_19_8934B08D49E62A953A970696627EBA95;      // 0x0048(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         TangetScale_25_3E26B9A843F1DD460A8E648EA4512EF1;   // 0x0060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SplineStartOffset_50_DCE654714E7A2AF455D6C1A501032968; // 0x0064(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             CollisionType_56_7635CF7B41E05135A2703891F4BDC530; // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CastShadow_59_F9E195C64ADC55FE40F00BA4A3EA0111;    // 0x0069(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Enabled_44_0E2207EB4FCC91374AFAF6A98B71185D;       // 0x006A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FRiverSplineElement) == 0x000008, "Wrong alignment on FRiverSplineElement");
static_assert(sizeof(FRiverSplineElement) == 0x000070, "Wrong size on FRiverSplineElement");
static_assert(offsetof(FRiverSplineElement, RiverSplineMesh_60_55DB51C74ADB81AE8B3C67B1E701AC70) == 0x000000, "Member 'FRiverSplineElement::RiverSplineMesh_60_55DB51C74ADB81AE8B3C67B1E701AC70' has a wrong offset!");
static_assert(offsetof(FRiverSplineElement, SplineMaterial_38_D0D297DF41688E686403848C672F8D41) == 0x000008, "Member 'FRiverSplineElement::SplineMaterial_38_D0D297DF41688E686403848C672F8D41' has a wrong offset!");
static_assert(offsetof(FRiverSplineElement, Spacing_16_A1850B9941C9F1CE594A6D8E4D2B6C72) == 0x000010, "Member 'FRiverSplineElement::Spacing_16_A1850B9941C9F1CE594A6D8E4D2B6C72' has a wrong offset!");
static_assert(offsetof(FRiverSplineElement, Scale_17_0FF21A994C9965DF5D70EB8E0B857472) == 0x000018, "Member 'FRiverSplineElement::Scale_17_0FF21A994C9965DF5D70EB8E0B857472' has a wrong offset!");
static_assert(offsetof(FRiverSplineElement, Offset_18_04ECFFEB41DE1C636D2E66B03104C5E7) == 0x000030, "Member 'FRiverSplineElement::Offset_18_04ECFFEB41DE1C636D2E66B03104C5E7' has a wrong offset!");
static_assert(offsetof(FRiverSplineElement, Rotation_19_8934B08D49E62A953A970696627EBA95) == 0x000048, "Member 'FRiverSplineElement::Rotation_19_8934B08D49E62A953A970696627EBA95' has a wrong offset!");
static_assert(offsetof(FRiverSplineElement, TangetScale_25_3E26B9A843F1DD460A8E648EA4512EF1) == 0x000060, "Member 'FRiverSplineElement::TangetScale_25_3E26B9A843F1DD460A8E648EA4512EF1' has a wrong offset!");
static_assert(offsetof(FRiverSplineElement, SplineStartOffset_50_DCE654714E7A2AF455D6C1A501032968) == 0x000064, "Member 'FRiverSplineElement::SplineStartOffset_50_DCE654714E7A2AF455D6C1A501032968' has a wrong offset!");
static_assert(offsetof(FRiverSplineElement, CollisionType_56_7635CF7B41E05135A2703891F4BDC530) == 0x000068, "Member 'FRiverSplineElement::CollisionType_56_7635CF7B41E05135A2703891F4BDC530' has a wrong offset!");
static_assert(offsetof(FRiverSplineElement, CastShadow_59_F9E195C64ADC55FE40F00BA4A3EA0111) == 0x000069, "Member 'FRiverSplineElement::CastShadow_59_F9E195C64ADC55FE40F00BA4A3EA0111' has a wrong offset!");
static_assert(offsetof(FRiverSplineElement, Enabled_44_0E2207EB4FCC91374AFAF6A98B71185D) == 0x00006A, "Member 'FRiverSplineElement::Enabled_44_0E2207EB4FCC91374AFAF6A98B71185D' has a wrong offset!");

}

