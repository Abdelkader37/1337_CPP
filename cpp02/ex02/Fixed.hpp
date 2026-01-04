#pragma once 

#include <iostream>
#include <cmath>
class Fixed 
{
    private:
        int  _value;
        static const int _fractionalBits  = 8;
    public:
        Fixed();
        Fixed(const int);
        Fixed(const float);
        Fixed(const Fixed &);
        Fixed &operator=(const Fixed &);
        Fixed operator+(const Fixed &);
        Fixed &operator++(void);
        Fixed &operator--(void);
        Fixed operator--(int);
        Fixed operator++(int);
        Fixed operator-(const Fixed &);
        Fixed operator*(const Fixed &);
        Fixed operator/(const Fixed &obj);
        bool operator>(const Fixed &)const;
        bool operator<(const Fixed &)const;
        bool operator>=(const Fixed &)const;
        bool operator<=(const Fixed &)const;
        bool operator==(const Fixed &)const;
        bool operator!=(const Fixed &)const;

        ~Fixed();
        int getRawBits(void)const;
        float toFloat(void)const;
        int toInt(void)const;
        static const Fixed &max(const Fixed &, const Fixed &);
        static const Fixed &min(const Fixed &, const Fixed &);
        static  Fixed &max( Fixed &,  Fixed &);
        static  Fixed &min( Fixed &,  Fixed &);
};

std::ostream& operator<<(std::ostream &out,  const Fixed &obj);
