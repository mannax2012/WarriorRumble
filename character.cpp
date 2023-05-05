#include "includes.h"
#include "character.h"
using namespace std;
int cExpGainTotal = 0;

character characterCreation(string characterName, string weaponQualityType) {
    character createChar;
    combat combatStats;
    weaponQualityType = weaponTypeF(weaponQuality);
    createChar.name = characterName;
    createChar.expChar += createChar.expChar + cExpGainTotal;
    createChar.level = createChar.level + (createChar.expChar / 1000);
    createChar.strength = (rand() % 5 + 5);
    createChar.stamina = (rand() % 5 + 5);
    createChar.HPTOTAL = (2 * createChar.stamina);
    createChar.RAGETOTAL = 100;
    createChar.health = createChar.HPTOTAL - combatStats.totalHealthDamage;
    createChar.weaponAttack = (2 * createChar.strength) * (static_cast<int>(weaponQuality));
    createChar.souls = (rand() % 5 + 5);
    return createChar;
}


