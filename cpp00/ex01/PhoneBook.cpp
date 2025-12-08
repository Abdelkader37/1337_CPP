#include "header.hpp"


void Phonebook::setint(int cnt, int idx)
{
    this->cnt = 0;
    this->idx = 0;
}  

int Phonebook::add()
{
    std::cout << "================[ ADD ]================\n";
    std::string buffer;
    const std::string prompts[5] = 
    {
    "Enter First Name: ",
    "Enter Last Name: ",
    "Enter Nickname: ",
    "Enter Phone Number: ",
    "Enter Darkest Secret: "
    };
    int i = 0;
    
    while (i < 5)
    {
        std::cout << prompts[i] << std::endl;
        if(!std::getline(std::cin, buffer))
            return(0);
        if(buffer.empty())
        {
            std::cout << "======[ Try agin!! ]========\n\n";
            continue;
        }
        else if(std::cin.fail() || std::cin.eof())
            return(0);
        else
        {
            switch(i)
            {
                case 0:
                    Phonebook::contact[this->idx].set_first_name(buffer);
                    break;
                case 1:
                    Phonebook::contact[this->idx].set_lastname(buffer);
                    break;
                case 2:
                    Phonebook::contact[this->idx].set_nickname(buffer);
                    break;
                case 3:
                   if(!Phonebook::contact[this->idx].set_phone_number(buffer))
                    {   std::cout <<"=============[ ERROR]===========\n" 
                                    "| Invalid number try agin!!    |\n" 
                                    "================================\n";
                        continue;
                    }
                    break;
                case 4:
                    Phonebook::contact[this->idx].set_darkestsecret(buffer);
                    break;
            }
            i++;
        }
    }
    this->cnt++;
    this->idx = this->cnt % 8;
    std::cout << "========= Contact added successfully ==========\n\n";
    return(1);
}

int Phonebook::search()
{
    if(this->cnt == 0)
    {
        std::cout <<    
            "=============== [   ERROR  ]============\n"
            "|  No Contact found try (ADD)          |\n"
            "========================================\n";
        return(1);
    }
    std::string buffer;
    std::cout << "--------------------------------------------\n"
                "|   idx    |first name| last name| nickname |\n"
                 "--------------------------------------------\n";
    for(int i = 0; i < 8; i++)
    {
       std::cout << "|         " << i + 1 << "|";
       if(i < this->cnt)
       {
          ft_substr(Phonebook::contact[i].get_first_name());
          ft_substr(Phonebook::contact[i].get_lastname());
          ft_substr(Phonebook::contact[i].get_nickname());
          std::cout << " \n" << "--------------------------------------------\n";
        }
       else
        std::cout << " _________| _________| _________|\n"
                    "--------------------------------------------\n";
    }
    while (1)
    {
        std::cout << "Enter Index between ('1' and '8'): \n";
        if(!std::getline(std::cin, buffer))
            return(0);
        if(buffer.empty())
            continue;
        if(buffer.size() == 1)
        {
            int idx = std::stoi(buffer);
            if((idx >= 1 && idx < 9))
            {    
                if(idx > this->cnt && idx > this->idx)
                { 
                    std::cout << "======== [   ERROR  ]======\n"
                                 "| Contact Is Empty!       |\n"
                                 "===========================\n"; 
                    continue;
                }
                std::cout << "First name: "<< Phonebook::contact[idx - 1].get_first_name() << "\n";
                std::cout << "Last name: "<< Phonebook::contact[idx - 1].get_lastname() << "\n";
                std::cout << "Nickname: " << Phonebook::contact[idx - 1].get_nickname() << "\n";
                std::cout << "Phone number: " <<Phonebook::contact[idx - 1].get_phone_number() << "\n";
                std::cout << "Darkest secret: " << Phonebook::contact[idx - 1].get_darkestsecret() << "\n";
                return(1);
            }
        }
        }
    }
    

