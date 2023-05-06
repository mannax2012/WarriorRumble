#include "includes.h"
using namespace std;
short pArrayShop[4] = { 1,2,3,4 };
short pArrayShopBuy[7] = { 1,2,3,4,5,6,7 };

void shopMenu(character createChar, string weaponQualityType, string weaponType) {
	int shopMenuChoice;
	cout << "- Purchace Menu -" << endl;
	cout << "(1) Weapons \n(2) Armor \n(3)Main Menu" << endl;
	cin >> shopMenuChoice;

	if ((cin.fail())) {
		cout << pError << endl;
		cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		shopMenu(createChar, weaponQualityType, weaponType);
	}

	bool pExists = std::find(std::begin(pArrayShop), std::end(pArrayShop), shopMenuChoice) != std::end(pArrayShop);
	if (pExists) {
		switch (shopMenuChoice) {
		case 1:
			shopMenuWeapons(createChar, weaponQualityType, weaponType);
			break;
		case 2:
			shopMenuArmor(createChar, weaponQualityType, weaponType);
			break;
		case 3:
			pFirstScreen(createChar, weaponQualityType, weaponType);
			break;
		}
	}
};

void shopMenuWeapons(character createChar, string weaponQualityType, string weaponType){
	int shopMenuChoice;
	cout << "- Weapons Menu -" << endl;
	cout << "(1) Swords" << endl;
	cout << "(2) Axes" << endl;
	cout << "(3) Poleaxes" << endl;
	cout << "(4) Shop Menu" << endl;
	cin >> shopMenuChoice;

	if ((cin.fail())) {
		cout << pError << endl;
		cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		shopMenuWeapons(createChar, weaponQualityType, weaponType);
	}

	bool pExists = std::find(std::begin(pArrayShop), std::end(pArrayShop), shopMenuChoice) != std::end(pArrayShop);
	if (pExists) {
		switch (shopMenuChoice) {
		case 1:
			shopMenuSwords(createChar, weaponQualityType, weaponType);
			break;
		case 2:
			shopMenuAxes(createChar, weaponQualityType, weaponType);
			break;
		case 3:
			shopMenuPoleaxes(createChar, weaponQualityType, weaponType);
			break;
		case 4:
			shopMenu(createChar, weaponQualityType, weaponType);
			break;
		}
	}
};

