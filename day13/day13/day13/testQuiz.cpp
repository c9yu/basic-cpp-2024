#include <iostream>
using namespace std;


int main() {
    char ary[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    const int length = sizeof(ary) / sizeof(ary[0]);

    cout << "원본 배열: ";
    for (int i = 0; i < length; i++) {
        cout << ary[i] << " ";
    }
    cout << endl;

    int i = 0;
    while (i < length / 2) {
        // 배열의 앞뒤를 서로 바꿉니다.
        char temp = ary[i];
        ary[i] = ary[length - 1 - i
        ];
        ary[length - 1 - i] = temp;

        ++i;
    }

    cout << "바뀐 배열: ";
    for (int j = 0; j < length; ++j) {
        cout << ary[j] << " ";
    }
    cout << endl;

    return 0;
}
