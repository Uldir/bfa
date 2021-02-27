<<<<<<< HEAD
/*FuzionCore Project
 Developer
=======
/*
  *FuzionCore Project 2020
  *Devs team
>>>>>>> ef19fc45d31eee489cb8175d8e26ec019f6564cc
*/

#ifndef __BATTLEGROUNDBEG_H
#define __BATTLEGROUNDBEG_H

#include "Arena.h"

class BattlegroundBEG : public Arena
{
public:
    BattlegroundBEG();
    ~BattlegroundBEG();

    void StartingEventCloseDoors() override;
    void StartingEventOpenDoors() override;
    bool SetupBattleground() override;

    void HandleAreaTrigger(Player* source, uint32 trigger, bool entered) override;
    void FillInitialWorldStates(WorldPackets::WorldState::InitWorldStates& packet) override;
};

#endif
