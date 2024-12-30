#include <iostream>


class Bureaucrat {
    private : 
        const std::string _name;
        int grade;

    public: 
        Bureaucrat();
        Bureaucrat(const Bureaucrat &other);
        operator=(const Bureaucrat &other);
        ~Bureaucrat();
        getName();
        getGrade();
        setGrade();
}