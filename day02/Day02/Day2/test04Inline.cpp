// date : 20240222
// file : 4.cpp
// desc : 인라인 함수 : 코드 부분에 함수가 들어왔다.


/*
#include <iostream>

using namespace std;

inline int SQUARE(int x) { // 문법적으로 지원을 안했다면 #define SQUARE(x) ((x) * (x))을 통해 만들었어야 함
	return x * x;          // 그렇다고 해서 무조건 인라인 함수로 사용되는 것이 아니라 컴퓨터가 판단해 적용해준다.
}

int main() {

	cout << SQUARE(5) << endl;
	cout << SQUARE(12) << endl;

	return 0;
}
*/