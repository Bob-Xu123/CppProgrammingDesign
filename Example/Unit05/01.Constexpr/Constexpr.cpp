#include <iostream>
#include <array>
#include <cassert>
using std::cout;
using std::endl;
//任务1：用递归计算factorial，用assert检查3的阶乘
//任务2：将factorial变成常量表达式，用static_assert检查3的阶乘
//任务3：创建factorial(4)大小的数组

int factorial(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}


int main() {
	int x = 3;
	auto f = factorial(x);
	assert(f == 6);
	cout << f <<endl;
	return 0;
}