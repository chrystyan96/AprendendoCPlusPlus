#include "ManipulandoArquivos.h"

void ManipulandoArquivos::manipularArquivo() {
    std::string line;
    //create an output stream to write to the file
    //append the new lines to the end of the file
    std::ofstream myfileI("input.txt", std::ios::app);
    if (myfileI.is_open())
    {
        myfileI << "\nI am adding a line.\n";
        myfileI << "I am adding another line.\n";
        myfileI.close();
    }
    else std::cout << "Unable to open file for writing";

    //create an input stream to write to the file
    std::ifstream myfileO("input.txt");
    if (myfileO.is_open())
    {
        while (std::getline(myfileO, line))
        {
            std::cout << line << '\n';
        }
        myfileO.close();
    }

    else std::cout << "Unable to open file for reading";
}


