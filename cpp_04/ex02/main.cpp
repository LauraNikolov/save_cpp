#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"


int main() {
    Animal* animal = new Animal();

    std::cout << "Animal instance created, which should not be possible!" << std::endl;

    delete animal;

    return 0;
}