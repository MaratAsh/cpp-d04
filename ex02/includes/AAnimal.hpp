//
// Created by Altagracia Cierra on 11/18/22.
//

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal
{
protected:
	std::string _type;
	Brain		*_brain;
	AAnimal();

public:
	virtual ~AAnimal();
	AAnimal(AAnimal const &copy);
	virtual AAnimal &operator=(AAnimal const &copy);

	virtual void makeSound() const;
	std::string getType() const;
	void addIdea(std::string idea);
	void forgetIdea(void);
	void printIdeas();
};

#endif
