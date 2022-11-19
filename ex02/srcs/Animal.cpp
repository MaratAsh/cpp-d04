//
// Created by Altagracia Cierra on 11/18/22.
//

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal: Default constructor called" << std::endl;
	_type = "unknown type";
	brain = nullptr;
}

Animal::Animal(Animal const &copy)
{
	std::cout << "Animal: Copy constructor called" << std::endl;
	this->_type = copy._type;
	this->brain = new Brain(*copy.brain);
}

Animal::~Animal() {}

Animal &Animal::operator=(Animal const &copy)
{
	std::cout << "Animal: operator= called" << std::endl;
	if(this == &copy)
		return *this;

	this->_type = copy._type;

	if(brain != nullptr)
		delete brain;
	this->brain = new Brain(*copy.brain);

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

void Animal::addIdea(std::string idea)
{
	if(brain != nullptr)
		brain->addIdea(idea);
}

void Animal::forgetIdea(void)
{
	if(brain != nullptr)
		brain->forgetIdea();
}

void Animal::printIdeas()
{
	if(brain != nullptr)
		brain->printIdeas();
}
