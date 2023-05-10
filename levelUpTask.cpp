#include "includes.h"
using namespace std;

character levelUpTask(character createChar){
    lvlUp lvlBonus;
    cout << "You have gained a level!!" << endl;
    cout << "Character Level: " << createChar.level << endl;
    cout << "Experience: " << createChar.expChar << endl;
    lvlBonus.health = (rand() % 5 + 5);
    lvlBonus.stamina = (rand() % 2 + 3);
    lvlBonus.strength = (rand() % 2 + 3);
    cout << "You have gained: " << endl;
    cout << "Health: " << lvlBonus.health << endl;
    cout << "Stamina: " << lvlBonus.stamina << endl;
    cout << "Strength: " << lvlBonus.strength << endl;
    createChar.health += lvlBonus.health;
    createChar.stamina += lvlBonus.stamina;
    lvlBonus.strength += lvlBonus.strength;
    system("pause");
    printInfo(createChar);
    return createChar;
}

character levelUpCheck(character createChar) {
    
    const int oldLevel = createChar.level;
    createChar.level;
    if (oldLevel > createChar.level++) {
        levelUpTask(createChar);
    }
    return createChar;
}