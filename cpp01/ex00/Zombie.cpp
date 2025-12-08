#include "Zombie.hpp"


void    Zombie::announce(void)
{
    if(this->name == "Foo")
        std::cout  << this->name << ": BraiiiiiiinnnzzzZ...";   
    std::cout << "<" << this->name << ">: BraiiiiiiinnnzzzZ...";
}

Zombie::Zombie(std::string str):name(str)
{} ;

Zombie::~Zombie(void)
{
    std::cout << this->name << "is destroyed\n";
}