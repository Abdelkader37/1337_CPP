#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    std::cout << "FragTrap default constructor called" << std::endl;
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &copy):ClapTrap(copy)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
    if (this != &copy)
        ClapTrap::operator=(copy);
    std::cout << "FragTrap Assignment copy operator called" << std::endl;
    return (*this);
}

FragTrap::~FragTrap()
{
     std::cout << "FragTrap destroyed" << std::endl;
}
void FragTrap::attack(const std::string& target)
{
    if(_energy_points > 0 && _hit_points > 0)
    {
    std::cout<<"FragTrap "<< _name<<" attacks "<<target
    <<" causing "<<_attack_damage<< " points of damage!\n";
        _energy_points--;
    }
    else
        std::cout << _name << ": can't attack\n";
}
void FragTrap::highFivesGuys(void)
{
    std::cout << "Hight five ??\n";
}