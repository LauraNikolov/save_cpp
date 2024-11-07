#include "Weapon.hpp"

class HumanB {

    public : 
        HumanB(std::string name);
        void attack();
        void setWeapon(Weapon &weapon_ref);
    private : 
        //pointeur sur classe
        Weapon *weapon;
        std::string name;
};