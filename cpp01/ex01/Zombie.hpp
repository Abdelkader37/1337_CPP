#pragma once

#include <iostream>
class Zombie
{
    private:
        std::string name;
    public:
        // Zombie(std::string str);
        // ~Zombie();
        void    announce(void);
};

Zombie* zombieHorde( int N, std::string name );