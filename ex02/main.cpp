#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// test with: leaks --atExit -- ./Brain
int main(void)
{
    // Should not compil
   //Animal test;

    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "First test: playing with our new brain features" << std::endl;
    std::cout << std::endl;
    // Create a Animal tab and new it
    Animal *tab[4];
    Brain   *test;
    Brain   *test2;

    tab[0] = new Dog();
    tab[1] = new Dog();
    tab[2] = new Cat();
    tab[3] = new Cat();

    test = tab[1]->getBrain();
    std::cout << std::endl;
    test->ideas[0] = "*Here's the idea of Dog two*";
    std::cout << test->ideas[0] << std::endl;
    tab[0]->makeSound();

    test2 = tab[3]->getBrain();
    test2->ideas[0] = "*Here's the idea of Cat one*";
    std::cout << test2->ideas[0] << std::endl;
    tab[3]->makeSound();
    std::cout << std::endl;

    // Clear the memory allocation
    for (int i = 0; i < 4; i++)
    {
        delete tab[i];
    }

    std::cout << std::endl;
    std::cout << "------------------------------" << std::endl;
    std::cout << "Second test: deep copy object." << std::endl;
    std::cout << std::endl;
    
    // Create a deep copy object 
    Dog dog;
    Dog cpy(dog);

    std::cout << std::endl;
    std::cout << "---------------------------------" << std::endl;
    std::cout << "Third test: main example subject." << std::endl;
    std::cout << std::endl;

    // test sujet
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak delete i;
    delete i;

    return (0);
}