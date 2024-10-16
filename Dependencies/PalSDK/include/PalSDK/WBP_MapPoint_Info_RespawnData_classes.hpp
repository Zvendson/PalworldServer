#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_MapPoint_Info_RespawnData.WBP_MapPoint_Info_RespawnData_C
// 0x0058 (0x02D0 - 0x0278)
class UWBP_MapPoint_Info_RespawnData_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_Name;                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Map_Mark_0;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Map_Mark_1;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Map_Mark_2;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Map_Mark_3;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Map_Mark_4;                                  // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    MsgId;                                             // 0x02B0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	TArray<class UImage*>                         Stars;                                             // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void Construct();
	void ExecuteUbergraph_WBP_MapPoint_Info_RespawnData(int32 EntryPoint);
	void SetRank(int32 Rank);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MapPoint_Info_RespawnData_C">();
	}
	static class UWBP_MapPoint_Info_RespawnData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MapPoint_Info_RespawnData_C>();
	}
};
static_assert(alignof(UWBP_MapPoint_Info_RespawnData_C) == 0x000008, "Wrong alignment on UWBP_MapPoint_Info_RespawnData_C");
static_assert(sizeof(UWBP_MapPoint_Info_RespawnData_C) == 0x0002D0, "Wrong size on UWBP_MapPoint_Info_RespawnData_C");
static_assert(offsetof(UWBP_MapPoint_Info_RespawnData_C, UberGraphFrame) == 0x000278, "Member 'UWBP_MapPoint_Info_RespawnData_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MapPoint_Info_RespawnData_C, BP_PalTextBlock_Name) == 0x000280, "Member 'UWBP_MapPoint_Info_RespawnData_C::BP_PalTextBlock_Name' has a wrong offset!");
static_assert(offsetof(UWBP_MapPoint_Info_RespawnData_C, Image_Map_Mark_0) == 0x000288, "Member 'UWBP_MapPoint_Info_RespawnData_C::Image_Map_Mark_0' has a wrong offset!");
static_assert(offsetof(UWBP_MapPoint_Info_RespawnData_C, Image_Map_Mark_1) == 0x000290, "Member 'UWBP_MapPoint_Info_RespawnData_C::Image_Map_Mark_1' has a wrong offset!");
static_assert(offsetof(UWBP_MapPoint_Info_RespawnData_C, Image_Map_Mark_2) == 0x000298, "Member 'UWBP_MapPoint_Info_RespawnData_C::Image_Map_Mark_2' has a wrong offset!");
static_assert(offsetof(UWBP_MapPoint_Info_RespawnData_C, Image_Map_Mark_3) == 0x0002A0, "Member 'UWBP_MapPoint_Info_RespawnData_C::Image_Map_Mark_3' has a wrong offset!");
static_assert(offsetof(UWBP_MapPoint_Info_RespawnData_C, Image_Map_Mark_4) == 0x0002A8, "Member 'UWBP_MapPoint_Info_RespawnData_C::Image_Map_Mark_4' has a wrong offset!");
static_assert(offsetof(UWBP_MapPoint_Info_RespawnData_C, MsgId) == 0x0002B0, "Member 'UWBP_MapPoint_Info_RespawnData_C::MsgId' has a wrong offset!");
static_assert(offsetof(UWBP_MapPoint_Info_RespawnData_C, Stars) == 0x0002C0, "Member 'UWBP_MapPoint_Info_RespawnData_C::Stars' has a wrong offset!");

}

