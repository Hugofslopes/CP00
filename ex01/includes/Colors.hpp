#ifndef COLORS_HPP
# define COLORS_HPP

# define RESET   "\033[0m"
# define GREEN   "\033[32m"
# define RED     "\033[31m"
# define BLUE    "\033[34m"

# define PRINT_GREEN(text) std::cout << GREEN << text << RESET << std::endl
# define PRINT_RED(text) std::cout << RED << text << RESET << std::endl
# define PRINT_BLUE(text) std::cout << BLUE << text << RESET << std::endl
# define BOLD(text) "\033[1m" text "\033[0m"

#endif