#ifndef PHONEBOOK_H
#define PHONEBOOK_H

# include <iostream>
# include <cstring>
# include <string>

class PhoneBook {
	private:
		int Contacts[8];

};

class Contacts {
	public:
	

	private:
		int	index;
		int	contact;
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
};
	#endif