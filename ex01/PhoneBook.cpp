/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:44:50 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/04/22 16:13:13 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

int main()
{
	while (1)
	{
		std::string in;
		std::cout << "Enter one of the fowloing commands:\nADD- To add new contact\n\
		SEARCH - Show the list of contacts\nEXIT- Exit the progam" << std::endl;
		std::getline(std::cin, in);
		in == "EXIT" ? exit(0) : void();
	}
}