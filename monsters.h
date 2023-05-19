#pragma once

typedef struct monsters {

    string creatureName,
        attackList,
        menuTitle;
    int creatureHealth,
        creatureLevel = 1,
        creatureStrength,
        creatureStamina,
        creatureHPTOTAL,
        creatureTotalDamage = 0,
        creatureDamageTaken,
        creatureArmorTOTAL = 5,
        creatureWeaponAttack,
        expReward,
        soulsReward;
}monsters;
