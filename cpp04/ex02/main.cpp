#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"


int main()
{
    const Animal* j = new Dog;
    const Animal* i = new Cat;

    std::cout << "J is a: " << j->getType() << std::endl;
    std::cout << "I is a: " << i->getType() << std::endl;

    j->makeSound();
    i->makeSound();

    delete j; 
    delete i; 

    i->makeSound();
    Animal* zoo[4];

    for (int k = 0; k < 4; k++)
    {
        std::cout << "\nCreating Animal " << k << ":" << std::endl;
        if (k < 2)
            zoo[k] = new Dog;
        else
            zoo[k] = new Cat;
    }
    for (int k = 0; k < 4; k++)
    {
        std::cout << "Deleting Animal " << k << ":" << std::endl;
        delete zoo[k];
    }

    Dog original;
    Dog copy = original; 
    Dog assigned;
    assigned = original; 
    Cat old;
    Cat neww = old; 
    Cat last;
    last = old;
    return 0;
}