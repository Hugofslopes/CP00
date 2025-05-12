#include "Contact.hpp"

Contact::Contact(){
	firstName = "";
	lastName = "";
	nickName = "";
	darkestSecret = "";
	phoneNumber = 0;
}

Contact::~Contact(){}

void Contact::display() const{
	const int columnWidth = 10;

	std::string truncatedFirstName = firstName.length() > columnWidth ? 
	firstName.substr(0, columnWidth - 1) + "." : firstName;
	std::string truncatedLastName = lastName.length() > columnWidth ? 
	lastName.substr(0, columnWidth - 1) + "." : lastName;
	std::string truncatedNickName = nickName.length() > columnWidth ? 
	nickName.substr(0, columnWidth - 1) + "." : nickName;
	
	std::cout << std::right << 
	std::setw(columnWidth) << index
	<< "|" << std::setw(columnWidth) << truncatedFirstName
	<< "|" << std::setw(columnWidth) << truncatedLastName
	<< "|" << std::setw(columnWidth) << truncatedNickName
	<< std::endl<< std::endl;
}

void Contact::displayHeader() const{
	std::cout << std::right 
	<< BOLD "     Index" RESET << "|" 
	<< BOLD "First Name" RESET << "|" 
	<< BOLD " Last Name" RESET << "|" 
	<< BOLD " Nick Name" RESET << std::endl;
}

void Contact::printContact() const{
	std::cout << BOLD "Index -\t\t\t" RESET << index 
	<< BOLD "\nFirst Name -\t\t" RESET << firstName 
	<< BOLD "\nLast Name -\t\t" RESET << lastName 
	<< BOLD "\nNick Name -\t\t" RESET << nickName 
	<< BOLD "\nPhone Number -\t\t" RESET << phoneNumber 
	<< BOLD "\nDarkest Secret -\t" RESET << darkestSecret
	<< std::endl<< std::endl;	
}

void Contact::check_input(std::string& in)
{
	for (size_t i = 0; in[i]; i++)
	{
		if (in[i] == 9)
			in[i] = ' ';
	}
}

void Contact::setFirstName(const std::string& fName) {
	firstName = fName;
}

void Contact::setLastName(const std::string& lName) {
	lastName = lName;
}

void Contact::setNickName(const std::string& nName) {
	nickName = nName;
}

void Contact::setDarkestSecret(const std::string& dSecret) {
	darkestSecret = dSecret;
}

void Contact::setPhoneNumber(const int pN) {
	phoneNumber = pN;
}

void Contact::setIndex(const int ind) {
	index = ind;
}
