/*
 * Copyright (C) 2020 FuzionCore Project
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "GameObjectAI.h"
#include "CreatureAI.h"
#include "GameObject.h"

//GameObjectAI::GameObjectAI(GameObject* g) : go(g) { }
int GameObjectAI::Permissible(const GameObject* go)
{
    if (go->GetAIName() == "GameObjectAI")
        return PERMIT_BASE_SPECIAL;
    return PERMIT_BASE_NO;
}

NullGameObjectAI::NullGameObjectAI(GameObject* g) : GameObjectAI(g) { }

int NullGameObjectAI::Permissible(GameObject const* /*go*/)
{
    return PERMIT_BASE_IDLE;
}
