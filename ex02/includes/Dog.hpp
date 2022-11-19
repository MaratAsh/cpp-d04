//
// Created by Altagracia Cierra on 11/18/22.
//

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{

private:
	std::string	type;
	Brain		*brain;
public:
	Dog();
	Dog(const Dog &copy);


	virtual ~Dog();

	Dog & operator=(const Dog &assign);

	std::string	getType() const;

	void	makeSound() const;
};

#endif
