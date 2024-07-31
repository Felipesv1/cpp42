#include "PhoneBook.hpp"
#include <iostream>

int main ()
{
    PhoneBook phoneBook;

    std::string command;

    while (true)
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (command == "ADD")
        {
            Contact newContact;
            std::string input;

            std::cout << "Enter first name: ";
            std::getline(std::cin, input);
            newContact.setFirstName(input);

            std::cout << "Enter last name: ";
            std::getline(std::cin, input);
            newContact.setLastName(input);

            std::cout << "Enter nickname: ";
            std::getline(std::cin, input);
            newContact.setNickname(input);

            std::cout << "Enter phone number: ";
            std::getline(std::cin, input);
            newContact.setPhoneNumber(input);

            std::cout << "Enter darkest secret: ";
            std::getline(std::cin, input);
            newContact.setDarkestSecret(input);

            phoneBook.addContact(newContact);
        }else if (command == "SEARCH")
        {
            phoneBook.displayContacts();
            std::cout << "Enter the index of the specific Contact: ";
            int index;
               while (!(std::cin >> index)) {
                std::cin.clear(); 
                std::cin.ignore();
                std::cout << "Invalid input. Please enter a valid index: \n";
               }
                std::cin.ignore();
            phoneBook.displaySpecificContact(index);
        }
        else if (command == "EXIT")
                break;
        else
            std::cout << "Unknown command. Please try again." << std::endl;
    }
}