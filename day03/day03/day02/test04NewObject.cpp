// date : 20240223
// file : test04NewObject.cpp
// desc : NewObject

/*
#include <iostream>
#include<stdlib.h>
using namespace std;

class Simple { 
public:
	Simple() {              // Simple()는 함수, Class 안에 있는 함수를 매써드  라고 하며,
							// 그 중에서도 Class 이름과 함수 이름이 같으면 생성자 함수 라고 한다.
		cout << "I'm simple constructor!" << endl;
	}
};

int main(void) {

	cout << "case 1: ";
	Simple* sp1 = new Simple;  // 포인터 변수를 선언할 때는 (자료형)* (변수명)의 형태가 되는데
	                           // 이 때 Class 또한 새로운 타입(자료형)이 된다.
	                           // new Simple : Simple이라는 이름의 객체를 생성
	cout << "case 2: ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1); 

	cout << endl << "end of main" << endl;
	delete sp1;
	free(sp2);
	return 0;
}
*/

/*
new의 경우 새로운 객체를 생성하는 것이 가능
malloc의 경우 새로운 객체를 생성하는 것은 불가능

new의 경우 기본 자료형과 사용자 생성 자료형 둘 다에 사용 가능
malloc의 경우 기본 자료형에만 사용 가능

그래서 case2가 출력되지 않는 것
*/