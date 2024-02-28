// date : 20240227
// desc : 복사생성자 개념 정리

/*
복사 생성자 : 객체를 복사할 때 호출되는 생성자

따라서 복사할 객체를 입력으로 가져야 하는데, 이 때 원본 객체의 ★참조(&)★를 입력으로 받는다.

참조연산자(&)를 사용할 경우 별명을 만들어 사용하니 별도의 메모리가 필요 없고,
만일 참조연산자를 사용하지 않을 경우 새로운 객체를 만들어 사용해야 하니 다시 복사 생성자가 호출된다.
*/

/*
#include <iostream>
using namespace std;

class A {
public:
	A() {
		cout << "디폴트 생성자 호출" << endl;
	}
	A(int n) {
		cout << "A(int n) 생성자 호출" << endl;
	}
	A(const A& r) {    // 복사 생성자, 원본이므로 const를 붙여준다.
		cout << "A(const A& r) 생성자 호출" << endl;
	}
};

void func(int a) {
	a++;
	cout << a << endl;
}

int main(void) {
	
	int n = 10;
	A obj1;            // 디폴트 생성자로 객체 생성
	A obj2(10);        // 입력 하나 가지는 생성자 호출
	A obj3(obj2);       // 복사 생성자 호출
	func(n);

	return 0;
}
*/