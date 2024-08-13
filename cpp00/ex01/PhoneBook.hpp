
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>
#include <iostream>

class PhoneBook {

    private:
    Contact contacts[8];
    int contactCount;
    int oldestContactIndex;
    public:
    PhoneBook();

    void addContact(const Contact &newContact);
    void displayContacts() const ;
    void displaySpecificContact(int index) const;
};

#endif