// date : 20240228
// desc : Call - by - value인 경우

/*
#include <iostream>

int func(int a) {         // 2. a에 들어가는 '10'은 12행의 '10'과 서로 다른 것이다. (복사하여 사용하기에)
	a = 10 + a;          
	return a;             // 3. a = 10 + a 를 통해 10 + 10 = 20이 반환된다.
}

int num = 10;             // 1. num에는 10이 들어가 있다.
int res = func(num);      // 4. 반환된 '20'과 8행의 '20'은 서로 다른 것이다. (복사하여 사용하기에)

int main(void) {

	return 0;
}
*/