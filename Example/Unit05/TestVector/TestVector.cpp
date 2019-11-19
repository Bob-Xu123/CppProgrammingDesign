#include <vector>
#include <iostream>
#include <string>

#include "Helper.h"

int main() {
	// 用C++11的列表初始化 创建vector对象words1
	std::vector<std::string> words1{"hello","world","welcome","to","C!"};
	PRINT(words1);

	// 删除words1最后一个元素
	words1.erase(words1.end() - 1);
	PRINT(words1);

	// 在words1尾部追加元素
	words1.push_back("C++!");
	PRINT(words1);

	// 用迭代器拷贝words1的内容一创建words2
	std::vector words2(words1.begin()+2, words1.end());
	PRINT(words2);

	// 在words2中插入元素
	words2.insert(words2.begin(), "Hello");
	PRINT(words2);

	// 用拷贝构造创建words3
	std::vector words3(words2);
	PRINT(words3);

	// 用[]修改words3的元素
	words3[3] = "C plus plus";
	PRINT(words3);

	// 创建words4，初始化为多个相同的字串
	std::vector<std::string> words4(4, "C++!");
	PRINT(words4);

	// words3与words4交换
	words3.swap(words4);
	PRINT(words3);
	PRINT(words4);

	// C++17标准才支持自动类型推导
	std::vector<int> v1{ 1,2,3 };
	std::vector v2{ 2,3,4 };
	PRINT(v1);
	PRINT(v2);

	return 0;
} 