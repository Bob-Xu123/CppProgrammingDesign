#include <iostream>
using std::cout;
using std::endl;

int main() {

	int* p = nullptr;
	int* q{ nullptr }; // C++11 initialize list

	p = new int(8); // ��̬����һ��ռ䣬�������ֵΪ8��δ�������α������������ռ�ĵ�ַ����ָ��p;
	q = new int[4]; // ��̬����һ������4������Ԫ�ص�����
	p2 = new int();

	cout << "Before: p = " << *p << endl;
	*p = 12;
	cout << "After: p = " << *p << endl;

	for (int i = 0; i < 4; i++) {
		q[i] = 10 + i;
		cout << *(q + i) << endl;
	}
	delete p; // �ͷ�֮ǰ������ڴ�
	delete[] q; // �ͷ�֮ǰ������ڴ棬���������ͷ�

	return 0;
}