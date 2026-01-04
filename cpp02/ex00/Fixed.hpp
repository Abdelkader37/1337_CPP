#pragma once 

#include <iostream>
class Fixed 
{
    private:
        int  _value;
        static const int _fractionalBits  = 8;
    public:
        Fixed();
        Fixed(const Fixed &copy);
        Fixed &operator=(const Fixed &src);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};