#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::~Zombie()
{
    std::cout << "the objects are destroyed\n";
}

void Zombie::announce(void)
{
    std::cout << name << " : BraiiiiiiinnnzzzZ...\n";
}
void Zombie::setname(std::string s)
{
    name = s;
}