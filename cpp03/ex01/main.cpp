#include "ClapTrap.hpp"
#include "ScavTrap.hpp"



int main()
{
    ClapTrap clap("Basic-Bot");
    ScavTrap hello("another_scavy");
    ScavTrap scav("scav");
    scav = hello;

    clap.attack("a target");
    scav.attack("the same target");

    scav.takeDamage(30);
    scav.beRepaired(20);

    scav.guardGate();

    ScavTrap exhausted("Exhausted-Bot");
    for (int i = 0; i < 51; i++) {
        exhausted.attack("the air");
    }
    
    ScavTrap scavCopy(scav);
    scavCopy.attack("a new target");

    return 0;
}
    
