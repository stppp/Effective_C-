// ClassDefaultFunction.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "TestClass.h"
#include <string>
#include <iostream>

int main()
{
	std::string strA("A");
	std::string strB("B");

	TestA<int> A(strA,10);
	TestA<int> (strB, 20);


	//참조자, 상수가 멤버로 있는경우 defualt로 operator= 자동으로 만들어지지 않아
	//빌드에러
	//A = B;

	//pointer VS reference
	int nValue10 = 10;
	int nValue20 = 20;
	int* pPointer = &nValue10;
	int& rReference = nValue10;
	

	std::cout << "rReference = " << rReference <<", nValue10 = "  << nValue10 << std::endl;
	//참조자에 대입연산은 가르키던 대상의 값을 바꾸는것
	//nVlaue10 = nValue20 한 것과 같은 효과이다.
	rReference = nValue20;
	std::cout << "rReference = " << rReference << ", nValue10 = " << nValue10 << std::endl;

	std::string* pStrPointer;

	TestClass Target;
	//Pointer는 Null로 초기화 가능하다.
	TestClass* Tpointer = NULL;
	//반드시 초기화 되어야 한다.
	//TestClass& Treference;
	TestClass& Treference = Target;
	//Reference 변수의 경우 null로 초기화 할수 없음.
	//TestClass& Treference = NULL;
	

	Tpointer->TestFunc();
	Treference.TestFunc();


    return 0;
}

