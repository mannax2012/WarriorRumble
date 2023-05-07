#include "includes.h"
using namespace std;
short pArrayShop[4] = { 1,2,3,4 };
short pArrayShopBuy[7] = { 1,2,3,4,5,6,7 };

void shopMenu(character createChar) {
	int shopMenuChoice;
	cout << "- Purchace Menu -" << endl;
	cout << "(1) Weapons \n(2) Armor \n(3)Main Menu" << endl;
	cin >> shopMenuChoice;

	if ((cin.fail())) {
		cout << pError << endl;
		cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		shopMenu(createChar);
	}

	bool pExists = std::find(std::begin(pArrayShop), std::end(pArrayShop), shopMenuChoice) != std::end(pArrayShop);
	if (pExists) {
		switch (shopMenuChoice) {
		case 1:
			shopMenuWeapons(createChar);
			break;
		case 2:
			shopMenuArmor(createChar);
			break;
		case 3:
			pFirstScreen(createChar);
			break;
		}
	}
};

void shopMenuWeapons(character createChar) {
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
		shopMenuWeapons(createChar);
	}

	bool pExists = std::find(std::begin(pArrayShop), std::end(pArrayShop), shopMenuChoice) != std::end(pArrayShop);
	if (pExists) {
		switch (shopMenuChoice) {
		case 1:
			shopMenuSwords(createChar);
			break;
		case 2:
			shopMenuAxes(createChar);
			break;
		case 3:
			shopMenuPoleaxes(createChar);
			break;
		case 4:
			shopMenu(createChar);
			break;
		}
	}
};

void shopMenuSwords(character createChar) {
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
		shopMenuSwords(createChar);
	}

	bool pExists = std::find(std::begin(pArrayShopBuy), std::end(pArrayShopBuy), shopMenuChoice) != std::end(pArrayShopBuy);
	if (pExists) {
		switch (shopMenuChoice) {
		case 1:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuSwords(createChar);
			}
			else {
				if (weaponQuality == materials::Oak) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuSwords(createChar);
				}
				else {
					//Oak Sword
					weaponChoice = weapons::sword;
					weaponQuality = materials::Oak;
					createChar.weaponQ = weaponTypeF(weaponQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 1;
					cout << "You bought an " << createChar.weaponQ << " " << createChar.weaponT << " for 1 soul. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuSwords(createChar);
				}
			}
			break;
		case 2:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuSwords(createChar);
			}
			else {
				if (weaponQuality == materials::Copper) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuSwords(createChar);
				}
				else {
					//Copper Sword
					weaponChoice = weapons::sword;
					weaponQuality = materials::Copper;
					createChar.weaponQ = weaponTypeF(weaponQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 5;
					cout << "You bought an " << createChar.weaponQ << " " << createChar.weaponT << " for 5 souls. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuSwords(createChar);
				}
			}
			break;
		case 3:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuSwords(createChar);
			}
			else {
				if (weaponQuality == materials::Bronze) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuSwords(createChar);
				}
				else {
					//Bronze Sword
					weaponChoice = weapons::sword;
					weaponQuality = materials::Bronze;
					createChar.weaponQ = weaponTypeF(weaponQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 10;
					cout << "You bought an " << createChar.weaponQ << " " << createChar.weaponT << " for 10 souls. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuSwords(createChar);
				}
			}
			break;
		case 4:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuSwords(createChar);
			}
			else {
				if (weaponQuality == materials::Iron) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuSwords(createChar);
				}
				else {
					//Iron Sword
					weaponChoice = weapons::sword;
					weaponQuality = materials::Iron;
					createChar.weaponQ = weaponTypeF(weaponQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 15;
					cout << "You bought an " << createChar.weaponQ << " " << createChar.weaponT << " for 15 souls. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuSwords(createChar);
				}
			}
			break;
		case 5:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuSwords(createChar);
			}
			else {
				if (weaponQuality == materials::Steel) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuSwords(createChar);
				}
				else {
					//Steel Sword
					weaponChoice = weapons::sword;
					weaponQuality = materials::Steel;
					createChar.weaponQ = weaponTypeF(weaponQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 25;
					cout << "You bought an " << createChar.weaponQ << " " << createChar.weaponT << " for 25 souls. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuSwords(createChar);
				}
			}
			break;
		case 6:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuSwords(createChar);
			}
			else {
				if (weaponQuality == materials::Mithril) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuSwords(createChar);
				}
				else {
					//Mithril Sword
					weaponChoice = weapons::sword;
					weaponQuality = materials::Mithril;
					createChar.weaponQ = weaponTypeF(weaponQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 50;
					cout << "You bought an " << createChar.weaponQ << " " << createChar.weaponT << " for 50 souls. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuSwords(createChar);
				}
			}
			break;
		case 7:
			shopMenu(createChar);
			break;
		}
	}
};

