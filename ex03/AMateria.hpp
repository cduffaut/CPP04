#pragma once

#include <iostream>

#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
            std::string _type;
    public:
        AMateria();
        virtual ~AMateria();
        AMateria(std::string const & type);

        AMateria(AMateria const &other);
        AMateria &operator=(AMateria const & other);

        std::string const & getType() const;

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};