#include "Zombie.hpp"

Zombie::Zombie(std::string s): name(s){}

Zombie::~Zombie()
{
    std::cout << name << " is destroyed\n";
}

void Zombie::announce(void)
{
    std::cout << Zombie::name << " : BraiiiiiiinnnzzzZ...\n";
}