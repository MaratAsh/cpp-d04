//
// Created by Altagracia Cierra on 11/18/22.
//

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string _type;

	public:
		Animal();
		virtual ~Animal();
		Animal(Animal const &copy);
		Animal &operator=(Animal const &copy);

		virtual void makeSound() const;
		std::string getType() const;
};

#endif
