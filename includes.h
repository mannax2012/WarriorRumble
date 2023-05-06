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
#include "armor.h"

character characterCreation(string characterName, string weaponQualityType, string weaponType, string helmQualityType, string armorQualityType, string sheildQualityType);
void printInfo(character createChar, string weaponQualityType, string weaponType, string helmQualityType, string armorQualityType, string sheildQualityType);
character levelUpTask(character createChar, lvlUp lvlBonus, string weaponQualityType, string weaponType);
string weaponTypeF(materials weaponQuality);
string weaponChoiceF(weapons weaponChoice);
string helmTypeF(materials helmQuality);
string armorTypeF(materials armorQuality);
string sheildTypeF(materials helmQuality);
void pFirstScreen(character createChar, string weaponQualityType, string weaponType, string helmQualityType, string armorQualityType, string sheildQualityType);
void challengeMenu(character createChar, string weaponQualityType, string weaponType);
void shopMenuWeapons(character createChar, string weaponQualityType, string weaponType, string helmQualityType, string armorQualityType, string sheildQualityType);
void shopMenu(character createChar, string weaponQualityType, string weaponType, string helmQualityType, string armorQualityType, string sheildQualityType);
void shopMenuArmor(character createChar, string weaponQualityType, string weaponType, string helmQualityType, string armorQualityType, string sheildQualityType);
void shopMenuSwords(character createChar, string weaponQualityType, string weaponType, string helmQualityType, string armorQualityType, string sheildQualityType);
void shopMenuPoleaxes(character createChar, string weaponQualityType, string weaponType, string helmQualityType, string armorQualityType, string sheildQualityType);
void shopMenuAxes(character createChar, string weaponQualityType, string weaponType, string helmQualityType, string armorQualityType, string sheildQualityType);
character shopMenuHelms (character createChar, string weaponQualityType, string weaponType, string helmQualityType, string armorQualityType, string sheildQualityType);
#endif //WARRIOR_RUMBLE_INCLUDES_H