void shopMenuAxes(character createChar) {
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
		shopMenuAxes(createChar);
	}

	bool pExists = std::find(std::begin(pArrayShopBuy), std::end(pArrayShopBuy), shopMenuChoice) != std::end(pArrayShopBuy);
	if (pExists) {
		switch (shopMenuChoice) {
		case 1:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuAxes(createChar);
			}
			else {
				if (weaponQuality == materials::Oak) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuAxes(createChar);
				}
				else {
					//Oak Axe
					weaponChoice = weapons::axe;
					weaponQuality = materials::Oak;
					createChar.weaponQ = weaponTypeF(weaponQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 1;
					cout << "You bought an " << createChar.weaponQ << " " << createChar.weaponT << " for 1 soul. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuAxes(createChar);
				}
			}
			break;
		case 2:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuAxes(createChar);
			}
			else {
				if (weaponQuality == materials::Copper) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuAxes(createChar);
				}
				else {
					//Copper Axe
					weaponChoice = weapons::axe;
					weaponQuality = materials::Copper;
					createChar.weaponQ = weaponTypeF(weaponQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 5;
					cout << "You bought an " << createChar.weaponQ << " " << createChar.weaponT << " for 5 souls. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuAxes(createChar);
				}
			}
			break;
		case 3:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuAxes(createChar);
			}
			else {
				if (weaponQuality == materials::Bronze) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuAxes(createChar);
				}
				else {
					//Bronze Axe
					weaponChoice = weapons::axe;
					weaponQuality = materials::Bronze;
					createChar.weaponQ = weaponTypeF(weaponQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 10;
					cout << "You bought an " << createChar.weaponQ << " " << createChar.weaponT << " for 10 souls. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuAxes(createChar);
				}
			}
			break;
		case 4:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuAxes(createChar);
			}
			else {
				if (weaponQuality == materials::Iron) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuAxes(createChar);
				}
				else {
					//Iron Axe
					weaponChoice = weapons::axe;
					weaponQuality = materials::Iron;
					createChar.weaponQ = weaponTypeF(weaponQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 15;
					cout << "You bought an " << createChar.weaponQ << " " << createChar.weaponT << " for 15 souls. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuAxes(createChar);
				}
			}
			break;
		case 5:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuAxes(createChar);
			}
			else {
				if (weaponQuality == materials::Steel) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuAxes(createChar);
				}
				else {
					//Steel Axe
					weaponChoice = weapons::axe;
					weaponQuality = materials::Steel;
					createChar.weaponQ = weaponTypeF(weaponQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 25;
					cout << "You bought an " << createChar.weaponQ << " " << createChar.weaponT << " for 25 souls. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuAxes(createChar);
				}
			}
			break;
		case 6:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuAxes(createChar);
			}
			else {
				if (weaponQuality == materials::Mithril) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuAxes(createChar);
				}
				else {
					//Mithril Axe
					weaponChoice = weapons::axe;
					weaponQuality = materials::Mithril;
					createChar.weaponQ = weaponTypeF(weaponQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 50;
					cout << "You bought an " << createChar.weaponQ << " " << createChar.weaponT << " for 50 souls. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuAxes(createChar);
				}
			}
			break;
		case 7:
			shopMenu(createChar);
			break;
		}
	}
};

