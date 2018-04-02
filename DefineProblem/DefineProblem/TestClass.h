#pragma once
class TestClass
{
public:
	TestClass() :m_nA(INIT_A_VALUE){  }
	TestClass(int a) : m_nA(a) {
	}
	~TestClass() {
		m_nA = 0;
	}

private:
	static const int INIT_A_VALUE;
	enum { MAX_ARRAY_SIZE = 10 };

	int m_arr[MAX_ARRAY_SIZE];

public:

	void setA(const int& a) {
		m_nA = a;
	}

	const int& getA() const 
	{
		return m_nA;
	}

	void setArr(const int& a)
	{

		for (int i = 0; i < MAX_ARRAY_SIZE ; i++)
		{
			m_arr[i] = a;
		}

	}

private:
	int m_nA;
	
};