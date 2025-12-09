#include <iostream>
#include "Zombie.hpp"


int main()
{
    Zombie* new_zombie1;
    Zombie* new_zombie2;
    new_zombie1 = newZombie("Abdo");
    new_zombie1->announce();
    new_zombie2 = newZombie("simo");
    new_zombie2->announce();
    randomChump("Foo");
    delete(new_zombie1);
}