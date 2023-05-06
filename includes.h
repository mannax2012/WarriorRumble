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
void printInfo(character createChar, string weaponQualityType, string weaponType);
character levelUpTask(character createChar, lvlUp lvlBonus, string weaponQualityType, string weaponType);
string weaponTypeF(materials weaponQuality);
string weaponChoiceF(weapons weaponChoice); 
void pFirstScreen(character createChar, string weaponQualityType, string weaponType);
void challengeMenu(character createChar, string weaponQualityType, string weaponType);
void shopMenuWeapons(character createChar, string weaponQualityType, string weaponType);
void shopMenu(character createChar, string weaponQualityType, string weaponType);
void shopMenuArmor(character createChar, string weaponQualityType, string weaponType);
void shopMenuSwords(character createChar, string weaponQualityType, string weaponType);
#endif //WARRIOR_RUMBLE_INCLUDES_H