#include "DiamondTrap.hpp"


int main() {
    DiamondTrap lolo("lolo");

    lolo.WhoAmI();
    std::cout << "lolo damage =  " << lolo.getAttackDamage() << std::endl;
    std::cout << "lolo energy = "  << lolo.getEnergyPoint() << std::endl;
    std::cout << "lolo hit point = " << lolo.getHitPoint() << std::endl;
}