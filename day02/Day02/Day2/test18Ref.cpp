// date : 20240222
// file : test18Ref.cpp
// desc : �߸��� �������� ����

#include <iostream>
using namespace std;

int& FuncOne(int n) {        // n = 10

	int num = 20;            // num = 20
	num += n;                // num = 30 (10 + 20)
	return num;              // return num : 30�� ��ȯ,
	                         //              �׷��� FuncOne �Լ��� ����Ǹ鼭 ����� ������.
}

int main(void) {
	int& ref = FuncOne(10);
	ref = 10;

	return 0;
}

/*
���������� ������ �� �� ������, ����� �� ��Ȳ�� ���� �ƴϴ�.
*/

