#include "includes.h"
using namespace std;
short pMenu[7] = { 1,2,3,4,5,6,7 };

void challengeMenu(character& createChar) {
	cout << "@@@@@@@@@@@@@-Challenges are under Construction-@@@@@@@@@@@@@" << endl;
	int menuChoice;
	cout << "|==========================================================|" << endl;
	cout << "|                      CHALLENGE MENU                      |" << endl;
	cout << "|==========================================================|" << endl;
	cout << "|            |         -------------         |    REWARD   |" << endl;
	cout << "|      1     |         EASY - 100 EXP        |   1 SOUL    |" << endl;
	cout << "|      2     |         -------------         |  10 SOULS   |" << endl;
	cout << "|      3     |         -------------         |   5 SOULS   |" << endl;
	cout << "|      4     |         -------------         |  10 SOULS   |" << endl;
	cout << "|      5     |         -------------         |  50 SOULS   |" << endl;
	cout << "|      6     |         -------------         |  25 SOULS   |" << endl;
	cout << "|      7     |           SHOP MENU           |             |" << endl;
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
			challengeMenu(createChar);
			break;
		case 2:
			challengeMenu(createChar);
			break;
		case 3:
			challengeMenu(createChar);
			break;
		case 4:
			pFirstScreen(createChar);
			break;
		case 5:
			pFirstScreen(createChar);
			break;
		case 6:
			pFirstScreen(createChar);	
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
	pFirstScreen(createChar);
};