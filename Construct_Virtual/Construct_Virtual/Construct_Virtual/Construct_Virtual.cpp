// Construct_Virtual.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "TestClass.h"


int main()
{
	Child* pChild = new Child();

	delete pChild;

    return 0;
}

