#include "Zombie.hpp"

int main()
{
    Zombie* zombie = newZombie("ippo");
    zombie->announce();
    randomChump("bob");
    randomChump("Foo");
    delete(zombie);
}