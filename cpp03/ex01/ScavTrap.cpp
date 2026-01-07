#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap is destroyed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy):ClapTrap(copy)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
    if(this != &copy)
        ClapTrap::operator=(copy);
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    return *this;
}
void ScavTrap::attack(const std::string& target)
{
    if(_energy_points > 0 && _hit_points > 0)
    {
    std::cout<<"ScavTrap "<< _name<<" attacks "<<target
    <<" causing "<<_attack_damage<< " points of damage!\n";
        _energy_points--;
    }
    else
        std::cout << _name << ": can't attack\n";
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap "<< _name << " is now in Gate keeper mode\n";
}