#ifndef PHONEBOOK_H
#define PHONEBOOK_H

# include <iostream>
# include <cstring>
# include <string>
# include <iomanip>

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"
#define BLUE    "\033[34m"

#define PRINT_GREEN(text) std::cout << GREEN << text << RESET << std::endl
#define PRINT_RED(text) std::cout << RED << text << RESET << std::endl
#define PRINT_BLUE(text) std::cout << BLUE << text << RESET << std::endl
#define BOLD(text) "\033[1m" text "\033[0m"

class Contact {

	public:
		int	index;
		Contact(){}
		Contact(std::string fN, std::string lN, std::string	nN){
			firstName = fN;
			lastName = lN;
			nickName = nN;
		}

		void display() const{
			const int columnWidth = 10;

			std::string truncatedFirstName = firstName.length() > columnWidth ? firstName.substr(0, columnWidth - 1) + "." : firstName;
			std::string truncatedLastName = lastName.length() > columnWidth ? lastName.substr(0, columnWidth - 1) + "." : lastName;
			std::string truncatedNickName = nickName.length() > columnWidth ? nickName.substr(0, columnWidth - 1) + "." : nickName;
			std::cout << std::setw(columnWidth) << std::right << index \
			<< "|" << std::setw(columnWidth) << std::right << truncatedFirstName \
			<< "|" << std::setw(columnWidth) << std::right << truncatedLastName \
			<< "|" << std::setw(columnWidth) << std::right << truncatedNickName << std::endl;
		}

		void displayHeader() const{
			const int columnWidth = 10;
			std::cout << std::setw(columnWidth) << std::right << BOLD("     Index") \
			<< "|" << std::setw(columnWidth) << std::right << BOLD("First Name") \
			<< "|" << std::setw(columnWidth) << std::right << BOLD(" Last Name") \
			<< "|" << std::setw(columnWidth) << std::right << BOLD(" Nick Name") << std::endl;	
		}

		void printInfo() const{
			const int columnWidth = 10;
			std::cout << std::setw(columnWidth) << std::right << BOLD("     Index") \
			<< "|" << std::setw(columnWidth) << std::right << BOLD("First Name") \
			<< "|" << std::setw(columnWidth) << std::right << BOLD(" Last Name") \
			<< "|" << std::setw(columnWidth) << std::right << BOLD(" Nick Name") << std::endl;	
		}

	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
}; 

class PhoneBook {

	public:
		PhoneBook() : count(0), prints(0){
			for (size_t i = 0; i < 8; i++)
			{
				contacts[i] = Contact("", "", "");
				contacts[i].index = -1;
			}
		} 

		void setContact(const Contact& contact) {
			prints++;
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

		void printContacts() const {
			if (prints >= 7)
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
				for (size_t i = 0; i < prints; i++)
				{
					if (i == 0)
						contacts[i].displayHeader(); 
					contacts[i].display(); 
				}
			}
		}
		
		void printContact(size_t i) const {
			contacts[i].print_info();
		}

	private:
		Contact contacts[8];
		size_t count;
		size_t prints;
};

#endif