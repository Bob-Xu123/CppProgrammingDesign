#include <iostream>
using std::cout;
using std::endl;

int main() {
	// 列表初始化不允许窄化
	int x{ 1 };
	cout << x << endl;

	// 强制类型转换，int->double, double->int
	cout << 1 / 2 << endl;
	cout << static_cast<double>(1) / 2 << endl;

	return 0;
}


