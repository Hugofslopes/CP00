# include "PhoneBook.hpp"

int	main(){
	PhoneBook phonebook;
	
	while (1)
	{
		std::string in;
		
		std::cout << "Enter one of the following commands:"<< std::endl;
		std::cout << GREEN "<ADD> - Add new contact" RESET << std::endl;
		std::cout << BLUE "<SEARCH> - Show the list of contacts" RESET << std::endl;
		std::cout << RED "<EXIT> - Exit the progam" RESET << std::endl;
		if (!std::getline(std::cin, in)){
                std::cout << std::endl;
                break ;
		}
		if (in == "EXIT")
			exit(0);
		else if (in == "ADD")
			phonebook.add_contacts();
		else if (in == "SEARCH")
			phonebook.display_ct_info();
		else
			std::cerr << BOLD "				WRONG INPUT" RESET << std::endl;
	}
}
