#include "header.hpp"


int main()
{
    Phonebook  phonebook;
    std::string buffer;
    phonebook.setint(0,0);
    std::cout <<
    "======================================================================================\n"
    "OOOOOO   OO    OO  OOOOOOO   OO      OO OOOOO OOOOOO    OOOOOOO    OOOOOOO   OO    OO\n"
    "OO   OO  OO    OO OO     OO  OOOO    OO OO    OO    O  OO     OO  OO     OO  OO   OO\n"
    "OO   OO  OOOOOOOO OO     OO  OO OO   OO OOOOO Oooooo   OO     OO  OO     OO  OO  OO\n"
    "OOOOOO   OO    OO OO     OO  OO  OO  OO OOOOO Oooooo   OO     OO  OO     OO  OOOOO\n"
    "OO       OO    OO OO     OO  OO   OO OO OO    OO    O  OO     OO  OO     OO  OO  OO\n"
    "OO       OO    OO  OOOOOOO   OO    OOOO OOOOO OOOOOO    OOOOOOO    OOOOOOO   OO   OO\n"
    "======================================================================================\n";
    while (1)
    {
        std::cout << "Enter your command (ADD, SEARCH, EXIT): " << std::endl;
        if(!std::getline(std::cin, buffer))
            break;
        if(buffer.empty())
        {   
            std::cout <<    
            "=============== [   ERROR  ]=======\n"
            "|   You entered an empty cmd!     |\n"
            "===================================\n";
            continue;
        }
        else if  (buffer == "ADD")
         {  if(!phonebook.add())
                return(1);}
        else if (buffer == "SEARCH")
        {   if(!phonebook.search())
                return(1);
        }
        else if(buffer == "EXIT")
            break;
        else
            std::cout << 
            "========== [   ERROR  ]=======\n"
            "|   WRONG CMD TRY AGAING!!   |\n"
            "==============================\n";
    }
}

void    ft_substr(const std::string &str)
{
    int size = str.size();
    if(size == 10)
    {  
        std::cout<< str;
        std::cout  << "|";
        return;
    }
    for(int i = 0 ; i < 10 - size ; i++)
    {
        std::cout << ' ';
    }
    std::cout << str.substr(0,9);
    if(str.size()>=10)
        std::cout << ".";
    std::cout  << "|";
}