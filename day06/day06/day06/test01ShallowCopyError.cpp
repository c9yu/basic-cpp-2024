// date : 20240228
// desc : ����Ʈ ����������� ������

/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
	char* name;
	int age;

public:
	Person(const char* myname, int myage)
	{
		cout << "������ ȣ��" << endl;
		int len = strlen(myname) + 1;
		name = new char[len];  // new�����ڸ� ����߱⿡ ������ �߻��Ѵ�.
		strcpy(name, myname);
		age = myage;
	}
	Person(const Person& copy)                            // ���� ���縦 ���� ���������

	{	
		cout << "���� ���� ������ ȣ��" << endl;          // �̷��� ���� �����ڸ� ����� ������ ��ü �ּҸ� �����Ͽ� ���� ������� ������
		this->name = new char[strlen(copy.name) + 1];     // ���� ���翡�� �Ͼ�� ������ �ذ�ȴ�.
		strcpy(this->name, copy.name);
		this->age = copy.age;                             // ���ڿ��� �ƴϴϱ� �׳� this->age = copy.age;�� ó��
	}

	void ShowPersonInfo() const
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;

	}
	~Person()
	{
		delete[]name;
		cout << "called destructor!" << endl;

	}
};

int main(void) {                        // ���� ������ ������
	
	Person man1("Lee Chan Gyu", 26);    // stack ������ ����Ǿ� �ִ�.
	Person man2 = man1;                 // man2�� man1�� �����Ѵ�.
	man1.ShowPersonInfo();              // man1 �� ����Ѵ�.
	man2.ShowPersonInfo();              // man2 �� ����Ѵ�.
								        // �Ҹ��ڰ� man1 �� �Ҹ��Ų��.
	                                    // man2 �� man1�� �ִ� ����� ������ ����Ű�� �ִ�.
									    //  -> �׷��� �Ҹ��� �ȿ� ���Ե� ������ ��µ��� �ʴ´�.
									    
									    // ��, ������ �߻��Ѵ�. 
	return 0;
}
*/