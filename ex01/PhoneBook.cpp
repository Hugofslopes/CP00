/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:44:50 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/04/22 21:29:14 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

void	add_contacts(PhoneBook *phonebook){
	
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

void	display_ct_info(PhoneBook *phonebook)
{
	std::string input;
	int number;

	(*phonebook).printContacts();
	std::cout << "Please select the index corresponding to the specific contact\n";
    std::getline(std::cin, input);
    try {
        number = std::stoi(input);
    } 
	catch (const std::invalid_argument& e) {
        std::cout << "Invalid input. Please enter a valid integer." << std::endl;
    }
	catch (const std::out_of_range& e) {
        std::cout << "The number is out of range." << std::endl;
    }
	if (number < 0 || number > 7 )
		std::cout << "Invalid input. Please enter a valid index" << std::endl;
	else
		phonebook->printContact(number);
}

int	main()
{
	PhoneBook phonebook;
	
	while (1)
	{
		std::string in;
		
		std::cout << "Enter one of the following commands:"<< std::endl;
		PRINT_GREEN("<ADD> - Add new contact");
		PRINT_BLUE("<SEARCH> - Show the list of contacts");
		PRINT_RED("<EXIT> - Exit the progam");
		std::getline(std::cin, in);
		if (in == "EXIT")
			exit(0);
		else if (in == "ADD")
			add_contacts(&phonebook);
		else if (in == "SEARCH")
			display_ct_info(&phonebook);
		else
			std::cout <<BOLD("				WRONG INPUT") << std::endl;
	}
}

