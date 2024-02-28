// date : 20240222
// file : test10.cpp
// desc : 포인터 변수와 주소값

/*
#include <iostream>

using namespace std;

int main()
{
	const int num = 10;           //num 변수를 상수화 시킨다.
	//num = 100;                  // num이 상수이므로 변경할 수 없다.

	int num1 = 10;
	int *pnum1;                   // *를 통해 포인터 변수 pnum1 선언
								  // 변수 선언상의 *는 아무 의미 없지만, 표기해주지 않으면 &를 사용할 때에 어디서 참조받을지 모른다

	pnum1 = &num1;                // 변수 num1의 주소를 포인터 변수 pnum1에 저장한다.

	cout << "num에 저장된 값" << num << endl;
	cout << "num1에 저장된 값" << num1 << endl;
	cout << "num1의 주소값" << &num1 << endl;
	cout << "pnum1에 저장된 값" << pnum1 << endl;
	cout << "pnum1에 저장된 데이터" << *pnum1 << endl; // 포인터 변수에 *를 붙이면 저장된 놈의 데이터가 출력된다
													   // 간접참조 연산자 *

	return 0;
}
*/

/*
 C에서 메모리
 1. 스택 : 지역변수 ,매개변수
 2. heap : 사용자에게 할당된 영역
	사용을 하려면 malloc()으로 할당을 받는다 - free() 반환
	- 사용하지 않는 것에 공간을 할당받아 둘 수는 없으니까 꼭 반환해주자
 3. data : 함수, 전역변수, 상수, 문자 리터럴
*/