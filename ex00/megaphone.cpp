#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (size_t i = 1; av[i]; i++)
			for (size_t j = 0; av[i][j]; j++)
				std::cout << (std::isalpha(av[i][j]) ? \
				(char)std::toupper(av[i][j]) : av[i][j]);
	std::cout << std::endl;
}
