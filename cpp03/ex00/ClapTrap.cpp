#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):_name(name), _hit_points(10),
                                    _energy_points(10), _attack_damage(0)
{
    std::cout << "ClapTrap " << _name << " created" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " is destroyed" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "copy constructor called" << std::endl;
    *this = copy;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    std::cout << "Copy Assignment Operator called" << std::endl;
    if (this != &copy)
    {
        _name = copy._name;
    _energy_points = copy._energy_points;
    _hit_points = copy._hit_points;
    _attack_damage = copy._attack_damage;
    }
    return(*this);
}
void ClapTrap::attack(const std::string& target)
{
    if(_energy_points > 0 && _hit_points > 0)
    {
    std::cout<<"ClapTrap "<< _name<<" attacks "<<target
    <<" causing "<<_attack_damage<< " points of damage!\n";
        _energy_points--;
    }
    else
        std::cout << _name << ": can't attack\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hit_points == 0) {
        std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
        return;
    }
    if(amount >= _hit_points)
    {  
        std::cout<< "ClapTrap " << _name << " lost all his hit points\n";
        _hit_points = 0;
    }
    else
    {    
        std::cout<< "ClapTrap " << _name << " lost " << amount << "hit points\n";
        _hit_points -= amount;    
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(_hit_points == 0 || _energy_points == 0)
    {      
        std::cout<< "ClapTrap " << _name << " can't beRepaired\n";
        return;
    }
    else
    {
        std::cout<< "ClapTrap " << _name << " add " << amount << " to his hit points\n";
        _energy_points--;
        _hit_points += amount;
    }
}