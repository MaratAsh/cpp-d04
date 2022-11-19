//
// Created by Altagracia Cierra on 11/18/22.
//

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat: Default constructor called" << std::endl;
	_type = "type Cat";
	_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat: Destructor called" << std::endl;
	{
		delete _brain;
		_brain = nullptr;
	}
}

Cat::Cat(Cat const &copy)
{
	std::cout << "Cat: Copy constructor called" << std::endl;
	this->_type = copy._type;
	this->_brain = new Brain(*copy._brain);
}

Cat &Cat::operator=(Cat const &copy)
{
	std::cout << "Cat: assignment operator called" << std::endl;
	if(this == &copy)
		return *this;

	this->_type = copy._type;

	if(_brain != nullptr)
		delete _brain;
	this->_brain = new Brain(*copy._brain);

	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Cat: Miaw Miaw" << std::endl;
}
