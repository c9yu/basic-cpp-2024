/*#include <iostream>

int global = 100;

void func() {
	int a;
	a = 100;
}

int main(void) {
	int a;
	int val1;
	std::cout << "ù��° �����Է�:"; // cout : ���
	std::cin >> val1;                // cin  : �Է�

	int val2;
	std::cout << "�ι�° �����Է�:";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "���� ���: " << result << std::endl;
	val1 = 100;
	return 0;
}

/* val1 = 100; �� ��� �� �� ����.
���� ���� = ���� ���� : ����Ǿ��� ���� �ȿ����� ����� ����(static ������ ����)
���������� �������� �־�� ��




*/