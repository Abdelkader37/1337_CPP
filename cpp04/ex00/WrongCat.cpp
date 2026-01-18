#include "WrongCat.hpp"


WrongCat::WrongCat():WrongAnimal()
{
    std::cout << "WrongCat default constructor called" << std::endl;
    type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}
WrongCat::WrongCat(const WrongCat &copy):WrongAnimal(copy)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
}
WrongCat &WrongCat::operator=(const WrongCat &copy)
{
    WrongAnimal::operator=(copy);
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    return(*this);
}
void WrongCat::makeSound()const
{
    std::cout << "Meaw\n";
}