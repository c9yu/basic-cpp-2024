/*
#include <iostream>

int main(void)
{
    int arr[5] = { 1,2,3,4,5 };                // int형 배열선언
    int* parr = arr;                           // 배열의 이름은 주소이다.

    printf("arr 주소: %p\n", arr);             // arr의 주소를 출력한다.
    printf("arr 크기: %d\n", sizeof(arr));     // int의 크기 4 X (방의 개수: 5) = 20byte

    printf("arr[0] 주소: %p\n", &arr[0]);      // 첫번째 방의 주소
    printf("arr[1] 주소: %p\n", &arr[1]);      // 두번째 방의 주소
    printf("arr + 1: %p\n", arr + 1);

    //===================================================================================

    printf("parr의 주소: %p\n", &parr);   
    printf("parr 데이터: %p\n", parr);         // 배열 arr의 주소를 저장하고 있다.
    printf("parr + 1: %p\n", parr + 1);
    printf("parr[0]: %d\n, *pa: %d\n, arr[0] %d\n", parr[0], *parr, arr[0]);

    // %p : 주소를 출력
    // %d : 정수 형태로 출력

    return 0;
}
*/