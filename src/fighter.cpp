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

    std::string Fighter::fight(Fighter *pEnemy)
    {
        pEnemy->setHealth(this->weapon.get_damage());
        this->setHealth(pEnemy->weapon.get_damage());

        return pEnemy->getName() + "(remaining health: " + std::to_string(pEnemy->getHealth()) + ") fought " + this->getName() + "(remaining health: " + std::to_string(health) + ")";
    }

    int Fighter::getHealth()
    {
        return health;
    }

    void Fighter::setHealth(int damage)
    {
        health -= damage;
        if (health < 0) {
            health = 0;
        }
    }

    std::string Fighter::getName()
    {
        return name;
    }

    std::string Fighter::to_string()
    {
        return name + " fights with their " + weapon.get_name() + ". They will die after " + std::to_string(health) + " damage.";
    }

};