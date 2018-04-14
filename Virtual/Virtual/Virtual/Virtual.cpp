// Virtual.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "TestClass.h"

int main()
{
	std::cout << "new Parent" << std::endl;
	Parent* pParent = new Parent();
	std::cout << "new Child" << std::endl;
	Parent* pChild = new Child();
	Parent* pChild2 = new Child();

	std::cout << "Parent->testFunc()" << std::endl;
	pParent->testFunc();
	std::cout << "Child->testFunc()" << std::endl;
	pChild->testFunc();

	std::cout << "delete Parent" << std::endl;
	delete pParent;
	std::cout << "delete Child" << std::endl;
	delete pChild;


	//AbstractClass* pAb = new AbstractClass();

    return 0;
}

