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

#ifndef VMAPEXPORT_H
#define VMAPEXPORT_H

#include "Define.h"
#include <string>
#include <unordered_map>

enum ModelFlags
{
    MOD_M2 = 1,
    MOD_HAS_BOUND = 1 << 1,
    MOD_PARENT_SPAWN = 1 << 2
};

struct WMODoodadData;

extern const char * szWorkDirWmo;
extern std::unordered_map<std::string, WMODoodadData> WmoDoodads;

uint32 GenerateUniqueObjectId(uint32 clientId, uint16 clientDoodadId);

bool FileExists(const char * file);

bool ExtractSingleWmo(std::string& fname);
bool ExtractSingleModel(std::string& fname);

void ExtractGameobjectModels();

#endif
