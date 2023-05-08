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

character characterCreation(string characterName, string swordQualityType, string weaponQualityType, materials swordQuality, string weaponType, string helmQualityType, string armorQualityType, string sheildQualityType, materials helmQuality, materials axeQuality, string axeQualityType, materials poleaxeQuality, string poleaxeQualityType);
void printInfo(character createChar);
character levelUpTask(character createChar, lvlUp lvlBonus);
string weaponTypeF(materials weaponQuality);
string swordWeaponTypeF(materials swordQuality);
string poleaxeWeaponTypeF(materials poleaxeWeaponQ);
string axeWeaponTypeF(materials axeWeaponQ);
string weaponChoiceF(weapons weaponChoice);
string helmTypeF(materials helmQuality);
string armorTypeF(materials armorQuality);
string sheildTypeF(materials helmQuality);
void pFirstScreen(character createChar);
void challengeMenu(character createChar);
void shopMenuWeapons(character createChar);
void shopMenu(character createChar);
void shopMenuArmor(character createChar);
character shopMenuSwords(character createChar);
//void shopMenuPoleaxes(character createChar);
character shopMenuAxes(character createChar);
character shopMenuHelms (character createChar);
character shopMenuBodyArmor(character createChar);
character shopMenuSheilds(character createChar);
#endif //WARRIOR_RUMBLE_INCLUDES_H