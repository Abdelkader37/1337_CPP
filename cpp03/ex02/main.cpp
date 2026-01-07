#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap clap("Clappy");
    FragTrap frag("Fragger");

    clap.attack("a training dummy");
    frag.attack("a training dummy");

    frag.highFivesGuys();

    frag.takeDamage(99);
    frag.beRepaired(50);
    
    FragTrap deadBot("Deadman");
    deadBot.takeDamage(200);
    deadBot.attack("the air");
    deadBot.highFivesGuys();


    FragTrap original("Original");
    FragTrap clone("Clone");
    
    clone = original;
    FragTrap copy(clone); 

    return 0;
}  
