// date : 20240229
// desc : Ŭ���� ����, ���� ����

/*
#include <iostream>
#include <cstring>

using namespace std;

class Person {
private:
	char* name;
	int age;

public:
	Person(const char* myname, int myage)
	{
		cout << "������ ȣ��" << endl;
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	Person(const Person& copy)
	{
		cout << "���� ���� ������ ȣ��" << endl;
		this->name = new char[strlen(copy.name) + 1];
		strcpy(this->name, copy.name);
		this->age = copy.age;
	}

void PersonInfo() 
	{
		cout << "�̸�: " << name << ", ����: " << age << endl;
	}
~Person(){
	delete[]name;
	cout << "�Ҹ��� ȣ��" << endl;

}
};



int main(void) {

	Person p("������", 25);
	p.PersonInfo();

	Person copyp(p);
	copyp.PersonInfo();

	return 0;
}
*/