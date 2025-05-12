/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:44:50 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/12 15:48:56 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : count(0), nr_contacts(0) {
        for (size_t i = 0; i < 8; i++) {
            contacts[i] = Contact();
            contacts[i].setIndex(-1);
        }
    }

PhoneBook::~PhoneBook(){} 

void PhoneBook::setContact(const Contact& contact) {
	nr_contacts++;
	if (count < 8){
		contacts[count] = contact;
		contacts[count].setIndex(count);
		count++;
	}
	else{
		count = 0;
		contacts[count] = contact;
		contacts[count].setIndex(count);
		count++;
	}
}

void PhoneBook::printContacts() const {
	if (nr_contacts > 7){
		for (size_t i = 0; i < 8; i++)
		{
			if (i == 0)
				contacts[i].displayHeader(); 
			contacts[i].display(); 
		}
	}
	else{
		for (size_t i = 0; i < nr_contacts; i++)
		{
			if (i == 0)
				contacts[i].displayHeader(); 
			contacts[i].display(); 
			
		}
	}
}

int PhoneBook::getNrContacts()const{
	return(nr_contacts);
}

void PhoneBook::add_contacts(){
	
	Contact n_contact;
	std::string fN, lN,nN, dS;
	int pN;
	bool validInput = false;

	std::cout << std::endl << "Enter the contact " << BOLD "First Name" RESET << " :" << std::endl;
	std::getline(std::cin, fN);
	n_contact.check_input(fN);
	n_contact.setFirstName(fN);

	std::cout << "Enter the contact " << BOLD "Last Name" RESET << " :" << std::endl;
	std::getline(std::cin, lN);
	n_contact.check_input(lN);
	n_contact.setLastName(lN);

	std::cout << "Enter the contact "<< BOLD "Nick Name" RESET << " :" << std::endl;
	std::getline(std::cin, nN);
	n_contact.check_input(nN);
	n_contact.setNickName(nN);

	while (!validInput) {
        std::cout << "Enter the contact " << BOLD "Phone Number" RESET << " :"<< std::endl;
        std::cin >> pN;
		if (std::cin.eof()) {
            break ;
        }
        else if (std::cin.fail()) {
			validInput = false;
            std::cerr << "Invalid input. Please enter a valid phone number." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
		else if (pN > 999999999) {
			validInput = false;
			std::cerr << "Invalid input. Please enter a valid phone number." << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else if (pN < 111111111)
		{
			validInput = false;
			std::cerr << "Invalid input. Please enter a valid phone number." << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else {
            validInput = true;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
	n_contact.setPhoneNumber(pN);

	std::cout << "Enter the contact "<< BOLD "Darkest Secret" RESET << " :" << std::endl;
	std::getline(std::cin, dS);
	n_contact.check_input(dS);
	n_contact.setDarkestSecret(dS);

	std::cout << std::endl;
	setContact(n_contact);
}

void PhoneBook::display_ct_info(){
	int		index;
	bool	validInput = false;

	if (getNrContacts()){
		printContacts();
		while (!validInput) {
			validInput = true;
			std::cout << std::endl << "Please select the index corresponding to the specific contact\n";
			std::cin >> index;
			if (std::cin.eof()) {
				break ;
			}
			if (std::cin.fail()) {
				validInput = false;
				std::cerr << "Invalid input. Please enter a valid phone number." << std::endl;
			}
			if (!validInput)
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else {
				if (index < 0 || index > 7 || (size_t)index >= nr_contacts)
				{
					validInput = false;
					std::cerr << "Invalid input. Please enter a valid index" << std::endl;
					std::cout << std::endl;
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				}
				else
				{
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					contacts[index].printContact();
				}
		}
		}
	}
	else
		std::cerr << BOLD "No contacts yet" RESET << std::endl;
}
