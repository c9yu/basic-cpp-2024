// date : 20240223
// file : test02NewDelete.cpp
// desc : New, Delete

/*
C���� �޸�
1. ���� : ��������, �Ű�����
2. heap : ����ڿ��� �Ҵ�� ����
	����� �Ϸ��� malloc()(C++ : new)���� �Ҵ��� �޴´�. 
		- free()(C++ : delete)�� ��ȯ
3. data : �Լ�, ��������, ���, ���ڸ��ͷ�

*/

/*
�迭 - for��
�迭�� �̸� - �ּ�
*/

/*

#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

char* MakeStrAdr(int len) {
	char* str = (char*)malloc(sizeof(char) * len); // C:heap������ 20Byteũ��� �޸� �Ҵ� (len �� : 20)
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