#include <iostream>

using namespace std;

class Base {
public:
	Base() {};
	~Base() {};
	virtual void Func1() { cout << "Base::Func1()" << endl; }      // 객체 중심으로 되어서 Derived 것이 출력된다
	virtual void Func2() { cout << "Base::Func2()" << endl; }
	void Func3() { cout << "Base::Func3()" << endl; }
};

class Derived : public Base {
public:
	void Func1() { cout << "Derived::Func1()" << endl; }
	void Func3() { cout << "Derived::Func3()" << endl; }
	void Func4() { cout << "Derived::Func4()" << endl; }

	Derived() = default;
};

int main()
{
	Base b;            // Base 타입의 객체변수
	Derived d;         // Derived 타입의 객체변수
	Base* pb = new Derived();         // Base 타입의 객체 포인터


	pb->Func1();
	pb->Func2();
	pb->Func3();

	cout << endl;
	Derived* pd = &d;
	pd->Func1();
	pd->Func2();
	pd->Func3();
	pd->Func4();

	delete pb;      // 잊지말고 삭제하자

	return 0;
}