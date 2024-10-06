#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C
// 0x0058 (0x0460 - 0x0408)
class UWBP_PalDamageCanvas_OneShotText_C final : public UPalDamageDisplayCanvas
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Default_In;                                        // 0x0410(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Damage;                                            // 0x0420(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_424[0x4];                                      // 0x0424(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Hit_Location;                                      // 0x0428(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DisplayTime;                                       // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DamageTextDisplayLength;                           // 0x0448(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44C[0x4];                                      // 0x044C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DamageTextScale;                                   // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxDisplayNum;                                     // 0x0458(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddDamageTextEvent(const struct FPalDamageInfo& DamageInfo, class AActor* Defender);
	void AddNewDamageText(const struct FPalDamageInfo& DamageInfo, class AActor* Defender);
	void CalcDamageTextType(const struct FPalDamageInfo& DamageInfo, class AActor* Defender, double DamageRate, int32 WeakCount, EPalDamageTextType* TextType);
	void CalcLengthToPlayer(const struct FVector& HitLocation, double* Length);
	void CalcTargetLocation(const struct FPalDamageInfo& DamageInfo, class AActor* Defender, struct FVector* Location);
	void CreateDamageWidget(class UPalUIDamageTextBase** CreatedWdiget);
	void Destruct();
	void ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText(int32 EntryPoint);
	void IsEquipAttacker(class AActor* Attacker, bool* IsEquip);
	void OnChangedUISettings(const struct FPalOptionUISettings& PrevSettings, const struct FPalOptionUISettings& NewSettings);
	void OnInitialized();
	void OnSetup();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalDamageCanvas_OneShotText_C">();
	}
	static class UWBP_PalDamageCanvas_OneShotText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalDamageCanvas_OneShotText_C>();
	}
};
static_assert(alignof(UWBP_PalDamageCanvas_OneShotText_C) == 0x000008, "Wrong alignment on UWBP_PalDamageCanvas_OneShotText_C");
static_assert(sizeof(UWBP_PalDamageCanvas_OneShotText_C) == 0x000460, "Wrong size on UWBP_PalDamageCanvas_OneShotText_C");
static_assert(offsetof(UWBP_PalDamageCanvas_OneShotText_C, UberGraphFrame) == 0x000408, "Member 'UWBP_PalDamageCanvas_OneShotText_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalDamageCanvas_OneShotText_C, Default_In) == 0x000410, "Member 'UWBP_PalDamageCanvas_OneShotText_C::Default_In' has a wrong offset!");
static_assert(offsetof(UWBP_PalDamageCanvas_OneShotText_C, CanvasPanel_0) == 0x000418, "Member 'UWBP_PalDamageCanvas_OneShotText_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UWBP_PalDamageCanvas_OneShotText_C, Damage) == 0x000420, "Member 'UWBP_PalDamageCanvas_OneShotText_C::Damage' has a wrong offset!");
static_assert(offsetof(UWBP_PalDamageCanvas_OneShotText_C, Hit_Location) == 0x000428, "Member 'UWBP_PalDamageCanvas_OneShotText_C::Hit_Location' has a wrong offset!");
static_assert(offsetof(UWBP_PalDamageCanvas_OneShotText_C, DisplayTime) == 0x000440, "Member 'UWBP_PalDamageCanvas_OneShotText_C::DisplayTime' has a wrong offset!");
static_assert(offsetof(UWBP_PalDamageCanvas_OneShotText_C, DamageTextDisplayLength) == 0x000448, "Member 'UWBP_PalDamageCanvas_OneShotText_C::DamageTextDisplayLength' has a wrong offset!");
static_assert(offsetof(UWBP_PalDamageCanvas_OneShotText_C, DamageTextScale) == 0x000450, "Member 'UWBP_PalDamageCanvas_OneShotText_C::DamageTextScale' has a wrong offset!");
static_assert(offsetof(UWBP_PalDamageCanvas_OneShotText_C, MaxDisplayNum) == 0x000458, "Member 'UWBP_PalDamageCanvas_OneShotText_C::MaxDisplayNum' has a wrong offset!");

}

