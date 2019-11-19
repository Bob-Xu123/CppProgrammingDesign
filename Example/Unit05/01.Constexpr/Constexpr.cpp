#include <iostream>
#include <array>
#include <cassert>
using std::cout;
using std::endl;
//����1���õݹ����factorial����assert���3�Ľ׳�
//����2����factorial��ɳ������ʽ����static_assert���3�Ľ׳�
//����3������factorial(4)��С������

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