# include "PhoneBook.hpp"

int	main(){
	PhoneBook phonebook;
	
	while (1)
	{
		std::string in;
		
		std::cout << "Enter one of the following commands:"<< std::endl;
		PRINT_GREEN("<ADD> - Add new contact");
		PRINT_BLUE("<SEARCH> - Show the list of contacts");
		PRINT_RED("<EXIT> - Exit the progam");
		if (!std::getline(std::cin, in)){
                std::cout << std::endl;
                break;
		}
		if (in == "EXIT")
			exit(0);
		else if (in == "ADD")
			phonebook.add_contacts(&phonebook);
		else if (in == "SEARCH")
			phonebook.display_ct_info(&phonebook);
		else
			std::cout <<BOLD("				WRONG INPUT") << std::endl;
	}
}
