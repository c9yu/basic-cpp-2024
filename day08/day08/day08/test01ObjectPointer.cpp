/*
#include <iostream>
// �θ�� �ڽ��� ����ų �� ������, �ڽ��� �ȵ�~!!
// �θ� Ÿ���� ��ü �����ʹ� �ڽ� ��ü�� ����ų �� �ִ�.

// Person* ptr;				// Person Ÿ���� ��ü ������ ����
// ptr = new Person();		// �� ������ Person�̶� ��ü�� �����Ͽ� �� �ּҰ��� ���� ������ �ִ� ������ ���� ptr�� ����

// C++���� AAA�� ������ ������ AAA��ü �Ǵ� AAA�� ���� Ȥ�� ���������� ����ϴ� ��� ��ü�� ����ų �� �ִ�.(��ü�� �ּҰ��� ������ �� �ִ�.)

using namespace std;

class Person
{
public:
	void Sleep()
	{
		cout << "Sleep" << endl;
	}
};

class Student : public Person
{
public:
	void Study()
	{
		cout << "Study" << endl;
	}
	void Sleep()
	{
		cout << "Student Sleep" << endl;
	}
};

class PartTimeStudent : public Student
{
public:
	void Work()
	{
		cout << "Work" << endl;
	}
};

int main(void)
{
	// Student* ptr0 = new Student();		// ������ Ÿ������ ����ϴ� ���� ��Ģ�̴�.

*/
	/*
	�θ� Ÿ���� ��ü �����ͷ� �ڽ� ��ü�� ����ų �� �ִ�!
	������ �ڽ� Ÿ���� ��ü �����ͷ� �θ� ��ü�� ����ų �� ����.
	�׸��� ������ ��ü �������� Ÿ���� ������!!!!!! �׷��� ptr1->Sleep(); ���� �� Student Ŭ������ Sleep()�� �ƴ϶� Person Ŭ������ Sleep()
	*/

/*
	Person* ptr1 = new Student();			// Student�� Person�� ���, Person�� ������ ������ Student ��ü�� ����ų �� ����
	Person* ptr2 = new PartTimeStudent();	// PartTimeStudent�� Person�� ���� ���!, Person�� ������ ������ PartTimeStudent ��ü�� ����ų �� ����
	Student* ptr3 = new PartTimeStudent();	// PartTimeStudent�� Student�� ���, Student�� ������ ������ PartTimeStudent ��ü�� ����ų �� ����
	ptr1->Sleep();
	ptr2->Sleep();
	ptr3->Study();
	delete ptr1;
	delete ptr2;
	delete ptr3;
	return 0;
}
*/


