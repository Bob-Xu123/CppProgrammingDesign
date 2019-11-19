#pragma once
#include "Shape.h"

class Circle : public Shape {
	double radius;
public:
	Circle();
	Circle(double radius_, Color color_, bool isfilled_);
	double getArea();

	double getRaidus() const;
	void setRadius(double radius);
};