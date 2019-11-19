#include <iostream>
#include <string>
using std::cout;
using std::endl;

class A {
public:
	virtual std::string toString() { return "A"; }
	// 在基类的函数前头加上virtual，则派生类中的同名函数也会自动变成虚函数，就没必要也加上virtual
};

class B : public A {
public:
	std::string toString() override { return "B"; }
	// 加上override标识符可以防止派生类和基类的同名函数由于手误打错，如果不一致编译器会报错提醒我们。
	// override 的价值在于避免程序员在覆写时错命名或无虚函数导致的隐层bug
};

class C : public B {
public:
	std::string toString() override { return "C"; }
};

void print(A* o) {
	cout << o->toString() << endl;
}
void print(A& o) {
	cout << o.toString() << endl;
}

int main() {
	A a; B b; C c;
	A* p1 = &a;
	A* p2 = &b;
	A* p3 = &c;
	print(p1);
	print(p2);
	print(p3);
	
	print(a);
	print(b);
	print(c);

	return 0;
}