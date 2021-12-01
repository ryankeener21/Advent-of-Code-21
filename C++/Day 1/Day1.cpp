#include <iostream>
#include <fstream>

//Prompt - Submarine is taking measurements of different depths find how many times the input data increases

int main()
{
    std::ifstream ifs;

    ifs.open("input.txt");
    int temp = 1000;
    int currdepth = 0;
    int totalinc = 0;
    std::string line;

    while(!ifs.eof())
    {
        getline(ifs, line);
        currdepth = std::stoi(line);
        std::cout << temp << " " << currdepth << std::endl;
        if(temp < currdepth)
        {
            totalinc++;
        }

        temp = currdepth;
    }

    std::cout << totalinc << std::endl;
}