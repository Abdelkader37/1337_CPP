#pragma once
#include <iostream>
class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string darkest_secret;
		std::string	phone_number;
	public:
		void		set_first_name(std::string s);
		void		set_lastname(std::string s);
		void		set_nickname(std::string s);
		void		set_darkestsecret(std::string s);
		bool		set_phone_number(std::string s);
		std::string get_phone_number();
		std::string get_first_name();
		std::string get_lastname();
		std::string get_nickname();
		std::string get_darkestsecret();
};