void shopMenuSwords(character createChar, string weaponQualityType, string weaponType) {
	int shopMenuChoice;
	cout << "- Swords Menu -" << endl;
	cout << "(1) Oak Sword - 1 Soul" << endl;
	cout << "(2) Copper Sword - 5 Souls" << endl;
	cout << "(3) Bronze Sword - 10 Souls" << endl;
	cout << "(4) Iron Sword - 15 Souls" << endl;
	cout << "(5) Steel Sword - 25 Souls" << endl;
	cout << "(6) Mithril Sword - 50 Souls" << endl;
	cout << "(7) Shop Menu" << endl;
	cin >> shopMenuChoice;

	if ((cin.fail())) {
		cout << pError << endl;
		cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		shopMenuSwords(createChar, weaponQualityType, weaponType);
	}

	bool pExists = std::find(std::begin(pArrayShopBuy), std::end(pArrayShopBuy), shopMenuChoice) != std::end(pArrayShopBuy);
	if (pExists) {
		switch (shopMenuChoice) {
		case 1:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuSwords(createChar, weaponQualityType, weaponType);
			}
			else {
				if (weaponQuality == materials::Oak) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuSwords(createChar, weaponQualityType, weaponType);
				}
				else {
					//Oak Sword
					weaponChoice = weapons::sword;
					weaponQuality = materials::Oak;
					weaponQualityType = weaponTypeF(weaponQuality);
					weaponType = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 1;
					cout << "You bought an " << weaponQualityType << " " << weaponType << " for 1 soul. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuSwords(createChar, weaponQualityType, weaponType);
				}
			}
			break;
		case 2:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuSwords(createChar, weaponQualityType, weaponType);
			}
			else {
				if (weaponQuality == materials::Copper) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuSwords(createChar, weaponQualityType, weaponType);
				}
				else {
					//Copper Sword
					weaponChoice = weapons::sword;
					weaponQuality = materials::Copper;
					weaponQualityType = weaponTypeF(weaponQuality);
					weaponType = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 5;
					cout << "You bought an " << weaponQualityType << " " << weaponType << " for 5 souls. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuSwords(createChar, weaponQualityType, weaponType);
				}
			}
			break;
		case 3:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuSwords(createChar, weaponQualityType, weaponType);
			}
			else {
				if (weaponQuality == materials::Bronze) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuSwords(createChar, weaponQualityType, weaponType);
				}
				else {
					//Bronze Sword
					weaponChoice = weapons::sword;
					weaponQuality = materials::Bronze;
					weaponQualityType = weaponTypeF(weaponQuality);
					weaponType = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 10;
					cout << "You bought an " << weaponQualityType << " " << weaponType << " for 10 souls. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuSwords(createChar, weaponQualityType, weaponType);
				}
			}
			break;
		case 4:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuSwords(createChar, weaponQualityType, weaponType);
			}
			else {
				if (weaponQuality == materials::Iron) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuSwords(createChar, weaponQualityType, weaponType);
				}
				else {
					//Iron Sword
					weaponChoice = weapons::sword;
					weaponQuality = materials::Iron;
					weaponQualityType = weaponTypeF(weaponQuality);
					weaponType = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 15;
					cout << "You bought an " << weaponQualityType << " " << weaponType << " for 15 souls. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuSwords(createChar, weaponQualityType, weaponType);
				}
			}
			break;
		case 5:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuSwords(createChar, weaponQualityType, weaponType);
			}
			else {
				if (weaponQuality == materials::Steel) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuSwords(createChar, weaponQualityType, weaponType);
				}
				else {
					//Steel Sword
					weaponChoice = weapons::sword;
					weaponQuality = materials::Steel;
					weaponQualityType = weaponTypeF(weaponQuality);
					weaponType = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 25;
					cout << "You bought an " << weaponQualityType << " " << weaponType << " for 25 souls. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuSwords(createChar, weaponQualityType, weaponType);
				}
			}
			break;
		case 6:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuSwords(createChar, weaponQualityType, weaponType);
			}
			else {
				if (weaponQuality == materials::Mithril) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuSwords(createChar, weaponQualityType, weaponType);
				}
				else {
					//Mithril Sword
					weaponChoice = weapons::sword;
					weaponQuality = materials::Mithril;
					weaponQualityType = weaponTypeF(weaponQuality);
					weaponType = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 50;
					cout << "You bought an " << weaponQualityType << " " << weaponType << " for 50 souls. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuSwords(createChar, weaponQualityType, weaponType);
				}
			}
			break;
		case 7:
			shopMenu(createChar, weaponQualityType, weaponType);
			break;
		}
	}
};

