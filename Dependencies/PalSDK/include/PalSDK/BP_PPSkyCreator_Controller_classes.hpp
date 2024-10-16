#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "PPSkyCreatorPlugin_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PPSkyCreator_Controller.BP_PPSkyCreator_Controller_C
// 0x0A50 (0x0CE0 - 0x0290)
class ABP_PPSkyCreator_Controller_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        SoundRain;                                         // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   TextRender;                                        // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class APPSkyCreator*                          SkyCreatorTarget;                                  // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                          bRealtimeWeatherChange;                            // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B9[0x7];                                      // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ChangeIntervalTimeMin;                             // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ChangeIntervalTimeMax;                             // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPPSkyCreatorWeatherPreset*             StartWeatherPreset;                                // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        InterpolateDurationTimeMin;                        // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        InterpolateDurationTimeMax;                        // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UPPSkyCreatorWeatherPreset*>     RandomWeatherPresets;                              // 0x02E8(0x0010)(Edit, BlueprintVisible)
	bool                                          DrawDebugMessages;                                 // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F9[0x7];                                      // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundCue*                              Rain;                                              // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPPSkyCreatorWeatherPreset*             NextWeatherPreset;                                 // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPPSkyCreatorWeatherSettings           CurrentWeatherSettings;                            // 0x0310(0x0458)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPPSkyCreatorWeatherSettings           NextWeatherSettings;                               // 0x0768(0x0458)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	double                                        WeatherInterpolateDuration;                        // 0x0BC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        InterpolateDurationAlpha;                          // 0x0BC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentChangeInterval;                             // 0x0BD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Timer_WeatherInterpolateDuration;                  // 0x0BD8(0x0008)(Edit, BlueprintVisible, Net, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Timer_WeatherChangeInterval;                       // 0x0BE0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnableRandomWind;                                 // 0x0BE8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BE9[0x7];                                      // 0x0BE9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CloudWindSpeedMin;                                 // 0x0BF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CloudWindSpeedMax;                                 // 0x0BF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPPSkyCreatorWindSettings              CurrentWindSettings;                               // 0x0C00(0x001C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPPSkyCreatorWindSettings              NextWindSettings;                                  // 0x0C1C(0x001C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	double                                        CurrentWindDirection;                              // 0x0C38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentWindSpeed;                                  // 0x0C40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        WetnessAccumulateDuration;                         // 0x0C48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        WetnessDryDuration;                                // 0x0C50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PuddlesAccumulateDuration;                         // 0x0C58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PuddlesDryDuration;                                // 0x0C60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SnowAccumulateDuration;                            // 0x0C68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SnowMeltDuration;                                  // 0x0C70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           WetnessAccumulationTimer;                          // 0x0C78(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           WetnessDryTimer;                                   // 0x0C80(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           PuddlesAccumulationTimer;                          // 0x0C88(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           PuddlesDryTimer;                                   // 0x0C90(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           SnowAccumulationTimer;                             // 0x0C98(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           SnowMeltTimer;                                     // 0x0CA0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentWetnessAmount;                              // 0x0CA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NextWetnessAmount;                                 // 0x0CB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentPuddlesAmount;                              // 0x0CB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NextPuddlesAmount;                                 // 0x0CC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentSnowAmount;                                 // 0x0CC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NextSnowAmount;                                    // 0x0CD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Lightnings;                                        // 0x0CD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PPSkyCreator_Controller(int32 EntryPoint);
	void Finish_PuddlesAccumulation();
	void Finish_PuddlesDry();
	void Finish_SnowAccumulate();
	void Finish_SnowDry();
	void Finish_WeatherChangeInterval();
	void Finish_WeatherInterpolation();
	void Finish_WetnessAccumulation();
	void Finish_WetnessDry();
	void LightningStrike(const struct FVector& LightningPosition);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetRainVolume();
	void Start_PuddlesAccumulate();
	void Start_PuddlesDry();
	void Start_SnowAccumulate();
	void Start_SnowMelt();
	void Start_WeatherChangeInterval();
	void Start_WeatherInterpolation();
	void Start_WetnessAccumulate();
	void Start_WetnessDry();
	void UserConstructionScript();
	void WeatherMaterialFX_Interpolation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PPSkyCreator_Controller_C">();
	}
	static class ABP_PPSkyCreator_Controller_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PPSkyCreator_Controller_C>();
	}
};
static_assert(alignof(ABP_PPSkyCreator_Controller_C) == 0x000008, "Wrong alignment on ABP_PPSkyCreator_Controller_C");
static_assert(sizeof(ABP_PPSkyCreator_Controller_C) == 0x000CE0, "Wrong size on ABP_PPSkyCreator_Controller_C");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, UberGraphFrame) == 0x000290, "Member 'ABP_PPSkyCreator_Controller_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, SoundRain) == 0x000298, "Member 'ABP_PPSkyCreator_Controller_C::SoundRain' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, TextRender) == 0x0002A0, "Member 'ABP_PPSkyCreator_Controller_C::TextRender' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, DefaultSceneRoot) == 0x0002A8, "Member 'ABP_PPSkyCreator_Controller_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, SkyCreatorTarget) == 0x0002B0, "Member 'ABP_PPSkyCreator_Controller_C::SkyCreatorTarget' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, bRealtimeWeatherChange) == 0x0002B8, "Member 'ABP_PPSkyCreator_Controller_C::bRealtimeWeatherChange' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, ChangeIntervalTimeMin) == 0x0002C0, "Member 'ABP_PPSkyCreator_Controller_C::ChangeIntervalTimeMin' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, ChangeIntervalTimeMax) == 0x0002C8, "Member 'ABP_PPSkyCreator_Controller_C::ChangeIntervalTimeMax' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, StartWeatherPreset) == 0x0002D0, "Member 'ABP_PPSkyCreator_Controller_C::StartWeatherPreset' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, InterpolateDurationTimeMin) == 0x0002D8, "Member 'ABP_PPSkyCreator_Controller_C::InterpolateDurationTimeMin' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, InterpolateDurationTimeMax) == 0x0002E0, "Member 'ABP_PPSkyCreator_Controller_C::InterpolateDurationTimeMax' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, RandomWeatherPresets) == 0x0002E8, "Member 'ABP_PPSkyCreator_Controller_C::RandomWeatherPresets' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, DrawDebugMessages) == 0x0002F8, "Member 'ABP_PPSkyCreator_Controller_C::DrawDebugMessages' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, Rain) == 0x000300, "Member 'ABP_PPSkyCreator_Controller_C::Rain' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, NextWeatherPreset) == 0x000308, "Member 'ABP_PPSkyCreator_Controller_C::NextWeatherPreset' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, CurrentWeatherSettings) == 0x000310, "Member 'ABP_PPSkyCreator_Controller_C::CurrentWeatherSettings' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, NextWeatherSettings) == 0x000768, "Member 'ABP_PPSkyCreator_Controller_C::NextWeatherSettings' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, WeatherInterpolateDuration) == 0x000BC0, "Member 'ABP_PPSkyCreator_Controller_C::WeatherInterpolateDuration' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, InterpolateDurationAlpha) == 0x000BC8, "Member 'ABP_PPSkyCreator_Controller_C::InterpolateDurationAlpha' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, CurrentChangeInterval) == 0x000BD0, "Member 'ABP_PPSkyCreator_Controller_C::CurrentChangeInterval' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, Timer_WeatherInterpolateDuration) == 0x000BD8, "Member 'ABP_PPSkyCreator_Controller_C::Timer_WeatherInterpolateDuration' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, Timer_WeatherChangeInterval) == 0x000BE0, "Member 'ABP_PPSkyCreator_Controller_C::Timer_WeatherChangeInterval' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, bEnableRandomWind) == 0x000BE8, "Member 'ABP_PPSkyCreator_Controller_C::bEnableRandomWind' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, CloudWindSpeedMin) == 0x000BF0, "Member 'ABP_PPSkyCreator_Controller_C::CloudWindSpeedMin' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, CloudWindSpeedMax) == 0x000BF8, "Member 'ABP_PPSkyCreator_Controller_C::CloudWindSpeedMax' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, CurrentWindSettings) == 0x000C00, "Member 'ABP_PPSkyCreator_Controller_C::CurrentWindSettings' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, NextWindSettings) == 0x000C1C, "Member 'ABP_PPSkyCreator_Controller_C::NextWindSettings' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, CurrentWindDirection) == 0x000C38, "Member 'ABP_PPSkyCreator_Controller_C::CurrentWindDirection' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, CurrentWindSpeed) == 0x000C40, "Member 'ABP_PPSkyCreator_Controller_C::CurrentWindSpeed' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, WetnessAccumulateDuration) == 0x000C48, "Member 'ABP_PPSkyCreator_Controller_C::WetnessAccumulateDuration' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, WetnessDryDuration) == 0x000C50, "Member 'ABP_PPSkyCreator_Controller_C::WetnessDryDuration' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, PuddlesAccumulateDuration) == 0x000C58, "Member 'ABP_PPSkyCreator_Controller_C::PuddlesAccumulateDuration' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, PuddlesDryDuration) == 0x000C60, "Member 'ABP_PPSkyCreator_Controller_C::PuddlesDryDuration' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, SnowAccumulateDuration) == 0x000C68, "Member 'ABP_PPSkyCreator_Controller_C::SnowAccumulateDuration' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, SnowMeltDuration) == 0x000C70, "Member 'ABP_PPSkyCreator_Controller_C::SnowMeltDuration' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, WetnessAccumulationTimer) == 0x000C78, "Member 'ABP_PPSkyCreator_Controller_C::WetnessAccumulationTimer' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, WetnessDryTimer) == 0x000C80, "Member 'ABP_PPSkyCreator_Controller_C::WetnessDryTimer' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, PuddlesAccumulationTimer) == 0x000C88, "Member 'ABP_PPSkyCreator_Controller_C::PuddlesAccumulationTimer' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, PuddlesDryTimer) == 0x000C90, "Member 'ABP_PPSkyCreator_Controller_C::PuddlesDryTimer' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, SnowAccumulationTimer) == 0x000C98, "Member 'ABP_PPSkyCreator_Controller_C::SnowAccumulationTimer' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, SnowMeltTimer) == 0x000CA0, "Member 'ABP_PPSkyCreator_Controller_C::SnowMeltTimer' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, CurrentWetnessAmount) == 0x000CA8, "Member 'ABP_PPSkyCreator_Controller_C::CurrentWetnessAmount' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, NextWetnessAmount) == 0x000CB0, "Member 'ABP_PPSkyCreator_Controller_C::NextWetnessAmount' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, CurrentPuddlesAmount) == 0x000CB8, "Member 'ABP_PPSkyCreator_Controller_C::CurrentPuddlesAmount' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, NextPuddlesAmount) == 0x000CC0, "Member 'ABP_PPSkyCreator_Controller_C::NextPuddlesAmount' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, CurrentSnowAmount) == 0x000CC8, "Member 'ABP_PPSkyCreator_Controller_C::CurrentSnowAmount' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, NextSnowAmount) == 0x000CD0, "Member 'ABP_PPSkyCreator_Controller_C::NextSnowAmount' has a wrong offset!");
static_assert(offsetof(ABP_PPSkyCreator_Controller_C, Lightnings) == 0x000CD8, "Member 'ABP_PPSkyCreator_Controller_C::Lightnings' has a wrong offset!");

}

