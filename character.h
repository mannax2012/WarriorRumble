#ifndef ADVENTURE_GAME_CHARACTER_H
#define ADVENTURE_GAME_CHARACTER_H
#include "includes.h"

using namespace std;

typedef struct lvlUp {

    int health = 0,
        rage = 0,
        strength = 0,
        stamina = 0;
} lvlUp;

typedef struct combat {
    int totalDamage,
        totalRAGE;
}combat;

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
        totalDamage=0,
            weaponAttack,
            souls = 1;
    lvlUp lvlBonus;
    combat combatStats;
} character;

#endif //ADVENTURE_GAME_CHARACTER_H
