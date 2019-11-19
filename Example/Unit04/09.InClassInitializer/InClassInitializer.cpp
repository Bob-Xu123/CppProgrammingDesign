#include <iostream>
class X {
	int a = 1;
	int b = { 2 };
	//int c(3); //这种就地初始化的方式再C++11中是不允许的 // 错误：不允许用小括号初始化

	std::string s{ 'H','e','l' };
	std::string s2{ "Hello" };
	std::string s3 = "World";

	//int arr1[] = { 1,2,3 }; // 错误：数组类型成员不能自动推断大小
	int arr1[3] = { 1,2,3 };
	int arr2[4]{ 1 };
	double arr3[2]{ 12.0,32.0 };
	//auto arr4[]{ 1,2 };
};


int main() {

	return 0;
}