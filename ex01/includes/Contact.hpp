#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include "Colors.hpp"

class Contact {
	public:
		int	index;
		Contact(){}
		Contact(std::string fN, std::string lN, std::string	nN,
		std::string dS, int pH);

		void display() const;
		void displayHeader() const;
		void printInfo() const;

	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	darkestSecret;
		int phoneNumber;
};
#endif