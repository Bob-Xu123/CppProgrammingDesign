 #include <iostream>
using std::cout;
using std::endl;
// ���񣺹۲����Ĭ�Ϲ��캯��������

class A {
public:
	A() { cout << "A()" << endl; }
	A(int i) { cout << "A(" << i << ")" << endl; }
};

class B :public A {
public:
	B() { cout << "B()" << endl; }
	//B(int j) { cout << "B(" << j << ")" << endl; } // �����Ļ�,��û����ʽ�ص��û�����вι��캯���������û����Ĭ�Ϲ��캯�����൱��B(int j):A(){blabla...}
	B(int j) : A(j) { cout << "B(" << j << ")" << endl; }
};

int main() {
	A a1{};
	A a2{ 1 };
	B b1{};
	B b2{ 2 };
	
	return 0;
}