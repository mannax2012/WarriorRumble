#include "includes.h"

using namespace std;

string armorTypeF(materials armorQuality) {
    map<materials, string> MaterialToStringMap{
            {materials::No, "No"},
            {materials::Basic, "Basic"},
            {materials::Oak, "Oak"},
            {materials::Copper, "Copper"},
            {materials::Bronze, "Bronze"},
            {materials::Iron, "Iron"},
            {materials::Steel, "Steel"},
            {materials::Mithril, "Mithril"},
    };
    return MaterialToStringMap[armorQuality];
}

string helmTypeF(materials helmQuality) {
    map<materials, string> MaterialToStringMap{
            {materials::No, "No"},
            {materials::Basic, "Basic"},
            {materials::Oak, "Oak"},
            {materials::Copper, "Copper"},
            {materials::Bronze, "Bronze"},
            {materials::Iron, "Iron"},
            {materials::Steel, "Steel"},
            {materials::Mithril, "Mithril"},
    };
    return MaterialToStringMap[helmQuality];
}

string sheildTypeF(materials sheildQuality) {
    map<materials, string> MaterialToStringMap{
            {materials::No, "No"},
            {materials::Basic, "Basic"},
            {materials::Oak, "Oak"},
            {materials::Copper, "Copper"},
            {materials::Bronze, "Bronze"},
            {materials::Iron, "Iron"},
            {materials::Steel, "Steel"},
            {materials::Mithril, "Mithril"},
    };
    return MaterialToStringMap[sheildQuality];
}

character buyArmorHelm(character& createChar) {
    helmVals = armor::helm;
    createChar.armorQHelm = helmTypeF(helmQuality);
    createChar.charArmor.helmArmor = (static_cast<int>(helmQuality)) + (static_cast<int>(helmVals));
    createChar.charArmor.armorTotal = createChar.charArmor.bodyArmor + createChar.charArmor.helmArmor + createChar.charArmor.sheildArmor;
    cout << "You bought " << createChar.armorQHelm << " " << "Helmet. It has " << createChar.charArmor.helmArmor << " Armor." << endl;
    cout << "You have " << createChar.souls << " remaining." << endl;
    return createChar;
}

character buyArmorBody(character& createChar) {
    armorVals = armor::bodyArmor;
    createChar.armorQBody = armorTypeF(armorQuality);
    createChar.charArmor.bodyArmor = (static_cast<int>(armorQuality)) + (static_cast<int>(armorVals));
    cout << "You bought " << createChar.armorQBody << " " << "Body Armor. It has " << createChar.charArmor.bodyArmor << " Armor." << endl;
    cout << "You have " << createChar.souls << " remaining." << endl;
    createChar.charArmor.armorTotal = createChar.charArmor.bodyArmor + createChar.charArmor.helmArmor + createChar.charArmor.sheildArmor;
    return createChar;
}

character buyArmorSheild(character& createChar) {
    sheildVals = armor::sheild;
    createChar.armorQSheild = sheildTypeF(sheildQuality);
    createChar.charArmor.sheildArmor = (static_cast<int>(sheildQuality)) + (static_cast<int>(sheildVals));
    cout << "You bought " << createChar.armorQSheild << " " << "Sheild. It has " << createChar.charArmor.sheildArmor << " Armor." << endl;
    cout << "You have " << createChar.souls << " remaining." << endl;
    createChar.charArmor.armorTotal = createChar.charArmor.bodyArmor + createChar.charArmor.sheildArmor + createChar.charArmor.sheildArmor;
    return createChar;
}