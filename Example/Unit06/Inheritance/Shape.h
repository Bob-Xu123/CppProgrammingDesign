#pragma once
#include <iostream>
#include <string>
#include <array>
using std::string;
using namespace std::string_literals;
enum class Color {
	white, black, red, green, blue, yellow
};

class Shape {
private:
	Color color{ Color::black };
	bool isfilled{ false };
public:
	Shape() = default;
	Shape(Color color_, bool filled_) {
		color = color_;
		isfilled = filled_;
	}
	Color getColor() { return color; }
	void setColor(Color color_) { color = color_; }
	bool isFilled() { return isfilled; }
	void setFilled(bool filled_) { isfilled = filled_; }

	string toString() {
		std::array<string, 6> c{ "white"s, "black"s, "red"s, "gree"s, "blue"s, "yellow"s };
		return "Shape: " + c[static_cast<int>(color)] + " " + (isfilled ? "filled"s : "not filled"s);
	}
};