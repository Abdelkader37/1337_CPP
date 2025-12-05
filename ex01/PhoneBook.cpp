#pragma once

#include "Contact.hpp"

class Phonebook
{
    private:
       Contact contact[8];
       int idx;
       int cnt;
    public:
        void    add();
        void    search();
        void    exit();       
}
