/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:44:50 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/13 18:13:04 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

size_t PhoneBook::_count = 0;
size_t PhoneBook::_nrContacts = 0;

PhoneBook::PhoneBook() {
	for (size_t i = 0; i < 8; i++) {
		_contacts[i] = Contact();
		_contacts[i].setIndex(-1);
    }
}

PhoneBook::~PhoneBook(){} 

void PhoneBook::setContact(const Contact& contact) {
	_nrContacts++;
	if (_count < 8){
		_contacts[_count] = contact;
		_contacts[_count].setIndex(_count);
		_count++;
	}
	else{
		_count = 0;
		_contacts[_count] = contact;
		_contacts[_count].setIndex(_count);
		_count++;
	}
}

void PhoneBook::printContacts() const {
	size_t j = _nrContacts > 7 ? 8 : _nrContacts;
	for (size_t i = 0; i < j; i++)
	{
		if (i == 0)
			_contacts[i].displayHeader(); 
		_contacts[i].display(); 
	}
	std::cout << std::endl;
}

int PhoneBook::getNrContacts()const{
	return(_nrContacts);
}

bool check_str(std::string str)
{
	size_t i = 0; 
	
	while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
		i++;
	if (str[i])
		return (true);
	return (false);
}

std::string get_string() {
    std::string str;
    while (true) {
        if (!std::getline(std::cin, str)) {
            std::cout << std::endl;
            exit (1); 
        }
        if (check_str(str))
			return(str);
		else {
			std::cerr << YELLOW BOLD << 
			"Input cannot be empty or whitespace only. Please enter again:" 
			<< RESET << std::endl << std::endl;
		}
    }
}

int getValidPN(){
	bool validInput = false;
	int pN;
	
	while (!validInput) {
		std::cout << "Enter the contact " << BOLD "Phone Number" RESET << " :"<< std::endl;
		std::cin >> pN;
		if (std::cin.eof()) {
			exit(1) ;
		}
		else if (std::cin.fail() || pN > 999999999 || pN < 111111111) {
			validInput = false;
			std::cerr << std::endl << YELLOW BOLD "Invalid input. Please enter a valid phone number." RESET 
			<< std::endl << std::endl ;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else {
			validInput = true;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
	return (pN);
}

void PhoneBook::addContacts(){
	Contact n_contact;
	std::string fN, lN,nN, dS;
	int pN;

	std::cout << std::endl << "Enter the contact " << BOLD "First Name" RESET << " :" << std::endl;
	fN = get_string();
	n_contact.changeTabs(fN);
	n_contact.setFirstName(fN);
	std::cout << std::endl;;

	std::cout << "Enter the contact " << BOLD "Last Name" RESET << " :" << std::endl;
	lN = get_string();
	n_contact.changeTabs(lN);
	n_contact.setLastName(lN);
	std::cout << std::endl;;

	std::cout << "Enter the contact "<< BOLD "Nick Name" RESET << " :" << std::endl;
	nN = get_string();
	n_contact.changeTabs(nN);
	n_contact.setNickName(nN);
	std::cout << std::endl;;

	pN = getValidPN();
	n_contact.setPhoneNumber(pN);
	std::cout << std::endl;;

	std::cout << "Enter the contact "<< BOLD "Darkest Secret" RESET << " :" << std::endl;
	dS = get_string();
	n_contact.changeTabs(dS);
	n_contact.setDarkestSecret(dS);

	std::cout << std::endl;
	setContact(n_contact);
}

void PhoneBook::displayCtInfo(){
	int		index;
	bool	validInput = false;

	if (getNrContacts()){
		printContacts();
		while (!validInput) {
			validInput = true;
			std::cout << std::endl << "Please select the index corresponding to the specific contact"<< std::endl;
			std::cin >> index;
			if (std::cin.eof()) {
				exit (1);
			}
			if (std::cin.fail() || index < 0 || index > 7 || (size_t)index >= _nrContacts) {
				validInput = false;
				std::cerr << std::endl << YELLOW BOLD "Invalid input. Please enter a valid phone number." RESET 
				<< std::endl << std::endl;
			}
			if (!validInput)
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else {
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				_contacts[index].printContact();
			}
		}
		
	}
	else
		std::cerr << std::endl << BOLD YELLOW "No contacts yet" RESET << std::endl << std::endl;
}
