#include <iostream>
#include "Circle.h"

int main() {

	Circle ca1[]{ Circle{ 1.0 }, Circle{ 2.0 }, Circle{ 3.0 }};
	Circle ca2[]{ 10.0, 11.0, 12.0 };

	ca1[2].setRadius(4.0);
	ca2[1].setRadius(100.0);


	double area1 = 0.0;
	for (int i = 0; i < sizeof(ca1) / sizeof(ca1[0]); i++) {
		std::cout << ca1[i].getArea() << std::endl;
		area1 += ca1[i].getArea();
	}


	auto area2{ 0.0 };
	for (auto x : ca2) {
		std::cout << x.getArea() << std::endl;
		area2 += x.getArea();
	}
	std::cout << "total of area1 = " << area1 << "\ntotal of area2 = " << area2 << std::endl;


	return 0;
}
