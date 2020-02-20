#include <iostream>
#include "./src/fighter.h"
#include "./src/weapon.h"

using namespace TerminalFight;

int main()
{

    Fighter tom("Tom");
    Weapon kitchenKnife("Kitchen Knife", "Straight from domestic violence to Terminal Fight, the humble Kitchen Knife is a stealth killer.", 23);
    tom.equip(kitchenKnife);

    Fighter franky("Franky");
    Weapon bluntObject("Blunt Object", "Unknown object with a blunt end", 17);
    franky.equip(bluntObject);


    std::cout << tom.to_string() << std::endl;
    std::cout << kitchenKnife.to_string() << std::endl;

    std::cout << "\n" << franky.to_string() << std::endl;
    std::cout << bluntObject.to_string() << std::endl;

    return 0;
}