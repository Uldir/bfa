////////////////////////////////////////////////////////////////////////////////
<<<<<<< HEAD
// 
//  FuzionCore Project
=======
//
//  FuzionCore Project
//  Copyright 2020 FuzionCore Project
>>>>>>> ef19fc45d31eee489cb8175d8e26ec019f6564cc
//  All Rights Reserved.
//
////////////////////////////////////////////////////////////////////////////////

#include "BattlePet.h"
#include "BattlePetDataStore.h"
#include "PetBattleAbilityEffect.h"
#include "PetBattle.h"
#include "ScriptMgr.h"
#include "GameTables.h"

#define MAX_PETBATTLE_EFFECT_TYPES 235

bool PetBattleAbilityEffect::HandleDamageRange()
{
    CalculateHit(EffectInfo->Param[1]);

    int32 baseDamage = urand(EffectInfo->Param[0], EffectInfo->Param[2]);

    return Damage(Target, CalculateDamage(baseDamage));
}

bool PetBattleAbilityEffect::HandleDamageWithBonus()
{
    CalculateHit(EffectInfo->Param[1]);

    uint32 damage = CalculateDamage(EffectInfo->Param[0]);

    if (EffectInfo->Param[3] && GetState(Caster, EffectInfo->Param[3]))
        damage += CalculateDamage(EffectInfo->Param[2]);

    return Damage(Target, damage);
}

bool PetBattleAbilityEffect::HandleDummy()
{
    return false;
}

bool PetBattleAbilityEffect::HandleSetState()
{
    return false;
}

bool PetBattleAbilityEffect::HandleDamage()
{
    return false;
}

bool PetBattleAbilityEffect::HandleWitchingDamage()
{
    return false;
}

bool PetBattleAbilityEffect::HandleStateDamage()
{
    return false;
}

bool PetBattleAbilityEffect::HandleStopChainFailure()
{
    return false;
}

bool PetBattleAbilityEffect::Damage(uint32 target, int32 damage, bool cantBeAvoidBlockedDodged)
{
    return false;
}

int32 PetBattleAbilityEffect::GetState(uint32 target, uint32 state)
{
    return 0;
}

int32 PetBattleAbilityEffect::CalculateDamage(int32 damage)
{
    return 0;
}

int32 PetBattleAbilityEffect::CalculateHit(int32 accuracy)
{
    return 0;
}
