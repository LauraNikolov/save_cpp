#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

/*
Une copie profonde signifie que toutes les donnees allouees dynamiquemen sont dupliques, 

Ainsi pour cat et dog, lorsqu'on copie (copy constructor) ou assigne (operator=) un objet, 
on doit dupliquer le contenu de la classe Brain, qui est un tableau de 100 strings.
*/

void testDeepCopy() {
    std::cout << "--------------- Testing deep copy --------------------" << std::endl;

    Dog originalDog;
    Dog copiedDog = originalDog;
    Cat originalCat;
    Cat copiedCat = originalCat;

    std::cout << "Original Dog Brain Address: " << originalDog.getBrain() << std::endl;
    std::cout << "Copied Dog Brain Address: " << copiedDog.getBrain() << std::endl;
    std::cout << "Original Cat Brain Address: " << originalCat.getBrain() << std::endl;
    std::cout << "Copied Cat Brain Address: " << copiedCat.getBrain() << std::endl;
}

int main() {
    std::cout << "------------------  Creating and testing animals array ----------------------" << std::endl;

    Animal* animals[10];

    for (int i = 0; i < 10; ++i) {
        if (i < 5) {
            animals[i] = new Dog();
        } else {
            animals[i] = new Cat();
        }
    }

    for (int i = 0; i < 10; ++i) {
        animals[i]->makeSound();
    }

    std::cout << "------------------  Deleting animals array ----------------------" << std::endl;

    for (int i = 0; i < 10; ++i) {
        delete animals[i];
    }

    std::cout << std::endl;
    testDeepCopy();

    return 0;
}