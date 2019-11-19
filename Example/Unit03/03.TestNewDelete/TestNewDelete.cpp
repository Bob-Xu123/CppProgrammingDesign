#include <iostream>
using std::cout;
using std::endl;

int main() {

	int* p = nullptr;
	int* q{ nullptr }; // C++11 initialize list

	p = new int(8); // 动态申请一块空间，里面放着值为8的未命名整形变量，并把这块空间的地址交给指针p;
	q = new int[4]; // 动态申请一个包含4个整形元素的数组
	p2 = new int();

	cout << "Before: p = " << *p << endl;
	*p = 12;
	cout << "After: p = " << *p << endl;

	for (int i = 0; i < 4; i++) {
		q[i] = 10 + i;
		cout << *(q + i) << endl;
	}
	delete p; // 释放之前申请的内存
	delete[] q; // 释放之前申请的内存，针对数组的释放

	return 0;
}