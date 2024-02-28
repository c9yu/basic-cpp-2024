/*#include <iostream>

int global = 100;

void func() {
	int a;
	a = 100;
}

int main(void) {
	int a;
	int val1;
	std::cout << "첫번째 숫자입력:"; // cout : 출력
	std::cin >> val1;                // cin  : 입력

	int val2;
	std::cout << "두번째 숫자입력:";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "덧셈 결과: " << result << std::endl;
	val1 = 100;
	return 0;
}

/* val1 = 100; 은 사용 할 수 없다.
지역 변수 = 로컬 변수 : 선언되어진 범위 안에서만 사용이 가능(static 영역에 저장)
지역변수는 스코프가 있어야 함




*/