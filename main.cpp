#include "includes.h"
using namespace std;
weapons weaponChoice = weapons::unarmed;
materials weaponQuality = materials::Basic;
materials helmQuality = materials::No;
materials armorQuality = materials::No;
materials sheildQuality = materials::No;
armor helmVals = armor::noAmor;
armor armorVals = armor::noAmor;
armor sheildVals = armor::noAmor;
string weaponQualityType = weaponTypeF(weaponQuality);
string helmQualityType = helmTypeF(helmQuality);
string armorQualityType = armorTypeF(armorQuality);
string sheildQualityType = sheildTypeF(sheildQuality);
string weaponType = weaponChoiceF(weaponChoice);
short pArray[3] = { 1,2,3 };

int main() {

    TCHAR szOldTitle[MAX_PATH];
    TCHAR szNewTitle[MAX_PATH];

    // Save current console title.
    if (GetConsoleTitle(szOldTitle, MAX_PATH))
    {
        // Build new console title string.
        StringCchPrintf(szNewTitle, MAX_PATH, TEXT("Warrior Rumble v1.0"), szOldTitle);

        // Set console title to new title
        if (!SetConsoleTitle(szNewTitle))
        {
            _tprintf(TEXT("SetConsoleTitle failed (%d)\n"), GetLastError());
        }
    };
    cout << sheildQualityType << endl;
    system("pause");
    string characterName;
    cout << "Welcome to Warrior Rumble! Please enter your Warrior's name." << endl;
    cout << "Enter Name: ";
    cin >> characterName;
    cout << "You have just taken your first steps to becoming a great Warrior. " << characterName << "! Welcome to the Warrior RUMBLE!!" << endl;
    character player = characterCreation(characterName, armorQualityType, helmQualityType, sheildQualityType, weaponQualityType, weaponType, helmQuality);
    
    printInfo(player);

    system("pause");

    pFirstScreen(player);
    return 0;
}

void pFirstScreen(character createChar) {
    int menuOptionChoice;
    cout << "What would you like to do?" << endl;
    cout << "(1) Show Stats (2) Rumble Shop (3) Challenge Menu" << endl;
    cin >> menuOptionChoice;

    
    if ((cin.fail())) {
        cout << pError << endl;
        cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        pFirstScreen(createChar);
    }
    
    bool pExists = std::find(std::begin(pArray), std::end(pArray), menuOptionChoice) != std::end(pArray);
    if (pExists) {
        switch (menuOptionChoice) {
        case 1:
            printInfo(createChar);
            system("pause");
            pFirstScreen(createChar);
            break;
        case 2:
            shopMenu(createChar);
            break;
        case 3:
            challengeMenu(createChar);
            break;
        }
        }else { 
        cout << pError << endl; 
        pFirstScreen(createChar);
    }
    
    };

void printInfo(character createChar) {
    
    weaponQualityType = weaponTypeF(weaponQuality);
    weaponType = weaponChoiceF(weaponChoice);
    helmQualityType = helmTypeF(helmQuality);
    armorQualityType = armorTypeF(armorQuality);
    sheildQualityType = sheildTypeF(sheildQuality);

    cout << "Character Name: " << createChar.name << endl;
    cout << "Character Level: " << createChar.level + (createChar.expChar / 1000) << endl;
    cout << "Experience: " << createChar.expChar << endl;
    cout << "Health Points: " << createChar.health << " / " << createChar.HPTOTAL << endl;
    cout << "Rage: " << createChar.rage << " / " << createChar.RAGETOTAL << endl;
    cout << "Strength: " << createChar.strength << endl;
    cout << "Stamina: " << createChar.stamina << endl;
    cout << "Armor Rating: " << createChar.charArmor.armorTotal << endl;
    cout << "Weapon Type: " << createChar.weaponQ << " " << createChar.weaponT << endl;
    cout << "Helmet Type: " << createChar.armorQHelm << " " << "Helmet" << endl;
    cout << "Body Armor Type: " << createChar.armorQBody << " " << "Body Amor" << endl;
    cout << "Sheild Type: " << createChar.armorQSheild << " " << "Sheild" << endl;
    cout << "Attack Power: " << createChar.weaponAttack << endl;
    cout << "Souls: " << createChar.souls << endl;
}