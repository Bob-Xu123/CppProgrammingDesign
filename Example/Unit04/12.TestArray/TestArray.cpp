#include <iostream>
#include <array>
using std::cout;
using std::endl;
using std::array;

void print(array<int, 3>& a) {
	for (auto x : a) {
		cout << x << " ";
	}
	cout << endl;
}

int search(array<int, 3>& a, int token) {
	bool exist{ false };
	int i = 0;
	for (auto element : a) {
		if (element == token) {
			exist = true;
			break;
		}
		i++;
	}
	if (exist) {
		return i;
	}
	else {
		return -1;
	}
}

int main() {
	//1. 创建数组
	//array <int, 3> a1{ 1,2,4 }; // 需要配置C++语言标准：C++17
	array a1{ 1,2,4 }; // 会被自动推到成array <int, 3> a1{1, 2, 4}
	print(a1);

	//2. 为数组赋值
	a1 = { 7,8,9 };
	print(a1);

	//3. 交换数组
	array b1{ 100,200,300 };
	print(b1);
	a1.swap(b1);
	print(a1);
	print(b1);

	//4. 求数组大小
	cout << a1.size() << endl;
	cout << a1.max_size() << endl;


	//5. 编写search函数，在数组中查找一个值
	cout << "search 300: " << search(a1, 300) << endl;
	cout << "search 1: " << search(a1, 1) << endl;


	//6. sort
	std::sort(a1.begin(), a1.end()); // 自带的std::sort默认从小到大排序
	print(a1);


	//二维数组
	std::array<std::array<int,3>, 4> aa;

	return 0;
}