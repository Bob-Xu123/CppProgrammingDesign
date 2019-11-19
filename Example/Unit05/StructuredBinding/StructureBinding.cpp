#include <iostream>
#include <array>

int main() {
	//int a[]{ 1,2,3 };
	std::array<int, 3> a{ 1,2,3 };
	std::array b{ 11, 12 };

	auto [e1, e2, e3] = a; // ��ʶ��������std::array�е�����Ԫ������һ��, ֻ��ʹ��auto

	auto& [f1, f2] { b };

	std::cout << e1 << " " << e2 << " " << e3 << std::endl;

	f1 = 10;
	std::cout << b[0] << " " << b[1] << std::endl;



	return 0;
}