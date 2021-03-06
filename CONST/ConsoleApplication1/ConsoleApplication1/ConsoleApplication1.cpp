// ConsoleApplication1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include "TestClass.h"


void TestFunc1(const int* pPointer);
void TestFunc2(int* const pPointer);
void TestFunc3(const TestClass2& InstanceTC);

int main()
{
	int nValue = 10;

	//const pointer 
	//Pointer 왼쪽의 const 키워드.
	//const (*pPointer)
	const int* pTest1 = &nValue;
	int const *pTest2 = &nValue;


	//const pointer 자체 값 변경가능
	pTest1 = pTest2;
	pTest1 = nullptr;
	pTest2 = 0x0;
	
	//const pointer 가 가르키는 대상(*pPointer)의 값을 변경하는 것불가능
	//*pTest2 = 20;
	//*pTest1 = 20;

	//하지만 아래와 같이 대상의 값 바뀔수 있다.
	nValue = 30;



	////pointer 오른쪽의 const 키워드
	//* const (pointer)
	int* const pTest3  = &nValue;

	//const pointer 가  가르키는 대상 변경 빌드 에러
	//pTest3 = nullptr;

	//const pointer 가 가르키는 대상의 값을 변경하는 것 가능
	*pTest3 = 50;

	std::cout << *pTest3 << std::endl;


	const int* const pTest4 = &nValue;

	//둘다 불가능.
	//*pTest4 = 100;
	//pTest4 = nullptr;


	//매개 변수 테스트
	int nData = 1;
	TestFunc1(&nData);
	TestFunc2(&nData);


	//Iterator Test

	std::vector<int> IntVector;

	IntVector.push_back(1);
	IntVector.push_back(2);


	//const (iterator) == * const (pPointer)
	const std::vector<int>::iterator VIterator = IntVector.begin();

	*VIterator = 10;
	//VIterator = IntVector.end();


	//const (*Iterator) == const (*pPointer)
	std::vector<int>::const_iterator VIterator2 = IntVector.cbegin();

	//*VIterator2 = 10;
	VIterator2 = IntVector.cend();






	//상수 멤버함수
	TestClass InsA(1);
	const TestClass ConstInsB(2);

	InsA.setData(10);
	std::cout << InsA.getData() <<std::endl;

	InsA.funcA();

	//ConstInsB.setData(10);
	std::cout << ConstInsB.getData() << std::endl;


	TestClass2 Tc;

	TestFunc3(Tc);

    return 0;
}


void TestFunc1(const int* pPointer)
{
	//*pPointer = 30;
	pPointer = nullptr;


}

void TestFunc2(int* const pPointer)
{
	*pPointer = 30;
	//pPointer = nullptr;
}

void TestFunc3(const TestClass2& InstanceTC)
{
	//아래와 같이 const 함수를 잘정의 하지 않으면 객체에서 함수를 사용하지 못한다.
	//InstanceTC.getData();
}

