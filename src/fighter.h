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
            void fight(Fighter enemy);
            std::string to_string();
        
        private:
            std::string name = "";
            int health = 666;
            Weapon weapon;
    };

};