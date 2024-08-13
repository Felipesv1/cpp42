#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
    private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    Contact();
    Contact(const std::string &firstName, const std::string &lastName, const std::string &nickname, const std::string &phoneNumber, const std::string &darkestSecret);
    void setFirstName(std::string &firstName);
    void setLastName(std::string &lastName);
    void setNickname(std::string &nickname);
    void setPhoneNumber(std::string &phoneNumber);
    void setDarkestSecret(std::string &darkestSecret);

    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret()const ;
    bool isvalid() const;
};

#endif