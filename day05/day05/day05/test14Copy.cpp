// date : 20240227
// desc : 복사생성자 개념 정리

/*
컴퓨터가 기본적으로 제공하는 생성자:

디폴트 생성자, 복사 생성자
*/


#include <iostream>

using namespace std;

class AA {
	int a;
	int b;

public: 
	AA(int a, int b) {
		this->a = a;
		this->b = b;
	}


	AA(const AA& r) {           // 복사 생성자
		this->a = r.a;          // 26행, 27행이 빠지면 복사된 값에 문제가 발생한다.
		this->b = r.b;
	}
	void AAinfo(){
		cout << a << " " << b << endl;
	}
	
	
};

int main(void) {

	AA obj1(10, 20);
	obj1.AAinfo();

	AA obj2(obj1);
	obj2.AAinfo();


	return 0;
}