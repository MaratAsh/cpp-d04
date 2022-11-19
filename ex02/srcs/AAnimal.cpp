//
// Created by Altagracia Cierra on 11/18/22.
//

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "Animal: Default constructor called" << std::endl;
	_type = "unknown type";
	_brain = nullptr;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal: Destructor called" << std::endl;
	if (_brain != nullptr)
		delete _brain;
}

AAnimal::AAnimal(AAnimal const &copy)
{
	std::cout << "Animal: Copy constructor called" << std::endl;
	this->_type = copy._type;
	this->_brain = new Brain(*copy._brain);
}

AAnimal &AAnimal::operator=(AAnimal const &copy)
{
	std::cout << "Animal: operator= called" << std::endl;
	if(this == &copy)
		return *this;

	this->_type = copy._type;

	if(_brain != nullptr)
		delete _brain;
	this->_brain = new Brain(*copy._brain);

	return *this;
}

void AAnimal::makeSound() const
{
	std::cout << "Animal cannot talk" << std::endl;
}

std::string AAnimal::getType() const
{
	return _type;
}

void AAnimal::addIdea(std::string idea)
{
	if(_brain != nullptr)
		_brain->addIdea(idea);
}

void AAnimal::forgetIdea(void)
{
	if(_brain != nullptr)
		_brain->forgetIdea();
}

void AAnimal::printIdeas()
{
	if(_brain != nullptr)
		_brain->printIdeas();
}
