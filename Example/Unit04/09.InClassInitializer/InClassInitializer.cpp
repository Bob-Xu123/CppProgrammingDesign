#include <iostream>
class X {
	int a = 1;
	int b = { 2 };
	//int c(3); //���־͵س�ʼ���ķ�ʽ��C++11���ǲ������ // ���󣺲�������С���ų�ʼ��

	std::string s{ 'H','e','l' };
	std::string s2{ "Hello" };
	std::string s3 = "World";

	//int arr1[] = { 1,2,3 }; // �����������ͳ�Ա�����Զ��ƶϴ�С
	int arr1[3] = { 1,2,3 };
	int arr2[4]{ 1 };
	double arr3[2]{ 12.0,32.0 };
	//auto arr4[]{ 1,2 };
};


int main() {

	return 0;
}