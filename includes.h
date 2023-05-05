#pragma once
#ifndef WARRIOR_RUMBLE_INCLUDES_H
#define WARRIOR_RUMBLE_INCLUDES_H
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <array>
#define NOMINMAX
#include <windows.h>
#undef NOMINMAX
#include <tchar.h>
#include <strsafe.h>
#include <map>
#include <limits>
#include "main.h"
#include "character.h"
#include "weapons.h"

character characterCreation(string characterName, string weaponQualityType);
void printInfo(character createChar);
character levelUpTask(character createChar, lvlUp lvlBonus, string weaponQualityType);
string weaponTypeF(materials weaponQuality);
string weaponChoiceF(weapons weaponChoice); 
void pFirstScreen(character createChar);
void rumbleShop(character createChar);
void challengeMenu(character createChar);
#endif //WARRIOR_RUMBLE_INCLUDES_H