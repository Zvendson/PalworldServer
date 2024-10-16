#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Sky_Sphere.BP_Sky_Sphere_C
// 0x00B8 (0x0348 - 0x0290)
class ABP_Sky_Sphere_C final : public AActor
{
public:
	class UStaticMeshComponent*                   SkySphereMesh;                                     // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Base;                                              // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Sky_material;                                      // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Refresh_material;                                  // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A9[0x7];                                      // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADirectionalLight*                      Directional_light_actor;                           // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                          Colors_determined_by_sun_position;                 // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B9[0x7];                                      // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Sun_height;                                        // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Sun_brightness;                                    // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Horizon_Falloff;                                   // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Zenith_color;                                      // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Horizon_color;                                     // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Cloud_color;                                       // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Overall_Color;                                     // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Cloud_speed;                                       // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Cloud_opacity;                                     // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Stars_brightness;                                  // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      Horizon_color_curve;                               // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      Zenith_color_curve;                                // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      Cloud_color_curve;                                 // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void RefreshMaterial();
	void UpdateSunDirection();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Sky_Sphere_C">();
	}
	static class ABP_Sky_Sphere_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Sky_Sphere_C>();
	}
};
static_assert(alignof(ABP_Sky_Sphere_C) == 0x000008, "Wrong alignment on ABP_Sky_Sphere_C");
static_assert(sizeof(ABP_Sky_Sphere_C) == 0x000348, "Wrong size on ABP_Sky_Sphere_C");
static_assert(offsetof(ABP_Sky_Sphere_C, SkySphereMesh) == 0x000290, "Member 'ABP_Sky_Sphere_C::SkySphereMesh' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Base) == 0x000298, "Member 'ABP_Sky_Sphere_C::Base' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Sky_material) == 0x0002A0, "Member 'ABP_Sky_Sphere_C::Sky_material' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Refresh_material) == 0x0002A8, "Member 'ABP_Sky_Sphere_C::Refresh_material' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Directional_light_actor) == 0x0002B0, "Member 'ABP_Sky_Sphere_C::Directional_light_actor' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Colors_determined_by_sun_position) == 0x0002B8, "Member 'ABP_Sky_Sphere_C::Colors_determined_by_sun_position' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Sun_height) == 0x0002C0, "Member 'ABP_Sky_Sphere_C::Sun_height' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Sun_brightness) == 0x0002C8, "Member 'ABP_Sky_Sphere_C::Sun_brightness' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Horizon_Falloff) == 0x0002D0, "Member 'ABP_Sky_Sphere_C::Horizon_Falloff' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Zenith_color) == 0x0002D8, "Member 'ABP_Sky_Sphere_C::Zenith_color' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Horizon_color) == 0x0002E8, "Member 'ABP_Sky_Sphere_C::Horizon_color' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Cloud_color) == 0x0002F8, "Member 'ABP_Sky_Sphere_C::Cloud_color' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Overall_Color) == 0x000308, "Member 'ABP_Sky_Sphere_C::Overall_Color' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Cloud_speed) == 0x000318, "Member 'ABP_Sky_Sphere_C::Cloud_speed' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Cloud_opacity) == 0x000320, "Member 'ABP_Sky_Sphere_C::Cloud_opacity' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Stars_brightness) == 0x000328, "Member 'ABP_Sky_Sphere_C::Stars_brightness' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Horizon_color_curve) == 0x000330, "Member 'ABP_Sky_Sphere_C::Horizon_color_curve' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Zenith_color_curve) == 0x000338, "Member 'ABP_Sky_Sphere_C::Zenith_color_curve' has a wrong offset!");
static_assert(offsetof(ABP_Sky_Sphere_C, Cloud_color_curve) == 0x000340, "Member 'ABP_Sky_Sphere_C::Cloud_color_curve' has a wrong offset!");

}

