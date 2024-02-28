// date : 20240227
// desc : ObjAry


/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

class Human {
private:
	char name[30]; // 2개의 입력값을 받는다.
	int age;

public:
	Human(const char* pname, int page) {        // 생성자
		cout << "생성자 호출" << endl;
		strcpy(name, pname);
		this->age = page;

	}
	void HumanInfo() {                          // 출력
		cout << "이름: " << name << " ";
		cout << "나이: " << age << endl;
	}
	
	~Human() {                                  // 소멸자
		cout << "소멸자 호출" << endl;
	}
};

int main(void) {

	Human h[3] = { Human("홍길동", 50), Human("김철수", 40), Human("김영희", 30) }; // 객체 배열

	for (int i = 0; i < 3; i++) { // i는 0~2까지 1씩 증가
		h[i].HumanInfo();
	}

	Human* h1 = new Human("가나다", 50); // new를 통해 추가
	h1->HumanInfo(); // h1이 주소형식이므로 '->' 를 사용하여 접근해야 한다.
	//h1.HumanInfo;  // '. ' 를 사용시 에러가 발생

	delete h1; // 동적할당 해제

	return 0;
}
*/