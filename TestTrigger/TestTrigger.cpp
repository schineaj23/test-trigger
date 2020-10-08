// TestTrigger.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#ifndef HELLO_NAME
constexpr const char* HELLO_NAME;
#endif

int main()
{
    std::cout << "Hello " << HELLO_NAME << "\n";
}

