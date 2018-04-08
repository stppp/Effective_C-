#pragma once


class Noncopyable {
protected:
	Noncopyable() { ; }
	//virtual 선언 할필요 없다.
	//why? protected 로써 외부에서 접근할일 없기 떄문에.
	~Noncopyable() { ; }

	//private선언으로 인한 복사를 금지 
private:
	//구현부를 만들지 않는다.
	//why? friend로 접근 할수 있기 때문에 
	Noncopyable(const Noncopyable&);
	Noncopyable& operator=(const Noncopyable&);

};
