// date : 20240227
// desc : SelfRef

/*

#include <iostream>
using namespace std;

class SelfRef
{
private:
	int num;
public:
	SelfRef(int n) : num(n)
	{
		cout << "��ü ����" << endl;
	}
	SelfRef& Adder(int n)
	{
		num += n;
		return *this; // pointerThis�� ��� ��ü �ڱ� �ڽ��� ����Ű�⿡ this�� ���� �� ���� num���� ���� �� ������ �̴� Ʋ�ȴ�(31, 32���� ���� �Ұ�)
					  // this�� ����Ű�� �ִ°��� ��ü �ڱ� �ڽ� ��, obj�̴�.
	}
	SelfRef& ShowTwoNumber()
	{
		cout << num << endl;
		return *this;
	}
};

int main(void) {

	SelfRef obj(3);
	SelfRef& ref = obj.Adder(2);

	obj.ShowTwoNumber();
	ref.ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
	return 0;
}
*/