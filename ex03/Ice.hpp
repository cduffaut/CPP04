#pragma once

#include <iostream>

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        ~Ice();
        
        Ice(std::string const &type);
        Ice (Ice const &other);
        Ice &operator=(Ice const &other);

        AMateria *clone()const;
        void use(ICharacter& other);
};