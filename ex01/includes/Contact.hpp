#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include "Colors.hpp"

class Contact {

	public:
		Contact();
		~Contact();

		void display() const;
		void displayHeader() const;
		void printInfo() const;
		void setFirstName(const std::string& fName);
		void setLastName(const std::string& lName);
		void setNickName(const std::string& nName);
		void setDarkestSecret(const std::string& dSecret);
		void setPhoneNumber(const int pN);
		void setIndex(const int ind);
		void check_input(std::string& in);

	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	darkestSecret;
		int 		phoneNumber;
		int			index;
};
#endif