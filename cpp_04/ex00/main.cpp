#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
    std::cout << "-------------- Testing Animal, Dog, and Cat classes -----------------" << std::endl;

    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "Dog type: " << dog->getType() << std::endl;
    std::cout << "Cat type: " << cat->getType() << std::endl;

    std::cout << "Dog sound: ";
    dog->makeSound(); // should output the dog sound

    std::cout << "Cat sound: ";
    cat->makeSound(); // should output the cat sound

    std::cout << "Animal sound: ";
    meta->makeSound(); // should output the animal sound

    delete meta;
    delete dog;
    delete cat;

    std::cout << std::endl;

    std::cout << "----------------- Testing WrongAnimal and WrongCat classes ---------------" << std::endl;

    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "WrongCat type: " << wrongCat->getType() << std::endl;
    std::cout << "WrongAnimal type: " << wrongMeta->getType() << std::endl;

    std::cout << "WrongCat sound: ";
    wrongCat->makeSound(); // should output the WrongAnimal sound

    std::cout << "WrongAnimal sound: ";
    wrongMeta->makeSound(); // should output the WrongAnimal sound

    std::cout << std::endl;
    std::cout << "-------------- Deleting all instances -----------------" << std::endl;

    delete wrongMeta;
    delete wrongCat;

    std::cout << std::endl;

}