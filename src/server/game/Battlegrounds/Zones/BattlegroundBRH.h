<<<<<<< HEAD
/*Black Rok Hold Arena  
FuzionCore Project
=======
/*Black Rok Hold Arena 
 *FuzionCore Project
 * FuzionCore Project Server
>>>>>>> ef19fc45d31eee489cb8175d8e26ec019f6564cc
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
