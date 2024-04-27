#include "Character.hpp"

Character::Character() : _name("")
{
    for (int i = 0; i < 4; i++)
    {
        this->inventory[i] = NULL;
    }
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i])
        {
            delete this->inventory[i];
        }
    }
}

Character::Character(std::string const &name) : _name(name)
{
    for (int i = 0; i < 4; i++)
    {
        this->inventory[i] = NULL;
    }    
}

Character::Character(Character const &other)
{
    *this = other;
}

Character &Character::operator=(Character const &other)
{
    this->_name = other.getName();
    for (int i = 0; i < 4; i++)
    {
        this->inventory[i] = other.inventory[i]->clone();   
    }
    return (*this);
}

std::string const & Character::getName() const
{
    return (_name);
}

// If an index is NULL and not yet out of bounds : assign the argument. 
void Character::equip(AMateria* m)
{
    for (int i = 0 ; i < 4; i++)
    {
        if (!this->inventory[i])
        {
            this->inventory[i] = m;
            break;
        }
    }
}

// Do not "delete" the elements : just put them at NULL.
void Character::unequip(int idx)
{
    if (idx > -1 && idx < 4)
    {
        this->inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx > -1 && idx < 4 && this->inventory[idx])
    {
        this->inventory[idx]->use(target);
    } 
}
