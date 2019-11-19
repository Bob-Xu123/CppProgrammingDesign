#include <iostream>
#include <cassert>
#include"StackOfIntegers.h"
// 任务2：创建StackOfIntegers对象，展示入栈出栈操作

int main() {
	StackOfIntegers s1;
	for (int i = 0; i < 5; i++) {
		s1.push(i + 1);
	}
	std::cout << "Stack size: " << s1.getSize() << std::endl;
	std::cout << "Top element is: " << s1.peek() << std::endl;
	int temp = s1.getSize();
	for (int i = 0; i < temp; i++) {
		std::cout << s1.pop() << " ";
	}
	std::cout << "\nStack is empty now? " << s1.empty() << std::endl;

	return 0;
}