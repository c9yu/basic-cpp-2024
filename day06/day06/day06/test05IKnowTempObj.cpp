// date : 20240228
// desc : �ӽð�ü�� Ȯ��

/*
#include <iostream>
using namespace std;

class Temporary
{
private:
	int num;

public:
	Temporary(int n) : num(n)
	{
		cout << "create obj: " << num << endl;
	}
	~Temporary()
	{
		cout << "destroy obj : " << num << endl;
	}
	void ShowTempInfo()
	{
		cout << "My num is " << num << endl;
	}

};

int main(void) {

	Temporary(100);                                         // ���� �������� 'Temporary t(100)'�� ���� '�ڷ��� ��ü�̸�(�Է�)' �� �������ٵ�
	                                                        // ��ü �̸��� ����. ��, �ӽð�ü�̴�.
	cout << " ********** after make!" << endl << endl;

	Temporary(200);
	cout << " ********** after make!" << endl << endl;

	const Temporary& ref = Temporary(300);                  // �ӽð�ü�� ������ �Ұ��� �ѵ�, const�� �ٿ� ���ȭ ��Ű�� ����(&)�� �����ϰ� �Ѵ�.
	cout << "********** end of main!" << endl << endl;

	return 0;
}
*/