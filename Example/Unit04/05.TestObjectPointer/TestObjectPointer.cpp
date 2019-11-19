#include <iostream>
#include "Circle.h"

int main() {
	//Circle* pc1 = new Circle{ 1.0 };
	//auto* pc1 = new Circle{ 1.0 };
	auto pc1 = new Circle{ 1.0 }; // 以上三者等价

	Circle c3{ 2.0 };
	auto pc2 = &c3;

	std::cout << (*pc1).getArea() << std::endl;
	std::cout << pc2->getArea() << std::endl;

	auto pc5 = new Circle[3]{ 1.0,2.0,3.0 };
	std::cout << typeid(pc5).name() << std::endl;
	for (int i = 0; i < 3; i++) {
		std::cout << pc5[i].getArea() << std::endl;
	}

	delete pc1;
	delete[] pc5;

	pc1 = pc5 = nullptr;

	return 0;
}