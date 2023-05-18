#include "includes.h"
using namespace std;

string weaponTypeF(materials weaponQuality) {
    map<materials, string> MaterialToStringMap{
            {materials::No, ""},
            {materials::Basic, "Basic"},
            {materials::Oak, "Oak"},
            {materials::Copper, "Copper"},
            {materials::Bronze, "Bronze"},
            {materials::Iron, "Iron"},
            {materials::Steel, "Steel"},
            {materials::Mithril, "Mithril"},
    };
    return MaterialToStringMap[weaponQuality];
}

string swordWeaponTypeF(materials swordQuality) {
    map<materials, string> MaterialToStringMap{
        {materials::No, ""},
            {materials::Basic, "Basic"},
            {materials::Oak, "Oak"},
            {materials::Copper, "Copper"},
            {materials::Bronze, "Bronze"},
            {materials::Iron, "Iron"},
            {materials::Steel, "Steel"},
            {materials::Mithril, "Mithril"},
    };
    return MaterialToStringMap[swordQuality];
}

string axeWeaponTypeF(materials axeQuality) {
    map<materials, string> MaterialToStringMap{
            {materials::No, ""},
            {materials::Basic, "Basic"},
            {materials::Oak, "Oak"},
            {materials::Copper, "Copper"},
            {materials::Bronze, "Bronze"},
            {materials::Iron, "Iron"},
            {materials::Steel, "Steel"},
            {materials::Mithril, "Mithril"},
    };
    return MaterialToStringMap[axeQuality];
}

string poleaxeWeaponTypeF(materials poleaxeQuality) {
    map<materials, string> MaterialToStringMap{
            {materials::No, ""},
            {materials::Basic, "Basic"},
            {materials::Oak, "Oak"},
            {materials::Copper, "Copper"},
            {materials::Bronze, "Bronze"},
            {materials::Iron, "Iron"},
            {materials::Steel, "Steel"},
            {materials::Mithril, "Mithril"},
    };
    return MaterialToStringMap[poleaxeQuality];
}

string weaponChoiceF(weapons weaponChoice) {
    map<weapons, string> WeaponToStringMap{
            {weapons::sword, "Sword"},
            {weapons::axe, "Axe"},
            {weapons::unarmed, "Unarmed"},
            {weapons::poleaxe, "Poleaxe"}
    };
    return WeaponToStringMap[weaponChoice];
}

character buyWeaponAxe(character& createChar) {
    swordQuality = materials::No;
    poleaxeQuality = materials::No;
    weaponChoice = weapons::axe;
    weaponQuality = axeQuality;
    createChar.weaponT = weaponChoiceF(weaponChoice);
    createChar.weaponQ = weaponTypeF(weaponQuality);
    createChar.combatStats.axeAttackDamage = (static_cast<int>(weaponQuality)) + (static_cast<int>(weaponChoice) - 1);
    createChar.weaponAttack = (2 * createChar.strength) + createChar.combatStats.axeAttackDamage;
    cout << "You bought " << createChar.weaponQ << " " << createChar.weaponT << ". It has " << createChar.combatStats.axeAttackDamage << " Attack Power." << endl;
    cout << "You have " << createChar.souls << " remaining." << endl;
    system("pause");
    return createChar;
};

character buyWeaponSword(character& createChar) {
    weaponChoice = weapons::sword;
    axeQuality = materials::No;
    poleaxeQuality = materials::No;
    weaponQuality = swordQuality;
    createChar.weaponT = weaponChoiceF(weaponChoice);
    createChar.weaponQ = weaponTypeF(weaponQuality);
    createChar.combatStats.swordAttackDamage = (static_cast<int>(swordQuality)) + (static_cast<int>(weaponChoice));
    createChar.weaponAttack = (2 * createChar.strength) + createChar.combatStats.swordAttackDamage;
    cout << "You bought " << createChar.weaponQ << " " << createChar.weaponT << ". It has " << createChar.combatStats.swordAttackDamage << " Attack Power." << endl;
    cout << "You have " << createChar.souls << " remaining." << endl;
    system("pause");
    return createChar;
};

character buyWeaponPoleaxe(character& createChar) {
    weaponChoice = weapons::poleaxe;
    swordQuality = materials::No;
    axeQuality = materials::No;
    weaponQuality = poleaxeQuality;
    createChar.weaponT = weaponChoiceF(weaponChoice);
    createChar.weaponQ = weaponTypeF(weaponQuality);
    createChar.combatStats.poleaxeAttackDamage = (static_cast<int>(weaponQuality)) + (static_cast<int>(weaponChoice));
    createChar.weaponAttack = (2 * createChar.strength) + createChar.combatStats.poleaxeAttackDamage;
    cout << "You bought " << createChar.weaponQ << " " << createChar.weaponT << ". It has " << createChar.combatStats.poleaxeAttackDamage << " Attack Power." << endl;
    cout << "You have " << createChar.souls << " remaining." << endl;
    system("pause");
    return createChar;
};