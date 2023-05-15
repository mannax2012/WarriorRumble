#include "includes.h"
using namespace std;

character skeletonEasy(character& createChar) {
    createChar.monsters.creatureName = "Skeleton";
    createChar.monsters.creatureLevel = (rand() % 2 + 3);
    createChar.monsters.creatureStrength = (rand() % 5 + 5) + createChar.monsters.creatureLevel;
    createChar.monsters.creatureStamina = (rand() % 5 + 5) + createChar.monsters.creatureLevel;
    createChar.monsters.creatureHPTOTAL = (2 * createChar.monsters.creatureStamina) + (createChar.monsters.creatureLevel * 10);
    createChar.monsters.creatureHealth = createChar.monsters.creatureHPTOTAL;
    createChar.monsters.creatureWeaponAttack = (2 + createChar.monsters.creatureStrength);
    createChar.monsters.creatureArmorTOTAL = 3 + (rand() % 5 + 5);
    createChar.monsters.creatureTotalDamage = 0;
    return createChar;
}
