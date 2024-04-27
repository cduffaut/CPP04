#include "Ice.hpp"

Ice::Ice() : AMateria ("ice") {}

Ice::~Ice(){}
        
AMateria *Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter& other)
{
    std::cout << "* shoots an ice bolt at " << other.getName() << " *" << std::endl;
}

Ice::Ice(std::string const &type) : AMateria(type) {}

Ice::Ice (Ice const &other)
{
    *this = other;
}

Ice &Ice::operator=(Ice const &other)
{
    this->_type = other.getType();
    return (*this);
}