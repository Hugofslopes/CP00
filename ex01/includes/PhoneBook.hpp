/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 17:59:25 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/13 17:59:26 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

# include <cstdlib>
# include <limits>
# include "Colors.hpp"
# include "Contact.hpp"

class PhoneBook : public Contact {
    
    public:
        PhoneBook();
        ~PhoneBook();

        void    setContact(const Contact& contact);
        void    printContacts() const;
        int     getNrContacts()const;
        void    addContacts();
        void    displayCtInfo();
    
    private:
        Contact         _contacts[8];
        static size_t   _count;
        static size_t   _nrContacts;
};
#endif