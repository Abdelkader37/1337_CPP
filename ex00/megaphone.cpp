#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    if(ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else
    {
        for(int i = 1; av[i]; i++)
        {
            std::string s = av[i];
            for(int j = 0; j < s.size() ; j++)
            {
                std::cout << static_cast<char>(toupper(av[i][j]));
            }
        }
        std::cout << "\n";
    }
}