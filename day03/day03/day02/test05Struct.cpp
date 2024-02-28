// date : 20240223
// file : test05Struct.cpp
// desc : C에서의 구조체

/*
C에서는 멤버 변수만 가질 수 있다.
*/


/*
#include <stdio.h>
using namespace std;

typedef struct human {			// 구조체 형태 : struct (이름){변수들} : 우리가 만든 사용자 정의 자료형
	char name[20];              // name이라는 속성(멤버변수)를 만든다. (name, age, job)
	int age;
	char job[20];

} Human;                        // typedef를 통해 별명(Human)을 만들어 앞으로 human 구조체를 Human으로 사용하겠다.

void showHuman(Human h) {
	printf("name: %s, age: %d, job: %s\n", h.name, h.age, h.job);
}

int main(void) {

	int a = 10;
	human h1 = { "홍길동", 50, "의적" }; // Human 타임의 변수를 선언하고, 초기화를 시킨다.
	showHuman(h1);

	return 0;
}
*/