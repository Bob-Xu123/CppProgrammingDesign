// ����1�����Ӿ�̬��Ա�������Ա���������
// ����2������Ա������ո�ΪDate*���͵�ָ��
// ����3���޸Ĺ��캯������������
#pragma once
#include <iostream>
#include <string>

enum class Gender {
	male,
	female
};

class Employee {
private:
	std::string name;
	Gender gender;
	Date* birthday;
	static int numberofObjects;
public:
	void setName(std::string name) { this->name = name; }
	void setGender(Gender gender) { this->gender = gender; }
	void setBirthday(Date birthday) { *(this->birthday) = birthday; }
	std::string getName() { return name; }
	Gender getGender() { return gender; }
	Date getBirthday() { return *birthday; }
	std::string toString() {
		return name + (gender == Gender::male ? std::string(" male ") : std::string(" female ")) + birthday->toString();
	}
	Employee(std::string name, Gender gender, Date birthday) : name{ name }, gender{ gender } {
		numberofObjects++;
		this->birthday = new Date{ birthday };
		std::cout << "+ Now there are: " << numberofObjects << " employees" << std::endl;
	}
	Employee() : Employee("Alan", Gender::male, Date(2000, 4, 1)) { }
	~Employee() {
		numberofObjects--;
		delete birthday;
		birthday = nullptr;
		std::cout << name << " is going to be deleted" << std::endl;
		std::cout << "- Now there are: " << numberofObjects << " employees" << std::endl;

	}
};