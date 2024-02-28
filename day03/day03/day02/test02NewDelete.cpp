// date : 20240223
// file : test02NewDelete.cpp
// desc : New, Delete

/*
C에서 메모리
1. 스택 : 지역변수, 매개변수
2. heap : 사용자에게 할당된 영역
	사용을 하려면 malloc()(C++ : new)으로 할당을 받는다. 
		- free()(C++ : delete)로 반환
3. data : 함수, 전역변수, 상수, 문자리터럴

*/

/*
배열 - for문
배열의 이름 - 주소
*/

/*

#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

char* MakeStrAdr(int len) {
	char* str = (char*)malloc(sizeof(char) * len); // C:heap영역에 20Byte크기로 메모리 할당 (len 값 : 20)
	printf("char size : %llu\n", sizeof(char));
	return str;
}

int main(void) {
	
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	free(str);
	return 0;
}
*/