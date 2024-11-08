#include <iostream>
#include <fstream> 

void search_and_replace(std::string line, std::string s1, std::string s2)
{
    size_t pos = line.find(s1);
    //if(pos == 0)
    {
        std::cout << line << std::endl;
    }
}

int main(int argc, char **argv)
{
    if(argc != 4)
        return(std::cout << "Error: Wrong argument\n", 0);
    std::ifstream file(argv[1]);
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    if(!file)
        return(std::cerr << "Error: can't open file\n", 0);
    std::string line;
    while(getline(file, line))
        search_and_replace(line, s1, s2);
    file.close();
}