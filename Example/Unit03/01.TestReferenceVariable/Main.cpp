#include <iostream>

int main() {
	int x = 1;
	int& rx = x;
	int y{ 10 }, &ry=y;
	std::cout << "x=" << x << ",y=" << y << std::endl;
	rx = 2, ry = 12;
	std::cout << "x=" << x << ",y=" << y << std::endl;

	const char* s = "Hello";
	const char* t = "World";
	const char*& r = s;
	std::cout << r << std::endl;
	r = t; // 此时，同时将t的值也赋予了s;
	std::cout << r << std::endl;
	std::cout << s << std::endl;

	return 0;
}