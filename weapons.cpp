#include "includes.h"

using namespace std;

string weaponTypeF(materials weaponQuality) {
    map<materials, string> MaterialToStringMap{
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

string weaponChoiceF(weapons weaponChoice) {
    map<weapons, string> WeaponToStringMap{
            {weapons::sword, "Sword"},
            {weapons::axe, "Axe"},
            {weapons::unarmed, "Unarmed"},
    };
    return WeaponToStringMap[weaponChoice];
}