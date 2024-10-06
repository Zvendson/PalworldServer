#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C
// 0x01B0 (0x05B8 - 0x0408)
class UWBP_IndividualParameterBindWidget_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TSoftObjectPtr<class UPalIndividualCharacterHandle> bindedHandle;                                      // 0x0410(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsBindHP;                                          // 0x0440(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBindSP;                                          // 0x0441(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBindHunger;                                      // 0x0442(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBindFoodAmount;                                  // 0x0443(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBindNickName;                                    // 0x0444(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBindSanity;                                      // 0x0445(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBindExp;                                         // 0x0446(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBindLevel;                                       // 0x0447(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnUpdateHp;                                        // 0x0448(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUpdateSP;                                        // 0x0458(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUpdateHunger;                                    // 0x0468(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUpdateNickName;                                  // 0x0478(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUpdateSanity;                                    // 0x0488(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUpdateExp;                                       // 0x0498(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUpdateLevel;                                     // 0x04A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsBindActiveSkill;                                 // 0x04B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBindPassiveSkill;                                // 0x04B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBindMasteredSkills;                              // 0x04BA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBindElement;                                     // 0x04BB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBindRank;                                        // 0x04BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBindSoul;                                        // 0x04BD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBindWorkSuitability;                             // 0x04BE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBindCondition;                                   // 0x04BF(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBindBuff;                                        // 0x04C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPlayerCharacter;                                 // 0x04C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IgnoreAfterBindInitialize;                         // 0x04C2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C3[0x5];                                      // 0x04C3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnUpdateCondition;                                 // 0x04C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUpdateActiveSkill;                               // 0x04D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsBindGender;                                      // 0x04E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBindRarity;                                      // 0x04E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowLevelPenalty;                                  // 0x04EA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GetLevelPenalty;                                   // 0x04EB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EC[0x4];                                      // 0x04EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EPalWazaID>                            TmpWazaArray;                                      // 0x04F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnUpdateMasteredSkill;                             // 0x0500(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUpdateBuff;                                      // 0x0510(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUpdateSoulRank;                                  // 0x0520(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsBindStatusPoint;                                 // 0x0530(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_531[0x7];                                      // 0x0531(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnUpdateStatusPoint;                               // 0x0538(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FPalInstanceID                         SyncId;                                            // 0x0548(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsBindTalent;                                      // 0x0578(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_579[0x7];                                      // 0x0579(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnUpdateTalent;                                    // 0x0580(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUpdateWorkSuitabilityOption;                     // 0x0590(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsBindFavorite;                                    // 0x05A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A1[0x7];                                      // 0x05A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnUpdateFavorite;                                  // 0x05A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Bind_Event(class UPalIndividualCharacterParameter* TargetParam);
	void BindFromHandle(class UPalIndividualCharacterHandle* TargetHandle);
	void BindFromSlot(class UPalIndividualCharacterSlot* TargetSlot);
	void Destruct();
	void ExecuteUbergraph_WBP_IndividualParameterBindWidget(int32 EntryPoint);
	void GetBindedHandle(class UPalIndividualCharacterHandle** TargetHandle);
	void On_Update_Hunger_Internal(float Current, float Last);
	void On_Update_Level_Internal(int32 AddLevel, int32 NowLevel);
	void On_Update_Trainer_Level_Internal(int32 AddLevel, int32 NowLevel);
	void OnCheckCondition_Internal();
	void OnUpdateActiveSkill__DelegateSignature(TArray<EPalWazaID>& ActiveSkills);
	void OnUpdateBuff__DelegateSignature();
	void OnUpdateBuff_Internal();
	void OnUpdateCondition__DelegateSignature();
	void OnUpdateExp__DelegateSignature(int64 AddExp, int64 OldExp, double NowExpRate);
	void OnUpdateExp_Internal(int64 AddExp, int64 NowExp);
	void OnUpdateFavorite__DelegateSignature();
	void OnUpdateFavorite_Internal();
	void OnUpdateHP__DelegateSignature(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP);
	void OnUpdateHP_Internal(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP);
	void OnUpdateHunger__DelegateSignature(double NowHunger, double NowMaxHunger);
	void OnUpdateLevel__DelegateSignature(int32 NewLevel);
	void OnUpdateMasteredSkill__DelegateSignature(class UPalIndividualCharacterParameter* Individual_Parameter, EPalWazaID WazaID);
	void OnUpdateMasteredWaza_Internal(class UPalIndividualCharacterParameter* IndividualParameter, EPalWazaID WazaID);
	void OnUpdateNickName__DelegateSignature(const class FString& NewNickName);
	void OnUpdateNickName_Internal(const class FString& NewNickName);
	void OnUpdateSanity__DelegateSignature(double NowSanity, double NowMaxSanity);
	void OnUpdateSanity_Internal(float NowSanity, float OldSanity);
	void OnUpdateSoulRank__DelegateSignature();
	void OnUpdateSoulRank_Internal();
	void OnUpdateSP__DelegateSignature(const struct FFixedPoint64& NowSP, const struct FFixedPoint64& NowMaxSP, bool IsOverHeated);
	void OnUpdateSP_Internal(const struct FFixedPoint64& NowSP, const struct FFixedPoint64& NowMaxSP, bool IsOverHeated);
	void OnUpdateStatusPoint__DelegateSignature();
	void OnUpdateStatusPoint_Internal();
	void OnUpdateTalent__DelegateSignature();
	void OnUpdateTalent_Internal();
	void OnUpdateWaza_Internal(EPalWazaID WazaID);
	void OnUpdateWorkSuitabilityOption__DelegateSignature(const struct FPalWorkSuitabilityPreferenceInfo& Info);
	void OnUpdateWorkSuitabilityOption_Internal(const struct FPalWorkSuitabilityPreferenceInfo& NewWorkSuitabilityOption);
	void Set_Work_Suitability(const TMap<EPalWorkSuitability, int32>& WorkSuitabilities);
	void SetElementType(EPalElementType Type1, EPalElementType Type2);
	void SetFoodAmount(int32 FoodAmount);
	void SetGender(EPalGenderType GenderType);
	void SetPassiveSkill(TArray<class FName>& PassiveSkills);
	void SetRank(int32 Rank);
	void SetRarity(bool IsBoss, bool IsRare);
	void SetSoulRank(int32 Rank);
	void SyncBind(const struct FPalInstanceID& InstanceId);
	void Unbind();
	void UnbindEvent();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IndividualParameterBindWidget_C">();
	}
	static class UWBP_IndividualParameterBindWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IndividualParameterBindWidget_C>();
	}
};
static_assert(alignof(UWBP_IndividualParameterBindWidget_C) == 0x000008, "Wrong alignment on UWBP_IndividualParameterBindWidget_C");
static_assert(sizeof(UWBP_IndividualParameterBindWidget_C) == 0x0005B8, "Wrong size on UWBP_IndividualParameterBindWidget_C");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, UberGraphFrame) == 0x000408, "Member 'UWBP_IndividualParameterBindWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, bindedHandle) == 0x000410, "Member 'UWBP_IndividualParameterBindWidget_C::bindedHandle' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, IsBindHP) == 0x000440, "Member 'UWBP_IndividualParameterBindWidget_C::IsBindHP' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, IsBindSP) == 0x000441, "Member 'UWBP_IndividualParameterBindWidget_C::IsBindSP' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, IsBindHunger) == 0x000442, "Member 'UWBP_IndividualParameterBindWidget_C::IsBindHunger' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, IsBindFoodAmount) == 0x000443, "Member 'UWBP_IndividualParameterBindWidget_C::IsBindFoodAmount' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, IsBindNickName) == 0x000444, "Member 'UWBP_IndividualParameterBindWidget_C::IsBindNickName' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, IsBindSanity) == 0x000445, "Member 'UWBP_IndividualParameterBindWidget_C::IsBindSanity' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, IsBindExp) == 0x000446, "Member 'UWBP_IndividualParameterBindWidget_C::IsBindExp' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, IsBindLevel) == 0x000447, "Member 'UWBP_IndividualParameterBindWidget_C::IsBindLevel' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, OnUpdateHp) == 0x000448, "Member 'UWBP_IndividualParameterBindWidget_C::OnUpdateHp' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, OnUpdateSP) == 0x000458, "Member 'UWBP_IndividualParameterBindWidget_C::OnUpdateSP' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, OnUpdateHunger) == 0x000468, "Member 'UWBP_IndividualParameterBindWidget_C::OnUpdateHunger' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, OnUpdateNickName) == 0x000478, "Member 'UWBP_IndividualParameterBindWidget_C::OnUpdateNickName' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, OnUpdateSanity) == 0x000488, "Member 'UWBP_IndividualParameterBindWidget_C::OnUpdateSanity' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, OnUpdateExp) == 0x000498, "Member 'UWBP_IndividualParameterBindWidget_C::OnUpdateExp' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, OnUpdateLevel) == 0x0004A8, "Member 'UWBP_IndividualParameterBindWidget_C::OnUpdateLevel' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, IsBindActiveSkill) == 0x0004B8, "Member 'UWBP_IndividualParameterBindWidget_C::IsBindActiveSkill' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, IsBindPassiveSkill) == 0x0004B9, "Member 'UWBP_IndividualParameterBindWidget_C::IsBindPassiveSkill' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, IsBindMasteredSkills) == 0x0004BA, "Member 'UWBP_IndividualParameterBindWidget_C::IsBindMasteredSkills' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, IsBindElement) == 0x0004BB, "Member 'UWBP_IndividualParameterBindWidget_C::IsBindElement' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, IsBindRank) == 0x0004BC, "Member 'UWBP_IndividualParameterBindWidget_C::IsBindRank' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, IsBindSoul) == 0x0004BD, "Member 'UWBP_IndividualParameterBindWidget_C::IsBindSoul' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, IsBindWorkSuitability) == 0x0004BE, "Member 'UWBP_IndividualParameterBindWidget_C::IsBindWorkSuitability' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, IsBindCondition) == 0x0004BF, "Member 'UWBP_IndividualParameterBindWidget_C::IsBindCondition' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, IsBindBuff) == 0x0004C0, "Member 'UWBP_IndividualParameterBindWidget_C::IsBindBuff' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, IsPlayerCharacter) == 0x0004C1, "Member 'UWBP_IndividualParameterBindWidget_C::IsPlayerCharacter' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, IgnoreAfterBindInitialize) == 0x0004C2, "Member 'UWBP_IndividualParameterBindWidget_C::IgnoreAfterBindInitialize' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, OnUpdateCondition) == 0x0004C8, "Member 'UWBP_IndividualParameterBindWidget_C::OnUpdateCondition' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, OnUpdateActiveSkill) == 0x0004D8, "Member 'UWBP_IndividualParameterBindWidget_C::OnUpdateActiveSkill' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, IsBindGender) == 0x0004E8, "Member 'UWBP_IndividualParameterBindWidget_C::IsBindGender' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, IsBindRarity) == 0x0004E9, "Member 'UWBP_IndividualParameterBindWidget_C::IsBindRarity' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, ShowLevelPenalty) == 0x0004EA, "Member 'UWBP_IndividualParameterBindWidget_C::ShowLevelPenalty' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, GetLevelPenalty) == 0x0004EB, "Member 'UWBP_IndividualParameterBindWidget_C::GetLevelPenalty' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, TmpWazaArray) == 0x0004F0, "Member 'UWBP_IndividualParameterBindWidget_C::TmpWazaArray' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, OnUpdateMasteredSkill) == 0x000500, "Member 'UWBP_IndividualParameterBindWidget_C::OnUpdateMasteredSkill' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, OnUpdateBuff) == 0x000510, "Member 'UWBP_IndividualParameterBindWidget_C::OnUpdateBuff' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, OnUpdateSoulRank) == 0x000520, "Member 'UWBP_IndividualParameterBindWidget_C::OnUpdateSoulRank' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, IsBindStatusPoint) == 0x000530, "Member 'UWBP_IndividualParameterBindWidget_C::IsBindStatusPoint' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, OnUpdateStatusPoint) == 0x000538, "Member 'UWBP_IndividualParameterBindWidget_C::OnUpdateStatusPoint' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, SyncId) == 0x000548, "Member 'UWBP_IndividualParameterBindWidget_C::SyncId' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, IsBindTalent) == 0x000578, "Member 'UWBP_IndividualParameterBindWidget_C::IsBindTalent' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, OnUpdateTalent) == 0x000580, "Member 'UWBP_IndividualParameterBindWidget_C::OnUpdateTalent' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, OnUpdateWorkSuitabilityOption) == 0x000590, "Member 'UWBP_IndividualParameterBindWidget_C::OnUpdateWorkSuitabilityOption' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, IsBindFavorite) == 0x0005A0, "Member 'UWBP_IndividualParameterBindWidget_C::IsBindFavorite' has a wrong offset!");
static_assert(offsetof(UWBP_IndividualParameterBindWidget_C, OnUpdateFavorite) == 0x0005A8, "Member 'UWBP_IndividualParameterBindWidget_C::OnUpdateFavorite' has a wrong offset!");

}

