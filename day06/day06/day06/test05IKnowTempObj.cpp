// date : 20240228
// desc : 임시객체의 확인

/*
#include <iostream>
using namespace std;

class Temporary
{
private:
	int num;

public:
	Temporary(int n) : num(n)
	{
		cout << "create obj: " << num << endl;
	}
	~Temporary()
	{
		cout << "destroy obj : " << num << endl;
	}
	void ShowTempInfo()
	{
		cout << "My num is " << num << endl;
	}

};

int main(void) {

	Temporary(100);                                         // 원래 같았으면 'Temporary t(100)'와 같이 '자료형 객체이름(입력)' 의 형태일텐데
	                                                        // 객체 이름이 없다. 즉, 임시객체이다.
	cout << " ********** after make!" << endl << endl;

	Temporary(200);
	cout << " ********** after make!" << endl << endl;

	const Temporary& ref = Temporary(300);                  // 임시객체는 참조가 불가능 한데, const를 붙여 상수화 시키면 참조(&)가 가능하게 한다.
	cout << "********** end of main!" << endl << endl;

	return 0;
}
*/