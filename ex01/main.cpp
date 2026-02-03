#include <iostream>
#include <string>
#include "iter.hpp"

int main()
{
    // test avec int
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intLen = 5;

    iter(intArray, intLen, printInt);
    iter(intArray, intLen, incrementInt);
    iter(intArray, intLen, printInt);

    std::cout << "-----" << std::endl;

    const int constIntArray[] = {10, 20, 30};
    size_t constIntLen = 3;

    iter(constIntArray, constIntLen, printInt);

    std::cout << "-----" << std::endl;

    std::string strArray[] = {"hello", "world", "42"};
    size_t strLen = 3;

    iter(strArray, strLen, printString);

    return 0;
}
