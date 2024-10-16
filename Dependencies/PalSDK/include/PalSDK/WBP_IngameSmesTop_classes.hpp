#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_IndividualParameterBindWidget_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_IngameSmesTop.WBP_IngameSmesTop_C
// 0x0078 (0x0630 - 0x05B8)
class UWBP_IngameSmesTop_C final : public UWBP_IndividualParameterBindWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_IngameSmesTop_C;                // 0x05B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Close_Lower;                                   // 0x05C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Open_Lower;                                    // 0x05C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Close_Upper;                                   // 0x05D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Open_Upper;                                    // 0x05D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BPPalTextBlock_Smes_01;                            // 0x05E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_Lower;                                      // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Upper;                                 // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           PlayerLVUP;                                        // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LvNum_C*                           WBP_LvNum;                                         // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        LevelUpDisplayTime;                                // 0x0608(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        OpenDelayTime;                                     // 0x0610(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    TechnologyTextHandle;                              // 0x0618(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          IsLevelUpAnimePlaying;                             // 0x0628(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOpened;                                          // 0x0629(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnmEvent_Levelup();
	void AnmEvent_UpdateTechnologyPoint();
	void ExecuteUbergraph_WBP_IngameSmesTop(int32 EntryPoint);
	void Finished_1CC36CF5434F95CC47067C9022BCAAAA();
	void Finished_5BC595C649AA650883AA559F46C6DEC4();
	void Finished_619BCE1746569C3505CAB3B66FD0832F();
	void Finished_A1B7BD03455E913C4335A7BF7BD61956();
	void OnInitialized();
	void OnPlayerLevelUp(int32 DisplayLevel);
	void OnUpdateTechnologyPoint(int32 TechnologyPoint);
	void PlayUnlockedMap(class FName RegionId);
	void Setup();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngameSmesTop_C">();
	}
	static class UWBP_IngameSmesTop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngameSmesTop_C>();
	}
};
static_assert(alignof(UWBP_IngameSmesTop_C) == 0x000008, "Wrong alignment on UWBP_IngameSmesTop_C");
static_assert(sizeof(UWBP_IngameSmesTop_C) == 0x000630, "Wrong size on UWBP_IngameSmesTop_C");
static_assert(offsetof(UWBP_IngameSmesTop_C, UberGraphFrame_WBP_IngameSmesTop_C) == 0x0005B8, "Member 'UWBP_IngameSmesTop_C::UberGraphFrame_WBP_IngameSmesTop_C' has a wrong offset!");
static_assert(offsetof(UWBP_IngameSmesTop_C, Anm_Close_Lower) == 0x0005C0, "Member 'UWBP_IngameSmesTop_C::Anm_Close_Lower' has a wrong offset!");
static_assert(offsetof(UWBP_IngameSmesTop_C, Anm_Open_Lower) == 0x0005C8, "Member 'UWBP_IngameSmesTop_C::Anm_Open_Lower' has a wrong offset!");
static_assert(offsetof(UWBP_IngameSmesTop_C, Anm_Close_Upper) == 0x0005D0, "Member 'UWBP_IngameSmesTop_C::Anm_Close_Upper' has a wrong offset!");
static_assert(offsetof(UWBP_IngameSmesTop_C, Anm_Open_Upper) == 0x0005D8, "Member 'UWBP_IngameSmesTop_C::Anm_Open_Upper' has a wrong offset!");
static_assert(offsetof(UWBP_IngameSmesTop_C, BPPalTextBlock_Smes_01) == 0x0005E0, "Member 'UWBP_IngameSmesTop_C::BPPalTextBlock_Smes_01' has a wrong offset!");
static_assert(offsetof(UWBP_IngameSmesTop_C, Canvas_Lower) == 0x0005E8, "Member 'UWBP_IngameSmesTop_C::Canvas_Lower' has a wrong offset!");
static_assert(offsetof(UWBP_IngameSmesTop_C, CanvasPanel_Upper) == 0x0005F0, "Member 'UWBP_IngameSmesTop_C::CanvasPanel_Upper' has a wrong offset!");
static_assert(offsetof(UWBP_IngameSmesTop_C, PlayerLVUP) == 0x0005F8, "Member 'UWBP_IngameSmesTop_C::PlayerLVUP' has a wrong offset!");
static_assert(offsetof(UWBP_IngameSmesTop_C, WBP_LvNum) == 0x000600, "Member 'UWBP_IngameSmesTop_C::WBP_LvNum' has a wrong offset!");
static_assert(offsetof(UWBP_IngameSmesTop_C, LevelUpDisplayTime) == 0x000608, "Member 'UWBP_IngameSmesTop_C::LevelUpDisplayTime' has a wrong offset!");
static_assert(offsetof(UWBP_IngameSmesTop_C, OpenDelayTime) == 0x000610, "Member 'UWBP_IngameSmesTop_C::OpenDelayTime' has a wrong offset!");
static_assert(offsetof(UWBP_IngameSmesTop_C, TechnologyTextHandle) == 0x000618, "Member 'UWBP_IngameSmesTop_C::TechnologyTextHandle' has a wrong offset!");
static_assert(offsetof(UWBP_IngameSmesTop_C, IsLevelUpAnimePlaying) == 0x000628, "Member 'UWBP_IngameSmesTop_C::IsLevelUpAnimePlaying' has a wrong offset!");
static_assert(offsetof(UWBP_IngameSmesTop_C, IsOpened) == 0x000629, "Member 'UWBP_IngameSmesTop_C::IsOpened' has a wrong offset!");

}

