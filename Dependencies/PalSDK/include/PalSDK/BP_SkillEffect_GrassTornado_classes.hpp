#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_GrassTornado.BP_SkillEffect_GrassTornado_C
// 0x0098 (0x0458 - 0x03C0)
class ABP_SkillEffect_GrassTornado_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_GrassTornado_C;      // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        SideOffset;                                        // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DegereeOffset;                                     // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalSkillEffectBase*                    RightTornado;                                      // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APalSkillEffectBase*                    LeftTornado;                                       // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 BulletClass;                                       // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              ForwardVec2D;                                      // 0x03F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              LeftTargetLocation2D;                              // 0x0400(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              LeftNormalizedDirection2D;                         // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DotThreshold;                                      // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RotationDegree;                                    // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Speed;                                             // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              RightTargetLocation2D;                             // 0x0438(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              RightNormalizedDirection2D;                        // 0x0448(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CancelShoot();
	void ExecuteUbergraph_BP_SkillEffect_GrassTornado(int32 EntryPoint);
	void GetDesiredLocation(double DeltaTime, const struct FVector2D& TargetLocation2D, const struct FVector2D& NormalizedDirection2D, struct FVector2D* NewDirection, struct FVector* NewLocation);
	void MoveToTargetLocation(class APalSkillEffectBase*& Tornado, double DeltaTime, const struct FVector2D& TargetLocation2D, const struct FVector2D& NormalizedDirection2D, struct FVector2D* NewDirection);
	void OnInitialize();
	void ReceiveTick(float DeltaSeconds);
	void Shoot(const struct FVector& TargetLocation);
	void ShootBullet(const struct FVector& TargetLocation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_GrassTornado_C">();
	}
	static class ABP_SkillEffect_GrassTornado_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_GrassTornado_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_GrassTornado_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_GrassTornado_C");
static_assert(sizeof(ABP_SkillEffect_GrassTornado_C) == 0x000458, "Wrong size on ABP_SkillEffect_GrassTornado_C");
static_assert(offsetof(ABP_SkillEffect_GrassTornado_C, UberGraphFrame_BP_SkillEffect_GrassTornado_C) == 0x0003C0, "Member 'ABP_SkillEffect_GrassTornado_C::UberGraphFrame_BP_SkillEffect_GrassTornado_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GrassTornado_C, SideOffset) == 0x0003C8, "Member 'ABP_SkillEffect_GrassTornado_C::SideOffset' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GrassTornado_C, DegereeOffset) == 0x0003D0, "Member 'ABP_SkillEffect_GrassTornado_C::DegereeOffset' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GrassTornado_C, RightTornado) == 0x0003D8, "Member 'ABP_SkillEffect_GrassTornado_C::RightTornado' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GrassTornado_C, LeftTornado) == 0x0003E0, "Member 'ABP_SkillEffect_GrassTornado_C::LeftTornado' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GrassTornado_C, BulletClass) == 0x0003E8, "Member 'ABP_SkillEffect_GrassTornado_C::BulletClass' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GrassTornado_C, ForwardVec2D) == 0x0003F0, "Member 'ABP_SkillEffect_GrassTornado_C::ForwardVec2D' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GrassTornado_C, LeftTargetLocation2D) == 0x000400, "Member 'ABP_SkillEffect_GrassTornado_C::LeftTargetLocation2D' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GrassTornado_C, LeftNormalizedDirection2D) == 0x000410, "Member 'ABP_SkillEffect_GrassTornado_C::LeftNormalizedDirection2D' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GrassTornado_C, DotThreshold) == 0x000420, "Member 'ABP_SkillEffect_GrassTornado_C::DotThreshold' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GrassTornado_C, RotationDegree) == 0x000428, "Member 'ABP_SkillEffect_GrassTornado_C::RotationDegree' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GrassTornado_C, Speed) == 0x000430, "Member 'ABP_SkillEffect_GrassTornado_C::Speed' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GrassTornado_C, RightTargetLocation2D) == 0x000438, "Member 'ABP_SkillEffect_GrassTornado_C::RightTargetLocation2D' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GrassTornado_C, RightNormalizedDirection2D) == 0x000448, "Member 'ABP_SkillEffect_GrassTornado_C::RightNormalizedDirection2D' has a wrong offset!");

}

