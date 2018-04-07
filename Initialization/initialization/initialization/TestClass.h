#pragma once

#include "stdafx.h"
#include <string>
#include <iostream>



class TestClass {
public:
	//Default constructor
	TestClass()
		:m_strValue("")
	{
		std::cout << "TestClass::TestClass()" << std::endl;
	}

	TestClass(const TestClass& t)
		:m_strValue(t.m_strValue)
	{
		std::cout << "TestClass::TestClass(const TestClass& t)" << std::endl;
	}

	TestClass(const char* Text)
		: m_strValue(Text)
	{
		std::cout << "TestClass::TestClass(const char* )" << Text << std::endl;
	}

	//Copy assignment
	TestClass& operator=(const TestClass&)
	{
		std::cout << "TestClass::operator=(const TestClass&)" << std::endl;
		return *this;
	}

	//Copy assignment
	TestClass& operator=(const char* Text)
	{
		std::cout << "TestClass::operator=(const char* Text)" << Text << std::endl;
		m_strValue = Text;
		return *this;
	}

private:
	std::string m_strValue;
};

class Base
{
public:
	Base()
		:m_TestClass("Base CLASS")
	{
		std::cout << "Base::Base()" << std::endl;
	}

private:

	TestClass m_TestClass;
};


class Child : public Base
{
public:
	//Child()
	//{
	//	m_TestClass = "child Class";
	//}

	Child()
		:m_TestClass("child class")
	{
		std::cout << "Child::Child()" << std::endl;
	}


private:

	TestClass m_TestClass;
};


//non-local static Object의 경우 언제 초기화 될지 모른다.(소멸은 프로그램끝날떄)
//그래서 이런 문제를 해결하기 위해서 함수를 이용하여 nonlocal을 local로 변경하여
//초기화 되는 시점을 해당 함수가 처음으로 호출될때로 변경하여 이런 초기화 문제를 해결
//singleton 설계시에http://vallista.tistory.com/entry/1-Singleton-Pattern-in-C?category=535636
//참고하자.
template <class T>
T& getInstance()
{
	static T instance;
	return instance;

}

