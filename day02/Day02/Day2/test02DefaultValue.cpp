// date : 20240222
// file : 2.cpp
// desc : 매개변수2

/*

#include <iostream>
using namespace std;

int Adder(int num1 = 1, int num2 = 2); // 함수 선언


int main(void) { // 함수 호출: Adder(), 함수를 호출하기 위해서는 선언을 먼저 해야한다.
	cout << Adder() << endl;
	cout << Adder(5) << endl; // 매개변수가 2개(입력이 2개)인데 하나만 주게되는 경우, 첫번째(왼쪽부터) 값이 변경된다.
	cout << Adder(3, 5) << endl;

	return 0;
}
*/


/*
위에서 부터 실행이 되므로, 
함수의 정의를 main함수(호출하는) 밑에서 작성하는 경우 
main함수 위에 미리 함수 선언을 해줘야한다.

함수 선언, main 함수, 함수 정의 형태로 사용한다.
*/

/*
int Adder(int num1, int num2) { // 함수 정의
	return num1 + num2;
}
*/


// 클래스 안에 들어가는 함수를 '메서드'라고 부른다.