void shopMenuPoleaxes(character createChar) {
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
		shopMenuPoleaxes(createChar);
	}

	bool pExists = std::find(std::begin(pArrayShopBuy), std::end(pArrayShopBuy), shopMenuChoice) != std::end(pArrayShopBuy);
	if (pExists) {
		switch (shopMenuChoice) {
		case 1:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuPoleaxes(createChar);
			}
			else {
				if (weaponQuality == materials::Oak) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuPoleaxes(createChar);
				}
				else {
					//Oak Poleaxe
					weaponChoice = weapons::poleaxe;
					weaponQuality = materials::Oak;
					createChar.weaponQ = weaponTypeF(weaponQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 1;
					cout << "You bought an " << createChar.weaponQ << " " << createChar.weaponT << " for 1 soul. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuPoleaxes(createChar);
				}
			}
			break;
		case 2:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuPoleaxes(createChar);
			}
			else {
				if (weaponQuality == materials::Copper) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuPoleaxes(createChar);
				}
				else {
					//Copper Poleaxe
					weaponChoice = weapons::poleaxe;
					weaponQuality = materials::Copper;
					createChar.weaponQ = weaponTypeF(weaponQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 5;
					cout << "You bought an " << createChar.weaponQ << " " << createChar.weaponT << " for 5 souls. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuPoleaxes(createChar);
				}
			}
			break;
		case 3:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuPoleaxes(createChar);
			}
			else {
				if (weaponQuality == materials::Bronze) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuPoleaxes(createChar);
				}
				else {
					//Bronze Poleaxe
					weaponChoice = weapons::poleaxe;
					weaponQuality = materials::Bronze;
					createChar.weaponQ = weaponTypeF(weaponQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 10;
					cout << "You bought an " << createChar.weaponQ << " " << createChar.weaponT << " for 10 souls. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuPoleaxes(createChar);
				}
			}
			break;
		case 4:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuPoleaxes(createChar);
			}
			else {
				if (weaponQuality == materials::Iron) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuPoleaxes(createChar);
				}
				else {
					//Iron Poleaxe
					weaponChoice = weapons::poleaxe;
					weaponQuality = materials::Iron;
					createChar.weaponQ = weaponTypeF(weaponQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 15;
					cout << "You bought an " << createChar.weaponQ << " " << createChar.weaponT << " for 15 souls. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuPoleaxes(createChar);
				}
			}
			break;
		case 5:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuPoleaxes(createChar);
			}
			else {
				if (weaponQuality == materials::Steel) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuPoleaxes(createChar);
				}
				else {
					//Steel Poleaxe
					weaponChoice = weapons::poleaxe;
					weaponQuality = materials::Steel;
					createChar.weaponQ = weaponTypeF(weaponQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 25;
					cout << "You bought an " << createChar.weaponQ << " " << createChar.weaponT << " for 25 souls. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuPoleaxes(createChar);
				}
			}
			break;
		case 6:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuPoleaxes(createChar);
			}
			else {
				if (weaponQuality == materials::Mithril) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuPoleaxes(createChar);
				}
				else {
					//Mithril Poleaxe
					weaponChoice = weapons::poleaxe;
					weaponQuality = materials::Mithril;
					createChar.weaponQ = weaponTypeF(weaponQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 50;
					cout << "You bought an " << createChar.weaponQ << " " << createChar.weaponT << " for 50 souls. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuPoleaxes(createChar);
				}
			}
			break;
		case 7:
			shopMenu(createChar);
			break;
		}
	}
};

void shopMenuArmor(character createChar) {
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
					shopMenuArmor(createChar);
				}

				bool pExists = std::find(std::begin(pArrayShop), std::end(pArrayShop), shopMenuChoice) != std::end(pArrayShop);
				if (pExists) {
					switch (shopMenuChoice) {
					case 1:
						shopMenuHelms(createChar);
						break;
					case 2:
						//shopMenuBodyArmor(createChar);
						break;
					case 3:
						//shopMenuSheilds(createChar);
						break;
					case 4:
						shopMenu(createChar);
						break;
					}
				}
	};

