#include "Dog.hpp"


Dog::Dog():Animal()
{
    std::cout << "Dog default constructor called" << std::endl;
    type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}
Dog::Dog(const Dog &copy):Animal(copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
}
Dog &Dog::operator=(const Dog &copy)
{
    Animal::operator=(copy);
    std::cout << "Dog copy assignment operator called" << std::endl;
    return(*this);
}

void Dog::makeSound()const
{
    std::cout << "Woof\n";
}