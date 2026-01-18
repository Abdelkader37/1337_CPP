#include "Animal.hpp"

Animal::Animal():type("animal")
{
    std::cout << "Animal default constructor called"<< std::endl;
}
Animal::~Animal()
{
    std::cout << "Animal default destructor called"<< std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
}

Animal &Animal::operator=(const Animal &copy)
{
    std::cout << "Animal copy assignment operator called" << std::endl;
    if(this != &copy)
    {
        this->type = copy.type;
    }
    return(*this);
}
std::string Animal::getType()const
{
    return(type);
}