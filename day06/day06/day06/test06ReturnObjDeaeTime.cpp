// date : 20240228
// desc : �ӽð�ü�� Ȯ��

#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) : num(n)
	{
		cout << "New Object: " << this << endl;
	}
	SoSimple(const SoSimple& copy) :num(copy.num)
	{
		cout << "New Copy obj: " << this << endl;
	}
	~SoSimple()
	{
		cout << "Destroy obj: " << this << endl;

	}
};

SoSimple SimpleFunObj(SoSimple ob)
{
	cout << "Parm ADR" << &ob << endl;
	return ob;
}

int main(void) {
	SoSimple obj(7);
	SimpleFunObj(obj);

	cout << endl;
	SoSimple tempRef = SimpleFunObj(obj);
	cout << "Return Obj " << &tempRef << endl;
	return 0;

}