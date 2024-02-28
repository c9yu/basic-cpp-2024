// date : 20240222
// file : test13.cpp
// desc : swap 함수 문제

/*
#include <iostream>
using namespace std;

void swap(int *aa, int *ab) { // 주소를 받을 수 있는 포인터 변수를 선언
	

	int temp; // 주소의 데이터를 참조
	temp = *aa;

	*aa = *ab;
	*ab = temp;
	
}


int main() {
	
	int a = 10; // 지역변수
	int b = 20;


	cout << "before: " << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;



	swap(&a, &b); // 변수의 주소를 전달

	cout << "after: " << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	return 0;
}
*/

/*
A & B  : 비트연산자 : A와 B를 논리곱 연산하라
A && B : 논리연산자 : A가 참이고 B도 참인 경우 결과가 참, 2개다 1일때만 리턴시켜 준다

= 를 기준으로 오른쪽에 있는 값 즉,대입하는 값을 리터럴이라고 한다.

	- 포인터 변수 선언

int* ptr : 변수 선언 형태에 *가 들어갔다면 포인터 변수 선언임을 기억하자
           포인터 변수 안에는 주소값만 들어갈 수 있다.
		   int* ptr = &num1; 이 되어야 한다.

	- 참조자 변수 선언
int & num2 = num1 : 의 경우 참조자 변수 선언에 해당된다.
*/

