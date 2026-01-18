#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor called"<< std::endl;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal default destructor called"<< std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
    std::cout << "WrongAnimal copy assignment operator called" << std::endl;
    if(this != &copy)
    {
        this->type = copy.type;
    }
    return(*this);
}
void WrongAnimal::makeSound()const
{
    std::cout << "Wrong sound ...\n";
}

std::string WrongAnimal::getType()const
{
    return(type);
}