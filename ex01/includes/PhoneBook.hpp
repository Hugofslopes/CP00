#ifndef PHONEBOOK_H
#define PHONEBOOK_H

# include <iostream>
# include <cstring>
# include <string>
# include <iomanip>
# include "Colors.hpp"
# include "Contact.hpp"

class PhoneBook : public Contact {
public:
    PhoneBook() : count(0), nr_contacts(0) {
        for (size_t i = 0; i < 8; i++) {
            contacts[i] = Contact("", "", "");
            contacts[i].index = -1;
        }
    }
    void setContact(const Contact& contact);
    void printContacts() const;
    void printContact(size_t i) const;
    int getNrContacts()const;
    void add_contacts(PhoneBook *phonebook);
    void display_ct_info(PhoneBook *phonebook);
private:
    Contact contacts[8];
    size_t count;
    size_t nr_contacts;
};
#endif