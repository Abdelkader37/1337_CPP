#include "Fixed.hpp"

Fixed::Fixed(): _value(0){}
Fixed::Fixed(const int nbr)
{
    _value = nbr << _fractionalBits;
}
Fixed::Fixed(const float nbr)
{
    _value = roundf(nbr * (1 << _fractionalBits));
}
Fixed::Fixed(const Fixed &copy)
{
   *this = copy;
}

Fixed &Fixed::operator=(const Fixed &src)
{
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

Fixed::~Fixed(){}
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
Fixed Fixed::operator+(const Fixed &obj)
{
    return(Fixed(this->toFloat() + obj.toFloat()));
}
Fixed Fixed::operator-(const Fixed &obj)
{
    return(Fixed(this->toFloat() - obj.toFloat()));
}
Fixed Fixed::operator*(const Fixed &obj)
{
    return(Fixed(this->toFloat() * obj.toFloat()));
}
Fixed Fixed::operator/(const Fixed &obj)
{
    return(Fixed(this->toFloat() / obj.toFloat()));
}
bool Fixed::operator>=(const Fixed &obj)const
{
    return(this->toFloat() >= obj.toFloat());
}
bool Fixed::operator==(const Fixed &obj)const
{
    return(this->toFloat() == obj.toFloat());
}
bool Fixed::operator!=(const Fixed &obj)const
{
    return(this->toFloat() != obj.toFloat());
}
bool Fixed::operator<=(const Fixed &obj)const
{
    return(this->toFloat() <= obj.toFloat());
}
bool Fixed::operator<(const Fixed &obj)const
{
    return(this->toFloat() < obj.toFloat());
}
bool Fixed::operator>(const Fixed &obj) const
{
    return(this->toFloat() > obj.toFloat());
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if(a > b)
        return(a);
    else 
        return(b);
}
const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if(a < b)
        return(a);
    else 
        return(b);
}
 Fixed &Fixed::max( Fixed &a,  Fixed &b)
{
    if(a > b)
        return(a);
    else 
        return(b);
}
 Fixed &Fixed::min( Fixed &a,  Fixed &b)
{
    if(a < b)
        return(a);
    else 
        return(b);
}

Fixed &Fixed::operator++()
{
    _value++;
    return(*this);
}
Fixed &Fixed::operator--()
{
    _value--;
    return(*this);
}
Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    _value++;
    return(tmp);
}
Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    _value--;
    return(tmp);
}