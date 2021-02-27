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

#include "Banner.h"
#include "GitRevision.h"
#include "StringFormat.h"

void Trinity::Banner::Show(char const* applicationName, void(*log)(char const* text), void(*logExtraInfo)())
{
log(Trinity::StringFormat("%s (%s)", GitRevision::GetFullVersion(), applicationName).c_str());
log("<Ctrl-C> to stop.\n");
log("  _______                     _                     ________                           ");
log(" |  _____|        _______    |_|                   |  ______|                   _____   ");
log(" | |__   __   __ |_____  |    _   ______   ______  | |          ______   ____  |  ___|   ");
log(" |  __| |  | |  |     / /    | | /  __  \ |  __  | | |         /  __  \ | \__| | |__      ");
log(" | |    |  | |  |    / /     | | | |  | | | |  | | | |         | |  | | | |    |  __|      ");
log(" | |    |  |_|  |   / /____  | | | |__| | | |  | | | |______   | |__| | | |    | |___       ");
log(" |_|    |_______|  |_______| |_| \______/ |_|  |_| |________|  \______/ |_|    |_____|       ");
log("  ______                                 ________________
log(" |  __  |                    _          |_______   ______|          ");
log(" | |  | |                   |_|  _____          | |                  "); 
log(" | |__| |  _____   ______    _  |  ___|  _____  | |                   ");
log(" |  ____| | \___| /  __  \  | | | |___  |  ___| | |                    ");
log(" | |      | |     | |  | |  | | |  ___| | |     | |                     ");
log(" | |      | |     | |__| |  | | | |___  | |___  | |                      ");
log(" |_|      |_|     \______/  | | |_____| |_____| |_|                       ");
log("                         ___| |                                            ");
log("                        |_____|                                             ");
log("                                                                              ");
log("FuzionCore Project ®");

    if (logExtraInfo)
        logExtraInfo();
}
