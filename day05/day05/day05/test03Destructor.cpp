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
	Person(const char* myname, int myage) // 입력 2개를 갖는생성자
	{
		int len = strlen(myname) + 1;     // strlen()은 문자열의 길이를 구하는 함수 문자열임을 표시하기 위해 맨 뒤에 null을 하나 넣어준다(+1).
		name = new char[len];             // 문자열을 heap 영역에 저장하려면 우선 얼마만큼의 크기를 할당받아야 하는지를 알아야 한다.
		strcpy(name, myname);             
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~Person() { // 소멸자
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