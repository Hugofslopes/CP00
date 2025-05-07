#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>
# include "Colors.hpp"
#include <iomanip>

class Contact {

	public:
		int	index;
		Contact(){}
		Contact(std::string fN, std::string lN, std::string	nN){
			firstName = fN;
			lastName = lN;
			nickName = nN;
		}
	
		void display() const;
		void displayHeader() const;
		void printInfo() const;

	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
};
#endif