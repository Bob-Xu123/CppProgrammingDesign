// ��ļ̳л��ǵÿ��μ���Ƶ���ܸ㶮����������������

#include <iostream>
using std::cout;
using std::endl;
// ����1���̳й��캯��
//		��������B�����캯��B(int), B(char)��������D��D�в��̳�/�̳�B��ctorʱ��Ч��

// ����2���������е��û���Ĺ��캯��
//		D�����ӳ�Աdouble x����D(double)����D(double)��ʼ���б����B(i)����ʼ��x

// ����3���������ȵ�����ctor���ٹ�����Ƕ����
//		������E��E(int)������D�м���E���������󣻴���D����۲�E ctor��B ctor
//		ͨ��ʵ�����۲췢�֣�����˳��Ϊ���ȵ��û��๹�캯����Ȼ������Ƕ���캯��������������๹�캯��������

class B {
public:
	B() { cout << "B()" << endl; }
	B(int i) { cout << "B(" << i << ")" << endl; }
	B(char c){ cout << "B(" << c << ")" << endl; }
};

class E {
public:
	E() { cout << "E()" << endl; }
};

class D : public B {
private:
	//double x{ 0.0 };
	E e1, e2; // ��Ƕ����
public:
	using B::B; // ������൱�ڰ���������������䣺
	// D() : B() {};
	// D(int i) : B(i) {}
	// D(char c) : B(c) {} 

	D() = default;
	//D(double x_) : B(static_cast<int>(x_)), x{ 1.0 } {
		//cout << "D(" << x_ << ")" << endl;
	D(double x_) : e1{}, e2{}, B(static_cast<int>(x_)) {
		cout << "D(" << x_ << ")" << endl;
	}

};


int main() {
	B b;
	D d;
	D d2{ 3.03 };
	
	return 0;
}