// date : 20240227
// desc : Dynamic


/*
#include <iostream>
using namespace std;

int main()
{
	cout << "int size: " << sizeof(int) << endl;
	int * pi = new int; // new �����ڸ� ���ؼ� heap������ int(4byte)ũ�⸸ŭ �޸� ������ �Ҵ�ް�, 
	                    // �Ҵ���� �޸��� �ּҸ� ���Ͻ����ش�.

	*pi = 10; // ����Ʈ�� ��Ÿ���� �ִ°��� ��������� 10�� �־��!
			  // int *�� ������ ������ �׳� int������ ���� ���� �� ����. ��, *pi = 10�� ���·� ���

	cout << "Pi�� ����Ű�� ���� ����� ��: " << *pi << endl;

	delete pi; // �� ������ �Ҵ�޾Ҵ� ����(���� �Ҵ���� �޸� ����)�� �������� �ش�.

	int* pary = new int[10]; // 
	for (int i = 0; i < sizeof(pary); i++) {
		pary[i] = i + 10; // �迭�� �� �濡 ����(���)���� ���� �ִ´�. ex) pary[0] = 10
	}

	for (int i = 0; i < sizeof(pary); i++) {
		printf("pary[%d] : %d\n", i, pary[i]);
	}

	delete[]pary; // �迭�� �����Ҵ��� �޸𸮸� ��ȯ�Ѵ�.

	return 0;
}
*/