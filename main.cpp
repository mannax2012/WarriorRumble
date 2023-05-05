#include "includes.h"
using namespace std;
const string pError = "Incorrect entry - Please try again.";
short pArray[7] = { 1,2,3 };
string weaponType;
weapons weaponChoice = weapons::unarmed;
materials weaponQuality = materials::Basic;
string weaponQualityType = weaponTypeF(weaponQuality);

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
    int menuOptionChoice;
    cout << "What would you like to do?" << endl;
    cout << "(1) Show Stats (2) Rumble Shop (3) Challenge Menu" << endl;
    cin >> menuOptionChoice;

    if ((cin.fail())) {
        cout << pError << endl;
        cin.clear();
        cin.ignore(std::numeric_limits<int>::max(), '\n');
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
            rumbleShop(createChar);
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