#include <iostream>

int main() {

	int x{ 3 }, y{ 10 };

	const int* const p = &x; //��һ��const���壺����ͨ��*pȥ��pָ����ǿ��ڴ�������ݣ���2��const���壺p��ֵ�����ٸģ���pֻ��ָ��x��

	*p = 5; // ��ͼͨ��*p�޸�x��ֵ��error��

	x = 5; // x������constant�����Ը�

	p = &y; // ��ͼ��pָ�������ط���error�� 

	std::cout << x << std::endl;

	char* r = "hello"; // C������ֻ���warnning��C++��ֱ�ӱ�����Ϊ"hello"�����泣��

	const char* r = "hello";


	return 0;
}

