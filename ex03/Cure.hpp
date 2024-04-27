#pragma once

#include <iostream>

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        ~Cure();

        Cure(std::string const &type);
        Cure (Cure const &other);
        Cure &operator=(Cure const &other);
        
        AMateria *clone()const;
        void use(ICharacter& other);
};