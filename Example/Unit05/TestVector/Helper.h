#pragma once
#include <vector>
#include <iostream>
#include <string>

//一下代码是老师从网站上抄过来的

#define PRINT(x) std::cout << #x << ": " << x << std::endl;

template<typename T>
std::ostream& operator<<(std::ostream& s, const std::vector<T>& v) {
	s.put('[');
	char comma[3] = { '\0',' ','\0' };
	for (const auto& e : v) {
		s << comma << e;
		comma[0] = ',';
	}
	return s << ']';

}