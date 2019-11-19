#include <iostream>

void swap(int& a, int& b) {
	int t;
	t = a; a = b; b = t;
}

int main() {
	int x = 1, y = 42;
	std::cout << "Before calling swap():" << std::endl;
	std::cout << "x=" << x << ",y=" << y << std::endl;
	swap(x, y);
	std::cout << "After calling swap():" << std::endl;
	std::cout << "x=" << x << ",y=" << y << std::endl;
	return 0;
}