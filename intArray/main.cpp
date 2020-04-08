// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "intArray.h"
#include <iostream>
#include <random>

int main()
{
    Nameless::intArray test{ 3 };
    Nameless::intArray moveTest{ 5 };

    for (unsigned i = 0; i < test.Size(); i++)
    {
        test[i] = i;
        std::cout << test[i] << '\n';
    }

    std::cout << "\n\n";

    moveTest = test;

    for (unsigned i = 0; i < moveTest.Size(); i++)
    {
        std::cout << moveTest[i] << '\n';
    }


    std::cin.get();
}
