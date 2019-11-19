#include "Circle.h"

// 以下是Circle类的实现：
Circle::Circle() {
	radius = 1.0;
}

Circle::Circle(double radius_) {
	radius = radius_;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

