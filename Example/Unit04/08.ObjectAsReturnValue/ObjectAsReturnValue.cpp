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

	cout << c.setRadius(2.0).setRadius(3.0).getArea() << endl; //注意，这行代码执行之后c的半径为2，并不是3。下一步使用对象的引用作为类中函数的返回值，还没有做。。。这样再执行上一行代码，可以保证c的半径是3.
	cout << c.radius << endl;

	return 0;
}
