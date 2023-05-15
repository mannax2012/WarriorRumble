#include "includes.h"
using namespace std;

character characterCreation(string characterName, string swordQualityType, string weaponQualityType, materials swordQuality, string weaponType, string helmQualityType, string armorQualityType, string sheildQualityType, materials helmQuality, weapons weaponChoice) {
    character createChar;
    combat combatStats;
    int cExpGainMAX = 1000 / createChar.level;
    int cExpGainTotal = 0;

    weaponQualityType = weaponTypeF(weaponQuality);
    swordQualityType = swordWeaponTypeF(swordQuality);
    weaponType = weaponChoiceF(weaponChoice);
    helmQualityType = helmTypeF(helmQuality);
    armorQualityType = armorTypeF(armorQuality);
    sheildQualityType = sheildTypeF(sheildQuality);

    createChar.armorQBody = armorQualityType;
    createChar.armorQHelm = helmQualityType;
    createChar.armorQSheild = sheildQualityType;
    createChar.weaponT = weaponType;
    createChar.weaponQ = weaponQualityType;
    createChar.swordWeaponQ = swordQualityType;

    createChar.name = characterName;
    createChar.expChar += cExpGainTotal;
    createChar.expCharTOTAL += cExpGainMAX;
    createChar.strength = (rand() % 5 + 5);
    createChar.stamina = (rand() % 5 + 5);
    createChar.HPTOTAL = (2 * createChar.stamina);
    createChar.rage = createChar.RAGETOTAL - createChar.combatStats.rageUsed;
    createChar.health = createChar.HPTOTAL - combatStats.totalHealthDamage;
    createChar.charArmor.helmArmor = (static_cast<int>(helmQuality)) + (static_cast<int>(helmVals));
    createChar.charArmor.bodyArmor = (static_cast<int>(armorQuality)) + (static_cast<int>(armorVals));
    createChar.charArmor.sheildArmor = (static_cast<int>(sheildQuality)) + (static_cast<int>(sheildVals));
    createChar.charArmor.armorTotal = createChar.stamina + createChar.charArmor.bodyArmor + createChar.charArmor.helmArmor + createChar.charArmor.sheildArmor;
    createChar.combatStats.swordAttackDamage = (static_cast<int>(swordQuality)) + (static_cast<int>(weaponChoice));
    createChar.combatStats.axeAttackDamage = (static_cast<int>(axeQuality)) + (static_cast<int>(weaponChoice));
    createChar.combatStats.poleaxeAttackDamage = (static_cast<int>(poleaxeQuality)) + (static_cast<int>(weaponChoice));
    createChar.weaponAttack = (2 * createChar.strength) + (static_cast<int>(weaponChoice)) + (createChar.combatStats.swordAttackDamage + createChar.combatStats.axeAttackDamage + createChar.combatStats.poleaxeAttackDamage);
    createChar.souls = 2000;
   
    return createChar;
}
