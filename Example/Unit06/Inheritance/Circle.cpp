#include "Circle.h"

Circle::Circle() {
	radius = 1.0;
}

Circle::Circle(double radius_, Color color_, bool isfilled_) : Shape{color_, isfilled_} {
	radius = radius_;
	//Shape{ color_, isfilled_ }; // 基类的构造函数一定是在派生类的构造函数的初始化列表里被调用，不能再函数体里再调用，如果初始化列表里不写东西，编译器会自动调用基类的默认构造函数
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

double Circle::getRaidus() const { //const表明这是一个常函数
	return radius;
}

void Circle::setRadius(double radius) {
	this->radius = radius;
}
