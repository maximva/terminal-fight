#pragma once

#include <string>
#include "weapon.h"

namespace TerminalFight
{

    class Fighter
    {
        public:
            Fighter();
            Fighter(std::string name);

        public:
            void equip(Weapon weapon);
            std::string fight(Fighter* enemy);
            int getHealth();
            void setHealth(int damage);
            std::string getName();
            std::string to_string();
        
        private:
            std::string name = "";
            int health = 666;
            Weapon weapon;
    };

};