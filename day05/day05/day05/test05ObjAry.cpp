// date : 20240227
// desc : ObjAry


/*
#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
*/
/*
	Person(char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	Person()
	{
		name = NULL;
		age = 0;
		cout << "called Person()" << endl;

	}
	*/
/*
	void SetPersonInfo(char* myname, int myage)
	{
		name = myname;
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "�̸�: " << name << ", ";
		cout << "����: " << age << endl;

	}
	~Person()
	{
		delete[]name;
		cout << "called destructor!" << endl;

	}
};

int main(void)
{
	Person parr[3];  // ��ü �迭
	char namestr[100];  // ���� �迭
	char* strptr;  // char Ÿ���� ������ ����
	int age;
	int len;

	for (int i = 0; i < 3; i++)
	{
		cout << "�̸�: ";
		cin >> namestr;
		cout << "����: ";
		cin >> age;
		len = strlen(namestr) + 1;
		strptr = new char[len];
		strcpy(strptr, namestr);

		parr[i].SetPersonInfo(strptr, age); // �������� ��ü�� �����Ѵ�.

	}
	parr[0].ShowPersonInfo(); // ��ü �����͸� ������ ����� �����Ѵ�.
	parr[1].ShowPersonInfo();
	parr[2].ShowPersonInfo();

	delete parr[0]; // delete������ ���� �����Ҵ��� ������ �ش�.
	delete parr[1];
	delete parr[2];



	return 0;
}
*/
/*
- ������ �迭
�����͸� �����ϴ� �迭

- �迭 ������
�迭�� �����ϴ� ������
*/