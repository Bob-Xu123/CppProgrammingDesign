/* This program need a C++17-conformable compiler*/

#include <iostream>
#include <cstdlib>

int main() {
	// 输出提示信息：生成数的范围
	std::cout << "正在生成0-100间的整数...\n";

	// 输出提示信息：请用户输入整数
	std::cout << "清输入您猜测的整数：";

	// 定义变量，保存用户输入信息
	int x;
	std::cin >> x;

	// 生成随机数，判断用户输入的大小，提示用户猜大了/猜小了/猜中了
	if (int y = rand()%100; x == y) {
		std::cout << "bingo!" << std::endl;
	}
	else if (y > x) {
		std::cout << "underestimate" << std::endl;
	}
	else {
		std::cout << "overestimate" << std::endl;
	}


	return 0;
}