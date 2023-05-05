#ifndef WARRIOR_RUMBLE_CHARACTER_H
#define WARRIOR_RUMBLE_CHARACTER_H
#include "includes.h"

using namespace std;

typedef struct lvlUp {

    int health = 0,
        rage = 0,
        strength = 0,
        stamina = 0;
} lvlUp;

typedef struct combat {

    int totalHealthDamage = 0,
        rageRemaining = 0;
} combat;

typedef struct character {

    string name;

    int health = 0,
        rage = 0,
        level = 0,
        expChar = 0,
        strength = 0,
        stamina = 0,
        HPTOTAL,
        RAGETOTAL,
        weaponAttack,
        souls = 1;
    lvlUp lvlBonus;
    combat combatStats;
} character;

#endif //WARRIOR_RUMBLE_CHARACTER_H
