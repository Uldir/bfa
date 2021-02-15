/*Black Rok Hold Arena  
FuzionCore Project
*/

#ifndef __BATTLEGROUNDBRH_H
#define __BATTLEGROUNDBRH_H

#include "Arena.h"

class BattlegroundBRH : public Arena
{
public:
    BattlegroundBRH();
    ~BattlegroundBRH();

    void StartingEventCloseDoors() override;
    void StartingEventOpenDoors() override;
    bool SetupBattleground() override;
};

#endif
