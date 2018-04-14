#pragma once
#include <iostream>
#include <string>
class Parent {
public:
	Parent()  {
		std::cout << __FUNCTION__ << std::endl;
		init();
	}

	Parent(int nData) : m_nData(nData){
		std::cout << __FUNCTION__ << std::endl;
		init();
	}

	Parent(const char* str)
	{
		std::cout << __FUNCTION__ << std::endl;
		notVirtualFuc(str);
	}

	virtual ~Parent() {
		std::cout << __FUNCTION__ << std::endl;
	}

public:
	virtual void virtualFunc()	{
		std::cout << __FUNCTION__ << std::endl;
		std::cout << "I'm Parent" << std::endl;
	}

	void notVirtualFuc(const char* str)
	{
		std::cout << __FUNCTION__ << std::endl;
		std::cout << str << std::endl;
	}

private:
	void init()	{
		std::cout << __FUNCTION__ << std::endl;
		
	}
private:
	int m_nData;
};

class Child : public Parent{
public:
	Child() 
	: Parent(staticFunc()){
		std::cout << __FUNCTION__ << std::endl;
	}
	~Child() {
		std::cout << __FUNCTION__ << std::endl;
	}
public:
	void virtualFunc() override {
		std::cout << __FUNCTION__ << std::endl;
		std::cout << "I'm Child" << std::endl;
	}

private:
	static const char* staticFunc()
	{
		std::cout << __FUNCTION__ << std::endl;
		//m_nChildData = 100;
		return "I'm Child";
		
	}

private:
	int m_nChildData;
};