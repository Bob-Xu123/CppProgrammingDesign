/*������Ҫչʾ���������£�
����1��������A���������С�������˽�г�Ա i j k
����2��������Pub���м̳�A����Pro�����̳�A����Pri˽�м̳�A
	  �۲��������еĺ���foo()	�Ի����Ա�ķ���
����3���۲�main()�����������Ի����Ա�ķ���
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