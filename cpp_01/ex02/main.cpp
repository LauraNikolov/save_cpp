#include "iostream"

int main(void) {
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string& stringREF = str;
    std::cout << "String's adress" << &str << std::endl;
    std::cout << "adress stored by stringPTR : " << stringPTR << std::endl;
    std::cout << "adress stored by stringREF: " << &stringREF << std::endl;

    std::cout << "value of string : " << str << std::endl;
    std::cout << "value pointed by stringPTR : " << *stringPTR << std::endl;
    std::cout << "value pointed by stringREF : " << stringREF << std::endl;
}