#include <iostream>
using std::cout;
using std::endl;

int main() {
	// �б��ʼ��������խ��
	int x{ 1 };
	cout << x << endl;

	// ǿ������ת����int->double, double->int
	cout << 1 / 2 << endl;
	cout << static_cast<double>(1) / 2 << endl;

	return 0;
}


