// date : 20240223
// file : test04NewObject.cpp
// desc : NewObject

/*
#include <iostream>
#include<stdlib.h>
using namespace std;

class Simple { 
public:
	Simple() {              // Simple()�� �Լ�, Class �ȿ� �ִ� �Լ��� �Ž��  ��� �ϸ�,
							// �� �߿����� Class �̸��� �Լ� �̸��� ������ ������ �Լ� ��� �Ѵ�.
		cout << "I'm simple constructor!" << endl;
	}
};

int main(void) {

	cout << "case 1: ";
	Simple* sp1 = new Simple;  // ������ ������ ������ ���� (�ڷ���)* (������)�� ���°� �Ǵµ�
	                           // �� �� Class ���� ���ο� Ÿ��(�ڷ���)�� �ȴ�.
	                           // new Simple : Simple�̶�� �̸��� ��ü�� ����
	cout << "case 2: ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1); 

	cout << endl << "end of main" << endl;
	delete sp1;
	free(sp2);
	return 0;
}
*/

/*
new�� ��� ���ο� ��ü�� �����ϴ� ���� ����
malloc�� ��� ���ο� ��ü�� �����ϴ� ���� �Ұ���

new�� ��� �⺻ �ڷ����� ����� ���� �ڷ��� �� �ٿ� ��� ����
malloc�� ��� �⺻ �ڷ������� ��� ����

�׷��� case2�� ��µ��� �ʴ� ��
*/