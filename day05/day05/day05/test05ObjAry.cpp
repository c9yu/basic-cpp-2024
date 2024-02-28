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
		cout << "이름: " << name << ", ";
		cout << "나이: " << age << endl;

	}
	~Person()
	{
		delete[]name;
		cout << "called destructor!" << endl;

	}
};

int main(void)
{
	Person parr[3];  // 객체 배열
	char namestr[100];  // 문자 배열
	char* strptr;  // char 타입의 포인터 변수
	int age;
	int len;

	for (int i = 0; i < 3; i++)
	{
		cout << "이름: ";
		cin >> namestr;
		cout << "나이: ";
		cin >> age;
		len = strlen(namestr) + 1;
		strptr = new char[len];
		strcpy(strptr, namestr);

		parr[i].SetPersonInfo(strptr, age); // 힙영역에 객체를 생성한다.

	}
	parr[0].ShowPersonInfo(); // 객체 포인터를 가지고 멤버에 접근한다.
	parr[1].ShowPersonInfo();
	parr[2].ShowPersonInfo();

	delete parr[0]; // delete구문을 통해 동적할당을 해제해 준다.
	delete parr[1];
	delete parr[2];



	return 0;
}
*/
/*
- 포인터 배열
포인터를 저장하는 배열

- 배열 포인터
배열을 저장하는 포인터
*/