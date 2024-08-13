#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{

protected:
    std::string type;

public:
    WrongAnimal();
    WrongAnimal(const std::string &type);
    ~WrongAnimal();
    WrongAnimal &operator=(const WrongAnimal &copy);
    WrongAnimal(WrongAnimal &copy);
    void makeSound() const;
    std::string getType() const;
};

#endif