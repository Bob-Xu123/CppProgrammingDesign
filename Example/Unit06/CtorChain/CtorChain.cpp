#include <iostream>
using std::cout;
using std::endl;
// 任务1：创建类结构：Computer->PC->Desktop/Laptop以及相应的ctor/dtor
//	main中创建Desktop/Laptop的对象，观察cotr/dtor调用次序

// 任务2：增加类Camera作为Laptop的内嵌对象c的类型
//	main中创建Laptop对象，观察内嵌对象c的构造函数与基类构造函数次序

class Computer {
public:
	Computer() { cout << "Computer()" << endl; }
	~Computer(){ cout << "~Computer()" << endl; }
};

class PC : public Computer {
public:
	PC(){ cout << "PC()" << endl; }
	~PC() { cout << "~PC()" << endl; }
};

class Desktop : public PC {
public:
	Desktop(){ cout << "Desktop()" << endl; }
	~Desktop(){ cout << "~Desktop()" << endl; }
};

class Camera {
public:
	Camera() { cout << "Embedded Camera()" << endl; }
	~Camera() { cout << "Embedded ~Camera()" << endl; }
};

class Laptop : public PC {
private:
	Camera ca{};
public:
	Laptop() { cout << "Laptop()" << endl; }
	~Laptop() { cout << "~Laptop()" << endl; }
};

int main() {
	/*
	Computer c;
	PC pc;
	*/
	{
		Desktop d;
		Laptop l;
	}

	return 0;
}