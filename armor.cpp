#include "includes.h"

using namespace std;

string armorTypeF(materials armorQuality) {
    map<materials, string> MaterialToStringMap{
            {materials::No, "No"},
            {materials::Basic, "Basic"},
            {materials::Oak, "Oak"},
            {materials::Copper, "Copper"},
            {materials::Bronze, "Bronze"},
            {materials::Iron, "Iron"},
            {materials::Steel, "Steel"},
            {materials::Mithril, "Mithril"},
    };
    return MaterialToStringMap[armorQuality];
}

string helmTypeF(materials helmQuality) {
    map<materials, string> MaterialToStringMap{
            {materials::No, "No"},
            {materials::Basic, "Basic"},
            {materials::Oak, "Oak"},
            {materials::Copper, "Copper"},
            {materials::Bronze, "Bronze"},
            {materials::Iron, "Iron"},
            {materials::Steel, "Steel"},
            {materials::Mithril, "Mithril"},
    };
    return MaterialToStringMap[helmQuality];
}

string sheildTypeF(materials sheildQuality) {
    map<materials, string> MaterialToStringMap{
            {materials::No, "No"},
            {materials::Basic, "Basic"},
            {materials::Oak, "Oak"},
            {materials::Copper, "Copper"},
            {materials::Bronze, "Bronze"},
            {materials::Iron, "Iron"},
            {materials::Steel, "Steel"},
            {materials::Mithril, "Mithril"},
    };
    return MaterialToStringMap[sheildQuality];
}