character shopMenuHelms(character createChar) {
	int shopMenuChoice;
	
	cout << "- Helms Menu -" << endl;
	cout << "(1) Oak Helm - 1 Soul" << endl;
	cout << "(2) Copper Helm - 5 Souls" << endl;
	cout << "(3) Bronze Helm - 10 Souls" << endl;
	cout << "(4) Iron Helm - 15 Souls" << endl;
	cout << "(5) Steel Helm - 25 Souls" << endl;
	cout << "(6) Mithril Helm - 50 Souls" << endl;
	cout << "(7) Shop Menu" << endl;
	cin >> shopMenuChoice;

	if ((cin.fail())) {
		cout << pError << endl;
		cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		shopMenuHelms(createChar);
	}

	bool pExists = std::find(std::begin(pArrayShopBuy), std::end(pArrayShopBuy), shopMenuChoice) != std::end(pArrayShopBuy);
	if (pExists) {
		switch (shopMenuChoice) {
		case 1:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuHelms(createChar);
			}
			else {
				if (helmQuality == materials::Oak) {
					cout << "You already own a helmet of this quality." << endl;
					shopMenuHelms(createChar);
				}
				else {
					//Oak Helm
					helmVals = armor::helm;
					helmQuality = materials::Oak;
					createChar.armorQHelm = helmTypeF(helmQuality);
					createChar.souls = createChar.souls - 1;
					cout << "You bought an " << createChar.armorQHelm << " " << "Helmet, for 1 soul. It has " << createChar.charArmor.helmArmor << "\nYou have " << createChar.souls << " remaining." << endl;
					shopMenuHelms(createChar);
				}
			}
			break;
		case 2:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuHelms(createChar);
			}
			else {
				if (helmQuality == materials::Copper){
					cout << "You already own a helmet of this quality." << endl;
					shopMenuHelms(createChar);
					}
				else {
					//Copper Helm
						helmVals = armor::helm;
						helmQuality = materials::Copper;
						createChar.armorQHelm = helmTypeF(helmQuality);
						createChar.souls = createChar.souls - 1;
						cout << "You bought a " << createChar.armorQHelm << " " << "Helmet, for 1 soul. \nYou have " << createChar.souls << " remaining." << endl;
						shopMenuHelms(createChar);
				}
			}
			break;
		case 3:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuHelms(createChar);
			}
			else {
				if (helmQuality == materials::Bronze) {
					cout << "You already own a helmet of this quality." << endl;
					shopMenuHelms(createChar);
				}
				else {
					//Bronze Helm
					helmVals = armor::helm;
					helmQuality = materials::Bronze;
					createChar.armorQHelm = helmTypeF(helmQuality);
					createChar.souls = createChar.souls - 1;
					cout << "You bought a " << createChar.armorQHelm << " " << "Helmet, for 1 soul. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuHelms(createChar);
				}
			}
			break;

		case 4:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuHelms(createChar);
			}
			else {
				if (helmQuality == materials::Iron) {
					cout << "You already own a helmet of this quality." << endl;
					shopMenuHelms(createChar);
				}
				else {
					//Iron Helm
					helmVals = armor::helm;
					helmQuality = materials::Iron;
					createChar.armorQHelm = helmTypeF(helmQuality);
					createChar.souls = createChar.souls - 1;
					cout << "You bought a " << createChar.armorQHelm << " " << "Helmet, for 1 soul. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuHelms(createChar);
				}
			}
			break;
		case 5:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuHelms(createChar);
			}
			else {
				if (helmQuality == materials::Steel) {
					cout << "You already own a helmet of this quality." << endl;
					shopMenuHelms(createChar);
				}
				else {
					//Steel Helm
					helmVals = armor::helm;
					helmQuality = materials::Steel;
					createChar.armorQHelm = helmTypeF(helmQuality);
					createChar.souls = createChar.souls - 1;
					cout << "You bought a " << createChar.armorQHelm << " " << "Helmet, for 1 soul. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuHelms(createChar);
				}
			}
			break;
		case 6:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuHelms (createChar);
			}
			else {
				if (helmQuality == materials::Mithril) {
					cout << "You already own a helmet of this quality." << endl;
					shopMenuHelms(createChar);
				}
				else {
					//Mithril Helm
					helmVals = armor::helm;
					helmQuality = materials::Mithril;
					createChar.armorQHelm = helmTypeF(helmQuality);
					createChar.souls = createChar.souls - 1;
					cout << "You bought a " << createChar.armorQHelm << " " << "Helmet, for 1 soul. \nYou have " << createChar.souls << " remaining." << endl;
					shopMenuHelms(createChar);
				}
			}
			break;
		case 7:
			shopMenu(createChar);
			break;
		}
	}
	return createChar;
};