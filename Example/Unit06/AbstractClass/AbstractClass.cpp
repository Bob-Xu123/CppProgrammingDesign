#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
using std::cout;
using std::endl;

int main() {
	//Shape s{ Color::black, true}
	Circle c{ 1.2, Color::green, false };
	Shape* p = &c;
	cout << p->getArea() << endl;
	return 0;
}