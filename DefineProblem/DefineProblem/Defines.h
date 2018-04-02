#pragma once
#include "TestClass.h"
#include <string>

TestClass* g_pTest = new TestClass(20);
//�Ʒ��ΰ��� ���´� ������ ��Ը� ������Ʈ������ ����ϴ� 
//�ڵ� ���µ��̴� 
//���ó�� ����ϴ� define ����
#define STR_ERROR_MSG "������ �߻��߽��ϴ�."
#define MAX_ARRAY_SIZE 10
#define GlOBAL_POINTER g_pTest

//��ũ�� �Լ� ����
#define MAX(a,b) ((a) > (b) ? (a) : (b));
#define SAFE_DELETE(a)	delete a; a = nullptr;

//#define  ��ȵ�
const std::string CONST_STR_ERROR_MSG = "������ �߻��߽��ϴ�.";
const int CONST_INT_MAX_ARRAY_SIZE = 10;
const TestClass* const CONST_PTEST_CLASS = new TestClass(50);


template<typename T>
inline const int& INLINE_MAX(const T& a, const T& b)
{
	return (a > b ? a : b);
}