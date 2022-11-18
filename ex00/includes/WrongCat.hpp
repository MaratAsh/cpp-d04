//
// Created by Altagracia Cierra on 11/18/22.
//

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
		WrongCat(WrongCat const &copy);
		WrongCat &operator=(WrongCat const &copy);

		// virtual void makeSound() const;
		void makeSound() const;
};

#endif