void shopMenuAxes(character createChar, string weaponQualityType, string weaponType) {
	int shopMenuChoice;
	cout << "- Axes Menu -" << endl;
	cout << "(1) Oak Axe - 1 Soul" << endl;
	cout << "(2) Copper Axe - 5 Souls" << endl;
	cout << "(3) Bronze Axe - 10 Souls" << endl;
	cout << "(4) Iron Axe - 15 Souls" << endl;
	cout << "(5) Steel Axe - 25 Souls" << endl;
	cout << "(6) Mithril Axe - 50 Souls" << endl;
	cout << "(7) Shop Menu" << endl;
	cin >> shopMenuChoice;

	if ((cin.fail())) {
		cout << pError << endl;
		cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		shopMenuAxes(createChar, weaponQualityType, weaponType);
	}

	bool pExists = std::find(std::begin(pArrayShopBuy), std::end(pArrayShopBuy), shopMenuChoice) != std::end(pArrayShopBuy);
	if (pExists) {
		switch (shopMenuChoice) {
		case 1:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuAxes(createChar, weaponQualityType, weaponType);
			}
			else {
				if (weaponQuality == materials::Oak) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuAxes(createChar, weaponQualityType, weaponType);
				}
				else {
					//Oak Axe
					weaponChoice = weapons::axe;
					weaponQuality = materials::Oak;
					weaponQualityType = weaponTypeF(weaponQuality);
					weaponType = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 1;
					cout << "You bought an " << weaponQualityType << " " << weaponType << " for 1 soul. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuAxes(createChar, weaponQualityType, weaponType);
				}
			}
			break;
		case 2:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuAxes(createChar, weaponQualityType, weaponType);
			}
			else {
				if (weaponQuality == materials::Copper) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuAxes(createChar, weaponQualityType, weaponType);
				}
				else {
					//Copper Axe
					weaponChoice = weapons::axe;
					weaponQuality = materials::Copper;
					weaponQualityType = weaponTypeF(weaponQuality);
					weaponType = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 5;
					cout << "You bought an " << weaponQualityType << " " << weaponType << " for 5 souls. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuAxes(createChar, weaponQualityType, weaponType);
				}
			}
			break;
		case 3:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuAxes(createChar, weaponQualityType, weaponType);
			}
			else {
				if (weaponQuality == materials::Bronze) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuAxes(createChar, weaponQualityType, weaponType);
				}
				else {
					//Bronze Axe
					weaponChoice = weapons::axe;
					weaponQuality = materials::Bronze;
					weaponQualityType = weaponTypeF(weaponQuality);
					weaponType = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 10;
					cout << "You bought an " << weaponQualityType << " " << weaponType << " for 10 souls. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuAxes(createChar, weaponQualityType, weaponType);
				}
			}
			break;
		case 4:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuAxes(createChar, weaponQualityType, weaponType);
			}
			else {
				if (weaponQuality == materials::Iron) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuAxes(createChar, weaponQualityType, weaponType);
				}
				else {
					//Iron Axe
					weaponChoice = weapons::axe;
					weaponQuality = materials::Iron;
					weaponQualityType = weaponTypeF(weaponQuality);
					weaponType = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 15;
					cout << "You bought an " << weaponQualityType << " " << weaponType << " for 15 souls. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuAxes(createChar, weaponQualityType, weaponType);
				}
			}
			break;
		case 5:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuAxes(createChar, weaponQualityType, weaponType);
			}
			else {
				if (weaponQuality == materials::Steel) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuAxes(createChar, weaponQualityType, weaponType);
				}
				else {
					//Steel Axe
					weaponChoice = weapons::axe;
					weaponQuality = materials::Steel;
					weaponQualityType = weaponTypeF(weaponQuality);
					weaponType = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 25;
					cout << "You bought an " << weaponQualityType << " " << weaponType << " for 25 souls. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuAxes(createChar, weaponQualityType, weaponType);
				}
			}
			break;
		case 6:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuAxes(createChar, weaponQualityType, weaponType);
			}
			else {
				if (weaponQuality == materials::Mithril) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuAxes(createChar, weaponQualityType, weaponType);
				}
				else {
					//Mithril Axe
					weaponChoice = weapons::axe;
					weaponQuality = materials::Mithril;
					weaponQualityType = weaponTypeF(weaponQuality);
					weaponType = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 50;
					cout << "You bought an " << weaponQualityType << " " << weaponType << " for 50 souls. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuAxes(createChar, weaponQualityType, weaponType);
				}
			}
			break;
		case 7:
			shopMenu(createChar, weaponQualityType, weaponType);
			break;
		}
	}
};

