#pragma once

#include <string>

namespace TerminalFight
{
    class Weapon
    {
        public:
            Weapon();
            Weapon(std::string name, std::string description, int damage);

        public:
            std::string get_name();
            std::string get_description();
            int get_damage();
            std::string to_string();

        private:
            std::string name = "";
            std::string description = "";
            int damage = 0;
    };
};