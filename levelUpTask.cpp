#include "includes.h"
using namespace std;

character levelUpCheck(character& createChar) {
    if (createChar.expChar >= createChar.expCharTOTAL) {
        createChar.expChar = 0;
        levelUpTask(createChar);
    }
    return createChar;
}

void levelUpTask(character& createChar){

    createChar.level += createChar.lvlBonus.level;
    createChar.lvlBonus.health = (rand() % 10 + createChar.level);
    createChar.lvlBonus.stamina = (rand() % 3 + 3);
    createChar.lvlBonus.strength = (rand() % 3 + 3);
    createChar.health += createChar.lvlBonus.health + createChar.lvlBonus.stamina;
    createChar.stamina += createChar.lvlBonus.stamina;
    createChar.strength += createChar.lvlBonus.strength;
    createChar.weaponAttack += createChar.strength;
    createChar.HPTOTAL += createChar.lvlBonus.health + createChar.lvlBonus.stamina;
    createChar.lvlBonus.expCharBonus += createChar.level * 1000;
    createChar.expCharTOTAL += createChar.lvlBonus.expCharBonus;
    createChar.charArmor.armorTotal += createChar.lvlBonus.stamina;
    
    cout << "You have gained a level!!" << endl;
    cout << "Character Level: " << createChar.level << endl;
    cout << "Experience: " << createChar.expChar << " / " << createChar.expCharTOTAL << endl;
    cout << "You have gained: " << endl;
    cout << "Health: " << createChar.lvlBonus.health << endl;
    cout << "Stamina: " << createChar.lvlBonus.stamina << endl;
    cout << "Strength: " << createChar.lvlBonus.strength << endl;
    system("pause");
    printInfo(createChar);
}