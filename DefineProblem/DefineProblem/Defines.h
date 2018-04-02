#pragma once
#include "TestClass.h"
#include <string>

TestClass* g_pTest = new TestClass(20);
//아래두가지 형태는 실제로 대규모 프로젝트에서도 사용하던 
//코드 형태들이다 
//상수처럼 사용하는 define 예제
#define STR_ERROR_MSG "오류가 발생했습니다."
#define MAX_ARRAY_SIZE 10
#define GlOBAL_POINTER g_pTest

//매크로 함수 예제
#define MAX(a,b) ((a) > (b) ? (a) : (b));
#define SAFE_DELETE(a)	delete a; a = nullptr;

//#define  대안들
const std::string CONST_STR_ERROR_MSG = "오류가 발생했습니다.";
const int CONST_INT_MAX_ARRAY_SIZE = 10;
const TestClass* const CONST_PTEST_CLASS = new TestClass(50);


template<typename T>
inline const int& INLINE_MAX(const T& a, const T& b)
{
	return (a > b ? a : b);
}