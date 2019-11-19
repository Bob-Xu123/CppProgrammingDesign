#include <iostream>
#include <string>
using namespace std;

int main() {
	// 创建字符串
	string s{ "Hello" };

	// clear
	s.clear();

	// 用数组为字符串赋值
	char arr[]{ 'w','o','r','l','d','\0' };
	s += arr;

	// assign()
	s.assign("Hello, world!");

	// append
	s.append("  ");
	s.append(5, '\t');
	//s.append("!");

	// insert 空白
	s.insert(0, "   ");

	// 移除字符前面的空白
	s.erase(0, s.find_first_not_of(" \t\n\r"));

	// 移除字符串后面的空白
	s.erase(s.find_last_not_of(" \t\n\r") + 1);

	s += "$";
	cout << s << endl;

	// 吧字符串转化成整数或浮点数
	s = "1024";
	int x = std::stoi(s);
	cout << "x= " << x << endl;

	string s2 = std::to_string(x);
	cout << "s2: " << s2 << endl;

	return 0;
}