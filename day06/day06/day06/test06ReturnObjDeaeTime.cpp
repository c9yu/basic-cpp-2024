// date : 20240228
// desc : �ӽð�ü�� Ȯ��

/*
#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) : num(n)
	{
		cout << "New Object: " << this << endl; // this : ��ü ������(��ü�� �ּҸ� ��Ÿ��)
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
	cout << "Parm ADR" << &ob << endl;  // �Լ� ����ÿ� &: ����, �ƴҶ��� : �ּ� ������
	return ob;
}

int main(void) {
	SoSimple obj(7);
	SimpleFunObj(obj);

	cout << endl;
	SoSimple tempRef = SimpleFunObj(obj); // �ӽð�ü �ּ� ����
	cout << "Return Obj " << &tempRef << endl;
	return 0;

}
*/

/*
New Object: 000000DD66AFF9C4         : ��ü obj �ּ�
New Copy obj: 000000DD66AFFAC4       : ��ü ob �ּ�
Parm ADR000000DD66AFFAC4             : ��ü ob �ּ�
New Copy obj: 000000DD66AFFB04       : �ӽð�ü �ּ�
Destroy obj: 000000DD66AFFAC4        : ��ü ob �Ҹ�
Destroy obj: 000000DD66AFFB04        : �ӽð�ü �Ҹ�

New Copy obj: 000000DD66AFFB24       : ��ü ob �ּ�
Parm ADR000000DD66AFFB24             : ��ü ob �ּ�
New Copy obj: 000000DD66AFF9E4       : �ӽð�ü �ּ�
Destroy obj: 000000DD66AFFB24        : ��ü ob �Ҹ�
Return Obj 000000DD66AFF9E4          : �ӽð�ü �ּ�
Destroy obj: 000000DD66AFF9E4	     : �ӽð�ü �Ҹ�
Destroy obj: 000000DD66AFF9C4        : ��ü obj �Ҹ�
*/