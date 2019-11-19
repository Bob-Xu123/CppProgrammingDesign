/*本部分要展示的内容如下：
任务1：创建类A，包含公有、保护、私有成员 i j k
任务2：创建类Pub公有继承A，类Pro保护继承A，类Pri私有继承A
	  观察三个类中的函数foo()	对基类成员的访问
任务3：观察main()中三个类对象对基类成员的访问
*/

#include <iostream>
using std::cout;
using std::endl;

class A {
public:
	int i{ 0 };
protected:
	int j{ 0 };
private:
	int k{ 0 };
};

class Pub : public A {
public:
	void foo() { i++, j++, k++; }
};

class Pro : protected A {
public:
	void foo() { i++, j++, k++; }
};

class Pri : private A {
public:
	void foo() { i++, j++, k++; }
};

int mian() {
	Pub pub;
	Pro pro;
	Pri pri;

	pub.i++; pub.j++; pub.k++;
	pro.i++; pro.j++; pro.k++;
	pri.i++; pri.j++; pri.k++;

	return 0;
}