
#include "header.hpp"


void	Contact::set_first_name(std::string s)
{
	this->first_name = s;
}
void	Contact::set_lastname(std::string s)
{
	this->last_name = s;
}
void	Contact::set_nickname(std::string s)
{
	this->nickname = s;
}
void	Contact::set_darkestsecret(std::string s)
{
	this->darkest_secret= s;
}
bool	Contact::set_phone_number(std::string s)
{
	for(int i = 0; i < s.size(); i++)
	{
		if(!isdigit(s[i]))
			return(0);
	}
	this->phone_number = s;
	return(1);
}

std::string Contact::get_first_name()
{
	return(this->first_name);
}
std::string Contact::get_lastname()
{
	return(this->last_name);
}
std::string Contact::get_nickname()
{
	return(this->nickname);
}
std::string Contact::get_darkestsecret()
{
	return(this->darkest_secret);
}
std::string Contact::get_phone_number()
{
	return(this->phone_number);
}