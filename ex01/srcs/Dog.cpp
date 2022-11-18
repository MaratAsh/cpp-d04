//
// Created by Altagracia Cierra on 11/18/22.
//

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog: Default constructor called" << std::endl;
	_type = "type Dog";
	brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog: Destructor called" << std::endl;
}

Dog::Dog(Dog const &copy)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	this->_type = copy._type;
	this->brain = new Brain(*copy.brain);
}

Dog &Dog::operator=(Dog const &copy)
{
	std::cout << "Dog: operator= called" << std::endl;
	if(this == &copy)
		return *this;

	this->_type = copy._type;

	if(brain != nullptr)
		delete brain;
	this->brain = new Brain(*copy.brain);

	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Dog: Gav Gav" << std::endl;
}


