/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 17:59:11 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/13 17:59:12 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (size_t i = 1; av[i]; i++)
			for (size_t j = 0; av[i][j]; j++)
				std::cout << (std::isalpha(av[i][j]) ? static_cast<char>(std::toupper(av[i][j])) : av[i][j]);
	std::cout << std::endl;
}
