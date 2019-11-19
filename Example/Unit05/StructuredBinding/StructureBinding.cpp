#include <iostream>
#include <array>

int main() {
	//int a[]{ 1,2,3 };
	std::array<int, 3> a{ 1,2,3 };
	std::array b{ 11, 12 };

	auto [e1, e2, e3] = a; // 标识符类型与std::array中的数组元素类型一致, 只能使用auto

	auto& [f1, f2] { b };

	std::cout << e1 << " " << e2 << " " << e3 << std::endl;

	f1 = 10;
	std::cout << b[0] << " " << b[1] << std::endl;



	return 0;
}