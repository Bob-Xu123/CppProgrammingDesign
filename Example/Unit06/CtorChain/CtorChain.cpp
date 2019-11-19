#include <iostream>
using std::cout;
using std::endl;
// ����1��������ṹ��Computer->PC->Desktop/Laptop�Լ���Ӧ��ctor/dtor
//	main�д���Desktop/Laptop�Ķ��󣬹۲�cotr/dtor���ô���

// ����2��������Camera��ΪLaptop����Ƕ����c������
//	main�д���Laptop���󣬹۲���Ƕ����c�Ĺ��캯������๹�캯������

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