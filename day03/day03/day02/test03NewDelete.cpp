// date : 20240223
// file : test03NewDelete.cpp
// desc : New, Delete

/*
#include <iostream>
using namespace std;

char* MakeStrAdr(int len)
{
	// char * str = (char*)malloc(sizeof(char)*len);
	char* str = new char[len]; // C++ : �������� len ũ�⸸ŭ �޸� ���� �Ҵ�
	return str;
}

int main(void) {

	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	// free(str);
	delete[]str; // C++ : �Ҵ���� �޸𸮸� ��ȯ

	return 0;
}
*/