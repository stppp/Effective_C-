#pragma once

#include "stdafx.h"
#include <string>

class TestClass {

public:
	//default constructor
	TestClass() { ; }
	
	//destructor
	~TestClass() { ; }

	//copy constructor 
	//TestClass t1(t2);
	TestClass(const TestClass& rhs) { ; }
	
	//copy assignment
	//t1 = t2	
	TestClass& operator=(const TestClass& rhs) { ; }



	void TestFunc() { ; };

};


template<typename T>
class TestA {
public:
	TestA(std::string& name, const T& value)
		: nameValue(name),
		objectValue(value)
	{
		;
	}

private:
	std::string& nameValue;
	const T objectValue;
};