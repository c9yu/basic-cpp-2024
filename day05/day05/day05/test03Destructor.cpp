// date : 20240227
// desc : Destructor


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
	Person(const char* myname, int myage) // �Է� 2���� ���»�����
	{
		int len = strlen(myname) + 1;     // strlen()�� ���ڿ��� ���̸� ���ϴ� �Լ� ���ڿ����� ǥ���ϱ� ���� �� �ڿ� null�� �ϳ� �־��ش�(+1).
		name = new char[len];             // ���ڿ��� heap ������ �����Ϸ��� �켱 �󸶸�ŭ�� ũ�⸦ �Ҵ�޾ƾ� �ϴ����� �˾ƾ� �Ѵ�.
		strcpy(name, myname);             
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
	~Person() { // �Ҹ���
		delete[]name;
		cout << "called destructor!" << endl;

	}

};

int main(void)
{
	Person man1("Lee Chan Gyu", 26);
	Person man2("Jang dong gun", 41);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}
*/