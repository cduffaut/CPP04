#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#pragma once

# include <iostream>
# include <string>

# include "Brain.hpp"

class   Animal
{
	public:
			Animal();
			// if no virtual it gets the leaks
			virtual ~Animal();

			virtual void makeSound() const = 0;
			virtual Brain *getBrain();
			std::string	getType() const;

    protected:
			std::string	type;
};

#endif