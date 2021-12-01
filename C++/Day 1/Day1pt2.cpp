#include <iostream>
#include <fstream>

//Prompt - Submarine is taking measurements of different depths find how many times the sum of three consecutive data points increase

int main()
{
    std::ifstream ifs;

    ifs.open("input.txt");
    int deptha, depthb, depthc = 0;
    int currdepth = 0;
    int totalinc = 0;

    std::string line;
    
    getline(ifs, line);
    deptha = std::stoi(line);
    getline(ifs, line);
    depthb = std::stoi(line);
    getline(ifs, line);
    depthc = std::stoi(line);

    while(!ifs.eof())
    {
        getline(ifs, line);
        currdepth = std::stoi(line);
        if((deptha + depthb + depthc) < (depthb + depthc + currdepth))
        {
            totalinc++;
        }

        deptha = depthb;
        depthb = depthc;
        depthc = currdepth;
    }

    std::cout << totalinc << std::endl;
}