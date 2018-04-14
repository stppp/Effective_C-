#pragma once
#include <iostream>

class Parent {
public:
	Parent() {
		std::cout << "Parent()" << std::endl;
	}

	virtual	~Parent() {
		std::cout << "~Parent()" << std::endl;
	}

public:
	virtual	void testFunc()	{
		std::cout << "Parent::testFunc()" << std::endl;
	}
};

class Child : public Parent{
public:
	Child() {
		std::cout << "Child()" << std::endl;
	}
	~Child() {
		std::cout << "~Child()" << std::endl;
	}

public:
	void testFunc() override{
		std::cout << "Child::testFunc()" << std::endl;
	}
};


class AbstractClass {
public:
	AbstractClass() {}
public:
	virtual ~AbstractClass() = 0;



};