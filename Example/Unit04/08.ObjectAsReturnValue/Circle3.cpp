#include "Circle3.h"

Circle::Circle() {
	radius = 1.0;
}

Circle::Circle(double radius_) {
	radius = radius_;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

double Circle::getRaidus() const { //const表明这是一个常函数
	return radius;
}

/*
Circle Circle::setRadius(double radius_) {
	this->radius = radius_;
	//return Circle{ radius }; //return了一个新的匿名的Circle类的对象
	return *this; // 使用this指针
}
*/

Circle& Circle::setRadius(double radius_) {
	this->radius = radius_;;
	return *this;
}