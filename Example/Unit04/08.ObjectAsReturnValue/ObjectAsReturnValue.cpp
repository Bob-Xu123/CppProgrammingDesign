#include <iostream>
#include "Circle3.h"
using namespace std;


int main() {

	//Circle c{ 1.0 };
	Circle c;
	c = { 2.0 };
	cout << c.radius << endl;

	cout << c.setRadius(2.0).getArea() << endl;
	cout << c.radius << endl;

	cout << c.setRadius(2.0).setRadius(3.0).getArea() << endl; //ע�⣬���д���ִ��֮��c�İ뾶Ϊ2��������3����һ��ʹ�ö����������Ϊ���к����ķ���ֵ����û����������������ִ����һ�д��룬���Ա�֤c�İ뾶��3.
	cout << c.radius << endl;

	return 0;
}
