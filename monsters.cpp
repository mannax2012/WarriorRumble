#include "includes.h"
using namespace std;

character skeletonEasy(character& createChar) {
    createChar.monsters.menuTitle = "|                    CHALLENGE - EASY                      |";
    createChar.monsters.attackList = createChar.combatStats.jabAttack;
    createChar.monsters.creatureName = "Skeleton of Kano";
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

character warriorMedium(character& createChar) {
    createChar.monsters.menuTitle = "|                    CHALLENGE - MEDIUM                    |";
    createChar.monsters.attackList = createChar.combatStats.jabAttack;
    createChar.monsters.creatureName = "Mildew";
    createChar.monsters.creatureLevel = 2 + (rand() % 3 + 3);
    createChar.monsters.creatureStrength = (rand() % 5 + 5) + createChar.monsters.creatureLevel;
    createChar.monsters.creatureStamina = (rand() % 5 + 5) + createChar.monsters.creatureLevel;
    createChar.monsters.creatureHPTOTAL = (2 * createChar.monsters.creatureStamina) + (createChar.monsters.creatureLevel * 10);
    createChar.monsters.creatureHealth = createChar.monsters.creatureHPTOTAL;
    createChar.monsters.creatureWeaponAttack = (2 + createChar.monsters.creatureStrength);
    createChar.monsters.creatureArmorTOTAL = 5 + (rand() % 5 + 5);
    createChar.monsters.creatureTotalDamage = 0;
    return createChar;
}

character warriorHard(character& createChar) {
    createChar.monsters.menuTitle = "|                    CHALLENGE - HARD                      |";
    createChar.monsters.attackList = createChar.combatStats.jabAttack;
    createChar.monsters.creatureName = "Bannon";
    createChar.monsters.creatureLevel = 3 + (rand() % 3 + 3);
    createChar.monsters.creatureStrength = (rand() % 5 + 5) + createChar.monsters.creatureLevel;
    createChar.monsters.creatureStamina = (rand() % 5 + 5) + createChar.monsters.creatureLevel;
    createChar.monsters.creatureHPTOTAL = (2 * createChar.monsters.creatureStamina) + (createChar.monsters.creatureLevel * 10);
    createChar.monsters.creatureHealth = createChar.monsters.creatureHPTOTAL;
    createChar.monsters.creatureWeaponAttack = (2 + createChar.monsters.creatureStrength);
    createChar.monsters.creatureArmorTOTAL = 5 + (rand() % 5 + 5);
    createChar.monsters.creatureTotalDamage = 0;
    return createChar;
}

character warriorExpert(character& createChar) {
    createChar.monsters.menuTitle = "|                   CHALLENGE - EXPERT                     |";
    createChar.monsters.attackList = createChar.combatStats.jabAttack + ", " + createChar.combatStats.slashAttack;
    createChar.monsters.creatureName = "Cigep";
    createChar.monsters.creatureLevel = 4 + (rand() % 5 + 3);
    createChar.monsters.creatureStrength = (rand() % 5 + 5) + createChar.monsters.creatureLevel;
    createChar.monsters.creatureStamina = (rand() % 5 + 5) + createChar.monsters.creatureLevel;
    createChar.monsters.creatureHPTOTAL = (2 * createChar.monsters.creatureStamina) + (createChar.monsters.creatureLevel * 10);
    createChar.monsters.creatureHealth = createChar.monsters.creatureHPTOTAL;
    createChar.monsters.creatureWeaponAttack = (2 + createChar.monsters.creatureStrength);
    createChar.monsters.creatureArmorTOTAL = 5 + (rand() % 5 + 5);
    createChar.monsters.creatureTotalDamage = 0;
    return createChar;
}

character warriorMaster(character& createChar) {
    createChar.monsters.menuTitle = "|                  CHALLENGE - MASTERFUL                   |";
    createChar.monsters.attackList = createChar.combatStats.jabAttack;
    createChar.monsters.creatureName = "Daukon the Drunken Master";
    createChar.monsters.creatureLevel = 5 + (rand() % 5 + 3);
    createChar.monsters.creatureStrength = (rand() % 5 + 5) + createChar.monsters.creatureLevel;
    createChar.monsters.creatureStamina = (rand() % 5 + 5) + createChar.monsters.creatureLevel;
    createChar.monsters.creatureHPTOTAL = (2 * createChar.monsters.creatureStamina) + (createChar.monsters.creatureLevel * 10);
    createChar.monsters.creatureHealth = createChar.monsters.creatureHPTOTAL;
    createChar.monsters.creatureWeaponAttack = (2 + createChar.monsters.creatureStrength);
    createChar.monsters.creatureArmorTOTAL = 5 + (rand() % 5 + 5);
    createChar.monsters.creatureTotalDamage = 0;
    return createChar;
}

character warriorLegendary(character& createChar) {
    createChar.monsters.menuTitle = "|                  CHALLENGE - LEGENDARY                   |";
    createChar.monsters.attackList = createChar.combatStats.jabAttack;
    createChar.monsters.creatureName = "Somatical";
    createChar.monsters.creatureLevel = 6 + (rand() % 5 + 5);
    createChar.monsters.creatureStrength = (rand() % 5 + 5) + createChar.monsters.creatureLevel;
    createChar.monsters.creatureStamina = (rand() % 5 + 5) + createChar.monsters.creatureLevel;
    createChar.monsters.creatureHPTOTAL = (2 * createChar.monsters.creatureStamina) + (createChar.monsters.creatureLevel * 10);
    createChar.monsters.creatureHealth = createChar.monsters.creatureHPTOTAL;
    createChar.monsters.creatureWeaponAttack = (2 + createChar.monsters.creatureStrength);
    createChar.monsters.creatureArmorTOTAL = 5 + (rand() % 5 + 5);
    createChar.monsters.creatureTotalDamage = 0;
    return createChar;
}
