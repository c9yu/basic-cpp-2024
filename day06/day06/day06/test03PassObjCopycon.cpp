// date : 20240228
// desc : PassObjCopycon

/*
#include <iostream>

using namespace std;

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) : num(n)
	{}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	void ShowData()            // ��� �Լ� --> ��ü �����ϰ� ����� �����ϴ�. (��ü�� �����ؾ߸� ��� �Լ��� ���� ����)
	{
		cout << "num: " << num << endl;
	}
};

void SimpleFunObj(SoSimple ob) // SimpleFunObj��� �Լ��� ��𿡵� �ҼӵǾ� ���� ������, �����Լ��̴�. (������ ���� ����)
{
	ob.ShowData();
}


int main(void) {

	SoSimple obj(7);
	cout << "�Լ�ȣ�� ��" << endl;
	SimpleFunObj(obj);
	cout << "�Լ�ȣ�� ��" << endl;


	return 0;
}
*/