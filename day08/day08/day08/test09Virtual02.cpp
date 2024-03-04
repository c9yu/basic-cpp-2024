#include <iostream>

using namespace std;

class Base {
public:
	Base() {};
	~Base() {};
	virtual void Func1() { cout << "Base::Func1()" << endl; }      // ��ü �߽����� �Ǿ Derived ���� ��µȴ�
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
	Base b;            // Base Ÿ���� ��ü����
	Derived d;         // Derived Ÿ���� ��ü����
	Base* pb = new Derived();         // Base Ÿ���� ��ü ������


	pb->Func1();
	pb->Func2();
	pb->Func3();

	cout << endl;
	Derived* pd = &d;
	pd->Func1();
	pd->Func2();
	pd->Func3();
	pd->Func4();

	delete pb;      // �������� ��������

	return 0;
}