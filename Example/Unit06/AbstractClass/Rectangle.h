#pragma once
#include "Shape.h"

class Rectangle : public Shape {
private:
	double width{ 1.0 };
	double height{ 1.0 };
public:
	Rectangle();
	Rectangle(double w, double h, Color color_, bool isfilled);

	double getWidth() const;
	double getHeight() const;
	void setWidth(double w);
	void setHeight(double h);
	double getArea() const;
	string toString();

};