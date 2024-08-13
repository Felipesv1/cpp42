#include "Contact.hpp"

Contact::Contact()
    : firstName(""), lastName(""), nickName(""), phoneNumber(""), darkestSecret("") {}

Contact::Contact(const std::string &firstName, const std::string &lastName, const std::string &nickname, const std::string &phoneNumber, const std::string &darkestSecret)
    : firstName(firstName), lastName(lastName), nickName(nickname), phoneNumber(phoneNumber), darkestSecret(darkestSecret) {}

void Contact::setFirstName(std::string &firstName) {
    this->firstName = firstName;
}
void Contact::setLastName(std::string &lastName) {
    this->lastName = lastName;
}
void Contact::setNickname(std::string &nickName) {
    this->nickName = nickName;
}

void Contact::setPhoneNumber(std::string &phoneNumber) {
    this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string &darkestSecret) {
    this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstName() const {
    return firstName;
}

std::string Contact::getLastName() const {
    return lastName;
}

std::string Contact::getNickname() const {
    return nickName;
}

std::string Contact::getPhoneNumber() const {
    return phoneNumber;
}

std::string Contact::getDarkestSecret() const {
    return darkestSecret;
}

bool Contact::isvalid() const{
    return !firstName.empty() && !lastName.empty() && !nickName.empty() &&
           !phoneNumber.empty() && !darkestSecret.empty();
}
