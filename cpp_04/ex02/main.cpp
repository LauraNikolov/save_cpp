#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"


int main() {
    Animal* animal = new Animal();

    // Si vous atteignez cette ligne, cela signifie que la classe n'est pas abstraite
    std::cout << "Animal instance created, which should not be possible!" << std::endl;

    delete animal;

    return 0;
}