//
// Created by Altagracia Cierra on 11/18/22.
//

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string _type;
		Brain		*brain;


	public:
		Animal();
		virtual ~Animal();
		Animal(Animal const &copy);
		virtual Animal &operator=(Animal const &copy);

		virtual void makeSound() const;
		std::string getType() const;
		void addIdea(std::string idea);
		void forgetIdea(void);
		void printIdeas();
		Brain &getBrain();
};

#endif
