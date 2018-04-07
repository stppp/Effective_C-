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
		//mutable 선언으로 인해 빌드에러 나지 않은다.
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
		//코드가 엄청 만다고 가정하자.

		return 0;

	}


private:
	//mutable : const 함수에서 값변경가능하게 하는 키워드.
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