void shopMenuPoleaxes(character createChar, string weaponQualityType, string weaponType) {
	int shopMenuChoice;
	cout << "- Poleaxes Menu -" << endl;
	cout << "(1) Oak Poleaxe - 1 Soul" << endl;
	cout << "(2) Copper Poleaxe - 5 Souls" << endl;
	cout << "(3) Bronze Poleaxe - 10 Souls" << endl;
	cout << "(4) Iron Poleaxe - 15 Souls" << endl;
	cout << "(5) Steel Poleaxe - 25 Souls" << endl;
	cout << "(6) Mithril Poleaxe - 50 Souls" << endl;
	cout << "(7) Shop Menu" << endl;
	cin >> shopMenuChoice;

	if ((cin.fail())) {
		cout << pError << endl;
		cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		shopMenuPoleaxes(createChar, weaponQualityType, weaponType);
	}

	bool pExists = std::find(std::begin(pArrayShopBuy), std::end(pArrayShopBuy), shopMenuChoice) != std::end(pArrayShopBuy);
	if (pExists) {
		switch (shopMenuChoice) {
		case 1:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuPoleaxes(createChar, weaponQualityType, weaponType);
			}
			else {
				if (weaponQuality == materials::Oak) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuPoleaxes(createChar, weaponQualityType, weaponType);
				}
				else {
					//Oak Poleaxe
					weaponChoice = weapons::poleaxe;
					weaponQuality = materials::Oak;
					weaponQualityType = weaponTypeF(weaponQuality);
					weaponType = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 1;
					cout << "You bought an " << weaponQualityType << " " << weaponType << " for 1 soul. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuPoleaxes(createChar, weaponQualityType, weaponType);
				}
			}
			break;
		case 2:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuPoleaxes(createChar, weaponQualityType, weaponType);
			}
			else {
				if (weaponQuality == materials::Copper) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuPoleaxes(createChar, weaponQualityType, weaponType);
				}
				else {
					//Copper Poleaxe
					weaponChoice = weapons::poleaxe;
					weaponQuality = materials::Copper;
					weaponQualityType = weaponTypeF(weaponQuality);
					weaponType = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 5;
					cout << "You bought an " << weaponQualityType << " " << weaponType << " for 5 souls. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuPoleaxes(createChar, weaponQualityType, weaponType);
				}
			}
			break;
		case 3:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuPoleaxes(createChar, weaponQualityType, weaponType);
			}
			else {
				if (weaponQuality == materials::Bronze) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuPoleaxes(createChar, weaponQualityType, weaponType);
				}
				else {
					//Bronze Poleaxe
					weaponChoice = weapons::poleaxe;
					weaponQuality = materials::Bronze;
					weaponQualityType = weaponTypeF(weaponQuality);
					weaponType = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 10;
					cout << "You bought an " << weaponQualityType << " " << weaponType << " for 10 souls. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuPoleaxes(createChar, weaponQualityType, weaponType);
				}
			}
			break;
		case 4:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuPoleaxes(createChar, weaponQualityType, weaponType);
			}
			else {
				if (weaponQuality == materials::Iron) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuPoleaxes(createChar, weaponQualityType, weaponType);
				}
				else {
					//Iron Poleaxe
					weaponChoice = weapons::poleaxe;
					weaponQuality = materials::Iron;
					weaponQualityType = weaponTypeF(weaponQuality);
					weaponType = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 15;
					cout << "You bought an " << weaponQualityType << " " << weaponType << " for 15 souls. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuPoleaxes(createChar, weaponQualityType, weaponType);
				}
			}
			break;
		case 5:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuPoleaxes(createChar, weaponQualityType, weaponType);
			}
			else {
				if (weaponQuality == materials::Steel) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuPoleaxes(createChar, weaponQualityType, weaponType);
				}
				else {
					//Steel Poleaxe
					weaponChoice = weapons::poleaxe;
					weaponQuality = materials::Steel;
					weaponQualityType = weaponTypeF(weaponQuality);
					weaponType = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 25;
					cout << "You bought an " << weaponQualityType << " " << weaponType << " for 25 souls. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuPoleaxes(createChar, weaponQualityType, weaponType);
				}
			}
			break;
		case 6:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuPoleaxes(createChar, weaponQualityType, weaponType);
			}
			else {
				if (weaponQuality == materials::Mithril) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuPoleaxes(createChar, weaponQualityType, weaponType);
				}
				else {
					//Mithril Poleaxe
					weaponChoice = weapons::poleaxe;
					weaponQuality = materials::Mithril;
					weaponQualityType = weaponTypeF(weaponQuality);
					weaponType = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 50;
					cout << "You bought an " << weaponQualityType << " " << weaponType << " for 50 souls. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuPoleaxes(createChar, weaponQualityType, weaponType);
				}
			}
			break;
		case 7:
			shopMenu(createChar, weaponQualityType, weaponType);
			break;
		}
	}
};

void shopMenuArmor(character createChar, string weaponQualityType, string weaponType) {
				int shopMenuChoice;
				cout << "- Armor Menu -" << endl;
				cout << "(1) Helmets" << endl;
				cout << "(2) Body Armor" << endl;
				cout << "(3) Sheilds" << endl;
				cout << "(4) Main Menu" << endl;
				cin >> shopMenuChoice;

				if ((cin.fail())) {
					cout << pError << endl;
					cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					shopMenuArmor(createChar, weaponQualityType, weaponType);
				}

				bool pExists = std::find(std::begin(pArrayShop), std::end(pArrayShop), shopMenuChoice) != std::end(pArrayShop);
				if (pExists) {
					switch (shopMenuChoice) {
					case 1:
						//shopMenuHelmets(createChar);
						break;
					case 2:
						//shopMenuBodyArmor(createChar);
						break;
					case 3:
						//shopMenuSheilds(createChar);
						break;
					case 4:
						shopMenu(createChar, weaponQualityType, weaponType);
						break;
					}
				}
	};