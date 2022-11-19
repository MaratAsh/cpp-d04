//
// Created by Altagracia Cierra on 11/18/22.
//

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat: Default constructor called" << std::endl;
	_type = "type Cat";
	brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat: Destructor called" << std::endl;
	if(brain != nullptr)
	{
		delete brain;
		brain = nullptr;
	}
}

Cat::Cat(Cat const &copy)
{
	std::cout << "Cat: Copy constructor called" << std::endl;
	this->_type = copy._type;
	this->brain = new Brain(*copy.brain);
}

Cat &Cat::operator=(Cat const &copy)
{
	std::cout << "Cat: operator= called" << std::endl;
	if(this == &copy)
		return *this;

	this->_type = copy._type;

	if(brain != nullptr)
		delete brain;
	this->brain = new Brain(*copy.brain);

	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Cat: Miaw Miaw" << std::endl;
}

