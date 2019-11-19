#include <iostream>
using namespace std;

class Circle {
private:
	double radius;
public:
	Circle() = default;
	Circle(double r) {
		radius = r;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

class Square {
private:
	double side;
public:
	Square() = delete;
	Square(double side) //:side{ side } {}
	{
		this->side = side;
	}
	double getArea() {
		return side * side;
	}
};

class Combo {
public:
	Circle c;
	Square s;

};

int main() {
	Combo o{};
	cout << o.c.getArea() << endl;


	return 0;
}

// C++的初始化真是让人怀疑人生，这一节没看太懂，以后遇到多了再来搞清楚
