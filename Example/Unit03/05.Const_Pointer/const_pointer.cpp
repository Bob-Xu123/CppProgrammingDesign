#include <iostream>

int main() {

	int x{ 3 }, y{ 10 };

	const int* const p = &x; //第一个const含义：不能通过*p去改p指向的那块内存里的数据，第2个const含义：p的值不能再改，即p只能指向x。

	*p = 5; // 试图通过*p修改x的值，error！

	x = 5; // x并不是constant，可以改

	p = &y; // 试图让p指向其他地方，error！ 

	std::cout << x << std::endl;

	char* r = "hello"; // C语言中只会给warnning，C++中直接报错，因为"hello"是字面常量

	const char* r = "hello";


	return 0;
}

