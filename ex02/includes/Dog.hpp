//
// Created by Altagracia Cierra on 11/18/22.
//

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"

class Dog: public AAnimal
{
public:
	Dog();
	~Dog();
	Dog(Dog const &copy);
	Dog &operator=(Dog const &copy);

	void makeSound() const;
};

#endif
