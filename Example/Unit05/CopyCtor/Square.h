#pragma once
#include <iostream>

class Square {
private:
	double side{ 1.0 };
	static int numberofObjects;
public:
	Square(double side) {
		this->side = side;
		numberofObjects++;
	}
	Square() : Square(1.0) {};

	/*Square(const Square& s) {
		this->side = s.side;
		numberofObjects++;
		std::cout << "Square(const Square& ) is invoked" << std::endl;
	}*/

	Square(const Square& s) : Square(s.side) {
		//this->side = s.side;
		//numberofObjects++;
		std::cout << "Square(const Square& ) is invoked" << std::endl;
	}

	~Square() {
		numberofObjects--;
	}

	double getSide() { return side; }
	void setSide(double side) { this->side = side; }
	double getArea() { return side * side; }
	static int getNumberofObjects() { return numberofObjects; }
	int getNumberofObjectsNoneStatic() { return numberofObjects; }
};