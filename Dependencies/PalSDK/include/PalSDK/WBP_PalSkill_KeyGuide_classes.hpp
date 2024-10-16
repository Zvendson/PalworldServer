#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "Pal_structs.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_PalSkill_KeyGuide.WBP_PalSkill_KeyGuide_C
// 0x00E8 (0x0360 - 0x0278)
class UWBP_PalSkill_KeyGuide_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_PalSkillEntry_C*                   WBP_PalSkillEntry_1;                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalSkillEntry_C*                   WBP_PalSkillEntry_2;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalSkillEntry_C*                   WBP_PalSkillEntry_3;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalSkillEntry_C*                   WBP_PalSkillEntry_Aim;                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_PalSkillEntry_C*>           SkillEntryArray;                                   // 0x02A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UPalShooterComponent*                   CurrentShooter;                                    // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    ShootMsgID;                                        // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    FlyMsgID;                                          // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TMap<int32, class UPalActiveSkill*>           CurrentSkillMap;                                   // 0x02D8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class APalCharacter*                          As_Pal_Character;                                  // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class APalCharacter>           SoftRideCharacter;                                 // 0x0330(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void Destruct();
	void EndAim();
	void ExecuteUbergraph_WBP_PalSkill_KeyGuide(int32 EntryPoint);
	void GetRideCharacterParameter(class UPalIndividualCharacterParameter** IndividualParameter);
	void Hide();
	void OnGetOff(class AActor* RideActor);
	void OnInitialized();
	void OnRide(class AActor* RideActor);
	void OnUpdateEquipWaza(class UPalIndividualCharacterParameter* IndividualParameter);
	void Setup();
	void StartAim();
	void UpdateSkillInfo();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalSkill_KeyGuide_C">();
	}
	static class UWBP_PalSkill_KeyGuide_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalSkill_KeyGuide_C>();
	}
};
static_assert(alignof(UWBP_PalSkill_KeyGuide_C) == 0x000008, "Wrong alignment on UWBP_PalSkill_KeyGuide_C");
static_assert(sizeof(UWBP_PalSkill_KeyGuide_C) == 0x000360, "Wrong size on UWBP_PalSkill_KeyGuide_C");
static_assert(offsetof(UWBP_PalSkill_KeyGuide_C, UberGraphFrame) == 0x000278, "Member 'UWBP_PalSkill_KeyGuide_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkill_KeyGuide_C, WBP_PalSkillEntry_1) == 0x000280, "Member 'UWBP_PalSkill_KeyGuide_C::WBP_PalSkillEntry_1' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkill_KeyGuide_C, WBP_PalSkillEntry_2) == 0x000288, "Member 'UWBP_PalSkill_KeyGuide_C::WBP_PalSkillEntry_2' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkill_KeyGuide_C, WBP_PalSkillEntry_3) == 0x000290, "Member 'UWBP_PalSkill_KeyGuide_C::WBP_PalSkillEntry_3' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkill_KeyGuide_C, WBP_PalSkillEntry_Aim) == 0x000298, "Member 'UWBP_PalSkill_KeyGuide_C::WBP_PalSkillEntry_Aim' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkill_KeyGuide_C, SkillEntryArray) == 0x0002A0, "Member 'UWBP_PalSkill_KeyGuide_C::SkillEntryArray' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkill_KeyGuide_C, CurrentShooter) == 0x0002B0, "Member 'UWBP_PalSkill_KeyGuide_C::CurrentShooter' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkill_KeyGuide_C, ShootMsgID) == 0x0002B8, "Member 'UWBP_PalSkill_KeyGuide_C::ShootMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkill_KeyGuide_C, FlyMsgID) == 0x0002C8, "Member 'UWBP_PalSkill_KeyGuide_C::FlyMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkill_KeyGuide_C, CurrentSkillMap) == 0x0002D8, "Member 'UWBP_PalSkill_KeyGuide_C::CurrentSkillMap' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkill_KeyGuide_C, As_Pal_Character) == 0x000328, "Member 'UWBP_PalSkill_KeyGuide_C::As_Pal_Character' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkill_KeyGuide_C, SoftRideCharacter) == 0x000330, "Member 'UWBP_PalSkill_KeyGuide_C::SoftRideCharacter' has a wrong offset!");

}

