/*

// date : 20240227
// desc : PointerThis p198

#include <iostream>
#include <cstring>

using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int num) // : num(n) // num(n) �� �̴ϼȶ�����, �����ϰ� ������ ���� ����
	{
		this->num = num; // �� num�� ��ü���� �ʵ忡 �ִ� ������ �������� �����ϱ� ���� ��ü �ڱ� �ڽ��� ����Ű�� this ->�� ����Ѵ�.
		cout << "num=" << num << ", ";
		cout << "address=" << this << endl;
	}

	void ShowSimpleData()
	{
		cout << num << endl;
	}
	SoSimple* GetThisPointer()
	{
		return this;
	}
};

int main(void) // sim1, sim2 2���� ��ü�� ����
{
	SoSimple sim1(100);
	SoSimple* ptr1 = sim1.GetThisPointer();
	cout << ptr1 << ", ";
	ptr1->ShowSimpleData();

	SoSimple sim2(200);
	SoSimple* ptr2 = sim2.GetThisPointer();
	cout << ptr2 << ", ";
	ptr2->ShowSimpleData();
	return 0;
}

*/