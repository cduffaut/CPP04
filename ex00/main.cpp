#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

/*int main()
{
    const Animal* meta = new Animal(); const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl; std::cout << i->getType() << " " << std::endl; i->makeSound(); //will output the cat sound! j->makeSound();
    meta->makeSound();

    return 0;
}*/

int main(void)
{
    Animal  Random;
    Dog     Cane;
    Cat     Gatto;

    // Random make a sound
    std::cout << std::endl;
    Random.makeSound();

    // Dog make a sound
    Cane.makeSound();

    // Cat make a sound
    Gatto.makeSound();
    std::cout << std::endl;

    // "Wrong" part
    WrongAnimal Wrong;
    WrongCat    Fake;
    std::cout << std::endl;
    Wrong.makeSound();
    Fake.makeSound();
    std::cout << std::endl;
}