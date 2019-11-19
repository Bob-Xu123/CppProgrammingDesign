#include <iostream>
#include <typeinfo>

using std::cout;
using std::endl;
using std::cin;

auto max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	// auto ���������ڶ���ʱ��ʼ��
	auto x = 3;
	auto y{ 42 }, z{ x };
	cout << "z= " << z << endl;

	// ������һ��auto���еı�������ʼ���Ƶ���ͬһ����
	auto x1{ 1 }, x2{ 2 };

	// ���auto��ʼ�����ʽ�����û�const����ȥ�����û�const����
	int y1{ 42 }, & y2{ y1 };
	auto y3{ y2 };
	cout << typeid(y3).name() << endl;

	// ���auto�ؼ��ִ���&�ţ��򲻻�ȥ�����û�const����
	auto& z1{ y2 };
	cout << typeid(z1).name() << endl; // note�������typeid�����ܲ鿴z1�Ƿ���������

	// �����ʼ���ʽΪ����ʱ��auto�ؼ����Ƶ�����Ϊָ��
	int p[3]{ 1,2,3 };
	auto p1 = p;
	cout << typeid(p1).name() << endl;

	// �����ʽΪ������auto����&�����Ƶ�����Ϊ��������
	auto& p2{ p };
	cout << typeid(p2).name() << endl;

	// C++14�У�auto������Ϊ�����ķ������ͺͲ�������
	cout << max(x1, x2) << endl;

	//cin.get();
	return 0;
}