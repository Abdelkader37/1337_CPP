#include "Fixed.hpp"

Fixed::Fixed(): _value(0)
{
    std::cout << "Default constructor called" << std::endl;;
}
Fixed::Fixed(const int nbr)
{
    std::cout << "Int constructor called" << std::endl;
    _value = nbr << _fractionalBits;
}
Fixed::Fixed(const float nbr)
{
    std::cout << "Float constructor called" << std::endl;
    _value = roundf(nbr * (1 << _fractionalBits));
}
Fixed::Fixed(const Fixed &copy)
{
   std::cout << "Copy constructor called" << std::endl;; 
   *this = copy;
}

Fixed &Fixed::operator=(const Fixed &src)
{
    std::cout << "Copy assignment operator called" << std::endl;;
    if(this != &src)
    {
        this->_value = src.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits( void ) const
{
    return(_value);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;;
}
float Fixed::toFloat( void ) const
{
    return ((float)(_value )/ (1 << _fractionalBits));
}
int Fixed::toInt( void ) const
{
    return((_value >> _fractionalBits));
}
std::ostream& operator<<(std::ostream &out, const Fixed &obj)
{
    out << obj.toFloat();
    return(out);
}