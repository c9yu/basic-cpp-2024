// date : 20240227
// desc : 복사생성자 개념 정리

/*
#include <iostream>
using namespace std;

class AA {
	int a;
	int b;

public :
	AA(int a, int b) {
		this->a = a;
		this->b = b;
	}
	void AAinfo() {
		cout << a << " " << b << endl;
	}
	
};

int main(void) {

	AA obj1(10, 20);
	obj1.AAinfo();

	AA obj2(obj1); // 복사 생성자를 만들지 않았지만, 컴파일러가 복사 생성자를 자체적으로 처리해줘서 정상출력되었다.
	obj2.AAinfo();

	return 0;
}
*/