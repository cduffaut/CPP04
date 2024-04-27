#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        this->_stock[i] = NULL;
    }
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_stock[i])
        {
            delete _stock[i];
        }
    }
}

// Stock the AMateria in arg if there is still place in it
void MateriaSource::learnMateria(AMateria* other)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->_stock[i])
        {
            this->_stock[i] = other;
            break ;
        }
    }
}

// Serach for the non-null stock values if one has the same type
// Of the one in arg
AMateria* MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_stock[i] && this->_stock[i]->getType() == type)
        {
            return (this->_stock[i]->clone());
        }
    }
    return (0);
}


MateriaSource::MateriaSource(MateriaSource const &other)
{
    *this = other;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_stock[i])
            delete this->_stock[i];
        this->_stock[i] = other._stock[i]->clone();
    }
    return (*this);
}