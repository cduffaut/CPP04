#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
    this->brain = new Brain();
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &other)
{
    this->brain = new Brain();
    std::cout << "Cat Copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        delete this->brain;
        this->brain = new Brain(*(other.brain));
    }
    std::cout << "Cat Gestion operator called" << std::endl;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << this->type <<  ": Miaou" << std::endl;
}

Brain *Cat::getBrain()
{
    return (this->brain);
}