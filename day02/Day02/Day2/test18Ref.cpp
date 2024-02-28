// date : 20240222
// file : test18Ref.cpp
// desc : 잘못된 지역변수 참조

#include <iostream>
using namespace std;

int& FuncOne(int n) {        // n = 10

	int num = 20;            // num = 20
	num += n;                // num = 30 (10 + 20)
	return num;              // return num : 30을 반환,
	                         //              그러나 FuncOne 함수가 종료되면서 사라져 버린다.
}

int main(void) {
	int& ref = FuncOne(10);
	ref = 10;

	return 0;
}

/*
정상적으로 동작은 할 수 있으나, 제대로 된 상황은 절대 아니다.
*/

