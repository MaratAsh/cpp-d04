//
// Created by Altagracia Cierra on 11/18/22.
//

#include "Cat.hpp"
#include "Dog.hpp"

#define ANIMAL	2
#define YLW		"\033[33m"
#define END		"\033[0m"

int main()
{
	Animal *animal[ANIMAL + 1];
	std::cout << YLW"---------- Create Cats and Dogs ----------"END << std::endl;
	for (int i = 0; i < ANIMAL; i++)
	{
		if (i < ANIMAL / 2)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
		std::cout << "(" << i <<  ") " << animal[i]->getType() << " ";
		animal[i]->makeSound();
		std::cout << "(" << i <<  ") " << animal[i] << std::endl;
	}

	std::cout << YLW"---------- Make ideas ----------"END << std::endl;
	animal[0]->addIdea("Sleep");
	animal[0]->addIdea("Eat");
	animal[0]->addIdea("Play");
	animal[0]->addIdea("Run");
	animal[0]->addIdea("WC");
	animal[0]->printIdeas();
	std::cout << "-------------------" << std::endl;
	animal[0]->forgetIdea();
	animal[0]->printIdeas();

	std::cout << YLW"---------- Assignment Operator ----------"END << std::endl;
	std::cout << animal[0]->getType() << " " << animal[0] << " "  << std::endl;
	std::cout << animal[1]->getType() << " " << animal[1] << " " << std::endl;
	*(animal[ANIMAL]) = *(animal[0]);
	std::cout << animal[0]->getType() << " " << animal[0] << " " << std::endl;
	std::cout << animal[1]->getType() << " " << animal[1] << " " << std::endl;
	animal[1]->printIdeas();

	std::cout << YLW"---------- Delete Cats and Dogs ----------"END << std::endl;
	for (int i = 0; i < ANIMAL; i++)
	{
		std::cout << "(" << i <<  ") " << animal[i]->getType() << std::endl;
		delete animal[i];
	}

	std::cout << YLW"---------- Copy Assignment Operator ----------"END << std::endl;
	Cat cat = Cat();
	cat.addIdea("Sleep");
	cat.addIdea("Eat");
	cat.printIdeas();
	Cat cat2(cat);
	cat2.printIdeas();

	std::cout << YLW"--------------------"END << std::endl;

	return 0;
}
