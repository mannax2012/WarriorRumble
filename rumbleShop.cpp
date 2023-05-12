#include "includes.h"
using namespace std;
short pArrayShop[4] = { 1,2,3,4 };
short pArrayShopBuy[7] = { 1,2,3,4,5,6,7 };

void shopMenu(character& createChar) {
	int shopMenuChoice;
	cout << "|==========================================================|" << endl;
	cout << "|                       RUMBLE SHOP                        |" << endl;
	cout << "|==========================================================|" << endl;
	cout << "|      1     |            WEAPONS            |             |" << endl;
	cout << "|      2     |             ARMOR             |             |" << endl;
	cout << "|      3     |            POTIONS            |             |" << endl;
	cout << "|      4     |           MAIN MENU           |             |" << endl;
	cout << "|==========================================================|" << endl;
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
			shopMenuSwords(createChar);
			break;
		case 2:
			shopMenuArmor(createChar);
			break;
		case 3:
			shopMenuPotions(createChar);
			break;
		case 4:
			pFirstScreen(createChar);
		}
	}
};

void shopMenuWeapons(character& createChar) {
	int shopMenuChoice;
	cout << "- Weapons Menu -" << endl;
	cout << "(1) Swords" << endl;
	cout << "(2) Axes" << endl;
	cout << "(3) Poleaxes" << endl;
	cout << "(4) Shop Menu" << endl;
	cout << "|==========================================================|" << endl;
	cout << "|                       WEAPON MENU                        |" << endl;
	cout << "|==========================================================|" << endl;
	cout << "|      1     |            SWORDS             |             |" << endl;
	cout << "|      2     |              AXES             |             |" << endl;
	cout << "|      3     |            POLEAXES           |             |" << endl;
	cout << "|      4     |           SHOP MENU           |             |" << endl;
	cout << "|==========================================================|" << endl;
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

character shopMenuSwords(character& createChar) {
	int shopMenuChoice;
	cout << "|==========================================================|" << endl;
	cout << "|                       WEAPONS MENU                       |" << endl;
	cout << "|==========================================================|" << endl;
	cout << "|            |         -------------         |    PRICE    |" << endl;
	cout << "|      1     |           OAK SWORD           |   1 SOUL    |" << endl;
	cout << "|      2     |          COPPER SWORD         |   5 SOULS   |" << endl;
	cout << "|      3     |          BRONZE SWORD         |   10 SOULS  |" << endl;
	cout << "|      4     |           IRON SWORD          |   15 SOULS  |" << endl;
	cout << "|      5     |           STEEL SWORD         |   25 SOULS  |" << endl;
	cout << "|      6     |          MITHRIL SWORD        |   50 SOULS  |" << endl;
	cout << "|      7     |           SHOP MENU           |             |" << endl;
	cout << "|==========================================================|" << endl;
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
				shopMenu(createChar);
			}
			else {
				if (swordQuality >= materials::Oak) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenu(createChar);
				}
				else {
					//Oak
					weaponChoice = weapons::sword;
					swordQuality = materials::Oak;
					weaponQuality = materials::No;
					createChar.swordWeaponQ = swordWeaponTypeF(swordQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.weaponQ = weaponTypeF(weaponQuality);
					createChar.souls = createChar.souls - 1;
					createChar.combatStats.swordAttackDamage = (static_cast<int>(swordQuality)) + (static_cast<int>(weaponChoice));
					cout << "You bought an " << createChar.swordWeaponQ << " " << createChar.weaponT <<  " for 1 soul. It has " << createChar.combatStats.swordAttackDamage << " Attack Power." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.weaponAttack = (2 * createChar.strength) + createChar.combatStats.swordAttackDamage;
					shopMenu(createChar);
				}
			}
			break;
		case 2:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenu(createChar);
			}
			else {
				if (weaponQuality == materials::Copper) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenu(createChar);
				}
				else {
					//Copper Sword
					weaponChoice = weapons::sword;
					swordQuality = materials::Copper;
					weaponQuality = materials::No;
					createChar.swordWeaponQ = swordWeaponTypeF(swordQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.weaponQ = weaponTypeF(weaponQuality);
					createChar.souls = createChar.souls - 5;
					createChar.combatStats.swordAttackDamage = (static_cast<int>(swordQuality)) + (static_cast<int>(weaponChoice));
					cout << "You bought an " << createChar.swordWeaponQ << " " << createChar.weaponT << " for 5 souls. It has " << createChar.combatStats.swordAttackDamage << " Attack Power." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.weaponAttack = (2 * createChar.strength) + createChar.combatStats.swordAttackDamage;
					shopMenu(createChar);
				}
			}
			break;
		case 3:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenu(createChar);
			}
			else {
				if (swordQuality >= 5) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenu(createChar);
				}
				else {
					//Bronze
					weaponChoice = weapons::sword;
					swordQuality = materials::Bronze;
					weaponQuality = materials::No;
					createChar.swordWeaponQ = swordWeaponTypeF(swordQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.weaponQ = weaponTypeF(weaponQuality);
					createChar.souls = createChar.souls - 10;
					createChar.combatStats.swordAttackDamage = (static_cast<int>(swordQuality)) + (static_cast<int>(weaponChoice));
					cout << "You bought an " << createChar.swordWeaponQ << " " << createChar.weaponT << " for 10 souls. It has " << createChar.combatStats.swordAttackDamage << " Attack Power." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.weaponAttack = (2 * createChar.strength) + createChar.combatStats.swordAttackDamage;
					shopMenu(createChar);
				}
			}
			break;
		case 4:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenu(createChar);
			}
			else {
				if (swordQuality >= 6) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenu(createChar);
				}
				else {
					//Iron
					weaponChoice = weapons::sword;
					swordQuality = materials::Iron;
					weaponQuality = materials::No;
					createChar.swordWeaponQ = swordWeaponTypeF(swordQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.weaponQ = weaponTypeF(weaponQuality);
					createChar.souls = createChar.souls - 15;
					createChar.combatStats.swordAttackDamage = (static_cast<int>(swordQuality)) + (static_cast<int>(weaponChoice));
					cout << "You bought an " << createChar.swordWeaponQ << " " << createChar.weaponT << " for 15 souls. It has " << createChar.combatStats.swordAttackDamage << " Attack Power." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.weaponAttack = (2 * createChar.strength) + createChar.combatStats.swordAttackDamage;
					shopMenu(createChar);
				}
			}
			break;
		case 5:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenu(createChar);
			}
			else {
				if (swordQuality >= 7) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenu(createChar);
				}
				else {
					//Steel
					weaponChoice = weapons::sword;
					swordQuality = materials::Steel;
					weaponQuality = materials::No;
					createChar.swordWeaponQ = swordWeaponTypeF(swordQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.weaponQ = weaponTypeF(weaponQuality);
					createChar.souls = createChar.souls - 25;
					createChar.combatStats.swordAttackDamage = (static_cast<int>(swordQuality)) + (static_cast<int>(weaponChoice));
					cout << "You bought an " << createChar.swordWeaponQ << " " << createChar.weaponT << " for 25 souls. It has " << createChar.combatStats.swordAttackDamage << " Attack Power." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.weaponAttack = (2 * createChar.strength) + createChar.combatStats.swordAttackDamage;
					shopMenu(createChar);
				}
			}
			break;
		case 6:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenu(createChar);
			}
			else {
				if (swordQuality >= 10) {
					cout << "You already own a weapon of this quality." << endl;
					shopMenu(createChar);
				}
				else {
					//Mithril
					weaponChoice = weapons::sword;
					swordQuality = materials::Mithril;
					weaponQuality = materials::No;
					createChar.swordWeaponQ = swordWeaponTypeF(swordQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.weaponQ = weaponTypeF(weaponQuality);
					createChar.souls = createChar.souls - 50;
					createChar.combatStats.swordAttackDamage = (static_cast<int>(swordQuality)) + (static_cast<int>(weaponChoice));
					cout << "You bought an " << createChar.swordWeaponQ << " " << createChar.weaponT << " for 50 souls. It has " << createChar.combatStats.swordAttackDamage << " Attack Power." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.weaponAttack = (2 * createChar.strength) + createChar.combatStats.swordAttackDamage;
					shopMenu(createChar);
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

character shopMenuAxes(character& createChar) {
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
					weaponQuality = materials::No;
					createChar.swordWeaponQ = swordWeaponTypeF(swordQuality);
					createChar.axeWeaponQ = axeWeaponTypeF(axeQuality);
					createChar.poleaxeWeaponQ = poleaxeWeaponTypeF(axeQuality);
					createChar.weaponT = weaponChoiceF(weaponChoice);
					createChar.weaponQ = weaponTypeF(weaponQuality);
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
					//Copper
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
	return createChar;
};

void shopMenuArmor(character& createChar) {
				int shopMenuChoice;
				cout << "|==========================================================|" << endl;
				cout << "|                        ARMOR MENU                        |" << endl;
				cout << "|==========================================================|" << endl;
				cout << "|      1     |            HELMETS            |             |" << endl;
				cout << "|      2     |           BODY ARMOR          |             |" << endl;
				cout << "|      3     |            SHEILDS            |             |" << endl;
				cout << "|      4     |           SHOP MENU           |             |" << endl;
				cout << "|==========================================================|" << endl;
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

character shopMenuHelms(character& createChar) {
	int shopMenuChoice;
	
	cout << "|==========================================================|" << endl;
	cout << "|                         HELM MENU                        |" << endl;
	cout << "|==========================================================|" << endl;
	cout << "|            |         -------------         |    PRICE    |" << endl;
	cout << "|      1     |            OAK HELM           |   1 SOUL    |" << endl;
	cout << "|      2     |           COPPER HELM         |   5 SOULS   |" << endl;
	cout << "|      3     |           BRONZE HELM         |   10 SOULS  |" << endl;
	cout << "|      4     |            IRON HELM          |   15 SOULS  |" << endl;
	cout << "|      5     |           STEEL HELM          |   25 SOULS  |" << endl;
	cout << "|      6     |           MITHRIL HELM        |   50 SOULS  |" << endl;
	cout << "|      7     |           SHOP MENU           |             |" << endl;
	cout << "|==========================================================|" << endl;
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
				shopMenu(createChar);
			}
			else {
				if (helmQuality >= materials::Oak) {
					cout << "You already own a helmet of this quality or better." << endl;
					shopMenu(createChar);
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
					shopMenu(createChar);
				}
			}
			break;
		case 2:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenu(createChar);
			}
			else {
				if (helmQuality >= materials::Copper){
					cout << "You already own a helmet of this quality or better." << endl;
					shopMenu(createChar);
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
						shopMenu(createChar);
				}
			}
			break;
		case 3:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenu(createChar);
			}
			else {
				if (helmQuality >= materials::Bronze) {
					cout << "You already own a helmet of this quality or better." << endl;
					shopMenu(createChar);
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
					shopMenu(createChar);
				}
			}
			break;

		case 4:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenu(createChar);
			}
			else {
				if (helmQuality >= materials::Iron) {
					cout << "You already own a helmet of this quality or better." << endl;
					shopMenu(createChar);
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
					shopMenu(createChar);
				}
			}
			break;
		case 5:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenu(createChar);
			}
			else {
				if (helmQuality >= materials::Steel) {
					cout << "You already own a helmet of this quality or better." << endl;
					shopMenu(createChar);
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
					shopMenu(createChar);
				}
			}
			break;
		case 6:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenu(createChar);
			}
			else {
				if (helmQuality >= materials::Mithril) {
					cout << "You already own a helmet of this quality or better." << endl;
					shopMenu(createChar);
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
					shopMenu(createChar);
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

character shopMenuBodyArmor(character& createChar) {
	int shopMenuChoice;
	cout << "|==========================================================|" << endl;
	cout << "|                      BODY ARMOR MENU                     |" << endl;
	cout << "|==========================================================|" << endl;
	cout << "|            |         -------------         |    PRICE    |" << endl;
	cout << "|      1     |         OAK BODY ARMOR        |   1 SOUL    |" << endl;
	cout << "|      2     |       COPPER BODY ARMOR       |   5 SOULS   |" << endl;
	cout << "|      3     |       BRONZE BODY ARMOR       |   10 SOULS  |" << endl;
	cout << "|      4     |        IRON BODY ARMOR        |   15 SOULS  |" << endl;
	cout << "|      5     |        STEEL BODY ARMOR       |   25 SOULS  |" << endl;
	cout << "|      6     |       MITHRIL BODY ARMOR      |   50 SOULS  |" << endl;
	cout << "|      7     |           SHOP MENU           |             |" << endl;
	cout << "|==========================================================|" << endl;
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
				shopMenu(createChar);
			}
			else {
				if (armorQuality >= materials::Oak) {
					cout << "You already own a Body Armor of this quality or better." << endl;
					shopMenu(createChar);
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
					shopMenu(createChar);
				}
			}
			break;
		case 2:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenu(createChar);
			}
			else {
				if (armorQuality >= materials::Copper) {
					cout << "You already own Body Armor of this quality or better." << endl;
					shopMenu(createChar);
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
					shopMenu(createChar);
				}
			}
			break;
		case 3:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenu(createChar);
			}
			else {
				if (armorQuality >= materials::Bronze) {
					cout << "You already own Body Armor of this quality or better." << endl;
					shopMenu(createChar);
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
					shopMenu(createChar);
				}
			}
			break;

		case 4:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenu(createChar);
			}
			else {
				if (armorQuality >= materials::Iron) {
					cout << "You already own Body Armor of this quality or better." << endl;
					shopMenu(createChar);
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
					shopMenu(createChar);
				}
			}
			break;
		case 5:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenu(createChar);
			}
			else {
				if (armorQuality >= materials::Steel) {
					cout << "You already own Body Armor of this quality or better." << endl;
					shopMenu(createChar);
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
					shopMenu(createChar);
				}
			}
			break;
		case 6:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenu(createChar);
			}
			else {
				if (armorQuality >= materials::Mithril) {
					cout << "You already own Body Armor of this quality or better." << endl;
					shopMenu(createChar);
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
					shopMenu(createChar);
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

character shopMenuSheilds(character& createChar) {
	int shopMenuChoice;

	cout << "- Sheilds Menu -" << endl;
	cout << "(1) Oak Sheild - 1 Soul" << endl;
	cout << "(2) Copper Sheild - 5 Souls" << endl;
	cout << "(3) Bronze Sheild - 10 Souls" << endl;
	cout << "(4) Iron Sheild - 15 Souls" << endl;
	cout << "(5) Steel Sheild - 25 Souls" << endl;
	cout << "(6) Mithril Sheild - 50 Souls" << endl;
	cout << "(7) Shop Menu" << endl;
	cout << "|==========================================================|" << endl;
	cout << "|                       SHEILD MENU                        |" << endl;
	cout << "|==========================================================|" << endl;
	cout << "|            |         -------------         |    PRICE    |" << endl;
	cout << "|      1     |          OAK SHEILD           |   1 SOUL    |" << endl;
	cout << "|      2     |         COPPER SHEILD         |   5 SOULS   |" << endl;
	cout << "|      3     |         BRONZE SHEILD         |   10 SOULS  |" << endl;
	cout << "|      4     |          IRON SHEILD          |   15 SOULS  |" << endl;
	cout << "|      5     |         STEEL SHEILD          |   25 SOULS  |" << endl;
	cout << "|      6     |         MITHRIL SHEILD        |   50 SOULS  |" << endl;
	cout << "|      7     |           SHOP MENU           |             |" << endl;
	cout << "|==========================================================|" << endl;
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
				shopMenu(createChar);
			}
			else {
				if (sheildQuality >= materials::Oak) {
					cout << "You already own a Sheild of this quality or better." << endl;
					shopMenu(createChar);
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
					shopMenu(createChar);
				}
			}
			break;
		case 2:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenu(createChar);
			}
			else {
				if (sheildQuality >= materials::Copper) {
					cout << "You already own a Sheild of this quality or better." << endl;
					shopMenu(createChar);
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
					shopMenu(createChar);
				}
			}
			break;
		case 3:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenu(createChar);
			}
			else {
				if (sheildQuality >= materials::Bronze) {
					cout << "You already own a Sheild of this quality or better." << endl;
					shopMenu(createChar);
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
					shopMenu(createChar);
				}
			}
			break;

		case 4:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenu(createChar);
			}
			else {
				if (sheildQuality >= materials::Iron) {
					cout << "You already own a Sheild of this quality or better." << endl;
					shopMenu(createChar);
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
					shopMenu(createChar);
				}
			}
			break;
		case 5:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenu(createChar);
			}
			else {
				if (sheildQuality >= materials::Steel) {
					cout << "You already own a Sheild of this quality or better." << endl;
					shopMenu(createChar);
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
					shopMenu(createChar);
				}
			}
			break;
		case 6:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenu(createChar);
			}
			else {
				if (sheildQuality >= materials::Mithril) {
					cout << "You already own a Sheild of this quality or better." << endl;
					shopMenu(createChar);
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
					shopMenu(createChar);
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

character shopMenuPotions(character& createChar) {
	int shopMenuChoice;

	cout << "|==========================================================|" << endl;
	cout << "|                       POTIONS MENU                       |" << endl;
	cout << "|==========================================================|" << endl;
	cout << "|            |         -------------         |    PRICE    |" << endl;
	cout << "|      1     |        EXPERIENCE POTION      |   1 SOUL    |" << endl;
	cout << "|      2     |          HEALTH POTION        |  10 SOULS   |" << endl;
	cout << "|      3     |           RAGE POTION         |   5 SOULS   |" << endl;
	cout << "|      4     |         LARGE EXP POTION      |  10 SOULS   |" << endl;
	cout << "|      5     |        FULL HEALTH POTION     |  50 SOULS   |" << endl;
	cout << "|      6     |        FULL RAGE POTION       |  25 SOULS   |" << endl;
	cout << "|      7     |           SHOP MENU           |             |" << endl;
	cout << "|==========================================================|" << endl;
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
				shopMenu(createChar);
			}
			else {
				//expPot
				createChar.souls = createChar.souls - 50;
				cout << "You bought an Experience Potion granting 500 experience for 50 souls." << endl;
				cout << "You have " << createChar.souls << " remaining." << endl;
				createChar.expChar += 500;
				levelUpCheck(createChar);
				shopMenu(createChar);
			}
			break;
		case 2:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenu(createChar);
			}
			else {
				if (createChar.health >= createChar.HPTOTAL) {
					cout << "Health already at max. " << createChar.health << " / " << createChar.HPTOTAL << endl;
					shopMenu(createChar);
				}
				else {
					//HealthPot
					createChar.souls = createChar.souls - 1;
					cout << "You bought a Health Potion granting 10 Health for 1 soul." << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					createChar.combatStats.totalHealthDamage -= 10;
					createChar.health = createChar.HPTOTAL - createChar.combatStats.totalHealthDamage;
					if (createChar.health > createChar.HPTOTAL) {
						createChar.health = createChar.HPTOTAL;
					}
					if (createChar.combatStats.totalHealthDamage > createChar.HPTOTAL) {
						createChar.combatStats.totalHealthDamage = createChar.HPTOTAL;
					}
					shopMenu(createChar);
				}
			}
				break;
		case 3:
			if (createChar.souls == 0) {
				cout << "You do not have enough for this purchace." << endl;
				shopMenu(createChar);
			}
			else {
				if (createChar.combatStats.rageUsed == 0) {
						cout << "Rage already at max. " << createChar.rage << " / " << createChar.RAGETOTAL << endl;
					shopMenu(createChar);
				}
				else {
					//RAGEPot
					createChar.souls = createChar.souls - 5;
					createChar.combatStats.rageUsed -= 50;
					createChar.rage = createChar.RAGETOTAL - createChar.combatStats.rageUsed;

					cout << "You bought a Rage Potion granting 50 Rage for 5 souls. " << createChar.rage << " / " << createChar.RAGETOTAL << endl;
					cout << "You have " << createChar.souls << " remaining." << endl;
					shopMenu(createChar);
					break;
				}
			}
		case 4:
			shopMenu(createChar);
			break;
		case 5:
			shopMenu(createChar);
			break;
		case 6:
			shopMenu(createChar);
			break;
		case 7:
			shopMenu(createChar);
			break;
			}
			return createChar;
		}
};