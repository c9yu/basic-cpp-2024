// date : 20240222
// file : test09.cpp
// desc : 전역변수 지역변수

/*
#include <iostream>
using namespace std;

int global = 100; // 전역변수 - 프로그램 전체에서 사용가능
int global1 = 200;

int main(void) 
{

	int val = 100; // 지역변수 - 선언된 범위에서만 사용가능
	//global = 200;
	
	int global1 = 300;

	cout << "전역 변수 global: " << global << endl;
	cout << "지역 변수: " << val << endl;

	cout << "전역 변수 global1: " << global1 << endl; // 지역변수와 이름이 동일할 경우는 전역변수는 가려진다 즉, 지역변수가 우선

	return 0;
}

void func() {

	int val = 0; // main에서 사용된 val은 지역변수이므로 여기의 val과는 서로 다른 val이다.
	global = 10;
	global1 = 10;
	val = 10; // main에서 사용된 val은 지역변수 이므로 다시 한번 int val = 0;을 통해 변수를 선언해주어야 함
}
*/