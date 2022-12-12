#include <iostream>
using namespace std;

class Base {
public:
	virtual void f() { cout << "Base::f() called" << endl; }
};

class Derived : public Base {
public:
	virtual void f() { cout << "Derived::f() called" << endl; }
};

void main()
{
	Derived d, * pDer;
	pDer = &d;	//객체 d를 가리킨다.
	pDer->f();	//Derived의 멤버 f() 호출

	Base* pBase;
	pBase = pDer;	//업캐스팅. 객체 d를 가리킨다.
	pBase->f();		//Base의 멤버 f() 호출로 인지되지만, 실행 시간에 동적 바인딩에 의해 Derived의 f()가 실행됨
}