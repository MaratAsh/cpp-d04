//
// Created by Altagracia Cierra on 11/18/22.
//

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat: Default constructor called" << std::endl;
	_type = "type WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: Destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy)
{
	std::cout << "WrongCat: Copy constructor called" << std::endl;
	this->_type = copy._type;
}

WrongCat &WrongCat::operator=(WrongCat const &copy)
{
	std::cout << "WrongCat: operator= called" << std::endl;
	if(this == &copy)
		return *this;
	this->_type = copy._type;
	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat: Miaw Miaw" << std::endl;
}
