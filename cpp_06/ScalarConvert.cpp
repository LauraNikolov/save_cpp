#include "ScalarConvert.hpp"
#include <cstdlib>
#include <climits>

ScalarConvert::ScalarConvert() {

}


ScalarConvert::ScalarConvert(const ScalarConvert &other) {
    (void)other;
}



ScalarConvert &ScalarConvert::operator=(const ScalarConvert &other) {
    (void)other;
    return(*this);
}


42 ->int
42.42 ->double 
42.42f ->float
A ->lettre



char getType(const std::string &nbr) {
    if (!nbr.length())
		return 0;

	if (nbr == "nan" || nbr == "inf" ||
			nbr == "+inf" || nbr == "-inf")
		return 'd';
	if (nbr == "nanf" || nbr == "inff" ||
			nbr == "+inff" || nbr == "-inff")
		return 'f';

    if(nbr.size() == 1 && !std::isdigit(nbr[0]))
        return('c');
    
    bool fract_part = false;
    bool point = false;
    bool f = false;
    bool integer_part = false;

    for(size_t i = 0; i < nbr.size(); i++) {
        if(i == 0 && nbr[i] == '-')
            continue;
        if(!std::isdigit(nbr[i])) {
            if(nbr[i] == '.' && point == false) {
                if(integer_part == false && i != 0) {
                    integer_part = true;
                    point = true;
                }
                else 
                    return(0); 
            }


            else if(nbr[i] == 'f' && f == false) {
                if(integer_part == true && fract_part == true && i == nbr.size() - 1) {
                    f = true;
                }
                else 
                    return(0); 
            }

            else 
                return(0); 
        }

        else {
            if(point == true) {
                fract_part = true;
            }

        }
    }

    if(fract_part == true && integer_part == true && f == true)
        return('f');
    if(fract_part == true && integer_part == true)
        return('d');
    if(integer_part == false)
        return('i');
    else
        return(0);
}

void ConvertInt(const std::string &nbr) {
     long int int_value;
     long float float_value;
    //  double double_value;



    int_value = std::strtol(nbr.c_str(), NULL, 10);

    if(int_value < -128 || int_value > 127) 
        std::cout << "char: impossible" << std::endl;
    else if(!std::isprint(int_value))
        std::cout << "char: not displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(int_value) << std::endl;

    if(int_value > INT_MAX || int_value < INT_MIN)
        std::cout << "int : impossible" << std::endl;
    else
        std::cout << "int: " << int_value << std::endl;
    
    float_value = std::strtof(nbr.c_str(), NULL, 10);
    if(float_value > FLOAT_MAX)
    
}


void ScalarConvert::convert(const std::string &nbr) {

    char Type = getType(nbr);
    switch(Type) {
        case 'i' :
            std::cout << "is a int" << std::endl;
            ConvertInt(nbr);
            break;
        case 'f' : 
            std::cout << "is a float" << std::endl;
            break;
        case 'd' :
            std::cout << "is a double" << std::endl;
            break;
        case 'c' : 
            std::cout << "is a char" << std::endl;
            break;
        case 'n' : 
            std::cout << "is nothing" << std::endl;
            break;
        default :
            std::cout << "Error" << std::endl;
            break;
    }

}