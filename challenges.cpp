#include "includes.h"
using namespace std;
short pMenu[7] = { 1,2,3,4,5,6,7 };

void challengeMenu(character& createChar) {
	system("cls");
	int menuChoice;
	cout << "|==========================================================|" << endl;
	cout << "|                      CHALLENGE MENU                      |" << endl;
	cout << "|==========================================================|" << endl;
	cout << "|            |         -------------         |    REWARD   |" << endl;
	cout << "|      1     |          EASY - 100 EXP       |   1 SOUL    |" << endl;
	cout << "|      2     |        MEDIUM - 250 EXP       |  10 SOULS   |" << endl;
	cout << "|      3     |          HARD - 500 EXP       |  25 SOULS   |" << endl;
	cout << "|      4     |        EXPERT - 1000 EXP      |  50 SOULS   |" << endl;
	cout << "|      5     |     MASTERFUL - 2500 EXP      |  100 SOULS  |" << endl;
	cout << "|      6     |     LEGENDARY - 5000 EXP      |  250 SOULS  |" << endl;
	cout << "|      7     |           MAIN MENU           |             |" << endl;
	cout << "|==========================================================|" << endl;
	cout << "Choose a difficulty level: ";
	cin >> menuChoice;

	if ((cin.fail())) {
		cout << pError << endl;
		cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		challengeMenu(createChar);
	}

	bool pExists = std::find(std::begin(pMenu), std::end(pMenu), menuChoice) != std::end(pMenu);
	if (pExists) {
		switch (menuChoice) {
		case 1:
			skeletonEasy(createChar);
			challengeMenuFIGHT(createChar);
			break;
		case 2:
			warriorMedium(createChar);
			challengeMenuFIGHT(createChar);
			break;
		case 3:
			warriorHard(createChar);
			challengeMenuFIGHT(createChar);
			break;
		case 4:
			warriorExpert(createChar);
			challengeMenuFIGHT(createChar);
			break;
		case 5:
			warriorMaster(createChar);
			challengeMenuFIGHT(createChar);
			break;
		case 6:
			warriorLegendary(createChar);
			challengeMenuFIGHT(createChar);
			break;
		case 7:
			pFirstScreen(createChar);
			break;
		default:
			cout << pError << endl;
			challengeMenu(createChar);
			break;
		}
	}
	else
	{
		cout << pError << endl;
		challengeMenu(createChar);
	}
};

character challengeMenuFIGHT(character& createChar) {
	system("cls");
	deathPrintInfo(createChar);
	pDeathPrintInfo(createChar);
	int menuChoice;
	cout << "|==========================================================|" << endl;
	cout << createChar.monsters.menuTitle << endl;
	cout << "|==========================================================|" << endl;
	cout << "| Challenger: " << createChar.monsters.creatureName << endl;
	cout << "| Level: " << createChar.monsters.creatureLevel << endl;
	cout << "| Health: " << createChar.monsters.creatureHealth << " / " << createChar.monsters.creatureHPTOTAL << endl;
	cout << "| Strength: " << createChar.monsters.creatureStrength << endl;
	cout << "| Stamina: " << createChar.monsters.creatureStamina << endl;
	cout << "| Armor: " << createChar.monsters.creatureArmorTOTAL << endl;
	cout << "| Attack Damage: " << createChar.monsters.creatureWeaponAttack << endl;
	cout << "| Weapon Attacks: " << createChar.monsters.attackList << endl;
	cout << "|==========================================================|" << endl;
	cout << "|  (1) Jab Attack (2) Slash Attack (3) Block (4)Surrender  |" << endl;
	cout << "|==========================================================|" << endl;
	cout << "Choose: ";
	cin >> menuChoice;

	if ((cin.fail())) {
		cout << pError << endl;
		cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		system("pause");
		challengeMenuFIGHT(createChar);
	}

	bool pExists = std::find(std::begin(pMenu), std::end(pMenu), menuChoice) != std::end(pMenu);
	if (pExists) {
		switch (menuChoice) {
		case 1:
			jabAttack(createChar);
			monsterJabAttack(createChar);
			system("pause");
			challengeMenuFIGHT(createChar);
			break;
		case 2:
			challengeMenuFIGHT(createChar);
			break;
		case 3:
			challengeMenuFIGHT(createChar);
			break;
		case 4:
			pFirstScreen(createChar);
			break;
		default:
			cout << pError << endl;
			system("pause");
			challengeMenuFIGHT(createChar);
			break;
		}
	}
	else
	{
		cout << pError << endl;
		system("pause");
		challengeMenuFIGHT(createChar);
	}
	return createChar;

}