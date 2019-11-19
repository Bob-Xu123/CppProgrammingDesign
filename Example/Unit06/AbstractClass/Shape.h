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
	std::array<string, 6> colorname{"white"s, "black"s, "red"s, "green"s, "blue"s, "yellow"s };
public:
	Shape();
	Shape(Color color_, bool filled_);
	Color getColor();
	void setColor(Color color_);
	bool isFilled();
	void setFilled(bool filled_);
	string toString();
	string colortoString();
	string isfilledtoString();

	virtual double getArea() = 0; // 纯虚函数，只需要声明，不需要写实现，那是在派生类里面干的
};