#include "Cure.hpp"

Cure::Cure() : AMateria ("cure") {}

Cure::~Cure(){}
        
AMateria *Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter& other)
{
    std::cout << "* heals " << other.getName() << "’s wounds *" << std::endl;
}

Cure::Cure(std::string const &type) : AMateria (type) {}

Cure::Cure (Cure const &other)
{
    *this = other;
}

Cure &Cure::operator=(Cure const &other)
{
    this->_type = other.getType();
    return (*this);
}