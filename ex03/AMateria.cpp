#include "AMateria.hpp"

AMateria::AMateria(): _type("") {}

AMateria::~AMateria(){}

AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria::AMateria(AMateria const &other)
{
    *this = other;
}

AMateria &AMateria::operator=(AMateria const & other)
{
    this->_type = other.getType();
    return (*this);
}

std::string const & AMateria::getType() const
{
    return (_type);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}