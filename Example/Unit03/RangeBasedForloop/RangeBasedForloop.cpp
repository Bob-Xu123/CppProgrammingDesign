#include <iostream>

using std::cout;
using std::endl;

int main() {
	int a[] = { 1,2,3,4,5 };
	for (auto i : a) {
		cout << i << endl;

	}
	for (auto& i : a) {
		i *= 2;
	}

	int j = 1;
	for (auto i : a) {
		cout << j++ <<" "<< i << endl;
	}

	return 0;
}