#include <iostream>
#include "Square.h"

int Square::numberofObjects = 10;
int main() {
	Square s1;
	std::cout << s1.getNumberofObjects() << std::endl;
	Square s2{ 20.0 };
	std::cout << Square::getNumberofObjects() << std::endl; // ��̬������Ա����ʹ���������������
	std::cout << s2.getNumberofObjectsNoneStatic() << std::endl;
	//std::cout << Square::getNumberofObjectsNoneStatic() << std::endl; // �Ǿ�̬������Ա�޷�ʹ�����������ã�ֻ��ʹ��ʵ��.������()����

	return 0;
}