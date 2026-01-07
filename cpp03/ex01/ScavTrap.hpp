#pragma once 


#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(std::string);
        ~ScavTrap();
        ScavTrap(const ScavTrap &);
        ScavTrap    &operator=(const ScavTrap &);
        void attack(const std::string& target);
        void guardGate();
};