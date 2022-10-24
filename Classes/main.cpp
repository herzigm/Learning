#include <iostream>

#include "line.h"


int main()
{
    float begin = 1.0;
    float end   = 3.5;

    Line line(begin, end);

    float length = line.GetLength();
    std::cout << "Length: " << length << std::endl;

    return 0;
}