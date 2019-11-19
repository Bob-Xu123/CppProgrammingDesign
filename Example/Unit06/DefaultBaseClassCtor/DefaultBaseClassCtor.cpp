 #include <iostream>
using std::cout;
using std::endl;
// 任务：观察基类默认构造函数的作用

class A {
public:
	A() { cout << "A()" << endl; }
	A(int i) { cout << "A(" << i << ")" << endl; }
};

class B :public A {
public:
	B() { cout << "B()" << endl; }
	//B(int j) { cout << "B(" << j << ")" << endl; } // 这样的话,即没有显式地调用基类的有参构造函数，则会调用基类的默认构造函数，相当于B(int j):A(){blabla...}
	B(int j) : A(j) { cout << "B(" << j << ")" << endl; }
};

int main() {
	A a1{};
	A a2{ 1 };
	B b1{};
	B b2{ 2 };
	
	return 0;
}