#include "weapon.h"

#include <string>

namespace TerminalFight
{

    Weapon::Weapon()
    : Weapon("Bare Hands", "A Raw Catfight Style Weapon", 9) {
        // no implementation here
    }

    Weapon::Weapon(std::string name, std::string description, int damage)
    {
        this->name = name;
        this->description = description;
        this-> damage = damage;
    }

    std::string Weapon::get_name()
    {
        return name;
    }

    std::string Weapon::get_description()
    {
        return description;
    }

    int Weapon::get_damage()
    {
        return damage;
    }

    std::string Weapon::to_string()
    {
        return "A fighter can use their " + name + " to deal " + std::to_string(damage) + " damage. (" + description + ")";
    }

};