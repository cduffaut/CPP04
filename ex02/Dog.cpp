#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
    this->brain = new Brain();
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &other)
{
    this->brain = new Brain();
    std::cout << "Dog Copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        delete this->brain;
        this->brain = new Brain(*(other.brain));
    }
    std::cout << "Dog Gestion operator called" << std::endl;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << this->type <<  ": Ouaf" << std::endl;
}

Brain *Dog::getBrain()
{
    return (this->brain);
}