#include "Zombie.hpp"


void    Zombie::announce(void)
{
    if(this->name == "Foo")
        std::cout  << this->name << ": BraiiiiiiinnnzzzZ...\n";
    else
        std::cout << "<" << this->name << ">: BraiiiiiiinnnzzzZ...\n";
}

// Zombie::Zombie(std::string str):name(str)
// {} ;

// Zombie::~Zombie(void)
// {
//     std::cout << this->name << " is destroyed\n";
// }