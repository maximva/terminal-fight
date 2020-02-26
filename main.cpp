#include <iostream>
#include "./src/fighter.h"
#include "./src/weapon.h"

using namespace TerminalFight;

int main()
{

    Fighter tom("Tom");
    Weapon kitchenKnife("Kitchen Knife", "Straight from domestic violence to Terminal Fight, the humble Kitchen Knife is a stealth killer.", 46);
    tom.equip(kitchenKnife);

    Fighter franky("Franky");
    Weapon bluntObject("Blunt Object", "Unknown object with a blunt end", 34);
    franky.equip(bluntObject);

    std::cout << "Tom has " + std::to_string(tom.getHealth()) + " health."  << std::endl;
    std::cout << "Franky has " + std::to_string(franky.getHealth()) + " health." << std::endl;

    while (tom.getHealth() > 0 && franky.getHealth() > 0 ) {
        std::cout << tom.fight(franky) << std::endl;
    }

    std::string loserName = (tom.getHealth() == 0) ? "Tom lost." : "Franky lost.";
    std::cout << loserName << std::endl;

    return 0;
}