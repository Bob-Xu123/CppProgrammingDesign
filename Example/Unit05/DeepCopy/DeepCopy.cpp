#include <iostream>
#include "Date.h"
#include "Employee.h"
using std::cout;
using std::endl;
//����1������Employee����e1����������e2
//����2������ģʽ�۲�e1��e2��birthday��Ա
//����3����ӿ������캯��ʵ�����
//����4������ģʽ�۲�e1��e2��birthday��Ա

int Employee::numberofObjects = 0;
int main() {
	Employee e1{ "Ale", Gender::male, {1998,5,1} };
	Employee e2{ e1 };
	cout << e1.toString() << endl;
	cout << e2.toString() << endl;

	return 0;
}