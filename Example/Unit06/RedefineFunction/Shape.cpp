#include "Shape.h"

Shape::Shape() = default;
Shape::Shape(Color color_, bool filled_) {
		color = color_;
		isfilled = filled_;
	}
Color Shape::getColor() { return color; }
void Shape::setColor(Color color_) { color = color_; }
bool Shape::isFilled() { return isfilled; }
void Shape::setFilled(bool filled_) { isfilled = filled_; }

string Shape::toString() {
	return "Shape: " + colorname[static_cast<int>(color)] + " "
		+ (isfilled ? "filled"s : "not filled"s);
}

string Shape::colortoString() {
	return "Shape: " + colorname[static_cast<int>(color)];
}

string Shape::isfilledtoString() {
	return (isfilled ? "filled"s : "not filled"s);
}