#include "fighter.h"

namespace TerminalFight
{

    Fighter::Fighter()
    : Fighter("anonymous player") {
        // no implementation here
    }

    Fighter::Fighter(std::string name)
    {
        this->name = name;
    }

    void Fighter::equip(Weapon weapon)
    {
        this->weapon = weapon;
    }

    void Fighter::fight(Fighter enemy)
    {
        
    }

    std::string Fighter::to_string()
    {
        return name + " fights with their " + weapon.get_name() + ". They will die after " + std::to_string(health) + " damage.";
    }

};