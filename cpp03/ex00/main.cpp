#include "ClapTrap.hpp"

int main() 
{
  
    ClapTrap clap("CL4P");
    ClapTrap trap("Enemy");
    ClapTrap clone(clap);
    clap.attack("Enemy");
    trap.takeDamage(0); 
    clap.beRepaired(5);
    for (int i = 0; i < 9; i++) {
        std::cout << "[" << i + 1 << "] ";
        clap.attack("a vault hunter");
    }
    trap.takeDamage(10);
    trap.attack("CL4P-TP");    
    trap.beRepaired(5);      
    ClapTrap assignTest("Temporary");
    assignTest = clap;        
    assignTest.attack("Target");

    return 0;
}