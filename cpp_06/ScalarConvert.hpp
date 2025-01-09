#ifndef SCARLARCONVERT_HPP
    #define SCALARCONVERT_HPP

#include <iostream>
#include <cctype>

class ScalarConvert {
    public :
        static void convert(const std::string &nbr);
    
    private :
        ScalarConvert();
        ScalarConvert(const ScalarConvert &other);
        ScalarConvert &operator=(const ScalarConvert &other);

};


#endif