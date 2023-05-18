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
short pArray[7] = { 1,2,3,4,5,6,7 };
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
    system("cls");
    int menuOptionChoice;
    cout << "|==========================================================|" << endl;
    cout << "|                        Main Menu                         |" << endl;
    cout << "|==========================================================|" << endl;
    cout << "|      1     |         CHARACTER SHEET       |             |" << endl;
    cout << "|      2     |          RUMBLE SHOP          |             |" << endl;
    cout << "|      3     |         CHALLENGE MENU        |             |" << endl;
    cout << "|            |                               |             |" << endl;
    cout << "|            |                               |             |" << endl;
    cout << "|      5     |             SAVE              |             |" << endl;
    cout << "|            |                               |             |" << endl;
    cout << "|      7     |             EXIT              |             |" << endl;
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
        case 5:
            saveChar(createChar);
        case 7:
            pExit(createChar);
        default:
            pFirstScreen(createChar);
            break;
        }
    }
    else
    {
        cout << pError << endl;
        system("pause");
        pFirstScreen(createChar);
    }
    
};

void printInfo(character& createChar) {
    
    weaponQualityType = weaponTypeF(weaponQuality);
    weaponType = weaponChoiceF(weaponChoice);
    helmQualityType = helmTypeF(helmQuality);
    armorQualityType = armorTypeF(armorQuality);
    sheildQualityType = sheildTypeF(sheildQuality);
    system("cls");
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

int pExit(character& createChar) {
    system("pause");
    cout << "Exiting Game!" << endl;
    exit(0);
    return 0;
}

character saveChar(character& createChar) {
    string saveTitle = createChar.name + ".txt";
    ofstream saveCharFile;
    saveCharFile.open(saveTitle);
    saveCharFile << "\t\t\t" << createChar.name << ", " << createChar.level << "\n";
    saveCharFile.close();

    saveCharFile.seekp(0, std::ios::end); //to ensure the put pointer is at the end
    saveCharFile << "\t\t\t" << createChar.name << ", " << createChar.level;

    std::ofstream SaveCharFile(saveTitle);

    // Always check to see if the file is open and for errors.
    if (SaveCharFile.is_open())
    {
        std::cout << "SAVING... " << createChar.name << ".txt has been created." << endl;
        // If it is open we can do our writing to the file.
        // Here is a example of this.
        SaveCharFile << createChar.name << endl;
        SaveCharFile << createChar.level << endl;
        SaveCharFile << createChar.expChar << endl;
        SaveCharFile << createChar.expCharTOTAL << endl;
        SaveCharFile << createChar.health << endl;
        SaveCharFile << createChar.HPTOTAL << endl;
        SaveCharFile << createChar.rage << endl;
        SaveCharFile << createChar.strength << endl;
        SaveCharFile << createChar.stamina << endl;
        SaveCharFile << createChar.charArmor.armorTotal << endl;
        SaveCharFile << createChar.weaponAttack << endl;
        SaveCharFile << createChar.souls << endl;
        SaveCharFile << createChar.weaponQ << endl;
        SaveCharFile << createChar.armorQHelm << endl;
        SaveCharFile << createChar.armorQBody << endl;
        SaveCharFile << createChar.armorQSheild << endl;
    }
    else
    {
        // If the file isn't open something went wrong. Point that out.
        std::cout << "Something went wrong with opening the file!";
    }

    // After you are done with the file always close it.
    SaveCharFile.close();
    system("pause");
    pFirstScreen(createChar);
    return createChar;
}