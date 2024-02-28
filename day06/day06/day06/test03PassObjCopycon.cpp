// date : 20240228
// desc : PassObjCopycon

/*
#include <iostream>

using namespace std;

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) : num(n)
	{}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	void ShowData()            // 멤버 함수 --> 객체 생성하고 사용이 가능하다. (객체를 생성해야만 멤버 함수에 접근 가능)
	{
		cout << "num: " << num << endl;
	}
};

void SimpleFunObj(SoSimple ob) // SimpleFunObj라는 함수는 어디에도 소속되어 있지 않으니, 전역함수이다. (누구든 접근 가능)
{
	ob.ShowData();
}


int main(void) {

	SoSimple obj(7);
	cout << "함수호출 전" << endl;
	SimpleFunObj(obj);
	cout << "함수호출 후" << endl;


	return 0;
}
*/