// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "intArray.h"
#include <iostream>
#include <random>

int main()
{
    Nameless::intArray in{ 10 };

    for (int i = 0; i < 10; i++)
    {
        in[i] = i;
        std::cout << in[i] << '\n';
    }
    
    std::cout << "\n\n";

    Nameless::intArray copyTest{ in };

    for (int i = 0; i < 10; i++)
    {
        std::cout << copyTest[i] << '\n';
    }

    std::cout << "\n\n";

    Nameless::intArray assignmentTest{ 15 };

    std::random_device rd;
    std::mt19937 rng(rd());
    std::uniform_int_distribution<int> distribution(0, 100);

    for (int i = 0; i < 15; i++)
    {
        assignmentTest[i] = distribution(rng);
        std::cout << assignmentTest[i] << '\n';
    }

    std::cout << "\n\n";

    copyTest = assignmentTest;

    for (int i = 0; i < 15; i++)
    {
        std::cout << copyTest[i] << '\n';
    }

    std::cin.get();
}
