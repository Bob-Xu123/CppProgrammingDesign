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

double Circle::getRaidus() const { //const��������һ��������
	return radius;
}

/*
Circle Circle::setRadius(double radius_) {
	this->radius = radius_;
	//return Circle{ radius }; //return��һ���µ�������Circle��Ķ���
	return *this; // ʹ��thisָ��
}
*/

Circle& Circle::setRadius(double radius_) {
	this->radius = radius_;;
	return *this;
}