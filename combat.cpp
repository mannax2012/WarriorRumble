#include "includes.h"
using namespace std;
short youWin = 0;
character jabAttack(character& createChar) {
    int dontMiss = (rand() % 5 + 5);
    int youMiss = (rand() % 5 + 5);
    createChar.monsters.creatureDamageTaken = createChar.weaponAttack - createChar.monsters.creatureArmorTOTAL;
        if (dontMiss >= youMiss) {
            createChar.monsters.creatureHealth -= createChar.monsters.creatureDamageTaken;
            if (createChar.monsters.creatureHealth <= youWin) {
                createChar.monsters.creatureHealth = 0;
            }
            cout << "You jab at the " << createChar.monsters.creatureName << " You deal " << createChar.monsters.creatureDamageTaken << " total damage." << endl;
            cout << createChar.monsters.creatureName << " - HEALTH: " << createChar.monsters.creatureHealth << " / " << createChar.monsters.creatureHPTOTAL << endl;
        }
        else {
            cout << "You Miss! " << createChar.monsters.creatureName << " laughs at you..." << endl;
        }
        return createChar;
}

void jabPrint(character& createChar) {

}
character deathPrintInfo(character& createChar) {
    if (createChar.monsters.creatureHealth <= youWin) {
        createChar.monsters.creatureHealth = 0;
        createChar.expChar += createChar.monsters.expReward;
        createChar.souls += createChar.monsters.soulsReward;
        cout << "You win. " << createChar.monsters.creatureHealth << endl;
        cout << "You have defeated: " << createChar.monsters.creatureName << " - HEALTH: " << createChar.monsters.creatureHealth << " / " << createChar.monsters.creatureHPTOTAL << endl;
        cout << "You gain: " << createChar.monsters.expReward << " Experience." << endl;
        cout << "You gain: " << createChar.monsters.soulsReward << " souls." << endl;
        cout << "Character Experience: " << createChar.expChar << " / " << createChar.expCharTOTAL << endl;
        cout << "Character Souls: " << createChar.souls << endl;
        levelUpCheck(createChar);
        system("pause");
        pFirstScreen(createChar);
    }
    return createChar;
}

character pDeathPrintInfo(character& createChar) {
    if (createChar.health <= youWin) {
        createChar.health = 0;
        cout << "You DEAD. " << createChar.health << endl;
        cout << "You have been defeated: " << createChar.name << " - HEALTH: " << createChar.health << " / " << createChar.HPTOTAL << endl;
        cout << "Character Experience: " << createChar.expChar << " / " << createChar.expCharTOTAL << endl;
        cout << "Character Souls: " << createChar.souls << endl;
        system("pause");
        cout << createChar.name << " has been taken to the medical tents to recover." << endl;
        createChar.health = 1;
        pFirstScreen(createChar);
    }
    return createChar;
}

character monsterJabAttack(character& createChar) {
    int monsterHit = (rand() % 5 + 5);
    int monsterMiss = (rand() % 5 + 5);
    createChar.combatStats.totalHealthDamage = createChar.monsters.creatureWeaponAttack - createChar.charArmor.armorTotal;
    if (monsterHit >= monsterMiss) {
        createChar.health -= createChar.combatStats.totalHealthDamage;
        if (createChar.health <= youWin) {
            createChar.health = 0;
        }
        cout << createChar.monsters.creatureName << " jabs at " << createChar.name << " dealing  " << createChar.combatStats.totalHealthDamage << " total damage." << endl;
        cout << createChar.name << " - HEALTH: " << createChar.health << " / " << createChar.HPTOTAL << endl;
    }
    else {
        cout << createChar.monsters.creatureName <<  " misses! " << createChar.monsters.creatureName << " growls in frustration..." << endl;
    }
    return createChar;
}