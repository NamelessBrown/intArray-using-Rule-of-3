// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "intArray.h"
#include <iostream>

int main()
{
    Nameless::intArray in(10);

    for (int i = 0; i < 10; i++)
    {
        in[i] = i;
        std::cout << in[i] << '\n';
    }
    
}
