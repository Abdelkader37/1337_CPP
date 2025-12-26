#include <iostream>
#include <fstream>


int main(int ac, char **av)
{
    if(ac != 4)
        return(1);
    std::string s1 = av[2];
    if(s1.empty())
    {
        std::cerr << "Error: s1 cannot be empty." << std::endl;
        return(1);
    }
    std::string s2 = av[3];
    std::ifstream inFile(av[1]);
    if (!inFile.is_open()) 
    {
        std::cerr << "Error: Could not open file " << av[1] << std::endl;
        return (1);
    }
    std::string newfile = av[1];
    newfile += ".replace";
    std::ofstream outFile(newfile.c_str());
    if (!outFile.is_open()) {
        std::cerr << "Error: Could not create output file." << std::endl;
        inFile.close();
        return (1);
    }
    std::string buffer;
    if(inFile.is_open())
    {
        while (std::getline(inFile,buffer))
        {
            unsigned long pos = buffer.find(s1);
            while(pos != std::string::npos)
            {
                buffer.erase(pos, s1.length());
                buffer.insert(pos,s2);
                pos += s2.length();
                pos = buffer.find(s1,pos);
            }
            outFile << buffer;
            if (!inFile.eof())
                outFile << "\n";
        }
    }
    inFile.close();
    outFile.close();
}


