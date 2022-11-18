//
// Created by Altagracia Cierra on 11/18/22.
//

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete i;
	delete j;
	delete meta;

	std::cout << " ----------------------" << std::endl;
	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* cat = new WrongCat();
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound(); //will output the wrong sound!
	wrongmeta->makeSound();

	delete cat;
	delete wrongmeta;

	return 0;
}

