/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:44:50 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/07 15:15:56 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::setContact(const Contact& contact) {
	nr_contacts++;
	if (count < 8)
	{
		contacts[count] = contact;
		contacts[count].index = count;
		count++;
	}
	else
	{
		count = 0;
		contacts[count] = contact;
		contacts[count].index = count;
		count++;
	}
}

void PhoneBook::printContacts() const {
	if (nr_contacts >= 7)
	{
		for (size_t i = 0; i < 8; i++)
		{
			if (i == 0)
				contacts[i].displayHeader(); 
			contacts[i].display(); 
		}
	}
	else
	{
		for (size_t i = 0; i < nr_contacts; i++)
		{
			if (i == 0)
				contacts[i].displayHeader(); 
			contacts[i].display(); 
		}
	}
}

void PhoneBook::printContact(size_t i) const {
	if (i < nr_contacts)
		contacts[i].printInfo();
	else
		std::cout << "Invalid input. Please enter a valid index" << std::endl;
}

int PhoneBook::getNrContacts()const{
	return(nr_contacts);
}

void PhoneBook::add_contacts(PhoneBook *phonebook){
	
	std::string name, lastName, nickName;
	std::cout << "Enter the contact Name" << std::endl;
	std::getline(std::cin, name);
	std::cout << "Enter the contact Last Name" << std::endl;
	std::getline(std::cin, lastName);
	std::cout << "Enter the contact Nickname" << std::endl;
	std::getline(std::cin, nickName);
	Contact contact(name, lastName, nickName);
	(*phonebook).setContact(contact);
}

void PhoneBook::display_ct_info(PhoneBook *phonebook)
{
	std::string input;
	int number;
	if(phonebook->getNrContacts())
	{
		(*phonebook).printContacts();
		std::cout << "Please select the index corresponding to the specific contact\n";
		std::getline(std::cin, input);
		try {
			number = std::stoi(input);
		} 
		catch (const std::invalid_argument& e) {
			std::cout << "Invalid input. Please enter a valid integer." << std::endl;
		}
		if (number < 0 || number > 7 )
			std::cout << "Invalid input. Please enter a valid index" << std::endl;
		else
			phonebook->printContact(number);
	}
	else
		std::cout << BOLD("No contacts yet")<< std::endl;
}
