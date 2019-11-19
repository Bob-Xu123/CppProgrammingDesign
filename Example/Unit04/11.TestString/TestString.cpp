#include <iostream>
#include <string>
using namespace std;

int main() {
	// �����ַ���
	string s{ "Hello" };

	// clear
	s.clear();

	// ������Ϊ�ַ�����ֵ
	char arr[]{ 'w','o','r','l','d','\0' };
	s += arr;

	// assign()
	s.assign("Hello, world!");

	// append
	s.append("  ");
	s.append(5, '\t');
	//s.append("!");

	// insert �հ�
	s.insert(0, "   ");

	// �Ƴ��ַ�ǰ��Ŀհ�
	s.erase(0, s.find_first_not_of(" \t\n\r"));

	// �Ƴ��ַ�������Ŀհ�
	s.erase(s.find_last_not_of(" \t\n\r") + 1);

	s += "$";
	cout << s << endl;

	// ���ַ���ת���������򸡵���
	s = "1024";
	int x = std::stoi(s);
	cout << "x= " << x << endl;

	string s2 = std::to_string(x);
	cout << "s2: " << s2 << endl;

	return 0;
}