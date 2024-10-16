#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "Pal_structs.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_Ingame_Thermometer.WBP_Ingame_Thermometer_C
// 0x00B8 (0x0330 - 0x0278)
class UWBP_Ingame_Thermometer_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_HotToCold;                                     // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Base;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelBuff;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Flare;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Flare2;                                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Hand;                                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconFire;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconIce;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PointFire_1;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PointFire_2;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PointFire_3;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PointIce_1;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PointIce_2;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PointIce_3;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         ThermomaterAnimeEndTime;                           // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LimitTenperature;                                  // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CachedDisplayTemperature;                          // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFirstSetup;                                      // 0x02FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FD[0x3];                                      // 0x02FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UImage*>                         HeatMaterArray;                                    // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UImage*>                         ColdMaterArray;                                    // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                        TargetTemperatureAnimeTime;                        // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NowTemperatureAnimtTime;                           // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnmEvent_ChangeTemperature(int32 TargetTenperature);
	void Calc_Thermomater_Anime_Target_Time(int32 TargetTenperature, double* TargetTime);
	void Construct();
	void ExecuteUbergraph_WBP_Ingame_Thermometer(int32 EntryPoint);
	void OnInitialized();
	void SetBodyState(EPalBodyTemperatureState NewState);
	void SetRegistRate(int32 HeatRegist, int32 ColdRegist);
	void SetTemperature(int32 NewTenperature);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Ingame_Thermometer_C">();
	}
	static class UWBP_Ingame_Thermometer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Ingame_Thermometer_C>();
	}
};
static_assert(alignof(UWBP_Ingame_Thermometer_C) == 0x000008, "Wrong alignment on UWBP_Ingame_Thermometer_C");
static_assert(sizeof(UWBP_Ingame_Thermometer_C) == 0x000330, "Wrong size on UWBP_Ingame_Thermometer_C");
static_assert(offsetof(UWBP_Ingame_Thermometer_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Ingame_Thermometer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Thermometer_C, Anm_HotToCold) == 0x000280, "Member 'UWBP_Ingame_Thermometer_C::Anm_HotToCold' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Thermometer_C, Base) == 0x000288, "Member 'UWBP_Ingame_Thermometer_C::Base' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Thermometer_C, CanvasPanelBuff) == 0x000290, "Member 'UWBP_Ingame_Thermometer_C::CanvasPanelBuff' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Thermometer_C, Flare) == 0x000298, "Member 'UWBP_Ingame_Thermometer_C::Flare' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Thermometer_C, Flare2) == 0x0002A0, "Member 'UWBP_Ingame_Thermometer_C::Flare2' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Thermometer_C, Hand) == 0x0002A8, "Member 'UWBP_Ingame_Thermometer_C::Hand' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Thermometer_C, IconFire) == 0x0002B0, "Member 'UWBP_Ingame_Thermometer_C::IconFire' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Thermometer_C, IconIce) == 0x0002B8, "Member 'UWBP_Ingame_Thermometer_C::IconIce' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Thermometer_C, PointFire_1) == 0x0002C0, "Member 'UWBP_Ingame_Thermometer_C::PointFire_1' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Thermometer_C, PointFire_2) == 0x0002C8, "Member 'UWBP_Ingame_Thermometer_C::PointFire_2' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Thermometer_C, PointFire_3) == 0x0002D0, "Member 'UWBP_Ingame_Thermometer_C::PointFire_3' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Thermometer_C, PointIce_1) == 0x0002D8, "Member 'UWBP_Ingame_Thermometer_C::PointIce_1' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Thermometer_C, PointIce_2) == 0x0002E0, "Member 'UWBP_Ingame_Thermometer_C::PointIce_2' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Thermometer_C, PointIce_3) == 0x0002E8, "Member 'UWBP_Ingame_Thermometer_C::PointIce_3' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Thermometer_C, ThermomaterAnimeEndTime) == 0x0002F0, "Member 'UWBP_Ingame_Thermometer_C::ThermomaterAnimeEndTime' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Thermometer_C, LimitTenperature) == 0x0002F4, "Member 'UWBP_Ingame_Thermometer_C::LimitTenperature' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Thermometer_C, CachedDisplayTemperature) == 0x0002F8, "Member 'UWBP_Ingame_Thermometer_C::CachedDisplayTemperature' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Thermometer_C, IsFirstSetup) == 0x0002FC, "Member 'UWBP_Ingame_Thermometer_C::IsFirstSetup' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Thermometer_C, HeatMaterArray) == 0x000300, "Member 'UWBP_Ingame_Thermometer_C::HeatMaterArray' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Thermometer_C, ColdMaterArray) == 0x000310, "Member 'UWBP_Ingame_Thermometer_C::ColdMaterArray' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Thermometer_C, TargetTemperatureAnimeTime) == 0x000320, "Member 'UWBP_Ingame_Thermometer_C::TargetTemperatureAnimeTime' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Thermometer_C, NowTemperatureAnimtTime) == 0x000328, "Member 'UWBP_Ingame_Thermometer_C::NowTemperatureAnimtTime' has a wrong offset!");

}

