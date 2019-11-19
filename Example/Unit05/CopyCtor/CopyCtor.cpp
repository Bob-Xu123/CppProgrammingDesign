#include <iostream>
#include "Square.h"
using std::cout;
using std::endl;
int Square::numberofObjects = 0;

int main() {
	Square s1(10.0);
	cout << "Squares: " << Square::getNumberofObjects() << endl;

	Square s2{ s1 };
	cout << "Squares: " << Square::getNumberofObjects() << endl;

	Square* ps3 = new Square{ s1 };
	cout << "Squares: " << Square::getNumberofObjects() << endl;

	cout << "s3's area is " << ps3->getArea() << endl;

	delete ps3;
	cout << "Squares: " << Square::getNumberofObjects() << endl;

	return 0;
}