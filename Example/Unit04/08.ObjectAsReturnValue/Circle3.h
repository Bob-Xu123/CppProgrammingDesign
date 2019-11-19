#pragma once

class Circle {

public:
	double radius;

	Circle();
	Circle(double radius_);
	double getArea();

	double getRaidus() const;
	//Circle setRadius(double radius);
	Circle& setRadius(double radius);


};