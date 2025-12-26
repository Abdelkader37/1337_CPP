#include "Zombie.hpp"

int main()
{
    int n = 5;
    Zombie* ippo = zombieHorde(n, "ippo");
    for(int  i = 0; i < n ; i++)
    {
        ippo[i].announce();
    }
    delete[] ippo;

    n = -1;
    Zombie* ippo2 = zombieHorde(n, "ippo2");
    for(int  i = 0; i < n ; i++)
    {
        ippo2[i].announce();
    }
    delete[] ippo2;
}