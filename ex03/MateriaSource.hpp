#pragma once

#include <iostream>

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *  _stock[4];

    public:
        MateriaSource();
        ~MateriaSource();

        MateriaSource(MateriaSource const &other);
        MateriaSource &operator=(MateriaSource const &other);

        void learnMateria(AMateria* other);
        AMateria* createMateria(std::string const &type);
};
