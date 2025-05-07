#include "Contact.hpp"

void Contact::display() const{
	const int columnWidth = 10;

	std::string truncatedFirstName = firstName.length() > columnWidth ? firstName.substr(0, columnWidth - 1) + "." : firstName;
	std::string truncatedLastName = lastName.length() > columnWidth ? lastName.substr(0, columnWidth - 1) + "." : lastName;
	std::string truncatedNickName = nickName.length() > columnWidth ? nickName.substr(0, columnWidth - 1) + "." : nickName;
	std::cout << std::setw(columnWidth) << std::right << index \
	<< "|" << std::setw(columnWidth) << std::right << truncatedFirstName \
	<< "|" << std::setw(columnWidth) << std::right << truncatedLastName \
	<< "|" << std::setw(columnWidth) << std::right << truncatedNickName << std::endl;
}

void Contact::displayHeader() const{
	const int columnWidth = 10;
	std::cout << std::setw(columnWidth) << std::right << BOLD("     Index") \
	<< "|" << std::setw(columnWidth) << std::right << BOLD("First Name") \
	<< "|" << std::setw(columnWidth) << std::right << BOLD(" Last Name") \
	<< "|" << std::setw(columnWidth) << std::right << BOLD(" Nick Name") << std::endl;	
}

void Contact::printInfo() const{
	std::cout << BOLD("Index -\t\t") << index << BOLD("\nFirst Name -\t") << firstName << BOLD("\nLast Name -\t") \
	<< lastName << BOLD("\nNick Name -\t") << nickName << std::endl;	
}
