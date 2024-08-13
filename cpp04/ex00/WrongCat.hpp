#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
protected:
		std::string	type;
public:
    WrongCat();
    WrongCat(const std::string &type);
    ~WrongCat();
    WrongCat &operator=(const WrongCat &copy);
    WrongCat(WrongCat &copy);
    void makeSound() const;
};

#endif
