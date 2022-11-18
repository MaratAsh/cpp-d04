//
// Created by Altagracia Cierra on 11/18/22.
//

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		~Cat();
		Cat(Cat const &copy);
		Cat &operator=(Cat const &copy);

		// virtual void makeSound() const;
		void makeSound() const;
};

#endif
