// date : 20240222
// file : test13.cpp
// desc : swap �Լ� ����

/*
#include <iostream>
using namespace std;

void swap(int *aa, int *ab) { // �ּҸ� ���� �� �ִ� ������ ������ ����
	

	int temp; // �ּ��� �����͸� ����
	temp = *aa;

	*aa = *ab;
	*ab = temp;
	
}


int main() {
	
	int a = 10; // ��������
	int b = 20;


	cout << "before: " << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;



	swap(&a, &b); // ������ �ּҸ� ����

	cout << "after: " << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	return 0;
}
*/

/*
A & B  : ��Ʈ������ : A�� B�� ���� �����϶�
A && B : �������� : A�� ���̰� B�� ���� ��� ����� ��, 2���� 1�϶��� ���Ͻ��� �ش�

= �� �������� �����ʿ� �ִ� �� ��,�����ϴ� ���� ���ͷ��̶�� �Ѵ�.

	- ������ ���� ����

int* ptr : ���� ���� ���¿� *�� ���ٸ� ������ ���� �������� �������
           ������ ���� �ȿ��� �ּҰ��� �� �� �ִ�.
		   int* ptr = &num1; �� �Ǿ�� �Ѵ�.

	- ������ ���� ����
int & num2 = num1 : �� ��� ������ ���� ���� �ش�ȴ�.
*/

