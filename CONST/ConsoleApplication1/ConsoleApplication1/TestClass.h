#pragma once

#include <string>
#include <iostream>

class TestClass
{
public:
	TestClass(const int& nData) : m_nData(nData) {	};


public:

	int getData()
	{
		std::cout << "TestClass::getData()" << std::endl;
		return m_nData;
	}

	int getData() const
	{
		std::cout << "TestClass::getData() const" << std::endl;
		//mutable �������� ���� ���忡�� ���� ������.
		m_nData = 20;
		m_nStaticData = 0;
		return m_nData;
	}


	void setData(const int& nData)
	{
		m_nData = nData;
	}

	int funcA()
	{
		std::cout << "TestClass::funcA()" << std::endl;
		return static_cast<const TestClass>((*this)).funcA();
	}

	int funcA() const
	{
		std::cout << "TestClass::funcA() const" << std::endl;
		//�ڵ尡 ��û ���ٰ� ��������.

		return 0;

	}


private:
	//mutable : const �Լ����� �����氡���ϰ� �ϴ� Ű����.
	mutable int m_nData;
	static int m_nStaticData;
	
	
};

class TestClass2
{

public:
	int getData()
	{
		return m_nData;
	}

private:
	int m_nData;
};

