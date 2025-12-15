#include <iostream>
#include <string>
#include "Array.hpp"

int main()
{
	std::cout << "-- Test Array<int> --" << std::endl;
	Array<int> a(5);
	for (unsigned int i = 0; i < a.size(); ++i)
		a[i] = i + 1;

	std::cout << "a: ";
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;

	std::cout << "-- Copy constructor --" << std::endl;
	Array<int> b(a);
	b[0] = 42;
	std::cout << "a[0] = " << a[0] << ", b[0] = " << b[0] << std::endl;

	std::cout << "-- Assignment operator --" << std::endl;
	Array<int> c;
	c = b;
	std::cout << "c: ";
	for (unsigned int i = 0; i < c.size(); ++i)
		std::cout << c[i] << " ";
	std::cout << std::endl;

	std::cout << "-- Test Array<std::string> --" << std::endl;
	Array<std::string> s(3);
	s[0] = "hello";
	s[1] = "world";
	s[2] = "!";
	for (unsigned int i = 0; i < s.size(); ++i)
		std::cout << s[i] << " ";
	std::cout << std::endl;

	std::cout << "-- Test out-of-bounds (should catch exception) --" << std::endl;
    try
    {
        a[10] = 99;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

	std::cout << "-- Const access --" << std::endl;
	const Array<int> ca = a;
	std::cout << "ca[1] = " << ca[1] << std::endl;

	return 0;
}

