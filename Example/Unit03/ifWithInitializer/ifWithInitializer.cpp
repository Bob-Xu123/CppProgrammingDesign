/* This program need a C++17-conformable compiler*/

#include <iostream>
#include <cstdlib>

int main() {
	// �����ʾ��Ϣ���������ķ�Χ
	std::cout << "��������0-100�������...\n";

	// �����ʾ��Ϣ�����û���������
	std::cout << "���������²��������";

	// ��������������û�������Ϣ
	int x;
	std::cin >> x;

	// ������������ж��û�����Ĵ�С����ʾ�û��´���/��С��/������
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