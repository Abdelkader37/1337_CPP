#pragma once

#include "ScavTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap &);
        ~FragTrap();
        FragTrap &operator=(const FragTrap &);
        void attack(const std::string& target);
        void highFivesGuys(void);
};