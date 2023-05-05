#include "includes.h"
using namespace std;
int cExpGainTotal = 0;

character characterCreation(string characterName, string weaponQualityType) {
   
    character createChar;
      
    weaponQualityType = weaponTypeF(weaponQuality);
    createChar.name = characterName;
    createChar.expChar += createChar.expChar + cExpGainTotal;
    createChar.level = createChar.level + (createChar.expChar / 1000);
    createChar.strength = (rand() % 5 + 5) + charClass.bonusStr;
    createChar.stamina = (rand() % 5 + 5);
    createChar.health = (2 * createChar.stamina);
    createChar.weaponAttack = ((2 * createChar.strength) + charClass.bonusStr) * (static_cast<int>(weaponQuality));
    createChar.souls = (rand() % 5 + 5);
    return createChar;
}


