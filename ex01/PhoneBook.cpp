/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:44:50 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/04/22 16:35:43 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

void	add_contacts(){
	std::string name, last_name, nickname;
	std::cout << "Enter the contact Name" << std::endl;
	std::getline(std::cin, name);
	std::cout << "Enter the contact Last Name" << std::endl;
	std::getline(std::cin, last_name);
	std::cout << "Enter the contact Nickname" << std::endl;
	std::getline(std::cin, name);
}

void	printPhoneBook(){
	for (size_t i = 0; i < 10; i++)
		std::cout << "ola";
}

int main()
{
	while (1)
	{
		std::string in;
		std::cout << "Enter one of the fowloing commands:\nADD- To add new contact\n\
		SEARCH - Show the list of contacts\nEXIT- Exit the progam" << std::endl;
		std::getline(std::cin, in);
		if (in == "EXIT")
			exit(0);
		else if (in == "ADD")
			add_contacts();
		else if (in == "SEARCH")
			printPhoneBook();
		else
			std::cout << "Wrong input" << std::endl;
	}
}
