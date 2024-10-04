#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass SunSky.SunSky_C
// 0x00A8 (0x0338 - 0x0290)
class ASunSky_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkyAtmosphereComponent*                SkyAtmosphere;                                     // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDirectionalLightComponent*             DirectionalLight;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkyLightComponent*                     SkyLight;                                          // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CompassMesh;                                       // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Latitude;                                          // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Longitude;                                         // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Year;                                              // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Month;                                             // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	int32                                         Day;                                               // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DC[0x4];                                      // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        TimeZone;                                          // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseDaylightSavingTime;                             // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_2E9[0x7];                                      // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        NorthOffset;                                       // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Elevation;                                         // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CorrectedElevation;                                // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Azimuth;                                           // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SolarTime;                                         // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	int32                                         DSTStartMonth;                                     // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int32                                         DSTStartDay;                                       // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int32                                         DSTEndMonth;                                       // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int32                                         DSTEndDay;                                         // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int32                                         DSTSwitchHour;                                     // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_32C[0x4];                                      // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        HashVal;                                           // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SunSky(int32 EntryPoint);
	void GetHMSFromSolarTime(double SolarTime_0, int32* Hour, int32* Minute, int32* Second);
	void IsDST(bool DSTEnable, int32 DSTStartMonth_0, int32 DSTStartDay_0, int32 DSTEndMonth_0, int32 DSTEndDay_0, int32 DSTSwitchHour_0, bool* IsDST_0);
	void ReceiveTick(float DeltaSeconds);
	void UpdateSun();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SunSky_C">();
	}
	static class ASunSky_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASunSky_C>();
	}
};
static_assert(alignof(ASunSky_C) == 0x000008, "Wrong alignment on ASunSky_C");
static_assert(sizeof(ASunSky_C) == 0x000338, "Wrong size on ASunSky_C");
static_assert(offsetof(ASunSky_C, UberGraphFrame) == 0x000290, "Member 'ASunSky_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ASunSky_C, SkyAtmosphere) == 0x000298, "Member 'ASunSky_C::SkyAtmosphere' has a wrong offset!");
static_assert(offsetof(ASunSky_C, DirectionalLight) == 0x0002A0, "Member 'ASunSky_C::DirectionalLight' has a wrong offset!");
static_assert(offsetof(ASunSky_C, SkyLight) == 0x0002A8, "Member 'ASunSky_C::SkyLight' has a wrong offset!");
static_assert(offsetof(ASunSky_C, CompassMesh) == 0x0002B0, "Member 'ASunSky_C::CompassMesh' has a wrong offset!");
static_assert(offsetof(ASunSky_C, Scene) == 0x0002B8, "Member 'ASunSky_C::Scene' has a wrong offset!");
static_assert(offsetof(ASunSky_C, Latitude) == 0x0002C0, "Member 'ASunSky_C::Latitude' has a wrong offset!");
static_assert(offsetof(ASunSky_C, Longitude) == 0x0002C8, "Member 'ASunSky_C::Longitude' has a wrong offset!");
static_assert(offsetof(ASunSky_C, Year) == 0x0002D0, "Member 'ASunSky_C::Year' has a wrong offset!");
static_assert(offsetof(ASunSky_C, Month) == 0x0002D4, "Member 'ASunSky_C::Month' has a wrong offset!");
static_assert(offsetof(ASunSky_C, Day) == 0x0002D8, "Member 'ASunSky_C::Day' has a wrong offset!");
static_assert(offsetof(ASunSky_C, TimeZone) == 0x0002E0, "Member 'ASunSky_C::TimeZone' has a wrong offset!");
static_assert(offsetof(ASunSky_C, UseDaylightSavingTime) == 0x0002E8, "Member 'ASunSky_C::UseDaylightSavingTime' has a wrong offset!");
static_assert(offsetof(ASunSky_C, NorthOffset) == 0x0002F0, "Member 'ASunSky_C::NorthOffset' has a wrong offset!");
static_assert(offsetof(ASunSky_C, Elevation) == 0x0002F8, "Member 'ASunSky_C::Elevation' has a wrong offset!");
static_assert(offsetof(ASunSky_C, CorrectedElevation) == 0x000300, "Member 'ASunSky_C::CorrectedElevation' has a wrong offset!");
static_assert(offsetof(ASunSky_C, Azimuth) == 0x000308, "Member 'ASunSky_C::Azimuth' has a wrong offset!");
static_assert(offsetof(ASunSky_C, SolarTime) == 0x000310, "Member 'ASunSky_C::SolarTime' has a wrong offset!");
static_assert(offsetof(ASunSky_C, DSTStartMonth) == 0x000318, "Member 'ASunSky_C::DSTStartMonth' has a wrong offset!");
static_assert(offsetof(ASunSky_C, DSTStartDay) == 0x00031C, "Member 'ASunSky_C::DSTStartDay' has a wrong offset!");
static_assert(offsetof(ASunSky_C, DSTEndMonth) == 0x000320, "Member 'ASunSky_C::DSTEndMonth' has a wrong offset!");
static_assert(offsetof(ASunSky_C, DSTEndDay) == 0x000324, "Member 'ASunSky_C::DSTEndDay' has a wrong offset!");
static_assert(offsetof(ASunSky_C, DSTSwitchHour) == 0x000328, "Member 'ASunSky_C::DSTSwitchHour' has a wrong offset!");
static_assert(offsetof(ASunSky_C, HashVal) == 0x000330, "Member 'ASunSky_C::HashVal' has a wrong offset!");

}

