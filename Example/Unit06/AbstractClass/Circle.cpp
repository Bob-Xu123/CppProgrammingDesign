#include "Circle.h"

Circle::Circle() {
	radius = 1.0;
}

Circle::Circle(double radius_, Color color_, bool isfilled_) : Shape{color_, isfilled_} {
	radius = radius_;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

double Circle::getRaidus() { //const表明这是一个常函数
	return radius;
}

void Circle::setRadius(double radius) {
	this->radius = radius;
}

string Circle::toString() {
	return "Circle: radius " + std::to_string(radius) + " "
		   + colortoString() + " " + isfilledtoString();
}