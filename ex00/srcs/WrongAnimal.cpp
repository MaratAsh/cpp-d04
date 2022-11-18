//
// Created by Altagracia Cierra on 11/18/22.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal: Default constructor called." << std::endl;
	_type = "unknown type";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: Destructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	std::cout << "WrongAnimal: Copy constructor called." << std::endl;
	this->_type = copy._type;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &copy)
{
	std::cout << "WrongAnimal: operator= called." << std::endl;
	if(this == &copy)
		return *this;
	this->_type = copy._type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "I'm WrongAnimal." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return _type;
}
