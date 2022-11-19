//
// Created by Altagracia Cierra on 11/18/22.
//

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog: Default constructor called" << std::endl;
	_type = "type Dog";
	_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog: Destructor called" << std::endl;
	if (_brain != nullptr)
	{
		delete _brain;
		_brain = nullptr;
	}
}

Dog::Dog(Dog const &copy)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	this->_type = copy._type;
	this->_brain = new Brain(*copy._brain);
}

Dog &Dog::operator=(Dog const &copy)
{
	std::cout << "Dog: operator= called" << std::endl;
	if(this == &copy)
		return *this;

	this->_type = copy._type;

	if(_brain != nullptr)
		delete _brain;
	this->_brain = new Brain(*copy._brain);

	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Dog: Woof Woof" << std::endl;
}
