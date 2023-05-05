#include "includes.h"
using namespace std;
string weaponType;
weapons weaponChoice = weapons::unarmed;
materials weaponQuality = materials::Basic;
string weaponQualityType = weaponTypeF(weaponQuality);

int main() {
    string characterName;
    cout << "Welcome to Warrior Rumble! Please enter your Warrior's name." << endl;
    cout << "Enter Name: ";
    cin >> characterName;
    cout << "You have just taken your first steps to becoming a great Warrior. " << characterName << "! Welcome to the Warrior RUMBLE!!" << endl;
    character player = characterCreation(characterName, weaponQualityType);
    
    printInfo(player);

    system("pause");

    pFirstScreen(player);
    return 0;
}
void pFirstScreen(character createChar) {
    short menuOptionChoice;
    cout << "What would you like to do?" << endl;
    cout << "(1) Show Stats (2) Rumble Shop (3) Challenge Menu" << endl;
    cin >> menuOptionChoice;

    switch (menuOptionChoice) {
    case 1:
        printInfo(createChar);
        system("pause");
        pFirstScreen(createChar);
        break;
    case 2:
        rumbleShop(createChar);
        break;
    case 3:
        break;
    };

};
void printInfo(character createChar) {
    
    weaponType = weaponChoiceF(weaponChoice);

    cout << "Character Name: " << createChar.name << endl;
    cout << "Character Level: " << createChar.level + (createChar.expChar / 1000) << endl;
    cout << "Experience: " << createChar.expChar << endl;
    cout << "Health Points: " << createChar.health << " / " << createChar.HPTOTAL << endl;
    cout << "Rage: " << createChar.rage << " / " << createChar.RAGETOTAL << endl;
    cout << "Strength: " << createChar.strength << endl;
    cout << "Stamina: " << createChar.stamina << endl;
    cout << "Weapon Type: " << weaponQualityType << " " << weaponType << endl;
    cout << "Attack Power: " << createChar.weaponAttack << endl;
    cout << "Lives Remaining: " << createChar.souls << endl;
}