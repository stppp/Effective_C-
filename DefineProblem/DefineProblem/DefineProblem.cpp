// DefineProblem.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "Defines.h"
#include <string>
#include <iostream>


int main()
{
	//int a[MAX_ARRAY_SIZE] = { 0, };

	std::cout << STR_ERROR_MSG << std::endl;

	GlOBAL_POINTER->setA(100);

	
	TestClass* pTest = new TestClass(10);

	pTest->setArr(200);

	//유효 범위 제한 가능하다.
	//int testArr[TestClass::MAX_ARRAY_SIZE];

	delete pTest;

	pTest = new TestClass(20);

	int nA = 10;
	int nB = 1;
	int max = MAX(++nA, nB); //((++nA) > (nB) ? (++nA) : (nB));


	std::cout << "nA = " << nA <<", nB = " <<nB << " MAX = " <<max << std::endl;

	SAFE_DELETE(pTest);



	//대안들
	std::cout << CONST_STR_ERROR_MSG << std::endl;
	int Array[CONST_INT_MAX_ARRAY_SIZE] = { 0, };
	CONST_PTEST_CLASS->getA();

	nA = 10;
	nB = 1;
	const int maxVal = INLINE_MAX(++nA, nB); //((++nA) > (nB) ? (++nA) : (nB));


	std::cout << "nA = " << nA << ", nB = " << nB << " MAX = " << maxVal << std::endl;


	TestClass TC;

	TC.setA(2000000);

	return 0;
}

