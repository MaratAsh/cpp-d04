//
// Created by Altagracia Cierra on 11/18/22.
//

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal: Default constructor called" << std::endl;
	_type = "unknown type";
}

Animal::~Animal()
{
	std::cout << "Animal: Destructor called" << std::endl;
}

Animal::Animal(Animal const &copy)
{
	std::cout << "Animal: Copy constructor called" << std::endl;
	this->_type = copy._type;
}

Animal &Animal::operator=(Animal const &copy)
{
	std::cout << "Animal: operator= called" << std::endl;
	if(this == &copy)
		return *this;
	this->_type = copy._type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "Animal cannot talk" << std::endl;
}

std::string Animal::getType() const
{
	return _type;
}

