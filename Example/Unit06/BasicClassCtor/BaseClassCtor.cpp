// 类的继承还是得看课件视频才能搞懂！！！！！！！！

#include <iostream>
using std::cout;
using std::endl;
// 任务1：继承构造函数
//		创建基类B及构造函数B(int), B(char)和派生类D；D中不继承/继承B的ctor时的效果

// 任务2：派生类中调用基类的构造函数
//		D中增加成员double x；及D(double)，在D(double)初始化列表调用B(i)并初始化x

// 任务3：派生类先调基类ctor，再构造内嵌对象
//		增加类E及E(int)，并再D中加入E的两个对象；创建D对象观察E ctor和B ctor
//		通过实践及观察发现，对用顺序为：先调用基类构造函数，然后是内嵌构造函数，最后是派生类构造函数函数体

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
	E e1, e2; // 内嵌对象
public:
	using B::B; // 此语句相当于包括了以下三条语句：
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