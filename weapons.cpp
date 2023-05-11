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