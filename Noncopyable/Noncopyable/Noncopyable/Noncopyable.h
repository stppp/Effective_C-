#pragma once


class Noncopyable {
protected:
	Noncopyable() { ; }
	//virtual ���� ���ʿ� ����.
	//why? protected �ν� �ܺο��� �������� ���� ������.
	~Noncopyable() { ; }

	//private�������� ���� ���縦 ���� 
private:
	//�����θ� ������ �ʴ´�.
	//why? friend�� ���� �Ҽ� �ֱ� ������ 
	Noncopyable(const Noncopyable&);
	Noncopyable& operator=(const Noncopyable&);

};
