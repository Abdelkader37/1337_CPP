
#include <iostream>



class  Contact
{
    private:
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string darkestsecret;
    int phonenumber;
    
    public:
    set_contact(std::sting &a, std::sting &b, std::sting &c, std::sting &d, int n)
    {
        firstname = a;
        lastname = b;
        nickname = c;
        darkestsecret = d;
        phonenumber = n;
    }
}

class   PhoneBook
{
    private:
    Contact contacts[8];
    int idx;
    
    public:
    add_contact()
    
}

int main()
{
    PhoneBook phoneBook;

    std::string line;
    while(1)
    {
        std::cin >> line;
        if(line == "ADD")
        {
            std::cout << "enter firstname:";
            std::cin >> 
        }
    }
}