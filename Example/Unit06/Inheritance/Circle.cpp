#include "Circle.h"

Circle::Circle() {
	radius = 1.0;
}

Circle::Circle(double radius_, Color color_, bool isfilled_) : Shape{color_, isfilled_} {
	radius = radius_;
	//Shape{ color_, isfilled_ }; // ����Ĺ��캯��һ������������Ĺ��캯���ĳ�ʼ���б��ﱻ���ã������ٺ��������ٵ��ã������ʼ���б��ﲻд���������������Զ����û����Ĭ�Ϲ��캯��
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

double Circle::getRaidus() const { //const��������һ��������
	return radius;
}

void Circle::setRadius(double radius) {
	this->radius = radius;
}
