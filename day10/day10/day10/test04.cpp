// <�ǹ��� ����>
// �迭�� �̸��� �迭�� ���� �ּ��̴�.
// int ary[3];  // �迭����ο��� �迭 �ε����� �ִ� ���ڴ� ���� ũ��
// ary[2];      // �ڵ� ���࿡�� �迭 �ε����� �ִ� ���ڴ� �� ��ȣ�� ��Ÿ����.

// <1, 2�� ���� �ǹ��̴�>
// 1. ary[0];             // 0����, ù��° ��, �迭�� ���� �ּ�
// 2. *(ary + 0) = 10;    // *(�迭�� ���� �ּ� + 0) = 10

// ��, *(ary + 1) = 20; == ary[1] = 20; // 1���濡�� 20�� ����־��.

// ary�� �ּҰ� 0x0011�̶�� ���� ��, 1����(�ι�° ��)�� �ּҴ� 0x0015�̴�.
// ��, �� �ϳ��� 4byte�� �����Ѵ�.

// <�ǹ��� ����>
// int* p;      // ���� �������Դϴ�. 
// *p;          // �����ϼ���
