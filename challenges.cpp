#include "includes.h"
using namespace std;

void challengeMenu(character& createChar) {
	cout << "Challenges are under Construction." << endl;
	system("pause");
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
	//cin >> menuChoice;
	pFirstScreen(createChar);
};