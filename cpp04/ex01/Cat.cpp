#include "Cat.hpp"


Cat::Cat():Animal()
{
    std::cout << "Cat default constructor called" << std::endl;
    type = "Cat";
    brain = new Brain;
}

Cat::~Cat()
{
    delete(brain);
    std::cout << "Cat destructor called" << std::endl;
}
Cat::Cat(const Cat &copy):Animal(copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    brain = new Brain(*copy.brain);
}
Cat &Cat::operator=(const Cat &copy)
{
    Animal::operator=(copy);
    std::cout << "Cat copy assignment operator called" << std::endl;
    if(this != &copy)
    {
        if(brain)
            delete(brain);
        brain = new Brain(*copy.brain);
    }
    return(*this);
}
void Cat::makeSound()const
{
    std::cout << "Meaw\n";
}