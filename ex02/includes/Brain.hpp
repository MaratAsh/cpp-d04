//
// Created by Altagracia Cierra on 11/18/22.
//

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	protected:
		int			num_ideas;
		std::string ideas[100];

	public:
		Brain();
		virtual ~Brain();
		Brain(Brain const &copy);
		Brain &operator=(Brain const &copy);

		void addIdea(std::string idea);
		void forgetIdea(void);
		void printIdeas();
};

#endif
