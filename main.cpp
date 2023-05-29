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


int main(character& createChar) {

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
    character player = characterCreation(characterName, swordQualityType, weaponQualityType, swordQuality, weaponType, helmQualityType, armorQualityType, sheildQualityType, helmQuality, weaponChoice);
    gameStart(player);
    return 0;
}
void gameStart(character& createChar) {
    system("cls");
    int menuOptionChoice;
    cout << "|==========================================================|" << endl;
    cout << "|               WELCOME TO WARRIOR RUMBLE v1.0             |" << endl;
    cout << "|==========================================================|" << endl;
    cout << "|      1     |       START NEW CHARACTER     |             |" << endl;
    cout << "|      2     |         LOAD CHARACTER        |             |" << endl;
    cout << "|            |                               |             |" << endl;
    cout << "|            |                               |             |" << endl;
    cout << "|            |                               |             |" << endl;
    cout << "|            |                               |             |" << endl;
    cout << "|            |                               |             |" << endl;
    cout << "|      7     |             EXIT              |             |" << endl;
    cout << "|==========================================================|" << endl;
    cout << "Choose a Menu Option: ";
    cin >> menuOptionChoice;


    if ((cin.fail())) {
        cout << pError << endl;
        cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        system("pause");
        gameStart(createChar);
    }

    bool pExists = std::find(std::begin(pArray), std::end(pArray), menuOptionChoice) != std::end(pArray);
    if (pExists) {
        switch (menuOptionChoice) {
        case 1:
            startNewChar(createChar);
            break;
        case 2:
            loadChar(createChar);
            break;
        case 7:
            pExit(createChar);
            break;
        default:
            gameStart(createChar);
            break;
        }
    }
    else
    {
        cout << pError << endl;
        system("pause");
        pFirstScreen(createChar);
    }
}

void startNewChar(character& createChar) {
    system("cls");
    cout << "|==========================================================|" << endl;
    cout << "|               WELCOME TO WARRIOR RUMBLE v1.0             |" << endl;
    cout << "|==========================================================|" << endl;
    cout << "| Enter a Name for your NEW WARRIOR: ";
    cin >> characterName;
    cout << "You have just taken your first steps to becoming a great Warrior. " << characterName << "! Welcome to the Warrior RUMBLE!!" << endl;
    character player = characterCreation(characterName, swordQualityType, weaponQualityType, swordQuality, weaponType, helmQualityType, armorQualityType, sheildQualityType, helmQuality, weaponChoice);
    printInfo(player);
    system("pause");
    pFirstScreen(player);
}
void pFirstScreen(character& createChar) {
    system("cls");
    int menuOptionChoice;
    cout << "|==========================================================|" << endl;
    cout << "|                       RUMBLE MENU                        |" << endl;
    cout << "|==========================================================|" << endl;
    cout << "|      1     |         CHARACTER SHEET       |             |" << endl;
    cout << "|      2     |          RUMBLE SHOP          |             |" << endl;
    cout << "|      3     |         CHALLENGE MENU        |             |" << endl;
    cout << "|            |                               |             |" << endl;
    cout << "|      4     |         LOAD CHARACTER        |             |" << endl;
    cout << "|      5     |           SAVE GAME           |             |" << endl;
    cout << "|      6     |         NEW CHARACTER         |             |" << endl;
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
        case 4:
            loadChar(createChar);
            break;
        case 5:
            saveChar(createChar);
            break;
        case 6:
            startNewChar(createChar);
            break;
        case 7:
            pExit(createChar);
            break;
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
    cout << "Exiting Game!" << endl;
    system("pause");
    exit(0);
    return 0;
}

