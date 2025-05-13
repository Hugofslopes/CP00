/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 17:59:05 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/13 17:59:06 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

int	main(){
	PhoneBook phonebook;
	
	while (1)
	{
		std::string in;
		
		std::cout << "Enter one of the following commands:" << std::endl;
		std::cout << GREEN "<" <<  BOLD "ADD" RESET << GREEN "> - Add new contact" RESET << std::endl;
		std::cout << BLUE "<" << BOLD "SEARCH" RESET << BLUE "> - Show the list of contacts" RESET << std::endl;
		std::cout << RED "<" << BOLD "EXIT" RESET << RED "> - Exit the progam" RESET << std::endl;
		if (!std::getline(std::cin, in)){
                std::cout << std::endl;
                break ;
		}
		if (in == "EXIT")
			exit(0);
		else if (in == "ADD")
			phonebook.addContacts();
		else if (in == "SEARCH")
			phonebook.displayCtInfo();
		else
			std::cerr << YELLOW BOLD "				WRONG INPUT" RESET << std::endl << std::endl;
	}
}
