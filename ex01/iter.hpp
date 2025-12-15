#pragma once
#include <cstdlib>
#include <iostream>

template <typename T>
void print(const T& x)
{
    std::cout << x << std::endl;
}

template <typename T>
void iter(T* array, const size_t length, void (*func)(const T&))
{
    for (size_t i = 0; i < length; i++)
    {
        func(array[i]);
    }
}