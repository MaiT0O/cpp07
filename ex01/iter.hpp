#pragma once
#include <cstdlib>
#include <iostream>

void printInt(const int& x)
{
    std::cout << x << std::endl;
}

void incrementInt(int& x)
{
    x++;
}

void printString(const std::string& s)
{
    std::cout << s << std::endl;
}

template <typename T, typename F>
void iter(T* array, const size_t length, F func)
{
    for (size_t i = 0; i < length; i++)
    {
        func(array[i]);
    }
}