#include <iostream>
#include <fstream> 

void search_and_replace(std::string line, std::string s1, std::string s2)
{
    if(line == )
}

int main(int argc, char **argv)
{
    if(argc != 4)
        return(std::cout << "Error: Wrong argument\n", 0);
    std::ifstream file(argv[1]);
    if(!file)
        return(std::cerr << "Error: can't open file\n", 0);
    std::string line;
    while(getline(file, line))
    {
        std::cout << line << std::endl;
        search_and_replace(line, std::string s1(argv[2]), std::string s2(argv[3]));
    }
    file.close;
}