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


//non-local static Object�� ��� ���� �ʱ�ȭ ���� �𸥴�.(�Ҹ��� ���α׷�������)
//�׷��� �̷� ������ �ذ��ϱ� ���ؼ� �Լ��� �̿��Ͽ� nonlocal�� local�� �����Ͽ�
//�ʱ�ȭ �Ǵ� ������ �ش� �Լ��� ó������ ȣ��ɶ��� �����Ͽ� �̷� �ʱ�ȭ ������ �ذ�
//singleton ����ÿ�http://vallista.tistory.com/entry/1-Singleton-Pattern-in-C?category=535636
//��������.
template <class T>
T& getInstance()
{
	static T instance;
	return instance;

}

