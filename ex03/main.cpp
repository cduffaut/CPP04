#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
    std::cout << "--------test from the subject--------" << std::endl;

    IMateriaSource* src = new MateriaSource(); 
    
    src->learnMateria(new Ice()); 
    src->learnMateria(new Cure());
    
    ICharacter* me = new Character("me");
    AMateria* tmp;
    
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    ICharacter* bob = new Character("bob"); 
    me->use(0, *bob);
    me->use(1, *bob);
    
    std::cout << "--------own tests--------" << std::endl;


    // Test 1: Using an invalid index in the unequip function (should do nothing)
    me->unequip(5);

    // Test 2: Using an invalid index in the unequip function (should do nothing)
    me->unequip(-2);

    delete bob;
    delete me;
    delete src;

    // Test 3: Using a valid index to equip a new Materia and using it
    IMateriaSource* test = new MateriaSource(); 

    test->learnMateria(new Cure());

    ICharacter* Bobby = new Character("Bobby");
    AMateria* test2;

    test2 = test->createMateria("cure");
    Bobby->equip(test2);
    Bobby->use(0, *Bobby); 

    delete test;
    delete Bobby;

    return 0;
}