character saveChar(character& createChar) {
    string saveTitle = createChar.name + ".txt";
    createChar.saveLoad.saveWeaponT = swordQuality;
    ofstream saveCharFile;
    saveCharFile.open(saveTitle);
    saveCharFile << "\t\t\t\t\t\t\t\t" << createChar.name << ", " << createChar.level << ", " << createChar.expChar << ", " << createChar.expCharTOTAL << ", " << weaponQuality << ", " << weaponChoice << ", " << helmQuality << ", " << armorQuality << ", " << sheildQuality << "\n";
    saveCharFile.close();

    saveCharFile.seekp(0, std::ios::end); //to ensure the put pointer is at the end
    saveCharFile << "\t\t\t\t\t\t\t\t" << createChar.name << ", " << createChar.level << ", " << createChar.expChar << ", " << createChar.expCharTOTAL << ", " << weaponQuality << ", " << weaponChoice << ", " << helmQuality << ", " << armorQuality << ", " << sheildQuality;

    std::ofstream SaveCharFile(saveTitle);

    // Always check to see if the file is open and for errors.
    if (SaveCharFile.is_open())
    {

        std::cout << "SAVING... " << createChar.name << " has saved the game." << endl;

        // If it is open we can do our writing to the file.
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
        SaveCharFile << (int)weaponQuality << endl;
        SaveCharFile << (int)weaponChoice << endl;
        SaveCharFile << (int)helmQuality << endl;
        SaveCharFile << (int)armorQuality << endl;
        SaveCharFile << (int)sheildQuality << endl;
    }
    else
    {
        // If the file isn't open something went wrong. Point that out.
        std::cout << "Something went wrong with opening the file!";
        system("pause");
        pFirstScreen(createChar);
    }

    // After you are done with the file always close it.
    SaveCharFile.close();
    system("pause");
    pFirstScreen(createChar);
    return createChar;
}
character loadChar(character& createChar) {

    cout << "Enter the name of the Character File: ";
    cin >> characterName;
    string path = characterName + ".txt";

    std::ifstream fin;

    fin.open(path);
    if (fin.is_open()) {
        fin >> createChar.name;
        fin >> createChar.level;
        fin >> createChar.expChar;
        fin >> createChar.expCharTOTAL;
        fin >> createChar.health;
        fin >> createChar.HPTOTAL;
        fin >> createChar.rage;
        fin >> createChar.strength;
        fin >> createChar.stamina;
        fin >> createChar.charArmor.armorTotal;
        fin >> createChar.weaponAttack;
        fin >> createChar.souls;
        fin >> createChar.saveLoad.saveWeaponQ;
        fin >> createChar.saveLoad.saveWeaponT;
        fin >> createChar.saveLoad.saveHelmQ;
        fin >> createChar.saveLoad.saveArmorQ;
        fin >> createChar.saveLoad.saveShieldQ;

        // fin >> static_cast<int>(weaponChoice);
        // fin >> helmQuality;
        // fin >> armorQuality;
        // fin >> sheildQuality;
        fin.close();
    }
    
    weaponQCheck(createChar);
    weaponTCheck(createChar);
    helmQCheck(createChar);
    armorQCheck(createChar);
    shieldQCheck(createChar);

    createChar.armorQBody = armorQualityType;
    createChar.armorQHelm = helmQualityType;
    createChar.armorQSheild = sheildQualityType;
    createChar.weaponT = weaponType;
    createChar.weaponQ = weaponQualityType;
    createChar.swordWeaponQ = swordQualityType;
    character player = characterCreation(characterName, swordQualityType, weaponQualityType, swordQuality, weaponType, helmQualityType, armorQualityType, sheildQualityType, helmQuality, weaponChoice);
    printInfo(createChar);
    system("pause");
    pFirstScreen(createChar);
    return createChar;
}
void weaponTCheck(character& createChar) {
    switch (createChar.saveLoad.saveWeaponT) {
    case 3:
        weaponChoice = weapons::sword;
        weaponType = weaponChoiceF(weaponChoice);
        break;
    case 4:
        weaponChoice = weapons::axe;
        weaponType = weaponChoiceF(weaponChoice);
        break;
    case 5:
        weaponChoice = weapons::poleaxe;
        weaponType = weaponChoiceF(weaponChoice);
        break;
    default:
        weaponChoice = weapons::unarmed;
        weaponType = weaponChoiceF(weaponChoice);
        break;
    }
};
void weaponQCheck(character& createChar) {
    switch (createChar.saveLoad.saveWeaponQ) {
    case 1:
        weaponQuality = materials::Basic;
        weaponQualityType = weaponTypeF(weaponQuality);
        break;
    case 3:
        weaponQuality = materials::Oak;
        weaponQualityType = weaponTypeF(weaponQuality);
        break;
    case 4:
        weaponQuality = materials::Copper;
        weaponQualityType = weaponTypeF(weaponQuality);
        break;
    case 5:
        weaponQuality = materials::Bronze;
        weaponQualityType = weaponTypeF(weaponQuality);
        break;
    case 6:
        weaponQuality = materials::Iron;
        weaponQualityType = weaponTypeF(weaponQuality);
    case 7:
        weaponQuality = materials::Steel;
        weaponQualityType = weaponTypeF(weaponQuality);
        break;
    case 10:
        weaponQuality = materials::Mithril;
        weaponQualityType = weaponTypeF(weaponQuality);
        break;
    default:
        weaponQuality = materials::No;
        weaponQualityType = weaponTypeF(weaponQuality);
        break;
    }
};
void helmQCheck(character& createChar) {
    switch (createChar.saveLoad.saveHelmQ) {
    case 1:
        helmQuality = materials::Basic;
        helmQualityType = helmTypeF(helmQuality);
        break;
    case 3:
        helmQuality = materials::Oak;
        helmQualityType = helmTypeF(helmQuality);
        break;
    case 4:
        helmQuality = materials::Copper;
        helmQualityType = helmTypeF(helmQuality);
        break;
    case 5:
        helmQuality = materials::Bronze;
        helmQualityType = helmTypeF(helmQuality);
        break;
    case 6:
        helmQuality = materials::Iron;
        helmQualityType = helmTypeF(helmQuality);
        break;
    case 7:
        helmQuality = materials::Steel;
        helmQualityType = helmTypeF(helmQuality);
        break;
    case 10:
        helmQuality = materials::Mithril;
        helmQualityType = helmTypeF(helmQuality);
        break;
    default:
        helmQuality = materials::No;
        helmQualityType = helmTypeF(helmQuality);
        break;
    }

};
void armorQCheck(character& createChar) {
    switch (createChar.saveLoad.saveArmorQ) {
    case 1:
        armorQuality = materials::Basic;
        armorQualityType = armorTypeF(armorQuality);
        break;
    case 3:
        armorQuality = materials::Oak;
        armorQualityType = armorTypeF(armorQuality);
        break;
    case 4:
        armorQuality = materials::Copper;
        armorQualityType = armorTypeF(armorQuality);
        break;
    case 5:
        armorQuality = materials::Bronze;
        armorQualityType = armorTypeF(armorQuality);
        break;
    case 6:
        armorQuality = materials::Iron;
        armorQualityType = armorTypeF(armorQuality);
        break;
    case 7:
        armorQuality = materials::Steel;
        armorQualityType = armorTypeF(armorQuality);
        break;
    case 10:
        armorQuality = materials::Mithril;
        armorQualityType = armorTypeF(armorQuality);
        break;
    default:
        armorQuality = materials::No;
        armorQualityType = armorTypeF(armorQuality);
        break;
    }
};
void shieldQCheck(character& createChar) {
    switch (createChar.saveLoad.saveShieldQ) {
    case 1:
        sheildQuality = materials::Basic;
        sheildQualityType = sheildTypeF(sheildQuality);
        break;
    case 3:
        sheildQuality = materials::Oak;
        sheildQualityType = sheildTypeF(sheildQuality);
        break;
    case 4:
        sheildQuality = materials::Copper;
        sheildQualityType = sheildTypeF(sheildQuality);
        break;
    case 5:
        sheildQuality = materials::Bronze;
        sheildQualityType = sheildTypeF(sheildQuality);
        break;
    case 6:
        sheildQuality = materials::Iron;
        sheildQualityType = sheildTypeF(sheildQuality);
        break;
    case 7:
        sheildQuality = materials::Steel;
        sheildQualityType = sheildTypeF(sheildQuality);
        break;
    case 10:
        sheildQuality = materials::Mithril;
        sheildQualityType = sheildTypeF(sheildQuality);
        break;
    default:
        sheildQuality = materials::No;
        sheildQualityType = sheildTypeF(sheildQuality);
        break;
    }
};