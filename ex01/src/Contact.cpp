/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 17:58:55 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/13 17:58:56 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(): _firstName(""), _lastName(""),
_nickName(""), _darkestSecret(""), _phoneNumber(0){}

Contact::~Contact(){}

void Contact::display() const{
	const int columnWidth = 10;

	std::string truncatedFirstName = _firstName.length() > columnWidth ? 
	_firstName.substr(0, columnWidth - 1) + "." : _firstName;
	std::string truncatedLastName = _lastName.length() > columnWidth ? 
	_lastName.substr(0, columnWidth - 1) + "." : _lastName;
	std::string truncatedNickName = _nickName.length() > columnWidth ? 
	_nickName.substr(0, columnWidth - 1) + "." : _nickName;
	
	std::cout << std::right << 
	std::setw(columnWidth) << _index
	<< "|" << std::setw(columnWidth) << truncatedFirstName
	<< "|" << std::setw(columnWidth) << truncatedLastName
	<< "|" << std::setw(columnWidth) << truncatedNickName
	<< std::endl;
}

void Contact::displayHeader() const{
	std::cout << std::endl << std::right 
	<< BOLD "     index" RESET << "|" 
	<< BOLD "First Name" RESET << "|" 
	<< BOLD " Last Name" RESET << "|" 
	<< BOLD " Nick Name" RESET << std::endl;
}

void Contact::printContact() const{
	std::cout << std::endl 
	<< BOLD "Index -\t\t\t" RESET << _index 
	<< BOLD "\nFirst Name -\t\t" RESET << _firstName 
	<< BOLD "\nLast Name -\t\t" RESET << _lastName 
	<< BOLD "\nNick Name -\t\t" RESET << _nickName 
	<< BOLD "\nPhone Number -\t\t" RESET << _phoneNumber 
	<< BOLD "\nDarkest Secret -\t" RESET << _darkestSecret
	<< std::endl<< std::endl;	
}

void Contact::changeTabs(std::string& in)
{
	for (size_t i = 0; in[i]; i++)
	{
		if (in[i] == 9)
			in[i] = ' ';
	}
}

void Contact::setFirstName(const std::string& fName) {
	_firstName = fName;
}

void Contact::setLastName(const std::string& lName) {
	_lastName = lName;
}

void Contact::setNickName(const std::string& nName) {
	_nickName = nName;
}

void Contact::setDarkestSecret(const std::string& dSecret) {
	_darkestSecret = dSecret;
}

void Contact::setPhoneNumber(const int pN) {
	_phoneNumber = pN;
}

void Contact::setIndex(const int ind) {
	_index = ind;
}
