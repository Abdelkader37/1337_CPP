#pragma once
#include <iostream>
class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string darkest_secret;
		int			phone_number;
	public:
	void	set_first_name(std::string s);
	void	set_lastname(std::string s);
	void	set_nickname(std::string s);
	void	set_darkestsecret(std::string s);
	void	set_phone_number(int n);
};
