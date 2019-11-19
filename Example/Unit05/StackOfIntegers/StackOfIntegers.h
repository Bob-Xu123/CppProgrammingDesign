#pragma once
// »ŒŒÒ1£∫±‡–¥StackOfIntegers¿‡

class StackOfIntegers {
private:
	int elements[100];
	int size{ 0 };
public:
	StackOfIntegers();
	bool empty();
	int peek();
	int push(int value);
	int pop();
	int getSize();
};