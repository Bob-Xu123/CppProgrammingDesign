#include <iostream>
#include <typeinfo>

using std::cout;
using std::endl;
using std::cin;

auto max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	// auto 变量必须在定义时初始化
	auto x = 3;
	auto y{ 42 }, z{ x };
	cout << "z= " << z << endl;

	// 定义在一个auto序列的变量必须始终推导成同一类型
	auto x1{ 1 }, x2{ 2 };

	// 如果auto初始化表达式是引用或const，则去除引用或const语义
	int y1{ 42 }, & y2{ y1 };
	auto y3{ y2 };
	cout << typeid(y3).name() << endl;

	// 如果auto关键字带上&号，则不会去除引用或const语意
	auto& z1{ y2 };
	cout << typeid(z1).name() << endl; // note：这里的typeid并不能查看z1是否引用类型

	// 如果初始表达式为数组时，auto关键字推导类型为指针
	int p[3]{ 1,2,3 };
	auto p1 = p;
	cout << typeid(p1).name() << endl;

	// 若表达式为数组且auto带上&，则推导类型为数组类型
	auto& p2{ p };
	cout << typeid(p2).name() << endl;

	// C++14中，auto可以作为函数的返回类型和参数类型
	cout << max(x1, x2) << endl;

	//cin.get();
	return 0;
}