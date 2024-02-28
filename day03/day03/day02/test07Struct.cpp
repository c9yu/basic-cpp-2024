// date : 20240223
// file : test05Struct.cpp
// desc : C++에서의 구조체

/*
#include <iostream>
using namespace std;

class human {			// 구조체 형태 : struct (이름){변수들} : 우리가 만든 사용자 정의 자료형
public:
	char name[20];              // name이라는 속성(멤버변수)를 만든다. (name, age, job)
	int age;
	char job[20];

	void showHuman() {          // 멤버 함수 : 기능을 담당한다. 구조체 안에 소속되었으므로 입력을 따로 받을 필요가 없다.
		printf("name: %s, age: %d, job: %s\n", name, age, job);
	}

} Human;                        // typedef를 통해 별명(Human)을 만들어 앞으로 human 구조체를 Human으로 사용하겠다.



int main(void) {

	int a = 10; // 왜 들어갔는가? : 일반 변수와 비교하기 위함
	//human h1 = { "홍길동", 50, "의적" }; // Human 타임의 변수를 선언하고, 초기화를 시킨다.
	//h1.showHuman();
	human h1 = { "이깜보", 11, "홈 프로텍터" };
	h1.showHuman();

	return 0;
}
*/