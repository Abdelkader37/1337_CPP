#include "Cat.hpp"


Cat::Cat():Animal()
{
    std::cout << "Cat default constructor called" << std::endl;
    type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}
Cat::Cat(const Cat &copy):Animal(copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
}
Cat &Cat::operator=(const Cat &copy)
{
    Animal::operator=(copy);
    std::cout << "Cat copy assignment operator called" << std::endl;
    return(*this);
}
void Cat::makeSound()const
{
    std::cout << "Meaw\n";
}