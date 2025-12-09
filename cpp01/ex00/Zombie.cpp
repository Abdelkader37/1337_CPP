#include "Zombie.hpp"


void    Zombie::announce(void)
{
    if(name == "Foo")
        std::cout  << name << ": BraiiiiiiinnnzzzZ...\n";
    else
        std::cout << "<" << name << ">: BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(std::string str):name(str)
{} ;

Zombie::~Zombie(void)
{
    std::cout << name << " is destroyed\n";
}