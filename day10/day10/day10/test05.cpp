/*
#include <iostream>

int main(void)
{
    int arr[5] = { 1,2,3,4,5 };                // int�� �迭����
    int* parr = arr;                           // �迭�� �̸��� �ּ��̴�.

    printf("arr �ּ�: %p\n", arr);             // arr�� �ּҸ� ����Ѵ�.
    printf("arr ũ��: %d\n", sizeof(arr));     // int�� ũ�� 4 X (���� ����: 5) = 20byte

    printf("arr[0] �ּ�: %p\n", &arr[0]);      // ù��° ���� �ּ�
    printf("arr[1] �ּ�: %p\n", &arr[1]);      // �ι�° ���� �ּ�
    printf("arr + 1: %p\n", arr + 1);

    //===================================================================================

    printf("parr�� �ּ�: %p\n", &parr);   
    printf("parr ������: %p\n", parr);         // �迭 arr�� �ּҸ� �����ϰ� �ִ�.
    printf("parr + 1: %p\n", parr + 1);
    printf("parr[0]: %d\n, *pa: %d\n, arr[0] %d\n", parr[0], *parr, arr[0]);

    // %p : �ּҸ� ���
    // %d : ���� ���·� ���

    return 0;
}
*/