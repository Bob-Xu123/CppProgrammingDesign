#include <iostream>
#include <string>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"

int main() {
	Shape s1{ Color::blue, false };
	Circle c1{ 3.9, Color::green, true };
	Rectangle r1{ 4.0,1.0, Color::white, true };

	std::cout << s1.toString() << std::endl;
	std::cout << c1.toString() << std::endl;
	std::cout << r1.toString() << std::endl;

	std::cout << "c1's Area: " << c1.getArea() << std::endl;
	std::cout << "r1's Area: " << r1.getArea() << std::endl;

	return 0;
} 