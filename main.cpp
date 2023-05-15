#include "includes.h"
using namespace std;
weapons weaponChoice = weapons::unarmed;
materials weaponQuality = materials::Basic;
materials swordQuality = materials::No;
materials axeQuality = materials::No;
materials poleaxeQuality = materials::No;
materials helmQuality = materials::No;
materials armorQuality = materials::No;
materials sheildQuality = materials::No;
armor helmVals = armor::noAmor;
armor armorVals = armor::noAmor;
armor sheildVals = armor::noAmor;
string weaponQualityType = weaponTypeF(weaponQuality);
string swordQualityType = swordWeaponTypeF(swordQuality);
string axeQualityType = swordWeaponTypeF(axeQuality);
string poleaxeQualityType = swordWeaponTypeF(poleaxeQuality);
string helmQualityType = helmTypeF(helmQuality);
string armorQualityType = armorTypeF(armorQuality);
string sheildQualityType = sheildTypeF(sheildQuality);
string weaponType = weaponChoiceF(weaponChoice);
short pArray[3] = { 1,2,3 };
string characterName;
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
    system("pause");
    cout << "Welcome to Warrior Rumble! Please enter your Warrior's name." << endl;
    cout << "Enter Name: ";
    cin >> characterName;
    cout << "You have just taken your first steps to becoming a great Warrior. " << characterName << "! Welcome to the Warrior RUMBLE!!" << endl;
   character player = characterCreation(characterName, swordQualityType, weaponQualityType, swordQuality, weaponType, helmQualityType, armorQualityType, sheildQualityType, helmQuality, weaponChoice);
    printInfo(player);

    system("pause");

    pFirstScreen(player);
    return 0;
}

void pFirstScreen(character& createChar) {
    int menuOptionChoice;
    cout << "|==========================================================|" << endl;
    cout << "|                        Main Menu                         |" << endl;
    cout << "|==========================================================|" << endl;
    cout << "|      1     |         CHARACTER SHEET       |             |" << endl;
    cout << "|      2     |          RUMBLE SHOP          |             |" << endl;
    cout << "|      3     |         CHALLENGE MENU        |             |" << endl;
    cout << "|==========================================================|" << endl;
    cout << "Choose a Menu Option: ";
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
        default:
            cout << pError << endl;
            pFirstScreen(createChar);
            break;
        }
    }
    else
    {
        cout << pError << endl;
        pFirstScreen(createChar);
    }
    
};

void printInfo(character& createChar) {
    
    weaponQualityType = weaponTypeF(weaponQuality);
    weaponType = weaponChoiceF(weaponChoice);
    helmQualityType = helmTypeF(helmQuality);
    armorQualityType = armorTypeF(armorQuality);
    sheildQualityType = sheildTypeF(sheildQuality);

    cout << "|==========================================================|" << endl;
    cout << "|                     CHARACTER SHEET                      |" << endl;
    cout << "|==========================================================|" << endl;
    cout << "|     NAME:       |           " << createChar.name << endl;
    cout << "|     LEVEL:      |           " << createChar.level << endl;
    cout << "|     EXPERIENCE: |           " << createChar.expChar << " / " << createChar.expCharTOTAL << endl;
    cout << "|     HEALTH:     |           " << createChar.health << " / " << createChar.HPTOTAL << endl;
    cout << "|     RAGE:       |           " << createChar.rage << " / " << createChar.RAGETOTAL << endl;
    cout << "|     STRENGTH:   |           " << createChar.strength << endl;
    cout << "|     STAMINA:    |           " << createChar.stamina << endl;
    cout << "|     ARMOR:      |           " << createChar.charArmor.armorTotal << endl;
    cout << "|     ATTACK:     |           " << createChar.weaponAttack << endl;
    cout << "|     SOULS:      |           " << createChar.souls << endl;
    cout << "|     WEAPON:     |           " << createChar.weaponQ << " " << createChar.weaponT << endl;
    cout << "|     HELMET:     |           " << createChar.armorQHelm << " " << "Helmet" << endl;
    cout << "|     BODY ARMOR: |           " << createChar.armorQBody << " " << "Body Amor" << endl;
    cout << "|     SHEILD:     |           " << createChar.armorQSheild << " " << "Sheild" << endl;
    cout << "|==========================================================|" << endl;
    
}