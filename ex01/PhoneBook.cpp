#include "PhoneBook.hpp"


std::string truncateString(const std::string &str, size_t width) {
    if (str.length() > width) {
        return str.substr(0, width - 1) + ".";
    }
    return str;
}

PhoneBook::PhoneBook() : contactCount(0), oldestContactIndex(0) { 
    for (int i = 0; i < 8; ++i) {
        contacts[i] = Contact();
    }
}

void PhoneBook::addContact(const Contact &newContact)
{
    if (!newContact.isvalid()) {
    std::cout << "Invalid contact. All fields must be filled." << std::endl;
            return;
    }
    if (contactCount < 8)
    {
        contacts[contactCount++] = newContact;
    }else{
        contacts[oldestContactIndex] = newContact;
        oldestContactIndex = (oldestContactIndex + 1) % 8;
    }
}

void PhoneBook::displayContacts() const {
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < contactCount; ++i) {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << truncateString(contacts[i].getFirstName(), 10) << "|"
                  << std::setw(10) << truncateString(contacts[i].getLastName(), 10) << "|"
                  << std::setw(10) << truncateString(contacts[i].getNickname(), 10) << std::endl;
    }
}

void PhoneBook::displaySpecificContact(int index) const {
    if (index < 0 || index >= contactCount) {
        std::cout << "Invalid index." << std::endl;
        return;
    }

    const Contact &contact = contacts[index];
    std::cout << "First Name: " << contact.getFirstName() << std::endl;
    std::cout << "Last Name: " << contact.getLastName() << std::endl;
    std::cout << "Nickname: " << contact.getNickname() << std::endl;
    std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
}