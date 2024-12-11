#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main()
{
    Animal *Tab[10];


    for(int i = 0; i < 10; i++) {
        if(i < 5)
            Tab[i] = new Dog();
        else
            Tab[i] = new Cat();
    }

    for (int i = 0; i < 10; i++) {
        Tab[i]->makeSound();
        delete Tab[i]; }
    // const Animal* meta = new Animal();
    // meta->makeSound();
    // Animal animal;
    // animal.getType();
    return 0;
}