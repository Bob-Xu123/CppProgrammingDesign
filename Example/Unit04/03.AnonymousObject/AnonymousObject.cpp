#include <iostream>
using std::cout;
using std::endl;

class Account {
	double balance;
public:
	Account() {
		balance = 0.0;
	}
	Account(double balance_) { //避免构造函数中的形参和data fields中的变量重名，如果同名，可以使用this指针
		balance = balance_;
	}
	void deposit(double amount) {
		balance += amount;
	}
	double withdraw(double amount) {
		auto temp{ 0.0 };
		if (balance < amount) {
			temp = balance;
			balance = 0;
			return temp;
		}
		else {
			balance -= amount;
			return amount;
		}
	}
};


int main() {
	Account a1;
	Account a2 = Account(100.0); //先是声明了一个匿名对象，然后将其拷贝给对象a2

	a1.deposit(9.0);
	cout << a1.withdraw(10.0) << endl;
	cout << a2.withdraw(52.0) << endl;

	cout << Account(1000.0).withdraw(1001.0) << endl;

	return 0;
}