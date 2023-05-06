#include "includes.h"
#include "character.h"
using namespace std;
int cExpGainTotal = 0;

character characterCreation(string characterName, string weaponQualityType, string weaponType, string helmQualityType, string armorQualityType, string sheildQualityType) {
    character createChar;
    combat combatStats;

    createChar.name = characterName;
    createChar.expChar += createChar.expChar + cExpGainTotal;
    createChar.level = createChar.level + (createChar.expChar / 1000);
    createChar.strength = (rand() % 5 + 5);
    createChar.stamina = (rand() % 5 + 5);
    createChar.HPTOTAL = (2 * createChar.stamina);
    createChar.RAGETOTAL = 100;
    createChar.rage = createChar.RAGETOTAL - combatStats.rageRemaining;
    createChar.health = createChar.HPTOTAL - combatStats.totalHealthDamage;
    createChar.charArmor.helmArmor = (static_cast<int>(helmQuality)) + (static_cast<int>(armorVals));
    createChar.charArmor.bodyArmor = (static_cast<int>(armorQuality)) + (static_cast<int>(armorVals));
    createChar.charArmor.sheildArmor = (static_cast<int>(sheildQuality)) + (static_cast<int>(armorVals));
    createChar.charArmor.armorTotal += createChar.charArmor.bodyArmor + createChar.charArmor.helmArmor + createChar.charArmor.sheildArmor;
    createChar.weaponAttack = (2 * createChar.strength) + (static_cast<int>(weaponQuality));
    createChar.souls = 200;
    return createChar;
}


