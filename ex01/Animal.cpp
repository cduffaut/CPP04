#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void    Animal::makeSound() const
{
    std::cout << this->type << ": * Random animal noise *" << std::endl;
}

Brain *Animal::getBrain()
{
    return (NULL);
}

std::string Animal::getType() const
{
    return (type);
}