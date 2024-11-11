#include <iostream>
#include <fstream> 

std::string search_and_replace(std::string line, std::string s1, std::string s2)
{
    size_t find_index = 0;
    size_t begin = 0;
    while ((find_index = line.find(s1, begin)) != std::string::npos)
    {
        line.erase(find_index, s1.size()); 
        line.insert(find_index, s2); 
        begin = find_index; 
    }
    return line;
}


int main(int argc, char **argv)
{
    // ! proteger tous les appels de fonction de manipulation de fichier
    if(argc != 4)
        return(std::cout << "Error: Wrong argument\n", 0);
    if(!argv[2][0] || !argv[3][0])
    {
        std::cerr << "Error: arguments are empty" << std::endl;
        return(1);
    }
    //open the file
    std::ifstream file(argv[1]);
    if(!file)
    {
        std::cerr << "Error: can't open file" << std::endl;
        return(1);
    }
    //create the tempory file
    std::ofstream temp_file(".tmp", std::ios::out);
    if(!temp_file)
    {
        std::cerr << "error: can't create tempory file" << std::endl;
        file.close();
        return(1);
    }
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string line;
    std::string replace;
    while(getline(file, line))
    {
        replace = search_and_replace(line, s1, s2);
        temp_file << replace << std::endl;
    }
    //replace file
    file.close();
    temp_file.close();
    remove(argv[1]);
    rename(".tmp", argv[1]);
}


