

#pragma once

#include "header.hpp"


class Phonebook
{
    private:
       Contact contact[8];
       int idx;
       int cnt;
    public:
        int   add();
        int    search(); 
        void setint(int cnt, int idx);    
};