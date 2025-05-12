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
        void    add_contacts();
        void    display_ct_info();
    
    private:
        Contact contacts[8];
        size_t  count;
        size_t  nr_contacts;
};
#endif