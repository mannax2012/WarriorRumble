#include "includes.h"
#include "character.h"
using namespace std;
int cExpGainTotal = 0;

character characterCreation(string characterName, string swordQualityType, string weaponQualityType, materials swordQuality, string weaponType, string helmQualityType, string armorQualityType, string sheildQualityType, materials helmQuality, materials axeQuality, string axeQualityType, materials poleaxeQuality, string poleaxeQualityType) {
    character createChar;
    combat combatStats;

    weaponQualityType = weaponTypeF(weaponQuality);
    swordQualityType = swordWeaponTypeF(swordQuality);
    axeQualityType = axeWeaponTypeF(axeQuality);
    poleaxeQualityType = poleaxeWeaponTypeF(poleaxeQuality);
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
    createChar.axeWeaponQ = axeQualityType;
    createChar.poleaxeWeaponQ = poleaxeQualityType;

    createChar.name = characterName;
    createChar.expChar += createChar.expChar + cExpGainTotal;
    createChar.level = createChar.level + (createChar.expChar / 1000);
    createChar.strength = (rand() % 5 + 5);
    createChar.stamina = (rand() % 5 + 5);
    createChar.HPTOTAL = (2 * createChar.stamina);
    createChar.RAGETOTAL = 100;
    createChar.rage = createChar.RAGETOTAL - combatStats.rageRemaining;
    createChar.health = createChar.HPTOTAL - combatStats.totalHealthDamage;
    createChar.charArmor.helmArmor = (static_cast<int>(helmQuality)) + (static_cast<int>(helmVals));
    createChar.charArmor.bodyArmor = (static_cast<int>(armorQuality)) + (static_cast<int>(armorVals));
    createChar.charArmor.sheildArmor = (static_cast<int>(sheildQuality)) + (static_cast<int>(sheildVals));
    createChar.charArmor.armorTotal = createChar.stamina + createChar.charArmor.bodyArmor + createChar.charArmor.helmArmor + createChar.charArmor.sheildArmor;
    createChar.combatStats.swordAttackDamage = (static_cast<int>(swordQuality)) + (static_cast<int>(weaponChoice));
    createChar.combatStats.axeAttackDamage = (static_cast<int>(axeQuality)) + (static_cast<int>(weaponChoice));
    createChar.combatStats.poleaxeAttackDamage = (static_cast<int>(poleaxeQuality)) + (static_cast<int>(weaponChoice));
    createChar.weaponAttack = (2 * createChar.strength) + (static_cast<int>(weaponChoice));
    createChar.souls = 200;
    return createChar;
}


