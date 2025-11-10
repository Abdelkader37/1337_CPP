
#include <iostream>

int main(int ac, char **av)
{
    
    if(ac <= 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for(int i = 1; av[i]; i++)
        {  
            std::string s = av[i];
            for(long unsigned int j = 0; j < s.size(); j++)
                std::cout << static_cast<char>std::(toupper(s[j]));
        }
    }
    std::cout << "\n";
    return 0;
}