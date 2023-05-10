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

    int totalHealthDamage = 10,
        rageRemaining = 0,
        rageUsed = 100,
        swordAttackDamage,
        axeAttackDamage,
        poleaxeAttackDamage,
        jabAttackDamage,
        slashAttackDamage;
} combat;
typedef struct armorval {
    int armorTotal = 0,
        helmArmor = 0,
        bodyArmor = 0,
        sheildArmor = 0;
}armorval;
typedef struct character {

    string name,
        weaponQ,
        swordWeaponQ,
        axeWeaponQ,
        poleaxeWeaponQ,
        weaponT,
        armorhelm,
        armorBody,
        armorSheild,
        armorQHelm,
        armorQBody,
        armorQSheild;

    int health = 0,
        rage = 0,
        level = 0,
        expChar = 0,
        strength = 0,
        stamina = 0,
        HPTOTAL,
        RAGETOTAL = 100,
        weaponAttack,
        souls = 0,
        oldLevel;
    lvlUp lvlBonus;
    combat combatStats;
    armorval charArmor;
    materials valsUp;
    weapons pWeapons;
} character;

#endif //WARRIOR_RUMBLE_CHARACTER_H
