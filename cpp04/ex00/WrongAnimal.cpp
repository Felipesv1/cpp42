#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "animal";
    std::cout << "Wrong Animal constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(const std::string &type) : type(type)
{
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong Animal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &copy)
{
    type = copy.type;
    std::cout << "Wrong Animal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
    if (this != &copy)
    {
        type = copy.type;
    }
    std::cout << "Wrong Animal copy assignment called" << std::endl;
    return *this;
}

std::string WrongAnimal::getType() const
{
    return type;
}
void WrongAnimal::makeSound() const
{
    std::cout << "Wrong Animal sound" << std::endl;
}
