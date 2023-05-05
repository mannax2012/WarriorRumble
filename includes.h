#pragma once
#ifndef WARRIOR_RUMBLE_INCLUDES_H
#define WARRIOR_RUMBLE_INCLUDES_H
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <array>
#include <windows.h>
#include <tchar.h>
#include <strsafe.h>
#include <string>
#include <map>
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
#endif //WARRIOR_RUMBLE_INCLUDES_H