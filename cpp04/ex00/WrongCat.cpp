#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "Wrong Cat";
    std::cout << "Wrong Cat constructor called" << std::endl;
}

WrongCat::WrongCat(const std::string &type) : WrongAnimal(type)
{
}

WrongCat::~WrongCat()
{
    std::cout << "Wrong Cat destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat &copy)
{
    type = copy.type;
    std::cout << "Wrong Cat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
    if (this != &copy)
    {
        type = copy.type;
    }
    std::cout << "Wrong Cat copy assignment called" << std::endl;
    return *this; 
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong Cat sound" << std::endl;
}
