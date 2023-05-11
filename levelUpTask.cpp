#include "includes.h"
using namespace std;

character levelUpCheck(character createChar) {
    int getExp1 = 0;
    cout << "Should be Zero: " << createChar.expChar << endl;
    getExp1 = createChar.expChar;
    cout << "Should be Current expCharTOTAL: " << createChar.expCharTOTAL << endl;
    cout << "current expChar: " << createChar.expChar << endl;
    if (createChar.expChar >= createChar.expCharTOTAL) {
        levelUpTask(createChar);
        createChar.expChar = 0;
    }
    return createChar;
}

void levelUpTask(character createChar){

    createChar.level += createChar.lvlBonus.level;
    createChar.lvlBonus.health = (rand() % 5 + 5);
    createChar.lvlBonus.stamina = (rand() % 2 + 3);
    createChar.lvlBonus.strength = (rand() % 2 + 3);
    createChar.health += createChar.lvlBonus.health;
    createChar.stamina += createChar.lvlBonus.stamina;
    createChar.strength += createChar.lvlBonus.strength;
    createChar.HPTOTAL += createChar.lvlBonus.health;
    createChar.lvlBonus.expCharBonus += createChar.level * 1000;
    createChar.expCharTOTAL += createChar.lvlBonus.expCharBonus;
    
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