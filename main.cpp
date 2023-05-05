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

    character player = characterCreation(characterName, weaponQualityType);
    system("pause");
    printInfo(player);
    return 0;
}

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
    system("pause");

}