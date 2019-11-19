#include <iostream>
#include "Date.h"
#include "Employee.h"
int Employee::numberofObjects = 0;

// 任务4：在堆和栈（函数作用域与内嵌作用域）上分别创建Employee对象，观察析构函数的型为
int main() {
	Employee e1;
	std::cout << e1.toString() << std::endl;
	Employee* pe2 = new Employee{ "John", Gender::male, Date(1990,3,2) };
	std::cout << pe2->toString() << std::endl;
	{
		Employee e3{ "Alice", Gender::female, Date(1989,2,14) };
		std::cout << e3.toString() << std::endl;
	}
	return 0;
}