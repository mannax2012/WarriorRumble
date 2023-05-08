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
			//shopMenuPoleaxes(createChar);
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
				if (swordQuality >= 3) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuSwords(createChar);
				}
				else {
					//Oak Sword
					weaponChoice = weapons::sword;
					swordQuality = materials::Oak;
					axeQuality = materials::No;
					poleaxeQuality = materials::No;
					createChar.swordWeaponQ = swordWeaponTypeF(swordQuality);
					createChar.axeWeaponQ = axeWeaponTypeF(axeQuality);
					createChar.poleaxeWeaponQ = poleaxeWeaponTypeF(axeQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 1;
					createChar.combatStats.swordAttackDamage = (static_cast<int>(swordQuality)) + (static_cast<int>(weaponChoice));
					cout << "You bought an " << createChar.swordWeaponQ << " " << createChar.weaponT <<  " for 1 soul. It has " << createChar.combatStats.swordAttackDamage << " Attack Power." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.weaponAttack = (2 * createChar.strength) + createChar.combatStats.swordAttackDamage;
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
					swordQuality = materials::Copper;
					axeQuality = materials::No;
					poleaxeQuality = materials::No;
					createChar.swordWeaponQ = weaponTypeF(swordQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 5;
					createChar.combatStats.swordAttackDamage = (static_cast<int>(swordQuality)) + (static_cast<int>(weaponChoice));
					cout << "You bought an " << createChar.swordWeaponQ << " " << createChar.weaponT << " for 5 souls. It has " << createChar.combatStats.swordAttackDamage << " Attack Power." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.weaponAttack = (2 * createChar.strength) + createChar.combatStats.swordAttackDamage;
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
				if (swordQuality >= 5) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuSwords(createChar);
				}
				else {
					//Bronze Sword
					weaponChoice = weapons::sword;
					swordQuality = materials::Bronze;
					axeQuality = materials::No;
					poleaxeQuality = materials::No;
					createChar.swordWeaponQ = swordWeaponTypeF(swordQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 10;
					createChar.combatStats.swordAttackDamage = (static_cast<int>(swordQuality)) + (static_cast<int>(weaponChoice));
					cout << "You bought an " << createChar.swordWeaponQ << " " << createChar.weaponT << " for 10 souls. It has " << createChar.combatStats.swordAttackDamage << " Attack Power." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.weaponAttack = (2 * createChar.strength) + createChar.combatStats.swordAttackDamage;
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
				if (swordQuality >= 6) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuSwords(createChar);
				}
				else {
					//Iron Sword
					weaponChoice = weapons::sword;
					swordQuality = materials::Iron;
					axeQuality = materials::No;
					poleaxeQuality = materials::No;
					createChar.swordWeaponQ = weaponTypeF(swordQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 15;
					createChar.combatStats.swordAttackDamage = (static_cast<int>(swordQuality)) + (static_cast<int>(weaponChoice));
					cout << "You bought an " << createChar.swordWeaponQ << " " << createChar.weaponT << " for 15 souls. It has " << createChar.combatStats.swordAttackDamage << " Attack Power." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.weaponAttack = (2 * createChar.strength) + createChar.combatStats.swordAttackDamage;
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
				if (swordQuality >= 7) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuSwords(createChar);
				}
				else {
					//Steel Sword
					weaponChoice = weapons::sword;
					weaponQuality = materials::No;
					swordQuality = materials::Steel;
					axeQuality = materials::No;
					poleaxeQuality = materials::No;
					createChar.swordWeaponQ = weaponTypeF(swordQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 25;
					createChar.combatStats.swordAttackDamage = (static_cast<int>(swordQuality)) + (static_cast<int>(weaponChoice));
					cout << "You bought an " << createChar.swordWeaponQ << " " << createChar.weaponT << " for 25 souls. It has " << createChar.combatStats.swordAttackDamage << " Attack Power." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.weaponAttack = (2 * createChar.strength) + createChar.combatStats.swordAttackDamage;
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
				if (swordQuality >= 10) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuSwords(createChar);
				}
				else {
					//Mithril Sword
					weaponChoice = weapons::sword;
					swordQuality = materials::Mithril;
					axeQuality = materials::No;
					poleaxeQuality = materials::No;
					createChar.swordWeaponQ = swordWeaponTypeF(swordQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 50;
					createChar.combatStats.swordAttackDamage = (static_cast<int>(swordQuality)) + (static_cast<int>(weaponChoice));
					cout << "You bought an " << createChar.swordWeaponQ << " " << createChar.weaponT << " for 50 souls. It has " << createChar.combatStats.swordAttackDamage << " Attack Power." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.weaponAttack = (2 * createChar.strength) + createChar.combatStats.swordAttackDamage;
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
				if (axeQuality >= materials::Oak) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuAxes(createChar);
				}
				else {
					//Oak Axe
					weaponChoice = weapons::axe;
					swordQuality = materials::No;
					axeQuality = materials::Oak;
					poleaxeQuality = materials::No;
					createChar.axeWeaponQ = axeWeaponTypeF(axeQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 1;
					createChar.combatStats.axeAttackDamage = (static_cast<int>(axeQuality)) + (static_cast<int>(weaponChoice));
					cout << "You bought an " << createChar.axeWeaponQ << " " << createChar.weaponT << " for 1 soul. It has " << createChar.combatStats.axeAttackDamage << " Attack Power." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.weaponAttack = (2 * createChar.strength) + createChar.combatStats.axeAttackDamage;
					shopMenuAxes(createChar);
				}
			}
			break;
		case 2:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuSwords(createChar);
			}
			else {
				if (axeQuality >= materials::Copper) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuAxes(createChar);
				}
				else {
					//Copper Axe
					weaponChoice = weapons::axe;
					swordQuality = materials::No;
					axeQuality = materials::Copper;
					poleaxeQuality = materials::No;
					createChar.axeWeaponQ = weaponTypeF(axeQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 5;
					createChar.combatStats.axeAttackDamage = (static_cast<int>(axeQuality)) + (static_cast<int>(weaponChoice));
					cout << "You bought an " << createChar.axeWeaponQ << " " << createChar.weaponT << " for 5 souls. It has " << createChar.combatStats.axeAttackDamage << " Attack Power." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.weaponAttack = (2 * createChar.strength) + createChar.combatStats.axeAttackDamage;
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
				if (axeQuality >= materials::Bronze) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuAxes(createChar);
				}
				else {
					//Bronze Axe
					weaponChoice = weapons::axe;
					swordQuality = materials::No;
					axeQuality = materials::Bronze;
					poleaxeQuality = materials::No;
					createChar.axeWeaponQ = weaponTypeF(axeQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 10;
					createChar.combatStats.axeAttackDamage = (static_cast<int>(axeQuality)) + (static_cast<int>(weaponChoice));
					cout << "You bought an " << createChar.axeWeaponQ << " " << createChar.weaponT << " for 10 souls. It has " << createChar.combatStats.axeAttackDamage << " Attack Power." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.weaponAttack = (2 * createChar.strength) + createChar.combatStats.axeAttackDamage;
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
				if (axeQuality >= materials::Iron) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuAxes(createChar);
				}
				else {
					//Iron Axe
					weaponChoice = weapons::axe;
					swordQuality = materials::No;
					axeQuality = materials::Iron;
					poleaxeQuality = materials::No;
					createChar.axeWeaponQ = weaponTypeF(axeQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 15;
					createChar.combatStats.axeAttackDamage = (static_cast<int>(axeQuality)) + (static_cast<int>(weaponChoice));
					cout << "You bought an " << createChar.axeWeaponQ << " " << createChar.weaponT << " for 15 souls. It has " << createChar.combatStats.axeAttackDamage << " Attack Power." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.weaponAttack = (2 * createChar.strength) + createChar.combatStats.axeAttackDamage;
					shopMenuAxes(createChar);
				}
			}
			break;
		case 5:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuSwords(createChar);
			}
			else {
				if (axeQuality >= materials::Steel) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuSwords(createChar);
				}
				else {
					//Steel
					weaponChoice = weapons::axe;
					swordQuality = materials::No;
					axeQuality = materials::Steel;
					poleaxeQuality = materials::No;
					createChar.axeWeaponQ = weaponTypeF(axeQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 15;
					createChar.combatStats.axeAttackDamage = (static_cast<int>(axeQuality)) + (static_cast<int>(weaponChoice));
					cout << "You bought an " << createChar.axeWeaponQ << " " << createChar.weaponT << " for 15 souls. It has " << createChar.combatStats.axeAttackDamage << " Attack Power." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.weaponAttack = (2 * createChar.strength) + createChar.combatStats.axeAttackDamage;
					shopMenuAxes(createChar);
				}
			}
			break;
		case 6:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuSwords(createChar);
			}
			else {
				if (axeQuality >= materials::Mithril) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenuSwords(createChar);
				}
				else {
					//Mithril
					weaponChoice = weapons::axe;
					swordQuality = materials::No;
					axeQuality = materials::Mithril;
					poleaxeQuality = materials::No;
					createChar.axeWeaponQ = weaponTypeF(axeQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.souls = createChar.souls - 15;
					createChar.combatStats.axeAttackDamage = (static_cast<int>(axeQuality)) + (static_cast<int>(weaponChoice));
					cout << "You bought an " << createChar.axeWeaponQ << " " << createChar.weaponT << " for 15 souls. It has " << createChar.combatStats.axeAttackDamage << " Attack Power." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.weaponAttack = (2 * createChar.strength) + createChar.combatStats.axeAttackDamage;
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

/*
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
*/
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
						shopMenuBodyArmor(createChar);
						break;
					case 3:
						shopMenuSheilds(createChar);
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
				if (helmQuality >= 3) {
					cout << "You already own a helmet of this quality or better." << endl;
					shopMenuHelms(createChar);
				}
				else {
					//Oak Helm
					helmVals = armor::helm;
					helmQuality = materials::Oak;
					createChar.armorQHelm = helmTypeF(helmQuality);
					createChar.souls = createChar.souls - 1;
					createChar.charArmor.helmArmor = (static_cast<int>(helmQuality)) + (static_cast<int>(helmVals));
					cout << "You bought an " << createChar.armorQHelm << " " << "Helmet, for 1 soul. It has " << createChar.charArmor.helmArmor << " Armor." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.charArmor.armorTotal = createChar.charArmor.bodyArmor + createChar.charArmor.helmArmor + createChar.charArmor.sheildArmor;
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
				if (helmQuality >= 4){
					cout << "You already own a helmet of this quality or better." << endl;
					shopMenuHelms(createChar);
					}
				else {
					//Copper Helm
						helmVals = armor::helm;
						helmQuality = materials::Copper;
						createChar.armorQHelm = helmTypeF(helmQuality);
						createChar.souls = createChar.souls - 5;
						createChar.charArmor.helmArmor = (static_cast<int>(helmQuality)) + (static_cast<int>(helmVals));
						cout << "You bought an " << createChar.armorQHelm << " " << "Helmet, for 5 souls. It has " << createChar.charArmor.helmArmor << " Armor." << endl;
						cout << "You have " << createChar.souls << " remaining." << endl;
						createChar.charArmor.armorTotal = createChar.charArmor.bodyArmor + createChar.charArmor.helmArmor + createChar.charArmor.sheildArmor;
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
				if (helmQuality >= 5) {
					cout << "You already own a helmet of this quality or better." << endl;
					shopMenuHelms(createChar);
				}
				else {
					//Bronze Helm
					helmVals = armor::helm;
					helmQuality = materials::Bronze;
					createChar.armorQHelm = helmTypeF(helmQuality);
					createChar.souls = createChar.souls - 10;
					createChar.charArmor.helmArmor = (static_cast<int>(helmQuality)) + (static_cast<int>(helmVals));
					cout << "You bought an " << createChar.armorQHelm << " " << "Helmet, for 10 souls. It has " << createChar.charArmor.helmArmor << " Armor." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.charArmor.armorTotal = createChar.charArmor.bodyArmor + createChar.charArmor.helmArmor + createChar.charArmor.sheildArmor;
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
				if (helmQuality >= 6) {
					cout << "You already own a helmet of this quality or better." << endl;
					shopMenuHelms(createChar);
				}
				else {
					//Iron Helm
					helmVals = armor::helm;
					helmQuality = materials::Iron;
					createChar.armorQHelm = helmTypeF(helmQuality);
					createChar.souls = createChar.souls - 15;
					createChar.charArmor.helmArmor = (static_cast<int>(helmQuality)) + (static_cast<int>(helmVals));
					cout << "You bought an " << createChar.armorQHelm << " " << "Helmet, for 15 souls. It has " << createChar.charArmor.helmArmor << " Armor." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.charArmor.armorTotal = createChar.charArmor.bodyArmor + createChar.charArmor.helmArmor + createChar.charArmor.sheildArmor;
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
				if (helmQuality >= 7) {
					cout << "You already own a helmet of this quality or better." << endl;
					shopMenuHelms(createChar);
				}
				else {
					//Steel Helm
					helmVals = armor::helm;
					helmQuality = materials::Steel;
					createChar.armorQHelm = helmTypeF(helmQuality);
					createChar.souls = createChar.souls - 25;
					createChar.charArmor.helmArmor = (static_cast<int>(helmQuality)) + (static_cast<int>(helmVals));
					cout << "You bought an " << createChar.armorQHelm << " " << "Helmet, for 25 souls. It has "  << createChar.charArmor.helmArmor << " Armor." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.charArmor.armorTotal = createChar.charArmor.bodyArmor + createChar.charArmor.helmArmor + createChar.charArmor.sheildArmor;
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
				if (helmQuality >= 10) {
					cout << "You already own a helmet of this quality or better." << endl;
					shopMenuHelms(createChar);
				}
				else {
					//Mithril Helm
					helmVals = armor::helm;
					helmQuality = materials::Mithril;
					createChar.armorQHelm = helmTypeF(helmQuality);
					createChar.souls = createChar.souls - 50;
					createChar.charArmor.helmArmor = (static_cast<int>(helmQuality)) + (static_cast<int>(helmVals));
					cout << "You bought a " << createChar.armorQHelm << " " << "Helmet, for 50 souls. It has " << createChar.charArmor.helmArmor << " Armor." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.charArmor.armorTotal = createChar.charArmor.bodyArmor + createChar.charArmor.helmArmor + createChar.charArmor.sheildArmor;
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

character shopMenuBodyArmor(character createChar) {
	int shopMenuChoice;

	cout << "- Body Armor Menu -" << endl;
	cout << "(1) Oak Body Armor - 1 Soul" << endl;
	cout << "(2) Copper Body Armor - 5 Souls" << endl;
	cout << "(3) Bronze Body Armor - 10 Souls" << endl;
	cout << "(4) Iron Body Armor - 15 Souls" << endl;
	cout << "(5) Steel Body Armor - 25 Souls" << endl;
	cout << "(6) Mithril Body Armor - 50 Souls" << endl;
	cout << "(7) Shop Menu" << endl;
	cin >> shopMenuChoice;

	if ((cin.fail())) {
		cout << pError << endl;
		cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		shopMenuBodyArmor(createChar);
	}

	bool pExists = std::find(std::begin(pArrayShopBuy), std::end(pArrayShopBuy), shopMenuChoice) != std::end(pArrayShopBuy);
	if (pExists) {
		switch (shopMenuChoice) {
		case 1:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuBodyArmor(createChar);
			}
			else {
				if (armorQuality >= 3) {
					cout << "You already own a Body Armor of this quality or better." << endl;
					shopMenuBodyArmor(createChar);
				}
				else {
					//Oak Body Armor
					armorVals = armor::bodyArmor;
					armorQuality = materials::Oak;
					createChar.armorQBody = armorTypeF(armorQuality);
					createChar.souls = createChar.souls - 1;
					createChar.charArmor.bodyArmor = (static_cast<int>(armorQuality)) + (static_cast<int>(armorVals));
					cout << "You bought an " << createChar.armorQBody << " " << "Body Armor, for 1 soul. It has " << createChar.charArmor.bodyArmor << " Armor." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.charArmor.armorTotal = createChar.charArmor.bodyArmor + createChar.charArmor.helmArmor + createChar.charArmor.sheildArmor;
					shopMenuBodyArmor(createChar);
				}
			}
			break;
		case 2:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuBodyArmor(createChar);
			}
			else {
				if (armorQuality >= 4) {
					cout << "You already own Body Armor of this quality or better." << endl;
					shopMenuBodyArmor(createChar);
				}
				else {
					//Copper Body Armor
					armorVals = armor::bodyArmor;
					armorQuality = materials::Copper;
					createChar.armorQBody = armorTypeF(armorQuality);
					createChar.souls = createChar.souls - 5;
					createChar.charArmor.bodyArmor = (static_cast<int>(armorQuality)) + (static_cast<int>(armorVals));
					cout << "You bought an " << createChar.armorQBody << " " << "Body Armor, for 5 souls. It has " << createChar.charArmor.bodyArmor << " Armor." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.charArmor.armorTotal = createChar.charArmor.bodyArmor + createChar.charArmor.helmArmor + createChar.charArmor.sheildArmor;
					shopMenuBodyArmor(createChar);
				}
			}
			break;
		case 3:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuBodyArmor(createChar);
			}
			else {
				if (armorQuality >= 5) {
					cout << "You already own Body Armor of this quality or better." << endl;
					shopMenuBodyArmor(createChar);
				}
				else {
					//Bronze Body Armor
					armorVals = armor::bodyArmor;
					armorQuality = materials::Bronze;
					createChar.armorQBody = armorTypeF(armorQuality);
					createChar.souls = createChar.souls - 10;
					createChar.charArmor.bodyArmor = (static_cast<int>(armorQuality)) + (static_cast<int>(armorVals));
					cout << "You bought an " << createChar.armorQBody << " " << "Body Armor, for 10 souls. It has " << createChar.charArmor.bodyArmor << " Armor." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.charArmor.armorTotal = createChar.charArmor.bodyArmor + createChar.charArmor.helmArmor + createChar.charArmor.sheildArmor;
					shopMenuBodyArmor(createChar);
				}
			}
			break;

		case 4:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuBodyArmor(createChar);
			}
			else {
				if (armorQuality >= 6) {
					cout << "You already own Body Armor of this quality or better." << endl;
					shopMenuBodyArmor(createChar);
				}
				else {
					//Iron Body Armor
					armorVals = armor::bodyArmor;
					armorQuality = materials::Iron;
					createChar.armorQBody = armorTypeF(armorQuality);
					createChar.souls = createChar.souls - 15;
					createChar.charArmor.bodyArmor = (static_cast<int>(armorQuality)) + (static_cast<int>(armorVals));
					cout << "You bought an " << createChar.armorQBody << " " << "Body Armor, for 1 souls. It has " << createChar.charArmor.bodyArmor << " Armor." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.charArmor.armorTotal = createChar.charArmor.bodyArmor + createChar.charArmor.helmArmor + createChar.charArmor.sheildArmor;
					shopMenuBodyArmor(createChar);
				}
			}
			break;
		case 5:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuBodyArmor(createChar);
			}
			else {
				if (armorQuality >= 7) {
					cout << "You already own Body Armor of this quality or better." << endl;
					shopMenuBodyArmor(createChar);
				}
				else {
					//Steel Helm
					armorVals = armor::bodyArmor;
					armorQuality = materials::Steel;
					createChar.armorQBody = armorTypeF(armorQuality);
					createChar.souls = createChar.souls - 25;
					createChar.charArmor.bodyArmor = (static_cast<int>(armorQuality)) + (static_cast<int>(armorVals));
					cout << "You bought an " << createChar.armorQBody << " " << "Body Armor, for 25 souls. It has " << createChar.charArmor.bodyArmor << " Armor." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.charArmor.armorTotal = createChar.charArmor.bodyArmor + createChar.charArmor.helmArmor + createChar.charArmor.sheildArmor;
					shopMenuBodyArmor(createChar);
				}
			}
			break;
		case 6:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuBodyArmor(createChar);
			}
			else {
				if (armorQuality >= 10) {
					cout << "You already own Body Armor of this quality or better." << endl;
					shopMenuBodyArmor(createChar);
				}
				else {
					//Mithril Helm
					armorVals = armor::bodyArmor;
					armorQuality = materials::Mithril;
					createChar.armorQBody = armorTypeF(armorQuality);
					createChar.souls = createChar.souls - 50;
					createChar.charArmor.bodyArmor = (static_cast<int>(armorQuality)) + (static_cast<int>(armorVals));
					cout << "You bought an " << createChar.armorQBody << " " << "Body Armor, for 50 souls. It has " << createChar.charArmor.bodyArmor << " Armor." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.charArmor.armorTotal = createChar.charArmor.bodyArmor + createChar.charArmor.helmArmor + createChar.charArmor.sheildArmor;
					shopMenuBodyArmor(createChar);
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

character shopMenuSheilds(character createChar) {
	int shopMenuChoice;

	cout << "- Sheilds Menu -" << endl;
	cout << "(1) Oak Sheild - 1 Soul" << endl;
	cout << "(2) Copper Sheild - 5 Souls" << endl;
	cout << "(3) Bronze Sheild - 10 Souls" << endl;
	cout << "(4) Iron Sheild - 15 Souls" << endl;
	cout << "(5) Steel Sheild - 25 Souls" << endl;
	cout << "(6) Mithril Sheild - 50 Souls" << endl;
	cout << "(7) Shop Menu" << endl;
	cin >> shopMenuChoice;

	if ((cin.fail())) {
		cout << pError << endl;
		cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		shopMenuSheilds(createChar);
	}

	bool pExists = std::find(std::begin(pArrayShopBuy), std::end(pArrayShopBuy), shopMenuChoice) != std::end(pArrayShopBuy);
	if (pExists) {
		switch (shopMenuChoice) {
		case 1:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuSheilds(createChar);
			}
			else {
				if (sheildQuality >= 3) {
					cout << "You already own a Sheild of this quality or better." << endl;
					shopMenuSheilds(createChar);
				}
				else {
					//Oak Sheild
					sheildVals = armor::sheild;
					sheildQuality = materials::Oak;
					createChar.armorQSheild = sheildTypeF(sheildQuality);
					createChar.souls = createChar.souls - 1;
					createChar.charArmor.sheildArmor = (static_cast<int>(sheildQuality)) + (static_cast<int>(sheildVals));
					cout << "You bought an " << createChar.armorQSheild << " " << "Sheild, for 1 soul. It has " << createChar.charArmor.sheildArmor << " Armor." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.charArmor.armorTotal = createChar.charArmor.bodyArmor + createChar.charArmor.sheildArmor + createChar.charArmor.sheildArmor;
					shopMenuSheilds(createChar);
				}
			}
			break;
		case 2:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuSheilds(createChar);
			}
			else {
				if (sheildQuality >= 4) {
					cout << "You already own a Sheild of this quality or better." << endl;
					shopMenuSheilds(createChar);
				}
				else {
					//Copper Sheild
					sheildVals = armor::sheild;
					sheildQuality = materials::Copper;
					createChar.armorQSheild = sheildTypeF(sheildQuality);
					createChar.souls = createChar.souls - 5;
					createChar.charArmor.sheildArmor = (static_cast<int>(sheildQuality)) + (static_cast<int>(sheildVals));
					cout << "You bought an " << createChar.armorQSheild << " " << "Sheild, for 5 souls. It has " << createChar.charArmor.sheildArmor << " Armor." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.charArmor.armorTotal = createChar.charArmor.bodyArmor + createChar.charArmor.sheildArmor + createChar.charArmor.sheildArmor;
					shopMenuSheilds(createChar);
				}
			}
			break;
		case 3:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuSheilds(createChar);
			}
			else {
				if (sheildQuality >= 5) {
					cout << "You already own a Sheild of this quality or better." << endl;
					shopMenuSheilds(createChar);
				}
				else {
					//Bronze Sheild
					sheildVals = armor::sheild;
					sheildQuality = materials::Bronze;
					createChar.armorQSheild = sheildTypeF(sheildQuality);
					createChar.souls = createChar.souls - 10;
					createChar.charArmor.sheildArmor = (static_cast<int>(sheildQuality)) + (static_cast<int>(sheildVals));
					cout << "You bought an " << createChar.armorQSheild << " " << "Sheild, for 10 souls. It has " << createChar.charArmor.sheildArmor << " Armor." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.charArmor.armorTotal = createChar.charArmor.bodyArmor + createChar.charArmor.sheildArmor + createChar.charArmor.sheildArmor;
					shopMenuSheilds(createChar);
				}
			}
			break;

		case 4:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuSheilds(createChar);
			}
			else {
				if (sheildQuality >= 6) {
					cout << "You already own a Sheild of this quality or better." << endl;
					shopMenuSheilds(createChar);
				}
				else {
					//Iron Sheild
					sheildVals = armor::sheild;
					sheildQuality = materials::Iron;
					createChar.armorQSheild = sheildTypeF(sheildQuality);
					createChar.souls = createChar.souls - 15;
					createChar.charArmor.sheildArmor = (static_cast<int>(sheildQuality)) + (static_cast<int>(sheildVals));
					cout << "You bought an " << createChar.armorQSheild << " " << "Sheild, for 15 souls. It has " << createChar.charArmor.sheildArmor << " Armor." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.charArmor.armorTotal = createChar.charArmor.bodyArmor + createChar.charArmor.sheildArmor + createChar.charArmor.sheildArmor;
					shopMenuSheilds(createChar);
				}
			}
			break;
		case 5:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuSheilds(createChar);
			}
			else {
				if (sheildQuality >= 7) {
					cout << "You already own a Sheild of this quality or better." << endl;
					shopMenuSheilds(createChar);
				}
				else {
					//Steel Sheild
					sheildVals = armor::sheild;
					sheildQuality = materials::Steel;
					createChar.armorQSheild = sheildTypeF(sheildQuality);
					createChar.souls = createChar.souls - 25;
					createChar.charArmor.sheildArmor = (static_cast<int>(sheildQuality)) + (static_cast<int>(sheildVals));
					cout << "You bought an " << createChar.armorQSheild << " " << "Sheild, for 25 souls. It has " << createChar.charArmor.sheildArmor << " Armor." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.charArmor.armorTotal = createChar.charArmor.bodyArmor + createChar.charArmor.sheildArmor + createChar.charArmor.sheildArmor;
					shopMenuSheilds(createChar);
				}
			}
			break;
		case 6:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenuSheilds(createChar);
			}
			else {
				if (sheildQuality >= 10) {
					cout << "You already own a Sheild of this quality or better." << endl;
					shopMenuSheilds(createChar);
				}
				else {
					//Mithril Sheild
					sheildVals = armor::sheild;
					sheildQuality = materials::Mithril;
					createChar.armorQSheild = sheildTypeF(sheildQuality);
					createChar.souls = createChar.souls - 50;
					createChar.charArmor.sheildArmor = (static_cast<int>(sheildQuality)) + (static_cast<int>(sheildVals));
					cout << "You bought a " << createChar.armorQSheild << " " << "Sheild, for 50 souls. It has " << createChar.charArmor.sheildArmor << " Armor." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.charArmor.armorTotal = createChar.charArmor.bodyArmor + createChar.charArmor.sheildArmor + createChar.charArmor.sheildArmor;
					shopMenuSheilds(createChar);
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

