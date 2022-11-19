//
// Created by Altagracia Cierra on 11/18/22.
//

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain: Default constructor called" << std::endl;

	num_ideas = 0;
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = "";
}

Brain::~Brain()
{
	std::cout << "Brain: Destructor called" << std::endl;
}

Brain::Brain(Brain const &copy)
{
	std::cout << "Brain: Copy constructor called " << this << std::endl;
	this->num_ideas = copy.num_ideas;
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
}

Brain &Brain::operator=(Brain const &copy)
{
	std::cout << "Brain: operator= called" << this << std::endl;
	if(this == &copy)
		return *this;

	this->num_ideas = copy.num_ideas;
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];

	return *this;
}

void Brain::addIdea(std::string idea)
{
	ideas[num_ideas] = idea;
	num_ideas++;
}

void Brain::forgetIdea(void)
{
	ideas[num_ideas] = "";
	num_ideas--;
}

void Brain::printIdeas()
{
	for (int i = 0; i < num_ideas; i++)
	{
		std::cout << ideas[i] << std::endl;
	}
}
