#pragma once
#ifndef  WARRIOR_RUMBLE_MAIN_H
#define WARRIOR_RUMBLE_MAIN_H

using namespace std;
const string pError = "Incorrect entry - Please try again.";
enum attacks {Slash, Jab, Heavy};
enum armor {noAmor = 1, helm = 3, bodyArmor = 5, sheild = 4};
/* Materials Structure */

enum materials {No = 0, Basic = 1, Oak = 3, Copper = 4, Bronze = 5, Iron = 6, Steel = 7, Mithril = 10 };

/* Weapon Structure */
enum weapons { sword = 3, poleaxe = 4, axe = 3, unarmed = 1 };
#endif 
