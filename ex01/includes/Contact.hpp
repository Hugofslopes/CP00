/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 17:59:22 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/13 17:59:22 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		void printContact() const;
		void setFirstName(const std::string& fName);
		void setLastName(const std::string& lName);
		void setNickName(const std::string& nName);
		void setDarkestSecret(const std::string& dSecret);
		void setPhoneNumber(const int pN);
		void setIndex(const int ind);
		void changeTabs(std::string& in);

	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_darkestSecret;
		int 		_phoneNumber;
		int			_index;
};
#endif