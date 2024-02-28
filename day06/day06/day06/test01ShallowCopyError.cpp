// date : 20240228
// desc : 디폴트 복사생성자의 문제점

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
		cout << "생성자 호출" << endl;
		int len = strlen(myname) + 1;
		name = new char[len];  // new연산자를 사용했기에 문제가 발생한다.
		strcpy(name, myname);
		age = myage;
	}
	Person(const Person& copy)                            // 깊은 복사를 위한 복사생성자

	{	
		cout << "깊은 복사 생성자 호출" << endl;          // 이렇게 복사 생성자를 만들면 기존의 객체 주소를 복사하여 새로 만들었기 때문에
		this->name = new char[strlen(copy.name) + 1];     // 얕은 복사에서 일어나는 문제가 해결된다.
		strcpy(this->name, copy.name);
		this->age = copy.age;                             // 문자열이 아니니까 그냥 this->age = copy.age;로 처리
	}

	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;

	}
	~Person()
	{
		delete[]name;
		cout << "called destructor!" << endl;

	}
};

int main(void) {                        // 얕은 복사의 문제점
	
	Person man1("Lee Chan Gyu", 26);    // stack 영역에 저장되어 있다.
	Person man2 = man1;                 // man2에 man1을 복사한다.
	man1.ShowPersonInfo();              // man1 을 출력한다.
	man2.ShowPersonInfo();              // man2 를 출력한다.
								        // 소멸자가 man1 을 소멸시킨다.
	                                    // man2 는 man1이 있던 사라진 공간을 가리키고 있다.
									    //  -> 그래서 소멸자 안에 포함된 구문이 출력되지 않는다.
									    
									    // 즉, 문제가 발생한다. 
	return 0;
}
*/