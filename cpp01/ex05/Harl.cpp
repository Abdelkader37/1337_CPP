#include "Harl.hpp"

Harl::Harl(){}Harl::~Harl(){}

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
                "enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
                 "years, whereas you started working here just last month.\n";
}

void  Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{
    if(level.size() == 1 && isdigit(level[0]))
    {
    int idx = level[0] - 48;
        if(idx >= 0 && idx < 4)
        {
            void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
            (this->*f[idx])();
            return;
        }
    }
    std::cerr << "Invalid level\n";
}