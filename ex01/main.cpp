#include <iostream>
#include <string>
#include "iter.hpp"

int main()
{
    int intArr[] = {0, 1, 2, 3, 4};
    size_t intLen = sizeof(intArr) / sizeof(intArr[0]);
    std::cout << "int array:" << std::endl;
    iter(intArr, intLen, print<int>);

    std::string strArr[] = {"hello", "world", "iter"};
    size_t strLen = sizeof(strArr) / sizeof(strArr[0]);
    std::cout << "\nstring array:" << std::endl;
    iter(strArr, strLen, print<std::string>);

    char charArr[] = {'a', 'b', 'c', 'd'};
    size_t charLen = sizeof(charArr) / sizeof(charArr[0]);
    std::cout << "\nchar array:" << std::endl;
    iter(charArr, charLen, print<char>);

    double dblArr[] = {1.1, 2.2, 3.3};
    size_t dblLen = sizeof(dblArr) / sizeof(dblArr[0]);
    std::cout << "\ndouble array:" << std::endl;
    iter(dblArr, dblLen, print<double>);

    return 0;
}
