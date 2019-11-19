#include <iostream>
#include "Square.h"

int Square::numberofObjects = 10;
int main() {
	Square s1;
	std::cout << s1.getNumberofObjects() << std::endl;
	Square s2{ 20.0 };
	std::cout << Square::getNumberofObjects() << std::endl; // 静态函数成员可以使用类的名字来调用
	std::cout << s2.getNumberofObjectsNoneStatic() << std::endl;
	//std::cout << Square::getNumberofObjectsNoneStatic() << std::endl; // 非静态函数成员无法使用类名来调用，只能使用实例.函数名()调用

	return 0;
}